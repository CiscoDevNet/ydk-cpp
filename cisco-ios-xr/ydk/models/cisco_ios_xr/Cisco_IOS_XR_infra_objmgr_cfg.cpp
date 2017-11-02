
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_objmgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_objmgr_cfg {

ObjectGroup::ObjectGroup()
    :
    port(std::make_shared<ObjectGroup::Port>())
	,network(std::make_shared<ObjectGroup::Network>())
{
    port->parent = this;
    network->parent = this;

    yang_name = "object-group"; yang_parent_name = "Cisco-IOS-XR-infra-objmgr-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

ObjectGroup::~ObjectGroup()
{
}

bool ObjectGroup::has_data() const
{
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
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void ObjectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ObjectGroup::clone_ptr() const
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
    udf_objects(std::make_shared<ObjectGroup::Port::UdfObjects>())
{
    udf_objects->parent = this;

    yang_name = "port"; yang_parent_name = "object-group"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Port::~Port()
{
}

bool ObjectGroup::Port::has_data() const
{
    return (udf_objects !=  nullptr && udf_objects->has_data());
}

bool ObjectGroup::Port::has_operation() const
{
    return is_set(yfilter)
	|| (udf_objects !=  nullptr && udf_objects->has_operation());
}

std::string ObjectGroup::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/" << get_segment_path();
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

std::shared_ptr<Entity> ObjectGroup::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-objects")
    {
        if(udf_objects == nullptr)
        {
            udf_objects = std::make_shared<ObjectGroup::Port::UdfObjects>();
        }
        return udf_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udf_objects != nullptr)
    {
        children["udf-objects"] = udf_objects;
    }

    return children;
}

void ObjectGroup::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-objects")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObjects()
{

    yang_name = "udf-objects"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Port::UdfObjects::~UdfObjects()
{
}

bool ObjectGroup::Port::UdfObjects::has_data() const
{
    for (std::size_t index=0; index<udf_object.size(); index++)
    {
        if(udf_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::UdfObjects::has_operation() const
{
    for (std::size_t index=0; index<udf_object.size(); index++)
    {
        if(udf_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::UdfObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/port/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Port::UdfObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-object")
    {
        for(auto const & c : udf_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject>();
        c->parent = this;
        udf_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udf_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Port::UdfObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::UdfObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::UdfObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-object")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::UdfObject()
    :
    object_name{YType::str, "object-name"},
    description{YType::str, "description"}
    	,
    operators(std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::Operators>())
	,nested_groups(std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups>())
	,port_ranges(std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::PortRanges>())
{
    operators->parent = this;
    nested_groups->parent = this;
    port_ranges->parent = this;

    yang_name = "udf-object"; yang_parent_name = "udf-objects"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Port::UdfObjects::UdfObject::~UdfObject()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (operators !=  nullptr && operators->has_data())
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (port_ranges !=  nullptr && port_ranges->has_data());
}

bool ObjectGroup::Port::UdfObjects::UdfObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (operators !=  nullptr && operators->has_operation())
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (port_ranges !=  nullptr && port_ranges->has_operation());
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/port/udf-objects/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operators")
    {
        if(operators == nullptr)
        {
            operators = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::Operators>();
        }
        return operators;
    }

    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "port-ranges")
    {
        if(port_ranges == nullptr)
        {
            port_ranges = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::PortRanges>();
        }
        return port_ranges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(operators != nullptr)
    {
        children["operators"] = operators;
    }

    if(nested_groups != nullptr)
    {
        children["nested-groups"] = nested_groups;
    }

    if(port_ranges != nullptr)
    {
        children["port-ranges"] = port_ranges;
    }

    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::UdfObjects::UdfObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::UdfObjects::UdfObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operators" || name == "nested-groups" || name == "port-ranges" || name == "object-name" || name == "description")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operators()
{

    yang_name = "operators"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Port::UdfObjects::UdfObject::Operators::~Operators()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::Operators::has_data() const
{
    for (std::size_t index=0; index<operator_.size(); index++)
    {
        if(operator_[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::UdfObjects::UdfObject::Operators::has_operation() const
{
    for (std::size_t index=0; index<operator_.size(); index++)
    {
        if(operator_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::Operators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::Operators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::Operators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operator")
    {
        for(auto const & c : operator_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_>();
        c->parent = this;
        operator_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::Operators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : operator_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::Operators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::UdfObjects::UdfObject::Operators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::Operators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::Operator_()
    :
    operator_type{YType::enumeration, "operator-type"},
    port{YType::str, "port"}
{

    yang_name = "operator"; yang_parent_name = "operators"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::~Operator_()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::has_data() const
{
    return operator_type.is_set
	|| port.is_set;
}

bool ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_type.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator" <<"[operator-type='" <<operator_type <<"']" <<"[port='" <<port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_type.is_set || is_set(operator_type.yfilter)) leaf_name_data.push_back(operator_type.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator-type")
    {
        operator_type.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator-type" || name == "port")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroups()
{

    yang_name = "nested-groups"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::has_data() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-group")
    {
        for(auto const & c : nested_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup>();
        c->parent = this;
        nested_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nested_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"}
{

    yang_name = "nested-group"; yang_parent_name = "nested-groups"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_data() const
{
    return nested_group_name.is_set;
}

bool ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nested_group_name.yfilter);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.yfilter)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
        nested_group_name.value_namespace = name_space;
        nested_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group-name")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRanges()
{

    yang_name = "port-ranges"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::~PortRanges()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::has_data() const
{
    for (std::size_t index=0; index<port_range.size(); index++)
    {
        if(port_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::has_operation() const
{
    for (std::size_t index=0; index<port_range.size(); index++)
    {
        if(port_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-range")
    {
        for(auto const & c : port_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange>();
        c->parent = this;
        port_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-range")
        return true;
    return false;
}

ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::PortRange()
    :
    start_port{YType::str, "start-port"},
    end_port{YType::str, "end-port"}
{

    yang_name = "port-range"; yang_parent_name = "port-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::~PortRange()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::has_data() const
{
    return start_port.is_set
	|| end_port.is_set;
}

bool ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_port.yfilter)
	|| ydk::is_set(end_port.yfilter);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-range" <<"[start-port='" <<start_port <<"']" <<"[end-port='" <<end_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_port.is_set || is_set(start_port.yfilter)) leaf_name_data.push_back(start_port.get_name_leafdata());
    if (end_port.is_set || is_set(end_port.yfilter)) leaf_name_data.push_back(end_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-port")
    {
        start_port.yfilter = yfilter;
    }
    if(value_path == "end-port")
    {
        end_port.yfilter = yfilter;
    }
}

bool ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-port" || name == "end-port")
        return true;
    return false;
}

ObjectGroup::Network::Network()
    :
    ipv6(std::make_shared<ObjectGroup::Network::Ipv6>())
	,ipv4(std::make_shared<ObjectGroup::Network::Ipv4>())
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
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/" << get_segment_path();
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

std::shared_ptr<Entity> ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
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
    udf_objects(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects>())
{
    udf_objects->parent = this;

    yang_name = "ipv6"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Network::Ipv6::~Ipv6()
{
}

bool ObjectGroup::Network::Ipv6::has_data() const
{
    return (udf_objects !=  nullptr && udf_objects->has_data());
}

bool ObjectGroup::Network::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (udf_objects !=  nullptr && udf_objects->has_operation());
}

std::string ObjectGroup::Network::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/" << get_segment_path();
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

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-objects")
    {
        if(udf_objects == nullptr)
        {
            udf_objects = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects>();
        }
        return udf_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udf_objects != nullptr)
    {
        children["udf-objects"] = udf_objects;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-objects")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObjects()
{

    yang_name = "udf-objects"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Network::Ipv6::UdfObjects::~UdfObjects()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::has_data() const
{
    for (std::size_t index=0; index<udf_object.size(); index++)
    {
        if(udf_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::has_operation() const
{
    for (std::size_t index=0; index<udf_object.size(); index++)
    {
        if(udf_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-object")
    {
        for(auto const & c : udf_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject>();
        c->parent = this;
        udf_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udf_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::UdfObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-object")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::UdfObject()
    :
    object_name{YType::str, "object-name"},
    description{YType::str, "description"}
    	,
    nested_groups(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups>())
	,address_ranges(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges>())
	,addresses(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses>())
	,hosts(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts>())
{
    nested_groups->parent = this;
    address_ranges->parent = this;
    addresses->parent = this;
    hosts->parent = this;

    yang_name = "udf-object"; yang_parent_name = "udf-objects"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::~UdfObject()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (hosts !=  nullptr && hosts->has_data());
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv6/udf-objects/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nested_groups != nullptr)
    {
        children["nested-groups"] = nested_groups;
    }

    if(address_ranges != nullptr)
    {
        children["address-ranges"] = address_ranges;
    }

    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-groups" || name == "address-ranges" || name == "addresses" || name == "hosts" || name == "object-name" || name == "description")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroups()
{

    yang_name = "nested-groups"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::has_data() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-group")
    {
        for(auto const & c : nested_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup>();
        c->parent = this;
        nested_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nested_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"}
{

    yang_name = "nested-group"; yang_parent_name = "nested-groups"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_data() const
{
    return nested_group_name.is_set;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nested_group_name.yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.yfilter)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
        nested_group_name.value_namespace = name_space;
        nested_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group-name")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRanges()
{

    yang_name = "address-ranges"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::~AddressRanges()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"}
{

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::~AddressRange()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::has_data() const
{
    return start_address.is_set
	|| end_address.is_set;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']" <<"[end-address='" <<end_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Addresses()
{

    yang_name = "addresses"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::~Addresses()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::Address()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::~Address()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Hosts()
{

    yang_name = "hosts"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::~Hosts()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::Host()
    :
    host_address{YType::str, "host-address"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::~Host()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::has_data() const
{
    return host_address.is_set;
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_address.yfilter);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-address='" <<host_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::Ipv4()
    :
    udf_objects(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects>())
{
    udf_objects->parent = this;

    yang_name = "ipv4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Network::Ipv4::~Ipv4()
{
}

bool ObjectGroup::Network::Ipv4::has_data() const
{
    return (udf_objects !=  nullptr && udf_objects->has_data());
}

bool ObjectGroup::Network::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (udf_objects !=  nullptr && udf_objects->has_operation());
}

std::string ObjectGroup::Network::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/" << get_segment_path();
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

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-objects")
    {
        if(udf_objects == nullptr)
        {
            udf_objects = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects>();
        }
        return udf_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udf_objects != nullptr)
    {
        children["udf-objects"] = udf_objects;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-objects")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObjects()
{

    yang_name = "udf-objects"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Network::Ipv4::UdfObjects::~UdfObjects()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::has_data() const
{
    for (std::size_t index=0; index<udf_object.size(); index++)
    {
        if(udf_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::has_operation() const
{
    for (std::size_t index=0; index<udf_object.size(); index++)
    {
        if(udf_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udf-object")
    {
        for(auto const & c : udf_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject>();
        c->parent = this;
        udf_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udf_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::UdfObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udf-object")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::UdfObject()
    :
    object_name{YType::str, "object-name"},
    description{YType::str, "description"}
    	,
    nested_groups(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups>())
	,address_ranges(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges>())
	,addresses(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses>())
	,hosts(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts>())
{
    nested_groups->parent = this;
    address_ranges->parent = this;
    addresses->parent = this;
    hosts->parent = this;

    yang_name = "udf-object"; yang_parent_name = "udf-objects"; is_top_level_class = false; has_list_ancestor = false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::~UdfObject()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (hosts !=  nullptr && hosts->has_data());
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv4/udf-objects/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-object" <<"[object-name='" <<object_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nested_groups != nullptr)
    {
        children["nested-groups"] = nested_groups;
    }

    if(address_ranges != nullptr)
    {
        children["address-ranges"] = address_ranges;
    }

    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-groups" || name == "address-ranges" || name == "addresses" || name == "hosts" || name == "object-name" || name == "description")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroups()
{

    yang_name = "nested-groups"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::has_data() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-group")
    {
        for(auto const & c : nested_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup>();
        c->parent = this;
        nested_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nested_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"}
{

    yang_name = "nested-group"; yang_parent_name = "nested-groups"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_data() const
{
    return nested_group_name.is_set;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nested_group_name.yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.yfilter)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
        nested_group_name.value_namespace = name_space;
        nested_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nested-group-name")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRanges()
{

    yang_name = "address-ranges"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::~AddressRanges()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"}
{

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::~AddressRange()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::has_data() const
{
    return start_address.is_set
	|| end_address.is_set;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']" <<"[end-address='" <<end_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Addresses()
{

    yang_name = "addresses"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::~Addresses()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::Address()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::~Address()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Hosts()
{

    yang_name = "hosts"; yang_parent_name = "udf-object"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::~Hosts()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::Host()
    :
    host_address{YType::str, "host-address"}
{

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true;
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::~Host()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::has_data() const
{
    return host_address.is_set;
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_address.yfilter);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-address='" <<host_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-address")
        return true;
    return false;
}

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


}
}

