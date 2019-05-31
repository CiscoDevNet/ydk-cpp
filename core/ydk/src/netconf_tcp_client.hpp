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

#ifndef _YDK_NETCONF_TCP_CLIENT_H_
#define _YDK_NETCONF_TCP_CLIENT_H_

#include <map>
#include <string>
#include <vector>
#include <curl/curl.h>

#include "errors.hpp"
#include "netconf_client.hpp"

namespace ydk
{

class NetconfTCPClient : public NetconfClient
{

public:
    NetconfTCPClient(const std::string& username, const std::string& password,
                     const std::string& address, int port);
    virtual ~NetconfTCPClient();

    int connect();
    virtual std::string execute_payload(const std::string & payload);
    virtual std::vector<std::string> get_capabilities();
    virtual std::string get_hostname_port();

    void perform_session_check(const std::string & message);

private:
    void initialize(const std::string& address, int port);
    void initialize_curl(const std::string& address, int port);
    void init_capabilities();

    void check_ok(CURLcode res, const char* fmt);
    void check_timeout(CURLcode res, int for_recv, const char* fmt);

    std::string add_message_id(const std::string &payload);

    void send(const std::string & payload);
    void send_value(const char* value, size_t value_len);
    std::string recv();
    std::string recv_value();

private:
    CURL *curl;
    curl_socket_t sockfd;
    std::vector<std::string> server_capabilities;

    std::string hello_msg;
    std::string username;
    std::string hostname;
    std::string password;
    int port;

    long long unsigned int msgid;
    bool connected = false;
};

}

#endif /* _YDK_NETCONF_TCP_CLIENT_H_ */
