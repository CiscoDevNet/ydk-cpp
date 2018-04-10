/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/

#include <cstdio>
#include <map>
#include <string.h>
#include <sstream>
#include <string>
#include <unistd.h>
#include <vector>

#include <curl/curl.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

#include "capabilities_parser.hpp"
#include "errors.hpp"
#include "ietf_parser.hpp"
#include "logger.hpp"
#include "netconf_tcp_client.hpp"


namespace ydk
{
static const long TIMEOUT = 6000L;
static const int EIGHT_K = 8196;

static const char EOM_10[] = "]]>]]>";
static const char EOM_11[] = "\n##\n";
static const char LF_HASH[] = "\n#";
static const char LF[] = "\n";


static const std::map<const std::string, const std::string> PATTERN_MAP{{"&quot;", "\""},
                                                                       {"&amp;", "&"},
                                                                       {"&apos;", "'"},
                                                                       {"&lt;", "<"},
                                                                       {"&gt;", ">"},
                                                                       {"\n##\n", ""}};

static const std::string NETCONF_11("urn:ietf:params:netconf:base:1.1");

static const char *HELLO_11 = "\n<hello xmlns=\"urn:ietf:params:xml:ns:netconf:base:1.0\">\n"
                              "<capabilities>\n"
                              "<capability>urn:ietf:params:netconf:base:1.1</capability>\n"
                              "</capabilities>\n"
                              "</hello>\n"
                              "]]>]]>";


static int wait_on_socket(curl_socket_t sockfd, int for_recv, long timeout_ms);
static bool ends_with_framing(const char* buf, size_t nread, int version);
static void xml_to_string(xmlDocPtr doc, xmlNodePtr root, std::string &out);
static xmlDocPtr get_xml_doc(const std::string &payload);
static std::string trim_chunk(std::string str);
static std::string trim_reply(std::string str);
static void replace(std::string& subject, const std::string& search, const std::string& replace);


NetconfTCPClient::NetconfTCPClient(const std::string& username, const std::string& password,
                                   const std::string& address, int port)
    : NetconfClient(),
      username(username), hostname(address), password(password), port(port), msgid(0)
{
    initialize(address, port);
}

NetconfTCPClient::~NetconfTCPClient()
{
    curl_easy_cleanup(curl);
    curl_global_cleanup();
}

void NetconfTCPClient::initialize(const std::string& address, int port)
{
    initialize_curl(address, port);
}

void NetconfTCPClient::initialize_curl(const std::string& address, int port)
{
    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (!curl)
    {
        throw(YClientError{"Unable to create curl environment."});
    }

    // curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); // uncomment for debugging
    curl_easy_setopt(curl, CURLOPT_URL, address.c_str());
    curl_easy_setopt(curl, CURLOPT_PORT, port);
    curl_easy_setopt(curl, CURLOPT_CONNECT_ONLY, 1L);

    CURLcode res;
    res = curl_easy_perform(curl);
    check_ok(res, "Connection failed: {}");

    // get socket descriptor
    // CURLINFO_LASTSOCKET is deprecated after curl >= 7.45.0 (470272)
    #if LIBCURL_VERSION_NUM >= 470272
    res = curl_easy_getinfo(curl, CURLINFO_ACTIVESOCKET, &sockfd);
    #else
    res = curl_easy_getinfo(curl, CURLINFO_LASTSOCKET, &sockfd);
    #endif

    check_ok(res, "Unable to retrieve sockfd: {}");
}

void NetconfTCPClient::init_capabilities()
{
    IetfCapabilitiesXmlParser xml_parser{};
    IetfCapabilitiesParser capabilities_parser{};
    server_capabilities = xml_parser.parse(hello_msg);

    bool found = false;
    for(auto const& cap: server_capabilities)
    {
        if (cap == NETCONF_11)
        {
            found = true;
            break;
        }
    }
    if (!found)
    {
        YLOG_ERROR("The device need to support NETCONF 1.1");
        throw(YClientError{"The device need to support NETCONF 1.1"});
    }
}

std::vector<std::string> NetconfTCPClient::get_capabilities()
{
    return server_capabilities;
}

std::string NetconfTCPClient::get_hostname_port()
{
    std::ostringstream os;
    os << hostname << "_" << port;
    return os.str();
}

int NetconfTCPClient::connect()
{

    char buf[EIGHT_K];
    size_t nread = 0;
    std::stringstream hello_ss;
    CURLcode res;

    for(;;)
    {
        bzero(&buf, sizeof(buf));
        nread = 0;
        res = curl_easy_recv(curl, buf, sizeof(buf)-1, &nread);

        check_timeout(res, 1, "Handshake failed, TCP client connect session timeout: {}");

        if (strncmp(buf, "Username: ", 10) == 0 || strncmp(buf, "Password: ", 10) == 0)
        {
            std::string value = strncmp(buf, "Username: ", 10) ? username : password;
            size_t value_len = value.size();
            send_value(value.c_str(), value_len);
        }
        else if(nread)
        {
            buf[nread] = '\0';
            hello_ss << buf;

            if (ends_with_framing(buf, nread, 11))
            {
                send_value(HELLO_11, strlen(HELLO_11));
                auto found = hello_ss.str().find(EOM_10);
                hello_msg = hello_ss.str().substr(0, found);
                YLOG_DEBUG("Received hello message from device:\n{}", hello_msg);
                break;
            }
        }
    }
    YLOG_INFO("Ready to communicate with {} via TCP", hostname);
    init_capabilities();

    connected = true;

    return EXIT_SUCCESS;
}

std::string NetconfTCPClient::execute_payload(const std::string & payload)
{
    if(!connected)
    {
        auto err_msg = "Could not execute payload. Not connected to " + hostname;
        throw(YClientError{err_msg});
    }
    send(payload);
    return recv();
}

std::string NetconfTCPClient::recv()
{
    auto reply = trim_reply(trim_chunk(recv_value()));
    return reply;
}

std::string NetconfTCPClient::recv_value()
{
    std::stringstream ss;
    char buf[EIGHT_K];
    CURLcode res;
    size_t nread = 0;
    size_t total_read = 0;
    bool found = false;

    for(;;)
    {
        do
        {
            bzero(&buf, sizeof(buf));
            nread = 0;
            res = curl_easy_recv(curl, buf, sizeof(buf)-1, &nread);
            buf[nread] = '\0';
            ss << buf;
            total_read += nread;
            found = ends_with_framing(ss.str().c_str(), total_read, 10);
        } while(!found
                && !wait_on_socket(sockfd, 1, TIMEOUT));

        if (nread == 0 && ss.str().size() != 0)
        {
            break;
        }

        if (ss.str().size() == 0)
        {
            // wait on socket
            unsigned int sleep_time = 1000;
            usleep(sleep_time);
        }
        else
        {
            check_ok(res, "TCP client error: {}");
        }
        YLOG_DEBUG("libcurl read {} bytes.\n", (curl_off_t)nread);
    }
    YLOG_DEBUG("TCP client received {} bytes:\n{}", ss.str().length(), ss.str());
    return ss.str();
}

void NetconfTCPClient::send(const std::string &payload)
{
    // add message id to payload
    auto new_payload = add_message_id(payload);
    YLOG_DEBUG("TCP client sent payload:\n{}", new_payload);
    // add chunk size
    std::ostringstream ss;
    ss << LF_HASH << new_payload.size() << LF << new_payload << EOM_11;
    send_value(ss.str().c_str(), ss.str().size());
}

void NetconfTCPClient::send_value(const char* value, size_t value_len)
{
    CURLcode res;
    size_t nsent = 0;
    size_t nsent_total = 0;
    do
    {
        nsent = 0;
        do
        {
            res = curl_easy_send(curl, value + nsent_total, value_len - nsent_total, &nsent);
            nsent_total += nsent;
            check_timeout(res, 0, "TCP client send_value session timeout: {}");
        } while (res == CURLE_AGAIN);

        check_ok(res, "TCP client error: {}");
        YLOG_DEBUG("libcurl sent {} bytes.\n", (curl_off_t)nsent);

    } while (nsent_total < value_len &&wait_on_socket(sockfd, 0, TIMEOUT));
    YLOG_DEBUG("TCP client sent total {} bytes:\n{}", nsent_total, value);
}

std::string NetconfTCPClient::add_message_id(const std::string &payload)
{
    msgid++;
    char msg_id_str[16];
    sprintf(msg_id_str, "%llu", msgid);

    auto doc = get_xml_doc(payload);
    auto cur = xmlDocGetRootElement(doc);
    xmlNewProp(cur, (const xmlChar *) "message-id", (const xmlChar *) msg_id_str);

    std::string new_payload;
    xml_to_string(doc, cur, new_payload);
    xmlFreeDoc(doc);

    return new_payload;
}

void NetconfTCPClient::check_ok(CURLcode res, const char* fmt)
{
    if (res != CURLE_OK)
    {
        YLOG_ERROR(fmt, curl_easy_strerror(res));
        throw(YClientError{curl_easy_strerror(res)});
    }
}

void NetconfTCPClient::check_timeout(CURLcode res, int for_recv, const char* fmt)
{
    if (res == CURLE_AGAIN && !wait_on_socket(sockfd, for_recv, TIMEOUT))
    {
        YLOG_ERROR(fmt, curl_easy_strerror(res));
        throw(YClientError(curl_easy_strerror(res)));
    }
}

// from libcurl examples
/* Auxiliary function that waits on the socket. */
static int wait_on_socket(curl_socket_t sockfd, int for_recv, long timeout_ms)
{
    struct timeval tv;
    fd_set infd, outfd, errfd;
    int res;

    tv.tv_sec = timeout_ms / 1000;
    tv.tv_usec= (timeout_ms % 1000) * 1000;

    FD_ZERO(&infd);
    FD_ZERO(&outfd);
    FD_ZERO(&errfd);

    FD_SET(sockfd, &errfd); /* always check for error */

    if(for_recv) {
        FD_SET(sockfd, &infd);
    }
    else {
        FD_SET(sockfd, &outfd);
    }
    /* select() returns the number of signalled sockets or -1 */
    res = select((int)sockfd + 1, &infd, &outfd, &errfd, &tv);
    return res;
}

static bool ends_with_framing(const char* buf, size_t nread, int version)
{
    const char* last_several = NULL;
    const char* framing = NULL;
    if (version == 10)
    {
        last_several = &buf[nread-4];
        framing = EOM_11;
    }
    else if(version == 11)
    {
        last_several = &buf[nread-6];
        framing = EOM_10;
    }
    return strcmp(last_several, framing) == 0;
}

static xmlDocPtr get_xml_doc(const std::string &payload)
{
    xmlDocPtr doc;
    doc = xmlReadMemory(payload.c_str(), strlen(payload.c_str()), "noname.xml", NULL, 0);
    if (doc == NULL) {
        YLOG_ERROR("Could not build payload");
        throw(YClientError{"Could not build payload"});
    }
    return doc;
}

static void xml_to_string(xmlDocPtr doc, xmlNodePtr root, std::string &out)
{
    xmlBufferPtr buf = xmlBufferCreate();
    if (buf != NULL)
    {
        xmlNodeDump(buf, doc, root, 0, 1);
        std::string tmp{reinterpret_cast<char*>(buf->content)};
        out = tmp;
        xmlBufferFree(buf);
    }
}

static std::string trim_chunk(std::string str)
{
    std::string ret;
    size_t start = 0;
    size_t end = 0;
    while((start = str.find('#', start)) && start != std::string::npos)
    {
        std::size_t num_end = str.find_first_not_of("0123456789", start+1);
        if (num_end == std::string::npos || str[num_end] != '\n')
        {
            start = num_end+1;
            if (num_end != std::string::npos && str[num_end] == '#')
                start += 1;
            end = start;
            continue;
        }
        auto len = std::stoi(str.substr(start+1, num_end-start-1));
        if(len)
        {
            ret.append(str.substr(num_end+1, len));
        }
        end = num_end+1+len;
        start = end;
    }
    return ret;
}

static std::string trim_reply(std::string str)
{
    for (auto val: PATTERN_MAP)
    {
        replace(str, val.first, val.second);
    }
    return str;
}

static void replace(std::string& subject, const std::string& search, const std::string& replace)
{
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos)
    {
         subject.replace(pos, search.size(), replace);
         pos += replace.size();
    }
}

}
