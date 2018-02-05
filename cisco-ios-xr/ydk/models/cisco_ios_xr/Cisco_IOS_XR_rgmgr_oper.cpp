
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_rgmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rgmgr_oper {

RedundancyGroupManager::RedundancyGroupManager()
    :
    controllers(std::make_shared<RedundancyGroupManager::Controllers>())
{
    controllers->parent = this;

    yang_name = "redundancy-group-manager"; yang_parent_name = "Cisco-IOS-XR-rgmgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

RedundancyGroupManager::~RedundancyGroupManager()
{
}

bool RedundancyGroupManager::has_data() const
{
    return (controllers !=  nullptr && controllers->has_data());
}

bool RedundancyGroupManager::has_operation() const
{
    return is_set(yfilter)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string RedundancyGroupManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllers")
    {
        if(controllers == nullptr)
        {
            controllers = std::make_shared<RedundancyGroupManager::Controllers>();
        }
        return controllers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controllers != nullptr)
    {
        children["controllers"] = controllers;
    }

    return children;
}

void RedundancyGroupManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(name == "controllers")
        return true;
    return false;
}

RedundancyGroupManager::Controllers::Controllers()
{

    yang_name = "controllers"; yang_parent_name = "redundancy-group-manager"; is_top_level_class = false; has_list_ancestor = false;
}

RedundancyGroupManager::Controllers::~Controllers()
{
}

bool RedundancyGroupManager::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool RedundancyGroupManager::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RedundancyGroupManager::Controllers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Controllers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        auto c = std::make_shared<RedundancyGroupManager::Controllers::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Controllers::get_children() const
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

void RedundancyGroupManager::Controllers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RedundancyGroupManager::Controllers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RedundancyGroupManager::Controllers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

RedundancyGroupManager::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    multi_router_aps_group_number{YType::str, "multi-router-aps-group-number"},
    controller_name_xr{YType::str, "controller-name-xr"},
    controller_handle{YType::str, "controller-handle"},
    backup_interface_name{YType::str, "backup-interface-name"},
    backup_interface_handle{YType::str, "backup-interface-handle"},
    backup_interface_next_hop_ip_address{YType::str, "backup-interface-next-hop-ip-address"},
    inter_chassis_group_state{YType::str, "inter-chassis-group-state"}
{

    yang_name = "controller"; yang_parent_name = "controllers"; is_top_level_class = false; has_list_ancestor = false;
}

RedundancyGroupManager::Controllers::Controller::~Controller()
{
}

bool RedundancyGroupManager::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| multi_router_aps_group_number.is_set
	|| controller_name_xr.is_set
	|| controller_handle.is_set
	|| backup_interface_name.is_set
	|| backup_interface_handle.is_set
	|| backup_interface_next_hop_ip_address.is_set
	|| inter_chassis_group_state.is_set;
}

bool RedundancyGroupManager::Controllers::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(multi_router_aps_group_number.yfilter)
	|| ydk::is_set(controller_name_xr.yfilter)
	|| ydk::is_set(controller_handle.yfilter)
	|| ydk::is_set(backup_interface_name.yfilter)
	|| ydk::is_set(backup_interface_handle.yfilter)
	|| ydk::is_set(backup_interface_next_hop_ip_address.yfilter)
	|| ydk::is_set(inter_chassis_group_state.yfilter);
}

std::string RedundancyGroupManager::Controllers::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager/controllers/" << get_segment_path();
    return path_buffer.str();
}

std::string RedundancyGroupManager::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RedundancyGroupManager::Controllers::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (multi_router_aps_group_number.is_set || is_set(multi_router_aps_group_number.yfilter)) leaf_name_data.push_back(multi_router_aps_group_number.get_name_leafdata());
    if (controller_name_xr.is_set || is_set(controller_name_xr.yfilter)) leaf_name_data.push_back(controller_name_xr.get_name_leafdata());
    if (controller_handle.is_set || is_set(controller_handle.yfilter)) leaf_name_data.push_back(controller_handle.get_name_leafdata());
    if (backup_interface_name.is_set || is_set(backup_interface_name.yfilter)) leaf_name_data.push_back(backup_interface_name.get_name_leafdata());
    if (backup_interface_handle.is_set || is_set(backup_interface_handle.yfilter)) leaf_name_data.push_back(backup_interface_handle.get_name_leafdata());
    if (backup_interface_next_hop_ip_address.is_set || is_set(backup_interface_next_hop_ip_address.yfilter)) leaf_name_data.push_back(backup_interface_next_hop_ip_address.get_name_leafdata());
    if (inter_chassis_group_state.is_set || is_set(inter_chassis_group_state.yfilter)) leaf_name_data.push_back(inter_chassis_group_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RedundancyGroupManager::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RedundancyGroupManager::Controllers::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RedundancyGroupManager::Controllers::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-router-aps-group-number")
    {
        multi_router_aps_group_number = value;
        multi_router_aps_group_number.value_namespace = name_space;
        multi_router_aps_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-name-xr")
    {
        controller_name_xr = value;
        controller_name_xr.value_namespace = name_space;
        controller_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controller-handle")
    {
        controller_handle = value;
        controller_handle.value_namespace = name_space;
        controller_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name = value;
        backup_interface_name.value_namespace = name_space;
        backup_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface-handle")
    {
        backup_interface_handle = value;
        backup_interface_handle.value_namespace = name_space;
        backup_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface-next-hop-ip-address")
    {
        backup_interface_next_hop_ip_address = value;
        backup_interface_next_hop_ip_address.value_namespace = name_space;
        backup_interface_next_hop_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-chassis-group-state")
    {
        inter_chassis_group_state = value;
        inter_chassis_group_state.value_namespace = name_space;
        inter_chassis_group_state.value_namespace_prefix = name_space_prefix;
    }
}

void RedundancyGroupManager::Controllers::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "multi-router-aps-group-number")
    {
        multi_router_aps_group_number.yfilter = yfilter;
    }
    if(value_path == "controller-name-xr")
    {
        controller_name_xr.yfilter = yfilter;
    }
    if(value_path == "controller-handle")
    {
        controller_handle.yfilter = yfilter;
    }
    if(value_path == "backup-interface-name")
    {
        backup_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-interface-handle")
    {
        backup_interface_handle.yfilter = yfilter;
    }
    if(value_path == "backup-interface-next-hop-ip-address")
    {
        backup_interface_next_hop_ip_address.yfilter = yfilter;
    }
    if(value_path == "inter-chassis-group-state")
    {
        inter_chassis_group_state.yfilter = yfilter;
    }
}

bool RedundancyGroupManager::Controllers::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-name" || name == "multi-router-aps-group-number" || name == "controller-name-xr" || name == "controller-handle" || name == "backup-interface-name" || name == "backup-interface-handle" || name == "backup-interface-next-hop-ip-address" || name == "inter-chassis-group-state")
        return true;
    return false;
}


}
}

