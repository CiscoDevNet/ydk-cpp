
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_rgmgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_rgmgr_cfg {

RedundancyGroupManager::Aps::DefaultRedundancyGroup::DefaultRedundancyGroup()
    :
    	backup_interface_name{YType::str, "backup-interface-name"},
	 next_hop_address{YType::str, "next-hop-address"}
{
    yang_name = "default-redundancy-group"; yang_parent_name = "aps";
}

RedundancyGroupManager::Aps::DefaultRedundancyGroup::~DefaultRedundancyGroup()
{
}

bool RedundancyGroupManager::Aps::DefaultRedundancyGroup::has_data() const
{
    return backup_interface_name.is_set
	|| next_hop_address.is_set;
}

bool RedundancyGroupManager::Aps::DefaultRedundancyGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_interface_name.operation)
	|| is_set(next_hop_address.operation);
}

std::string RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-redundancy-group";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/aps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_interface_name.is_set || is_set(backup_interface_name.operation)) leaf_name_data.push_back(backup_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_children()
{
    return children;
}

void RedundancyGroupManager::Aps::DefaultRedundancyGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-interface-name")
    {
        backup_interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::Controller()
    :
    	controller_name{YType::str, "controller-name"},
	 backup_interface_name{YType::str, "backup-interface-name"},
	 next_hop_address{YType::str, "next-hop-address"}
{
    yang_name = "controller"; yang_parent_name = "controllers";
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::~Controller()
{
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| backup_interface_name.is_set
	|| next_hop_address.is_set;
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| is_set(backup_interface_name.operation)
	|| is_set(next_hop_address.operation);
}

std::string RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_entity_path(Entity* ancestor) const
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

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (backup_interface_name.is_set || is_set(backup_interface_name.operation)) leaf_name_data.push_back(backup_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_children()
{
    return children;
}

void RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "group";
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::~Controllers()
{
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RedundancyGroupManager::Aps::Groups::Group::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Aps::Groups::Group::Controllers::get_entity_path(Entity* ancestor) const
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

Entity* RedundancyGroupManager::Aps::Groups::Group::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Aps::Groups::Group::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Aps::Groups::Group::Controllers::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::Aps::Groups::Group::Group()
    :
    	group_id{YType::uint32, "group-id"}
    	,
    controllers(std::make_unique<RedundancyGroupManager::Aps::Groups::Group::Controllers>())
{
    controllers->parent = this;
    children["controllers"] = controllers.get();

    yang_name = "group"; yang_parent_name = "groups";
}

RedundancyGroupManager::Aps::Groups::Group::~Group()
{
}

bool RedundancyGroupManager::Aps::Groups::Group::has_data() const
{
    return group_id.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool RedundancyGroupManager::Aps::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| (controllers !=  nullptr && is_set(controllers->operation));
}

std::string RedundancyGroupManager::Aps::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Aps::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/aps/groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Aps::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
        else
        {
            controllers = std::make_unique<RedundancyGroupManager::Aps::Groups::Group::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers.get();
        }
        return children.at("controllers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Aps::Groups::Group::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Aps::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

RedundancyGroupManager::Aps::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "aps";
}

RedundancyGroupManager::Aps::Groups::~Groups()
{
}

bool RedundancyGroupManager::Aps::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Aps::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RedundancyGroupManager::Aps::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Aps::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/aps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Aps::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<RedundancyGroupManager::Aps::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Aps::Groups::get_children()
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

void RedundancyGroupManager::Aps::Groups::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::Aps::Aps()
    :
    default_redundancy_group(std::make_unique<RedundancyGroupManager::Aps::DefaultRedundancyGroup>())
	,groups(std::make_unique<RedundancyGroupManager::Aps::Groups>())
{
    default_redundancy_group->parent = this;
    children["default-redundancy-group"] = default_redundancy_group.get();

    groups->parent = this;
    children["groups"] = groups.get();

    yang_name = "aps"; yang_parent_name = "redundancy-group-manager";
}

RedundancyGroupManager::Aps::~Aps()
{
}

bool RedundancyGroupManager::Aps::has_data() const
{
    return (default_redundancy_group !=  nullptr && default_redundancy_group->has_data())
	|| (groups !=  nullptr && groups->has_data());
}

bool RedundancyGroupManager::Aps::has_operation() const
{
    return is_set(operation)
	|| (default_redundancy_group !=  nullptr && is_set(default_redundancy_group->operation))
	|| (groups !=  nullptr && is_set(groups->operation));
}

std::string RedundancyGroupManager::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Aps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-redundancy-group")
    {
        if(default_redundancy_group != nullptr)
        {
            children["default-redundancy-group"] = default_redundancy_group.get();
        }
        else
        {
            default_redundancy_group = std::make_unique<RedundancyGroupManager::Aps::DefaultRedundancyGroup>();
            default_redundancy_group->parent = this;
            children["default-redundancy-group"] = default_redundancy_group.get();
        }
        return children.at("default-redundancy-group");
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
        else
        {
            groups = std::make_unique<RedundancyGroupManager::Aps::Groups>();
            groups->parent = this;
            children["groups"] = groups.get();
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Aps::get_children()
{
    if(children.find("default-redundancy-group") == children.end())
    {
        if(default_redundancy_group != nullptr)
        {
            children["default-redundancy-group"] = default_redundancy_group.get();
        }
    }

    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Aps::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::Backbone()
    :
    	backbone_name{YType::str, "backbone-name"}
{
    yang_name = "backbone"; yang_parent_name = "backbones";
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::~Backbone()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::has_data() const
{
    return backbone_name.is_set;
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::has_operation() const
{
    return is_set(operation)
	|| is_set(backbone_name.operation);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone" <<"[backbone-name='" <<backbone_name.get() <<"']";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_entity_path(Entity* ancestor) const
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

    if (backbone_name.is_set || is_set(backbone_name.operation)) leaf_name_data.push_back(backbone_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_children()
{
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbone-name")
    {
        backbone_name = value;
    }
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbones()
{
    yang_name = "backbones"; yang_parent_name = "iccp-group";
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::~Backbones()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::has_data() const
{
    for (std::size_t index=0; index<backbone.size(); index++)
    {
        if(backbone[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::has_operation() const
{
    for (std::size_t index=0; index<backbone.size(); index++)
    {
        if(backbone[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbones";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_entity_path(Entity* ancestor) const
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

Entity* RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backbone")
    {
        for(auto const & c : backbone)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone>();
        c->parent = this;
        backbone.push_back(std::move(c));
        children[segment_path] = backbone.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_children()
{
    for (auto const & c : backbone)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::Member()
    :
    	neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "member"; yang_parent_name = "members";
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::~Member()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::has_data() const
{
    return neighbor_address.is_set;
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[neighbor-address='" <<neighbor_address.get() <<"']";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_entity_path(Entity* ancestor) const
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

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_children()
{
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Members()
{
    yang_name = "members"; yang_parent_name = "iccp-group";
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::~Members()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_entity_path(Entity* ancestor) const
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

Entity* RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_children()
{
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::NvSatellite()
    :
    	system_mac{YType::str, "system-mac"}
{
    yang_name = "nv-satellite"; yang_parent_name = "iccp-group";
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::~NvSatellite()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::has_data() const
{
    return system_mac.is_set;
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::has_operation() const
{
    return is_set(operation)
	|| is_set(system_mac.operation);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_entity_path(Entity* ancestor) const
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

    if (system_mac.is_set || is_set(system_mac.operation)) leaf_name_data.push_back(system_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_children()
{
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-mac")
    {
        system_mac = value;
    }
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::IccpGroup()
    :
    	group_number{YType::uint32, "group-number"},
	 isolation_recovery_delay{YType::uint32, "isolation-recovery-delay"},
	 mode{YType::enumeration, "mode"}
    	,
    backbones(std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones>())
	,members(std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members>())
	,nv_satellite(std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite>())
{
    backbones->parent = this;
    children["backbones"] = backbones.get();

    members->parent = this;
    children["members"] = members.get();

    nv_satellite->parent = this;
    children["nv-satellite"] = nv_satellite.get();

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups";
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::has_data() const
{
    return group_number.is_set
	|| isolation_recovery_delay.is_set
	|| mode.is_set
	|| (backbones !=  nullptr && backbones->has_data())
	|| (members !=  nullptr && members->has_data())
	|| (nv_satellite !=  nullptr && nv_satellite->has_data());
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(isolation_recovery_delay.operation)
	|| is_set(mode.operation)
	|| (backbones !=  nullptr && is_set(backbones->operation))
	|| (members !=  nullptr && is_set(members->operation))
	|| (nv_satellite !=  nullptr && is_set(nv_satellite->operation));
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[group-number='" <<group_number.get() <<"']";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/iccp/iccp-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (isolation_recovery_delay.is_set || is_set(isolation_recovery_delay.operation)) leaf_name_data.push_back(isolation_recovery_delay.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backbones")
    {
        if(backbones != nullptr)
        {
            children["backbones"] = backbones.get();
        }
        else
        {
            backbones = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones>();
            backbones->parent = this;
            children["backbones"] = backbones.get();
        }
        return children.at("backbones");
    }

    if(child_yang_name == "members")
    {
        if(members != nullptr)
        {
            children["members"] = members.get();
        }
        else
        {
            members = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members>();
            members->parent = this;
            children["members"] = members.get();
        }
        return children.at("members");
    }

    if(child_yang_name == "nv-satellite")
    {
        if(nv_satellite != nullptr)
        {
            children["nv-satellite"] = nv_satellite.get();
        }
        else
        {
            nv_satellite = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite>();
            nv_satellite->parent = this;
            children["nv-satellite"] = nv_satellite.get();
        }
        return children.at("nv-satellite");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_children()
{
    if(children.find("backbones") == children.end())
    {
        if(backbones != nullptr)
        {
            children["backbones"] = backbones.get();
        }
    }

    if(children.find("members") == children.end())
    {
        if(members != nullptr)
        {
            children["members"] = members.get();
        }
    }

    if(children.find("nv-satellite") == children.end())
    {
        if(nv_satellite != nullptr)
        {
            children["nv-satellite"] = nv_satellite.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "isolation-recovery-delay")
    {
        isolation_recovery_delay = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroups()
{
    yang_name = "iccp-groups"; yang_parent_name = "iccp";
}

RedundancyGroupManager::Iccp::IccpGroups::~IccpGroups()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Iccp::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::IccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/iccp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Iccp::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(std::move(c));
        children[segment_path] = iccp_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::IccpGroups::get_children()
{
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::Iccp::Iccp()
    :
    iccp_groups(std::make_unique<RedundancyGroupManager::Iccp::IccpGroups>())
{
    iccp_groups->parent = this;
    children["iccp-groups"] = iccp_groups.get();

    yang_name = "iccp"; yang_parent_name = "redundancy-group-manager";
}

RedundancyGroupManager::Iccp::~Iccp()
{
}

bool RedundancyGroupManager::Iccp::has_data() const
{
    return (iccp_groups !=  nullptr && iccp_groups->has_data());
}

bool RedundancyGroupManager::Iccp::has_operation() const
{
    return is_set(operation)
	|| (iccp_groups !=  nullptr && is_set(iccp_groups->operation));
}

std::string RedundancyGroupManager::Iccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::Iccp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::Iccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups.get();
        }
        else
        {
            iccp_groups = std::make_unique<RedundancyGroupManager::Iccp::IccpGroups>();
            iccp_groups->parent = this;
            children["iccp-groups"] = iccp_groups.get();
        }
        return children.at("iccp-groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::Iccp::get_children()
{
    if(children.find("iccp-groups") == children.end())
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups.get();
        }
    }

    return children;
}

void RedundancyGroupManager::Iccp::set_value(const std::string & value_path, std::string value)
{
}

RedundancyGroupManager::RedundancyGroupManager()
    :
    	enable{YType::empty, "enable"}
    	,
    aps(std::make_unique<RedundancyGroupManager::Aps>())
	,iccp(std::make_unique<RedundancyGroupManager::Iccp>())
{
    aps->parent = this;
    children["aps"] = aps.get();

    iccp->parent = this;
    children["iccp"] = iccp.get();

    yang_name = "redundancy-group-manager"; yang_parent_name = "Cisco-IOS-XR-rgmgr-cfg";
}

RedundancyGroupManager::~RedundancyGroupManager()
{
}

bool RedundancyGroupManager::has_data() const
{
    return enable.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (iccp !=  nullptr && iccp->has_data());
}

bool RedundancyGroupManager::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (aps !=  nullptr && is_set(aps->operation))
	|| (iccp !=  nullptr && is_set(iccp->operation));
}

std::string RedundancyGroupManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager";

    return path_buffer.str();

}

EntityPath RedundancyGroupManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* RedundancyGroupManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aps")
    {
        if(aps != nullptr)
        {
            children["aps"] = aps.get();
        }
        else
        {
            aps = std::make_unique<RedundancyGroupManager::Aps>();
            aps->parent = this;
            children["aps"] = aps.get();
        }
        return children.at("aps");
    }

    if(child_yang_name == "iccp")
    {
        if(iccp != nullptr)
        {
            children["iccp"] = iccp.get();
        }
        else
        {
            iccp = std::make_unique<RedundancyGroupManager::Iccp>();
            iccp->parent = this;
            children["iccp"] = iccp.get();
        }
        return children.at("iccp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & RedundancyGroupManager::get_children()
{
    if(children.find("aps") == children.end())
    {
        if(aps != nullptr)
        {
            children["aps"] = aps.get();
        }
    }

    if(children.find("iccp") == children.end())
    {
        if(iccp != nullptr)
        {
            children["iccp"] = iccp.get();
        }
    }

    return children;
}

void RedundancyGroupManager::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::unique_ptr<Entity> RedundancyGroupManager::clone_ptr()
{
    return std::make_unique<RedundancyGroupManager>();
}

const Enum::Value IccpModeEnum::singleton {1, "singleton"};


}
}

