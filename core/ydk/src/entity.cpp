//
// @file value.hpp
// @brief The main ydk public header.
//
// YANG Development Kit
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
#include <iomanip>

#include "entity_util.hpp"
#include "logger.hpp"
#include "types.hpp"
#include "errors.hpp"

using namespace std;

namespace ydk
{

//////////////////////////////////////////////////////////////////
/// Entity
//////////////////////////////////////////////////////////////////
Entity::Entity()
  : parent(nullptr), yfilter(YFilter::not_set), is_presence_container(false),
    is_top_level_class(false), has_list_ancestor(false), ignore_validation(false)
{
}

Entity::~Entity()
{
}

shared_ptr<Entity> Entity::clone_ptr() const
{
    return nullptr;
}

static void copy_leaves(const Entity * original_entity, shared_ptr<Entity> cloned_entity)
{
    for (const pair<string, LeafData> & name_value : original_entity->get_name_leaf_data())
    {
        LeafData leaf_data = name_value.second;
        if (leaf_data.is_set)
        {
            YLOG_DEBUG("Creating leaf '{}' of '{}' with value: '{}'",
                       name_value.first, original_entity->yang_name, leaf_data.value);
            auto leaf_name = name_value.first;
            auto leaf_value = leaf_data.value;
            auto bracket_pos = leaf_name.find("[");
            if (bracket_pos != string::npos)
            {
                // Here we have leaf-list
                leaf_value = leaf_name.substr(bracket_pos+4, leaf_name.length()-bracket_pos-6);
                leaf_name = leaf_name.substr(0, bracket_pos);
            }
            cloned_entity->set_value(leaf_name, leaf_value,
                                     leaf_data.name_space, leaf_data.name_space_prefix);
        }
    }
}

static void copy_children(const Entity * original_entity, shared_ptr<Entity> cloned_entity)
{
    map<string, shared_ptr<Entity>> children = original_entity->get_children();
    for (auto const& child : children)
    {
        if (child.second == nullptr)
            continue;
        YLOG_DEBUG("==================");
        YLOG_DEBUG("Looking at child '{}' of {}", child.first, original_entity->yang_name);
        if (child.second->has_data() || child.second->is_presence_container)
        {
            YLOG_DEBUG("Going into child {} in parent {}", child.first, original_entity->yang_name);
            shared_ptr<Entity> child_entity;
            auto child_name = child.first;
            auto bracket_pos = child_name.find("[");
            if (bracket_pos != string::npos)
            {
                child_name = child_name.substr(0, bracket_pos);
            }
            if (child.second->ylist)
            {
                child_entity = cloned_entity->get_child_by_name(child_name, child.first);
            }
            else
            {
                child_entity = cloned_entity->get_child_by_name(child_name);
            }

            if (child_entity == nullptr)
            {
                YLOG_ERROR("Could not fetch child entity {} in parent {}!", child_name, cloned_entity->yang_name);
                throw(YError{"Could not fetch child entity '" + child_name + "' in parent " + cloned_entity->yang_name});
            }
            else
            {
                YLOG_DEBUG("Created entity child '{}' in parent '{}'", child_entity->get_segment_path(), cloned_entity->yang_name);
            }
            child_entity->parent = cloned_entity.get();
            copy_leaves(child.second.get(), child_entity);
            copy_children(child.second.get(), child_entity);

            if (child_entity->ylist && child_entity->ylist_key_names.size() > 0)
            {
                child_entity->ylist->review(child_entity);
            }
        }
        else {
            YLOG_DEBUG("Child has no data");
        }
    }
}

shared_ptr<Entity> Entity::clone() const
{
    shared_ptr<Entity> cloned_entity = clone_ptr();
    copy_leaves(this, cloned_entity);
    copy_children(this, cloned_entity);
    return cloned_entity;
}

void Entity::set_parent(Entity* p)
{
    parent = p;
}

Entity* Entity::get_parent() const
{
    return parent;
}

augment_capabilities_function Entity::get_augment_capabilities_function() const
{
    return nullptr;
}

std::string Entity::get_bundle_yang_models_location() const
{
    return "";
}

std::string Entity::get_bundle_name() const
{
    return "";
}

std::vector<std::string> Entity::get_order_of_children() const
{
    return {};
}

std::map<std::pair<std::string, std::string>, std::string> Entity::get_namespace_identity_lookup() const
{
    return {};
}

std::string Entity::get_absolute_path() const
{
    return "";
}

bool Entity::operator == (Entity & other) const
{
    if(!has_data() && !other.has_data())
        return true;

    if(!has_data() || !other.has_data())
        return false;

    YLOG_DEBUG("Comparing equality of '{}' and '{}'", get_segment_path(), other.get_segment_path());

    auto const this_children = get_children();
    auto const other_children = other.get_children();

    if(get_entity_path(*this, parent) == get_entity_path(other, other.parent))
    {
        if(this_children.size() == other_children.size())
        {
            for(map<std::string, shared_ptr<Entity>>::const_iterator rit = this_children.begin(), lit = other_children.begin() ;
                    rit!=this_children.end() && lit!=other_children.end();
                    ++rit, ++lit)
            {
                if(*(rit->second) != *(lit->second))
                {
                    YLOG_DEBUG("Children are not equal: '{}' and '{}'", rit->first, lit->first);
                    return false;
                }
            }
        }
    }
    else
    {
        YLOG_DEBUG("Entity paths are not equal: '{}' and '{}'", yang_name, other.yang_name);
        return false;
    }

    return true;
}

bool Entity::operator != (Entity & other) const
{
    if(has_data() && !other.has_data())
        return true;

    if(!has_data() && other.has_data())
        return true;

    YLOG_DEBUG("Comparing inequality of '{}' and '{}'", get_segment_path(), other.get_segment_path());

    auto const & this_children = get_children();
    auto const & other_children = other.get_children();

    if(get_entity_path(*this, parent) == get_entity_path(other, other.parent))
    {
        if(this_children.size() == other_children.size())
        {
            for(map<std::string, shared_ptr<Entity>>::const_iterator rit = this_children.begin(), lit = other_children.begin() ;
                    rit!=this_children.end() && lit!=other_children.end();
                    ++rit, ++lit)
            {
                if(*(rit->second) != *(lit->second))
                {
                    return true;
                }
            }
        }
    }
    else
    {
        YLOG_DEBUG("Entity paths are not equal: '{}' and '{}'", yang_name, other.yang_name);
        return true;
    }

    return false;
}

std::string
Entity::get_ylist_key() const
{
    string key = ylist_key;
    if (!key.empty() && ylist_key_names.size() == 0) {
        try {
            // This is keyless entry of a list. Expected value: 1000000 + key
            auto index = std::stoi(ylist_key) % 1000000;
            ostringstream os;
            os << index;
            key = os.str();
        }
        catch (const std::exception& ex) {
            YLOG_ERROR("Failed to convert key '{}' to string", ylist_key);
        }
    }
    return key;
}

std::ostream& operator<< (std::ostream& stream, Entity& entity)
{
    stream<<get_entity_path(entity, entity.parent);
    auto const & children = entity.get_children();
    if(entity.has_data() && children.size() > 0)
        stream<<endl;
    for(auto const& entry : children)
    {
        if(entry.second->has_data())
            stream<<"  { "<<*(entry.second)<<" }"<<endl;
    }
    return stream;
}

//////////////////////////////////////////////////////////////////
/// EntityPath
//////////////////////////////////////////////////////////////////

EntityPath::EntityPath(const std::string & path, std::vector<std::pair<std::string, LeafData> > & value_paths)
    : path(path), value_paths(value_paths)
{
}

EntityPath::~EntityPath()
{
}

bool EntityPath::operator == (EntityPath & other) const
{
    ostringstream os1, os2;
    os1<<*this;
    os2<<other;
    YLOG_DEBUG("Comparing equality '{}' and '{}'", os1.str(), os2.str());
    return path == other.path && value_paths == other.value_paths;
}

bool EntityPath::operator == (const EntityPath & other) const
{
    ostringstream os1, os2;
    os1<<*this;
    os2<<other;
    YLOG_DEBUG("Comparing const equality of '{}' and '{}'", os1.str(), os2.str());
    return path == other.path && value_paths == other.value_paths;
}

bool EntityPath::operator != (EntityPath & other) const
{
    ostringstream os1, os2;
    os1<<*this;
    os2<<other;
    YLOG_DEBUG("Comparing inequality of '{}' and '{}'", os1.str(), os2.str());
    return path != other.path || value_paths != other.value_paths;
}

bool EntityPath::operator != (const EntityPath & other) const
{
    ostringstream os1, os2;
    os1<<*this;
    os2<<other;
    YLOG_DEBUG("Comparing const inequality of '{}' and '{}'", os1.str(), os2.str());
    return path != other.path || value_paths != other.value_paths;
}

std::ostream& operator<< (std::ostream& stream, const EntityPath& path)
{
    stream << path.path << " ( ";
    for (size_t index=0; index<path.value_paths.size(); index++)
    {
        auto const & value_path = path.value_paths[index];
        stream << value_path.first<<":"<<value_path.second;
        if(index!= path.value_paths.size()-1)
        {
            stream<<", ";
        }
    }
    stream << " )";
    return stream;
}

}
