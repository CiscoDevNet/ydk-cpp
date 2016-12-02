
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_objmgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_objmgr_cfg {

ObjectGroup::Port::Objects::Object::Operators::Operator_::Operator_()
    :
    	operator_type{YType::enumeration, "operator-type"},
	 port{YType::str, "port"}
{
    yang_name = "operator"; yang_parent_name = "operators";
}

ObjectGroup::Port::Objects::Object::Operators::Operator_::~Operator_()
{
}

bool ObjectGroup::Port::Objects::Object::Operators::Operator_::has_data() const
{
    return operator_type.is_set
	|| port.is_set;
}

bool ObjectGroup::Port::Objects::Object::Operators::Operator_::has_operation() const
{
    return is_set(operation)
	|| is_set(operator_type.operation)
	|| is_set(port.operation);
}

std::string ObjectGroup::Port::Objects::Object::Operators::Operator_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operator" <<"[operator-type='" <<operator_type.get() <<"']" <<"[port='" <<port.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::Operators::Operator_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_type.is_set || is_set(operator_type.operation)) leaf_name_data.push_back(operator_type.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::Operators::Operator_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::Operators::Operator_::get_children()
{
    return children;
}

void ObjectGroup::Port::Objects::Object::Operators::Operator_::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Port::Objects::Object::Operators::Operators()
{
    yang_name = "operators"; yang_parent_name = "object";
}

ObjectGroup::Port::Objects::Object::Operators::~Operators()
{
}

bool ObjectGroup::Port::Objects::Object::Operators::has_data() const
{
    for (std::size_t index=0; index<operator_.size(); index++)
    {
        if(operator_[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::Operators::has_operation() const
{
    for (std::size_t index=0; index<operator_.size(); index++)
    {
        if(operator_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Port::Objects::Object::Operators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operators";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::Operators::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::Operators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "operator")
    {
        for(auto const & c : operator_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Port::Objects::Object::Operators::Operator_>();
        c->parent = this;
        operator_.push_back(std::move(c));
        children[segment_path] = operator_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::Operators::get_children()
{
    for (auto const & c : operator_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Port::Objects::Object::Operators::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::NestedGroup()
    :
    	nested_group_name{YType::str, "nested-group-name"}
{
    yang_name = "nested-group"; yang_parent_name = "nested-groups";
}

ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::has_data() const
{
    return nested_group_name.is_set;
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(nested_group_name.operation);
}

std::string ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.operation)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::get_children()
{
    return children;
}

void ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
    }
}

ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroups()
{
    yang_name = "nested-groups"; yang_parent_name = "object";
}

ObjectGroup::Port::Objects::Object::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::has_data() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Port::Objects::Object::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::NestedGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nested-group")
    {
        for(auto const & c : nested_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup>();
        c->parent = this;
        nested_group.push_back(std::move(c));
        children[segment_path] = nested_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::NestedGroups::get_children()
{
    for (auto const & c : nested_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Port::Objects::Object::NestedGroups::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::Objects::Object::PortRanges::PortRange::PortRange()
    :
    	end_port{YType::str, "end-port"},
	 start_port{YType::str, "start-port"}
{
    yang_name = "port-range"; yang_parent_name = "port-ranges";
}

ObjectGroup::Port::Objects::Object::PortRanges::PortRange::~PortRange()
{
}

bool ObjectGroup::Port::Objects::Object::PortRanges::PortRange::has_data() const
{
    return end_port.is_set
	|| start_port.is_set;
}

bool ObjectGroup::Port::Objects::Object::PortRanges::PortRange::has_operation() const
{
    return is_set(operation)
	|| is_set(end_port.operation)
	|| is_set(start_port.operation);
}

std::string ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-range" <<"[end-port='" <<end_port.get() <<"']" <<"[start-port='" <<start_port.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_port.is_set || is_set(end_port.operation)) leaf_name_data.push_back(end_port.get_name_leafdata());
    if (start_port.is_set || is_set(start_port.operation)) leaf_name_data.push_back(start_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::PortRanges::PortRange::get_children()
{
    return children;
}

void ObjectGroup::Port::Objects::Object::PortRanges::PortRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-port")
    {
        end_port = value;
    }
    if(value_path == "start-port")
    {
        start_port = value;
    }
}

ObjectGroup::Port::Objects::Object::PortRanges::PortRanges()
{
    yang_name = "port-ranges"; yang_parent_name = "object";
}

ObjectGroup::Port::Objects::Object::PortRanges::~PortRanges()
{
}

bool ObjectGroup::Port::Objects::Object::PortRanges::has_data() const
{
    for (std::size_t index=0; index<port_range.size(); index++)
    {
        if(port_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::Object::PortRanges::has_operation() const
{
    for (std::size_t index=0; index<port_range.size(); index++)
    {
        if(port_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Port::Objects::Object::PortRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-ranges";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::PortRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::PortRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port-range")
    {
        for(auto const & c : port_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Port::Objects::Object::PortRanges::PortRange>();
        c->parent = this;
        port_range.push_back(std::move(c));
        children[segment_path] = port_range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::PortRanges::get_children()
{
    for (auto const & c : port_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Port::Objects::Object::PortRanges::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::Objects::Object::Object()
    :
    	object_name{YType::str, "object-name"},
	 description{YType::str, "description"}
    	,
    nested_groups(std::make_unique<ObjectGroup::Port::Objects::Object::NestedGroups>())
	,operators(std::make_unique<ObjectGroup::Port::Objects::Object::Operators>())
	,port_ranges(std::make_unique<ObjectGroup::Port::Objects::Object::PortRanges>())
{
    nested_groups->parent = this;
    children["nested-groups"] = nested_groups.get();

    operators->parent = this;
    children["operators"] = operators.get();

    port_ranges->parent = this;
    children["port-ranges"] = port_ranges.get();

    yang_name = "object"; yang_parent_name = "objects";
}

ObjectGroup::Port::Objects::Object::~Object()
{
}

bool ObjectGroup::Port::Objects::Object::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (nested_groups !=  nullptr && nested_groups->has_data())
	|| (operators !=  nullptr && operators->has_data())
	|| (port_ranges !=  nullptr && port_ranges->has_data());
}

bool ObjectGroup::Port::Objects::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(description.operation)
	|| (nested_groups !=  nullptr && is_set(nested_groups->operation))
	|| (operators !=  nullptr && is_set(operators->operation))
	|| (port_ranges !=  nullptr && is_set(port_ranges->operation));
}

std::string ObjectGroup::Port::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object-name='" <<object_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/port/objects/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nested-groups")
    {
        if(nested_groups != nullptr)
        {
            children["nested-groups"] = nested_groups.get();
        }
        else
        {
            nested_groups = std::make_unique<ObjectGroup::Port::Objects::Object::NestedGroups>();
            nested_groups->parent = this;
            children["nested-groups"] = nested_groups.get();
        }
        return children.at("nested-groups");
    }

    if(child_yang_name == "operators")
    {
        if(operators != nullptr)
        {
            children["operators"] = operators.get();
        }
        else
        {
            operators = std::make_unique<ObjectGroup::Port::Objects::Object::Operators>();
            operators->parent = this;
            children["operators"] = operators.get();
        }
        return children.at("operators");
    }

    if(child_yang_name == "port-ranges")
    {
        if(port_ranges != nullptr)
        {
            children["port-ranges"] = port_ranges.get();
        }
        else
        {
            port_ranges = std::make_unique<ObjectGroup::Port::Objects::Object::PortRanges>();
            port_ranges->parent = this;
            children["port-ranges"] = port_ranges.get();
        }
        return children.at("port-ranges");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::Object::get_children()
{
    if(children.find("nested-groups") == children.end())
    {
        if(nested_groups != nullptr)
        {
            children["nested-groups"] = nested_groups.get();
        }
    }

    if(children.find("operators") == children.end())
    {
        if(operators != nullptr)
        {
            children["operators"] = operators.get();
        }
    }

    if(children.find("port-ranges") == children.end())
    {
        if(port_ranges != nullptr)
        {
            children["port-ranges"] = port_ranges.get();
        }
    }

    return children;
}

void ObjectGroup::Port::Objects::Object::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Port::Objects::Objects()
{
    yang_name = "objects"; yang_parent_name = "port";
}

ObjectGroup::Port::Objects::~Objects()
{
}

bool ObjectGroup::Port::Objects::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Port::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Port::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::Objects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/port/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Port::Objects::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::Objects::get_children()
{
    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Port::Objects::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Port::Port()
    :
    objects(std::make_unique<ObjectGroup::Port::Objects>())
{
    objects->parent = this;
    children["objects"] = objects.get();

    yang_name = "port"; yang_parent_name = "object-group";
}

ObjectGroup::Port::~Port()
{
}

bool ObjectGroup::Port::has_data() const
{
    return (objects !=  nullptr && objects->has_data());
}

bool ObjectGroup::Port::has_operation() const
{
    return is_set(operation)
	|| (objects !=  nullptr && is_set(objects->operation));
}

std::string ObjectGroup::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

EntityPath ObjectGroup::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "objects")
    {
        if(objects != nullptr)
        {
            children["objects"] = objects.get();
        }
        else
        {
            objects = std::make_unique<ObjectGroup::Port::Objects>();
            objects->parent = this;
            children["objects"] = objects.get();
        }
        return children.at("objects");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Port::get_children()
{
    if(children.find("objects") == children.end())
    {
        if(objects != nullptr)
        {
            children["objects"] = objects.get();
        }
    }

    return children;
}

void ObjectGroup::Port::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::NestedGroup()
    :
    	nested_group_name{YType::str, "nested-group-name"}
{
    yang_name = "nested-group"; yang_parent_name = "nested-groups";
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::has_data() const
{
    return nested_group_name.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(nested_group_name.operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.operation)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
    }
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroups()
{
    yang_name = "nested-groups"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::has_data() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nested-group")
    {
        for(auto const & c : nested_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup>();
        c->parent = this;
        nested_group.push_back(std::move(c));
        children[segment_path] = nested_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::get_children()
{
    for (auto const & c : nested_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::AddressRange()
    :
    	end_address{YType::str, "end-address"},
	 start_address{YType::str, "start-address"}
{
    yang_name = "address-range"; yang_parent_name = "address-ranges";
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::~AddressRange()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::has_data() const
{
    return end_address.is_set
	|| start_address.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::has_operation() const
{
    return is_set(operation)
	|| is_set(end_address.operation)
	|| is_set(start_address.operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[end-address='" <<end_address.get() <<"']" <<"[start-address='" <<start_address.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_address.is_set || is_set(end_address.operation)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-address")
    {
        end_address = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRanges()
{
    yang_name = "address-ranges"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::~AddressRanges()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(std::move(c));
        children[segment_path] = address_range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::get_children()
{
    for (auto const & c : address_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::Address()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "addresses";
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::~Address()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[prefix='" <<prefix.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv6::Objects::Object::Addresses::~Addresses()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::Addresses::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Addresses::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::Host()
    :
    	host_address{YType::str, "host-address"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::~Host()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::has_data() const
{
    return host_address.is_set;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(host_address.operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-address='" <<host_address.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-address")
    {
        host_address = value;
    }
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv6::Objects::Object::Hosts::~Hosts()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::Object::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::Hosts::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Objects::Object::Object()
    :
    	object_name{YType::str, "object-name"},
	 description{YType::str, "description"}
    	,
    address_ranges(std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges>())
	,addresses(std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::Addresses>())
	,hosts(std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::Hosts>())
	,nested_groups(std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups>())
{
    address_ranges->parent = this;
    children["address-ranges"] = address_ranges.get();

    addresses->parent = this;
    children["addresses"] = addresses.get();

    hosts->parent = this;
    children["hosts"] = hosts.get();

    nested_groups->parent = this;
    children["nested-groups"] = nested_groups.get();

    yang_name = "object"; yang_parent_name = "objects";
}

ObjectGroup::Network::Ipv6::Objects::Object::~Object()
{
}

bool ObjectGroup::Network::Ipv6::Objects::Object::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (nested_groups !=  nullptr && nested_groups->has_data());
}

bool ObjectGroup::Network::Ipv6::Objects::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(description.operation)
	|| (address_ranges !=  nullptr && is_set(address_ranges->operation))
	|| (addresses !=  nullptr && is_set(addresses->operation))
	|| (hosts !=  nullptr && is_set(hosts->operation))
	|| (nested_groups !=  nullptr && is_set(nested_groups->operation));
}

std::string ObjectGroup::Network::Ipv6::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object-name='" <<object_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv6/objects/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges != nullptr)
        {
            children["address-ranges"] = address_ranges.get();
        }
        else
        {
            address_ranges = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges>();
            address_ranges->parent = this;
            children["address-ranges"] = address_ranges.get();
        }
        return children.at("address-ranges");
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
        else
        {
            addresses = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses.get();
        }
        return children.at("addresses");
    }

    if(child_yang_name == "hosts")
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
        else
        {
            hosts = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts.get();
        }
        return children.at("hosts");
    }

    if(child_yang_name == "nested-groups")
    {
        if(nested_groups != nullptr)
        {
            children["nested-groups"] = nested_groups.get();
        }
        else
        {
            nested_groups = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups>();
            nested_groups->parent = this;
            children["nested-groups"] = nested_groups.get();
        }
        return children.at("nested-groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::Object::get_children()
{
    if(children.find("address-ranges") == children.end())
    {
        if(address_ranges != nullptr)
        {
            children["address-ranges"] = address_ranges.get();
        }
    }

    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
    }

    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
    }

    if(children.find("nested-groups") == children.end())
    {
        if(nested_groups != nullptr)
        {
            children["nested-groups"] = nested_groups.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::Objects::Object::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Network::Ipv6::Objects::Objects()
{
    yang_name = "objects"; yang_parent_name = "ipv6";
}

ObjectGroup::Network::Ipv6::Objects::~Objects()
{
}

bool ObjectGroup::Network::Ipv6::Objects::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv6::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv6::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::Objects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv6::Objects::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::Objects::get_children()
{
    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::Objects::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv6::Ipv6()
    :
    objects(std::make_unique<ObjectGroup::Network::Ipv6::Objects>())
{
    objects->parent = this;
    children["objects"] = objects.get();

    yang_name = "ipv6"; yang_parent_name = "network";
}

ObjectGroup::Network::Ipv6::~Ipv6()
{
}

bool ObjectGroup::Network::Ipv6::has_data() const
{
    return (objects !=  nullptr && objects->has_data());
}

bool ObjectGroup::Network::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (objects !=  nullptr && is_set(objects->operation));
}

std::string ObjectGroup::Network::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "objects")
    {
        if(objects != nullptr)
        {
            children["objects"] = objects.get();
        }
        else
        {
            objects = std::make_unique<ObjectGroup::Network::Ipv6::Objects>();
            objects->parent = this;
            children["objects"] = objects.get();
        }
        return children.at("objects");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv6::get_children()
{
    if(children.find("objects") == children.end())
    {
        if(objects != nullptr)
        {
            children["objects"] = objects.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::NestedGroup()
    :
    	nested_group_name{YType::str, "nested-group-name"}
{
    yang_name = "nested-group"; yang_parent_name = "nested-groups";
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::~NestedGroup()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::has_data() const
{
    return nested_group_name.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(nested_group_name.operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-group" <<"[nested-group-name='" <<nested_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nested_group_name.is_set || is_set(nested_group_name.operation)) leaf_name_data.push_back(nested_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nested-group-name")
    {
        nested_group_name = value;
    }
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroups()
{
    yang_name = "nested-groups"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::~NestedGroups()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::has_data() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::has_operation() const
{
    for (std::size_t index=0; index<nested_group.size(); index++)
    {
        if(nested_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nested-groups";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nested-group")
    {
        for(auto const & c : nested_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup>();
        c->parent = this;
        nested_group.push_back(std::move(c));
        children[segment_path] = nested_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::get_children()
{
    for (auto const & c : nested_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::AddressRange()
    :
    	end_address{YType::str, "end-address"},
	 start_address{YType::str, "start-address"}
{
    yang_name = "address-range"; yang_parent_name = "address-ranges";
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::~AddressRange()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::has_data() const
{
    return end_address.is_set
	|| start_address.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::has_operation() const
{
    return is_set(operation)
	|| is_set(end_address.operation)
	|| is_set(start_address.operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[end-address='" <<end_address.get() <<"']" <<"[start-address='" <<start_address.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_address.is_set || is_set(end_address.operation)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-address")
    {
        end_address = value;
    }
    if(value_path == "start-address")
    {
        start_address = value;
    }
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRanges()
{
    yang_name = "address-ranges"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::~AddressRanges()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(std::move(c));
        children[segment_path] = address_range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::get_children()
{
    for (auto const & c : address_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::Address()
    :
    	prefix{YType::str, "prefix"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "addresses";
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::~Address()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[prefix='" <<prefix.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv4::Objects::Object::Addresses::~Addresses()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::Addresses::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Addresses::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::Host()
    :
    	host_address{YType::str, "host-address"}
{
    yang_name = "host"; yang_parent_name = "hosts";
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::~Host()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::has_data() const
{
    return host_address.is_set;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(host_address.operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-address='" <<host_address.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::get_children()
{
    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-address")
    {
        host_address = value;
    }
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "object";
}

ObjectGroup::Network::Ipv4::Objects::Object::Hosts::~Hosts()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::Object::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::Hosts::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::Objects::Object::Object()
    :
    	object_name{YType::str, "object-name"},
	 description{YType::str, "description"}
    	,
    address_ranges(std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges>())
	,addresses(std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::Addresses>())
	,hosts(std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::Hosts>())
	,nested_groups(std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups>())
{
    address_ranges->parent = this;
    children["address-ranges"] = address_ranges.get();

    addresses->parent = this;
    children["addresses"] = addresses.get();

    hosts->parent = this;
    children["hosts"] = hosts.get();

    nested_groups->parent = this;
    children["nested-groups"] = nested_groups.get();

    yang_name = "object"; yang_parent_name = "objects";
}

ObjectGroup::Network::Ipv4::Objects::Object::~Object()
{
}

bool ObjectGroup::Network::Ipv4::Objects::Object::has_data() const
{
    return object_name.is_set
	|| description.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (hosts !=  nullptr && hosts->has_data())
	|| (nested_groups !=  nullptr && nested_groups->has_data());
}

bool ObjectGroup::Network::Ipv4::Objects::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(description.operation)
	|| (address_ranges !=  nullptr && is_set(address_ranges->operation))
	|| (addresses !=  nullptr && is_set(addresses->operation))
	|| (hosts !=  nullptr && is_set(hosts->operation))
	|| (nested_groups !=  nullptr && is_set(nested_groups->operation));
}

std::string ObjectGroup::Network::Ipv4::Objects::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[object-name='" <<object_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv4/objects/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges != nullptr)
        {
            children["address-ranges"] = address_ranges.get();
        }
        else
        {
            address_ranges = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges>();
            address_ranges->parent = this;
            children["address-ranges"] = address_ranges.get();
        }
        return children.at("address-ranges");
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
        else
        {
            addresses = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses.get();
        }
        return children.at("addresses");
    }

    if(child_yang_name == "hosts")
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
        else
        {
            hosts = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts.get();
        }
        return children.at("hosts");
    }

    if(child_yang_name == "nested-groups")
    {
        if(nested_groups != nullptr)
        {
            children["nested-groups"] = nested_groups.get();
        }
        else
        {
            nested_groups = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups>();
            nested_groups->parent = this;
            children["nested-groups"] = nested_groups.get();
        }
        return children.at("nested-groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::Object::get_children()
{
    if(children.find("address-ranges") == children.end())
    {
        if(address_ranges != nullptr)
        {
            children["address-ranges"] = address_ranges.get();
        }
    }

    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
    }

    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
    }

    if(children.find("nested-groups") == children.end())
    {
        if(nested_groups != nullptr)
        {
            children["nested-groups"] = nested_groups.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::Objects::Object::set_value(const std::string & value_path, std::string value)
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

ObjectGroup::Network::Ipv4::Objects::Objects()
{
    yang_name = "objects"; yang_parent_name = "ipv4";
}

ObjectGroup::Network::Ipv4::Objects::~Objects()
{
}

bool ObjectGroup::Network::Ipv4::Objects::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectGroup::Network::Ipv4::Objects::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectGroup::Network::Ipv4::Objects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "objects";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::Objects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::Objects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectGroup::Network::Ipv4::Objects::Object>();
        c->parent = this;
        object.push_back(std::move(c));
        children[segment_path] = object.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::Objects::get_children()
{
    for (auto const & c : object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::Objects::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Ipv4::Ipv4()
    :
    objects(std::make_unique<ObjectGroup::Network::Ipv4::Objects>())
{
    objects->parent = this;
    children["objects"] = objects.get();

    yang_name = "ipv4"; yang_parent_name = "network";
}

ObjectGroup::Network::Ipv4::~Ipv4()
{
}

bool ObjectGroup::Network::Ipv4::has_data() const
{
    return (objects !=  nullptr && objects->has_data());
}

bool ObjectGroup::Network::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (objects !=  nullptr && is_set(objects->operation));
}

std::string ObjectGroup::Network::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/network/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "objects")
    {
        if(objects != nullptr)
        {
            children["objects"] = objects.get();
        }
        else
        {
            objects = std::make_unique<ObjectGroup::Network::Ipv4::Objects>();
            objects->parent = this;
            children["objects"] = objects.get();
        }
        return children.at("objects");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::Ipv4::get_children()
{
    if(children.find("objects") == children.end())
    {
        if(objects != nullptr)
        {
            children["objects"] = objects.get();
        }
    }

    return children;
}

void ObjectGroup::Network::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::Network::Network()
    :
    ipv4(std::make_unique<ObjectGroup::Network::Ipv4>())
	,ipv6(std::make_unique<ObjectGroup::Network::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

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
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation));
}

std::string ObjectGroup::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

EntityPath ObjectGroup::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<ObjectGroup::Network::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4.get();
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
        else
        {
            ipv6 = std::make_unique<ObjectGroup::Network::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::Network::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
    }

    return children;
}

void ObjectGroup::Network::set_value(const std::string & value_path, std::string value)
{
}

ObjectGroup::ObjectGroup()
    :
    network(std::make_unique<ObjectGroup::Network>())
	,port(std::make_unique<ObjectGroup::Port>())
{
    network->parent = this;
    children["network"] = network.get();

    port->parent = this;
    children["port"] = port.get();

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
	|| (network !=  nullptr && is_set(network->operation))
	|| (port !=  nullptr && is_set(port->operation));
}

std::string ObjectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-objmgr-cfg:object-group";

    return path_buffer.str();

}

EntityPath ObjectGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network")
    {
        if(network != nullptr)
        {
            children["network"] = network.get();
        }
        else
        {
            network = std::make_unique<ObjectGroup::Network>();
            network->parent = this;
            children["network"] = network.get();
        }
        return children.at("network");
    }

    if(child_yang_name == "port")
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
        else
        {
            port = std::make_unique<ObjectGroup::Port>();
            port->parent = this;
            children["port"] = port.get();
        }
        return children.at("port");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectGroup::get_children()
{
    if(children.find("network") == children.end())
    {
        if(network != nullptr)
        {
            children["network"] = network.get();
        }
    }

    if(children.find("port") == children.end())
    {
        if(port != nullptr)
        {
            children["port"] = port.get();
        }
    }

    return children;
}

void ObjectGroup::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ObjectGroup::clone_ptr()
{
    return std::make_unique<ObjectGroup>();
}

const Enum::Value EndPortEnum::echo {7, "echo"};
const Enum::Value EndPortEnum::discard {9, "discard"};
const Enum::Value EndPortEnum::daytime {13, "daytime"};
const Enum::Value EndPortEnum::chargen {19, "chargen"};
const Enum::Value EndPortEnum::ftp_data {20, "ftp-data"};
const Enum::Value EndPortEnum::ftp {21, "ftp"};
const Enum::Value EndPortEnum::ssh {22, "ssh"};
const Enum::Value EndPortEnum::telnet {23, "telnet"};
const Enum::Value EndPortEnum::smtp {25, "smtp"};
const Enum::Value EndPortEnum::time {37, "time"};
const Enum::Value EndPortEnum::nicname {43, "nicname"};
const Enum::Value EndPortEnum::tacacs {49, "tacacs"};
const Enum::Value EndPortEnum::domain {53, "domain"};
const Enum::Value EndPortEnum::gopher {70, "gopher"};
const Enum::Value EndPortEnum::finger {79, "finger"};
const Enum::Value EndPortEnum::www {80, "www"};
const Enum::Value EndPortEnum::host_name {101, "host-name"};
const Enum::Value EndPortEnum::pop2 {109, "pop2"};
const Enum::Value EndPortEnum::pop3 {110, "pop3"};
const Enum::Value EndPortEnum::sun_rpc {111, "sun-rpc"};
const Enum::Value EndPortEnum::ident {113, "ident"};
const Enum::Value EndPortEnum::nntp {119, "nntp"};
const Enum::Value EndPortEnum::bgp {179, "bgp"};
const Enum::Value EndPortEnum::irc {194, "irc"};
const Enum::Value EndPortEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::Value EndPortEnum::exec {512, "exec"};
const Enum::Value EndPortEnum::login {513, "login"};
const Enum::Value EndPortEnum::cmd {514, "cmd"};
const Enum::Value EndPortEnum::lpd {515, "lpd"};
const Enum::Value EndPortEnum::uucp {540, "uucp"};
const Enum::Value EndPortEnum::klogin {543, "klogin"};
const Enum::Value EndPortEnum::kshell {544, "kshell"};
const Enum::Value EndPortEnum::talk {517, "talk"};
const Enum::Value EndPortEnum::ldp {646, "ldp"};

const Enum::Value PortOperatorEnum::equal {0, "equal"};
const Enum::Value PortOperatorEnum::not_equal {1, "not-equal"};
const Enum::Value PortOperatorEnum::greater_than {2, "greater-than"};
const Enum::Value PortOperatorEnum::less_than {3, "less-than"};

const Enum::Value PortEnum::echo {7, "echo"};
const Enum::Value PortEnum::discard {9, "discard"};
const Enum::Value PortEnum::daytime {13, "daytime"};
const Enum::Value PortEnum::chargen {19, "chargen"};
const Enum::Value PortEnum::ftp_data {20, "ftp-data"};
const Enum::Value PortEnum::ftp {21, "ftp"};
const Enum::Value PortEnum::ssh {22, "ssh"};
const Enum::Value PortEnum::telnet {23, "telnet"};
const Enum::Value PortEnum::smtp {25, "smtp"};
const Enum::Value PortEnum::time {37, "time"};
const Enum::Value PortEnum::nicname {43, "nicname"};
const Enum::Value PortEnum::tacacs {49, "tacacs"};
const Enum::Value PortEnum::domain {53, "domain"};
const Enum::Value PortEnum::gopher {70, "gopher"};
const Enum::Value PortEnum::finger {79, "finger"};
const Enum::Value PortEnum::www {80, "www"};
const Enum::Value PortEnum::host_name {101, "host-name"};
const Enum::Value PortEnum::pop2 {109, "pop2"};
const Enum::Value PortEnum::pop3 {110, "pop3"};
const Enum::Value PortEnum::sun_rpc {111, "sun-rpc"};
const Enum::Value PortEnum::ident {113, "ident"};
const Enum::Value PortEnum::nntp {119, "nntp"};
const Enum::Value PortEnum::bgp {179, "bgp"};
const Enum::Value PortEnum::irc {194, "irc"};
const Enum::Value PortEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::Value PortEnum::exec {512, "exec"};
const Enum::Value PortEnum::login {513, "login"};
const Enum::Value PortEnum::cmd {514, "cmd"};
const Enum::Value PortEnum::lpd {515, "lpd"};
const Enum::Value PortEnum::uucp {540, "uucp"};
const Enum::Value PortEnum::klogin {543, "klogin"};
const Enum::Value PortEnum::kshell {544, "kshell"};
const Enum::Value PortEnum::talk {517, "talk"};
const Enum::Value PortEnum::ldp {646, "ldp"};

const Enum::Value StartPortEnum::echo {7, "echo"};
const Enum::Value StartPortEnum::discard {9, "discard"};
const Enum::Value StartPortEnum::daytime {13, "daytime"};
const Enum::Value StartPortEnum::chargen {19, "chargen"};
const Enum::Value StartPortEnum::ftp_data {20, "ftp-data"};
const Enum::Value StartPortEnum::ftp {21, "ftp"};
const Enum::Value StartPortEnum::ssh {22, "ssh"};
const Enum::Value StartPortEnum::telnet {23, "telnet"};
const Enum::Value StartPortEnum::smtp {25, "smtp"};
const Enum::Value StartPortEnum::time {37, "time"};
const Enum::Value StartPortEnum::nicname {43, "nicname"};
const Enum::Value StartPortEnum::tacacs {49, "tacacs"};
const Enum::Value StartPortEnum::domain {53, "domain"};
const Enum::Value StartPortEnum::gopher {70, "gopher"};
const Enum::Value StartPortEnum::finger {79, "finger"};
const Enum::Value StartPortEnum::www {80, "www"};
const Enum::Value StartPortEnum::host_name {101, "host-name"};
const Enum::Value StartPortEnum::pop2 {109, "pop2"};
const Enum::Value StartPortEnum::pop3 {110, "pop3"};
const Enum::Value StartPortEnum::sun_rpc {111, "sun-rpc"};
const Enum::Value StartPortEnum::ident {113, "ident"};
const Enum::Value StartPortEnum::nntp {119, "nntp"};
const Enum::Value StartPortEnum::bgp {179, "bgp"};
const Enum::Value StartPortEnum::irc {194, "irc"};
const Enum::Value StartPortEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::Value StartPortEnum::exec {512, "exec"};
const Enum::Value StartPortEnum::login {513, "login"};
const Enum::Value StartPortEnum::cmd {514, "cmd"};
const Enum::Value StartPortEnum::lpd {515, "lpd"};
const Enum::Value StartPortEnum::uucp {540, "uucp"};
const Enum::Value StartPortEnum::klogin {543, "klogin"};
const Enum::Value StartPortEnum::kshell {544, "kshell"};
const Enum::Value StartPortEnum::talk {517, "talk"};
const Enum::Value StartPortEnum::ldp {646, "ldp"};


}
}

