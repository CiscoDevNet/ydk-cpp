
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_rgmgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rgmgr_cfg {

RedundancyGroupManager::RedundancyGroupManager()
    :
    enable{YType::empty, "enable"}
    	,
    aps(std::make_shared<RedundancyGroupManager::Aps>())
	,iccp(std::make_shared<RedundancyGroupManager::Iccp>())
{
    aps->parent = this;
    iccp->parent = this;

    yang_name = "redundancy-group-manager"; yang_parent_name = "Cisco-IOS-XR-rgmgr-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (iccp !=  nullptr && iccp->has_operation());
}

std::string RedundancyGroupManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<RedundancyGroupManager::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "iccp")
    {
        if(iccp == nullptr)
        {
            iccp = std::make_shared<RedundancyGroupManager::Iccp>();
        }
        return iccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    if(iccp != nullptr)
    {
        children["iccp"] = iccp;
    }

    return children;
}

void RedundancyGroupManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> RedundancyGroupManager::clone_ptr() const
{
    return std::make_shared<RedundancyGroupManager>();
}

std::string RedundancyGroupManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RedundancyGroupManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RedundancyGroupManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RedundancyGroupManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RedundancyGroupManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "iccp" || name == "enable")
        return true;
    return false;
}

RedundancyGroupManager::Aps::Aps()
    :
    default_redundancy_group(std::make_shared<RedundancyGroupManager::Aps::DefaultRedundancyGroup>())
	,groups(std::make_shared<RedundancyGroupManager::Aps::Groups>())
{
    default_redundancy_group->parent = this;
    groups->parent = this;

    yang_name = "aps"; yang_parent_name = "redundancy-group-manager"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (default_redundancy_group !=  nullptr && default_redundancy_group->has_operation())
	|| (groups !=  nullptr && groups->has_operation());
}

std::string RedundancyGroupManager::Aps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-redundancy-group")
    {
        if(default_redundancy_group == nullptr)
        {
            default_redundancy_group = std::make_shared<RedundancyGroupManager::Aps::DefaultRedundancyGroup>();
        }
        return default_redundancy_group;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<RedundancyGroupManager::Aps::Groups>();
        }
        return groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_redundancy_group != nullptr)
    {
        children["default-redundancy-group"] = default_redundancy_group;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    return children;
}

void RedundancyGroupManager::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-redundancy-group" || name == "groups")
        return true;
    return false;
}

RedundancyGroupManager::Aps::DefaultRedundancyGroup::DefaultRedundancyGroup()
    :
    next_hop_address{YType::str, "next-hop-address"},
    backup_interface_name{YType::str, "backup-interface-name"}
{

    yang_name = "default-redundancy-group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = false;
}

RedundancyGroupManager::Aps::DefaultRedundancyGroup::~DefaultRedundancyGroup()
{
}

bool RedundancyGroupManager::Aps::DefaultRedundancyGroup::has_data() const
{
    return next_hop_address.is_set
	|| backup_interface_name.is_set;
}

bool RedundancyGroupManager::Aps::DefaultRedundancyGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(backup_interface_name.yfilter);
}

std::string RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/aps/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-redundancy-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (backup_interface_name.is_set || is_set(backup_interface_name.yfilter)) leaf_name_data.push_back(backup_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Aps::DefaultRedundancyGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Aps::DefaultRedundancyGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name = value;
        backup_interface_name.value_namespace = name_space;
        backup_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Aps::DefaultRedundancyGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Aps::DefaultRedundancyGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "backup-interface-name")
        return true;
    return false;
}

RedundancyGroupManager::Aps::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RedundancyGroupManager::Aps::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/aps/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Aps::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Aps::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Aps::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto c = std::make_shared<RedundancyGroupManager::Aps::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Aps::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RedundancyGroupManager::Aps::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Aps::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Aps::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

RedundancyGroupManager::Aps::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"}
    	,
    controllers(std::make_shared<RedundancyGroupManager::Aps::Groups::Group::Controllers>())
{
    controllers->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string RedundancyGroupManager::Aps::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/aps/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Aps::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Aps::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Aps::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<RedundancyGroupManager::Aps::Groups::Group::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Aps::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void RedundancyGroupManager::Aps::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Aps::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Aps::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllers" || name == "group-id")
        return true;
    return false;
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RedundancyGroupManager::Aps::Groups::Group::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Aps::Groups::Group::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Aps::Groups::Group::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Aps::Groups::Group::Controllers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RedundancyGroupManager::Aps::Groups::Group::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Aps::Groups::Group::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    next_hop_address{YType::str, "next-hop-address"},
    backup_interface_name{YType::str, "backup-interface-name"}
{

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = true;
}

RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::~Controller()
{
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| next_hop_address.is_set
	|| backup_interface_name.is_set;
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(backup_interface_name.yfilter);
}

std::string RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (backup_interface_name.is_set || is_set(backup_interface_name.yfilter)) leaf_name_data.push_back(backup_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name = value;
        backup_interface_name.value_namespace = name_space;
        backup_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-name" || name == "next-hop-address" || name == "backup-interface-name")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::Iccp()
    :
    iccp_groups(std::make_shared<RedundancyGroupManager::Iccp::IccpGroups>())
{
    iccp_groups->parent = this;

    yang_name = "iccp"; yang_parent_name = "redundancy-group-manager"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation());
}

std::string RedundancyGroupManager::Iccp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Iccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups>();
        }
        return iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    return children;
}

void RedundancyGroupManager::Iccp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Iccp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Iccp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-groups")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroups()
{

    yang_name = "iccp-groups"; yang_parent_name = "iccp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/iccp/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Iccp::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        auto c = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Iccp::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::IccpGroup()
    :
    group_number{YType::uint32, "group-number"},
    isolation_recovery_delay{YType::uint32, "isolation-recovery-delay"},
    mode{YType::enumeration, "mode"}
    	,
    backbones(std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones>())
	,members(std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members>())
	,mlacp(std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp>())
	,nv_satellite(std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite>())
{
    backbones->parent = this;
    members->parent = this;
    mlacp->parent = this;
    nv_satellite->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
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
	|| (mlacp !=  nullptr && mlacp->has_data())
	|| (nv_satellite !=  nullptr && nv_satellite->has_data());
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(isolation_recovery_delay.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (backbones !=  nullptr && backbones->has_operation())
	|| (members !=  nullptr && members->has_operation())
	|| (mlacp !=  nullptr && mlacp->has_operation())
	|| (nv_satellite !=  nullptr && nv_satellite->has_operation());
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager/iccp/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (isolation_recovery_delay.is_set || is_set(isolation_recovery_delay.yfilter)) leaf_name_data.push_back(isolation_recovery_delay.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbones")
    {
        if(backbones == nullptr)
        {
            backbones = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones>();
        }
        return backbones;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members>();
        }
        return members;
    }

    if(child_yang_name == "Cisco-IOS-XR-bundlemgr-cfg:mlacp")
    {
        if(mlacp == nullptr)
        {
            mlacp = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp>();
        }
        return mlacp;
    }

    if(child_yang_name == "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite")
    {
        if(nv_satellite == nullptr)
        {
            nv_satellite = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite>();
        }
        return nv_satellite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backbones != nullptr)
    {
        children["backbones"] = backbones;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    if(mlacp != nullptr)
    {
        children["Cisco-IOS-XR-bundlemgr-cfg:mlacp"] = mlacp;
    }

    if(nv_satellite != nullptr)
    {
        children["Cisco-IOS-XR-icpe-infra-cfg:nv-satellite"] = nv_satellite;
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolation-recovery-delay")
    {
        isolation_recovery_delay = value;
        isolation_recovery_delay.value_namespace = name_space;
        isolation_recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "isolation-recovery-delay")
    {
        isolation_recovery_delay.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbones" || name == "members" || name == "mlacp" || name == "nv-satellite" || name == "group-number" || name == "isolation-recovery-delay" || name == "mode")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbones()
{

    yang_name = "backbones"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbones";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbone")
    {
        auto c = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone>();
        c->parent = this;
        backbone.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backbone)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::Backbone()
    :
    backbone_name{YType::str, "backbone-name"}
{

    yang_name = "backbone"; yang_parent_name = "backbones"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(backbone_name.yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone" <<"[backbone-name='" <<backbone_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_name.is_set || is_set(backbone_name.yfilter)) leaf_name_data.push_back(backbone_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-name")
    {
        backbone_name = value;
        backbone_name.value_namespace = name_space;
        backbone_name.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-name")
    {
        backbone_name.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-name")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Members()
{

    yang_name = "members"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        auto c = std::make_shared<RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::Member()
    :
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::Mlacp()
    :
    connect_timeout{YType::uint32, "connect-timeout"},
    system_mac{YType::str, "system-mac"},
    node{YType::uint32, "node"},
    system_priority{YType::uint32, "system-priority"}
{

    yang_name = "mlacp"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::~Mlacp()
{
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::has_data() const
{
    return connect_timeout.is_set
	|| system_mac.is_set
	|| node.is_set
	|| system_priority.is_set;
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_timeout.yfilter)
	|| ydk::is_set(system_mac.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(system_priority.yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:mlacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timeout.is_set || is_set(connect_timeout.yfilter)) leaf_name_data.push_back(connect_timeout.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-timeout")
    {
        connect_timeout = value;
        connect_timeout.value_namespace = name_space;
        connect_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-timeout")
    {
        connect_timeout.yfilter = yfilter;
    }
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-timeout" || name == "system-mac" || name == "node" || name == "system-priority")
        return true;
    return false;
}

RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::NvSatellite()
    :
    system_mac{YType::str, "system-mac"}
{

    yang_name = "nv-satellite"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(system_mac.yfilter);
}

std::string RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac")
        return true;
    return false;
}

const Enum::YLeaf IccpMode::singleton {1, "singleton"};


}
}

