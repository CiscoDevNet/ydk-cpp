//
// @file service_provider.hpp
// @brief Header for service provider abstract class.
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

#ifndef _SERVICE_PROVIDER_H_
#define _SERVICE_PROVIDER_H_

#include "path_api.hpp"


namespace ydk
{

class ServiceProvider
{
public:

    virtual ~ServiceProvider();

    virtual EncodingFormat get_encoding() const = 0;

    virtual const path::Session& get_session() const = 0;

    virtual const std::string get_provider_type() const = 0;

    virtual std::shared_ptr<Entity> execute_operation( const std::string & operation,
    		Entity & entity, std::map<std::string,std::string> params) = 0;
    virtual std::vector<std::shared_ptr<Entity>> execute_operation( const std::string & operation,
    		std::vector<Entity*> entity_list, std::map<std::string,std::string> params) = 0;

};

} //namespace ydk

#endif /* _SERVICE_PROVIDER_H_ */
