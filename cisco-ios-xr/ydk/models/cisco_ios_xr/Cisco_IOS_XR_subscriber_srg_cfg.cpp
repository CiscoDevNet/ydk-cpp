
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_srg_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_srg_cfg {

SubscriberRedundancy::SubscriberRedundancy()
    :
    enable{YType::empty, "enable"},
    virtual_mac_prefix{YType::str, "virtual-mac-prefix"},
    preferred_role{YType::enumeration, "preferred-role"},
    source_interface{YType::str, "source-interface"},
    slave_mode{YType::enumeration, "slave-mode"},
    hold_timer{YType::uint32, "hold-timer"},
    sync_timer{YType::uint32, "sync-timer"},
    redundancy_disable{YType::empty, "redundancy-disable"}
        ,
    groups(std::make_shared<SubscriberRedundancy::Groups>())
    , revertive_timer(std::make_shared<SubscriberRedundancy::RevertiveTimer>())
{
    groups->parent = this;
    revertive_timer->parent = this;

    yang_name = "subscriber-redundancy"; yang_parent_name = "Cisco-IOS-XR-subscriber-srg-cfg"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

SubscriberRedundancy::~SubscriberRedundancy()
{
}

bool SubscriberRedundancy::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| virtual_mac_prefix.is_set
	|| preferred_role.is_set
	|| source_interface.is_set
	|| slave_mode.is_set
	|| hold_timer.is_set
	|| sync_timer.is_set
	|| redundancy_disable.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data());
}

bool SubscriberRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(virtual_mac_prefix.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
	|| ydk::is_set(sync_timer.yfilter)
	|| ydk::is_set(redundancy_disable.yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation());
}

std::string SubscriberRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (virtual_mac_prefix.is_set || is_set(virtual_mac_prefix.yfilter)) leaf_name_data.push_back(virtual_mac_prefix.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (sync_timer.is_set || is_set(sync_timer.yfilter)) leaf_name_data.push_back(sync_timer.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.yfilter)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<SubscriberRedundancy::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer == nullptr)
        {
            revertive_timer = std::make_shared<SubscriberRedundancy::RevertiveTimer>();
        }
        return revertive_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(revertive_timer != nullptr)
    {
        _children["revertive-timer"] = revertive_timer;
    }

    return _children;
}

void SubscriberRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-prefix")
    {
        virtual_mac_prefix = value;
        virtual_mac_prefix.value_namespace = name_space;
        virtual_mac_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
        slave_mode.value_namespace = name_space;
        slave_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
        hold_timer.value_namespace = name_space;
        hold_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-timer")
    {
        sync_timer = value;
        sync_timer.value_namespace = name_space;
        sync_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable = value;
        redundancy_disable.value_namespace = name_space;
        redundancy_disable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-prefix")
    {
        virtual_mac_prefix.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "slave-mode")
    {
        slave_mode.yfilter = yfilter;
    }
    if(value_path == "hold-timer")
    {
        hold_timer.yfilter = yfilter;
    }
    if(value_path == "sync-timer")
    {
        sync_timer.yfilter = yfilter;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::clone_ptr() const
{
    return std::make_shared<SubscriberRedundancy>();
}

std::string SubscriberRedundancy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberRedundancy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberRedundancy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberRedundancy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "revertive-timer" || name == "enable" || name == "virtual-mac-prefix" || name == "preferred-role" || name == "source-interface" || name == "slave-mode" || name == "hold-timer" || name == "sync-timer" || name == "redundancy-disable")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Groups()
    :
    group(this, {"group_id"})
{

    yang_name = "groups"; yang_parent_name = "subscriber-redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancy::Groups::~Groups()
{
}

bool SubscriberRedundancy::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancy::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancy::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<SubscriberRedundancy::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancy::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::Group()
    :
    group_id{YType::uint32, "group-id"},
    disable_tracking_object{YType::empty, "disable-tracking-object"},
    core_tracking_object{YType::str, "core-tracking-object"},
    enable{YType::empty, "enable"},
    preferred_role{YType::enumeration, "preferred-role"},
    description{YType::str, "description"},
    l2tp_source_ip_address{YType::str, "l2tp-source-ip-address"},
    slave_mode{YType::enumeration, "slave-mode"},
    hold_timer{YType::uint32, "hold-timer"},
    access_tracking_object{YType::str, "access-tracking-object"},
    enable_fast_switchover{YType::empty, "enable-fast-switchover"},
    redundancy_disable{YType::empty, "redundancy-disable"}
        ,
    interface_list(nullptr) // presence node
    , peer(std::make_shared<SubscriberRedundancy::Groups::Group::Peer>())
    , revertive_timer(std::make_shared<SubscriberRedundancy::Groups::Group::RevertiveTimer>())
    , virtual_mac(std::make_shared<SubscriberRedundancy::Groups::Group::VirtualMac>())
    , state_control_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute>())
{
    peer->parent = this;
    revertive_timer->parent = this;
    virtual_mac->parent = this;
    state_control_route->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancy::Groups::Group::~Group()
{
}

bool SubscriberRedundancy::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| disable_tracking_object.is_set
	|| core_tracking_object.is_set
	|| enable.is_set
	|| preferred_role.is_set
	|| description.is_set
	|| l2tp_source_ip_address.is_set
	|| slave_mode.is_set
	|| hold_timer.is_set
	|| access_tracking_object.is_set
	|| enable_fast_switchover.is_set
	|| redundancy_disable.is_set
	|| (interface_list !=  nullptr && interface_list->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (revertive_timer !=  nullptr && revertive_timer->has_data())
	|| (virtual_mac !=  nullptr && virtual_mac->has_data())
	|| (state_control_route !=  nullptr && state_control_route->has_data());
}

bool SubscriberRedundancy::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(disable_tracking_object.yfilter)
	|| ydk::is_set(core_tracking_object.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(l2tp_source_ip_address.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
	|| ydk::is_set(access_tracking_object.yfilter)
	|| ydk::is_set(enable_fast_switchover.yfilter)
	|| ydk::is_set(redundancy_disable.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (revertive_timer !=  nullptr && revertive_timer->has_operation())
	|| (virtual_mac !=  nullptr && virtual_mac->has_operation())
	|| (state_control_route !=  nullptr && state_control_route->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancy::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (disable_tracking_object.is_set || is_set(disable_tracking_object.yfilter)) leaf_name_data.push_back(disable_tracking_object.get_name_leafdata());
    if (core_tracking_object.is_set || is_set(core_tracking_object.yfilter)) leaf_name_data.push_back(core_tracking_object.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (l2tp_source_ip_address.is_set || is_set(l2tp_source_ip_address.yfilter)) leaf_name_data.push_back(l2tp_source_ip_address.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (access_tracking_object.is_set || is_set(access_tracking_object.yfilter)) leaf_name_data.push_back(access_tracking_object.get_name_leafdata());
    if (enable_fast_switchover.is_set || is_set(enable_fast_switchover.yfilter)) leaf_name_data.push_back(enable_fast_switchover.get_name_leafdata());
    if (redundancy_disable.is_set || is_set(redundancy_disable.yfilter)) leaf_name_data.push_back(redundancy_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList>();
        }
        return interface_list;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<SubscriberRedundancy::Groups::Group::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "revertive-timer")
    {
        if(revertive_timer == nullptr)
        {
            revertive_timer = std::make_shared<SubscriberRedundancy::Groups::Group::RevertiveTimer>();
        }
        return revertive_timer;
    }

    if(child_yang_name == "virtual-mac")
    {
        if(virtual_mac == nullptr)
        {
            virtual_mac = std::make_shared<SubscriberRedundancy::Groups::Group::VirtualMac>();
        }
        return virtual_mac;
    }

    if(child_yang_name == "state-control-route")
    {
        if(state_control_route == nullptr)
        {
            state_control_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute>();
        }
        return state_control_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_list != nullptr)
    {
        _children["interface-list"] = interface_list;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(revertive_timer != nullptr)
    {
        _children["revertive-timer"] = revertive_timer;
    }

    if(virtual_mac != nullptr)
    {
        _children["virtual-mac"] = virtual_mac;
    }

    if(state_control_route != nullptr)
    {
        _children["state-control-route"] = state_control_route;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-tracking-object")
    {
        disable_tracking_object = value;
        disable_tracking_object.value_namespace = name_space;
        disable_tracking_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-tracking-object")
    {
        core_tracking_object = value;
        core_tracking_object.value_namespace = name_space;
        core_tracking_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-source-ip-address")
    {
        l2tp_source_ip_address = value;
        l2tp_source_ip_address.value_namespace = name_space;
        l2tp_source_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
        slave_mode.value_namespace = name_space;
        slave_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-timer")
    {
        hold_timer = value;
        hold_timer.value_namespace = name_space;
        hold_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-tracking-object")
    {
        access_tracking_object = value;
        access_tracking_object.value_namespace = name_space;
        access_tracking_object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-fast-switchover")
    {
        enable_fast_switchover = value;
        enable_fast_switchover.value_namespace = name_space;
        enable_fast_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable = value;
        redundancy_disable.value_namespace = name_space;
        redundancy_disable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "disable-tracking-object")
    {
        disable_tracking_object.yfilter = yfilter;
    }
    if(value_path == "core-tracking-object")
    {
        core_tracking_object.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "l2tp-source-ip-address")
    {
        l2tp_source_ip_address.yfilter = yfilter;
    }
    if(value_path == "slave-mode")
    {
        slave_mode.yfilter = yfilter;
    }
    if(value_path == "hold-timer")
    {
        hold_timer.yfilter = yfilter;
    }
    if(value_path == "access-tracking-object")
    {
        access_tracking_object.yfilter = yfilter;
    }
    if(value_path == "enable-fast-switchover")
    {
        enable_fast_switchover.yfilter = yfilter;
    }
    if(value_path == "redundancy-disable")
    {
        redundancy_disable.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "peer" || name == "revertive-timer" || name == "virtual-mac" || name == "state-control-route" || name == "group-id" || name == "disable-tracking-object" || name == "core-tracking-object" || name == "enable" || name == "preferred-role" || name == "description" || name == "l2tp-source-ip-address" || name == "slave-mode" || name == "hold-timer" || name == "access-tracking-object" || name == "enable-fast-switchover" || name == "redundancy-disable")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceList()
    :
    enable{YType::empty, "enable"}
        ,
    interfaces(std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces>())
    , interface_ranges(std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges>())
{
    interfaces->parent = this;
    interface_ranges->parent = this;

    yang_name = "interface-list"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

SubscriberRedundancy::Groups::Group::InterfaceList::~InterfaceList()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (interface_ranges !=  nullptr && interface_ranges->has_data());
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (interface_ranges !=  nullptr && interface_ranges->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "interface-ranges")
    {
        if(interface_ranges == nullptr)
        {
            interface_ranges = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges>();
        }
        return interface_ranges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(interface_ranges != nullptr)
    {
        _children["interface-ranges"] = interface_ranges;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "interface-ranges" || name == "enable")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::~Interfaces()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_id{YType::uint32, "interface-id"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::~Interface()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_id.is_set;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-id")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRanges()
    :
    interface_range(this, {"interface_name", "sub_interface_range_start", "sub_interface_range_end"})
{

    yang_name = "interface-ranges"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::~InterfaceRanges()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_range.len(); index++)
    {
        if(interface_range[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_operation() const
{
    for (std::size_t index=0; index<interface_range.len(); index++)
    {
        if(interface_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-range")
    {
        auto ent_ = std::make_shared<SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange>();
        ent_->parent = this;
        interface_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-range")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::InterfaceRange()
    :
    interface_name{YType::str, "interface-name"},
    sub_interface_range_start{YType::uint32, "sub-interface-range-start"},
    sub_interface_range_end{YType::uint32, "sub-interface-range-end"},
    interface_id_range_start{YType::uint32, "interface-id-range-start"},
    interface_id_range_end{YType::uint32, "interface-id-range-end"}
{

    yang_name = "interface-range"; yang_parent_name = "interface-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::~InterfaceRange()
{
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| sub_interface_range_start.is_set
	|| sub_interface_range_end.is_set
	|| interface_id_range_start.is_set
	|| interface_id_range_end.is_set;
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sub_interface_range_start.yfilter)
	|| ydk::is_set(sub_interface_range_end.yfilter)
	|| ydk::is_set(interface_id_range_start.yfilter)
	|| ydk::is_set(interface_id_range_end.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-range";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(sub_interface_range_start, "sub-interface-range-start");
    ADD_KEY_TOKEN(sub_interface_range_end, "sub-interface-range-end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sub_interface_range_start.is_set || is_set(sub_interface_range_start.yfilter)) leaf_name_data.push_back(sub_interface_range_start.get_name_leafdata());
    if (sub_interface_range_end.is_set || is_set(sub_interface_range_end.yfilter)) leaf_name_data.push_back(sub_interface_range_end.get_name_leafdata());
    if (interface_id_range_start.is_set || is_set(interface_id_range_start.yfilter)) leaf_name_data.push_back(interface_id_range_start.get_name_leafdata());
    if (interface_id_range_end.is_set || is_set(interface_id_range_end.yfilter)) leaf_name_data.push_back(interface_id_range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-range-start")
    {
        sub_interface_range_start = value;
        sub_interface_range_start.value_namespace = name_space;
        sub_interface_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-range-end")
    {
        sub_interface_range_end = value;
        sub_interface_range_end.value_namespace = name_space;
        sub_interface_range_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id-range-start")
    {
        interface_id_range_start = value;
        interface_id_range_start.value_namespace = name_space;
        interface_id_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id-range-end")
    {
        interface_id_range_end = value;
        interface_id_range_end.value_namespace = name_space;
        interface_id_range_end.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sub-interface-range-start")
    {
        sub_interface_range_start.yfilter = yfilter;
    }
    if(value_path == "sub-interface-range-end")
    {
        sub_interface_range_end.yfilter = yfilter;
    }
    if(value_path == "interface-id-range-start")
    {
        interface_id_range_start.yfilter = yfilter;
    }
    if(value_path == "interface-id-range-end")
    {
        interface_id_range_end.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "sub-interface-range-start" || name == "sub-interface-range-end" || name == "interface-id-range-start" || name == "interface-id-range-end")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::Peer::Peer()
    :
    route_add_disable{YType::empty, "route-add-disable"}
        ,
    ipaddress(std::make_shared<SubscriberRedundancy::Groups::Group::Peer::Ipaddress>())
{
    ipaddress->parent = this;

    yang_name = "peer"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::Peer::~Peer()
{
}

bool SubscriberRedundancy::Groups::Group::Peer::has_data() const
{
    if (is_presence_container) return true;
    return route_add_disable.is_set
	|| (ipaddress !=  nullptr && ipaddress->has_data());
}

bool SubscriberRedundancy::Groups::Group::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_add_disable.yfilter)
	|| (ipaddress !=  nullptr && ipaddress->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_add_disable.is_set || is_set(route_add_disable.yfilter)) leaf_name_data.push_back(route_add_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        if(ipaddress == nullptr)
        {
            ipaddress = std::make_shared<SubscriberRedundancy::Groups::Group::Peer::Ipaddress>();
        }
        return ipaddress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipaddress != nullptr)
    {
        _children["ipaddress"] = ipaddress;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-add-disable")
    {
        route_add_disable = value;
        route_add_disable.value_namespace = name_space;
        route_add_disable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-add-disable")
    {
        route_add_disable.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "route-add-disable")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::Peer::Ipaddress::Ipaddress()
    :
    address_family{YType::enumeration, "address-family"},
    prefix_string{YType::str, "prefix-string"}
{

    yang_name = "ipaddress"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::Peer::Ipaddress::~Ipaddress()
{
}

bool SubscriberRedundancy::Groups::Group::Peer::Ipaddress::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| prefix_string.is_set;
}

bool SubscriberRedundancy::Groups::Group::Peer::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(prefix_string.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.yfilter)) leaf_name_data.push_back(prefix_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::Peer::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::Peer::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
        prefix_string.value_namespace = name_space;
        prefix_string.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::Peer::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "prefix-string")
    {
        prefix_string.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::Peer::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "prefix-string")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{

    yang_name = "revertive-timer"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::RevertiveTimer::~RevertiveTimer()
{
}

bool SubscriberRedundancy::Groups::Group::RevertiveTimer::has_data() const
{
    if (is_presence_container) return true;
    return max_value.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::Groups::Group::RevertiveTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_value.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::RevertiveTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_value.is_set || is_set(max_value.yfilter)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::RevertiveTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::RevertiveTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-value")
    {
        max_value = value;
        max_value.value_namespace = name_space;
        max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::RevertiveTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-value")
    {
        max_value.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::RevertiveTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-value" || name == "value")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::VirtualMac::VirtualMac()
    :
    address{YType::str, "address"},
    disable{YType::empty, "disable"}
{

    yang_name = "virtual-mac"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::VirtualMac::~VirtualMac()
{
}

bool SubscriberRedundancy::Groups::Group::VirtualMac::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| disable.is_set;
}

bool SubscriberRedundancy::Groups::Group::VirtualMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::VirtualMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::VirtualMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::VirtualMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::VirtualMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::VirtualMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::VirtualMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::VirtualMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "disable")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::StateControlRoute()
    :
    ipv4_routes(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes>())
    , ipv6_route(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route>())
{
    ipv4_routes->parent = this;
    ipv6_route->parent = this;

    yang_name = "state-control-route"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::~StateControlRoute()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_routes !=  nullptr && ipv4_routes->has_data())
	|| (ipv6_route !=  nullptr && ipv6_route->has_data());
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_routes !=  nullptr && ipv4_routes->has_operation())
	|| (ipv6_route !=  nullptr && ipv6_route->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-control-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-routes")
    {
        if(ipv4_routes == nullptr)
        {
            ipv4_routes = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes>();
        }
        return ipv4_routes;
    }

    if(child_yang_name == "ipv6-route")
    {
        if(ipv6_route == nullptr)
        {
            ipv6_route = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route>();
        }
        return ipv6_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_routes != nullptr)
    {
        _children["ipv4-routes"] = ipv4_routes;
    }

    if(ipv6_route != nullptr)
    {
        _children["ipv6-route"] = ipv6_route;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-routes" || name == "ipv6-route")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Routes()
    :
    ipv4_route(this, {"vrfname", "prefix_length", "prefix_string"})
{

    yang_name = "ipv4-routes"; yang_parent_name = "state-control-route"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::~Ipv4Routes()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_route.len(); index++)
    {
        if(ipv4_route[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::has_operation() const
{
    for (std::size_t index=0; index<ipv4_route.len(); index++)
    {
        if(ipv4_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-route")
    {
        auto ent_ = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route>();
        ent_->parent = this;
        ipv4_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-route")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::Ipv4Route()
    :
    vrfname{YType::str, "vrfname"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_string{YType::str, "prefix-string"},
    tagvalue{YType::uint32, "tagvalue"}
{

    yang_name = "ipv4-route"; yang_parent_name = "ipv4-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::~Ipv4Route()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| prefix_length.is_set
	|| prefix_string.is_set
	|| tagvalue.is_set;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_string.yfilter)
	|| ydk::is_set(tagvalue.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-route";
    ADD_KEY_TOKEN(vrfname, "vrfname");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    ADD_KEY_TOKEN(prefix_string, "prefix-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.yfilter)) leaf_name_data.push_back(prefix_string.get_name_leafdata());
    if (tagvalue.is_set || is_set(tagvalue.yfilter)) leaf_name_data.push_back(tagvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfname")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
        prefix_string.value_namespace = name_space;
        prefix_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tagvalue")
    {
        tagvalue = value;
        tagvalue.value_namespace = name_space;
        tagvalue.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfname")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-string")
    {
        prefix_string.yfilter = yfilter;
    }
    if(value_path == "tagvalue")
    {
        tagvalue.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfname" || name == "prefix-length" || name == "prefix-string" || name == "tagvalue")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6Route()
    :
    ipv6na_routes(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes>())
    , ipv6pd_routes(std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes>())
{
    ipv6na_routes->parent = this;
    ipv6pd_routes->parent = this;

    yang_name = "ipv6-route"; yang_parent_name = "state-control-route"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::~Ipv6Route()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6na_routes !=  nullptr && ipv6na_routes->has_data())
	|| (ipv6pd_routes !=  nullptr && ipv6pd_routes->has_data());
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6na_routes !=  nullptr && ipv6na_routes->has_operation())
	|| (ipv6pd_routes !=  nullptr && ipv6pd_routes->has_operation());
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6na-routes")
    {
        if(ipv6na_routes == nullptr)
        {
            ipv6na_routes = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes>();
        }
        return ipv6na_routes;
    }

    if(child_yang_name == "ipv6pd-routes")
    {
        if(ipv6pd_routes == nullptr)
        {
            ipv6pd_routes = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes>();
        }
        return ipv6pd_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6na_routes != nullptr)
    {
        _children["ipv6na-routes"] = ipv6na_routes;
    }

    if(ipv6pd_routes != nullptr)
    {
        _children["ipv6pd-routes"] = ipv6pd_routes;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6na-routes" || name == "ipv6pd-routes")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoutes()
    :
    ipv6na_route(this, {"vrfname", "prefix_length", "prefix_string"})
{

    yang_name = "ipv6na-routes"; yang_parent_name = "ipv6-route"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::~Ipv6naRoutes()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6na_route.len(); index++)
    {
        if(ipv6na_route[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::has_operation() const
{
    for (std::size_t index=0; index<ipv6na_route.len(); index++)
    {
        if(ipv6na_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6na-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6na-route")
    {
        auto ent_ = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute>();
        ent_->parent = this;
        ipv6na_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6na_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6na-route")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::Ipv6naRoute()
    :
    vrfname{YType::str, "vrfname"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_string{YType::str, "prefix-string"},
    tagvalue{YType::uint32, "tagvalue"}
{

    yang_name = "ipv6na-route"; yang_parent_name = "ipv6na-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::~Ipv6naRoute()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| prefix_length.is_set
	|| prefix_string.is_set
	|| tagvalue.is_set;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_string.yfilter)
	|| ydk::is_set(tagvalue.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6na-route";
    ADD_KEY_TOKEN(vrfname, "vrfname");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    ADD_KEY_TOKEN(prefix_string, "prefix-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.yfilter)) leaf_name_data.push_back(prefix_string.get_name_leafdata());
    if (tagvalue.is_set || is_set(tagvalue.yfilter)) leaf_name_data.push_back(tagvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfname")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
        prefix_string.value_namespace = name_space;
        prefix_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tagvalue")
    {
        tagvalue = value;
        tagvalue.value_namespace = name_space;
        tagvalue.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfname")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-string")
    {
        prefix_string.yfilter = yfilter;
    }
    if(value_path == "tagvalue")
    {
        tagvalue.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfname" || name == "prefix-length" || name == "prefix-string" || name == "tagvalue")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoutes()
    :
    ipv6pd_route(this, {"vrfname", "prefix_length", "prefix_string"})
{

    yang_name = "ipv6pd-routes"; yang_parent_name = "ipv6-route"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::~Ipv6pdRoutes()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6pd_route.len(); index++)
    {
        if(ipv6pd_route[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::has_operation() const
{
    for (std::size_t index=0; index<ipv6pd_route.len(); index++)
    {
        if(ipv6pd_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pd-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6pd-route")
    {
        auto ent_ = std::make_shared<SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute>();
        ent_->parent = this;
        ipv6pd_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6pd_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6pd-route")
        return true;
    return false;
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::Ipv6pdRoute()
    :
    vrfname{YType::str, "vrfname"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_string{YType::str, "prefix-string"},
    tagvalue{YType::uint32, "tagvalue"}
{

    yang_name = "ipv6pd-route"; yang_parent_name = "ipv6pd-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::~Ipv6pdRoute()
{
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::has_data() const
{
    if (is_presence_container) return true;
    return vrfname.is_set
	|| prefix_length.is_set
	|| prefix_string.is_set
	|| tagvalue.is_set;
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_string.yfilter)
	|| ydk::is_set(tagvalue.yfilter);
}

std::string SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pd-route";
    ADD_KEY_TOKEN(vrfname, "vrfname");
    ADD_KEY_TOKEN(prefix_length, "prefix-length");
    ADD_KEY_TOKEN(prefix_string, "prefix-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_string.is_set || is_set(prefix_string.yfilter)) leaf_name_data.push_back(prefix_string.get_name_leafdata());
    if (tagvalue.is_set || is_set(tagvalue.yfilter)) leaf_name_data.push_back(tagvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfname")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-string")
    {
        prefix_string = value;
        prefix_string.value_namespace = name_space;
        prefix_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tagvalue")
    {
        tagvalue = value;
        tagvalue.value_namespace = name_space;
        tagvalue.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfname")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-string")
    {
        prefix_string.yfilter = yfilter;
    }
    if(value_path == "tagvalue")
    {
        tagvalue.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfname" || name == "prefix-length" || name == "prefix-string" || name == "tagvalue")
        return true;
    return false;
}

SubscriberRedundancy::RevertiveTimer::RevertiveTimer()
    :
    max_value{YType::uint32, "max-value"},
    value_{YType::uint32, "value"}
{

    yang_name = "revertive-timer"; yang_parent_name = "subscriber-redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancy::RevertiveTimer::~RevertiveTimer()
{
}

bool SubscriberRedundancy::RevertiveTimer::has_data() const
{
    if (is_presence_container) return true;
    return max_value.is_set
	|| value_.is_set;
}

bool SubscriberRedundancy::RevertiveTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_value.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string SubscriberRedundancy::RevertiveTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-cfg:subscriber-redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancy::RevertiveTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revertive-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancy::RevertiveTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_value.is_set || is_set(max_value.yfilter)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancy::RevertiveTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancy::RevertiveTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancy::RevertiveTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-value")
    {
        max_value = value;
        max_value.value_namespace = name_space;
        max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancy::RevertiveTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-value")
    {
        max_value.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool SubscriberRedundancy::RevertiveTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-value" || name == "value")
        return true;
    return false;
}

const Enum::YLeaf SubscriberRedundancyGroupSlaveMode::warm {1, "warm"};
const Enum::YLeaf SubscriberRedundancyGroupSlaveMode::hot {2, "hot"};

const Enum::YLeaf SrgAddrFamily::ipv4 {2, "ipv4"};
const Enum::YLeaf SrgAddrFamily::ipv6 {10, "ipv6"};

const Enum::YLeaf SubscriberRedundancyGroupRole::master {1, "master"};
const Enum::YLeaf SubscriberRedundancyGroupRole::slave {2, "slave"};


}
}

