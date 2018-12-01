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

#include "crud_service.hpp"
#include "logger.hpp"
#include "common_utilities.hpp"

using namespace std;

namespace ydk {

static bool operation_succeeded(shared_ptr<Entity> entity)
{
    YLOG_INFO("Operation {}", ((entity == nullptr)?"succeeded":"failed"));
    return entity == nullptr;
}

static bool operation_succeeded(vector<shared_ptr<Entity>> entity_list)
{
    YLOG_INFO("Operation {}", (entity_list.size() == 0) ? "succeeded" : "failed");
    return entity_list.size() == 0;
}

// Class CrudService implementation
//
CrudService::CrudService()
{
}

CrudService::~CrudService()
{
}

bool CrudService::create(ydk::ServiceProvider & provider, Entity & entity)
{
    YLOG_INFO("Executing CRUD create operation on [{}]", entity.get_segment_path());

    map<string,string> params;
    return operation_succeeded(
    		provider.execute_operation("create", entity, params) );
}

bool CrudService::create(ydk::ServiceProvider & provider, vector<Entity*> & entity_list)
{
    YLOG_INFO("Executing CRUD create operation on {}", entity_vector_to_string(entity_list));

    map<string,string> params;
    return operation_succeeded(
            provider.execute_operation("create", entity_list, params) );
}

bool CrudService::update(ydk::ServiceProvider & provider, Entity & entity)
{
    YLOG_INFO("Executing CRUD update operation on [{}]", entity.get_segment_path());

    map<string,string> params;
    return operation_succeeded(
            provider.execute_operation("update", entity, params) );
}

bool CrudService::update(ydk::ServiceProvider & provider, vector<Entity*> & entity_list)
{
    YLOG_INFO("Executing CRUD create operation on {}", entity_vector_to_string(entity_list));

    map<string,string> params;
    return operation_succeeded(
            provider.execute_operation("update", entity_list, params) );
}

bool CrudService::delete_(ydk::ServiceProvider & provider, Entity & entity)
{
    YLOG_INFO("Executing CRUD delete operation on [{}]", entity.get_segment_path());

    map<string,string> params;
    return operation_succeeded(
            provider.execute_operation("delete", entity, params) );
}

bool CrudService::delete_(ydk::ServiceProvider & provider, vector<Entity*> & entity_list)
{
    YLOG_INFO("Executing CRUD delete operation on {}", entity_vector_to_string(entity_list));

    map<string,string> params;
    return operation_succeeded(
            provider.execute_operation("delete", entity_list, params) );
}

shared_ptr<Entity>
CrudService::read(ydk::ServiceProvider & provider, Entity & filter)
{
    YLOG_INFO("Executing CRUD read operation on [{}]", filter.get_segment_path());

    map<string,string> params;
    params["mode"] = "all";
    return provider.execute_operation("read", filter, params);
}

vector<shared_ptr<Entity>>
CrudService::read(ydk::ServiceProvider & provider, vector<Entity*> & filter_list)
{
    YLOG_INFO("Executing CRUD read operation on {}", entity_vector_to_string(filter_list));

    map<string,string> params;
    params["mode"] = "all";
    return provider.execute_operation("read", filter_list, params);
}

shared_ptr<Entity> CrudService::read_config(ydk::ServiceProvider & provider, Entity & filter)
{
    YLOG_INFO("Executing CRUD read_config operation on [{}]", filter.get_segment_path());

    map<string,string> params;
    params["mode"] = "config";
    return provider.execute_operation("read", filter, params);
}

vector<shared_ptr<Entity>>
CrudService::read_config(ydk::ServiceProvider & provider, vector<Entity*> & filter_list)
{
    YLOG_INFO("Executing CRUD read operation on {}", entity_vector_to_string(filter_list));

    map<string,string> params;
    params["mode"] = "config";
    return provider.execute_operation("read", filter_list, params);
}

}
