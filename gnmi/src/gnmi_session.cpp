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

#include <fstream>
#include <libyang/libyang.h>

#include <ydk/ietf_parser.hpp>
#include <ydk/logger.hpp>
#include <ydk/netconf_model_provider.hpp>
#include <ydk/common_utilities.hpp>

#include "gnmi_provider.hpp"
#include "gnmi_path_api.hpp"
#include "gnmi_util.hpp"

using grpc::Channel;
using grpc::ChannelArguments;
using grpc::ChannelCredentials;
using grpc::SslCredentialsOptions;

using namespace std;
using namespace ydk;

namespace ydk
{
namespace path
{

gNMISession::gNMISession(Repository & repo,
                   const std::string& address, int port,
                   const std::string& username,
                   const std::string& password,
                   const std::string & server_certificate, const std::string & private_key)
{
    // Correct default settings
	if (port == 0)
        port = 57400;

    client = make_unique<gNMIClient>(address, port, username, password, server_certificate, private_key);

    server_capabilities = client->get_capabilities();

    model_provider = make_shared<StaticModelProvider>(*client);
    repo.add_model_provider(model_provider.get());

    std::vector<std::string> empty_caps;
    IetfCapabilitiesParser capabilities_parser{};
    root_schema = repo.create_root_schema(capabilities_parser.parse(empty_caps));
    if(root_schema.get() == nullptr)
    {
        YLOG_ERROR("gNMISession::initialize: Root schema cannot be obtained");
        throw(YIllegalStateError{"Root schema cannot be obtained"});
    }
    string secure = (server_certificate.length() > 0) ? "Secure" : "Insecure";
    YLOG_DEBUG("gNMISession: Connected to {} using {} Channel", address, secure);
}

gNMISession::~gNMISession() = default;

EncodingFormat gNMISession::get_encoding() const
{
    return EncodingFormat::JSON;
}

std::vector<std::string> gNMISession::get_capabilities() const
{
    return server_capabilities;
}

RootSchemaNode& gNMISession::get_root_schema() const
{
    return *root_schema;
}

static SchemaNode* get_schema_for_operation(RootSchemaNode & root_schema, string operation)
{
    auto c = root_schema.find(operation);
    if(c.empty())
    {
        YLOG_ERROR("'{}' rpc schema not found!", operation);
        throw(YIllegalStateError{"CRUD read rpc schema not found!"});
    }
    return c[0];
}

void gNMISession::invoke_subscribe(Rpc& rpc,
		std::function<void(const char * response)> out_func,
		std::function<bool(const char * response)> poll_func) const
{
    SchemaNode* gnmi_sub = get_schema_for_operation(*root_schema, "ydk:gnmi-subscribe");

    SchemaNode* rpc_schema = &(rpc.get_schema_node());
    if (rpc_schema == gnmi_sub) {
        handle_subscribe(rpc, out_func, poll_func);
    }
    else {
        YLOG_ERROR("gNMISession::invoke: RPC '{}' is not supported", rpc.get_name());
        throw(YOperationNotSupportedError{"RPC is not supported!"});
    }
}

shared_ptr<DataNode> gNMISession::invoke(Rpc& rpc) const
{
    SchemaNode* gnmi_get = get_schema_for_operation(*root_schema, "ydk:gnmi-get");
    SchemaNode* gnmi_set = get_schema_for_operation(*root_schema, "ydk:gnmi-set");
    SchemaNode* gnmi_cap = get_schema_for_operation(*root_schema, "ydk:gnmi-caps");

    SchemaNode* rpc_schema = &(rpc.get_schema_node());
    if(rpc_schema == gnmi_set)
    {
        handle_set(rpc);
        return nullptr;
    }
    else if(rpc_schema == gnmi_get)
    {
        return handle_get(rpc);
    }
    else if(rpc_schema == gnmi_cap)
    {
        return handle_get_capabilities();
    }
    else {
        YLOG_ERROR("gNMISession::invoke: RPC '{}' is not supported", rpc.get_name());
        throw(YOperationNotSupportedError{"RPC is not supported!"});
    }
    return nullptr;
}

shared_ptr<DataNode> gNMISession::invoke(DataNode& datanode) const
{
    throw(YOperationNotSupportedError{"gNMISession::invoke: action datanode is not supported!"});
    return nullptr;
}

static void populate_path_from_payload(gnmi::Path* path, const string & payload, RootSchemaNode & root_schema)
{
    Codec s{};
    auto root_dn = s.decode(root_schema, payload, EncodingFormat::JSON);
    if(!root_dn || root_dn->get_children().empty()) {
        YLOG_ERROR( "Codec service failed to decode datanode from JSON payload");
        throw(YError{"Problems deserializing JSON payload"});
    }
    auto child = (root_dn->get_children())[0].get();
    parse_datanode_to_path(child, path);
}

static GnmiClientRequest build_set_request(RootSchemaNode & root_schema, DataNode* request, const string & operation)
{
    GnmiClientRequest one_request{};
    one_request.type = "set";
    one_request.operation = operation;
    auto entity = request->find("entity");
    if (entity.empty()) {
        YLOG_ERROR("Failed to get 'entity' node from set RPC");
        throw(YInvalidArgumentError{"Failed to get 'entity' node from set RPC"});
    }
    DataNode* entity_node = entity[0].get();
    one_request.payload = entity_node->get_value();

    one_request.path = new gnmi::Path();
    if (operation == "delete") {
        populate_path_from_payload(one_request.path, one_request.payload, root_schema);
    }
    else {
        auto pos = one_request.payload.find("{", 4);
        if (pos != string::npos) {
            string prefix = one_request.payload.substr(2, pos-4);
            parse_prefix_to_path(prefix, one_request.path);
            one_request.payload = one_request.payload.substr(pos, one_request.payload.length()-pos-1);
        }
    }
    return one_request;
}

bool gNMISession::handle_set(Rpc& ydk_rpc) const
{
	vector<GnmiClientRequest> setRequest{};

    auto delete_list = ydk_rpc.get_input_node().find("delete");
    if (!delete_list.empty()) {
        for (auto request : delete_list) {
            GnmiClientRequest one_request = build_set_request(get_root_schema(), request.get(), "delete");
            setRequest.push_back(one_request);
        }
    }

    auto replace_list = ydk_rpc.get_input_node().find("replace");
    if (!replace_list.empty()) {
        for (auto request : replace_list) {
            GnmiClientRequest one_request = build_set_request(get_root_schema(), request.get(), "replace");
            setRequest.push_back(one_request);
        }
    }

    auto update_list = ydk_rpc.get_input_node().find("update");
    if (!update_list.empty()) {
        for (auto request : update_list) {
            GnmiClientRequest one_request = build_set_request(get_root_schema(), request.get(), "update");
            setRequest.push_back(one_request);
        }
    }

    return client->execute_set_operation(setRequest);
}

shared_ptr<DataNode>
gNMISession::handle_get(Rpc& rpc) const
{
	vector<GnmiClientRequest> getRequest{};

    auto request_list = rpc.get_input_node().find("request");
    if (request_list.empty()) {
        YLOG_ERROR("Failed to get 'request' node from '{}' RPC", rpc.get_name());
        throw(YInvalidArgumentError{"Failed to get 'request' node from RPC"});
    }

    string operation = "CONFIG";
    auto type = rpc.get_input_node().find("type");
    if (!type.empty()) {
        DataNode* type_node = type[0].get();
        operation = type_node->get_value();
    }

    for (auto request : request_list) {
        GnmiClientRequest one_request{};
        one_request.type = "get";
        one_request.operation = operation;

        auto alias = request.get()->find("alias");
        if (!alias.empty()) {
            DataNode* alias_node = alias[0].get();
            one_request.alias = alias_node->get_value();
        }

        auto entity = request.get()->find("entity");
        if (entity.empty()) {
            YLOG_ERROR("Failed to get 'entity' node from '{}' RPC", rpc.get_name());
            throw(YInvalidArgumentError{"Failed to get 'entity' node from RPC"});
        }
        DataNode* entity_node = entity[0].get();
        one_request.payload = entity_node->get_value();

        one_request.path = new gnmi::Path();
        populate_path_from_payload(one_request.path, one_request.payload, get_root_schema());

        getRequest.push_back(one_request);
    }

    vector<string> reply = client->execute_get_operation(getRequest, operation);
    YLOG_DEBUG("============= Reply payload received from device =============");
    for (auto response : reply) {
        YLOG_DEBUG("\n{}", response);
    }

    return handle_get_reply(reply);
}

shared_ptr<DataNode>
gNMISession::handle_get_reply(vector<string> reply_val) const
{
    Codec codec{};

    shared_ptr<DataNode> root_dn = codec.decode_json_output(get_root_schema(), reply_val);
    if (!root_dn) {
        YLOG_ERROR( "Codec service failed to decode JSON values from GetResponse");
        throw(YError{"Problems deserializing JSON output"});
    }
    return root_dn;
}

shared_ptr<DataNode>
gNMISession::handle_get_capabilities() const
{
	GnmiClientCapabilityResponse reply = client->execute_get_capabilities();

    DataNode * rd = ydk::create_root_datanode(root_schema.get());

	auto & output_dn = rd->create_datanode("ydk:gnmi-capabilities", "");

	for (auto model : reply.supported_models) {
		ostringstream so, sv;
	    so << "supported-models[name='" << model.name << "']/organization";
	    output_dn.create_datanode(so.str(), model.organization);

	    sv << "supported-models[name='" << model.name << "']/version";
	    output_dn.create_datanode(sv.str(), model.version);
	}

	for (auto e : reply.supported_encodings) {
		ostringstream s;
		s << "supported-encodings[.='" << e << "']";
		output_dn.create_datanode(s.str());
	}

	output_dn.create_datanode("gnmi-version", reply.gnmi_version);

    return shared_ptr<DataNode> (rd);
}

void
gNMISession::handle_subscribe(Rpc& rpc,
		std::function<void(const char * response)> out_func,
		std::function<bool(const char * response)> poll_func) const
{
    vector<GnmiClientSubscription> sub_list{};

    auto subscription = rpc.get_input_node().find("subscription");
    if (subscription.empty()) {
        YLOG_ERROR("Failed to get 'subscription' node from '{}' RPC", rpc.get_name());
        throw(YInvalidArgumentError{"Failed to get 'request' node from RPC"});
    }
    uint32 qos = 0;
    auto qos_dn = subscription[0]->find("qos");
    if (!qos_dn.empty()) {
        DataNode* qos_node = qos_dn[0].get();
        qos = strtoul(qos_node->get_value().c_str(), NULL, 0);
    }
    string mode = "ONCE";
    auto mode_dn = subscription[0]->find("mode");
    if (!mode_dn.empty()) {
        DataNode* mode_node = mode_dn[0].get();
        mode = mode_node->get_value();
    }
    string encoding = "PROTO";
    auto encoding_dn = subscription[0]->find("encoding");
    if (!encoding_dn.empty()) {
        DataNode* encoding_node = encoding_dn[0].get();
        encoding = encoding_node->get_value();
    }

    auto subscription_list = subscription[0]->find("subscription-list");
    if (subscription_list.empty()) {
        YLOG_ERROR("Failed to get 'subscription-list' node from '{}' RPC", rpc.get_name());
        throw(YInvalidArgumentError{"Failed to get 'request' node from RPC"});
    }

    for (auto one_subscription : subscription_list) {
        GnmiClientSubscription sub{};

        auto entity_vector = one_subscription->find("entity");
        if (entity_vector.empty()) {
            YLOG_ERROR("Failed to get 'entity' node from subscribe RPC");
            throw(YInvalidArgumentError{"Failed to get 'entity' node from subscribe RPC"});
        }
        DataNode* entity_node = entity_vector[0].get();
        sub.path = new gnmi::Path();
        populate_path_from_payload(sub.path, entity_node->get_value(), *root_schema);

        sub.subscription_mode = "ON_CHANGE";
        auto list_mode_dn = one_subscription->find("subscription-mode");
        if (!list_mode_dn.empty()) {
            DataNode* list_mode_node = list_mode_dn[0].get();
            sub.subscription_mode = list_mode_node->get_value();
        }

        sub.sample_interval = 60000000;
        auto interval_dn = one_subscription->find("sample-interval");
        if (!interval_dn.empty()) {
            DataNode* interval_node = interval_dn[0].get();
            sub.sample_interval = strtoull(interval_node->get_value().c_str(), NULL, 0);
        }

        sub.suppress_redundant = true;
        auto suppress_dn = one_subscription->find("suppress-redundant");
        if (!suppress_dn.empty()) {
            DataNode* suppress_node = suppress_dn[0].get();
            if (suppress_node->get_value() == "false")
            sub.suppress_redundant = false;
        }

        sub.heartbeat_interval = sub.sample_interval * 10;
        auto heartbeat_dn = one_subscription->find("heartbeat-interval");
        if (!heartbeat_dn.empty()) {
            DataNode* heartbeat_node = heartbeat_dn[0].get();
            sub.heartbeat_interval = strtoull(heartbeat_node->get_value().c_str(), NULL, 0);
        }

        sub_list.push_back(sub);
    }

    client->execute_subscribe_operation(sub_list, qos, mode, encoding, out_func, poll_func);
}

gNMIClient & gNMISession::get_client() const
{
    return *client;
}

}    // namespace path
}  // namespace ydk
