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
#ifndef GNMI_UTIL_HPP
#define GNMI_UTIL_HPP

#include <ydk/path_api.hpp>

#include "gnmi.pb.h"

namespace ydk
{

struct PathKey
{
    std::string name;
    std::string value;

    PathKey(const std::string & name, const std::string & value);
};

struct PathElem
{
    std::string path;
    std::vector<PathKey> keys;
    PathElem(const std::string & path, std::vector<PathKey> keys);
};

void parse_entity_to_prefix_and_paths(Entity& entity, std::pair<std::string, std::string> & prefix, std::vector<PathElem> & path_container);
void parse_entity_prefix(Entity& entity, std::pair<std::string, std::string> & prefix);

void parse_entity_to_path(Entity& entity, gnmi::Path* path);
void parse_entity_prefix(Entity& entity, gnmi::Path* path);

void parse_prefix_to_path(const std::string& prefix, gnmi::Path* path);

namespace path {
    void parse_datanode_to_path(DataNode* dn, gnmi::Path* path);
}

}
#endif /* GNMI_UTIL_HPP */
