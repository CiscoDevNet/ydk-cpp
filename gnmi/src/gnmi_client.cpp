/// YANG Development Kit
// Copyright 2016 Cisco Systems. All rights reserved
//
////////////////////////////////////////////////////////////////
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
//////////////////////////////////////////////////////////////////

#include <thread>
#include <chrono>
#include <algorithm>    // std::all_of
#include <ctype.h>  	// std::isdigit

#include <google/protobuf/text_format.h>

#include <ydk/errors.hpp>
#include <ydk/json.hpp>
#include <ydk/logger.hpp>

#include "gnmi_util.hpp"
#include "gnmi_client.hpp"

using namespace std;
using namespace grpc;

using json = nlohmann::json;
using grpc::SslCredentialsOptions;


namespace ydk
{
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Utility functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

gNMIClient::PathPrefixValueFlags flag;

static void check_status(grpc::Status status, string message)
{
    if (!status.ok()) {
        ostringstream s;
        s << message << ":\n" << status.error_message();
        string er_msg = s.str();
        YLOG_ERROR(er_msg.c_str());
        throw(YServiceProviderError{er_msg});
    }
}

static std::shared_ptr<Channel> connect_to_server(const std::string & address, int port,
                                                  const std::string & server_certificate, const std::string & private_key)
{
    std::ostringstream address_buffer{};
    address_buffer << address << ":" << port;
    auto address_str = address_buffer.str();

    if (server_certificate.length() == 0) {
        return grpc::CreateChannel(address_str, grpc::InsecureChannelCredentials());
    }

	grpc::SslCredentialsOptions ssl_opts;
    grpc::ChannelArguments      args;

    string server_cert;
    ifstream p(server_certificate);
    server_cert.assign((istreambuf_iterator<char>(p)),(istreambuf_iterator<char>()));
    ssl_opts.pem_root_certs = server_cert;
    YLOG_DEBUG("gNMIClient::connect_to_server: Server certificate:\n{}", server_cert);

    if (private_key.length() > 0) {
        string client_key;
        ifstream k(private_key);
        client_key.assign((istreambuf_iterator<char>(k)),(istreambuf_iterator<char>()));
        ssl_opts.pem_private_key = client_key;
        YLOG_DEBUG("gNMIClient::connect_to_server: Client private key:\n{}", client_key);
    }

    //args.SetSslTargetNameOverride("2001:420:1101:1::b");
    args.SetSslTargetNameOverride("ems.cisco.com");

    auto channel_creds = grpc::SslCredentials(grpc::SslCredentialsOptions(ssl_opts));
    return grpc::CreateCustomChannel(address_str, channel_creds, args);
}

static gnmi::SubscriptionList_Mode get_sublist_mode(const string & list_mode)
{
    if(list_mode == "STREAM")
    {
        return gnmi::SubscriptionList_Mode_STREAM;
    }
    else if(list_mode == "POLL")
    {
        return gnmi::SubscriptionList_Mode_POLL;
    }
    return gnmi::SubscriptionList_Mode_ONCE;
}

static void populate_subscribe_request(gnmi::SubscriptionList* sl, GnmiClientSubscription subscription)
{
    gnmi::Subscription* sub = sl->add_subscription();
    if (subscription.path)
        sub->set_allocated_path(subscription.path);
    sub->set_sample_interval(subscription.sample_interval);
    sub->set_suppress_redundant(subscription.suppress_redundant);
    sub->set_heartbeat_interval(subscription.heartbeat_interval);

    if(subscription.subscription_mode == "SAMPLE")
    {
        sub->set_mode(gnmi::SubscriptionMode::SAMPLE);
    }
    else if(subscription.subscription_mode == "ON_CHANGE")
    {
        sub->set_mode(gnmi::SubscriptionMode::ON_CHANGE);
    }
    else {
        sub->set_mode(gnmi::SubscriptionMode::TARGET_DEFINED);
    }
}

static string format_notification_response(pair<string,string> prefix_suffix, const std::string& value)
{
    string reply_val;
    string path_to_prepend = prefix_suffix.first;
    string path_to_append  = prefix_suffix.second;

    // TODO: Update again when payload format from the server(IOS XR) is made consistent with different request paths
//    if (flag.path_has_value)
//        reply_val = "{" + path_to_prepend + "{[" + value + "]}}";
//    else if (flag.prefix_has_value)
//        reply_to_parse.append("\"data\":{" + prefix_to_prepend + ":[" + path_to_prepend + value + "]" + "}}");
//    else if ((flag.prefix_has_value) && (flag.path_has_value))
//        reply_to_parse.append("\"data\":{" + prefix_to_prepend + ":[" + path_to_prepend + "[" + value + "]]" + "}}");
//    else {
        string val = (value == "{\"value\":\"null\"}") ? "{}" : value;
        if (path_to_prepend.length()==0 && val.find("{")==0)
            reply_val = val;
        else
            reply_val = "{" + path_to_prepend + val + path_to_append + "}";
//    }
    return reply_val;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// gNMIClient
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

gNMIClient::gNMIClient(const std::string & address, int port,
                       const std::string & username, const  std::string & password,
                       const std::string & certificate, const std::string & private_key)
 : host(address), port(port), username(username), password(password), server_certificate(certificate), private_key(private_key)
{
    connect();
}

gNMIClient::~gNMIClient()
{
}

int gNMIClient::connect()
{
    auto channel = connect_to_server(host, port, server_certificate, private_key);
    stub_ = gNMI::NewStub(channel);
    return EXIT_SUCCESS;
}

string gNMIClient::get_hostname_port()
{
    ostringstream os;
    os<< host << "_" << port;
    return os.str();
}

string gNMIClient::execute_payload(const std::string & payload)
{
    YLOG_ERROR("gNMIClient::execute_payload is not supported");
    throw(YError{"gNMIClient::execute_payload is not supported"});
    return payload;
}

static bool has_gnmi_version(gnmi::CapabilityResponse* response)
{
    if (!(response->gnmi_version().size() > 0)) 
    {
        YLOG_ERROR("Capabilities Received Without gNMI Version");
        throw(YError{"Capabilities Received Without gNMI Version"});
        return false;
    }
    return true;
}

void gNMIClient::parse_capabilities_modeldata(gnmi::CapabilityResponse* response)
{
    gnmi::ModelData modeldata;
    string cap, name, organization, version; 

    YLOG_DEBUG("====Capabilities Response Received====");
    for (size_t i = 0, n = response->supported_models_size(); i < n; i++)
    {
        ostringstream os;
        cap.clear();
        modeldata = response->supported_models(i);
        name = modeldata.name();
        organization = modeldata.organization();
        version = modeldata.version();
        if(!(modeldata.name().empty()))
        {
            os << name << ", ";
            cap.append("?module=" + name);
        }
        if(!(modeldata.organization().empty()))
            os << organization << ", ";
        if(!(modeldata.version().empty()))
        {
            string revision = version.c_str();
            revision = revision.substr(revision.find(":") + 1,string::npos);
            os << revision;
        }
        YLOG_DEBUG("{}", os.str().c_str());
        capabilities.push_back(cap);
    }
}

static void parse_capabilities_encodings(gnmi::CapabilityResponse* response)
{
    gnmi::Encoding encoding;
    string encoding_value;

    for (int i = 0, n = response->supported_encodings_size(); i < n; i++)
    {
        encoding = response->supported_encodings(i);
        encoding_value = gnmi::Encoding_Name(encoding);
        YLOG_DEBUG("Encoding {}", encoding_value.c_str());
    }
}

void gNMIClient::parse_capabilities(gnmi::CapabilityResponse* response)
{
    YLOG_DEBUG("Capabilities Received:");
    YLOG_DEBUG("");
    YLOG_DEBUG("==============gNMI Version==============");
    YLOG_DEBUG("gNMI Version: {}", response->gnmi_version().c_str());

    YLOG_DEBUG("============Supported Models============");
    parse_capabilities_modeldata(response);

    YLOG_DEBUG("===========Supported Encodings===========");
    parse_capabilities_encodings(response);

    YLOG_DEBUG("=========================================");
    YLOG_DEBUG("");
}

vector<string> gNMIClient::get_capabilities()
{
    CapabilityRequest request;
    CapabilityResponse response;
    grpc::ClientContext context;
    context.AddMetadata("username", username);
    context.AddMetadata("password", password);
    grpc::Status status = stub_->Capabilities(&context, request, &response);
    check_status(status, "CapabilityRequest failed with error");

    if(has_gnmi_version(&response))
    {
        parse_capabilities(&response);
    }
    return capabilities;
}

GnmiClientCapabilityResponse gNMIClient::execute_get_capabilities()
{
    GnmiClientCapabilityResponse reply{};

    CapabilityRequest request;
    CapabilityResponse response;
    grpc::ClientContext context;
    context.AddMetadata("username", username);
    context.AddMetadata("password", password);
    grpc::Status status = stub_->Capabilities(&context, request, &response);
    check_status(status, "CapabilityRequest failed with error");

    reply.gnmi_version = response.gnmi_version();
    for (size_t i = 0, n = response.supported_models_size(); i < n; i++)
    {
        auto model = response.supported_models(i);

        GnmiClientModelData model_data{};
        model_data.name = model.name();
        model_data.organization = model.organization();
        model_data.version = model.version();

        reply.supported_models.push_back(model_data);
    }
    for (int i = 0, n = response.supported_encodings_size(); i < n; i++)
    {
        gnmi::Encoding encoding = response.supported_encodings(i);
        string encoding_value = gnmi::Encoding_Name(encoding);
        reply.supported_encodings.push_back(encoding_value);
    }
    return reply;
}

static pair<string,string> get_path_from_update(gnmi::Update update)
{
    string path_to_prepend;
    string path_to_append;
    string path_element_to_add;

    if(update.has_path())
    {
        gnmi::Path path = update.path();
        int elem_size = path.elem_size();
        if (elem_size > 0) {
            string origin = path.origin();
            if (origin.length() > 0) {
                path_to_prepend.append("\"" + origin + ":");
            }
            int l;
            for (l = 0; l < elem_size - 1; l++)
            {
                path_element_to_add = path.elem(l).name();	//check_if_path_has_key_values(path.elem(l));
                if (l>0 || path_to_prepend.length()==0)
                    path_to_prepend.append("\"");
                path_to_prepend.append(path_element_to_add + "\":");

                // Check if the path element has keys
                if (path.elem(l).key_size() == 0) {
                    path_to_prepend.append("{");
                    path_to_append = "}" + path_to_append;
                }
                else {
                	path_to_prepend.append("[{");
                	path_to_append = "}]" + path_to_append;
                	string keys_to_append;
                    for (auto key : path.elem(l).key()) {
                        const char * ckey = key.second.c_str();
                        bool is_number = all_of(key.second.begin(), key.second.end(), ::isdigit);
                        if ((ckey[0] == '\"' && ckey[key.second.length()-1] == '\"')  || is_number) {
                            // The key value is a number or string, which is already surrounded by double-quotes
                            // like in implementation of XR gNMI server
                            keys_to_append.append("\"" + key.first + "\":" + key.second + ",");
                        }
                        else {
                            // The key value is not a number, treat it as a string by adding double-quotes
                            keys_to_append.append("\"" + key.first + "\":\"" + key.second + "\",");
                        }
                    }
                    path_to_prepend.append(keys_to_append);
                }
            }
            path_element_to_add = path.elem(l).name();
            if (elem_size>1 || path_to_prepend.length()==0)
                path_to_prepend.append("\"");
            path_to_prepend.append(path_element_to_add + "\":");
        }
    }
    else {
        path_to_prepend.clear();
    }
    return make_pair(path_to_prepend, path_to_append);
}

static string get_value_from_update(gnmi::Update update)
{
    gnmi::TypedValue value;
    string value_for_payload;

    if (update.has_val()) {
        value = update.val();
        value_for_payload.append(value.json_ietf_val());
    }
    return value_for_payload;
}

static vector<string> parse_get_response(gnmi::GetResponse* response)
{
    vector<string> response_list{};

    for(int i = 0; i < response->notification_size(); ++i)
    {
        gnmi::Notification notification = response->notification(i);
        string path_to_prepend;
        string reply_to_parse;
        string value;
        if(notification.update_size() != 0) {
            for(int k = 0; k < notification.update_size(); ++k)
            {
                gnmi::Update update = notification.update(k);
                auto prefix_suffix = get_path_from_update(update);
                value.append(get_value_from_update(update));
                reply_to_parse = format_notification_response(prefix_suffix, value);
            }
        }
        response_list.push_back(reply_to_parse);
    }
    return response_list;
}

vector<string>
gNMIClient::execute_get_operation(const std::vector<GnmiClientRequest> get_request_list, const std::string& operation)
{
    gnmi::GetRequest gnmi_get_request;
    gnmi::GetResponse gnmi_get_response;

    for (auto ydk_request : get_request_list) {
        // Populate gnmi::GetRequest
        gnmi::Path* path = gnmi_get_request.add_path();
        if (ydk_request.path != nullptr)
            path->CopyFrom(*ydk_request.path);
    }

    if (operation == "ALL")
        gnmi_get_request.set_type(gnmi::GetRequest::ALL);
    else if (operation == "OPERATIONAL")
        gnmi_get_request.set_type(gnmi::GetRequest::OPERATIONAL);
    else if (operation == "STATE")
        gnmi_get_request.set_type(gnmi::GetRequest::STATE);
    else
        gnmi_get_request.set_type(gnmi::GetRequest::CONFIG);
    gnmi_get_request.set_encoding(gnmi::Encoding::JSON_IETF);

    YLOG_INFO("\n=============== Get Request Sent ================\n{}\n", gnmi_get_request.DebugString());
    auto reply = execute_get_payload(gnmi_get_request, &gnmi_get_response);
    YLOG_INFO("Get Operation Succeeded");
    return reply;
}

bool
gNMIClient::execute_set_operation(const std::vector<ydk::GnmiClientRequest> set_request_list)
{
    gnmi::SetRequest gnmi_set_request;
    gnmi::SetResponse gnmi_set_response;

    // Populate gnmi::SetRequest
    // delete
    for (auto request : set_request_list) {
        if (request.operation == "delete") {
            gnmi::Path* path = gnmi_set_request.add_delete_();
            if (request.path != nullptr)
                path->CopyFrom(*request.path);
        }
    }
    // replace
    for (auto request : set_request_list) {
        if (request.operation == "replace") {
            ::gnmi::Update* update = gnmi_set_request.add_replace();
            if (request.path != nullptr) {
                update->set_allocated_path(request.path);
                if (!request.payload.empty()) {
                    ::gnmi::TypedValue* value = new ::gnmi::TypedValue;
                    value->set_json_ietf_val(request.payload);
                    update->set_allocated_val(value);
                }
            }
        }
    }
    // update
    for (auto request : set_request_list) {
        if (request.operation == "update") {
            ::gnmi::Update* update = gnmi_set_request.add_update();
            if (request.path != nullptr) {
                update->set_allocated_path(request.path);
                if (!request.payload.empty()) {
                    ::gnmi::TypedValue* value = new ::gnmi::TypedValue;
                    value->set_json_ietf_val(request.payload);
                    update->set_allocated_val(value);
                }
            }
        }
    }

    YLOG_INFO("\n=============== Set Request Sent ================\n{}\n", gnmi_set_request.DebugString());
    auto reply = execute_set_payload(gnmi_set_request, &gnmi_set_response);
    YLOG_INFO("Set Operation Succeeded");
    return reply;
}

vector<string>
gNMIClient::execute_get_payload(const GetRequest& request, GetResponse* response)
{
    grpc::ClientContext context;
    context.AddMetadata("username", username);
    context.AddMetadata("password", password);
    grpc::Status status = stub_->Get(&context, request, response);
    check_status(status, "GetRequest failed with error");
    YLOG_INFO("\n============= Get Response Received =============\n{}\n", response->DebugString().c_str());
    YLOG_DEBUG("Get RPC succeeded");
    return parse_get_response(response);
}

bool
gNMIClient::execute_set_payload(const SetRequest& request, SetResponse* response)
{
    grpc::ClientContext context;
    context.AddMetadata("username", username);
    context.AddMetadata("password", password);
    grpc::Status status = stub_->Set(&context, request, response);
    check_status(status, "SetRequest failed with error");
    YLOG_INFO("\n============= Set Response Received =============\n{}\n", response->DebugString().c_str());
    return true;
}

void gNMIClient::send_poll_request(bool last)
{
    gnmi::SubscribeRequest req;
    gnmi::Poll* p = new gnmi::Poll;
    req.set_allocated_poll(p);
    YLOG_INFO("\n=============== Sending Poll SubscribeRequest ================\n{}\n", req.DebugString());
    if (last) {
        ::grpc::WriteOptions options{};
        options.set_last_message();
        client_reader_writer->WriteLast(req, options);
    }
    else {
        client_reader_writer->Write(req);
    }
}

void poll_thread_callback_control(gNMIClient* client, std::function<bool(const char * response)> poll_func)
{
	YLOG_DEBUG("Invoking polling/streaming thread control from user defined callback");
    if (poll_func == nullptr) {
    	// Send poll request just once
    	client->send_poll_request();
    	return;
    }
    std::thread writer([client, poll_func]()
    {
        std::string str_response = client->get_last_subscribe_response();
        while (poll_func(str_response.c_str()))
        {
        	if (!client->client_reader_is_active) {
        		YLOG_DEBUG("Client subscription reader is not active. Ending Polling/Streaming control thread");
        		break;
        	}
            client->send_poll_request();

            // Wait some time for response to arrive
            int counter = 0;
            while (client->get_last_subscribe_response() == str_response && ++counter < 100) {
               std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
    		if (counter >= 100) {
    			YLOG_INFO("Could not receive subscribe response for 10 seconds");
    		}
    		else {
    			YLOG_DEBUG("Received subscribe response in {} milliseconds", counter*100);
    			str_response = client->get_last_subscribe_response();
    		}
        }
        client->client_reader_writer->WritesDone();
    });
    writer.detach();
}

static string get_current_local_time()
{
   time_t now = time(0);
   string cur_time = ctime(&now);
   if (cur_time[cur_time.length()-1] == '\n') {
       cur_time.erase(cur_time.length()-1);
   }
   return cur_time;
}

static void print_prompt(const std::string & list_mode)
{
    if (list_mode == "POLL") {
        cout<<endl<<"Started POLL request monitoring"<<endl;
        cout<<"Enter 'poll' for update; 'end' to end monitoring"<<endl;
    }
    else if (list_mode == "STREAM") {
    	cout<<endl<<"Started STREAM request monitoring"<<endl;
    	cout<<"Enter 'end' to end monitoring"<<endl;
    }
}

void poll_thread_cin_control(gNMIClient* client, const std::string & list_mode)
{
	YLOG_DEBUG("Invoking polling/streaming thread control from standard input");
	std::thread writer([client, list_mode]()
    {
        std::string str_response = client->get_last_subscribe_response();
        string input;
        print_prompt(list_mode);
        while (cin)
        {
        	if (!client->client_reader_is_active) {
        		YLOG_DEBUG("Client subscription reader is not active. Ending Polling/Streaming control thread");
        		break;
        	}
        	cin >> input;
            cout << get_current_local_time() << ": " << input << endl;
        	if (input == "poll" && list_mode == "POLL")
        	{
        		string before_poll = client->get_last_subscribe_response();
        		client->send_poll_request();

                // Wait some time for response to arrive
        		int counter = 0;
        		while (client->get_last_subscribe_response() == str_response && ++counter < 100) {
        		    std::this_thread::sleep_for(std::chrono::milliseconds(100));
        		}
        		if (counter >= 100) {
        			YLOG_INFO("Could not receive subscribe response for 10 seconds");
        		}
        		else {
        			YLOG_DEBUG("Received subscribe response in {} milliseconds", counter*100);
        			str_response = client->get_last_subscribe_response();
        		}
            }
        	else if (input == "last") {
        		client->send_poll_request(true);
        		break;
        	}
        	else if (input == "end") {
        	    break;
        	}
        	else {
        		cout << "Wrong input" << endl;
        		print_prompt(list_mode);
        	}
        }
        client->client_reader_writer->WritesDone();
    });
    writer.detach();
}

void
gNMIClient::execute_subscribe_operation(std::vector<GnmiClientSubscription> subscription_list,
                                        uint32 qos, const std::string & list_mode,
										const std::string & encoding,
                                        std::function<void(const char * response)> out_func,
                                        std::function<bool(const char * response)> poll_func)
{
    grpc::ClientContext context;
    gnmi::SubscribeResponse response{};

    auto request = make_shared<gnmi::SubscribeRequest>();

    gnmi::SubscriptionList* sl = new gnmi::SubscriptionList;
    sl->set_mode(get_sublist_mode(list_mode));
    sl->set_encoding(gnmi::Encoding::PROTO);
    if (encoding == "JSON")
    	sl->set_encoding(gnmi::Encoding::JSON);
    else if (encoding == "JSON_IETF")
    	sl->set_encoding(gnmi::Encoding::JSON_IETF);
    else if (encoding == "BYTES")
    	sl->set_encoding(gnmi::Encoding::BYTES);
    else if (encoding == "ASCII")
    	sl->set_encoding(gnmi::Encoding::ASCII);

    gnmi::QOSMarking* qosmarking = new gnmi::QOSMarking;
    qosmarking->set_marking(qos);
    sl->set_allocated_qos(qosmarking);

    for (auto subscription : subscription_list) {
        populate_subscribe_request(sl, subscription);
    }
    request->set_allocated_subscribe(sl);

    YLOG_INFO("\n=============== Sending SubscribeRequest ================\n{}\n", request->DebugString());

    context.AddMetadata("username", username);
    context.AddMetadata("password", password);

    auto a = stub_->Subscribe(&context);
    client_reader_writer = move(a);
    client_reader_writer->Write(*request);
    client_reader_is_active = true;
    last_subscribe_response = "";

    if (list_mode == "POLL" || list_mode == "STREAM")
    {
        if (poll_func != nullptr) {
            poll_thread_callback_control(this, poll_func);
        }
        else {
            // Default poll control
            poll_thread_cin_control(this, list_mode);
        }
    }

    while (client_reader_writer->Read(&response))
    {
        YLOG_INFO("\n=============== Received SubscribeResponse ================\n{}\n", response.DebugString());

        google::protobuf::TextFormat::PrintToString(response, &last_subscribe_response);
        if (out_func != nullptr) {
            YLOG_DEBUG("Invoking user callback to receive the subscription data");
            out_func(last_subscribe_response.c_str());
        }
        else {
            // By default put the response to stdout
            cout << last_subscribe_response << endl;
        }
    }
	auto status = client_reader_writer->Finish();
	client_reader_is_active = false;
	check_status(status, "SubscribeRequest failed with error");
    YLOG_INFO("Subscribe Operation Succeeded");
}

}
