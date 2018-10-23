
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_objmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_objmgr_oper {

ObjectGroup::ObjectGroup()
    :
    port(std::make_shared<ObjectGroup::Port>())
    , network(std::make_shared<ObjectGroup::Network>())
{
    port->parent = this;
    network->parent = this;

    yang_name = "object-group"; yang_parent_name = "Cisco-IOS-XR-infra-objmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ObjectGroup::~ObjectGroup()
{
}

bool ObjectGroup::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data())
	|| (network !=  nullptr && network->has_data());
}

bool ObjectGroup::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (network !=  nullptr && network->has_operation());
}

std::string ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<ObjectGroup::Port>();
        }
        return port;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<ObjectGroup::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    return _children;
}

void ObjectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ObjectGroup::clone_ptr() const
{
    return std::make_shared<ObjectGroup>();
}

std::string ObjectGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ObjectGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ObjectGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ObjectGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ObjectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "network")
        return true;
    return false;
}

ObjectGroup::Port::Port()
    :
    objects(std::make_shared<ObjectGroup::Port::Objects>())
{
    objects->parent = this;

    yang_name = "port"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Port::~Port()
{
}

bool ObjectGroup::Port::has_data() const
{
    if (is_presence_container) return true;
    return (objects !=  nullptr && objects->has_data());
}

bool ObjectGroup::Port::has_operation() const
{
    return is_set(yfilter)
	|| (objects !=  nullptr && objects->has_operation());
}

std::string ObjectGroup::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<ObjectGroup::Port::Objects>();
        }
        return objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(objects != nullptr)
    {
        _children["objects"] = objects;
    }

    return _children;
}

void ObjectGroup::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Objects()
    :
    object(this, {"object_name"})
{

    yang_name = "objects"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Port::Objects::~Objects()
{
}

bool ObjectGroup::Port::Objects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/port/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Port::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto ent_ = std::make_shared<ObjectGroup::Port::Objects::Object>();
        ent_->parent = this;
        object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Port::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::Object()
    :
    object_name{YType::str, "object-name"}
        ,
    nested_groups(std::make_shared<ObjectGroup::Port::Objects::Object::NestedGroups>())
    , operators(std::make_shared<ObjectGroup::Port::Objects::Object::Operators>())
    , port_ranges(std::make_shared<ObjectGroup::Port::Objects::Object::PortRanges>())
    , parent_groups(std::make_shared<ObjectGroup::Port::Objects::Object::ParentGroups>())
{
    nested_groups->parent = this;
    operators->parent = this;
    port_ranges->parent = this;
    parent_groups->parent = this;

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Port::Objects::Object::~Object()
{
}

bool ObjectGroup::Port::Objects::Object::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (operators !=  nullptr && operators->has_data())
	|| (port_ranges !=  nullptr && port_ranges->has_data())
	|| (parent_groups !=  nullptr && parent_groups->has_data());
}

bool ObjectGroup::Port::Objects::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (operators !=  nullptr && operators->has_operation())
	|| (port_ranges !=  nullptr && port_ranges->has_operation())
	|| (parent_groups !=  nullptr && parent_groups->has_operation());
}

std::string ObjectGroup::Port::Objects::Object::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/port/objects/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Port::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Port::Objects::Object::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "operators")
    {
        if(operators == nullptr)
        {
            operators = std::make_shared<ObjectGroup::Port::Objects::Object::Operators>();
        }
        return operators;
    }

    if(child_yang_name == "port-ranges")
    {
        if(port_ranges == nullptr)
        {
            port_ranges = std::make_shared<ObjectGroup::Port::Objects::Object::PortRanges>();
        }
        return port_ranges;
    }

    if(child_yang_name == "parent-groups")
    {
        if(parent_groups == nullptr)
        {
            parent_groups = std::make_shared<ObjectGroup::Port::Objects::Object::ParentGroups>();
        }
        return parent_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nested_groups != nullptr)
    {
        _children["nested-groups"] = nested_groups;
    }

    if(operators != nullptr)
    {
        _children["operators"] = operators;
    }

    if(port_ranges != nullptr)
    {
        _children["port-ranges"] = port_ranges;
    }

    if(parent_groups != nullptr)
    {
        _children["parent-groups"] = parent_groups;
    }

    return _children;
}

void ObjectGroup::Port::Objects::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::Objects::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::Objects::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-groups" || name == "operators" || name == "port-ranges" || name == "parent-groups" || name == "object-name")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroups()
    :
    nested_group(this, {"nested_group_name"})
{

    yang_name = "nested-groups"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nested_group.len(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.len(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::Objects::Object::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::NestedGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-group")
    {
        auto ent_ = std::make_shared<ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup>();
        ent_->parent = this;
        nested_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::NestedGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nested_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Port::Objects::Object::NestedGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::Objects::Object::NestedGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"},
    nested_group_name_xr{YType::str, "nested-group-name-xr"}
{

    yang_name = "nested-group"; yang_parent_name = "nested-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::has_data() const
{
    if (is_presence_container) return true;
    return nested_group_name.is_set
	|| nested_group_name_xr.is_set;
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nested_group_name.yfilter)
	|| ydk::is_set(nested_group_name_xr.yfilter);
}

std::string ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group";
    ADD_KEY_TOKEN(nested_group_name, "nested-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.yfilter)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());
    if (nested_group_name_xr.is_set || is_set(nested_group_name_xr.yfilter)) leaf_name_data.push_back(nested_group_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
        nested_group_name.value_namespace = name_space;
        nested_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nested-group-name-xr")
    {
        nested_group_name_xr = value;
        nested_group_name_xr.value_namespace = name_space;
        nested_group_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name.yfilter = yfilter;
    }
    if(value_path == "nested-group-name-xr")
    {
        nested_group_name_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group-name" || name == "nested-group-name-xr")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::Operators::Operators()
    :
    operator_(this, {})
{

    yang_name = "operators"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::Operators::~Operators()
{
}

bool ObjectGroup::Port::Objects::Object::Operators::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<operator_.len(); index++)
    {
        if(operator_[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::Operators::has_operation() const
{
    for (std::size_t index=0; index<operator_.len(); index++)
    {
        if(operator_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::Objects::Object::Operators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::Operators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::Operators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operator")
    {
        auto ent_ = std::make_shared<ObjectGroup::Port::Objects::Object::Operators::Operator>();
        ent_->parent = this;
        operator_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::Operators::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : operator_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Port::Objects::Object::Operators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::Objects::Object::Operators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::Objects::Object::Operators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::Operators::Operator::Operator()
    :
    operator_type{YType::enumeration, "operator-type"},
    port{YType::str, "port"},
    operator_type_xr{YType::uint32, "operator-type-xr"},
    port_xr{YType::uint32, "port-xr"}
{

    yang_name = "operator"; yang_parent_name = "operators"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::Operators::Operator::~Operator()
{
}

bool ObjectGroup::Port::Objects::Object::Operators::Operator::has_data() const
{
    if (is_presence_container) return true;
    return operator_type.is_set
	|| port.is_set
	|| operator_type_xr.is_set
	|| port_xr.is_set;
}

bool ObjectGroup::Port::Objects::Object::Operators::Operator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_type.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(operator_type_xr.yfilter)
	|| ydk::is_set(port_xr.yfilter);
}

std::string ObjectGroup::Port::Objects::Object::Operators::Operator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::Operators::Operator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_type.is_set || is_set(operator_type.yfilter)) leaf_name_data.push_back(operator_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (operator_type_xr.is_set || is_set(operator_type_xr.yfilter)) leaf_name_data.push_back(operator_type_xr.get_name_leafdata());
    if (port_xr.is_set || is_set(port_xr.yfilter)) leaf_name_data.push_back(port_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::Operators::Operator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::Operators::Operator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Port::Objects::Object::Operators::Operator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator-type")
    {
        operator_type = value;
        operator_type.value_namespace = name_space;
        operator_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operator-type-xr")
    {
        operator_type_xr = value;
        operator_type_xr.value_namespace = name_space;
        operator_type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-xr")
    {
        port_xr = value;
        port_xr.value_namespace = name_space;
        port_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::Objects::Object::Operators::Operator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator-type")
    {
        operator_type.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "operator-type-xr")
    {
        operator_type_xr.yfilter = yfilter;
    }
    if(value_path == "port-xr")
    {
        port_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::Objects::Object::Operators::Operator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator-type" || name == "port" || name == "operator-type-xr" || name == "port-xr")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::PortRanges::PortRanges()
    :
    port_range(this, {})
{

    yang_name = "port-ranges"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::PortRanges::~PortRanges()
{
}

bool ObjectGroup::Port::Objects::Object::PortRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_range.len(); index++)
    {
        if(port_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::PortRanges::has_operation() const
{
    for (std::size_t index=0; index<port_range.len(); index++)
    {
        if(port_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::Objects::Object::PortRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::PortRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::PortRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-range")
    {
        auto ent_ = std::make_shared<ObjectGroup::Port::Objects::Object::PortRanges::PortRange>();
        ent_->parent = this;
        port_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::PortRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Port::Objects::Object::PortRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::Objects::Object::PortRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::Objects::Object::PortRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-range")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::PortRanges::PortRange::PortRange()
    :
    start_port{YType::str, "start-port"},
    end_port{YType::str, "end-port"},
    start_port_xr{YType::uint32, "start-port-xr"},
    end_port_xr{YType::uint32, "end-port-xr"}
{

    yang_name = "port-range"; yang_parent_name = "port-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::PortRanges::PortRange::~PortRange()
{
}

bool ObjectGroup::Port::Objects::Object::PortRanges::PortRange::has_data() const
{
    if (is_presence_container) return true;
    return start_port.is_set
	|| end_port.is_set
	|| start_port_xr.is_set
	|| end_port_xr.is_set;
}

bool ObjectGroup::Port::Objects::Object::PortRanges::PortRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_port.yfilter)
	|| ydk::is_set(end_port.yfilter)
	|| ydk::is_set(start_port_xr.yfilter)
	|| ydk::is_set(end_port_xr.yfilter);
}

std::string ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_port.is_set || is_set(start_port.yfilter)) leaf_name_data.push_back(start_port.get_name_leafdata());
    if (end_port.is_set || is_set(end_port.yfilter)) leaf_name_data.push_back(end_port.get_name_leafdata());
    if (start_port_xr.is_set || is_set(start_port_xr.yfilter)) leaf_name_data.push_back(start_port_xr.get_name_leafdata());
    if (end_port_xr.is_set || is_set(end_port_xr.yfilter)) leaf_name_data.push_back(end_port_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Port::Objects::Object::PortRanges::PortRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-port")
    {
        start_port = value;
        start_port.value_namespace = name_space;
        start_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-port")
    {
        end_port = value;
        end_port.value_namespace = name_space;
        end_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-port-xr")
    {
        start_port_xr = value;
        start_port_xr.value_namespace = name_space;
        start_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-port-xr")
    {
        end_port_xr = value;
        end_port_xr.value_namespace = name_space;
        end_port_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::Objects::Object::PortRanges::PortRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-port")
    {
        start_port.yfilter = yfilter;
    }
    if(value_path == "end-port")
    {
        end_port.yfilter = yfilter;
    }
    if(value_path == "start-port-xr")
    {
        start_port_xr.yfilter = yfilter;
    }
    if(value_path == "end-port-xr")
    {
        end_port_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::Objects::Object::PortRanges::PortRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-port" || name == "end-port" || name == "start-port-xr" || name == "end-port-xr")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroups()
    :
    parent_group(this, {"parent_group_name"})
{

    yang_name = "parent-groups"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::ParentGroups::~ParentGroups()
{
}

bool ObjectGroup::Port::Objects::Object::ParentGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<parent_group.len(); index++)
    {
        if(parent_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::ParentGroups::has_operation() const
{
    for (std::size_t index=0; index<parent_group.len(); index++)
    {
        if(parent_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::Objects::Object::ParentGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::ParentGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::ParentGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-group")
    {
        auto ent_ = std::make_shared<ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup>();
        ent_->parent = this;
        parent_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::ParentGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : parent_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Port::Objects::Object::ParentGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::Objects::Object::ParentGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::Objects::Object::ParentGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-group")
        return true;
    return false;
}

ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::ParentGroup()
    :
    parent_group_name{YType::str, "parent-group-name"},
    parent_name{YType::str, "parent-name"}
{

    yang_name = "parent-group"; yang_parent_name = "parent-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::~ParentGroup()
{
}

bool ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::has_data() const
{
    if (is_presence_container) return true;
    return parent_group_name.is_set
	|| parent_name.is_set;
}

bool ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_group_name.yfilter)
	|| ydk::is_set(parent_name.yfilter);
}

std::string ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-group";
    ADD_KEY_TOKEN(parent_group_name, "parent-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_group_name.is_set || is_set(parent_group_name.yfilter)) leaf_name_data.push_back(parent_group_name.get_name_leafdata());
    if (parent_name.is_set || is_set(parent_name.yfilter)) leaf_name_data.push_back(parent_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-group-name")
    {
        parent_group_name = value;
        parent_group_name.value_namespace = name_space;
        parent_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-name")
    {
        parent_name = value;
        parent_name.value_namespace = name_space;
        parent_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-group-name")
    {
        parent_group_name.yfilter = yfilter;
    }
    if(value_path == "parent-name")
    {
        parent_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::Objects::Object::ParentGroups::ParentGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-group-name" || name == "parent-name")
        return true;
    return false;
}

ObjectGroup::Network::Network()
    :
    ipv6(std::make_shared<ObjectGroup::Network::Ipv6>())
    , ipv4(std::make_shared<ObjectGroup::Network::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "network"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::~Network()
{
}

bool ObjectGroup::Network::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool ObjectGroup::Network::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string ObjectGroup::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<ObjectGroup::Network::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<ObjectGroup::Network::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void ObjectGroup::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Ipv6()
    :
    objects(std::make_shared<ObjectGroup::Network::Ipv6::Objects>())
{
    objects->parent = this;

    yang_name = "ipv6"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::Ipv6::~Ipv6()
{
}

bool ObjectGroup::Network::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (objects !=  nullptr && objects->has_data());
}

bool ObjectGroup::Network::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (objects !=  nullptr && objects->has_operation());
}

std::string ObjectGroup::Network::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/network/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<ObjectGroup::Network::Ipv6::Objects>();
        }
        return objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(objects != nullptr)
    {
        _children["objects"] = objects;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Objects()
    :
    object(this, {"object_name"})
{

    yang_name = "objects"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::Ipv6::Objects::~Objects()
{
}

bool ObjectGroup::Network::Ipv6::Objects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/network/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv6::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object>();
        ent_->parent = this;
        object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::Object()
    :
    object_name{YType::str, "object-name"}
        ,
    nested_groups(std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups>())
    , addresses(std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::Addresses>())
    , address_ranges(std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges>())
    , parent_groups(std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups>())
    , hosts(std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::Hosts>())
{
    nested_groups->parent = this;
    addresses->parent = this;
    address_ranges->parent = this;
    parent_groups->parent = this;
    hosts->parent = this;

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::Ipv6::Objects::Object::~Object()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (parent_groups !=  nullptr && parent_groups->has_data())
	|| (hosts !=  nullptr && hosts->has_data());
}

bool ObjectGroup::Network::Ipv6::Objects::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (parent_groups !=  nullptr && parent_groups->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/network/ipv6/objects/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "parent-groups")
    {
        if(parent_groups == nullptr)
        {
            parent_groups = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups>();
        }
        return parent_groups;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nested_groups != nullptr)
    {
        _children["nested-groups"] = nested_groups;
    }

    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(address_ranges != nullptr)
    {
        _children["address-ranges"] = address_ranges;
    }

    if(parent_groups != nullptr)
    {
        _children["parent-groups"] = parent_groups;
    }

    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::Objects::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::Objects::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-groups" || name == "addresses" || name == "address-ranges" || name == "parent-groups" || name == "hosts" || name == "object-name")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroups()
    :
    nested_group(this, {"nested_group_name"})
{

    yang_name = "nested-groups"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nested_group.len(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.len(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-group")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup>();
        ent_->parent = this;
        nested_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nested_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"},
    nested_group_name_xr{YType::str, "nested-group-name-xr"}
{

    yang_name = "nested-group"; yang_parent_name = "nested-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::has_data() const
{
    if (is_presence_container) return true;
    return nested_group_name.is_set
	|| nested_group_name_xr.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nested_group_name.yfilter)
	|| ydk::is_set(nested_group_name_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group";
    ADD_KEY_TOKEN(nested_group_name, "nested-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.yfilter)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());
    if (nested_group_name_xr.is_set || is_set(nested_group_name_xr.yfilter)) leaf_name_data.push_back(nested_group_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
        nested_group_name.value_namespace = name_space;
        nested_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nested-group-name-xr")
    {
        nested_group_name_xr = value;
        nested_group_name_xr.value_namespace = name_space;
        nested_group_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name.yfilter = yfilter;
    }
    if(value_path == "nested-group-name-xr")
    {
        nested_group_name_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group-name" || name == "nested-group-name-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Addresses()
    :
    address(this, {})
{

    yang_name = "addresses"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::~Addresses()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::Objects::Object::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::Address()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_xr{YType::str, "prefix-xr"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"}
{

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::~Address()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| prefix_xr.is_set
	|| prefix_length_xr.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "prefix-xr" || name == "prefix-length-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRanges()
    :
    address_range(this, {})
{

    yang_name = "address-ranges"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::~AddressRanges()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange>();
        ent_->parent = this;
        address_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"},
    start_address_xr{YType::str, "start-address-xr"},
    end_address_xr{YType::str, "end-address-xr"}
{

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::~AddressRange()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| end_address.is_set
	|| start_address_xr.is_set
	|| end_address_xr.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(start_address_xr.yfilter)
	|| ydk::is_set(end_address_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (start_address_xr.is_set || is_set(start_address_xr.yfilter)) leaf_name_data.push_back(start_address_xr.get_name_leafdata());
    if (end_address_xr.is_set || is_set(end_address_xr.yfilter)) leaf_name_data.push_back(end_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address-xr")
    {
        start_address_xr = value;
        start_address_xr.value_namespace = name_space;
        start_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address-xr")
    {
        end_address_xr = value;
        end_address_xr.value_namespace = name_space;
        end_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "start-address-xr")
    {
        start_address_xr.yfilter = yfilter;
    }
    if(value_path == "end-address-xr")
    {
        end_address_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address" || name == "start-address-xr" || name == "end-address-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroups()
    :
    parent_group(this, {"parent_group_name"})
{

    yang_name = "parent-groups"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::~ParentGroups()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<parent_group.len(); index++)
    {
        if(parent_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::has_operation() const
{
    for (std::size_t index=0; index<parent_group.len(); index++)
    {
        if(parent_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-group")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup>();
        ent_->parent = this;
        parent_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : parent_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-group")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::ParentGroup()
    :
    parent_group_name{YType::str, "parent-group-name"},
    parent_name{YType::str, "parent-name"}
{

    yang_name = "parent-group"; yang_parent_name = "parent-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::~ParentGroup()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::has_data() const
{
    if (is_presence_container) return true;
    return parent_group_name.is_set
	|| parent_name.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_group_name.yfilter)
	|| ydk::is_set(parent_name.yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-group";
    ADD_KEY_TOKEN(parent_group_name, "parent-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_group_name.is_set || is_set(parent_group_name.yfilter)) leaf_name_data.push_back(parent_group_name.get_name_leafdata());
    if (parent_name.is_set || is_set(parent_name.yfilter)) leaf_name_data.push_back(parent_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-group-name")
    {
        parent_group_name = value;
        parent_group_name.value_namespace = name_space;
        parent_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-name")
    {
        parent_name = value;
        parent_name.value_namespace = name_space;
        parent_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-group-name")
    {
        parent_group_name.yfilter = yfilter;
    }
    if(value_path == "parent-name")
    {
        parent_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::Objects::Object::ParentGroups::ParentGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-group-name" || name == "parent-name")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Hosts()
    :
    host(this, {"host_address"})
{

    yang_name = "hosts"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::~Hosts()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::Objects::Object::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::Host()
    :
    host_address{YType::str, "host-address"},
    host_address_xr{YType::str, "host-address-xr"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::~Host()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return host_address.is_set
	|| host_address_xr.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(host_address_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(host_address, "host-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (host_address_xr.is_set || is_set(host_address_xr.yfilter)) leaf_name_data.push_back(host_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address-xr")
    {
        host_address_xr = value;
        host_address_xr.value_namespace = name_space;
        host_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "host-address-xr")
    {
        host_address_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-address" || name == "host-address-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Ipv4()
    :
    objects(std::make_shared<ObjectGroup::Network::Ipv4::Objects>())
{
    objects->parent = this;

    yang_name = "ipv4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::Ipv4::~Ipv4()
{
}

bool ObjectGroup::Network::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (objects !=  nullptr && objects->has_data());
}

bool ObjectGroup::Network::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (objects !=  nullptr && objects->has_operation());
}

std::string ObjectGroup::Network::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/network/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "objects")
    {
        if(objects == nullptr)
        {
            objects = std::make_shared<ObjectGroup::Network::Ipv4::Objects>();
        }
        return objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(objects != nullptr)
    {
        _children["objects"] = objects;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "objects")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Objects()
    :
    object(this, {"object_name"})
{

    yang_name = "objects"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::Ipv4::Objects::~Objects()
{
}

bool ObjectGroup::Network::Ipv4::Objects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/network/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv4::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object>();
        ent_->parent = this;
        object.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : object.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::Objects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::Objects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::Object()
    :
    object_name{YType::str, "object-name"}
        ,
    nested_groups(std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups>())
    , addresses(std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::Addresses>())
    , address_ranges(std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges>())
    , parent_groups(std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups>())
    , hosts(std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::Hosts>())
{
    nested_groups->parent = this;
    addresses->parent = this;
    address_ranges->parent = this;
    parent_groups->parent = this;
    hosts->parent = this;

    yang_name = "object"; yang_parent_name = "objects"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectGroup::Network::Ipv4::Objects::Object::~Object()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (parent_groups !=  nullptr && parent_groups->has_data())
	|| (hosts !=  nullptr && hosts->has_data());
}

bool ObjectGroup::Network::Ipv4::Objects::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (parent_groups !=  nullptr && parent_groups->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-oper:object-group/network/ipv4/objects/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "parent-groups")
    {
        if(parent_groups == nullptr)
        {
            parent_groups = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups>();
        }
        return parent_groups;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nested_groups != nullptr)
    {
        _children["nested-groups"] = nested_groups;
    }

    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(address_ranges != nullptr)
    {
        _children["address-ranges"] = address_ranges;
    }

    if(parent_groups != nullptr)
    {
        _children["parent-groups"] = parent_groups;
    }

    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::Objects::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::Objects::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-groups" || name == "addresses" || name == "address-ranges" || name == "parent-groups" || name == "hosts" || name == "object-name")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroups()
    :
    nested_group(this, {"nested_group_name"})
{

    yang_name = "nested-groups"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nested_group.len(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.len(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-group")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup>();
        ent_->parent = this;
        nested_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nested_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"},
    nested_group_name_xr{YType::str, "nested-group-name-xr"}
{

    yang_name = "nested-group"; yang_parent_name = "nested-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::has_data() const
{
    if (is_presence_container) return true;
    return nested_group_name.is_set
	|| nested_group_name_xr.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nested_group_name.yfilter)
	|| ydk::is_set(nested_group_name_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group";
    ADD_KEY_TOKEN(nested_group_name, "nested-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.yfilter)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());
    if (nested_group_name_xr.is_set || is_set(nested_group_name_xr.yfilter)) leaf_name_data.push_back(nested_group_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
        nested_group_name.value_namespace = name_space;
        nested_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nested-group-name-xr")
    {
        nested_group_name_xr = value;
        nested_group_name_xr.value_namespace = name_space;
        nested_group_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name.yfilter = yfilter;
    }
    if(value_path == "nested-group-name-xr")
    {
        nested_group_name_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group-name" || name == "nested-group-name-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Addresses()
    :
    address(this, {})
{

    yang_name = "addresses"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::~Addresses()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::Objects::Object::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::Address()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_xr{YType::str, "prefix-xr"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"}
{

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::~Address()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| prefix_xr.is_set
	|| prefix_length_xr.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_xr.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.yfilter)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
        prefix_xr.value_namespace = name_space;
        prefix_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "prefix-xr" || name == "prefix-length-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRanges()
    :
    address_range(this, {})
{

    yang_name = "address-ranges"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::~AddressRanges()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange>();
        ent_->parent = this;
        address_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"},
    start_address_xr{YType::str, "start-address-xr"},
    end_address_xr{YType::str, "end-address-xr"}
{

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::~AddressRange()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| end_address.is_set
	|| start_address_xr.is_set
	|| end_address_xr.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(start_address_xr.yfilter)
	|| ydk::is_set(end_address_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (start_address_xr.is_set || is_set(start_address_xr.yfilter)) leaf_name_data.push_back(start_address_xr.get_name_leafdata());
    if (end_address_xr.is_set || is_set(end_address_xr.yfilter)) leaf_name_data.push_back(end_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address-xr")
    {
        start_address_xr = value;
        start_address_xr.value_namespace = name_space;
        start_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address-xr")
    {
        end_address_xr = value;
        end_address_xr.value_namespace = name_space;
        end_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "start-address-xr")
    {
        start_address_xr.yfilter = yfilter;
    }
    if(value_path == "end-address-xr")
    {
        end_address_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address" || name == "start-address-xr" || name == "end-address-xr")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroups()
    :
    parent_group(this, {"parent_group_name"})
{

    yang_name = "parent-groups"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::~ParentGroups()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<parent_group.len(); index++)
    {
        if(parent_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::has_operation() const
{
    for (std::size_t index=0; index<parent_group.len(); index++)
    {
        if(parent_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parent-group")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup>();
        ent_->parent = this;
        parent_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : parent_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-group")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::ParentGroup()
    :
    parent_group_name{YType::str, "parent-group-name"},
    parent_name{YType::str, "parent-name"}
{

    yang_name = "parent-group"; yang_parent_name = "parent-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::~ParentGroup()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::has_data() const
{
    if (is_presence_container) return true;
    return parent_group_name.is_set
	|| parent_name.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parent_group_name.yfilter)
	|| ydk::is_set(parent_name.yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-group";
    ADD_KEY_TOKEN(parent_group_name, "parent-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_group_name.is_set || is_set(parent_group_name.yfilter)) leaf_name_data.push_back(parent_group_name.get_name_leafdata());
    if (parent_name.is_set || is_set(parent_name.yfilter)) leaf_name_data.push_back(parent_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-group-name")
    {
        parent_group_name = value;
        parent_group_name.value_namespace = name_space;
        parent_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-name")
    {
        parent_name = value;
        parent_name.value_namespace = name_space;
        parent_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-group-name")
    {
        parent_group_name.yfilter = yfilter;
    }
    if(value_path == "parent-name")
    {
        parent_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::Objects::Object::ParentGroups::ParentGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parent-group-name" || name == "parent-name")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Hosts()
    :
    host(this, {"host_address"})
{

    yang_name = "hosts"; yang_parent_name = "object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::~Hosts()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::Objects::Object::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::Host()
    :
    host_address{YType::str, "host-address"},
    host_address_xr{YType::str, "host-address-xr"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::~Host()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return host_address.is_set
	|| host_address_xr.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(host_address_xr.yfilter);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    ADD_KEY_TOKEN(host_address, "host-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (host_address_xr.is_set || is_set(host_address_xr.yfilter)) leaf_name_data.push_back(host_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address-xr")
    {
        host_address_xr = value;
        host_address_xr.value_namespace = name_space;
        host_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "host-address-xr")
    {
        host_address_xr.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-address" || name == "host-address-xr")
        return true;
    return false;
}

const Enum::YLeaf EndPort::echo {7, "echo"};
const Enum::YLeaf EndPort::discard {9, "discard"};
const Enum::YLeaf EndPort::daytime {13, "daytime"};
const Enum::YLeaf EndPort::chargen {19, "chargen"};
const Enum::YLeaf EndPort::ftp_data {20, "ftp-data"};
const Enum::YLeaf EndPort::ftp {21, "ftp"};
const Enum::YLeaf EndPort::ssh {22, "ssh"};
const Enum::YLeaf EndPort::telnet {23, "telnet"};
const Enum::YLeaf EndPort::smtp {25, "smtp"};
const Enum::YLeaf EndPort::time {37, "time"};
const Enum::YLeaf EndPort::nicname {43, "nicname"};
const Enum::YLeaf EndPort::tacacs {49, "tacacs"};
const Enum::YLeaf EndPort::domain {53, "domain"};
const Enum::YLeaf EndPort::gopher {70, "gopher"};
const Enum::YLeaf EndPort::finger {79, "finger"};
const Enum::YLeaf EndPort::www {80, "www"};
const Enum::YLeaf EndPort::host_name {101, "host-name"};
const Enum::YLeaf EndPort::pop2 {109, "pop2"};
const Enum::YLeaf EndPort::pop3 {110, "pop3"};
const Enum::YLeaf EndPort::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf EndPort::ident {113, "ident"};
const Enum::YLeaf EndPort::nntp {119, "nntp"};
const Enum::YLeaf EndPort::bgp {179, "bgp"};
const Enum::YLeaf EndPort::irc {194, "irc"};
const Enum::YLeaf EndPort::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf EndPort::exec {512, "exec"};
const Enum::YLeaf EndPort::login {513, "login"};
const Enum::YLeaf EndPort::cmd {514, "cmd"};
const Enum::YLeaf EndPort::lpd {515, "lpd"};
const Enum::YLeaf EndPort::uucp {540, "uucp"};
const Enum::YLeaf EndPort::klogin {543, "klogin"};
const Enum::YLeaf EndPort::kshell {544, "kshell"};
const Enum::YLeaf EndPort::talk {517, "talk"};
const Enum::YLeaf EndPort::ldp {646, "ldp"};

const Enum::YLeaf PortOperator::equal {0, "equal"};
const Enum::YLeaf PortOperator::not_equal {1, "not-equal"};
const Enum::YLeaf PortOperator::greater_than {2, "greater-than"};
const Enum::YLeaf PortOperator::less_than {3, "less-than"};

const Enum::YLeaf Port::echo {7, "echo"};
const Enum::YLeaf Port::discard {9, "discard"};
const Enum::YLeaf Port::daytime {13, "daytime"};
const Enum::YLeaf Port::chargen {19, "chargen"};
const Enum::YLeaf Port::ftp_data {20, "ftp-data"};
const Enum::YLeaf Port::ftp {21, "ftp"};
const Enum::YLeaf Port::ssh {22, "ssh"};
const Enum::YLeaf Port::telnet {23, "telnet"};
const Enum::YLeaf Port::smtp {25, "smtp"};
const Enum::YLeaf Port::time {37, "time"};
const Enum::YLeaf Port::nicname {43, "nicname"};
const Enum::YLeaf Port::tacacs {49, "tacacs"};
const Enum::YLeaf Port::domain {53, "domain"};
const Enum::YLeaf Port::gopher {70, "gopher"};
const Enum::YLeaf Port::finger {79, "finger"};
const Enum::YLeaf Port::www {80, "www"};
const Enum::YLeaf Port::host_name {101, "host-name"};
const Enum::YLeaf Port::pop2 {109, "pop2"};
const Enum::YLeaf Port::pop3 {110, "pop3"};
const Enum::YLeaf Port::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf Port::ident {113, "ident"};
const Enum::YLeaf Port::nntp {119, "nntp"};
const Enum::YLeaf Port::bgp {179, "bgp"};
const Enum::YLeaf Port::irc {194, "irc"};
const Enum::YLeaf Port::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf Port::exec {512, "exec"};
const Enum::YLeaf Port::login {513, "login"};
const Enum::YLeaf Port::cmd {514, "cmd"};
const Enum::YLeaf Port::lpd {515, "lpd"};
const Enum::YLeaf Port::uucp {540, "uucp"};
const Enum::YLeaf Port::klogin {543, "klogin"};
const Enum::YLeaf Port::kshell {544, "kshell"};
const Enum::YLeaf Port::talk {517, "talk"};
const Enum::YLeaf Port::ldp {646, "ldp"};

const Enum::YLeaf StartPort::echo {7, "echo"};
const Enum::YLeaf StartPort::discard {9, "discard"};
const Enum::YLeaf StartPort::daytime {13, "daytime"};
const Enum::YLeaf StartPort::chargen {19, "chargen"};
const Enum::YLeaf StartPort::ftp_data {20, "ftp-data"};
const Enum::YLeaf StartPort::ftp {21, "ftp"};
const Enum::YLeaf StartPort::ssh {22, "ssh"};
const Enum::YLeaf StartPort::telnet {23, "telnet"};
const Enum::YLeaf StartPort::smtp {25, "smtp"};
const Enum::YLeaf StartPort::time {37, "time"};
const Enum::YLeaf StartPort::nicname {43, "nicname"};
const Enum::YLeaf StartPort::tacacs {49, "tacacs"};
const Enum::YLeaf StartPort::domain {53, "domain"};
const Enum::YLeaf StartPort::gopher {70, "gopher"};
const Enum::YLeaf StartPort::finger {79, "finger"};
const Enum::YLeaf StartPort::www {80, "www"};
const Enum::YLeaf StartPort::host_name {101, "host-name"};
const Enum::YLeaf StartPort::pop2 {109, "pop2"};
const Enum::YLeaf StartPort::pop3 {110, "pop3"};
const Enum::YLeaf StartPort::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf StartPort::ident {113, "ident"};
const Enum::YLeaf StartPort::nntp {119, "nntp"};
const Enum::YLeaf StartPort::bgp {179, "bgp"};
const Enum::YLeaf StartPort::irc {194, "irc"};
const Enum::YLeaf StartPort::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf StartPort::exec {512, "exec"};
const Enum::YLeaf StartPort::login {513, "login"};
const Enum::YLeaf StartPort::cmd {514, "cmd"};
const Enum::YLeaf StartPort::lpd {515, "lpd"};
const Enum::YLeaf StartPort::uucp {540, "uucp"};
const Enum::YLeaf StartPort::klogin {543, "klogin"};
const Enum::YLeaf StartPort::kshell {544, "kshell"};
const Enum::YLeaf StartPort::talk {517, "talk"};
const Enum::YLeaf StartPort::ldp {646, "ldp"};


}
}

