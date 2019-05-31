
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_srg_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_srg_oper {

SubscriberRedundancyManager::SubscriberRedundancyManager()
    :
    groups(std::make_shared<SubscriberRedundancyManager::Groups>())
    , summary(std::make_shared<SubscriberRedundancyManager::Summary>())
    , interfaces(std::make_shared<SubscriberRedundancyManager::Interfaces>())
{
    groups->parent = this;
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "subscriber-redundancy-manager"; yang_parent_name = "Cisco-IOS-XR-subscriber-srg-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberRedundancyManager::~SubscriberRedundancyManager()
{
}

bool SubscriberRedundancyManager::has_data() const
{
    if (is_presence_container) return true;
    return (groups !=  nullptr && groups->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool SubscriberRedundancyManager::has_operation() const
{
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SubscriberRedundancyManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<SubscriberRedundancyManager::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SubscriberRedundancyManager::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SubscriberRedundancyManager::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void SubscriberRedundancyManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::clone_ptr() const
{
    return std::make_shared<SubscriberRedundancyManager>();
}

std::string SubscriberRedundancyManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberRedundancyManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberRedundancyManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberRedundancyManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberRedundancyManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "summary" || name == "interfaces")
        return true;
    return false;
}

SubscriberRedundancyManager::Groups::Groups()
    :
    group(this, {"group"})
{

    yang_name = "groups"; yang_parent_name = "subscriber-redundancy-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyManager::Groups::~Groups()
{
}

bool SubscriberRedundancyManager::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyManager::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyManager::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyManager::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyManager::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyManager::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyManager::Groups::get_children() const
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

void SubscriberRedundancyManager::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyManager::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyManager::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

SubscriberRedundancyManager::Groups::Group::Group()
    :
    group{YType::str, "group"},
    group_id{YType::uint32, "group-id"},
    description{YType::str, "description"},
    disabled{YType::boolean, "disabled"},
    role{YType::enumeration, "role"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    interface_count{YType::uint32, "interface-count"},
    preferred_role{YType::enumeration, "preferred-role"},
    slave_mode{YType::enumeration, "slave-mode"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_disable{YType::boolean, "virtual-mac-address-disable"},
    node_name{YType::str, "node-name"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyManager::Groups::Group::~Group()
{
}

bool SubscriberRedundancyManager::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| group_id.is_set
	|| description.is_set
	|| disabled.is_set
	|| role.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| interface_count.is_set
	|| preferred_role.is_set
	|| slave_mode.is_set
	|| object_tracking_status.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_disable.is_set
	|| node_name.is_set;
}

bool SubscriberRedundancyManager::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(peer_ipv4_address.yfilter)
	|| ydk::is_set(peer_ipv6_address.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(object_tracking_status.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(virtual_mac_address_disable.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string SubscriberRedundancyManager::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyManager::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyManager::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.yfilter)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.yfilter)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.yfilter)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_disable.is_set || is_set(virtual_mac_address_disable.yfilter)) leaf_name_data.push_back(virtual_mac_address_disable.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyManager::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyManager::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
        peer_ipv4_address.value_namespace = name_space;
        peer_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address = value;
        peer_ipv6_address.value_namespace = name_space;
        peer_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
        slave_mode.value_namespace = name_space;
        slave_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status = value;
        object_tracking_status.value_namespace = name_space;
        object_tracking_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address-disable")
    {
        virtual_mac_address_disable = value;
        virtual_mac_address_disable.value_namespace = name_space;
        virtual_mac_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyManager::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "slave-mode")
    {
        slave_mode.yfilter = yfilter;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address-disable")
    {
        virtual_mac_address_disable.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool SubscriberRedundancyManager::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "group-id" || name == "description" || name == "disabled" || name == "role" || name == "peer-ipv4-address" || name == "peer-ipv6-address" || name == "interface-count" || name == "preferred-role" || name == "slave-mode" || name == "object-tracking-status" || name == "virtual-mac-address" || name == "virtual-mac-address-disable" || name == "node-name")
        return true;
    return false;
}

SubscriberRedundancyManager::Summary::Summary()
    :
    disabled{YType::boolean, "disabled"},
    active_state{YType::boolean, "active-state"},
    preferred_role{YType::enumeration, "preferred-role"},
    slave_mode{YType::enumeration, "slave-mode"},
    hold_timer{YType::uint32, "hold-timer"},
    sync_time{YType::uint32, "sync-time"},
    source_interface_name{YType::str, "source-interface-name"},
    vrf_name{YType::str, "vrf-name"},
    source_interface_ipv4_address{YType::str, "source-interface-ipv4-address"},
    source_interface_ipv6_address{YType::str, "source-interface-ipv6-address"},
    group_count{YType::uint32, "group-count"},
    disabled_group_count{YType::uint32, "disabled-group-count"},
    master_group_count{YType::uint32, "master-group-count"},
    slave_group_count{YType::uint32, "slave-group-count"},
    interface_count{YType::uint32, "interface-count"},
    master_interface_count{YType::uint32, "master-interface-count"},
    slave_interface_count{YType::uint32, "slave-interface-count"}
{

    yang_name = "summary"; yang_parent_name = "subscriber-redundancy-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyManager::Summary::~Summary()
{
}

bool SubscriberRedundancyManager::Summary::has_data() const
{
    if (is_presence_container) return true;
    return disabled.is_set
	|| active_state.is_set
	|| preferred_role.is_set
	|| slave_mode.is_set
	|| hold_timer.is_set
	|| sync_time.is_set
	|| source_interface_name.is_set
	|| vrf_name.is_set
	|| source_interface_ipv4_address.is_set
	|| source_interface_ipv6_address.is_set
	|| group_count.is_set
	|| disabled_group_count.is_set
	|| master_group_count.is_set
	|| slave_group_count.is_set
	|| interface_count.is_set
	|| master_interface_count.is_set
	|| slave_interface_count.is_set;
}

bool SubscriberRedundancyManager::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(active_state.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
	|| ydk::is_set(sync_time.yfilter)
	|| ydk::is_set(source_interface_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_interface_ipv4_address.yfilter)
	|| ydk::is_set(source_interface_ipv6_address.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(disabled_group_count.yfilter)
	|| ydk::is_set(master_group_count.yfilter)
	|| ydk::is_set(slave_group_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(master_interface_count.yfilter)
	|| ydk::is_set(slave_interface_count.yfilter);
}

std::string SubscriberRedundancyManager::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyManager::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyManager::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (active_state.is_set || is_set(active_state.yfilter)) leaf_name_data.push_back(active_state.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (sync_time.is_set || is_set(sync_time.yfilter)) leaf_name_data.push_back(sync_time.get_name_leafdata());
    if (source_interface_name.is_set || is_set(source_interface_name.yfilter)) leaf_name_data.push_back(source_interface_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface_ipv4_address.is_set || is_set(source_interface_ipv4_address.yfilter)) leaf_name_data.push_back(source_interface_ipv4_address.get_name_leafdata());
    if (source_interface_ipv6_address.is_set || is_set(source_interface_ipv6_address.yfilter)) leaf_name_data.push_back(source_interface_ipv6_address.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (disabled_group_count.is_set || is_set(disabled_group_count.yfilter)) leaf_name_data.push_back(disabled_group_count.get_name_leafdata());
    if (master_group_count.is_set || is_set(master_group_count.yfilter)) leaf_name_data.push_back(master_group_count.get_name_leafdata());
    if (slave_group_count.is_set || is_set(slave_group_count.yfilter)) leaf_name_data.push_back(slave_group_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (master_interface_count.is_set || is_set(master_interface_count.yfilter)) leaf_name_data.push_back(master_interface_count.get_name_leafdata());
    if (slave_interface_count.is_set || is_set(slave_interface_count.yfilter)) leaf_name_data.push_back(slave_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyManager::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyManager::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-state")
    {
        active_state = value;
        active_state.value_namespace = name_space;
        active_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sync-time")
    {
        sync_time = value;
        sync_time.value_namespace = name_space;
        sync_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface-name")
    {
        source_interface_name = value;
        source_interface_name.value_namespace = name_space;
        source_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface-ipv4-address")
    {
        source_interface_ipv4_address = value;
        source_interface_ipv4_address.value_namespace = name_space;
        source_interface_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface-ipv6-address")
    {
        source_interface_ipv6_address = value;
        source_interface_ipv6_address.value_namespace = name_space;
        source_interface_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-group-count")
    {
        disabled_group_count = value;
        disabled_group_count.value_namespace = name_space;
        disabled_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-group-count")
    {
        master_group_count = value;
        master_group_count.value_namespace = name_space;
        master_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-group-count")
    {
        slave_group_count = value;
        slave_group_count.value_namespace = name_space;
        slave_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-interface-count")
    {
        master_interface_count = value;
        master_interface_count.value_namespace = name_space;
        master_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-interface-count")
    {
        slave_interface_count = value;
        slave_interface_count.value_namespace = name_space;
        slave_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyManager::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "active-state")
    {
        active_state.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "slave-mode")
    {
        slave_mode.yfilter = yfilter;
    }
    if(value_path == "hold-timer")
    {
        hold_timer.yfilter = yfilter;
    }
    if(value_path == "sync-time")
    {
        sync_time.yfilter = yfilter;
    }
    if(value_path == "source-interface-name")
    {
        source_interface_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-interface-ipv4-address")
    {
        source_interface_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "source-interface-ipv6-address")
    {
        source_interface_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "disabled-group-count")
    {
        disabled_group_count.yfilter = yfilter;
    }
    if(value_path == "master-group-count")
    {
        master_group_count.yfilter = yfilter;
    }
    if(value_path == "slave-group-count")
    {
        slave_group_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "master-interface-count")
    {
        master_interface_count.yfilter = yfilter;
    }
    if(value_path == "slave-interface-count")
    {
        slave_interface_count.yfilter = yfilter;
    }
}

bool SubscriberRedundancyManager::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "active-state" || name == "preferred-role" || name == "slave-mode" || name == "hold-timer" || name == "sync-time" || name == "source-interface-name" || name == "vrf-name" || name == "source-interface-ipv4-address" || name == "source-interface-ipv6-address" || name == "group-count" || name == "disabled-group-count" || name == "master-group-count" || name == "slave-group-count" || name == "interface-count" || name == "master-interface-count" || name == "slave-interface-count")
        return true;
    return false;
}

SubscriberRedundancyManager::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "subscriber-redundancy-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyManager::Interfaces::~Interfaces()
{
}

bool SubscriberRedundancyManager::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyManager::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyManager::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyManager::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyManager::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyManager::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyManager::Interfaces::get_children() const
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

void SubscriberRedundancyManager::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyManager::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyManager::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SubscriberRedundancyManager::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    interface_mapping_id{YType::uint32, "interface-mapping-id"},
    forward_referenced{YType::boolean, "forward-referenced"},
    group_id{YType::uint32, "group-id"},
    role{YType::enumeration, "role"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyManager::Interfaces::Interface::~Interface()
{
}

bool SubscriberRedundancyManager::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_name.is_set
	|| interface_mapping_id.is_set
	|| forward_referenced.is_set
	|| group_id.is_set
	|| role.is_set;
}

bool SubscriberRedundancyManager::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_mapping_id.yfilter)
	|| ydk::is_set(forward_referenced.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string SubscriberRedundancyManager::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-manager/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyManager::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyManager::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_mapping_id.is_set || is_set(interface_mapping_id.yfilter)) leaf_name_data.push_back(interface_mapping_id.get_name_leafdata());
    if (forward_referenced.is_set || is_set(forward_referenced.yfilter)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyManager::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyManager::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyManager::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mapping-id")
    {
        interface_mapping_id = value;
        interface_mapping_id.value_namespace = name_space;
        interface_mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced = value;
        forward_referenced.value_namespace = name_space;
        forward_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyManager::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-mapping-id")
    {
        interface_mapping_id.yfilter = yfilter;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool SubscriberRedundancyManager::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-name" || name == "interface-mapping-id" || name == "forward-referenced" || name == "group-id" || name == "role")
        return true;
    return false;
}

SubscriberRedundancyAgent::SubscriberRedundancyAgent()
    :
    nodes(std::make_shared<SubscriberRedundancyAgent::Nodes>())
{
    nodes->parent = this;

    yang_name = "subscriber-redundancy-agent"; yang_parent_name = "Cisco-IOS-XR-subscriber-srg-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberRedundancyAgent::~SubscriberRedundancyAgent()
{
}

bool SubscriberRedundancyAgent::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SubscriberRedundancyAgent::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SubscriberRedundancyAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SubscriberRedundancyAgent::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void SubscriberRedundancyAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::clone_ptr() const
{
    return std::make_shared<SubscriberRedundancyAgent>();
}

std::string SubscriberRedundancyAgent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberRedundancyAgent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberRedundancyAgent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberRedundancyAgent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberRedundancyAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "subscriber-redundancy-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyAgent::Nodes::~Nodes()
{
}

bool SubscriberRedundancyAgent::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyAgent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyAgent::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyAgent::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    group_id_xr(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr>())
    , interfaces(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces>())
    , group_summaries(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupSummaries>())
    , group_ids(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds>())
{
    group_id_xr->parent = this;
    interfaces->parent = this;
    group_summaries->parent = this;
    group_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SubscriberRedundancyAgent::Nodes::Node::~Node()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (group_id_xr !=  nullptr && group_id_xr->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (group_summaries !=  nullptr && group_summaries->has_data())
	|| (group_ids !=  nullptr && group_ids->has_data());
}

bool SubscriberRedundancyAgent::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (group_id_xr !=  nullptr && group_id_xr->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (group_summaries !=  nullptr && group_summaries->has_operation())
	|| (group_ids !=  nullptr && group_ids->has_operation());
}

std::string SubscriberRedundancyAgent::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-srg-oper:subscriber-redundancy-agent/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SubscriberRedundancyAgent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id-xr")
    {
        if(group_id_xr == nullptr)
        {
            group_id_xr = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr>();
        }
        return group_id_xr;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "group-summaries")
    {
        if(group_summaries == nullptr)
        {
            group_summaries = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupSummaries>();
        }
        return group_summaries;
    }

    if(child_yang_name == "group-ids")
    {
        if(group_ids == nullptr)
        {
            group_ids = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds>();
        }
        return group_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_id_xr != nullptr)
    {
        _children["group-id-xr"] = group_id_xr;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(group_summaries != nullptr)
    {
        _children["group-summaries"] = group_summaries;
    }

    if(group_ids != nullptr)
    {
        _children["group-ids"] = group_ids;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id-xr" || name == "interfaces" || name == "group-summaries" || name == "group-ids" || name == "node-name")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupIdXr()
    :
    group_id(this, {"group_id"})
{

    yang_name = "group-id-xr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::~GroupIdXr()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::has_operation() const
{
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId>();
        ent_->parent = this;
        group_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::GroupId()
    :
    group_id{YType::str, "group-id"},
    group_id_xr{YType::uint32, "group-id-xr"},
    interface_name{YType::str, "interface-name"},
    outer_vlan{YType::uint32, "outer-vlan"},
    inner_vlan{YType::uint32, "inner-vlan"},
    session_mac_address{YType::str, "session-mac-address"},
    pppoe_session_id{YType::uint16, "pppoe-session-id"},
    l2tp_tunnel_id{YType::uint32, "l2tp-tunnel-id"},
    role_master{YType::boolean, "role-master"},
    valid_mac_address{YType::boolean, "valid-mac-address"},
    negative_acknowledgement_update_all{YType::boolean, "negative-acknowledgement-update-all"}
        ,
    session_detailed_information(this, {})
    , session_sync_error_information(this, {})
{

    yang_name = "group-id"; yang_parent_name = "group-id-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::~GroupId()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_detailed_information.len(); index++)
    {
        if(session_detailed_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<session_sync_error_information.len(); index++)
    {
        if(session_sync_error_information[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| group_id_xr.is_set
	|| interface_name.is_set
	|| outer_vlan.is_set
	|| inner_vlan.is_set
	|| session_mac_address.is_set
	|| pppoe_session_id.is_set
	|| l2tp_tunnel_id.is_set
	|| role_master.is_set
	|| valid_mac_address.is_set
	|| negative_acknowledgement_update_all.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_operation() const
{
    for (std::size_t index=0; index<session_detailed_information.len(); index++)
    {
        if(session_detailed_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<session_sync_error_information.len(); index++)
    {
        if(session_sync_error_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_id_xr.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(outer_vlan.yfilter)
	|| ydk::is_set(inner_vlan.yfilter)
	|| ydk::is_set(session_mac_address.yfilter)
	|| ydk::is_set(pppoe_session_id.yfilter)
	|| ydk::is_set(l2tp_tunnel_id.yfilter)
	|| ydk::is_set(role_master.yfilter)
	|| ydk::is_set(valid_mac_address.yfilter)
	|| ydk::is_set(negative_acknowledgement_update_all.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.yfilter)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (outer_vlan.is_set || is_set(outer_vlan.yfilter)) leaf_name_data.push_back(outer_vlan.get_name_leafdata());
    if (inner_vlan.is_set || is_set(inner_vlan.yfilter)) leaf_name_data.push_back(inner_vlan.get_name_leafdata());
    if (session_mac_address.is_set || is_set(session_mac_address.yfilter)) leaf_name_data.push_back(session_mac_address.get_name_leafdata());
    if (pppoe_session_id.is_set || is_set(pppoe_session_id.yfilter)) leaf_name_data.push_back(pppoe_session_id.get_name_leafdata());
    if (l2tp_tunnel_id.is_set || is_set(l2tp_tunnel_id.yfilter)) leaf_name_data.push_back(l2tp_tunnel_id.get_name_leafdata());
    if (role_master.is_set || is_set(role_master.yfilter)) leaf_name_data.push_back(role_master.get_name_leafdata());
    if (valid_mac_address.is_set || is_set(valid_mac_address.yfilter)) leaf_name_data.push_back(valid_mac_address.get_name_leafdata());
    if (negative_acknowledgement_update_all.is_set || is_set(negative_acknowledgement_update_all.yfilter)) leaf_name_data.push_back(negative_acknowledgement_update_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detailed-information")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation>();
        ent_->parent = this;
        session_detailed_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session-sync-error-information")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation>();
        ent_->parent = this;
        session_sync_error_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_detailed_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : session_sync_error_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
        group_id_xr.value_namespace = name_space;
        group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan = value;
        outer_vlan.value_namespace = name_space;
        outer_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan = value;
        inner_vlan.value_namespace = name_space;
        inner_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-mac-address")
    {
        session_mac_address = value;
        session_mac_address.value_namespace = name_space;
        session_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-session-id")
    {
        pppoe_session_id = value;
        pppoe_session_id.value_namespace = name_space;
        pppoe_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-tunnel-id")
    {
        l2tp_tunnel_id = value;
        l2tp_tunnel_id.value_namespace = name_space;
        l2tp_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-master")
    {
        role_master = value;
        role_master.value_namespace = name_space;
        role_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-mac-address")
    {
        valid_mac_address = value;
        valid_mac_address.value_namespace = name_space;
        valid_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-acknowledgement-update-all")
    {
        negative_acknowledgement_update_all = value;
        negative_acknowledgement_update_all.value_namespace = name_space;
        negative_acknowledgement_update_all.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "outer-vlan")
    {
        outer_vlan.yfilter = yfilter;
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.yfilter = yfilter;
    }
    if(value_path == "session-mac-address")
    {
        session_mac_address.yfilter = yfilter;
    }
    if(value_path == "pppoe-session-id")
    {
        pppoe_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-tunnel-id")
    {
        l2tp_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "role-master")
    {
        role_master.yfilter = yfilter;
    }
    if(value_path == "valid-mac-address")
    {
        valid_mac_address.yfilter = yfilter;
    }
    if(value_path == "negative-acknowledgement-update-all")
    {
        negative_acknowledgement_update_all.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detailed-information" || name == "session-sync-error-information" || name == "group-id" || name == "group-id-xr" || name == "interface-name" || name == "outer-vlan" || name == "inner-vlan" || name == "session-mac-address" || name == "pppoe-session-id" || name == "l2tp-tunnel-id" || name == "role-master" || name == "valid-mac-address" || name == "negative-acknowledgement-update-all")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::SessionDetailedInformation()
    :
    component{YType::enumeration, "component"},
    operation_{YType::enumeration, "operation"},
    tx_list_queue_fail{YType::boolean, "tx-list-queue-fail"},
    marked_for_sweeping{YType::boolean, "marked-for-sweeping"},
    marked_for_cleanup{YType::boolean, "marked-for-cleanup"}
{

    yang_name = "session-detailed-information"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::~SessionDetailedInformation()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| operation_.is_set
	|| tx_list_queue_fail.is_set
	|| marked_for_sweeping.is_set
	|| marked_for_cleanup.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(tx_list_queue_fail.yfilter)
	|| ydk::is_set(marked_for_sweeping.yfilter)
	|| ydk::is_set(marked_for_cleanup.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (tx_list_queue_fail.is_set || is_set(tx_list_queue_fail.yfilter)) leaf_name_data.push_back(tx_list_queue_fail.get_name_leafdata());
    if (marked_for_sweeping.is_set || is_set(marked_for_sweeping.yfilter)) leaf_name_data.push_back(marked_for_sweeping.get_name_leafdata());
    if (marked_for_cleanup.is_set || is_set(marked_for_cleanup.yfilter)) leaf_name_data.push_back(marked_for_cleanup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-queue-fail")
    {
        tx_list_queue_fail = value;
        tx_list_queue_fail.value_namespace = name_space;
        tx_list_queue_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-for-sweeping")
    {
        marked_for_sweeping = value;
        marked_for_sweeping.value_namespace = name_space;
        marked_for_sweeping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marked-for-cleanup")
    {
        marked_for_cleanup = value;
        marked_for_cleanup.value_namespace = name_space;
        marked_for_cleanup.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "tx-list-queue-fail")
    {
        tx_list_queue_fail.yfilter = yfilter;
    }
    if(value_path == "marked-for-sweeping")
    {
        marked_for_sweeping.yfilter = yfilter;
    }
    if(value_path == "marked-for-cleanup")
    {
        marked_for_cleanup.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "operation" || name == "tx-list-queue-fail" || name == "marked-for-sweeping" || name == "marked-for-cleanup")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::SessionSyncErrorInformation()
    :
    sync_error_count{YType::uint16, "sync-error-count"},
    last_error_code{YType::uint32, "last-error-code"},
    last_error_type{YType::enumeration, "last-error-type"}
{

    yang_name = "session-sync-error-information"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::~SessionSyncErrorInformation()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_error_count.is_set
	|| last_error_code.is_set
	|| last_error_type.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_error_count.yfilter)
	|| ydk::is_set(last_error_code.yfilter)
	|| ydk::is_set(last_error_type.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-sync-error-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_error_count.is_set || is_set(sync_error_count.yfilter)) leaf_name_data.push_back(sync_error_count.get_name_leafdata());
    if (last_error_code.is_set || is_set(last_error_code.yfilter)) leaf_name_data.push_back(last_error_code.get_name_leafdata());
    if (last_error_type.is_set || is_set(last_error_type.yfilter)) leaf_name_data.push_back(last_error_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-error-count")
    {
        sync_error_count = value;
        sync_error_count.value_namespace = name_space;
        sync_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-error-code")
    {
        last_error_code = value;
        last_error_code.value_namespace = name_space;
        last_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-error-type")
    {
        last_error_type = value;
        last_error_type.value_namespace = name_space;
        last_error_type.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-error-count")
    {
        sync_error_count.yfilter = yfilter;
    }
    if(value_path == "last-error-code")
    {
        last_error_code.yfilter = yfilter;
    }
    if(value_path == "last-error-type")
    {
        last_error_type.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-error-count" || name == "last-error-code" || name == "last-error-type")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::~Interfaces()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::Interfaces::get_children() const
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

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    interface_synchronization_id{YType::uint32, "interface-synchronization-id"},
    group_id{YType::uint32, "group-id"},
    role{YType::enumeration, "role"},
    forward_referenced{YType::boolean, "forward-referenced"},
    session_count{YType::uint32, "session-count"},
    interface_enable_error_count{YType::uint32, "interface-enable-error-count"},
    interface_disable_error_count{YType::uint32, "interface-disable-error-count"},
    interface_caps_add_error_count{YType::uint32, "interface-caps-add-error-count"},
    interface_caps_remove_error_count{YType::uint32, "interface-caps-remove-error-count"},
    interface_attribute_update_error_count{YType::uint32, "interface-attribute-update-error-count"}
        ,
    interface_oper(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>())
    , interface_status(std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>())
    , client_status(this, {})
{
    interface_oper->parent = this;
    interface_status->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_status.len(); index++)
    {
        if(client_status[index]->has_data())
            return true;
    }
    return interface.is_set
	|| interface_name.is_set
	|| interface_synchronization_id.is_set
	|| group_id.is_set
	|| role.is_set
	|| forward_referenced.is_set
	|| session_count.is_set
	|| interface_enable_error_count.is_set
	|| interface_disable_error_count.is_set
	|| interface_caps_add_error_count.is_set
	|| interface_caps_remove_error_count.is_set
	|| interface_attribute_update_error_count.is_set
	|| (interface_oper !=  nullptr && interface_oper->has_data())
	|| (interface_status !=  nullptr && interface_status->has_data());
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<client_status.len(); index++)
    {
        if(client_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_synchronization_id.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(forward_referenced.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(interface_enable_error_count.yfilter)
	|| ydk::is_set(interface_disable_error_count.yfilter)
	|| ydk::is_set(interface_caps_add_error_count.yfilter)
	|| ydk::is_set(interface_caps_remove_error_count.yfilter)
	|| ydk::is_set(interface_attribute_update_error_count.yfilter)
	|| (interface_oper !=  nullptr && interface_oper->has_operation())
	|| (interface_status !=  nullptr && interface_status->has_operation());
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_synchronization_id.is_set || is_set(interface_synchronization_id.yfilter)) leaf_name_data.push_back(interface_synchronization_id.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (forward_referenced.is_set || is_set(forward_referenced.yfilter)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (interface_enable_error_count.is_set || is_set(interface_enable_error_count.yfilter)) leaf_name_data.push_back(interface_enable_error_count.get_name_leafdata());
    if (interface_disable_error_count.is_set || is_set(interface_disable_error_count.yfilter)) leaf_name_data.push_back(interface_disable_error_count.get_name_leafdata());
    if (interface_caps_add_error_count.is_set || is_set(interface_caps_add_error_count.yfilter)) leaf_name_data.push_back(interface_caps_add_error_count.get_name_leafdata());
    if (interface_caps_remove_error_count.is_set || is_set(interface_caps_remove_error_count.yfilter)) leaf_name_data.push_back(interface_caps_remove_error_count.get_name_leafdata());
    if (interface_attribute_update_error_count.is_set || is_set(interface_attribute_update_error_count.yfilter)) leaf_name_data.push_back(interface_attribute_update_error_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-oper")
    {
        if(interface_oper == nullptr)
        {
            interface_oper = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>();
        }
        return interface_oper;
    }

    if(child_yang_name == "interface-status")
    {
        if(interface_status == nullptr)
        {
            interface_status = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>();
        }
        return interface_status;
    }

    if(child_yang_name == "client-status")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus>();
        ent_->parent = this;
        client_status.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_oper != nullptr)
    {
        _children["interface-oper"] = interface_oper;
    }

    if(interface_status != nullptr)
    {
        _children["interface-status"] = interface_status;
    }

    count_ = 0;
    for (auto ent_ : client_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-synchronization-id")
    {
        interface_synchronization_id = value;
        interface_synchronization_id.value_namespace = name_space;
        interface_synchronization_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced = value;
        forward_referenced.value_namespace = name_space;
        forward_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-enable-error-count")
    {
        interface_enable_error_count = value;
        interface_enable_error_count.value_namespace = name_space;
        interface_enable_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-disable-error-count")
    {
        interface_disable_error_count = value;
        interface_disable_error_count.value_namespace = name_space;
        interface_disable_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-caps-add-error-count")
    {
        interface_caps_add_error_count = value;
        interface_caps_add_error_count.value_namespace = name_space;
        interface_caps_add_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-caps-remove-error-count")
    {
        interface_caps_remove_error_count = value;
        interface_caps_remove_error_count.value_namespace = name_space;
        interface_caps_remove_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-attribute-update-error-count")
    {
        interface_attribute_update_error_count = value;
        interface_attribute_update_error_count.value_namespace = name_space;
        interface_attribute_update_error_count.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-synchronization-id")
    {
        interface_synchronization_id.yfilter = yfilter;
    }
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "interface-enable-error-count")
    {
        interface_enable_error_count.yfilter = yfilter;
    }
    if(value_path == "interface-disable-error-count")
    {
        interface_disable_error_count.yfilter = yfilter;
    }
    if(value_path == "interface-caps-add-error-count")
    {
        interface_caps_add_error_count.yfilter = yfilter;
    }
    if(value_path == "interface-caps-remove-error-count")
    {
        interface_caps_remove_error_count.yfilter = yfilter;
    }
    if(value_path == "interface-attribute-update-error-count")
    {
        interface_attribute_update_error_count.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-oper" || name == "interface-status" || name == "client-status" || name == "interface" || name == "interface-name" || name == "interface-synchronization-id" || name == "group-id" || name == "role" || name == "forward-referenced" || name == "session-count" || name == "interface-enable-error-count" || name == "interface-disable-error-count" || name == "interface-caps-add-error-count" || name == "interface-caps-remove-error-count" || name == "interface-attribute-update-error-count")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::InterfaceOper()
    :
    idb_oper_reg_enable{YType::boolean, "idb-oper-reg-enable"},
    idb_oper_reg_disable{YType::boolean, "idb-oper-reg-disable"},
    idb_oper_caps_add{YType::boolean, "idb-oper-caps-add"},
    idb_oper_caps_remove{YType::boolean, "idb-oper-caps-remove"},
    idb_oper_attr_update{YType::boolean, "idb-oper-attr-update"}
{

    yang_name = "interface-oper"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::~InterfaceOper()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_data() const
{
    if (is_presence_container) return true;
    return idb_oper_reg_enable.is_set
	|| idb_oper_reg_disable.is_set
	|| idb_oper_caps_add.is_set
	|| idb_oper_caps_remove.is_set
	|| idb_oper_attr_update.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idb_oper_reg_enable.yfilter)
	|| ydk::is_set(idb_oper_reg_disable.yfilter)
	|| ydk::is_set(idb_oper_caps_add.yfilter)
	|| ydk::is_set(idb_oper_caps_remove.yfilter)
	|| ydk::is_set(idb_oper_attr_update.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idb_oper_reg_enable.is_set || is_set(idb_oper_reg_enable.yfilter)) leaf_name_data.push_back(idb_oper_reg_enable.get_name_leafdata());
    if (idb_oper_reg_disable.is_set || is_set(idb_oper_reg_disable.yfilter)) leaf_name_data.push_back(idb_oper_reg_disable.get_name_leafdata());
    if (idb_oper_caps_add.is_set || is_set(idb_oper_caps_add.yfilter)) leaf_name_data.push_back(idb_oper_caps_add.get_name_leafdata());
    if (idb_oper_caps_remove.is_set || is_set(idb_oper_caps_remove.yfilter)) leaf_name_data.push_back(idb_oper_caps_remove.get_name_leafdata());
    if (idb_oper_attr_update.is_set || is_set(idb_oper_attr_update.yfilter)) leaf_name_data.push_back(idb_oper_attr_update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idb-oper-reg-enable")
    {
        idb_oper_reg_enable = value;
        idb_oper_reg_enable.value_namespace = name_space;
        idb_oper_reg_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oper-reg-disable")
    {
        idb_oper_reg_disable = value;
        idb_oper_reg_disable.value_namespace = name_space;
        idb_oper_reg_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oper-caps-add")
    {
        idb_oper_caps_add = value;
        idb_oper_caps_add.value_namespace = name_space;
        idb_oper_caps_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oper-caps-remove")
    {
        idb_oper_caps_remove = value;
        idb_oper_caps_remove.value_namespace = name_space;
        idb_oper_caps_remove.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oper-attr-update")
    {
        idb_oper_attr_update = value;
        idb_oper_attr_update.value_namespace = name_space;
        idb_oper_attr_update.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idb-oper-reg-enable")
    {
        idb_oper_reg_enable.yfilter = yfilter;
    }
    if(value_path == "idb-oper-reg-disable")
    {
        idb_oper_reg_disable.yfilter = yfilter;
    }
    if(value_path == "idb-oper-caps-add")
    {
        idb_oper_caps_add.yfilter = yfilter;
    }
    if(value_path == "idb-oper-caps-remove")
    {
        idb_oper_caps_remove.yfilter = yfilter;
    }
    if(value_path == "idb-oper-attr-update")
    {
        idb_oper_attr_update.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idb-oper-reg-enable" || name == "idb-oper-reg-disable" || name == "idb-oper-caps-add" || name == "idb-oper-caps-remove" || name == "idb-oper-attr-update")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::InterfaceStatus()
    :
    idb_state_fwd_ref{YType::boolean, "idb-state-fwd-ref"},
    idb_state_stale{YType::boolean, "idb-state-stale"},
    idb_state_registered{YType::boolean, "idb-state-registered"},
    idb_state_caps_added{YType::boolean, "idb-state-caps-added"},
    idb_state_owned_re_source{YType::boolean, "idb-state-owned-re-source"},
    idb_client_eoms_pending{YType::boolean, "idb-client-eoms-pending"},
    idb_state_p_end_caps_rem{YType::boolean, "idb-state-p-end-caps-rem"},
    idb_state_p_end_reg_disable{YType::boolean, "idb-state-p-end-reg-disable"}
{

    yang_name = "interface-status"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::~InterfaceStatus()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_data() const
{
    if (is_presence_container) return true;
    return idb_state_fwd_ref.is_set
	|| idb_state_stale.is_set
	|| idb_state_registered.is_set
	|| idb_state_caps_added.is_set
	|| idb_state_owned_re_source.is_set
	|| idb_client_eoms_pending.is_set
	|| idb_state_p_end_caps_rem.is_set
	|| idb_state_p_end_reg_disable.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idb_state_fwd_ref.yfilter)
	|| ydk::is_set(idb_state_stale.yfilter)
	|| ydk::is_set(idb_state_registered.yfilter)
	|| ydk::is_set(idb_state_caps_added.yfilter)
	|| ydk::is_set(idb_state_owned_re_source.yfilter)
	|| ydk::is_set(idb_client_eoms_pending.yfilter)
	|| ydk::is_set(idb_state_p_end_caps_rem.yfilter)
	|| ydk::is_set(idb_state_p_end_reg_disable.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idb_state_fwd_ref.is_set || is_set(idb_state_fwd_ref.yfilter)) leaf_name_data.push_back(idb_state_fwd_ref.get_name_leafdata());
    if (idb_state_stale.is_set || is_set(idb_state_stale.yfilter)) leaf_name_data.push_back(idb_state_stale.get_name_leafdata());
    if (idb_state_registered.is_set || is_set(idb_state_registered.yfilter)) leaf_name_data.push_back(idb_state_registered.get_name_leafdata());
    if (idb_state_caps_added.is_set || is_set(idb_state_caps_added.yfilter)) leaf_name_data.push_back(idb_state_caps_added.get_name_leafdata());
    if (idb_state_owned_re_source.is_set || is_set(idb_state_owned_re_source.yfilter)) leaf_name_data.push_back(idb_state_owned_re_source.get_name_leafdata());
    if (idb_client_eoms_pending.is_set || is_set(idb_client_eoms_pending.yfilter)) leaf_name_data.push_back(idb_client_eoms_pending.get_name_leafdata());
    if (idb_state_p_end_caps_rem.is_set || is_set(idb_state_p_end_caps_rem.yfilter)) leaf_name_data.push_back(idb_state_p_end_caps_rem.get_name_leafdata());
    if (idb_state_p_end_reg_disable.is_set || is_set(idb_state_p_end_reg_disable.yfilter)) leaf_name_data.push_back(idb_state_p_end_reg_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idb-state-fwd-ref")
    {
        idb_state_fwd_ref = value;
        idb_state_fwd_ref.value_namespace = name_space;
        idb_state_fwd_ref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-state-stale")
    {
        idb_state_stale = value;
        idb_state_stale.value_namespace = name_space;
        idb_state_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-state-registered")
    {
        idb_state_registered = value;
        idb_state_registered.value_namespace = name_space;
        idb_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-state-caps-added")
    {
        idb_state_caps_added = value;
        idb_state_caps_added.value_namespace = name_space;
        idb_state_caps_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-state-owned-re-source")
    {
        idb_state_owned_re_source = value;
        idb_state_owned_re_source.value_namespace = name_space;
        idb_state_owned_re_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-client-eoms-pending")
    {
        idb_client_eoms_pending = value;
        idb_client_eoms_pending.value_namespace = name_space;
        idb_client_eoms_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-state-p-end-caps-rem")
    {
        idb_state_p_end_caps_rem = value;
        idb_state_p_end_caps_rem.value_namespace = name_space;
        idb_state_p_end_caps_rem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-state-p-end-reg-disable")
    {
        idb_state_p_end_reg_disable = value;
        idb_state_p_end_reg_disable.value_namespace = name_space;
        idb_state_p_end_reg_disable.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idb-state-fwd-ref")
    {
        idb_state_fwd_ref.yfilter = yfilter;
    }
    if(value_path == "idb-state-stale")
    {
        idb_state_stale.yfilter = yfilter;
    }
    if(value_path == "idb-state-registered")
    {
        idb_state_registered.yfilter = yfilter;
    }
    if(value_path == "idb-state-caps-added")
    {
        idb_state_caps_added.yfilter = yfilter;
    }
    if(value_path == "idb-state-owned-re-source")
    {
        idb_state_owned_re_source.yfilter = yfilter;
    }
    if(value_path == "idb-client-eoms-pending")
    {
        idb_client_eoms_pending.yfilter = yfilter;
    }
    if(value_path == "idb-state-p-end-caps-rem")
    {
        idb_state_p_end_caps_rem.yfilter = yfilter;
    }
    if(value_path == "idb-state-p-end-reg-disable")
    {
        idb_state_p_end_reg_disable.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idb-state-fwd-ref" || name == "idb-state-stale" || name == "idb-state-registered" || name == "idb-state-caps-added" || name == "idb-state-owned-re-source" || name == "idb-client-eoms-pending" || name == "idb-state-p-end-caps-rem" || name == "idb-state-p-end-reg-disable")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::ClientStatus()
    :
    component{YType::enumeration, "component"},
    srg_show_idb_client_eoms_pending{YType::boolean, "srg-show-idb-client-eoms-pending"},
    srg_show_idb_client_sync_eod_pending{YType::boolean, "srg-show-idb-client-sync-eod-pending"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "client-status"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::~ClientStatus()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| srg_show_idb_client_eoms_pending.is_set
	|| srg_show_idb_client_sync_eod_pending.is_set
	|| session_count.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(srg_show_idb_client_eoms_pending.yfilter)
	|| ydk::is_set(srg_show_idb_client_sync_eod_pending.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-status";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (srg_show_idb_client_eoms_pending.is_set || is_set(srg_show_idb_client_eoms_pending.yfilter)) leaf_name_data.push_back(srg_show_idb_client_eoms_pending.get_name_leafdata());
    if (srg_show_idb_client_sync_eod_pending.is_set || is_set(srg_show_idb_client_sync_eod_pending.yfilter)) leaf_name_data.push_back(srg_show_idb_client_sync_eod_pending.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-show-idb-client-eoms-pending")
    {
        srg_show_idb_client_eoms_pending = value;
        srg_show_idb_client_eoms_pending.value_namespace = name_space;
        srg_show_idb_client_eoms_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-show-idb-client-sync-eod-pending")
    {
        srg_show_idb_client_sync_eod_pending = value;
        srg_show_idb_client_sync_eod_pending.value_namespace = name_space;
        srg_show_idb_client_sync_eod_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "srg-show-idb-client-eoms-pending")
    {
        srg_show_idb_client_eoms_pending.yfilter = yfilter;
    }
    if(value_path == "srg-show-idb-client-sync-eod-pending")
    {
        srg_show_idb_client_sync_eod_pending.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "srg-show-idb-client-eoms-pending" || name == "srg-show-idb-client-sync-eod-pending" || name == "session-count")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummaries()
    :
    group_summary(this, {"group_id"})
{

    yang_name = "group-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::~GroupSummaries()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_summary.len(); index++)
    {
        if(group_summary[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::has_operation() const
{
    for (std::size_t index=0; index<group_summary.len(); index++)
    {
        if(group_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-summary")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary>();
        ent_->parent = this;
        group_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-summary")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::GroupSummary()
    :
    group_id{YType::str, "group-id"},
    group_id_xr{YType::uint32, "group-id-xr"},
    role{YType::enumeration, "role"},
    disabled{YType::boolean, "disabled"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    peer_status{YType::enumeration, "peer-status"},
    preferred_role{YType::enumeration, "preferred-role"},
    slave_mode{YType::enumeration, "slave-mode"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    interface_count{YType::uint32, "interface-count"},
    session_count{YType::uint32, "session-count"},
    pending_add_session_count{YType::uint32, "pending-add-session-count"}
{

    yang_name = "group-summary"; yang_parent_name = "group-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::~GroupSummary()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| group_id_xr.is_set
	|| role.is_set
	|| disabled.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| peer_status.is_set
	|| preferred_role.is_set
	|| slave_mode.is_set
	|| object_tracking_status.is_set
	|| interface_count.is_set
	|| session_count.is_set
	|| pending_add_session_count.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_id_xr.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(peer_ipv4_address.yfilter)
	|| ydk::is_set(peer_ipv6_address.yfilter)
	|| ydk::is_set(peer_status.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(object_tracking_status.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(pending_add_session_count.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.yfilter)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.yfilter)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.yfilter)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (peer_status.is_set || is_set(peer_status.yfilter)) leaf_name_data.push_back(peer_status.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.yfilter)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (pending_add_session_count.is_set || is_set(pending_add_session_count.yfilter)) leaf_name_data.push_back(pending_add_session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
        group_id_xr.value_namespace = name_space;
        group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
        peer_ipv4_address.value_namespace = name_space;
        peer_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address = value;
        peer_ipv6_address.value_namespace = name_space;
        peer_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-status")
    {
        peer_status = value;
        peer_status.value_namespace = name_space;
        peer_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-mode")
    {
        slave_mode = value;
        slave_mode.value_namespace = name_space;
        slave_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status = value;
        object_tracking_status.value_namespace = name_space;
        object_tracking_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-add-session-count")
    {
        pending_add_session_count = value;
        pending_add_session_count.value_namespace = name_space;
        pending_add_session_count.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "peer-status")
    {
        peer_status.yfilter = yfilter;
    }
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "slave-mode")
    {
        slave_mode.yfilter = yfilter;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "pending-add-session-count")
    {
        pending_add_session_count.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "group-id-xr" || name == "role" || name == "disabled" || name == "peer-ipv4-address" || name == "peer-ipv6-address" || name == "peer-status" || name == "preferred-role" || name == "slave-mode" || name == "object-tracking-status" || name == "interface-count" || name == "session-count" || name == "pending-add-session-count")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupIds()
    :
    group_id(this, {"group_id"})
{

    yang_name = "group-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::~GroupIds()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId>();
        ent_->parent = this;
        group_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::GroupId()
    :
    group_id{YType::str, "group-id"},
    group_id_xr{YType::uint32, "group-id-xr"},
    description{YType::str, "description"},
    disabled{YType::boolean, "disabled"},
    init_role{YType::enumeration, "init-role"},
    negotiating_role{YType::enumeration, "negotiating-role"},
    current_role{YType::enumeration, "current-role"},
    slave_mode{YType::enumeration, "slave-mode"},
    hold_timer{YType::uint32, "hold-timer"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_disable{YType::boolean, "virtual-mac-address-disable"},
    l2tp_source_ip{YType::str, "l2tp-source-ip"},
    core_tracking_object_name{YType::str, "core-tracking-object-name"},
    core_tracking_object_status{YType::boolean, "core-tracking-object-status"},
    access_tracking_object_name{YType::str, "access-tracking-object-name"},
    access_tracking_object_status{YType::boolean, "access-tracking-object-status"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    peer_status{YType::enumeration, "peer-status"},
    peer_last_negotiation_time_epoch{YType::uint64, "peer-last-negotiation-time-epoch"},
    peer_last_up_time_epoch{YType::uint64, "peer-last-up-time-epoch"},
    peer_last_down_time_epoch{YType::uint64, "peer-last-down-time-epoch"},
    peer_init_role{YType::enumeration, "peer-init-role"},
    peer_negotiating_role{YType::enumeration, "peer-negotiating-role"},
    peer_current_role{YType::enumeration, "peer-current-role"},
    peer_object_tracking_status{YType::boolean, "peer-object-tracking-status"},
    last_switchover_time_epoch{YType::uint64, "last-switchover-time-epoch"},
    switchover_count{YType::uint32, "switchover-count"},
    last_switchover_reason{YType::enumeration, "last-switchover-reason"},
    switchover_hold_time{YType::uint32, "switchover-hold-time"},
    session_count{YType::uint32, "session-count"},
    slave_update_failure_count{YType::uint32, "slave-update-failure-count"},
    tunnel_count{YType::uint32, "tunnel-count"},
    pending_session_update_count{YType::uint32, "pending-session-update-count"},
    pending_session_delete_count{YType::uint32, "pending-session-delete-count"},
    interface_count{YType::uint32, "interface-count"},
    revertive_timer{YType::uint32, "revertive-timer"},
    switchover_revert_time{YType::uint32, "switchover-revert-time"}
        ,
    interface(this, {})
{

    yang_name = "group-id"; yang_parent_name = "group-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::~GroupId()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| group_id_xr.is_set
	|| description.is_set
	|| disabled.is_set
	|| init_role.is_set
	|| negotiating_role.is_set
	|| current_role.is_set
	|| slave_mode.is_set
	|| hold_timer.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_disable.is_set
	|| l2tp_source_ip.is_set
	|| core_tracking_object_name.is_set
	|| core_tracking_object_status.is_set
	|| access_tracking_object_name.is_set
	|| access_tracking_object_status.is_set
	|| object_tracking_status.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| peer_status.is_set
	|| peer_last_negotiation_time_epoch.is_set
	|| peer_last_up_time_epoch.is_set
	|| peer_last_down_time_epoch.is_set
	|| peer_init_role.is_set
	|| peer_negotiating_role.is_set
	|| peer_current_role.is_set
	|| peer_object_tracking_status.is_set
	|| last_switchover_time_epoch.is_set
	|| switchover_count.is_set
	|| last_switchover_reason.is_set
	|| switchover_hold_time.is_set
	|| session_count.is_set
	|| slave_update_failure_count.is_set
	|| tunnel_count.is_set
	|| pending_session_update_count.is_set
	|| pending_session_delete_count.is_set
	|| interface_count.is_set
	|| revertive_timer.is_set
	|| switchover_revert_time.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(group_id_xr.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(init_role.yfilter)
	|| ydk::is_set(negotiating_role.yfilter)
	|| ydk::is_set(current_role.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(virtual_mac_address_disable.yfilter)
	|| ydk::is_set(l2tp_source_ip.yfilter)
	|| ydk::is_set(core_tracking_object_name.yfilter)
	|| ydk::is_set(core_tracking_object_status.yfilter)
	|| ydk::is_set(access_tracking_object_name.yfilter)
	|| ydk::is_set(access_tracking_object_status.yfilter)
	|| ydk::is_set(object_tracking_status.yfilter)
	|| ydk::is_set(peer_ipv4_address.yfilter)
	|| ydk::is_set(peer_ipv6_address.yfilter)
	|| ydk::is_set(peer_status.yfilter)
	|| ydk::is_set(peer_last_negotiation_time_epoch.yfilter)
	|| ydk::is_set(peer_last_up_time_epoch.yfilter)
	|| ydk::is_set(peer_last_down_time_epoch.yfilter)
	|| ydk::is_set(peer_init_role.yfilter)
	|| ydk::is_set(peer_negotiating_role.yfilter)
	|| ydk::is_set(peer_current_role.yfilter)
	|| ydk::is_set(peer_object_tracking_status.yfilter)
	|| ydk::is_set(last_switchover_time_epoch.yfilter)
	|| ydk::is_set(switchover_count.yfilter)
	|| ydk::is_set(last_switchover_reason.yfilter)
	|| ydk::is_set(switchover_hold_time.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(slave_update_failure_count.yfilter)
	|| ydk::is_set(tunnel_count.yfilter)
	|| ydk::is_set(pending_session_update_count.yfilter)
	|| ydk::is_set(pending_session_delete_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(revertive_timer.yfilter)
	|| ydk::is_set(switchover_revert_time.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.yfilter)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (init_role.is_set || is_set(init_role.yfilter)) leaf_name_data.push_back(init_role.get_name_leafdata());
    if (negotiating_role.is_set || is_set(negotiating_role.yfilter)) leaf_name_data.push_back(negotiating_role.get_name_leafdata());
    if (current_role.is_set || is_set(current_role.yfilter)) leaf_name_data.push_back(current_role.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_disable.is_set || is_set(virtual_mac_address_disable.yfilter)) leaf_name_data.push_back(virtual_mac_address_disable.get_name_leafdata());
    if (l2tp_source_ip.is_set || is_set(l2tp_source_ip.yfilter)) leaf_name_data.push_back(l2tp_source_ip.get_name_leafdata());
    if (core_tracking_object_name.is_set || is_set(core_tracking_object_name.yfilter)) leaf_name_data.push_back(core_tracking_object_name.get_name_leafdata());
    if (core_tracking_object_status.is_set || is_set(core_tracking_object_status.yfilter)) leaf_name_data.push_back(core_tracking_object_status.get_name_leafdata());
    if (access_tracking_object_name.is_set || is_set(access_tracking_object_name.yfilter)) leaf_name_data.push_back(access_tracking_object_name.get_name_leafdata());
    if (access_tracking_object_status.is_set || is_set(access_tracking_object_status.yfilter)) leaf_name_data.push_back(access_tracking_object_status.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.yfilter)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.yfilter)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.yfilter)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (peer_status.is_set || is_set(peer_status.yfilter)) leaf_name_data.push_back(peer_status.get_name_leafdata());
    if (peer_last_negotiation_time_epoch.is_set || is_set(peer_last_negotiation_time_epoch.yfilter)) leaf_name_data.push_back(peer_last_negotiation_time_epoch.get_name_leafdata());
    if (peer_last_up_time_epoch.is_set || is_set(peer_last_up_time_epoch.yfilter)) leaf_name_data.push_back(peer_last_up_time_epoch.get_name_leafdata());
    if (peer_last_down_time_epoch.is_set || is_set(peer_last_down_time_epoch.yfilter)) leaf_name_data.push_back(peer_last_down_time_epoch.get_name_leafdata());
    if (peer_init_role.is_set || is_set(peer_init_role.yfilter)) leaf_name_data.push_back(peer_init_role.get_name_leafdata());
    if (peer_negotiating_role.is_set || is_set(peer_negotiating_role.yfilter)) leaf_name_data.push_back(peer_negotiating_role.get_name_leafdata());
    if (peer_current_role.is_set || is_set(peer_current_role.yfilter)) leaf_name_data.push_back(peer_current_role.get_name_leafdata());
    if (peer_object_tracking_status.is_set || is_set(peer_object_tracking_status.yfilter)) leaf_name_data.push_back(peer_object_tracking_status.get_name_leafdata());
    if (last_switchover_time_epoch.is_set || is_set(last_switchover_time_epoch.yfilter)) leaf_name_data.push_back(last_switchover_time_epoch.get_name_leafdata());
    if (switchover_count.is_set || is_set(switchover_count.yfilter)) leaf_name_data.push_back(switchover_count.get_name_leafdata());
    if (last_switchover_reason.is_set || is_set(last_switchover_reason.yfilter)) leaf_name_data.push_back(last_switchover_reason.get_name_leafdata());
    if (switchover_hold_time.is_set || is_set(switchover_hold_time.yfilter)) leaf_name_data.push_back(switchover_hold_time.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (slave_update_failure_count.is_set || is_set(slave_update_failure_count.yfilter)) leaf_name_data.push_back(slave_update_failure_count.get_name_leafdata());
    if (tunnel_count.is_set || is_set(tunnel_count.yfilter)) leaf_name_data.push_back(tunnel_count.get_name_leafdata());
    if (pending_session_update_count.is_set || is_set(pending_session_update_count.yfilter)) leaf_name_data.push_back(pending_session_update_count.get_name_leafdata());
    if (pending_session_delete_count.is_set || is_set(pending_session_delete_count.yfilter)) leaf_name_data.push_back(pending_session_delete_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (revertive_timer.is_set || is_set(revertive_timer.yfilter)) leaf_name_data.push_back(revertive_timer.get_name_leafdata());
    if (switchover_revert_time.is_set || is_set(switchover_revert_time.yfilter)) leaf_name_data.push_back(switchover_revert_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_children() const
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

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr = value;
        group_id_xr.value_namespace = name_space;
        group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-role")
    {
        init_role = value;
        init_role.value_namespace = name_space;
        init_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiating-role")
    {
        negotiating_role = value;
        negotiating_role.value_namespace = name_space;
        negotiating_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-role")
    {
        current_role = value;
        current_role.value_namespace = name_space;
        current_role.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address-disable")
    {
        virtual_mac_address_disable = value;
        virtual_mac_address_disable.value_namespace = name_space;
        virtual_mac_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-source-ip")
    {
        l2tp_source_ip = value;
        l2tp_source_ip.value_namespace = name_space;
        l2tp_source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-tracking-object-name")
    {
        core_tracking_object_name = value;
        core_tracking_object_name.value_namespace = name_space;
        core_tracking_object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-tracking-object-status")
    {
        core_tracking_object_status = value;
        core_tracking_object_status.value_namespace = name_space;
        core_tracking_object_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-tracking-object-name")
    {
        access_tracking_object_name = value;
        access_tracking_object_name.value_namespace = name_space;
        access_tracking_object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-tracking-object-status")
    {
        access_tracking_object_status = value;
        access_tracking_object_status.value_namespace = name_space;
        access_tracking_object_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status = value;
        object_tracking_status.value_namespace = name_space;
        object_tracking_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address = value;
        peer_ipv4_address.value_namespace = name_space;
        peer_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address = value;
        peer_ipv6_address.value_namespace = name_space;
        peer_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-status")
    {
        peer_status = value;
        peer_status.value_namespace = name_space;
        peer_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-last-negotiation-time-epoch")
    {
        peer_last_negotiation_time_epoch = value;
        peer_last_negotiation_time_epoch.value_namespace = name_space;
        peer_last_negotiation_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-last-up-time-epoch")
    {
        peer_last_up_time_epoch = value;
        peer_last_up_time_epoch.value_namespace = name_space;
        peer_last_up_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-last-down-time-epoch")
    {
        peer_last_down_time_epoch = value;
        peer_last_down_time_epoch.value_namespace = name_space;
        peer_last_down_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-init-role")
    {
        peer_init_role = value;
        peer_init_role.value_namespace = name_space;
        peer_init_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-negotiating-role")
    {
        peer_negotiating_role = value;
        peer_negotiating_role.value_namespace = name_space;
        peer_negotiating_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-current-role")
    {
        peer_current_role = value;
        peer_current_role.value_namespace = name_space;
        peer_current_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-object-tracking-status")
    {
        peer_object_tracking_status = value;
        peer_object_tracking_status.value_namespace = name_space;
        peer_object_tracking_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-switchover-time-epoch")
    {
        last_switchover_time_epoch = value;
        last_switchover_time_epoch.value_namespace = name_space;
        last_switchover_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-count")
    {
        switchover_count = value;
        switchover_count.value_namespace = name_space;
        switchover_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-switchover-reason")
    {
        last_switchover_reason = value;
        last_switchover_reason.value_namespace = name_space;
        last_switchover_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-hold-time")
    {
        switchover_hold_time = value;
        switchover_hold_time.value_namespace = name_space;
        switchover_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-update-failure-count")
    {
        slave_update_failure_count = value;
        slave_update_failure_count.value_namespace = name_space;
        slave_update_failure_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count = value;
        tunnel_count.value_namespace = name_space;
        tunnel_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-session-update-count")
    {
        pending_session_update_count = value;
        pending_session_update_count.value_namespace = name_space;
        pending_session_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-session-delete-count")
    {
        pending_session_delete_count = value;
        pending_session_delete_count.value_namespace = name_space;
        pending_session_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revertive-timer")
    {
        revertive_timer = value;
        revertive_timer.value_namespace = name_space;
        revertive_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-revert-time")
    {
        switchover_revert_time = value;
        switchover_revert_time.value_namespace = name_space;
        switchover_revert_time.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "group-id-xr")
    {
        group_id_xr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "init-role")
    {
        init_role.yfilter = yfilter;
    }
    if(value_path == "negotiating-role")
    {
        negotiating_role.yfilter = yfilter;
    }
    if(value_path == "current-role")
    {
        current_role.yfilter = yfilter;
    }
    if(value_path == "slave-mode")
    {
        slave_mode.yfilter = yfilter;
    }
    if(value_path == "hold-timer")
    {
        hold_timer.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address-disable")
    {
        virtual_mac_address_disable.yfilter = yfilter;
    }
    if(value_path == "l2tp-source-ip")
    {
        l2tp_source_ip.yfilter = yfilter;
    }
    if(value_path == "core-tracking-object-name")
    {
        core_tracking_object_name.yfilter = yfilter;
    }
    if(value_path == "core-tracking-object-status")
    {
        core_tracking_object_status.yfilter = yfilter;
    }
    if(value_path == "access-tracking-object-name")
    {
        access_tracking_object_name.yfilter = yfilter;
    }
    if(value_path == "access-tracking-object-status")
    {
        access_tracking_object_status.yfilter = yfilter;
    }
    if(value_path == "object-tracking-status")
    {
        object_tracking_status.yfilter = yfilter;
    }
    if(value_path == "peer-ipv4-address")
    {
        peer_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "peer-ipv6-address")
    {
        peer_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "peer-status")
    {
        peer_status.yfilter = yfilter;
    }
    if(value_path == "peer-last-negotiation-time-epoch")
    {
        peer_last_negotiation_time_epoch.yfilter = yfilter;
    }
    if(value_path == "peer-last-up-time-epoch")
    {
        peer_last_up_time_epoch.yfilter = yfilter;
    }
    if(value_path == "peer-last-down-time-epoch")
    {
        peer_last_down_time_epoch.yfilter = yfilter;
    }
    if(value_path == "peer-init-role")
    {
        peer_init_role.yfilter = yfilter;
    }
    if(value_path == "peer-negotiating-role")
    {
        peer_negotiating_role.yfilter = yfilter;
    }
    if(value_path == "peer-current-role")
    {
        peer_current_role.yfilter = yfilter;
    }
    if(value_path == "peer-object-tracking-status")
    {
        peer_object_tracking_status.yfilter = yfilter;
    }
    if(value_path == "last-switchover-time-epoch")
    {
        last_switchover_time_epoch.yfilter = yfilter;
    }
    if(value_path == "switchover-count")
    {
        switchover_count.yfilter = yfilter;
    }
    if(value_path == "last-switchover-reason")
    {
        last_switchover_reason.yfilter = yfilter;
    }
    if(value_path == "switchover-hold-time")
    {
        switchover_hold_time.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "slave-update-failure-count")
    {
        slave_update_failure_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count.yfilter = yfilter;
    }
    if(value_path == "pending-session-update-count")
    {
        pending_session_update_count.yfilter = yfilter;
    }
    if(value_path == "pending-session-delete-count")
    {
        pending_session_delete_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "revertive-timer")
    {
        revertive_timer.yfilter = yfilter;
    }
    if(value_path == "switchover-revert-time")
    {
        switchover_revert_time.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "group-id" || name == "group-id-xr" || name == "description" || name == "disabled" || name == "init-role" || name == "negotiating-role" || name == "current-role" || name == "slave-mode" || name == "hold-timer" || name == "virtual-mac-address" || name == "virtual-mac-address-disable" || name == "l2tp-source-ip" || name == "core-tracking-object-name" || name == "core-tracking-object-status" || name == "access-tracking-object-name" || name == "access-tracking-object-status" || name == "object-tracking-status" || name == "peer-ipv4-address" || name == "peer-ipv6-address" || name == "peer-status" || name == "peer-last-negotiation-time-epoch" || name == "peer-last-up-time-epoch" || name == "peer-last-down-time-epoch" || name == "peer-init-role" || name == "peer-negotiating-role" || name == "peer-current-role" || name == "peer-object-tracking-status" || name == "last-switchover-time-epoch" || name == "switchover-count" || name == "last-switchover-reason" || name == "switchover-hold-time" || name == "session-count" || name == "slave-update-failure-count" || name == "tunnel-count" || name == "pending-session-update-count" || name == "pending-session-delete-count" || name == "interface-count" || name == "revertive-timer" || name == "switchover-revert-time")
        return true;
    return false;
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_synchronization_id{YType::uint32, "interface-synchronization-id"},
    forward_referenced{YType::boolean, "forward-referenced"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "interface"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::~Interface()
{
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_synchronization_id.is_set
	|| forward_referenced.is_set
	|| session_count.is_set;
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_synchronization_id.yfilter)
	|| ydk::is_set(forward_referenced.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_synchronization_id.is_set || is_set(interface_synchronization_id.yfilter)) leaf_name_data.push_back(interface_synchronization_id.get_name_leafdata());
    if (forward_referenced.is_set || is_set(forward_referenced.yfilter)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-synchronization-id")
    {
        interface_synchronization_id = value;
        interface_synchronization_id.value_namespace = name_space;
        interface_synchronization_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced = value;
        forward_referenced.value_namespace = name_space;
        forward_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-synchronization-id")
    {
        interface_synchronization_id.yfilter = yfilter;
    }
    if(value_path == "forward-referenced")
    {
        forward_referenced.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool SubscriberRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-synchronization-id" || name == "forward-referenced" || name == "session-count")
        return true;
    return false;
}

const Enum::YLeaf SrgShowSoReason::internal {0, "internal"};
const Enum::YLeaf SrgShowSoReason::admin {1, "admin"};
const Enum::YLeaf SrgShowSoReason::peer_up {2, "peer-up"};
const Enum::YLeaf SrgShowSoReason::peer_down {3, "peer-down"};
const Enum::YLeaf SrgShowSoReason::object_tracking_status_change {4, "object-tracking-status-change"};
const Enum::YLeaf SrgShowSoReason::srg_show_so_reason_max {5, "srg-show-so-reason-max"};

const Enum::YLeaf SrgPeerStatus::not_configured {0, "not-configured"};
const Enum::YLeaf SrgPeerStatus::initialize {1, "initialize"};
const Enum::YLeaf SrgPeerStatus::retry {2, "retry"};
const Enum::YLeaf SrgPeerStatus::connect {3, "connect"};
const Enum::YLeaf SrgPeerStatus::listen {4, "listen"};
const Enum::YLeaf SrgPeerStatus::registration {5, "registration"};
const Enum::YLeaf SrgPeerStatus::cleanup {6, "cleanup"};
const Enum::YLeaf SrgPeerStatus::connected {7, "connected"};
const Enum::YLeaf SrgPeerStatus::established {8, "established"};

const Enum::YLeaf SrgShowSessionError::none {0, "none"};
const Enum::YLeaf SrgShowSessionError::hard {1, "hard"};
const Enum::YLeaf SrgShowSessionError::soft {2, "soft"};

const Enum::YLeaf SrgShowSessionOperation::none {0, "none"};
const Enum::YLeaf SrgShowSessionOperation::update {1, "update"};
const Enum::YLeaf SrgShowSessionOperation::delete_ {2, "delete"};
const Enum::YLeaf SrgShowSessionOperation::in_sync {3, "in-sync"};

const Enum::YLeaf SrgShowComp::srga {0, "srga"};
const Enum::YLeaf SrgShowComp::dhcpv4 {1, "dhcpv4"};
const Enum::YLeaf SrgShowComp::dhcpv6 {2, "dhcpv6"};
const Enum::YLeaf SrgShowComp::pppoe {3, "pppoe"};
const Enum::YLeaf SrgShowComp::ppp {4, "ppp"};
const Enum::YLeaf SrgShowComp::l2tp {5, "l2tp"};
const Enum::YLeaf SrgShowComp::iedge {6, "iedge"};

const Enum::YLeaf SrgShowSlaveMode::none {0, "none"};
const Enum::YLeaf SrgShowSlaveMode::warm {1, "warm"};
const Enum::YLeaf SrgShowSlaveMode::hot {2, "hot"};

const Enum::YLeaf SrgShowRole::none {0, "none"};
const Enum::YLeaf SrgShowRole::master {1, "master"};
const Enum::YLeaf SrgShowRole::slave {2, "slave"};

const Enum::YLeaf SrgShowImRole::none {0, "none"};
const Enum::YLeaf SrgShowImRole::master {1, "master"};
const Enum::YLeaf SrgShowImRole::slave {2, "slave"};


}
}

