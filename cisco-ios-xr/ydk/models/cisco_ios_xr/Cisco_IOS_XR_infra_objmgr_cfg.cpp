
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_objmgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_objmgr_cfg {

ObjectGroup::ObjectGroup()
    :
    network(std::make_shared<ObjectGroup::Network>())
	,port(std::make_shared<ObjectGroup::Port>())
{
    network->parent = this;

    port->parent = this;

    yang_name = "object-group"; yang_parent_name = "Cisco-IOS-XR-infra-objmgr-cfg";
}

ObjectGroup::~ObjectGroup()
{
}

bool ObjectGroup::has_data() const
{
    return (network !=  nullptr && network->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool ObjectGroup::has_operation() const
{
    return is_set(operation)
	|| (network !=  nullptr && network->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group";

    return path_buffer.str();

}

const EntityPath ObjectGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<ObjectGroup::Network>();
        }
        return network;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<ObjectGroup::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void ObjectGroup::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Port::Port()
    :
    udf_objects(std::make_shared<ObjectGroup::Port::UdfObjects>())
{
    udf_objects->parent = this;

    yang_name = "port"; yang_parent_name = "object-group";
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
    return is_set(operation)
	|| (udf_objects !=  nullptr && udf_objects->has_operation());
}

std::string ObjectGroup::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::UdfObjects::UdfObjects()
{
    yang_name = "udf-objects"; yang_parent_name = "port";
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
    return is_set(operation);
}

std::string ObjectGroup::Port::UdfObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-objects";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/port/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::UdfObjects::UdfObject::UdfObject()
    :
    object_name{YType::str, "object-name"},
    description{YType::str, "description"}
    	,
    nested_groups(std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups>())
	,operators(std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::Operators>())
	,port_ranges(std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::PortRanges>())
{
    nested_groups->parent = this;

    operators->parent = this;

    port_ranges->parent = this;

    yang_name = "udf-object"; yang_parent_name = "udf-objects";
}

ObjectGroup::Port::UdfObjects::UdfObject::~UdfObject()
{
}

bool ObjectGroup::Port::UdfObjects::UdfObject::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (operators !=  nullptr && operators->has_data())
	|| (port_ranges !=  nullptr && port_ranges->has_data());
}

bool ObjectGroup::Port::UdfObjects::UdfObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(description.operation)
	|| (nested_groups !=  nullptr && nested_groups->has_operation())
	|| (operators !=  nullptr && operators->has_operation())
	|| (port_ranges !=  nullptr && port_ranges->has_operation());
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/port/udf-objects/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ObjectGroup::Port::UdfObjects::UdfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups>();
        }
        return nested_groups;
    }

    if(child_yang_name == "operators")
    {
        if(operators == nullptr)
        {
            operators = std::make_shared<ObjectGroup::Port::UdfObjects::UdfObject::Operators>();
        }
        return operators;
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
    if(nested_groups != nullptr)
    {
        children["nested-groups"] = nested_groups;
    }

    if(operators != nullptr)
    {
        children["operators"] = operators;
    }

    if(port_ranges != nullptr)
    {
        children["port-ranges"] = port_ranges;
    }

    return children;
}

void ObjectGroup::Port::UdfObjects::UdfObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operators()
{
    yang_name = "operators"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::Operators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operators";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::Operators::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operators' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::UdfObject::Operators::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::Operator_()
    :
    operator_type{YType::enumeration, "operator-type"},
    port{YType::str, "port"}
{
    yang_name = "operator"; yang_parent_name = "operators";
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
    return is_set(operation)
	|| is_set(operator_type.operation)
	|| is_set(port.operation);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator" <<"[operator-type='" <<operator_type <<"']" <<"[port='" <<port <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operator_' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_type.is_set || is_set(operator_type.operation)) leaf_name_data.push_back(operator_type.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::UdfObject::Operators::Operator_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "operator-type")
    {
        operator_type = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroups()
{
    yang_name = "nested-groups"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NestedGroups' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"}
{
    yang_name = "nested-group"; yang_parent_name = "nested-groups";
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
    return is_set(operation)
	|| is_set(nested_group_name.operation);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NestedGroup' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.operation)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
    }
}

ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRanges()
{
    yang_name = "port-ranges"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-ranges";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortRanges' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::PortRange()
    :
    start_port{YType::str, "start-port"},
    end_port{YType::str, "end-port"}
{
    yang_name = "port-range"; yang_parent_name = "port-ranges";
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
    return is_set(operation)
	|| is_set(start_port.operation)
	|| is_set(end_port.operation);
}

std::string ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-range" <<"[start-port='" <<start_port <<"']" <<"[end-port='" <<end_port <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortRange' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_port.is_set || is_set(start_port.operation)) leaf_name_data.push_back(start_port.get_name_leafdata());
    if (end_port.is_set || is_set(end_port.operation)) leaf_name_data.push_back(end_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Port::UdfObjects::UdfObject::PortRanges::PortRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-port")
    {
        start_port = value;
    }
    if(value_path == "end-port")
    {
        end_port = value;
    }
}

ObjectGroup::Network::Network()
    :
    ipv4(std::make_shared<ObjectGroup::Network::Ipv4>())
	,ipv6(std::make_shared<ObjectGroup::Network::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "network"; yang_parent_name = "object-group";
}

ObjectGroup::Network::~Network()
{
}

bool ObjectGroup::Network::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool ObjectGroup::Network::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string ObjectGroup::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<ObjectGroup::Network::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<ObjectGroup::Network::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void ObjectGroup::Network::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Ipv6()
    :
    udf_objects(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects>())
{
    udf_objects->parent = this;

    yang_name = "ipv6"; yang_parent_name = "network";
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
    return is_set(operation)
	|| (udf_objects !=  nullptr && udf_objects->has_operation());
}

std::string ObjectGroup::Network::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObjects()
{
    yang_name = "udf-objects"; yang_parent_name = "ipv6";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-objects";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::UdfObject()
    :
    object_name{YType::str, "object-name"},
    description{YType::str, "description"}
    	,
    address_ranges(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges>())
	,addresses(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses>())
	,hosts(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts>())
	,nested_groups(std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups>())
{
    address_ranges->parent = this;

    addresses->parent = this;

    hosts->parent = this;

    nested_groups->parent = this;

    yang_name = "udf-object"; yang_parent_name = "udf-objects";
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::~UdfObject()
{
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (nested_groups !=  nullptr && nested_groups->has_data());
}

bool ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(description.operation)
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (nested_groups !=  nullptr && nested_groups->has_operation());
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv6/udf-objects/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups>();
        }
        return nested_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(nested_groups != nullptr)
    {
        children["nested-groups"] = nested_groups;
    }

    return children;
}

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroups()
{
    yang_name = "nested-groups"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NestedGroups' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"}
{
    yang_name = "nested-group"; yang_parent_name = "nested-groups";
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
    return is_set(operation)
	|| is_set(nested_group_name.operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NestedGroup' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.operation)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
    }
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRanges()
{
    yang_name = "address-ranges"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRanges' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"}
{
    yang_name = "address-range"; yang_parent_name = "address-ranges";
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
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(end_address.operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']" <<"[end-address='" <<end_address <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRange' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.operation)) leaf_name_data.push_back(end_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::AddressRanges::AddressRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "end-address")
    {
        end_address = value;
    }
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::Address()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "addresses";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Addresses::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hosts' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::Host()
    :
    host_address{YType::str, "host-address"}
{
    yang_name = "host"; yang_parent_name = "hosts";
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
    return is_set(operation)
	|| is_set(host_address.operation);
}

std::string ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-address='" <<host_address <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv6::UdfObjects::UdfObject::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-address")
    {
        host_address = value;
    }
}

ObjectGroup::Network::Ipv4::Ipv4()
    :
    udf_objects(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects>())
{
    udf_objects->parent = this;

    yang_name = "ipv4"; yang_parent_name = "network";
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
    return is_set(operation)
	|| (udf_objects !=  nullptr && udf_objects->has_operation());
}

std::string ObjectGroup::Network::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObjects()
{
    yang_name = "udf-objects"; yang_parent_name = "ipv4";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-objects";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::UdfObject()
    :
    object_name{YType::str, "object-name"},
    description{YType::str, "description"}
    	,
    address_ranges(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges>())
	,addresses(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses>())
	,hosts(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts>())
	,nested_groups(std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups>())
{
    address_ranges->parent = this;

    addresses->parent = this;

    hosts->parent = this;

    nested_groups->parent = this;

    yang_name = "udf-object"; yang_parent_name = "udf-objects";
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::~UdfObject()
{
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (nested_groups !=  nullptr && nested_groups->has_data());
}

bool ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(description.operation)
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (nested_groups !=  nullptr && nested_groups->has_operation());
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udf-object" <<"[object-name='" <<object_name <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv4/udf-objects/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "nested-groups")
    {
        if(nested_groups == nullptr)
        {
            nested_groups = std::make_shared<ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups>();
        }
        return nested_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    if(nested_groups != nullptr)
    {
        children["nested-groups"] = nested_groups;
    }

    return children;
}

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroups()
{
    yang_name = "nested-groups"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NestedGroups' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::NestedGroup()
    :
    nested_group_name{YType::str, "nested-group-name"}
{
    yang_name = "nested-group"; yang_parent_name = "nested-groups";
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
    return is_set(operation)
	|| is_set(nested_group_name.operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NestedGroup' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.operation)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::NestedGroups::NestedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
    }
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRanges()
{
    yang_name = "address-ranges"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRanges' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"}
{
    yang_name = "address-range"; yang_parent_name = "address-ranges";
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
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(end_address.operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']" <<"[end-address='" <<end_address <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRange' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.operation)) leaf_name_data.push_back(end_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::AddressRanges::AddressRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "end-address")
    {
        end_address = value;
    }
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::Address()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "addresses";
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
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Addresses::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "udf-object";
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
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hosts' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::Host()
    :
    host_address{YType::str, "host-address"}
{
    yang_name = "host"; yang_parent_name = "hosts";
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
    return is_set(operation)
	|| is_set(host_address.operation);
}

std::string ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-address='" <<host_address <<"']";

    return path_buffer.str();

}

const EntityPath ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_infra_objmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void ObjectGroup::Network::Ipv4::UdfObjects::UdfObject::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-address")
    {
        host_address = value;
    }
}

const Enum::YLeaf EndPortEnum::echo {7, "echo"};
const Enum::YLeaf EndPortEnum::discard {9, "discard"};
const Enum::YLeaf EndPortEnum::daytime {13, "daytime"};
const Enum::YLeaf EndPortEnum::chargen {19, "chargen"};
const Enum::YLeaf EndPortEnum::ftp_data {20, "ftp-data"};
const Enum::YLeaf EndPortEnum::ftp {21, "ftp"};
const Enum::YLeaf EndPortEnum::ssh {22, "ssh"};
const Enum::YLeaf EndPortEnum::telnet {23, "telnet"};
const Enum::YLeaf EndPortEnum::smtp {25, "smtp"};
const Enum::YLeaf EndPortEnum::time {37, "time"};
const Enum::YLeaf EndPortEnum::nicname {43, "nicname"};
const Enum::YLeaf EndPortEnum::tacacs {49, "tacacs"};
const Enum::YLeaf EndPortEnum::domain {53, "domain"};
const Enum::YLeaf EndPortEnum::gopher {70, "gopher"};
const Enum::YLeaf EndPortEnum::finger {79, "finger"};
const Enum::YLeaf EndPortEnum::www {80, "www"};
const Enum::YLeaf EndPortEnum::host_name {101, "host-name"};
const Enum::YLeaf EndPortEnum::pop2 {109, "pop2"};
const Enum::YLeaf EndPortEnum::pop3 {110, "pop3"};
const Enum::YLeaf EndPortEnum::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf EndPortEnum::ident {113, "ident"};
const Enum::YLeaf EndPortEnum::nntp {119, "nntp"};
const Enum::YLeaf EndPortEnum::bgp {179, "bgp"};
const Enum::YLeaf EndPortEnum::irc {194, "irc"};
const Enum::YLeaf EndPortEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf EndPortEnum::exec {512, "exec"};
const Enum::YLeaf EndPortEnum::login {513, "login"};
const Enum::YLeaf EndPortEnum::cmd {514, "cmd"};
const Enum::YLeaf EndPortEnum::lpd {515, "lpd"};
const Enum::YLeaf EndPortEnum::uucp {540, "uucp"};
const Enum::YLeaf EndPortEnum::klogin {543, "klogin"};
const Enum::YLeaf EndPortEnum::kshell {544, "kshell"};
const Enum::YLeaf EndPortEnum::talk {517, "talk"};
const Enum::YLeaf EndPortEnum::ldp {646, "ldp"};

const Enum::YLeaf PortOperatorEnum::equal {0, "equal"};
const Enum::YLeaf PortOperatorEnum::not_equal {1, "not-equal"};
const Enum::YLeaf PortOperatorEnum::greater_than {2, "greater-than"};
const Enum::YLeaf PortOperatorEnum::less_than {3, "less-than"};

const Enum::YLeaf PortEnum::echo {7, "echo"};
const Enum::YLeaf PortEnum::discard {9, "discard"};
const Enum::YLeaf PortEnum::daytime {13, "daytime"};
const Enum::YLeaf PortEnum::chargen {19, "chargen"};
const Enum::YLeaf PortEnum::ftp_data {20, "ftp-data"};
const Enum::YLeaf PortEnum::ftp {21, "ftp"};
const Enum::YLeaf PortEnum::ssh {22, "ssh"};
const Enum::YLeaf PortEnum::telnet {23, "telnet"};
const Enum::YLeaf PortEnum::smtp {25, "smtp"};
const Enum::YLeaf PortEnum::time {37, "time"};
const Enum::YLeaf PortEnum::nicname {43, "nicname"};
const Enum::YLeaf PortEnum::tacacs {49, "tacacs"};
const Enum::YLeaf PortEnum::domain {53, "domain"};
const Enum::YLeaf PortEnum::gopher {70, "gopher"};
const Enum::YLeaf PortEnum::finger {79, "finger"};
const Enum::YLeaf PortEnum::www {80, "www"};
const Enum::YLeaf PortEnum::host_name {101, "host-name"};
const Enum::YLeaf PortEnum::pop2 {109, "pop2"};
const Enum::YLeaf PortEnum::pop3 {110, "pop3"};
const Enum::YLeaf PortEnum::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf PortEnum::ident {113, "ident"};
const Enum::YLeaf PortEnum::nntp {119, "nntp"};
const Enum::YLeaf PortEnum::bgp {179, "bgp"};
const Enum::YLeaf PortEnum::irc {194, "irc"};
const Enum::YLeaf PortEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf PortEnum::exec {512, "exec"};
const Enum::YLeaf PortEnum::login {513, "login"};
const Enum::YLeaf PortEnum::cmd {514, "cmd"};
const Enum::YLeaf PortEnum::lpd {515, "lpd"};
const Enum::YLeaf PortEnum::uucp {540, "uucp"};
const Enum::YLeaf PortEnum::klogin {543, "klogin"};
const Enum::YLeaf PortEnum::kshell {544, "kshell"};
const Enum::YLeaf PortEnum::talk {517, "talk"};
const Enum::YLeaf PortEnum::ldp {646, "ldp"};

const Enum::YLeaf StartPortEnum::echo {7, "echo"};
const Enum::YLeaf StartPortEnum::discard {9, "discard"};
const Enum::YLeaf StartPortEnum::daytime {13, "daytime"};
const Enum::YLeaf StartPortEnum::chargen {19, "chargen"};
const Enum::YLeaf StartPortEnum::ftp_data {20, "ftp-data"};
const Enum::YLeaf StartPortEnum::ftp {21, "ftp"};
const Enum::YLeaf StartPortEnum::ssh {22, "ssh"};
const Enum::YLeaf StartPortEnum::telnet {23, "telnet"};
const Enum::YLeaf StartPortEnum::smtp {25, "smtp"};
const Enum::YLeaf StartPortEnum::time {37, "time"};
const Enum::YLeaf StartPortEnum::nicname {43, "nicname"};
const Enum::YLeaf StartPortEnum::tacacs {49, "tacacs"};
const Enum::YLeaf StartPortEnum::domain {53, "domain"};
const Enum::YLeaf StartPortEnum::gopher {70, "gopher"};
const Enum::YLeaf StartPortEnum::finger {79, "finger"};
const Enum::YLeaf StartPortEnum::www {80, "www"};
const Enum::YLeaf StartPortEnum::host_name {101, "host-name"};
const Enum::YLeaf StartPortEnum::pop2 {109, "pop2"};
const Enum::YLeaf StartPortEnum::pop3 {110, "pop3"};
const Enum::YLeaf StartPortEnum::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf StartPortEnum::ident {113, "ident"};
const Enum::YLeaf StartPortEnum::nntp {119, "nntp"};
const Enum::YLeaf StartPortEnum::bgp {179, "bgp"};
const Enum::YLeaf StartPortEnum::irc {194, "irc"};
const Enum::YLeaf StartPortEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf StartPortEnum::exec {512, "exec"};
const Enum::YLeaf StartPortEnum::login {513, "login"};
const Enum::YLeaf StartPortEnum::cmd {514, "cmd"};
const Enum::YLeaf StartPortEnum::lpd {515, "lpd"};
const Enum::YLeaf StartPortEnum::uucp {540, "uucp"};
const Enum::YLeaf StartPortEnum::klogin {543, "klogin"};
const Enum::YLeaf StartPortEnum::kshell {544, "kshell"};
const Enum::YLeaf StartPortEnum::talk {517, "talk"};
const Enum::YLeaf StartPortEnum::ldp {646, "ldp"};


}
}

