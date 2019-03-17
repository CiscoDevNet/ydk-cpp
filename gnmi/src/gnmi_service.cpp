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

#include <ydk/entity_data_node_walker.hpp>
#include <ydk/common_utilities.hpp>
#include <ydk/errors.hpp>
#include <ydk/logger.hpp>
#include <ydk/json_subtree_codec.hpp>

#include "gnmi_provider.hpp"
#include "gnmi_service.hpp"
#include "gnmi_util.hpp"

using namespace std;

using grpc::Channel;
using grpc::ChannelArguments;
using grpc::ChannelCredentials;
using grpc::SslCredentialsOptions;

namespace ydk {

static string get_data_payload(gNMIServiceProvider& provider, Entity & entity)
{
    string payload;
    auto top_entity = get_top_entity(&entity);
    if (entity.ignore_validation && top_entity->is_top_level_class) {
        YLOG_DEBUG("=========== Generating JSON payload with JsonSubtreeCodec ============");
        payload = get_json_subtree_filter_payload(*top_entity, provider, false);
    }
    else {
        YLOG_DEBUG("=========== Generating JSON payload with path::Codec ============");
        path::Codec codec_service{};
        path::RootSchemaNode & root_schema = provider.get_session().get_root_schema();
        auto yfilter = entity.yfilter;
        entity.yfilter = YFilter::not_set;
        path::DataNode& datanode = get_data_node_from_entity(entity, root_schema);
        entity.yfilter = yfilter;
        payload = codec_service.encode(datanode, EncodingFormat::JSON, false);
    }
    YLOG_DEBUG("\n{}", payload);
    return payload;
}

gNMIService::gNMIService()
{
}

gNMIService::~gNMIService()
{
}

//get
static shared_ptr<Entity> json_codec_payload_to_entity(const std::string & payload, shared_ptr<Entity> filter)
{
    JsonSubtreeCodec json_subtree_codec{};
    YLOG_DEBUG("Decoding JSON payload to Entity using subtree codec");
    return json_subtree_codec.decode(payload, filter);
}

static vector<string>
get_json_from_path(gNMIServiceProvider& provider, vector<gnmi::Path*> path_list, const string & operation)
{
	YLOG_DEBUG("Executing 'get' gRPC on multiple paths");

    vector<GnmiClientRequest> get_request_list{};
    for (auto path : path_list) {
        GnmiClientRequest request{};
        request.path = path;
        request.type = "get";
        request.operation = operation;
        get_request_list.push_back(request);
    }

    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());
    auto & client = gnmi_session.get_client();
    vector<string> reply = client.execute_get_operation(get_request_list, operation);

    return reply;
}

shared_ptr<path::DataNode>
gNMIService::get_from_path(gNMIServiceProvider& provider, vector<gnmi::Path*> path_list, const string & operation) const
{
    vector<string> reply = get_json_from_path(provider, path_list, operation);

    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());
    return gnmi_session.handle_get_reply(reply);
}

shared_ptr<Entity>
gNMIService::get(gNMIServiceProvider& provider, Entity& filter, const string & operation) const
{
    YLOG_DEBUG("Executing 'get' gRPC on single entity");

    auto top_entity = get_top_entity(&filter);
    gnmi::Path* path = new gnmi::Path;
    parse_entity_to_path(*top_entity, path);
    vector<gnmi::Path*> path_list;
    path_list.push_back(path);

    if (filter.ignore_validation && top_entity->is_top_level_class) {
        // Bypass libyang validation
        vector<string> reply = get_json_from_path(provider, path_list, operation);
        if (reply.empty())
            return nullptr;
        auto reply_entity = json_codec_payload_to_entity(reply[0], top_entity->clone_ptr());
        return get_child_entity_from_top(reply_entity, filter);
    }

    auto root_dn = get_from_path(provider, path_list, operation);
    if (root_dn) {
        return read_datanode(filter, root_dn->get_children()[0]);
    }
    return nullptr;
}

vector<shared_ptr<Entity>>
gNMIService::get(gNMIServiceProvider & provider, vector<Entity*> & filter_list, const string & operation) const
{
    YLOG_DEBUG("Executing get gRPC for multiple entities");

    vector<shared_ptr<Entity>> response_list{};
    size_t bypass_validation = 0;
    vector<gnmi::Path*> path_list;
    for (auto filter : filter_list) {
        auto top_entity = get_top_entity(filter);
        gnmi::Path* path = new gnmi::Path;
        parse_entity_to_path(*top_entity, path);
        path_list.push_back(path);
        if (top_entity->is_top_level_class && filter->ignore_validation)
            bypass_validation++;
    }

    if (bypass_validation == filter_list.size()) {
        // Bypass libyang validation
        vector<string> reply = get_json_from_path(provider, path_list, operation);
        if (reply.empty())
            return response_list;

        // Build output list
        for (auto filter : filter_list) {
            auto fsp = filter->get_segment_path();
            bool found = false;
            for (auto r : reply) {
                if (r.find(fsp) != string::npos) {
                    auto top_entity = get_top_entity(filter);
                    auto reply_entity = json_codec_payload_to_entity(r, top_entity->clone_ptr());
                    auto child_entity = get_child_entity_from_top(reply_entity, *filter);
                    response_list.push_back(child_entity);
                    found = true;
                    break;
                }
            }
            if (!found) {
                response_list.push_back((std::shared_ptr<Entity>) filter);
            }
        }
        return response_list;
    }

    auto root_dn = get_from_path(provider, path_list, operation);
    if (root_dn) {
        // Build map of data nodes in order to retain filter list order
        map<string,std::shared_ptr<path::DataNode>> path_to_dn{};
        for (auto dn : root_dn->get_children()) {
            string path = dn->get_path();
            if (path.find("/") == 0)
                path = path.substr(1);
            path_to_dn[path] = dn;
        }

        // Build output list
        for (auto filter : filter_list) {
            auto dn = path_to_dn[filter->get_segment_path()];
            if (dn) {
                auto entity = read_datanode(*filter, dn);
                response_list.push_back(entity);
            }
            else {
                response_list.push_back((std::shared_ptr<Entity>) filter);
            }
        }
    }
    return response_list;
}

//set
static GnmiClientRequest build_set_request(gNMIServiceProvider& provider, Entity& entity)
{
	string operation = to_string(entity.yfilter);
	if (operation != "replace" && operation != "update" && operation != "delete")
    {
        YLOG_ERROR("gNMIService::set: {} operation not supported", operation );
        throw(YServiceProviderError{operation + " operation not supported"});
    }
    YLOG_INFO("Executing set gRPC operation '{}' on entity '{}'", operation, entity.get_segment_path());

    gnmi::Path* path = new gnmi::Path;
    string payload{};

    if (operation == "delete") {
        parse_entity_to_path(entity, path);
    }
    else {
        parse_entity_prefix(entity, path);
        payload = get_data_payload(provider, entity);
        if (entity.is_top_level_class) {
            // Remove prefix part from the payload
            auto pos = payload.find("{", 4);
            if (pos != string::npos)
                payload = payload.substr(pos, payload.length()-pos-1);
        }
    }

    GnmiClientRequest request{};
    request.alias = "entity";
    request.path = path;
    request.payload = payload;
    request.type = "set";
    request.operation = operation;
    return request;
}

//set
bool gNMIService::set(gNMIServiceProvider& provider, Entity& entity) const
{
    YLOG_DEBUG("Executing get gRPC for single entity");
    vector<GnmiClientRequest> set_request_list{};
    GnmiClientRequest request = build_set_request(provider, entity);
    set_request_list.push_back(request);

    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());
    auto & client = gnmi_session.get_client();

    return client.execute_set_operation(set_request_list);
}

bool gNMIService::set(gNMIServiceProvider& provider, vector<Entity*> & entity_list) const
{
	YLOG_DEBUG("Executing set gRPC for multiple entities");
    vector<GnmiClientRequest> set_request_list{};
    int count = 1;
    for (auto entity : entity_list) {
        GnmiClientRequest request = build_set_request(provider, *entity);
        request.alias += "-" + count++;
        set_request_list.push_back(request);
    }
    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());
    auto & client = gnmi_session.get_client();

    return client.execute_set_operation(set_request_list);
}

static void check_subscription_params(gNMISubscription& subscription)
{
    if (subscription.entity == nullptr) {
        YLOG_ERROR("Entity is not set in the subscription");
        throw(YInvalidArgumentError{"Entity is not set in the subscription"});
    }

    auto list_mode = subscription.subscription_mode;
    if (list_mode == "") {
        subscription.subscription_mode = "ON_CHANGE";
    }
    else if (list_mode != "ON_CHANGE" && list_mode != "SAMPLE" && list_mode!= "TARGET_DEFINED")
    {
        YLOG_ERROR("gNMIService::subscribe: mode '{}' is not supported", list_mode);
        throw(YServiceProviderError{list_mode + " mode is not supported"});
    }

    if (subscription.sample_interval == 0)
        subscription.sample_interval = 60000000000;
    if (subscription.heartbeat_interval == 0 || subscription.heartbeat_interval < subscription.sample_interval)
        subscription.heartbeat_interval = subscription.sample_interval * 10;
}

static string check_subscribe_mode(const string & mode)
{
    string list_mode = mode;
	if (mode.length() == 0) {
		list_mode = "ONCE";
    }
    else if (mode != "ONCE" && mode != "STREAM" && mode != "POLL")
    {
        YLOG_ERROR("gNMIService::subscribe: list mode '{}' is not supported", mode);
        throw(YServiceProviderError{mode + " list mode is not supported"});
    }
    return list_mode;
}

static string check_subscribe_encoding(const string & encoding)
{
    string list_encoding = encoding;
	if (encoding.length() == 0) {
		list_encoding = "PROTO";
    }
    else if (encoding != "JSON" && encoding != "BYTES" && encoding != "PROTO" && encoding != "ASCII" && encoding != "JSON_IETF")
    {
        YLOG_ERROR("gNMIService::subscribe: encoding '{}' is not supported", encoding);
        throw(YServiceProviderError{encoding + " encoding is not supported"});
    }
    return list_encoding;
}

//subscribe
void gNMIService::subscribe(gNMIServiceProvider& provider,
                            gNMISubscription& subscription,
                            uint32 qos, const std::string & mode,
							const std::string & encoding,
                            std::function<void(const char * response)> out_func,
                            std::function<bool(const char * response)> poll_func) const
{
    YLOG_DEBUG("gNMIService::subscribe: Executing subscribe RPC in '{}' list mode", mode);

    string list_mode = check_subscribe_mode(mode);
    string list_encoding = check_subscribe_encoding(encoding);
    check_subscription_params(subscription);

    GnmiClientSubscription sub{};
    sub.path = new gnmi::Path;
    parse_entity_to_path(*subscription.entity, sub.path);
    sub.subscription_mode = subscription.subscription_mode;
    sub.sample_interval = subscription.sample_interval;
    sub.suppress_redundant = subscription.suppress_redundant;
    sub.heartbeat_interval = subscription.heartbeat_interval;

    vector<GnmiClientSubscription> sub_list{};
    sub_list.push_back(sub);

    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());
    auto & client = gnmi_session.get_client();
    client.execute_subscribe_operation(sub_list, qos, list_mode, list_encoding, out_func, poll_func);
}

void gNMIService::subscribe(gNMIServiceProvider& provider,
                            vector<gNMISubscription*> & subscription_list,
                            uint32 qos, const std::string & mode,
							const std::string & encoding,
                            std::function<void(const char * response)> out_func,
                            std::function<bool(const char * response)> poll_func) const
{
    YLOG_DEBUG("gNMIService::subscribe: Executing subscribe request in '{}' list mode", mode);

    string list_mode = check_subscribe_mode(mode);
    string list_encoding = check_subscribe_encoding(encoding);
    vector<GnmiClientSubscription> sub_list{};
    for (auto subscription : subscription_list) {
        check_subscription_params(*subscription);
        GnmiClientSubscription sub{};
        sub.path = new gnmi::Path;
        parse_entity_to_path(*subscription->entity, sub.path);
        sub.subscription_mode = subscription->subscription_mode;
        sub.sample_interval = subscription->sample_interval;
        sub.suppress_redundant = subscription->suppress_redundant;
        sub.heartbeat_interval = subscription->heartbeat_interval;

        sub_list.push_back(sub);
    }

    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());
    auto & client = gnmi_session.get_client();
    client.execute_subscribe_operation(sub_list, qos, list_mode, list_encoding, out_func, poll_func);
}

std::string
gNMIService::capabilities(gNMIServiceProvider & provider)
{
    auto & gnmi_session = dynamic_cast<const path::gNMISession&> (provider.get_session());

    auto cap_rdn = gnmi_session.handle_get_capabilities();

    ydk::path::Codec codec{};
    auto json_caps = codec.encode(*cap_rdn, ydk::EncodingFormat::JSON, true);
    return json_caps;
}

}
