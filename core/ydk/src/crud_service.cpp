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

#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xpath.h>

#include "crud_service.hpp"
#include "entity_data_node_walker.hpp"
#include "logger.hpp"
#include "path_api.hpp"
#include "service_provider.hpp"
#include "types.hpp"
#include "validation_service.hpp"
#include "xml_subtree_codec.hpp"


using namespace std;

namespace ydk {

static string get_config_data_payload(Entity & entity, ydk::ServiceProvider & provider);
static string get_xml_subtree_filter_payload(Entity & entity, const path::Session & session);
static std::shared_ptr<path::DataNode> execute_rpc(ydk::ServiceProvider & provider, Entity & entity,
        const string & operation, const string & data_tag, bool set_config_flag);
static shared_ptr<Entity> get_top_entity_from_filter(Entity & filter);
static bool operation_succeeded(shared_ptr<path::DataNode> node);

CrudService::CrudService()
{
}

CrudService::~CrudService()
{
}

bool CrudService::create(ydk::ServiceProvider & provider, Entity & entity)
{
    YLOG_INFO("Executing CRUD create operation");
    return operation_succeeded(
            execute_rpc(provider, entity, "ydk:create", "entity", false)
            );
}

bool CrudService::update(ydk::ServiceProvider & provider, Entity & entity)
{
    YLOG_INFO("Executing CRUD update operation");
    return operation_succeeded(
            execute_rpc(provider, entity, "ydk:update", "entity", false)
            );
}

bool CrudService::delete_(ydk::ServiceProvider & provider, Entity & entity)
{
    YLOG_INFO("Executing CRUD delete operation");
    return operation_succeeded(
            execute_rpc(provider, entity, "ydk:delete", "entity", false)
            );
}

shared_ptr<Entity> CrudService::read(ydk::ServiceProvider & provider, Entity & filter)
{
    YLOG_INFO("Executing CRUD read operation");
    return read_datanode(filter, execute_rpc(provider, filter, "ydk:read", "filter", false));
}

shared_ptr<Entity> CrudService::read_config(ydk::ServiceProvider & provider, Entity & filter)
{
    YLOG_INFO("Executing CRUD config read operation");
    return read_datanode(filter, execute_rpc(provider, filter, "ydk:read", "filter", true));
}

shared_ptr<Entity> CrudService::read_datanode(Entity & filter, shared_ptr<path::DataNode> read_data_node)
{
    if (read_data_node == nullptr)
        return {};
    shared_ptr<Entity> top_entity = get_top_entity_from_filter(filter);
    get_entity_from_data_node(read_data_node->get_children()[0].get(), top_entity);
    return top_entity;
}

static bool operation_succeeded(shared_ptr<path::DataNode> node)
{
    YLOG_INFO("Operation {}", ((node == nullptr)?"succeeded":"failed"));
    return node == nullptr;
}

static shared_ptr<Entity> get_top_entity_from_filter(Entity & filter)
{
    if(filter.parent == nullptr)
        return filter.clone_ptr();

    return get_top_entity_from_filter(*(filter.parent));
}

static shared_ptr<path::DataNode> execute_rpc(ydk::ServiceProvider & provider, Entity & entity,
        const string & operation, const string & data_tag, bool set_config_flag)
{
    const path::Session& session = provider.get_session();
//    if(data_tag == "entity")
//    {
//        ValidationService validation{}; //TODO
//        validation.validate(session, entity, ValidationService::Option::DATASTORE);
//    }
    path::RootSchemaNode& root_schema = session.get_root_schema();
    shared_ptr<ydk::path::Rpc> ydk_rpc { root_schema.create_rpc(operation) };
    string data;
    if(data_tag == "filter" && provider.get_encoding() == EncodingFormat::XML)
    {
        data = get_xml_subtree_filter_payload(entity, session);
    }
    else
    {
        data = get_config_data_payload(entity, provider);
    }

    if(set_config_flag)
    {
        ydk_rpc->get_input_node().create_datanode("only-config");
    }
    ydk_rpc->get_input_node().create_datanode(data_tag, data);
    return (*ydk_rpc)(session);
}

static string get_config_data_payload(Entity & entity, ydk::ServiceProvider & provider)
{
    const path::Session& session = provider.get_session();
    const ydk::path::DataNode& datanode = get_data_node_from_entity(entity, session.get_root_schema());

    const path::DataNode* dn = &datanode;
    while(dn!= nullptr && dn->get_parent()!=nullptr)
        dn = dn->get_parent();
    path::Codec codec{};
    YLOG_DEBUG("Encoding the subtree filter request using path API DataNode");
    string payload = codec.encode(*dn, provider.get_encoding(), false);
    return payload;
}

static string get_xml_subtree_filter_payload(Entity & entity, const path::Session & session)
{
    XmlSubtreeCodec xml_subtree_codec{};
    YLOG_DEBUG("Encoding the subtree filter request using XML subtree codec");
    return xml_subtree_codec.encode(entity, session.get_root_schema());
}
}
