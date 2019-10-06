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

#include "entity_util.hpp"
#include "errors.hpp"
#include "logger.hpp"

using namespace std;

namespace ydk
{

std::string get_relative_entity_path(const Entity* current_node, const Entity* ancestor, const std::string & path)
{
    std::ostringstream path_buffer;
    path_buffer << path;
    if(ancestor == nullptr)
    {
        throw(YInvalidArgumentError{"ancestor should not be null."});
    }
    auto p = current_node->parent;
    std::vector<Entity*> parents {};
    while (p != nullptr && p != ancestor) {
        parents.push_back(p);
        p = p->parent;
    }

    if (p == nullptr) {
        throw(YInvalidArgumentError{"parent is not in the ancestor hierarchy."});
    }

    std::reverse(parents.begin(), parents.end());

    p = nullptr;
    for (auto p1 : parents) {
        if (p) {
            path_buffer << "/";
        } else {
             p = p1;
        }
        path_buffer << p1->get_segment_path();
    }
    if(p)
        path_buffer << "/";
    path_buffer<<current_node->get_segment_path();
    return path_buffer.str();

}

bool is_set(const YFilter & yfilter)
{
    return yfilter != YFilter::not_set;
}

static const EntityPath get_entity_path(const Entity & entity, const string & path_buffer)
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data  = entity.get_name_leaf_data();

    EntityPath entity_path {path_buffer, leaf_name_data};
    return entity_path;
}

static bool is_absolute_path(Entity* ancestor)
{
    return ancestor == nullptr;
}

//
// @brief Get the EntityPath relative to the parent passed in
//
// Returns the EntityPath relative to the ancestor passed in.
// The ancestor must either be null, in which case the absolute path
// from the root is returned, or some other ancestor of this Entity.
//
// @param[in] parent The ancestor relative to which the path is calculated or nullptr
// @return EntityPath
// @throws YInvalidArgumentError if the parent is invalid

const EntityPath get_entity_path(const Entity & entity, Entity* ancestor)
{
    std::ostringstream path_buffer;
    if (is_absolute_path(ancestor))
    {
        if(entity.has_list_ancestor)
        {
            throw(YInvalidArgumentError{"ancestor for entity cannot be nullptr as one of the ancestors is a list. Path: "+entity.get_segment_path()});
        }
        auto a = entity.get_absolute_path();
        if(a.size() == 0)
        {
            path_buffer << entity.get_segment_path();
        }
        else
        {
            path_buffer << a;
        }
    }
    else
    {
        if(entity.is_top_level_class)
        {
            throw(YInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+entity.get_segment_path()});
        }
        path_buffer << get_relative_entity_path(&entity, ancestor, path_buffer.str());
    }
    return get_entity_path(entity, path_buffer.str());
}

std::string absolute_path(Entity & entity)
{
    string path = entity.get_segment_path();
    if (!entity.is_top_level_class && entity.parent)
    {
        path = absolute_path(*entity.parent) + "/" + path;
    }
    return path;
}

std::map<std::string,std::string> entity_to_dict(Entity & entity)
{
    std::map<std::string,std::string> edict{};
    auto abs_path = absolute_path(entity);
    if (entity.is_presence_container || abs_path.rfind("]") == abs_path.length()-1)
    {
        edict[abs_path] = "";
    }
    auto name_leaf_data_vector = entity.get_name_leaf_data();
    for (auto name_leaf_data : name_leaf_data_vector)
    {
        auto leaf_name = name_leaf_data.first;
        auto leaf_value = name_leaf_data.second.value;
        std::ostringstream key_buffer;
        key_buffer << "[" << leaf_name << "=";
        if (abs_path.find(key_buffer.str()) == string::npos)
        {
            std::string path = abs_path + "/" + leaf_name;
            edict[path] = leaf_value;
        }
    }
    for (auto const & entry : entity.get_children())
    {
        auto child = entry.second;
        auto child_dict = entity_to_dict(*child);
        for (auto const & e : child_dict)
        {
            edict[e.first] = e.second;
        }
    }
    return edict;
}

static bool key_in_vector(string & k, vector<string> v)
{
    for (auto e : v)
    {
        if (e == k) {
            return true;
        }
    }
    return false;
}

static void remove_key_from_vector(string & k, vector<string> & v)
{
    for (vector<string>::iterator it=v.begin(); it!=v.end(); ++it)
    {
        if (k == *it)
        {
            v.erase(it);
            break;
        }
    }
}

std::map<std::string, std::pair<std::string,std::string>> entity_diff(Entity & ent1, Entity & ent2)
{
    if (typeid(ent1) != typeid(ent2))
    {
        throw(YInvalidArgumentError{"entity_diff: Incompatible arguments provided."});
    }
    std::map<std::string, std::pair<std::string,std::string>> diffs{};
    auto ent1_dict = entity_to_dict(ent1);
    auto ent2_dict = entity_to_dict(ent2);
    vector<string> ent1_keys;
    for (auto entry : ent1_dict) ent1_keys.push_back(entry.first);
    vector<string> ent2_keys;
    for (auto entry : ent2_dict) ent2_keys.push_back(entry.first);
    vector<string> ent1_skip_keys;
    for (auto key : ent1_keys)
    {
        if (key_in_vector(key, ent1_skip_keys))
            continue;
        if (key_in_vector(key, ent2_keys))
        {
            if (ent1_dict[key] != ent2_dict[key])
            {
                diffs[key] = make_pair(ent1_dict[key], ent2_dict[key]);
            }
            remove_key_from_vector(key, ent2_keys);
        }
        else
        {
            diffs[key] = make_pair(ent1_dict[key], "None");
            for (auto dup_key : ent1_keys)
            {
                if (dup_key.find(key) == 0)
                {
                    ent1_skip_keys.push_back(dup_key);
                }
            }
        }
    }
    vector<string> ent2_skip_keys;
    for (auto key : ent2_keys)
    {
        if (key_in_vector(key, ent2_skip_keys))
            continue;
        diffs[key] = make_pair("None", ent2_dict[key]);
        for (auto dup_key : ent2_keys)
        {
            if (dup_key.find(key) == 0)
            {
                ent2_skip_keys.push_back(dup_key);
            }
        }
    }
    return diffs;
}

Entity* path_to_entity(Entity & entity, string & abs_path)
{
    auto top_abs_path = absolute_path(entity);
    if (top_abs_path == abs_path)
        return &entity;

    if (!abs_path.compare(0, top_abs_path.length(), top_abs_path))
    {
        auto name_leaf_data_vector = entity.get_name_leaf_data();
        for (auto name_leaf_data : name_leaf_data_vector)
        {
            auto leaf_name = name_leaf_data.first;
            std::ostringstream key_buffer;
            key_buffer << "[" << leaf_name << "=";
            if (abs_path.find(key_buffer.str()) == string::npos)
            {
                std::string path = top_abs_path + "/" + leaf_name;
                if (path == abs_path)
                    return &entity;
            }
        }

        for (auto const & entry : entity.get_children())
        {
            auto & child = *entry.second;
            auto child_abs_path = absolute_path(child);
            if (abs_path == child_abs_path)
                return &child;
            if (abs_path.compare(0, child_abs_path.length(), child_abs_path))
                continue;
            auto matching_entity = path_to_entity(child, abs_path);
            if (matching_entity)
                return matching_entity;
        }
    }
    return nullptr;
}

}
