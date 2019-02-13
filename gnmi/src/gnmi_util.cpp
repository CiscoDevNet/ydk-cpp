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

#include <algorithm>
#include <vector>

#include <ydk/errors.hpp>
#include <ydk/logger.hpp>
#include <ydk/entity_util.hpp>
#include <ydk/common_utilities.hpp>

#include "gnmi_util.hpp"

using namespace std;

namespace ydk
{

PathKey::PathKey(const std::string & name, const std::string & value)
        : name(name), value(value)
{
}

PathElem::PathElem(const std::string & path, std::vector<PathKey> keys)
        : path(path), keys(keys)
{
}

static void parse_entity_children(Entity & entity, vector<PathElem> & path_container);

static void parse_entity(Entity & entity, vector<PathElem> & path_container)
{
    EntityPath path = get_entity_path(entity, entity.parent);
    auto s = entity.get_segment_path();
    vector<PathKey> keys;
    YLOG_DEBUG("Got path {}", s);
    auto p = s.find("[");
    if(p != std::string::npos)
    {
        s = s.substr(0, p);
        for(const pair<string, LeafData> & name_value : path.value_paths)
        {
            LeafData leaf_data = name_value.second;
            if(leaf_data.is_set)
            {
                YLOG_DEBUG("Creating key {} with value: '{}'", name_value.first, leaf_data.value);
                PathKey key{name_value.first, leaf_data.value};
                keys.push_back(key);
            }
         }
    }

    path_container.push_back({s, keys});
    parse_entity_children(entity, path_container);
}

static void parse_entity_children(Entity & entity, vector<PathElem> & path_container)
{
    for(auto const& child : entity.get_children())
    {
        if(child.second == nullptr)
            continue;
        YLOG_DEBUG("==================");
        YLOG_DEBUG("Looking at child '{}': {}",child.first, get_entity_path(*(child.second), child.second->parent).path);
        if(child.second->has_operation() || child.second->has_data() || child.second->is_presence_container)
            parse_entity(*(child.second), path_container);
        else
            YLOG_DEBUG("Child has no data and no operations");
    }
}

void parse_entity_prefix(Entity& entity, pair<string, string> & prefix)
{
    EntityPath root_path = get_entity_path(entity, nullptr);
    auto s = root_path.path;
    string mod = s;
    string con = {};
    auto p = s.find(":");
    if (p != std::string::npos)
    {
        mod = s.substr(0, p);
        con = s.substr(p+1);
        YLOG_DEBUG("Got entity prefix: '{}:{}'", mod, con);
    }
    else {
        YLOG_DEBUG("Got unexpected entity root path: '{}'", s);
    }
    prefix = make_pair(mod, con);
}

void parse_entity_to_prefix_and_paths(Entity& entity, pair<string, string> & prefix, vector<PathElem> & path_container)
{
    parse_entity_prefix(entity, prefix);

    parse_entity_children(entity, path_container);
}
static void parse_entity_children(Entity & entity, gnmi::Path* path);

static vector<string> get_entity_keys(Entity & entity)
{
    vector<string> keys;
    auto s = entity.get_segment_path();
    size_t pos = 0;
    while ((pos = s.find("[", ++pos)) != std::string::npos) {
        size_t equal_char = s.find("=", pos);
        if (equal_char != std::string::npos) {
            string key = s.substr(pos+1, equal_char-pos-1);
            keys.push_back(key);
        }
    }
    return keys;
}

static void parse_entity(Entity & entity, gnmi::Path* path)
{
    EntityPath entity_path = get_entity_path(entity, entity.parent);
    auto s = entity.get_segment_path();
    map<string,string> keys{};
    map<string,string> leafs{};

    auto p = s.find("[");
    if (p != std::string::npos) {
    	auto entity_keys = get_entity_keys(entity);
        s = s.substr(0, p);
        for (const pair<string, LeafData> & name_value : entity_path.value_paths) {
            LeafData leaf_data = name_value.second;
            bool is_key = false;
            for (auto key : entity_keys) {
                if (key == name_value.first) {
                    is_key = true;
                    break;
                }
            }
            if (is_key && leaf_data.is_set) {
                keys[name_value.first] = leaf_data.value;
            }
            else if (leaf_data.yfilter != YFilter::not_set) {
                leafs[name_value.first] = to_string(leaf_data.yfilter);
            }
        }
    }
    YLOG_DEBUG("gnmi_util::parse_entity: Adding elem: '{}'", s);
    gnmi::PathElem* elem = path->add_elem();
    elem->set_name(s);
    for (auto key : keys) {
        auto key_map = elem->mutable_key();
        YLOG_DEBUG("gnmi_util::parse_entity: Adding key value: '{}:{}'", key.first, key.second);
        (*key_map)[key.first] = key.second;
    }
    for (auto leaf : leafs) {
        YLOG_DEBUG("gnmi_util::parse_entity: Adding elem for YLeaf: '{}'", leaf.first);
        gnmi::PathElem* elem = path->add_elem();
        elem->set_name(leaf.first);

        // Only one leaf with operation can be processed at a time
        return;
    }

    parse_entity_children(entity, path);
}

static void parse_entity_children(Entity & entity, gnmi::Path* path)
{
	auto children = entity.get_children();
	if (children.size() == 0) {
	    // Check if any of the leafs has YFilter
		if (entity.has_operation()) {
			std::vector< std::pair<std::string, LeafData> > leaf_data = entity.get_name_leaf_data();
			for (auto ld : leaf_data) {
			    if (ld.second.yfilter != YFilter::not_set) {
			        YLOG_DEBUG("gnmi_util::parse_entity_children: Adding elem for YLeaf: '{}'", ld.first);
			        gnmi::PathElem* elem = path->add_elem();
			        elem->set_name(ld.first);
			        break;
			    }
			}
		}
		return;
	}
	for (auto const & child : children)
    {
        if (child.second == nullptr)
            continue;
        YLOG_DEBUG("");
        YLOG_DEBUG("gnmi_util::parse_entity_children: Looking at child '{}': '{}'", child.first, get_entity_path(*(child.second), child.second->parent).path);
        if (child.second->has_operation() || child.second->has_data() || child.second->is_presence_container)
            parse_entity(*(child.second), path);
        else
            YLOG_DEBUG("Child has no data and no operations");
    }
}

static void add_path_elem(gnmi::Path* path, string s)
{
    map<string,string> keys{};

    auto p = s.find("[");
    if (p != std::string::npos) {
        string key_path = s.substr(p);
        s = s.substr(0, p);
        size_t open_bracket_pos = 0;
        while (open_bracket_pos != string::npos) {
            auto equal_pos = key_path.find("=", open_bracket_pos);
            auto close_bracket_pos = key_path.find("]", equal_pos);
            string key_name = key_path.substr(open_bracket_pos+1, equal_pos-open_bracket_pos-1);
            string key_value = key_path.substr(equal_pos+2, close_bracket_pos-equal_pos-3);
            keys[key_name] = key_value;

            if (close_bracket_pos == key_path.length()-1)
                break;
            else
                open_bracket_pos = key_path.find("[", close_bracket_pos+1);
        }
    }
    YLOG_DEBUG("gnmi_util::add_path_elem: Adding elem: '{}'", s);
    gnmi::PathElem* elem = path->add_elem();
    elem->set_name(s);
    for (auto key : keys) {
        auto key_map = elem->mutable_key();
        YLOG_DEBUG("gnmi_util::add_path_elem: Adding key value: '{}:{}'", key.first, key.second);
        (*key_map)[key.first] = key.second;
    }
}

namespace path {
vector<string> segmentalize(const string& path);
}

void parse_entity_prefix(Entity& entity, gnmi::Path* path)
{
    // Add origin and first container to the path
    EntityPath root_path = get_entity_path(entity, nullptr);
    auto full_path = root_path.path;
    vector<string> segments = ydk::path::segmentalize(full_path);
    YLOG_DEBUG("parse_entity_prefix: Entity path: '{}'", full_path);
    parse_prefix_to_path(segments[0], path);
    auto segment_path = entity.get_segment_path();
    for (size_t i=1; i < segments.size(); i++) {
        if (segments[i] == segment_path)
            break;
        add_path_elem(path, segments[i]);
    }
}

void parse_entity_to_path(Entity& entity, gnmi::Path* path)
{
    // Add origin and first container to the path
    parse_entity_prefix(entity, path);

    // Add children path
    if (entity.is_top_level_class)
        parse_entity_children(entity, path);
    else
        parse_entity(entity, path);
}

void parse_prefix_to_path(const string& prefix, gnmi::Path* path)
{
    // Add origin and first container to the path
    string mod = prefix;
    string con = {};
    auto p = prefix.find(":");
    if (p != string::npos) {
        mod = prefix.substr(0, p);
        con = prefix.substr(p+1);
        YLOG_DEBUG("parse_prefix_to_path: Got data node path prefix: '{}:{}'", mod, con);
        path->set_origin(mod);
        add_path_elem(path, con);
    }
    else {
        YLOG_DEBUG("parse_prefix_to_path: Got unexpected data node path: '{}', missing prefix.", prefix);
        add_path_elem(path, mod);
    }
}

namespace path {

static path::DataNode* get_last_datanode(DataNode* dn)
{
    auto children = dn->get_children();
    if (!children.empty()) {
        // Select last non-key child
        vector<ydk::path::Statement> keys = dn->get_schema_node().get_keys();
        for (auto child : children) {
            auto st = child->get_schema_node().get_statement();
            bool child_is_key = false;
            for (auto key : keys) {
                if (key.arg == st.arg) {
                    child_is_key = true;
                    break;
                }
            }
            if (!child_is_key)
            return get_last_datanode(child.get());
        }
    }
    return dn;
}

void parse_datanode_to_path(DataNode* dn, gnmi::Path* path)
{
    path::DataNode* last_datanode = get_last_datanode(dn);
    string full_path = last_datanode->get_path();
    std::vector<std::string> segments = path::segmentalize(full_path);

    YLOG_DEBUG("parse_datanode_to_path: Data node path: '{}'", full_path);

    // Add origin and first container to the path
    auto s = segments[1];
    parse_prefix_to_path(s, path);

    // Add the rest of the segments to the path
    for (size_t i=2; i < segments.size(); i++) {
    	add_path_elem(path, segments[i]);
    }
}

}    // namespace path

}  // namespace ydk
