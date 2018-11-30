//////////////////////////////////////////////////////////////////
// @file ydk.cpp
//
// YANG Development Kit
// Copyright 2017 Cisco Systems. All rights reserved
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

#include <ydk/errors.hpp>
#include <ydk/logger.hpp>

#include "ydk_gnmi.h"
#include "gnmi_path_api.hpp"
#include "gnmi_provider.hpp"
#include "gnmi_client.hpp"
#include "gnmi_service.hpp"

using namespace std;

/*************************************
 *  Utility structures and functions
 ************************************/
typedef struct RpcWrapper
{
    RpcWrapper(shared_ptr<ydk::path::Rpc> rpc)
        : priv(rpc)
    {
    }

    shared_ptr<ydk::path::Rpc> priv;
} RpcWrapper;

typedef struct DataNodeWrapper
{
    DataNodeWrapper(shared_ptr<ydk::path::DataNode> data)
        : priv(data)
    {
    }

    shared_ptr<ydk::path::DataNode> priv;
} DataNodeWrapper;

//static DataNodeWrapper* wrap(ydk::path::DataNode* datanode)
//{
//    return (new DataNodeWrapper(shared_ptr<ydk::path::DataNode>(datanode)));
//}

static DataNodeWrapper* wrap(shared_ptr<ydk::path::DataNode> datanode)
{
    return (new DataNodeWrapper(datanode));
}

//static ydk::path::DataNode* unwrap(DataNodeWrapper* datanode_wrapper)
//{
//    return datanode_wrapper->priv.get();
//}

//static RpcWrapper* wrap(shared_ptr<ydk::path::Rpc> rpc)
//{
//    return (new RpcWrapper(rpc));
//}

static ydk::path::Rpc* unwrap(RpcWrapper* rpc_wrapper)
{
    return rpc_wrapper->priv.get();
}

typedef struct RootSchemaNodeWrapper
{
    RootSchemaNodeWrapper(shared_ptr<ydk::path::RootSchemaNode> node)
        :priv(node)
    {
    }
    shared_ptr<ydk::path::RootSchemaNode> priv;
} RootSchemaNodeWrapper;

//static RootSchemaNodeWrapper* wrap(shared_ptr<ydk::path::RootSchemaNode> node)
//{
//    return (new RootSchemaNodeWrapper(node));
//}

static RootSchemaNodeWrapper* wrap(ydk::path::RootSchemaNode * node)
{
    return (new RootSchemaNodeWrapper( shared_ptr<ydk::path::RootSchemaNode> (node) ));
}

typedef vector<gnmi::Path*> GnmiPathVector;

/*************************************
 *  Main part
 ************************************/
ServiceProvider GnmiServiceProviderInit(
    YDKStatePtr state,
	Repository repo,
    const char * address, int port,
    const char * username,
    const char * password,
    const char * server_certificate,
    const char * private_key)
{
    try {
    	ydk::path::Repository* real_repo = static_cast<ydk::path::Repository*>(repo);
    	ydk::gNMIServiceProvider * real_provider =
                new ydk::gNMIServiceProvider( *real_repo, address, port, username, password, server_certificate, private_key);
        return static_cast<void*>(real_provider);
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

void GnmiServiceProviderFree(ServiceProvider provider)
{
    ydk::gNMIServiceProvider * real_provider = static_cast<ydk::gNMIServiceProvider*>(provider);
    if (real_provider != NULL) {
        delete real_provider;
    }
}

RootSchemaWrapper GnmiServiceProviderGetRootSchemaNode(YDKStatePtr state, ServiceProvider provider)
{
    try {
    	ydk::ServiceProvider * real_provider = static_cast<ydk::ServiceProvider*>(provider);
        ydk::path::RootSchemaNode & root_schema = real_provider->get_session().get_root_schema();
        return static_cast<void*>(wrap(&root_schema));
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

GnmiSession GnmiServiceProviderGetSession(YDKStatePtr state, ServiceProvider provider)
{
    try {
    	ydk::ServiceProvider * real_provider = static_cast<ydk::ServiceProvider*>(provider);
        ydk::path::Session& session = const_cast<ydk::path::Session&>(real_provider->get_session());
        return static_cast<void*>(&session);
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

DataNode GnmiServiceGetFromPath(YDKStatePtr state, ServiceProvider provider, GnmiPathList path_list, const char* operation)
{
    try {
    	ydk::gNMIServiceProvider * real_provider = static_cast<ydk::gNMIServiceProvider*>(provider);
    	auto real_list = static_cast<GnmiPathVector*> (path_list);
    	ydk::gNMIService gs{};
    	string oper = operation;
    	shared_ptr<ydk::path::DataNode> real_datanode = gs.get_from_path(*real_provider, *real_list, oper);
        return static_cast<void*>(wrap(real_datanode));
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

const char * GnmiServiceGetCapabilities(YDKStatePtr state, ServiceProvider provider) {
    try {
    	ydk::gNMIServiceProvider * real_provider = static_cast<ydk::gNMIServiceProvider*>(provider);
    	ydk::gNMIService gs{};
    	std::string caps = gs.capabilities( *real_provider);
        return caps.c_str();
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

GnmiSession GnmiSessionInit(
    YDKStatePtr state,
	Repository repo,
    const char * address, int port,
    const char * username,
    const char * password,
    const char * server_certificate,
    const char * private_key)
{
    try {
    	ydk::path::Repository* real_repo = static_cast<ydk::path::Repository*>(repo);
    	ydk::path::gNMISession * real_session =
    			new ydk::path::gNMISession( *real_repo, address, port, username, password, server_certificate, private_key);
        return static_cast<void*>(real_session);
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

void GnmiSessionFree(GnmiSession session)
{
    ydk::path::gNMISession * real_session = static_cast<ydk::path::gNMISession*>(session);
    if (real_session != NULL) {
        delete real_session;
    }
}

DataNode GnmiSessionExecuteRpc(YDKStatePtr state, GnmiSession session, Rpc rpc)
{
    try {
        ydk::path::gNMISession * real_session = static_cast<ydk::path::gNMISession*>(session);

        RpcWrapper* rpc_wrapper = (RpcWrapper*)rpc;
        ydk::path::Rpc* real_rpc = unwrap(rpc_wrapper);
        shared_ptr<ydk::path::DataNode> real_datanode = real_session->invoke(*real_rpc);
        return static_cast<void*>(wrap(real_datanode));
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

RootSchemaWrapper GnmiSessionGetRootSchemaNode(YDKStatePtr state, GnmiSession session)
{
    try {
    	ydk::path::Session * real_session = static_cast<ydk::path::Session*>(session);
        ydk::path::RootSchemaNode & root_schema = real_session->get_root_schema();
        return static_cast<void*>(wrap(&root_schema));
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return NULL;
    }
}

static std::string last_subscribe_response = "";

static void gnmi_subscribe_callback(const char * response)
{
	last_subscribe_response = response;
}

const char * GetLastSubscribeResponse(YDKStatePtr state, GnmiSession session, const char * previous_subscribe_response)
{
    // Wait some time for response to arrive
	const char* response = nullptr;
    int counter = 0;
    while (++counter < 10 &&
           (last_subscribe_response.length() == 0 || last_subscribe_response == previous_subscribe_response))
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        if (!GnmiSessionSubscribeInProgress( state, session))
            break;
    }
    if (counter < 10) {
        ydk::YLOG_DEBUG("Received subscribe response in {} milliseconds\n{}", (counter-1)*100, last_subscribe_response);
        response = last_subscribe_response.c_str();
    }
    return response;
}

void GnmiSessionExecuteSubscribeRpc(YDKStatePtr state, GnmiSession session, Rpc rpc)
{
    try {
        ydk::path::gNMISession * real_session = static_cast<ydk::path::gNMISession*>(session);

        RpcWrapper* rpc_wrapper = (RpcWrapper*)rpc;
        ydk::path::Rpc* real_rpc = unwrap(rpc_wrapper);
        last_subscribe_response = "";
        real_session->invoke_subscribe(*real_rpc, gnmi_subscribe_callback);
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
    }
}

boolean GnmiSessionSubscribeInProgress(YDKStatePtr state, GnmiSession session)
{
    try {
    	ydk::path::gNMISession * gnmi_session = static_cast<ydk::path::gNMISession*>(session);
    	auto & client = gnmi_session->get_client();
        return client.client_reader_is_active;
    }
    catch(...) {
        YDKState* real_state = static_cast<YDKState*>(state);
        handle_error(real_state);
        return false;
    }
}

GnmiPath GnmiPathInit()
{
    gnmi::Path* path = new gnmi::Path();
    return static_cast<void*>(path);
}

void GnmiPathFree(GnmiPath path)
{
    gnmi::Path* real_path = static_cast<gnmi::Path*> (path);
    free(real_path);
}

void GnmiPathAddOrigin(GnmiPath path, const char* origin)
{
    gnmi::Path* real_path = static_cast<gnmi::Path*> (path);
    real_path->set_origin(origin);
}

GnmiPathElem GnmiPathAddElem(GnmiPath path, const char* name)
{
    gnmi::Path* real_path = static_cast<gnmi::Path*> (path);
    auto path_elem = real_path->add_elem();
    path_elem->set_name(name);
    return static_cast<void*>(path_elem);
}

void GnmiPathAddElemKey(GnmiPathElem elem, const char* key_name, const char* key_value)
{
    gnmi::PathElem* path_elem = static_cast<gnmi::PathElem*> (elem);
    auto key_map = path_elem->mutable_key();
    (*key_map)[key_name] = key_value;
}

const char* GnmiPathToString(GnmiPath path)
{
	gnmi::Path* real_path = static_cast<gnmi::Path*> (path);
	auto path_str = real_path->DebugString();
	return path_str.c_str();
}

GnmiPathList GnmiPathListInit() {
	GnmiPathVector* path_list = new GnmiPathVector();
	return static_cast<void*>(path_list);
}
void GnmiPathListAdd(GnmiPathList list, GnmiPath path)
{
    auto real_list = static_cast<GnmiPathVector*> (list);
    gnmi::Path* real_path = static_cast<gnmi::Path*> (path);
    real_list->push_back(real_path);
}
void GnmiPathListFree(GnmiPathList list)
{
    auto real_list = static_cast<GnmiPathVector*> (list);
    for (gnmi::Path* path : *real_list)
        free(path);
    real_list->clear();
    free(real_list);
}

