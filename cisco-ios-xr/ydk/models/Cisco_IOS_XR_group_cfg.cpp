
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_group_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_group_cfg {

Groups::Group::Group()
    :
    	group_name{YType::str, "group-name"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

Groups::Group::~Group()
{
}

bool Groups::Group::has_data() const
{
    return group_name.is_set;
}

bool Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation);
}

std::string Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-group-cfg:groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Groups::Group::get_children()
{
    return children;
}

void Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "Cisco-IOS-XR-group-cfg";
}

Groups::~Groups()
{
}

bool Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-group-cfg:groups";

    return path_buffer.str();

}

EntityPath Groups::get_entity_path(Entity* ancestor) const
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

Entity* Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Groups::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Groups::clone_ptr()
{
    return std::make_unique<Groups>();
}
ApplyGroups::ApplyGroups()
    :
    	apply_group{YType::str, "apply-group"}
{
    yang_name = "apply-groups"; yang_parent_name = "Cisco-IOS-XR-group-cfg";
}

ApplyGroups::~ApplyGroups()
{
}

bool ApplyGroups::has_data() const
{
    return apply_group.is_set;
}

bool ApplyGroups::has_operation() const
{
    return is_set(operation)
	|| is_set(apply_group.operation);
}

std::string ApplyGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-group-cfg:apply-groups";

    return path_buffer.str();

}

EntityPath ApplyGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (apply_group.is_set || is_set(apply_group.operation)) leaf_name_data.push_back(apply_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ApplyGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ApplyGroups::get_children()
{
    return children;
}

void ApplyGroups::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "apply-group")
    {
        apply_group = value;
    }
}

std::unique_ptr<Entity> ApplyGroups::clone_ptr()
{
    return std::make_unique<ApplyGroups>();
}


}
}

