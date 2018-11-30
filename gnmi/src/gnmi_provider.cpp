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

#include <iostream>
#include <sstream>
#include <memory>
#include <libyang/libyang.h>

#include <ydk/errors.hpp>
#include <ydk/entity_data_node_walker.hpp>
#include <ydk/ietf_parser.hpp>
#include <ydk/types.hpp>
#include <ydk/logger.hpp>

#include "gnmi_client.hpp"
#include "gnmi_provider.hpp"
#include "gnmi_service.hpp"

using namespace std;

namespace ydk
{
    gNMIServiceProvider::gNMIServiceProvider(path::Repository & repo,
                   const string& address, int port,
                   const string& username,
                   const string& password,
                   const string & server_certificate,
                   const string & private_key)
        : session{repo, address, port, username, password, server_certificate, private_key}
    {
        string secure = (server_certificate.length() > 0) ? "Secure" : "Insecure";
        YLOG_INFO("gNMIServiceProvider Connected to {} via {} Channel", address, secure);
    }

    gNMIServiceProvider::~gNMIServiceProvider()
    {
        YLOG_INFO("Disconnected from device");
    }

    EncodingFormat gNMIServiceProvider::get_encoding() const
    {
        return EncodingFormat::JSON;
    }

    const path::Session& gNMIServiceProvider::get_session() const
    {
        return session;
    }

    vector<string> gNMIServiceProvider::get_capabilities() const
    {
        return session.get_capabilities();
    }

    shared_ptr<Entity>
    gNMIServiceProvider::execute_operation(const string & operation, Entity & entity, map<string,string> params)
    {
        gNMIService gs;
        if (operation == "create" || operation == "update" || operation == "delete") {
            entity.yfilter = (operation == "delete") ? YFilter::delete_ : YFilter::update;
            gs.set(*this, entity);
        }
        else if (operation == "read") {
            string read_mode = "ALL";
            if (params["mode"] == "config")
            	read_mode = "CONFIG";
            return gs.get(*this, entity, read_mode);
        }
        else {
            YLOG_ERROR("gNMIServiceProvider::execute_operation: Operation '{}' is not supported", operation);
            throw(YServiceProviderError("gNMIServiceProvider::execute_operation: Operation is not supported"));
        }
        return nullptr;
    }

    vector<shared_ptr<Entity>>
	gNMIServiceProvider::execute_operation(const string & operation, vector<Entity*> entity_list, map<string,string> params)
    {
    	vector<shared_ptr<Entity>> result;
        gNMIService gs;
        if (operation == "create" || operation == "update" || operation == "delete") {
            for (auto entity : entity_list)
                entity->yfilter = (operation == "delete") ? YFilter::delete_ : YFilter::update;
            gs.set(*this, entity_list);
        }
        else if (operation == "read") {
            string read_mode = "ALL";
            if (params["mode"] == "config")
            	read_mode = "CONFIG";
            return gs.get(*this, entity_list, read_mode);
        }
        else {
            YLOG_ERROR("gNMIServiceProvider::execute_operation: Operation '{}' is not supported", operation);
            throw(YServiceProviderError("gNMIServiceProvider::execute_operation: Operation is not supported"));
        }
    	return result;
    }

}
