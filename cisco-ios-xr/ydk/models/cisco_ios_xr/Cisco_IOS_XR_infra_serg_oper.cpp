
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_serg_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_serg_oper {

SessionRedundancyManager::SessionRedundancyManager()
    :
    interfaces(std::make_shared<SessionRedundancyManager::Interfaces>())
    , groups(std::make_shared<SessionRedundancyManager::Groups>())
    , summary(std::make_shared<SessionRedundancyManager::Summary>())
{
    interfaces->parent = this;
    groups->parent = this;
    summary->parent = this;

    yang_name = "session-redundancy-manager"; yang_parent_name = "Cisco-IOS-XR-infra-serg-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SessionRedundancyManager::~SessionRedundancyManager()
{
}

bool SessionRedundancyManager::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool SessionRedundancyManager::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string SessionRedundancyManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SessionRedundancyManager::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<SessionRedundancyManager::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<SessionRedundancyManager::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void SessionRedundancyManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SessionRedundancyManager::clone_ptr() const
{
    return std::make_shared<SessionRedundancyManager>();
}

std::string SessionRedundancyManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SessionRedundancyManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SessionRedundancyManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SessionRedundancyManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SessionRedundancyManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "groups" || name == "summary")
        return true;
    return false;
}

SessionRedundancyManager::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "session-redundancy-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionRedundancyManager::Interfaces::~Interfaces()
{
}

bool SessionRedundancyManager::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyManager::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyManager::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyManager::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyManager::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyManager::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SessionRedundancyManager::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyManager::Interfaces::get_children() const
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

void SessionRedundancyManager::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyManager::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyManager::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SessionRedundancyManager::Interfaces::Interface::Interface()
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

SessionRedundancyManager::Interfaces::Interface::~Interface()
{
}

bool SessionRedundancyManager::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_name.is_set
	|| interface_mapping_id.is_set
	|| forward_referenced.is_set
	|| group_id.is_set
	|| role.is_set;
}

bool SessionRedundancyManager::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_mapping_id.yfilter)
	|| ydk::is_set(forward_referenced.yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string SessionRedundancyManager::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyManager::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyManager::Interfaces::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> SessionRedundancyManager::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyManager::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyManager::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyManager::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyManager::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-name" || name == "interface-mapping-id" || name == "forward-referenced" || name == "group-id" || name == "role")
        return true;
    return false;
}

SessionRedundancyManager::Groups::Groups()
    :
    group(this, {"group"})
{

    yang_name = "groups"; yang_parent_name = "session-redundancy-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionRedundancyManager::Groups::~Groups()
{
}

bool SessionRedundancyManager::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyManager::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyManager::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyManager::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyManager::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyManager::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<SessionRedundancyManager::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyManager::Groups::get_children() const
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

void SessionRedundancyManager::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyManager::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyManager::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

SessionRedundancyManager::Groups::Group::Group()
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
    node_name{YType::str, "node-name"}
{

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionRedundancyManager::Groups::Group::~Group()
{
}

bool SessionRedundancyManager::Groups::Group::has_data() const
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
	|| node_name.is_set;
}

bool SessionRedundancyManager::Groups::Group::has_operation() const
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
	|| ydk::is_set(node_name.yfilter);
}

std::string SessionRedundancyManager::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyManager::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group, "group");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyManager::Groups::Group::get_name_leaf_data() const
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
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyManager::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyManager::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyManager::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyManager::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool SessionRedundancyManager::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "group-id" || name == "description" || name == "disabled" || name == "role" || name == "peer-ipv4-address" || name == "peer-ipv6-address" || name == "interface-count" || name == "preferred-role" || name == "slave-mode" || name == "object-tracking-status" || name == "node-name")
        return true;
    return false;
}

SessionRedundancyManager::Summary::Summary()
    :
    disabled{YType::boolean, "disabled"},
    active_state{YType::boolean, "active-state"},
    preferred_role{YType::enumeration, "preferred-role"},
    slave_mode{YType::enumeration, "slave-mode"},
    hold_timer{YType::uint32, "hold-timer"},
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
    slave_interface_count{YType::uint32, "slave-interface-count"},
    pool_count{YType::uint32, "pool-count"}
{

    yang_name = "summary"; yang_parent_name = "session-redundancy-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionRedundancyManager::Summary::~Summary()
{
}

bool SessionRedundancyManager::Summary::has_data() const
{
    if (is_presence_container) return true;
    return disabled.is_set
	|| active_state.is_set
	|| preferred_role.is_set
	|| slave_mode.is_set
	|| hold_timer.is_set
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
	|| slave_interface_count.is_set
	|| pool_count.is_set;
}

bool SessionRedundancyManager::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(active_state.yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(slave_mode.yfilter)
	|| ydk::is_set(hold_timer.yfilter)
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
	|| ydk::is_set(slave_interface_count.yfilter)
	|| ydk::is_set(pool_count.yfilter);
}

std::string SessionRedundancyManager::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyManager::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyManager::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (active_state.is_set || is_set(active_state.yfilter)) leaf_name_data.push_back(active_state.get_name_leafdata());
    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (slave_mode.is_set || is_set(slave_mode.yfilter)) leaf_name_data.push_back(slave_mode.get_name_leafdata());
    if (hold_timer.is_set || is_set(hold_timer.yfilter)) leaf_name_data.push_back(hold_timer.get_name_leafdata());
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
    if (pool_count.is_set || is_set(pool_count.yfilter)) leaf_name_data.push_back(pool_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyManager::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyManager::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyManager::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pool-count")
    {
        pool_count = value;
        pool_count.value_namespace = name_space;
        pool_count.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyManager::Summary::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "pool-count")
    {
        pool_count.yfilter = yfilter;
    }
}

bool SessionRedundancyManager::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "active-state" || name == "preferred-role" || name == "slave-mode" || name == "hold-timer" || name == "source-interface-name" || name == "vrf-name" || name == "source-interface-ipv4-address" || name == "source-interface-ipv6-address" || name == "group-count" || name == "disabled-group-count" || name == "master-group-count" || name == "slave-group-count" || name == "interface-count" || name == "master-interface-count" || name == "slave-interface-count" || name == "pool-count")
        return true;
    return false;
}

SessionRedundancyAgent::SessionRedundancyAgent()
    :
    nodes(std::make_shared<SessionRedundancyAgent::Nodes>())
{
    nodes->parent = this;

    yang_name = "session-redundancy-agent"; yang_parent_name = "Cisco-IOS-XR-infra-serg-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SessionRedundancyAgent::~SessionRedundancyAgent()
{
}

bool SessionRedundancyAgent::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SessionRedundancyAgent::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SessionRedundancyAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SessionRedundancyAgent::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void SessionRedundancyAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::clone_ptr() const
{
    return std::make_shared<SessionRedundancyAgent>();
}

std::string SessionRedundancyAgent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SessionRedundancyAgent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SessionRedundancyAgent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SessionRedundancyAgent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SessionRedundancyAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "session-redundancy-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionRedundancyAgent::Nodes::~Nodes()
{
}

bool SessionRedundancyAgent::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyAgent::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::get_children() const
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

void SessionRedundancyAgent::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    group_id_xr(std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr>())
    , client_ids(std::make_shared<SessionRedundancyAgent::Nodes::Node::ClientIds>())
    , memory(std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory>())
    , group_ids(std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds>())
    , interfaces(std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces>())
    , stats_global(std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal>())
    , group_summaries(std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupSummaries>())
{
    group_id_xr->parent = this;
    client_ids->parent = this;
    memory->parent = this;
    group_ids->parent = this;
    interfaces->parent = this;
    stats_global->parent = this;
    group_summaries->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionRedundancyAgent::Nodes::Node::~Node()
{
}

bool SessionRedundancyAgent::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (group_id_xr !=  nullptr && group_id_xr->has_data())
	|| (client_ids !=  nullptr && client_ids->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (group_ids !=  nullptr && group_ids->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (stats_global !=  nullptr && stats_global->has_data())
	|| (group_summaries !=  nullptr && group_summaries->has_data());
}

bool SessionRedundancyAgent::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (group_id_xr !=  nullptr && group_id_xr->has_operation())
	|| (client_ids !=  nullptr && client_ids->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (group_ids !=  nullptr && group_ids->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (stats_global !=  nullptr && stats_global->has_operation())
	|| (group_summaries !=  nullptr && group_summaries->has_operation());
}

std::string SessionRedundancyAgent::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-serg-oper:session-redundancy-agent/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionRedundancyAgent::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id-xr")
    {
        if(group_id_xr == nullptr)
        {
            group_id_xr = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr>();
        }
        return group_id_xr;
    }

    if(child_yang_name == "client-ids")
    {
        if(client_ids == nullptr)
        {
            client_ids = std::make_shared<SessionRedundancyAgent::Nodes::Node::ClientIds>();
        }
        return client_ids;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "group-ids")
    {
        if(group_ids == nullptr)
        {
            group_ids = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds>();
        }
        return group_ids;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "stats-global")
    {
        if(stats_global == nullptr)
        {
            stats_global = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal>();
        }
        return stats_global;
    }

    if(child_yang_name == "group-summaries")
    {
        if(group_summaries == nullptr)
        {
            group_summaries = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupSummaries>();
        }
        return group_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_id_xr != nullptr)
    {
        _children["group-id-xr"] = group_id_xr;
    }

    if(client_ids != nullptr)
    {
        _children["client-ids"] = client_ids;
    }

    if(memory != nullptr)
    {
        _children["memory"] = memory;
    }

    if(group_ids != nullptr)
    {
        _children["group-ids"] = group_ids;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(stats_global != nullptr)
    {
        _children["stats-global"] = stats_global;
    }

    if(group_summaries != nullptr)
    {
        _children["group-summaries"] = group_summaries;
    }

    return _children;
}

void SessionRedundancyAgent::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id-xr" || name == "client-ids" || name == "memory" || name == "group-ids" || name == "interfaces" || name == "stats-global" || name == "group-summaries" || name == "node-name")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupIdXr()
    :
    group_id(this, {"group_id"})
{

    yang_name = "group-id-xr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::~GroupIdXr()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::has_operation() const
{
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId>();
        ent_->parent = this;
        group_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::get_children() const
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

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::GroupId()
    :
    group_id{YType::str, "group-id"},
    group_id_xr{YType::uint32, "group-id-xr"},
    interface_name{YType::str, "interface-name"},
    key_index{YType::str, "key-index"},
    role_master{YType::boolean, "role-master"},
    negative_acknowledgement_update_all{YType::boolean, "negative-acknowledgement-update-all"}
        ,
    session_detailed_information(this, {})
    , session_sync_error_information(this, {})
{

    yang_name = "group-id"; yang_parent_name = "group-id-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::~GroupId()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_data() const
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
	|| key_index.is_set
	|| role_master.is_set
	|| negative_acknowledgement_update_all.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_operation() const
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
	|| ydk::is_set(key_index.yfilter)
	|| ydk::is_set(role_master.yfilter)
	|| ydk::is_set(negative_acknowledgement_update_all.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (group_id_xr.is_set || is_set(group_id_xr.yfilter)) leaf_name_data.push_back(group_id_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (key_index.is_set || is_set(key_index.yfilter)) leaf_name_data.push_back(key_index.get_name_leafdata());
    if (role_master.is_set || is_set(role_master.yfilter)) leaf_name_data.push_back(role_master.get_name_leafdata());
    if (negative_acknowledgement_update_all.is_set || is_set(negative_acknowledgement_update_all.yfilter)) leaf_name_data.push_back(negative_acknowledgement_update_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detailed-information")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation>();
        ent_->parent = this;
        session_detailed_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session-sync-error-information")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation>();
        ent_->parent = this;
        session_sync_error_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::get_children() const
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

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "key-index")
    {
        key_index = value;
        key_index.value_namespace = name_space;
        key_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-master")
    {
        role_master = value;
        role_master.value_namespace = name_space;
        role_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-acknowledgement-update-all")
    {
        negative_acknowledgement_update_all = value;
        negative_acknowledgement_update_all.value_namespace = name_space;
        negative_acknowledgement_update_all.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "key-index")
    {
        key_index.yfilter = yfilter;
    }
    if(value_path == "role-master")
    {
        role_master.yfilter = yfilter;
    }
    if(value_path == "negative-acknowledgement-update-all")
    {
        negative_acknowledgement_update_all.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detailed-information" || name == "session-sync-error-information" || name == "group-id" || name == "group-id-xr" || name == "interface-name" || name == "key-index" || name == "role-master" || name == "negative-acknowledgement-update-all")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::SessionDetailedInformation()
    :
    component{YType::enumeration, "component"},
    operation_{YType::enumeration, "operation"},
    tx_list_queue_fail{YType::boolean, "tx-list-queue-fail"},
    marked_for_sweeping{YType::boolean, "marked-for-sweeping"},
    marked_for_cleanup{YType::boolean, "marked-for-cleanup"}
{

    yang_name = "session-detailed-information"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::~SessionDetailedInformation()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| operation_.is_set
	|| tx_list_queue_fail.is_set
	|| marked_for_sweeping.is_set
	|| marked_for_cleanup.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(tx_list_queue_fail.yfilter)
	|| ydk::is_set(marked_for_sweeping.yfilter)
	|| ydk::is_set(marked_for_cleanup.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (tx_list_queue_fail.is_set || is_set(tx_list_queue_fail.yfilter)) leaf_name_data.push_back(tx_list_queue_fail.get_name_leafdata());
    if (marked_for_sweeping.is_set || is_set(marked_for_sweeping.yfilter)) leaf_name_data.push_back(marked_for_sweeping.get_name_leafdata());
    if (marked_for_cleanup.is_set || is_set(marked_for_cleanup.yfilter)) leaf_name_data.push_back(marked_for_cleanup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionDetailedInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "operation" || name == "tx-list-queue-fail" || name == "marked-for-sweeping" || name == "marked-for-cleanup")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::SessionSyncErrorInformation()
    :
    sync_error_count{YType::uint16, "sync-error-count"},
    last_error_code{YType::uint32, "last-error-code"},
    last_error_type{YType::enumeration, "last-error-type"}
{

    yang_name = "session-sync-error-information"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::~SessionSyncErrorInformation()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_error_count.is_set
	|| last_error_code.is_set
	|| last_error_type.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_error_count.yfilter)
	|| ydk::is_set(last_error_code.yfilter)
	|| ydk::is_set(last_error_type.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-sync-error-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_error_count.is_set || is_set(sync_error_count.yfilter)) leaf_name_data.push_back(sync_error_count.get_name_leafdata());
    if (last_error_code.is_set || is_set(last_error_code.yfilter)) leaf_name_data.push_back(last_error_code.get_name_leafdata());
    if (last_error_type.is_set || is_set(last_error_type.yfilter)) leaf_name_data.push_back(last_error_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::GroupIdXr::GroupId::SessionSyncErrorInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-error-count" || name == "last-error-code" || name == "last-error-type")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::ClientIds::ClientIds()
    :
    client_id(this, {"stats_client_id"})
{

    yang_name = "client-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::ClientIds::~ClientIds()
{
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_id.len(); index++)
    {
        if(client_id[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::has_operation() const
{
    for (std::size_t index=0; index<client_id.len(); index++)
    {
        if(client_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::ClientIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::ClientIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::ClientIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId>();
        ent_->parent = this;
        client_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::ClientIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SessionRedundancyAgent::Nodes::Node::ClientIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::Node::ClientIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::ClientId()
    :
    stats_client_id{YType::uint32, "stats-client-id"},
    tx_list_start_of_download_add_ok{YType::uint32, "tx-list-start-of-download-add-ok"},
    tx_list_start_of_download_add_not_ok{YType::uint32, "tx-list-start-of-download-add-not-ok"},
    tx_list_end_of_download_add_ok{YType::uint32, "tx-list-end-of-download-add-ok"},
    tx_list_end_of_download_add_not_ok{YType::uint32, "tx-list-end-of-download-add-not-ok"},
    tx_list_end_of_message_add_ok{YType::uint32, "tx-list-end-of-message-add-ok"},
    tx_list_end_of_message_add_not_ok{YType::uint32, "tx-list-end-of-message-add-not-ok"},
    tx_list_clear_all_add_ok{YType::uint32, "tx-list-clear-all-add-ok"},
    tx_list_clear_all_add_not_ok{YType::uint32, "tx-list-clear-all-add-not-ok"},
    tx_list_clear_selected_add_ok{YType::uint32, "tx-list-clear-selected-add-ok"},
    tx_list_clear_selected_add_not_ok{YType::uint32, "tx-list-clear-selected-add-not-ok"},
    tx_list_replay_all_add_ok{YType::uint32, "tx-list-replay-all-add-ok"},
    tx_list_replay_all_add_not_ok{YType::uint32, "tx-list-replay-all-add-not-ok"},
    tx_list_replay_selected_add_ok{YType::uint32, "tx-list-replay-selected-add-ok"},
    tx_list_replay_selected_add_not_ok{YType::uint32, "tx-list-replay-selected-add-not-ok"},
    tx_list_session_session_add_ok{YType::uint32, "tx-list-session-session-add-ok"},
    tx_list_session_session_add_not_ok{YType::uint32, "tx-list-session-session-add-not-ok"},
    tx_list_session_session_update_ok{YType::uint32, "tx-list-session-session-update-ok"},
    tx_list_session_session_update_not_ok{YType::uint32, "tx-list-session-session-update-not-ok"},
    tx_list_session_session_delete{YType::uint32, "tx-list-session-session-delete"},
    clean_call_back{YType::uint32, "clean-call-back"},
    tx_list_encode_session_session_ok{YType::uint32, "tx-list-encode-session-session-ok"},
    tx_list_encode_session_session_partial_write{YType::uint32, "tx-list-encode-session-session-partial-write"},
    last_replay_all_count{YType::uint32, "last-replay-all-count"},
    tx_list_receive_command_replay_all{YType::uint32, "tx-list-receive-command-replay-all"},
    tx_list_receive_command_replay_selected{YType::uint32, "tx-list-receive-command-replay-selected"},
    tx_list_receive_session_session_delete_valid{YType::uint32, "tx-list-receive-session-session-delete-valid"},
    tx_list_receive_session_session_delete_invalid{YType::uint32, "tx-list-receive-session-session-delete-invalid"},
    tx_list_receive_session_session_update_valid{YType::uint32, "tx-list-receive-session-session-update-valid"},
    tx_list_receive_session_session_update_invalid{YType::uint32, "tx-list-receive-session-session-update-invalid"},
    tx_list_receive_session_session_sod_all{YType::uint32, "tx-list-receive-session-session-sod-all"},
    tx_list_receive_session_session_sod_selected{YType::uint32, "tx-list-receive-session-session-sod-selected"},
    tx_list_receive_session_session_eod_all{YType::uint32, "tx-list-receive-session-session-eod-all"},
    tx_list_receive_session_session_eod_selected{YType::uint32, "tx-list-receive-session-session-eod-selected"},
    tx_list_receive_session_session_eoms{YType::uint32, "tx-list-receive-session-session-eoms"},
    tx_list_receive_session_session_clear_all{YType::uint32, "tx-list-receive-session-session-clear-all"},
    tx_list_receive_session_session_clear_selected{YType::uint32, "tx-list-receive-session-session-clear-selected"},
    tx_list_receive_session_session_neg_ack{YType::uint32, "tx-list-receive-session-session-neg-ack"},
    tx_list_receive_session_session_neg_ack_not_ok{YType::uint32, "tx-list-receive-session-session-neg-ack-not-ok"},
    tx_list_client_registration_ok{YType::uint32, "tx-list-client-registration-ok"},
    tx_list_client_registration_not_ok{YType::uint32, "tx-list-client-registration-not-ok"},
    tx_list_client_de_registration{YType::uint32, "tx-list-client-de-registration"},
    tx_list_client_connection_down{YType::uint32, "tx-list-client-connection-down"},
    tx_list_client_cleanup{YType::uint32, "tx-list-client-cleanup"},
    tx_list_active_ok{YType::uint32, "tx-list-active-ok"},
    tx_list_active_not_ok{YType::uint32, "tx-list-active-not-ok"},
    tx_list_de_active_ok{YType::uint32, "tx-list-de-active-ok"},
    tx_list_de_active_not_ok{YType::uint32, "tx-list-de-active-not-ok"},
    tx_list_send_pool_role_ok{YType::uint32, "tx-list-send-pool-role-ok"},
    tx_list_send_pool_role_not_ok{YType::uint32, "tx-list-send-pool-role-not-ok"},
    tx_list_send_pool_update_ok{YType::uint32, "tx-list-send-pool-update-ok"},
    tx_list_send_pool_update_not_ok{YType::uint32, "tx-list-send-pool-update-not-ok"},
    tx_list_recv_pool_update_ok{YType::uint32, "tx-list-recv-pool-update-ok"}
{

    yang_name = "client-id"; yang_parent_name = "client-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::~ClientId()
{
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::has_data() const
{
    if (is_presence_container) return true;
    return stats_client_id.is_set
	|| tx_list_start_of_download_add_ok.is_set
	|| tx_list_start_of_download_add_not_ok.is_set
	|| tx_list_end_of_download_add_ok.is_set
	|| tx_list_end_of_download_add_not_ok.is_set
	|| tx_list_end_of_message_add_ok.is_set
	|| tx_list_end_of_message_add_not_ok.is_set
	|| tx_list_clear_all_add_ok.is_set
	|| tx_list_clear_all_add_not_ok.is_set
	|| tx_list_clear_selected_add_ok.is_set
	|| tx_list_clear_selected_add_not_ok.is_set
	|| tx_list_replay_all_add_ok.is_set
	|| tx_list_replay_all_add_not_ok.is_set
	|| tx_list_replay_selected_add_ok.is_set
	|| tx_list_replay_selected_add_not_ok.is_set
	|| tx_list_session_session_add_ok.is_set
	|| tx_list_session_session_add_not_ok.is_set
	|| tx_list_session_session_update_ok.is_set
	|| tx_list_session_session_update_not_ok.is_set
	|| tx_list_session_session_delete.is_set
	|| clean_call_back.is_set
	|| tx_list_encode_session_session_ok.is_set
	|| tx_list_encode_session_session_partial_write.is_set
	|| last_replay_all_count.is_set
	|| tx_list_receive_command_replay_all.is_set
	|| tx_list_receive_command_replay_selected.is_set
	|| tx_list_receive_session_session_delete_valid.is_set
	|| tx_list_receive_session_session_delete_invalid.is_set
	|| tx_list_receive_session_session_update_valid.is_set
	|| tx_list_receive_session_session_update_invalid.is_set
	|| tx_list_receive_session_session_sod_all.is_set
	|| tx_list_receive_session_session_sod_selected.is_set
	|| tx_list_receive_session_session_eod_all.is_set
	|| tx_list_receive_session_session_eod_selected.is_set
	|| tx_list_receive_session_session_eoms.is_set
	|| tx_list_receive_session_session_clear_all.is_set
	|| tx_list_receive_session_session_clear_selected.is_set
	|| tx_list_receive_session_session_neg_ack.is_set
	|| tx_list_receive_session_session_neg_ack_not_ok.is_set
	|| tx_list_client_registration_ok.is_set
	|| tx_list_client_registration_not_ok.is_set
	|| tx_list_client_de_registration.is_set
	|| tx_list_client_connection_down.is_set
	|| tx_list_client_cleanup.is_set
	|| tx_list_active_ok.is_set
	|| tx_list_active_not_ok.is_set
	|| tx_list_de_active_ok.is_set
	|| tx_list_de_active_not_ok.is_set
	|| tx_list_send_pool_role_ok.is_set
	|| tx_list_send_pool_role_not_ok.is_set
	|| tx_list_send_pool_update_ok.is_set
	|| tx_list_send_pool_update_not_ok.is_set
	|| tx_list_recv_pool_update_ok.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stats_client_id.yfilter)
	|| ydk::is_set(tx_list_start_of_download_add_ok.yfilter)
	|| ydk::is_set(tx_list_start_of_download_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_end_of_download_add_ok.yfilter)
	|| ydk::is_set(tx_list_end_of_download_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_end_of_message_add_ok.yfilter)
	|| ydk::is_set(tx_list_end_of_message_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_clear_all_add_ok.yfilter)
	|| ydk::is_set(tx_list_clear_all_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_clear_selected_add_ok.yfilter)
	|| ydk::is_set(tx_list_clear_selected_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_replay_all_add_ok.yfilter)
	|| ydk::is_set(tx_list_replay_all_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_replay_selected_add_ok.yfilter)
	|| ydk::is_set(tx_list_replay_selected_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_session_session_add_ok.yfilter)
	|| ydk::is_set(tx_list_session_session_add_not_ok.yfilter)
	|| ydk::is_set(tx_list_session_session_update_ok.yfilter)
	|| ydk::is_set(tx_list_session_session_update_not_ok.yfilter)
	|| ydk::is_set(tx_list_session_session_delete.yfilter)
	|| ydk::is_set(clean_call_back.yfilter)
	|| ydk::is_set(tx_list_encode_session_session_ok.yfilter)
	|| ydk::is_set(tx_list_encode_session_session_partial_write.yfilter)
	|| ydk::is_set(last_replay_all_count.yfilter)
	|| ydk::is_set(tx_list_receive_command_replay_all.yfilter)
	|| ydk::is_set(tx_list_receive_command_replay_selected.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_delete_valid.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_delete_invalid.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_update_valid.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_update_invalid.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_sod_all.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_sod_selected.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_eod_all.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_eod_selected.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_eoms.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_clear_all.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_clear_selected.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_neg_ack.yfilter)
	|| ydk::is_set(tx_list_receive_session_session_neg_ack_not_ok.yfilter)
	|| ydk::is_set(tx_list_client_registration_ok.yfilter)
	|| ydk::is_set(tx_list_client_registration_not_ok.yfilter)
	|| ydk::is_set(tx_list_client_de_registration.yfilter)
	|| ydk::is_set(tx_list_client_connection_down.yfilter)
	|| ydk::is_set(tx_list_client_cleanup.yfilter)
	|| ydk::is_set(tx_list_active_ok.yfilter)
	|| ydk::is_set(tx_list_active_not_ok.yfilter)
	|| ydk::is_set(tx_list_de_active_ok.yfilter)
	|| ydk::is_set(tx_list_de_active_not_ok.yfilter)
	|| ydk::is_set(tx_list_send_pool_role_ok.yfilter)
	|| ydk::is_set(tx_list_send_pool_role_not_ok.yfilter)
	|| ydk::is_set(tx_list_send_pool_update_ok.yfilter)
	|| ydk::is_set(tx_list_send_pool_update_not_ok.yfilter)
	|| ydk::is_set(tx_list_recv_pool_update_ok.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    ADD_KEY_TOKEN(stats_client_id, "stats-client-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_client_id.is_set || is_set(stats_client_id.yfilter)) leaf_name_data.push_back(stats_client_id.get_name_leafdata());
    if (tx_list_start_of_download_add_ok.is_set || is_set(tx_list_start_of_download_add_ok.yfilter)) leaf_name_data.push_back(tx_list_start_of_download_add_ok.get_name_leafdata());
    if (tx_list_start_of_download_add_not_ok.is_set || is_set(tx_list_start_of_download_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_start_of_download_add_not_ok.get_name_leafdata());
    if (tx_list_end_of_download_add_ok.is_set || is_set(tx_list_end_of_download_add_ok.yfilter)) leaf_name_data.push_back(tx_list_end_of_download_add_ok.get_name_leafdata());
    if (tx_list_end_of_download_add_not_ok.is_set || is_set(tx_list_end_of_download_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_end_of_download_add_not_ok.get_name_leafdata());
    if (tx_list_end_of_message_add_ok.is_set || is_set(tx_list_end_of_message_add_ok.yfilter)) leaf_name_data.push_back(tx_list_end_of_message_add_ok.get_name_leafdata());
    if (tx_list_end_of_message_add_not_ok.is_set || is_set(tx_list_end_of_message_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_end_of_message_add_not_ok.get_name_leafdata());
    if (tx_list_clear_all_add_ok.is_set || is_set(tx_list_clear_all_add_ok.yfilter)) leaf_name_data.push_back(tx_list_clear_all_add_ok.get_name_leafdata());
    if (tx_list_clear_all_add_not_ok.is_set || is_set(tx_list_clear_all_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_clear_all_add_not_ok.get_name_leafdata());
    if (tx_list_clear_selected_add_ok.is_set || is_set(tx_list_clear_selected_add_ok.yfilter)) leaf_name_data.push_back(tx_list_clear_selected_add_ok.get_name_leafdata());
    if (tx_list_clear_selected_add_not_ok.is_set || is_set(tx_list_clear_selected_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_clear_selected_add_not_ok.get_name_leafdata());
    if (tx_list_replay_all_add_ok.is_set || is_set(tx_list_replay_all_add_ok.yfilter)) leaf_name_data.push_back(tx_list_replay_all_add_ok.get_name_leafdata());
    if (tx_list_replay_all_add_not_ok.is_set || is_set(tx_list_replay_all_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_replay_all_add_not_ok.get_name_leafdata());
    if (tx_list_replay_selected_add_ok.is_set || is_set(tx_list_replay_selected_add_ok.yfilter)) leaf_name_data.push_back(tx_list_replay_selected_add_ok.get_name_leafdata());
    if (tx_list_replay_selected_add_not_ok.is_set || is_set(tx_list_replay_selected_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_replay_selected_add_not_ok.get_name_leafdata());
    if (tx_list_session_session_add_ok.is_set || is_set(tx_list_session_session_add_ok.yfilter)) leaf_name_data.push_back(tx_list_session_session_add_ok.get_name_leafdata());
    if (tx_list_session_session_add_not_ok.is_set || is_set(tx_list_session_session_add_not_ok.yfilter)) leaf_name_data.push_back(tx_list_session_session_add_not_ok.get_name_leafdata());
    if (tx_list_session_session_update_ok.is_set || is_set(tx_list_session_session_update_ok.yfilter)) leaf_name_data.push_back(tx_list_session_session_update_ok.get_name_leafdata());
    if (tx_list_session_session_update_not_ok.is_set || is_set(tx_list_session_session_update_not_ok.yfilter)) leaf_name_data.push_back(tx_list_session_session_update_not_ok.get_name_leafdata());
    if (tx_list_session_session_delete.is_set || is_set(tx_list_session_session_delete.yfilter)) leaf_name_data.push_back(tx_list_session_session_delete.get_name_leafdata());
    if (clean_call_back.is_set || is_set(clean_call_back.yfilter)) leaf_name_data.push_back(clean_call_back.get_name_leafdata());
    if (tx_list_encode_session_session_ok.is_set || is_set(tx_list_encode_session_session_ok.yfilter)) leaf_name_data.push_back(tx_list_encode_session_session_ok.get_name_leafdata());
    if (tx_list_encode_session_session_partial_write.is_set || is_set(tx_list_encode_session_session_partial_write.yfilter)) leaf_name_data.push_back(tx_list_encode_session_session_partial_write.get_name_leafdata());
    if (last_replay_all_count.is_set || is_set(last_replay_all_count.yfilter)) leaf_name_data.push_back(last_replay_all_count.get_name_leafdata());
    if (tx_list_receive_command_replay_all.is_set || is_set(tx_list_receive_command_replay_all.yfilter)) leaf_name_data.push_back(tx_list_receive_command_replay_all.get_name_leafdata());
    if (tx_list_receive_command_replay_selected.is_set || is_set(tx_list_receive_command_replay_selected.yfilter)) leaf_name_data.push_back(tx_list_receive_command_replay_selected.get_name_leafdata());
    if (tx_list_receive_session_session_delete_valid.is_set || is_set(tx_list_receive_session_session_delete_valid.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_delete_valid.get_name_leafdata());
    if (tx_list_receive_session_session_delete_invalid.is_set || is_set(tx_list_receive_session_session_delete_invalid.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_delete_invalid.get_name_leafdata());
    if (tx_list_receive_session_session_update_valid.is_set || is_set(tx_list_receive_session_session_update_valid.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_update_valid.get_name_leafdata());
    if (tx_list_receive_session_session_update_invalid.is_set || is_set(tx_list_receive_session_session_update_invalid.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_update_invalid.get_name_leafdata());
    if (tx_list_receive_session_session_sod_all.is_set || is_set(tx_list_receive_session_session_sod_all.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_sod_all.get_name_leafdata());
    if (tx_list_receive_session_session_sod_selected.is_set || is_set(tx_list_receive_session_session_sod_selected.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_sod_selected.get_name_leafdata());
    if (tx_list_receive_session_session_eod_all.is_set || is_set(tx_list_receive_session_session_eod_all.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_eod_all.get_name_leafdata());
    if (tx_list_receive_session_session_eod_selected.is_set || is_set(tx_list_receive_session_session_eod_selected.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_eod_selected.get_name_leafdata());
    if (tx_list_receive_session_session_eoms.is_set || is_set(tx_list_receive_session_session_eoms.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_eoms.get_name_leafdata());
    if (tx_list_receive_session_session_clear_all.is_set || is_set(tx_list_receive_session_session_clear_all.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_clear_all.get_name_leafdata());
    if (tx_list_receive_session_session_clear_selected.is_set || is_set(tx_list_receive_session_session_clear_selected.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_clear_selected.get_name_leafdata());
    if (tx_list_receive_session_session_neg_ack.is_set || is_set(tx_list_receive_session_session_neg_ack.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_neg_ack.get_name_leafdata());
    if (tx_list_receive_session_session_neg_ack_not_ok.is_set || is_set(tx_list_receive_session_session_neg_ack_not_ok.yfilter)) leaf_name_data.push_back(tx_list_receive_session_session_neg_ack_not_ok.get_name_leafdata());
    if (tx_list_client_registration_ok.is_set || is_set(tx_list_client_registration_ok.yfilter)) leaf_name_data.push_back(tx_list_client_registration_ok.get_name_leafdata());
    if (tx_list_client_registration_not_ok.is_set || is_set(tx_list_client_registration_not_ok.yfilter)) leaf_name_data.push_back(tx_list_client_registration_not_ok.get_name_leafdata());
    if (tx_list_client_de_registration.is_set || is_set(tx_list_client_de_registration.yfilter)) leaf_name_data.push_back(tx_list_client_de_registration.get_name_leafdata());
    if (tx_list_client_connection_down.is_set || is_set(tx_list_client_connection_down.yfilter)) leaf_name_data.push_back(tx_list_client_connection_down.get_name_leafdata());
    if (tx_list_client_cleanup.is_set || is_set(tx_list_client_cleanup.yfilter)) leaf_name_data.push_back(tx_list_client_cleanup.get_name_leafdata());
    if (tx_list_active_ok.is_set || is_set(tx_list_active_ok.yfilter)) leaf_name_data.push_back(tx_list_active_ok.get_name_leafdata());
    if (tx_list_active_not_ok.is_set || is_set(tx_list_active_not_ok.yfilter)) leaf_name_data.push_back(tx_list_active_not_ok.get_name_leafdata());
    if (tx_list_de_active_ok.is_set || is_set(tx_list_de_active_ok.yfilter)) leaf_name_data.push_back(tx_list_de_active_ok.get_name_leafdata());
    if (tx_list_de_active_not_ok.is_set || is_set(tx_list_de_active_not_ok.yfilter)) leaf_name_data.push_back(tx_list_de_active_not_ok.get_name_leafdata());
    if (tx_list_send_pool_role_ok.is_set || is_set(tx_list_send_pool_role_ok.yfilter)) leaf_name_data.push_back(tx_list_send_pool_role_ok.get_name_leafdata());
    if (tx_list_send_pool_role_not_ok.is_set || is_set(tx_list_send_pool_role_not_ok.yfilter)) leaf_name_data.push_back(tx_list_send_pool_role_not_ok.get_name_leafdata());
    if (tx_list_send_pool_update_ok.is_set || is_set(tx_list_send_pool_update_ok.yfilter)) leaf_name_data.push_back(tx_list_send_pool_update_ok.get_name_leafdata());
    if (tx_list_send_pool_update_not_ok.is_set || is_set(tx_list_send_pool_update_not_ok.yfilter)) leaf_name_data.push_back(tx_list_send_pool_update_not_ok.get_name_leafdata());
    if (tx_list_recv_pool_update_ok.is_set || is_set(tx_list_recv_pool_update_ok.yfilter)) leaf_name_data.push_back(tx_list_recv_pool_update_ok.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stats-client-id")
    {
        stats_client_id = value;
        stats_client_id.value_namespace = name_space;
        stats_client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-start-of-download-add-ok")
    {
        tx_list_start_of_download_add_ok = value;
        tx_list_start_of_download_add_ok.value_namespace = name_space;
        tx_list_start_of_download_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-start-of-download-add-not-ok")
    {
        tx_list_start_of_download_add_not_ok = value;
        tx_list_start_of_download_add_not_ok.value_namespace = name_space;
        tx_list_start_of_download_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-end-of-download-add-ok")
    {
        tx_list_end_of_download_add_ok = value;
        tx_list_end_of_download_add_ok.value_namespace = name_space;
        tx_list_end_of_download_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-end-of-download-add-not-ok")
    {
        tx_list_end_of_download_add_not_ok = value;
        tx_list_end_of_download_add_not_ok.value_namespace = name_space;
        tx_list_end_of_download_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-end-of-message-add-ok")
    {
        tx_list_end_of_message_add_ok = value;
        tx_list_end_of_message_add_ok.value_namespace = name_space;
        tx_list_end_of_message_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-end-of-message-add-not-ok")
    {
        tx_list_end_of_message_add_not_ok = value;
        tx_list_end_of_message_add_not_ok.value_namespace = name_space;
        tx_list_end_of_message_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clear-all-add-ok")
    {
        tx_list_clear_all_add_ok = value;
        tx_list_clear_all_add_ok.value_namespace = name_space;
        tx_list_clear_all_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clear-all-add-not-ok")
    {
        tx_list_clear_all_add_not_ok = value;
        tx_list_clear_all_add_not_ok.value_namespace = name_space;
        tx_list_clear_all_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clear-selected-add-ok")
    {
        tx_list_clear_selected_add_ok = value;
        tx_list_clear_selected_add_ok.value_namespace = name_space;
        tx_list_clear_selected_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clear-selected-add-not-ok")
    {
        tx_list_clear_selected_add_not_ok = value;
        tx_list_clear_selected_add_not_ok.value_namespace = name_space;
        tx_list_clear_selected_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-replay-all-add-ok")
    {
        tx_list_replay_all_add_ok = value;
        tx_list_replay_all_add_ok.value_namespace = name_space;
        tx_list_replay_all_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-replay-all-add-not-ok")
    {
        tx_list_replay_all_add_not_ok = value;
        tx_list_replay_all_add_not_ok.value_namespace = name_space;
        tx_list_replay_all_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-replay-selected-add-ok")
    {
        tx_list_replay_selected_add_ok = value;
        tx_list_replay_selected_add_ok.value_namespace = name_space;
        tx_list_replay_selected_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-replay-selected-add-not-ok")
    {
        tx_list_replay_selected_add_not_ok = value;
        tx_list_replay_selected_add_not_ok.value_namespace = name_space;
        tx_list_replay_selected_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-session-session-add-ok")
    {
        tx_list_session_session_add_ok = value;
        tx_list_session_session_add_ok.value_namespace = name_space;
        tx_list_session_session_add_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-session-session-add-not-ok")
    {
        tx_list_session_session_add_not_ok = value;
        tx_list_session_session_add_not_ok.value_namespace = name_space;
        tx_list_session_session_add_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-session-session-update-ok")
    {
        tx_list_session_session_update_ok = value;
        tx_list_session_session_update_ok.value_namespace = name_space;
        tx_list_session_session_update_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-session-session-update-not-ok")
    {
        tx_list_session_session_update_not_ok = value;
        tx_list_session_session_update_not_ok.value_namespace = name_space;
        tx_list_session_session_update_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-session-session-delete")
    {
        tx_list_session_session_delete = value;
        tx_list_session_session_delete.value_namespace = name_space;
        tx_list_session_session_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clean-call-back")
    {
        clean_call_back = value;
        clean_call_back.value_namespace = name_space;
        clean_call_back.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-session-session-ok")
    {
        tx_list_encode_session_session_ok = value;
        tx_list_encode_session_session_ok.value_namespace = name_space;
        tx_list_encode_session_session_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-session-session-partial-write")
    {
        tx_list_encode_session_session_partial_write = value;
        tx_list_encode_session_session_partial_write.value_namespace = name_space;
        tx_list_encode_session_session_partial_write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-replay-all-count")
    {
        last_replay_all_count = value;
        last_replay_all_count.value_namespace = name_space;
        last_replay_all_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-command-replay-all")
    {
        tx_list_receive_command_replay_all = value;
        tx_list_receive_command_replay_all.value_namespace = name_space;
        tx_list_receive_command_replay_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-command-replay-selected")
    {
        tx_list_receive_command_replay_selected = value;
        tx_list_receive_command_replay_selected.value_namespace = name_space;
        tx_list_receive_command_replay_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-delete-valid")
    {
        tx_list_receive_session_session_delete_valid = value;
        tx_list_receive_session_session_delete_valid.value_namespace = name_space;
        tx_list_receive_session_session_delete_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-delete-invalid")
    {
        tx_list_receive_session_session_delete_invalid = value;
        tx_list_receive_session_session_delete_invalid.value_namespace = name_space;
        tx_list_receive_session_session_delete_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-update-valid")
    {
        tx_list_receive_session_session_update_valid = value;
        tx_list_receive_session_session_update_valid.value_namespace = name_space;
        tx_list_receive_session_session_update_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-update-invalid")
    {
        tx_list_receive_session_session_update_invalid = value;
        tx_list_receive_session_session_update_invalid.value_namespace = name_space;
        tx_list_receive_session_session_update_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-sod-all")
    {
        tx_list_receive_session_session_sod_all = value;
        tx_list_receive_session_session_sod_all.value_namespace = name_space;
        tx_list_receive_session_session_sod_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-sod-selected")
    {
        tx_list_receive_session_session_sod_selected = value;
        tx_list_receive_session_session_sod_selected.value_namespace = name_space;
        tx_list_receive_session_session_sod_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-eod-all")
    {
        tx_list_receive_session_session_eod_all = value;
        tx_list_receive_session_session_eod_all.value_namespace = name_space;
        tx_list_receive_session_session_eod_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-eod-selected")
    {
        tx_list_receive_session_session_eod_selected = value;
        tx_list_receive_session_session_eod_selected.value_namespace = name_space;
        tx_list_receive_session_session_eod_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-eoms")
    {
        tx_list_receive_session_session_eoms = value;
        tx_list_receive_session_session_eoms.value_namespace = name_space;
        tx_list_receive_session_session_eoms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-clear-all")
    {
        tx_list_receive_session_session_clear_all = value;
        tx_list_receive_session_session_clear_all.value_namespace = name_space;
        tx_list_receive_session_session_clear_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-clear-selected")
    {
        tx_list_receive_session_session_clear_selected = value;
        tx_list_receive_session_session_clear_selected.value_namespace = name_space;
        tx_list_receive_session_session_clear_selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-neg-ack")
    {
        tx_list_receive_session_session_neg_ack = value;
        tx_list_receive_session_session_neg_ack.value_namespace = name_space;
        tx_list_receive_session_session_neg_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-receive-session-session-neg-ack-not-ok")
    {
        tx_list_receive_session_session_neg_ack_not_ok = value;
        tx_list_receive_session_session_neg_ack_not_ok.value_namespace = name_space;
        tx_list_receive_session_session_neg_ack_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-registration-ok")
    {
        tx_list_client_registration_ok = value;
        tx_list_client_registration_ok.value_namespace = name_space;
        tx_list_client_registration_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-registration-not-ok")
    {
        tx_list_client_registration_not_ok = value;
        tx_list_client_registration_not_ok.value_namespace = name_space;
        tx_list_client_registration_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-de-registration")
    {
        tx_list_client_de_registration = value;
        tx_list_client_de_registration.value_namespace = name_space;
        tx_list_client_de_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-connection-down")
    {
        tx_list_client_connection_down = value;
        tx_list_client_connection_down.value_namespace = name_space;
        tx_list_client_connection_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-cleanup")
    {
        tx_list_client_cleanup = value;
        tx_list_client_cleanup.value_namespace = name_space;
        tx_list_client_cleanup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-active-ok")
    {
        tx_list_active_ok = value;
        tx_list_active_ok.value_namespace = name_space;
        tx_list_active_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-active-not-ok")
    {
        tx_list_active_not_ok = value;
        tx_list_active_not_ok.value_namespace = name_space;
        tx_list_active_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-de-active-ok")
    {
        tx_list_de_active_ok = value;
        tx_list_de_active_ok.value_namespace = name_space;
        tx_list_de_active_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-de-active-not-ok")
    {
        tx_list_de_active_not_ok = value;
        tx_list_de_active_not_ok.value_namespace = name_space;
        tx_list_de_active_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-send-pool-role-ok")
    {
        tx_list_send_pool_role_ok = value;
        tx_list_send_pool_role_ok.value_namespace = name_space;
        tx_list_send_pool_role_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-send-pool-role-not-ok")
    {
        tx_list_send_pool_role_not_ok = value;
        tx_list_send_pool_role_not_ok.value_namespace = name_space;
        tx_list_send_pool_role_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-send-pool-update-ok")
    {
        tx_list_send_pool_update_ok = value;
        tx_list_send_pool_update_ok.value_namespace = name_space;
        tx_list_send_pool_update_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-send-pool-update-not-ok")
    {
        tx_list_send_pool_update_not_ok = value;
        tx_list_send_pool_update_not_ok.value_namespace = name_space;
        tx_list_send_pool_update_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-recv-pool-update-ok")
    {
        tx_list_recv_pool_update_ok = value;
        tx_list_recv_pool_update_ok.value_namespace = name_space;
        tx_list_recv_pool_update_ok.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stats-client-id")
    {
        stats_client_id.yfilter = yfilter;
    }
    if(value_path == "tx-list-start-of-download-add-ok")
    {
        tx_list_start_of_download_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-start-of-download-add-not-ok")
    {
        tx_list_start_of_download_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-end-of-download-add-ok")
    {
        tx_list_end_of_download_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-end-of-download-add-not-ok")
    {
        tx_list_end_of_download_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-end-of-message-add-ok")
    {
        tx_list_end_of_message_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-end-of-message-add-not-ok")
    {
        tx_list_end_of_message_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-clear-all-add-ok")
    {
        tx_list_clear_all_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-clear-all-add-not-ok")
    {
        tx_list_clear_all_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-clear-selected-add-ok")
    {
        tx_list_clear_selected_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-clear-selected-add-not-ok")
    {
        tx_list_clear_selected_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-replay-all-add-ok")
    {
        tx_list_replay_all_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-replay-all-add-not-ok")
    {
        tx_list_replay_all_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-replay-selected-add-ok")
    {
        tx_list_replay_selected_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-replay-selected-add-not-ok")
    {
        tx_list_replay_selected_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-session-session-add-ok")
    {
        tx_list_session_session_add_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-session-session-add-not-ok")
    {
        tx_list_session_session_add_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-session-session-update-ok")
    {
        tx_list_session_session_update_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-session-session-update-not-ok")
    {
        tx_list_session_session_update_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-session-session-delete")
    {
        tx_list_session_session_delete.yfilter = yfilter;
    }
    if(value_path == "clean-call-back")
    {
        clean_call_back.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-session-session-ok")
    {
        tx_list_encode_session_session_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-session-session-partial-write")
    {
        tx_list_encode_session_session_partial_write.yfilter = yfilter;
    }
    if(value_path == "last-replay-all-count")
    {
        last_replay_all_count.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-command-replay-all")
    {
        tx_list_receive_command_replay_all.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-command-replay-selected")
    {
        tx_list_receive_command_replay_selected.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-delete-valid")
    {
        tx_list_receive_session_session_delete_valid.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-delete-invalid")
    {
        tx_list_receive_session_session_delete_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-update-valid")
    {
        tx_list_receive_session_session_update_valid.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-update-invalid")
    {
        tx_list_receive_session_session_update_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-sod-all")
    {
        tx_list_receive_session_session_sod_all.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-sod-selected")
    {
        tx_list_receive_session_session_sod_selected.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-eod-all")
    {
        tx_list_receive_session_session_eod_all.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-eod-selected")
    {
        tx_list_receive_session_session_eod_selected.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-eoms")
    {
        tx_list_receive_session_session_eoms.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-clear-all")
    {
        tx_list_receive_session_session_clear_all.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-clear-selected")
    {
        tx_list_receive_session_session_clear_selected.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-neg-ack")
    {
        tx_list_receive_session_session_neg_ack.yfilter = yfilter;
    }
    if(value_path == "tx-list-receive-session-session-neg-ack-not-ok")
    {
        tx_list_receive_session_session_neg_ack_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-registration-ok")
    {
        tx_list_client_registration_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-registration-not-ok")
    {
        tx_list_client_registration_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-de-registration")
    {
        tx_list_client_de_registration.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-connection-down")
    {
        tx_list_client_connection_down.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-cleanup")
    {
        tx_list_client_cleanup.yfilter = yfilter;
    }
    if(value_path == "tx-list-active-ok")
    {
        tx_list_active_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-active-not-ok")
    {
        tx_list_active_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-de-active-ok")
    {
        tx_list_de_active_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-de-active-not-ok")
    {
        tx_list_de_active_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-send-pool-role-ok")
    {
        tx_list_send_pool_role_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-send-pool-role-not-ok")
    {
        tx_list_send_pool_role_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-send-pool-update-ok")
    {
        tx_list_send_pool_update_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-send-pool-update-not-ok")
    {
        tx_list_send_pool_update_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-recv-pool-update-ok")
    {
        tx_list_recv_pool_update_ok.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::ClientIds::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-client-id" || name == "tx-list-start-of-download-add-ok" || name == "tx-list-start-of-download-add-not-ok" || name == "tx-list-end-of-download-add-ok" || name == "tx-list-end-of-download-add-not-ok" || name == "tx-list-end-of-message-add-ok" || name == "tx-list-end-of-message-add-not-ok" || name == "tx-list-clear-all-add-ok" || name == "tx-list-clear-all-add-not-ok" || name == "tx-list-clear-selected-add-ok" || name == "tx-list-clear-selected-add-not-ok" || name == "tx-list-replay-all-add-ok" || name == "tx-list-replay-all-add-not-ok" || name == "tx-list-replay-selected-add-ok" || name == "tx-list-replay-selected-add-not-ok" || name == "tx-list-session-session-add-ok" || name == "tx-list-session-session-add-not-ok" || name == "tx-list-session-session-update-ok" || name == "tx-list-session-session-update-not-ok" || name == "tx-list-session-session-delete" || name == "clean-call-back" || name == "tx-list-encode-session-session-ok" || name == "tx-list-encode-session-session-partial-write" || name == "last-replay-all-count" || name == "tx-list-receive-command-replay-all" || name == "tx-list-receive-command-replay-selected" || name == "tx-list-receive-session-session-delete-valid" || name == "tx-list-receive-session-session-delete-invalid" || name == "tx-list-receive-session-session-update-valid" || name == "tx-list-receive-session-session-update-invalid" || name == "tx-list-receive-session-session-sod-all" || name == "tx-list-receive-session-session-sod-selected" || name == "tx-list-receive-session-session-eod-all" || name == "tx-list-receive-session-session-eod-selected" || name == "tx-list-receive-session-session-eoms" || name == "tx-list-receive-session-session-clear-all" || name == "tx-list-receive-session-session-clear-selected" || name == "tx-list-receive-session-session-neg-ack" || name == "tx-list-receive-session-session-neg-ack-not-ok" || name == "tx-list-client-registration-ok" || name == "tx-list-client-registration-not-ok" || name == "tx-list-client-de-registration" || name == "tx-list-client-connection-down" || name == "tx-list-client-cleanup" || name == "tx-list-active-ok" || name == "tx-list-active-not-ok" || name == "tx-list-de-active-ok" || name == "tx-list-de-active-not-ok" || name == "tx-list-send-pool-role-ok" || name == "tx-list-send-pool-role-not-ok" || name == "tx-list-send-pool-update-ok" || name == "tx-list-send-pool-update-not-ok" || name == "tx-list-recv-pool-update-ok")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Memory::Memory()
    :
    memory_info(this, {})
    , edm_memory_info(this, {})
    , string_memory_info(this, {})
{

    yang_name = "memory"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Memory::~Memory()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<memory_info.len(); index++)
    {
        if(memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<edm_memory_info.len(); index++)
    {
        if(edm_memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.len(); index++)
    {
        if(string_memory_info[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::has_operation() const
{
    for (std::size_t index=0; index<memory_info.len(); index++)
    {
        if(memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<edm_memory_info.len(); index++)
    {
        if(edm_memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.len(); index++)
    {
        if(string_memory_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-info")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo>();
        ent_->parent = this;
        memory_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "edm-memory-info")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo>();
        ent_->parent = this;
        edm_memory_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "string-memory-info")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo>();
        ent_->parent = this;
        string_memory_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : memory_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : edm_memory_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : string_memory_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::Node::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-info" || name == "edm-memory-info" || name == "string-memory-info")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::MemoryInfo()
    :
    structure_name{YType::str, "structure-name"},
    size{YType::uint32, "size"},
    current_count{YType::uint32, "current-count"},
    alloc_fails{YType::uint32, "alloc-fails"},
    alloc_count{YType::uint32, "alloc-count"},
    freed_count{YType::uint32, "freed-count"},
    memory_type{YType::enumeration, "memory-type"}
{

    yang_name = "memory-info"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::~MemoryInfo()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::has_data() const
{
    if (is_presence_container) return true;
    return structure_name.is_set
	|| size.is_set
	|| current_count.is_set
	|| alloc_fails.is_set
	|| alloc_count.is_set
	|| freed_count.is_set
	|| memory_type.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(structure_name.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(current_count.yfilter)
	|| ydk::is_set(alloc_fails.yfilter)
	|| ydk::is_set(alloc_count.yfilter)
	|| ydk::is_set(freed_count.yfilter)
	|| ydk::is_set(memory_type.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (structure_name.is_set || is_set(structure_name.yfilter)) leaf_name_data.push_back(structure_name.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (current_count.is_set || is_set(current_count.yfilter)) leaf_name_data.push_back(current_count.get_name_leafdata());
    if (alloc_fails.is_set || is_set(alloc_fails.yfilter)) leaf_name_data.push_back(alloc_fails.get_name_leafdata());
    if (alloc_count.is_set || is_set(alloc_count.yfilter)) leaf_name_data.push_back(alloc_count.get_name_leafdata());
    if (freed_count.is_set || is_set(freed_count.yfilter)) leaf_name_data.push_back(freed_count.get_name_leafdata());
    if (memory_type.is_set || is_set(memory_type.yfilter)) leaf_name_data.push_back(memory_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "structure-name")
    {
        structure_name = value;
        structure_name.value_namespace = name_space;
        structure_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-count")
    {
        current_count = value;
        current_count.value_namespace = name_space;
        current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails = value;
        alloc_fails.value_namespace = name_space;
        alloc_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-count")
    {
        alloc_count = value;
        alloc_count.value_namespace = name_space;
        alloc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-count")
    {
        freed_count = value;
        freed_count.value_namespace = name_space;
        freed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-type")
    {
        memory_type = value;
        memory_type.value_namespace = name_space;
        memory_type.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "structure-name")
    {
        structure_name.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "current-count")
    {
        current_count.yfilter = yfilter;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails.yfilter = yfilter;
    }
    if(value_path == "alloc-count")
    {
        alloc_count.yfilter = yfilter;
    }
    if(value_path == "freed-count")
    {
        freed_count.yfilter = yfilter;
    }
    if(value_path == "memory-type")
    {
        memory_type.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::Memory::MemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "structure-name" || name == "size" || name == "current-count" || name == "alloc-fails" || name == "alloc-count" || name == "freed-count" || name == "memory-type")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::EdmMemoryInfo()
    :
    size{YType::uint32, "size"},
    total{YType::uint32, "total"},
    success{YType::uint32, "success"},
    failure{YType::uint32, "failure"}
{

    yang_name = "edm-memory-info"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::~EdmMemoryInfo()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| total.is_set
	|| success.is_set
	|| failure.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(success.yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edm-memory-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::Memory::EdmMemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "total" || name == "success" || name == "failure")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::StringMemoryInfo()
    :
    size{YType::uint32, "size"},
    total{YType::uint32, "total"},
    success{YType::uint32, "success"},
    failure{YType::uint32, "failure"}
{

    yang_name = "string-memory-info"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::~StringMemoryInfo()
{
}

bool SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| total.is_set
	|| success.is_set
	|| failure.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(success.yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string-memory-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::Memory::StringMemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "total" || name == "success" || name == "failure")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupIds()
    :
    group_id(this, {"group_id"})
{

    yang_name = "group-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIds::~GroupIds()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.len(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId>();
        ent_->parent = this;
        group_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::get_children() const
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

void SessionRedundancyAgent::Nodes::Node::GroupIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::GroupId()
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
    core_tracking_object_name{YType::str, "core-tracking-object-name"},
    core_tracking_object_status{YType::boolean, "core-tracking-object-status"},
    access_tracking_object_name{YType::str, "access-tracking-object-name"},
    access_tracking_object_status{YType::boolean, "access-tracking-object-status"},
    object_tracking_status{YType::boolean, "object-tracking-status"},
    peer_ipv4_address{YType::str, "peer-ipv4-address"},
    peer_ipv6_address{YType::str, "peer-ipv6-address"},
    peer_status{YType::enumeration, "peer-status"},
    peer_last_negotiation_time{YType::str, "peer-last-negotiation-time"},
    peer_last_up_time{YType::str, "peer-last-up-time"},
    peer_last_down_time{YType::str, "peer-last-down-time"},
    peer_init_role{YType::enumeration, "peer-init-role"},
    peer_negotiating_role{YType::enumeration, "peer-negotiating-role"},
    peer_current_role{YType::enumeration, "peer-current-role"},
    peer_object_tracking_status{YType::boolean, "peer-object-tracking-status"},
    last_switchover_time{YType::str, "last-switchover-time"},
    switchover_count{YType::uint32, "switchover-count"},
    last_switchover_reason{YType::enumeration, "last-switchover-reason"},
    switchover_hold_time{YType::uint32, "switchover-hold-time"},
    session_count{YType::uint32, "session-count"},
    slave_update_failure_count{YType::uint32, "slave-update-failure-count"},
    pending_session_update_count{YType::uint32, "pending-session-update-count"},
    pending_session_delete_count{YType::uint32, "pending-session-delete-count"},
    interface_count{YType::uint32, "interface-count"},
    revertive_timer{YType::uint32, "revertive-timer"},
    switchover_revert_time{YType::uint32, "switchover-revert-time"},
    pool_count{YType::uint32, "pool-count"}
        ,
    client_session_count(this, {})
    , interface(this, {})
    , pool(this, {})
{

    yang_name = "group-id"; yang_parent_name = "group-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::~GroupId()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_session_count.len(); index++)
    {
        if(client_session_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
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
	|| core_tracking_object_name.is_set
	|| core_tracking_object_status.is_set
	|| access_tracking_object_name.is_set
	|| access_tracking_object_status.is_set
	|| object_tracking_status.is_set
	|| peer_ipv4_address.is_set
	|| peer_ipv6_address.is_set
	|| peer_status.is_set
	|| peer_last_negotiation_time.is_set
	|| peer_last_up_time.is_set
	|| peer_last_down_time.is_set
	|| peer_init_role.is_set
	|| peer_negotiating_role.is_set
	|| peer_current_role.is_set
	|| peer_object_tracking_status.is_set
	|| last_switchover_time.is_set
	|| switchover_count.is_set
	|| last_switchover_reason.is_set
	|| switchover_hold_time.is_set
	|| session_count.is_set
	|| slave_update_failure_count.is_set
	|| pending_session_update_count.is_set
	|| pending_session_delete_count.is_set
	|| interface_count.is_set
	|| revertive_timer.is_set
	|| switchover_revert_time.is_set
	|| pool_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_operation() const
{
    for (std::size_t index=0; index<client_session_count.len(); index++)
    {
        if(client_session_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
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
	|| ydk::is_set(core_tracking_object_name.yfilter)
	|| ydk::is_set(core_tracking_object_status.yfilter)
	|| ydk::is_set(access_tracking_object_name.yfilter)
	|| ydk::is_set(access_tracking_object_status.yfilter)
	|| ydk::is_set(object_tracking_status.yfilter)
	|| ydk::is_set(peer_ipv4_address.yfilter)
	|| ydk::is_set(peer_ipv6_address.yfilter)
	|| ydk::is_set(peer_status.yfilter)
	|| ydk::is_set(peer_last_negotiation_time.yfilter)
	|| ydk::is_set(peer_last_up_time.yfilter)
	|| ydk::is_set(peer_last_down_time.yfilter)
	|| ydk::is_set(peer_init_role.yfilter)
	|| ydk::is_set(peer_negotiating_role.yfilter)
	|| ydk::is_set(peer_current_role.yfilter)
	|| ydk::is_set(peer_object_tracking_status.yfilter)
	|| ydk::is_set(last_switchover_time.yfilter)
	|| ydk::is_set(switchover_count.yfilter)
	|| ydk::is_set(last_switchover_reason.yfilter)
	|| ydk::is_set(switchover_hold_time.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(slave_update_failure_count.yfilter)
	|| ydk::is_set(pending_session_update_count.yfilter)
	|| ydk::is_set(pending_session_delete_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(revertive_timer.yfilter)
	|| ydk::is_set(switchover_revert_time.yfilter)
	|| ydk::is_set(pool_count.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_name_leaf_data() const
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
    if (core_tracking_object_name.is_set || is_set(core_tracking_object_name.yfilter)) leaf_name_data.push_back(core_tracking_object_name.get_name_leafdata());
    if (core_tracking_object_status.is_set || is_set(core_tracking_object_status.yfilter)) leaf_name_data.push_back(core_tracking_object_status.get_name_leafdata());
    if (access_tracking_object_name.is_set || is_set(access_tracking_object_name.yfilter)) leaf_name_data.push_back(access_tracking_object_name.get_name_leafdata());
    if (access_tracking_object_status.is_set || is_set(access_tracking_object_status.yfilter)) leaf_name_data.push_back(access_tracking_object_status.get_name_leafdata());
    if (object_tracking_status.is_set || is_set(object_tracking_status.yfilter)) leaf_name_data.push_back(object_tracking_status.get_name_leafdata());
    if (peer_ipv4_address.is_set || is_set(peer_ipv4_address.yfilter)) leaf_name_data.push_back(peer_ipv4_address.get_name_leafdata());
    if (peer_ipv6_address.is_set || is_set(peer_ipv6_address.yfilter)) leaf_name_data.push_back(peer_ipv6_address.get_name_leafdata());
    if (peer_status.is_set || is_set(peer_status.yfilter)) leaf_name_data.push_back(peer_status.get_name_leafdata());
    if (peer_last_negotiation_time.is_set || is_set(peer_last_negotiation_time.yfilter)) leaf_name_data.push_back(peer_last_negotiation_time.get_name_leafdata());
    if (peer_last_up_time.is_set || is_set(peer_last_up_time.yfilter)) leaf_name_data.push_back(peer_last_up_time.get_name_leafdata());
    if (peer_last_down_time.is_set || is_set(peer_last_down_time.yfilter)) leaf_name_data.push_back(peer_last_down_time.get_name_leafdata());
    if (peer_init_role.is_set || is_set(peer_init_role.yfilter)) leaf_name_data.push_back(peer_init_role.get_name_leafdata());
    if (peer_negotiating_role.is_set || is_set(peer_negotiating_role.yfilter)) leaf_name_data.push_back(peer_negotiating_role.get_name_leafdata());
    if (peer_current_role.is_set || is_set(peer_current_role.yfilter)) leaf_name_data.push_back(peer_current_role.get_name_leafdata());
    if (peer_object_tracking_status.is_set || is_set(peer_object_tracking_status.yfilter)) leaf_name_data.push_back(peer_object_tracking_status.get_name_leafdata());
    if (last_switchover_time.is_set || is_set(last_switchover_time.yfilter)) leaf_name_data.push_back(last_switchover_time.get_name_leafdata());
    if (switchover_count.is_set || is_set(switchover_count.yfilter)) leaf_name_data.push_back(switchover_count.get_name_leafdata());
    if (last_switchover_reason.is_set || is_set(last_switchover_reason.yfilter)) leaf_name_data.push_back(last_switchover_reason.get_name_leafdata());
    if (switchover_hold_time.is_set || is_set(switchover_hold_time.yfilter)) leaf_name_data.push_back(switchover_hold_time.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (slave_update_failure_count.is_set || is_set(slave_update_failure_count.yfilter)) leaf_name_data.push_back(slave_update_failure_count.get_name_leafdata());
    if (pending_session_update_count.is_set || is_set(pending_session_update_count.yfilter)) leaf_name_data.push_back(pending_session_update_count.get_name_leafdata());
    if (pending_session_delete_count.is_set || is_set(pending_session_delete_count.yfilter)) leaf_name_data.push_back(pending_session_delete_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (revertive_timer.is_set || is_set(revertive_timer.yfilter)) leaf_name_data.push_back(revertive_timer.get_name_leafdata());
    if (switchover_revert_time.is_set || is_set(switchover_revert_time.yfilter)) leaf_name_data.push_back(switchover_revert_time.get_name_leafdata());
    if (pool_count.is_set || is_set(pool_count.yfilter)) leaf_name_data.push_back(pool_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-session-count")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount>();
        ent_->parent = this;
        client_session_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_session_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "peer-last-negotiation-time")
    {
        peer_last_negotiation_time = value;
        peer_last_negotiation_time.value_namespace = name_space;
        peer_last_negotiation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-last-up-time")
    {
        peer_last_up_time = value;
        peer_last_up_time.value_namespace = name_space;
        peer_last_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-last-down-time")
    {
        peer_last_down_time = value;
        peer_last_down_time.value_namespace = name_space;
        peer_last_down_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-switchover-time")
    {
        last_switchover_time = value;
        last_switchover_time.value_namespace = name_space;
        last_switchover_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pool-count")
    {
        pool_count = value;
        pool_count.value_namespace = name_space;
        pool_count.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "peer-last-negotiation-time")
    {
        peer_last_negotiation_time.yfilter = yfilter;
    }
    if(value_path == "peer-last-up-time")
    {
        peer_last_up_time.yfilter = yfilter;
    }
    if(value_path == "peer-last-down-time")
    {
        peer_last_down_time.yfilter = yfilter;
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
    if(value_path == "last-switchover-time")
    {
        last_switchover_time.yfilter = yfilter;
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
    if(value_path == "pool-count")
    {
        pool_count.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-session-count" || name == "interface" || name == "pool" || name == "group-id" || name == "group-id-xr" || name == "description" || name == "disabled" || name == "init-role" || name == "negotiating-role" || name == "current-role" || name == "slave-mode" || name == "hold-timer" || name == "core-tracking-object-name" || name == "core-tracking-object-status" || name == "access-tracking-object-name" || name == "access-tracking-object-status" || name == "object-tracking-status" || name == "peer-ipv4-address" || name == "peer-ipv6-address" || name == "peer-status" || name == "peer-last-negotiation-time" || name == "peer-last-up-time" || name == "peer-last-down-time" || name == "peer-init-role" || name == "peer-negotiating-role" || name == "peer-current-role" || name == "peer-object-tracking-status" || name == "last-switchover-time" || name == "switchover-count" || name == "last-switchover-reason" || name == "switchover-hold-time" || name == "session-count" || name == "slave-update-failure-count" || name == "pending-session-update-count" || name == "pending-session-delete-count" || name == "interface-count" || name == "revertive-timer" || name == "switchover-revert-time" || name == "pool-count")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::ClientSessionCount()
    :
    component{YType::enumeration, "component"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "client-session-count"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::~ClientSessionCount()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-session-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::ClientSessionCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "session-count")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_synchronization_id{YType::uint32, "interface-synchronization-id"},
    forward_referenced{YType::boolean, "forward-referenced"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "interface"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::~Interface()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_synchronization_id.is_set
	|| forward_referenced.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_synchronization_id.yfilter)
	|| ydk::is_set(forward_referenced.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_synchronization_id.is_set || is_set(interface_synchronization_id.yfilter)) leaf_name_data.push_back(interface_synchronization_id.get_name_leafdata());
    if (forward_referenced.is_set || is_set(forward_referenced.yfilter)) leaf_name_data.push_back(forward_referenced.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-synchronization-id" || name == "forward-referenced" || name == "session-count")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"}
{

    yang_name = "pool"; yang_parent_name = "group-id"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::~Pool()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::GroupIds::GroupId::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Interfaces::~Interfaces()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::get_children() const
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

void SessionRedundancyAgent::Nodes::Node::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::Interface()
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
    interface_oper(std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>())
    , interface_status(std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>())
    , client_status(this, {})
{
    interface_oper->parent = this;
    interface_status->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::has_data() const
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::has_operation() const
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

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-oper")
    {
        if(interface_oper == nullptr)
        {
            interface_oper = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper>();
        }
        return interface_oper;
    }

    if(child_yang_name == "interface-status")
    {
        if(interface_status == nullptr)
        {
            interface_status = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus>();
        }
        return interface_status;
    }

    if(child_yang_name == "client-status")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus>();
        ent_->parent = this;
        client_status.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::get_children() const
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

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-oper" || name == "interface-status" || name == "client-status" || name == "interface" || name == "interface-name" || name == "interface-synchronization-id" || name == "group-id" || name == "role" || name == "forward-referenced" || name == "session-count" || name == "interface-enable-error-count" || name == "interface-disable-error-count" || name == "interface-caps-add-error-count" || name == "interface-caps-remove-error-count" || name == "interface-attribute-update-error-count")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::InterfaceOper()
    :
    idb_oper_reg_enable{YType::boolean, "idb-oper-reg-enable"},
    idb_oper_reg_disable{YType::boolean, "idb-oper-reg-disable"},
    idb_oper_caps_add{YType::boolean, "idb-oper-caps-add"},
    idb_oper_caps_remove{YType::boolean, "idb-oper-caps-remove"},
    idb_oper_attr_update{YType::boolean, "idb-oper-attr-update"}
{

    yang_name = "interface-oper"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::~InterfaceOper()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_data() const
{
    if (is_presence_container) return true;
    return idb_oper_reg_enable.is_set
	|| idb_oper_reg_disable.is_set
	|| idb_oper_caps_add.is_set
	|| idb_oper_caps_remove.is_set
	|| idb_oper_attr_update.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idb_oper_reg_enable.yfilter)
	|| ydk::is_set(idb_oper_reg_disable.yfilter)
	|| ydk::is_set(idb_oper_caps_add.yfilter)
	|| ydk::is_set(idb_oper_caps_remove.yfilter)
	|| ydk::is_set(idb_oper_attr_update.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idb_oper_reg_enable.is_set || is_set(idb_oper_reg_enable.yfilter)) leaf_name_data.push_back(idb_oper_reg_enable.get_name_leafdata());
    if (idb_oper_reg_disable.is_set || is_set(idb_oper_reg_disable.yfilter)) leaf_name_data.push_back(idb_oper_reg_disable.get_name_leafdata());
    if (idb_oper_caps_add.is_set || is_set(idb_oper_caps_add.yfilter)) leaf_name_data.push_back(idb_oper_caps_add.get_name_leafdata());
    if (idb_oper_caps_remove.is_set || is_set(idb_oper_caps_remove.yfilter)) leaf_name_data.push_back(idb_oper_caps_remove.get_name_leafdata());
    if (idb_oper_attr_update.is_set || is_set(idb_oper_attr_update.yfilter)) leaf_name_data.push_back(idb_oper_attr_update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idb-oper-reg-enable" || name == "idb-oper-reg-disable" || name == "idb-oper-caps-add" || name == "idb-oper-caps-remove" || name == "idb-oper-attr-update")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::InterfaceStatus()
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

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::~InterfaceStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_data() const
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_operation() const
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

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::InterfaceStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idb-state-fwd-ref" || name == "idb-state-stale" || name == "idb-state-registered" || name == "idb-state-caps-added" || name == "idb-state-owned-re-source" || name == "idb-client-eoms-pending" || name == "idb-state-p-end-caps-rem" || name == "idb-state-p-end-reg-disable")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::ClientStatus()
    :
    component{YType::enumeration, "component"},
    serg_show_idb_client_eoms_pending{YType::boolean, "serg-show-idb-client-eoms-pending"},
    serg_show_idb_client_sync_eod_pending{YType::boolean, "serg-show-idb-client-sync-eod-pending"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "client-status"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::~ClientStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| serg_show_idb_client_eoms_pending.is_set
	|| serg_show_idb_client_sync_eod_pending.is_set
	|| session_count.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(serg_show_idb_client_eoms_pending.yfilter)
	|| ydk::is_set(serg_show_idb_client_sync_eod_pending.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (serg_show_idb_client_eoms_pending.is_set || is_set(serg_show_idb_client_eoms_pending.yfilter)) leaf_name_data.push_back(serg_show_idb_client_eoms_pending.get_name_leafdata());
    if (serg_show_idb_client_sync_eod_pending.is_set || is_set(serg_show_idb_client_sync_eod_pending.yfilter)) leaf_name_data.push_back(serg_show_idb_client_sync_eod_pending.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-show-idb-client-eoms-pending")
    {
        serg_show_idb_client_eoms_pending = value;
        serg_show_idb_client_eoms_pending.value_namespace = name_space;
        serg_show_idb_client_eoms_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serg-show-idb-client-sync-eod-pending")
    {
        serg_show_idb_client_sync_eod_pending = value;
        serg_show_idb_client_sync_eod_pending.value_namespace = name_space;
        serg_show_idb_client_sync_eod_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "serg-show-idb-client-eoms-pending")
    {
        serg_show_idb_client_eoms_pending.yfilter = yfilter;
    }
    if(value_path == "serg-show-idb-client-sync-eod-pending")
    {
        serg_show_idb_client_sync_eod_pending.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::Interfaces::Interface::ClientStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "serg-show-idb-client-eoms-pending" || name == "serg-show-idb-client-sync-eod-pending" || name == "session-count")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::StatsGlobal()
    :
    source_interface_name{YType::str, "source-interface-name"},
    vrf_name{YType::str, "vrf-name"},
    source_interface_ipv4_address{YType::str, "source-interface-ipv4-address"},
    source_interface_ipv6_address{YType::str, "source-interface-ipv6-address"},
    redundancy_role{YType::str, "redundancy-role"},
    restart_client_sync_in_progress{YType::boolean, "restart-client-sync-in-progress"},
    client_init_sync_time_stamp{YType::str, "client-init-sync-time-stamp"},
    restart_peer_sync_in_progress{YType::boolean, "restart-peer-sync-in-progress"},
    peer_init_sync_time_stamp{YType::str, "peer-init-sync-time-stamp"},
    sync_in_progress{YType::boolean, "sync-in-progress"},
    peer_action_timer{YType::uint32, "peer-action-timer"},
    retry_timer_remaining{YType::uint32, "retry-timer-remaining"},
    tx_list_client_registration_invalid{YType::uint32, "tx-list-client-registration-invalid"},
    tx_list_client_de_registration_invalid{YType::uint32, "tx-list-client-de-registration-invalid"},
    tx_list_client_connection_up{YType::uint32, "tx-list-client-connection-up"},
    tx_list_client_connection_down{YType::uint32, "tx-list-client-connection-down"},
    tx_list_client_peer_done{YType::uint32, "tx-list-client-peer-done"},
    tx_list_client_message_call_back{YType::uint32, "tx-list-client-message-call-back"},
    tx_list_client_receive_valid{YType::uint32, "tx-list-client-receive-valid"},
    tx_list_client_receive_invalid{YType::uint32, "tx-list-client-receive-invalid"},
    tx_list_client_receive_command_valid{YType::uint32, "tx-list-client-receive-command-valid"},
    tx_list_client_receive_command_invalid{YType::uint32, "tx-list-client-receive-command-invalid"},
    tx_list_client_receive_session_sessionvalid{YType::uint32, "tx-list-client-receive-session-sessionvalid"},
    tx_list_client_receive_session_session_invalid{YType::uint32, "tx-list-client-receive-session-session-invalid"},
    tx_list_peer_timer_handler{YType::uint32, "tx-list-peer-timer-handler"},
    tx_list_peer_registration_invalid{YType::uint32, "tx-list-peer-registration-invalid"},
    tx_list_peer_de_registration_invalid{YType::uint32, "tx-list-peer-de-registration-invalid"},
    tx_list_peer_message_call_back_valid{YType::uint32, "tx-list-peer-message-call-back-valid"},
    tx_list_peer_message_call_back_invalid{YType::uint32, "tx-list-peer-message-call-back-invalid"},
    tx_list_peer_done{YType::uint32, "tx-list-peer-done"},
    tx_list_peer_cmd_connection_up_not_ok{YType::uint32, "tx-list-peer-cmd-connection-up-not-ok"},
    tx_list_peer_cmd_connection_down_not_ok{YType::uint32, "tx-list-peer-cmd-connection-down-not-ok"},
    tx_list_peer_session_connection_up_not_ok{YType::uint32, "tx-list-peer-session-connection-up-not-ok"},
    tx_list_peer_session_connection_down_not_ok{YType::uint32, "tx-list-peer-session-connection-down-not-ok"},
    tx_list_send_pool_update_not_ok{YType::uint32, "tx-list-send-pool-update-not-ok"}
        ,
    intf_status_statistics(std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics>())
    , tx_list_statistics(std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics>())
    , client_status(this, {})
    , opaque_memory_status(this, {})
    , tx_list_over_tcp_status(this, {})
{
    intf_status_statistics->parent = this;
    tx_list_statistics->parent = this;

    yang_name = "stats-global"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::~StatsGlobal()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_status.len(); index++)
    {
        if(client_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<opaque_memory_status.len(); index++)
    {
        if(opaque_memory_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tx_list_over_tcp_status.len(); index++)
    {
        if(tx_list_over_tcp_status[index]->has_data())
            return true;
    }
    return source_interface_name.is_set
	|| vrf_name.is_set
	|| source_interface_ipv4_address.is_set
	|| source_interface_ipv6_address.is_set
	|| redundancy_role.is_set
	|| restart_client_sync_in_progress.is_set
	|| client_init_sync_time_stamp.is_set
	|| restart_peer_sync_in_progress.is_set
	|| peer_init_sync_time_stamp.is_set
	|| sync_in_progress.is_set
	|| peer_action_timer.is_set
	|| retry_timer_remaining.is_set
	|| tx_list_client_registration_invalid.is_set
	|| tx_list_client_de_registration_invalid.is_set
	|| tx_list_client_connection_up.is_set
	|| tx_list_client_connection_down.is_set
	|| tx_list_client_peer_done.is_set
	|| tx_list_client_message_call_back.is_set
	|| tx_list_client_receive_valid.is_set
	|| tx_list_client_receive_invalid.is_set
	|| tx_list_client_receive_command_valid.is_set
	|| tx_list_client_receive_command_invalid.is_set
	|| tx_list_client_receive_session_sessionvalid.is_set
	|| tx_list_client_receive_session_session_invalid.is_set
	|| tx_list_peer_timer_handler.is_set
	|| tx_list_peer_registration_invalid.is_set
	|| tx_list_peer_de_registration_invalid.is_set
	|| tx_list_peer_message_call_back_valid.is_set
	|| tx_list_peer_message_call_back_invalid.is_set
	|| tx_list_peer_done.is_set
	|| tx_list_peer_cmd_connection_up_not_ok.is_set
	|| tx_list_peer_cmd_connection_down_not_ok.is_set
	|| tx_list_peer_session_connection_up_not_ok.is_set
	|| tx_list_peer_session_connection_down_not_ok.is_set
	|| tx_list_send_pool_update_not_ok.is_set
	|| (intf_status_statistics !=  nullptr && intf_status_statistics->has_data())
	|| (tx_list_statistics !=  nullptr && tx_list_statistics->has_data());
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::has_operation() const
{
    for (std::size_t index=0; index<client_status.len(); index++)
    {
        if(client_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<opaque_memory_status.len(); index++)
    {
        if(opaque_memory_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tx_list_over_tcp_status.len(); index++)
    {
        if(tx_list_over_tcp_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_interface_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_interface_ipv4_address.yfilter)
	|| ydk::is_set(source_interface_ipv6_address.yfilter)
	|| ydk::is_set(redundancy_role.yfilter)
	|| ydk::is_set(restart_client_sync_in_progress.yfilter)
	|| ydk::is_set(client_init_sync_time_stamp.yfilter)
	|| ydk::is_set(restart_peer_sync_in_progress.yfilter)
	|| ydk::is_set(peer_init_sync_time_stamp.yfilter)
	|| ydk::is_set(sync_in_progress.yfilter)
	|| ydk::is_set(peer_action_timer.yfilter)
	|| ydk::is_set(retry_timer_remaining.yfilter)
	|| ydk::is_set(tx_list_client_registration_invalid.yfilter)
	|| ydk::is_set(tx_list_client_de_registration_invalid.yfilter)
	|| ydk::is_set(tx_list_client_connection_up.yfilter)
	|| ydk::is_set(tx_list_client_connection_down.yfilter)
	|| ydk::is_set(tx_list_client_peer_done.yfilter)
	|| ydk::is_set(tx_list_client_message_call_back.yfilter)
	|| ydk::is_set(tx_list_client_receive_valid.yfilter)
	|| ydk::is_set(tx_list_client_receive_invalid.yfilter)
	|| ydk::is_set(tx_list_client_receive_command_valid.yfilter)
	|| ydk::is_set(tx_list_client_receive_command_invalid.yfilter)
	|| ydk::is_set(tx_list_client_receive_session_sessionvalid.yfilter)
	|| ydk::is_set(tx_list_client_receive_session_session_invalid.yfilter)
	|| ydk::is_set(tx_list_peer_timer_handler.yfilter)
	|| ydk::is_set(tx_list_peer_registration_invalid.yfilter)
	|| ydk::is_set(tx_list_peer_de_registration_invalid.yfilter)
	|| ydk::is_set(tx_list_peer_message_call_back_valid.yfilter)
	|| ydk::is_set(tx_list_peer_message_call_back_invalid.yfilter)
	|| ydk::is_set(tx_list_peer_done.yfilter)
	|| ydk::is_set(tx_list_peer_cmd_connection_up_not_ok.yfilter)
	|| ydk::is_set(tx_list_peer_cmd_connection_down_not_ok.yfilter)
	|| ydk::is_set(tx_list_peer_session_connection_up_not_ok.yfilter)
	|| ydk::is_set(tx_list_peer_session_connection_down_not_ok.yfilter)
	|| ydk::is_set(tx_list_send_pool_update_not_ok.yfilter)
	|| (intf_status_statistics !=  nullptr && intf_status_statistics->has_operation())
	|| (tx_list_statistics !=  nullptr && tx_list_statistics->has_operation());
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface_name.is_set || is_set(source_interface_name.yfilter)) leaf_name_data.push_back(source_interface_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface_ipv4_address.is_set || is_set(source_interface_ipv4_address.yfilter)) leaf_name_data.push_back(source_interface_ipv4_address.get_name_leafdata());
    if (source_interface_ipv6_address.is_set || is_set(source_interface_ipv6_address.yfilter)) leaf_name_data.push_back(source_interface_ipv6_address.get_name_leafdata());
    if (redundancy_role.is_set || is_set(redundancy_role.yfilter)) leaf_name_data.push_back(redundancy_role.get_name_leafdata());
    if (restart_client_sync_in_progress.is_set || is_set(restart_client_sync_in_progress.yfilter)) leaf_name_data.push_back(restart_client_sync_in_progress.get_name_leafdata());
    if (client_init_sync_time_stamp.is_set || is_set(client_init_sync_time_stamp.yfilter)) leaf_name_data.push_back(client_init_sync_time_stamp.get_name_leafdata());
    if (restart_peer_sync_in_progress.is_set || is_set(restart_peer_sync_in_progress.yfilter)) leaf_name_data.push_back(restart_peer_sync_in_progress.get_name_leafdata());
    if (peer_init_sync_time_stamp.is_set || is_set(peer_init_sync_time_stamp.yfilter)) leaf_name_data.push_back(peer_init_sync_time_stamp.get_name_leafdata());
    if (sync_in_progress.is_set || is_set(sync_in_progress.yfilter)) leaf_name_data.push_back(sync_in_progress.get_name_leafdata());
    if (peer_action_timer.is_set || is_set(peer_action_timer.yfilter)) leaf_name_data.push_back(peer_action_timer.get_name_leafdata());
    if (retry_timer_remaining.is_set || is_set(retry_timer_remaining.yfilter)) leaf_name_data.push_back(retry_timer_remaining.get_name_leafdata());
    if (tx_list_client_registration_invalid.is_set || is_set(tx_list_client_registration_invalid.yfilter)) leaf_name_data.push_back(tx_list_client_registration_invalid.get_name_leafdata());
    if (tx_list_client_de_registration_invalid.is_set || is_set(tx_list_client_de_registration_invalid.yfilter)) leaf_name_data.push_back(tx_list_client_de_registration_invalid.get_name_leafdata());
    if (tx_list_client_connection_up.is_set || is_set(tx_list_client_connection_up.yfilter)) leaf_name_data.push_back(tx_list_client_connection_up.get_name_leafdata());
    if (tx_list_client_connection_down.is_set || is_set(tx_list_client_connection_down.yfilter)) leaf_name_data.push_back(tx_list_client_connection_down.get_name_leafdata());
    if (tx_list_client_peer_done.is_set || is_set(tx_list_client_peer_done.yfilter)) leaf_name_data.push_back(tx_list_client_peer_done.get_name_leafdata());
    if (tx_list_client_message_call_back.is_set || is_set(tx_list_client_message_call_back.yfilter)) leaf_name_data.push_back(tx_list_client_message_call_back.get_name_leafdata());
    if (tx_list_client_receive_valid.is_set || is_set(tx_list_client_receive_valid.yfilter)) leaf_name_data.push_back(tx_list_client_receive_valid.get_name_leafdata());
    if (tx_list_client_receive_invalid.is_set || is_set(tx_list_client_receive_invalid.yfilter)) leaf_name_data.push_back(tx_list_client_receive_invalid.get_name_leafdata());
    if (tx_list_client_receive_command_valid.is_set || is_set(tx_list_client_receive_command_valid.yfilter)) leaf_name_data.push_back(tx_list_client_receive_command_valid.get_name_leafdata());
    if (tx_list_client_receive_command_invalid.is_set || is_set(tx_list_client_receive_command_invalid.yfilter)) leaf_name_data.push_back(tx_list_client_receive_command_invalid.get_name_leafdata());
    if (tx_list_client_receive_session_sessionvalid.is_set || is_set(tx_list_client_receive_session_sessionvalid.yfilter)) leaf_name_data.push_back(tx_list_client_receive_session_sessionvalid.get_name_leafdata());
    if (tx_list_client_receive_session_session_invalid.is_set || is_set(tx_list_client_receive_session_session_invalid.yfilter)) leaf_name_data.push_back(tx_list_client_receive_session_session_invalid.get_name_leafdata());
    if (tx_list_peer_timer_handler.is_set || is_set(tx_list_peer_timer_handler.yfilter)) leaf_name_data.push_back(tx_list_peer_timer_handler.get_name_leafdata());
    if (tx_list_peer_registration_invalid.is_set || is_set(tx_list_peer_registration_invalid.yfilter)) leaf_name_data.push_back(tx_list_peer_registration_invalid.get_name_leafdata());
    if (tx_list_peer_de_registration_invalid.is_set || is_set(tx_list_peer_de_registration_invalid.yfilter)) leaf_name_data.push_back(tx_list_peer_de_registration_invalid.get_name_leafdata());
    if (tx_list_peer_message_call_back_valid.is_set || is_set(tx_list_peer_message_call_back_valid.yfilter)) leaf_name_data.push_back(tx_list_peer_message_call_back_valid.get_name_leafdata());
    if (tx_list_peer_message_call_back_invalid.is_set || is_set(tx_list_peer_message_call_back_invalid.yfilter)) leaf_name_data.push_back(tx_list_peer_message_call_back_invalid.get_name_leafdata());
    if (tx_list_peer_done.is_set || is_set(tx_list_peer_done.yfilter)) leaf_name_data.push_back(tx_list_peer_done.get_name_leafdata());
    if (tx_list_peer_cmd_connection_up_not_ok.is_set || is_set(tx_list_peer_cmd_connection_up_not_ok.yfilter)) leaf_name_data.push_back(tx_list_peer_cmd_connection_up_not_ok.get_name_leafdata());
    if (tx_list_peer_cmd_connection_down_not_ok.is_set || is_set(tx_list_peer_cmd_connection_down_not_ok.yfilter)) leaf_name_data.push_back(tx_list_peer_cmd_connection_down_not_ok.get_name_leafdata());
    if (tx_list_peer_session_connection_up_not_ok.is_set || is_set(tx_list_peer_session_connection_up_not_ok.yfilter)) leaf_name_data.push_back(tx_list_peer_session_connection_up_not_ok.get_name_leafdata());
    if (tx_list_peer_session_connection_down_not_ok.is_set || is_set(tx_list_peer_session_connection_down_not_ok.yfilter)) leaf_name_data.push_back(tx_list_peer_session_connection_down_not_ok.get_name_leafdata());
    if (tx_list_send_pool_update_not_ok.is_set || is_set(tx_list_send_pool_update_not_ok.yfilter)) leaf_name_data.push_back(tx_list_send_pool_update_not_ok.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-status-statistics")
    {
        if(intf_status_statistics == nullptr)
        {
            intf_status_statistics = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics>();
        }
        return intf_status_statistics;
    }

    if(child_yang_name == "tx-list-statistics")
    {
        if(tx_list_statistics == nullptr)
        {
            tx_list_statistics = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics>();
        }
        return tx_list_statistics;
    }

    if(child_yang_name == "client-status")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus>();
        ent_->parent = this;
        client_status.append(ent_);
        return ent_;
    }

    if(child_yang_name == "opaque-memory-status")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus>();
        ent_->parent = this;
        opaque_memory_status.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tx-list-over-tcp-status")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus>();
        ent_->parent = this;
        tx_list_over_tcp_status.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_status_statistics != nullptr)
    {
        _children["intf-status-statistics"] = intf_status_statistics;
    }

    if(tx_list_statistics != nullptr)
    {
        _children["tx-list-statistics"] = tx_list_statistics;
    }

    count_ = 0;
    for (auto ent_ : client_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : opaque_memory_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tx_list_over_tcp_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "redundancy-role")
    {
        redundancy_role = value;
        redundancy_role.value_namespace = name_space;
        redundancy_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-client-sync-in-progress")
    {
        restart_client_sync_in_progress = value;
        restart_client_sync_in_progress.value_namespace = name_space;
        restart_client_sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-init-sync-time-stamp")
    {
        client_init_sync_time_stamp = value;
        client_init_sync_time_stamp.value_namespace = name_space;
        client_init_sync_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-peer-sync-in-progress")
    {
        restart_peer_sync_in_progress = value;
        restart_peer_sync_in_progress.value_namespace = name_space;
        restart_peer_sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-init-sync-time-stamp")
    {
        peer_init_sync_time_stamp = value;
        peer_init_sync_time_stamp.value_namespace = name_space;
        peer_init_sync_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-in-progress")
    {
        sync_in_progress = value;
        sync_in_progress.value_namespace = name_space;
        sync_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-action-timer")
    {
        peer_action_timer = value;
        peer_action_timer.value_namespace = name_space;
        peer_action_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timer-remaining")
    {
        retry_timer_remaining = value;
        retry_timer_remaining.value_namespace = name_space;
        retry_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-registration-invalid")
    {
        tx_list_client_registration_invalid = value;
        tx_list_client_registration_invalid.value_namespace = name_space;
        tx_list_client_registration_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-de-registration-invalid")
    {
        tx_list_client_de_registration_invalid = value;
        tx_list_client_de_registration_invalid.value_namespace = name_space;
        tx_list_client_de_registration_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-connection-up")
    {
        tx_list_client_connection_up = value;
        tx_list_client_connection_up.value_namespace = name_space;
        tx_list_client_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-connection-down")
    {
        tx_list_client_connection_down = value;
        tx_list_client_connection_down.value_namespace = name_space;
        tx_list_client_connection_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-peer-done")
    {
        tx_list_client_peer_done = value;
        tx_list_client_peer_done.value_namespace = name_space;
        tx_list_client_peer_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-message-call-back")
    {
        tx_list_client_message_call_back = value;
        tx_list_client_message_call_back.value_namespace = name_space;
        tx_list_client_message_call_back.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-receive-valid")
    {
        tx_list_client_receive_valid = value;
        tx_list_client_receive_valid.value_namespace = name_space;
        tx_list_client_receive_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-receive-invalid")
    {
        tx_list_client_receive_invalid = value;
        tx_list_client_receive_invalid.value_namespace = name_space;
        tx_list_client_receive_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-receive-command-valid")
    {
        tx_list_client_receive_command_valid = value;
        tx_list_client_receive_command_valid.value_namespace = name_space;
        tx_list_client_receive_command_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-receive-command-invalid")
    {
        tx_list_client_receive_command_invalid = value;
        tx_list_client_receive_command_invalid.value_namespace = name_space;
        tx_list_client_receive_command_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-receive-session-sessionvalid")
    {
        tx_list_client_receive_session_sessionvalid = value;
        tx_list_client_receive_session_sessionvalid.value_namespace = name_space;
        tx_list_client_receive_session_sessionvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-client-receive-session-session-invalid")
    {
        tx_list_client_receive_session_session_invalid = value;
        tx_list_client_receive_session_session_invalid.value_namespace = name_space;
        tx_list_client_receive_session_session_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-timer-handler")
    {
        tx_list_peer_timer_handler = value;
        tx_list_peer_timer_handler.value_namespace = name_space;
        tx_list_peer_timer_handler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-registration-invalid")
    {
        tx_list_peer_registration_invalid = value;
        tx_list_peer_registration_invalid.value_namespace = name_space;
        tx_list_peer_registration_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-de-registration-invalid")
    {
        tx_list_peer_de_registration_invalid = value;
        tx_list_peer_de_registration_invalid.value_namespace = name_space;
        tx_list_peer_de_registration_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-message-call-back-valid")
    {
        tx_list_peer_message_call_back_valid = value;
        tx_list_peer_message_call_back_valid.value_namespace = name_space;
        tx_list_peer_message_call_back_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-message-call-back-invalid")
    {
        tx_list_peer_message_call_back_invalid = value;
        tx_list_peer_message_call_back_invalid.value_namespace = name_space;
        tx_list_peer_message_call_back_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-done")
    {
        tx_list_peer_done = value;
        tx_list_peer_done.value_namespace = name_space;
        tx_list_peer_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-cmd-connection-up-not-ok")
    {
        tx_list_peer_cmd_connection_up_not_ok = value;
        tx_list_peer_cmd_connection_up_not_ok.value_namespace = name_space;
        tx_list_peer_cmd_connection_up_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-cmd-connection-down-not-ok")
    {
        tx_list_peer_cmd_connection_down_not_ok = value;
        tx_list_peer_cmd_connection_down_not_ok.value_namespace = name_space;
        tx_list_peer_cmd_connection_down_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-session-connection-up-not-ok")
    {
        tx_list_peer_session_connection_up_not_ok = value;
        tx_list_peer_session_connection_up_not_ok.value_namespace = name_space;
        tx_list_peer_session_connection_up_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-peer-session-connection-down-not-ok")
    {
        tx_list_peer_session_connection_down_not_ok = value;
        tx_list_peer_session_connection_down_not_ok.value_namespace = name_space;
        tx_list_peer_session_connection_down_not_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-send-pool-update-not-ok")
    {
        tx_list_send_pool_update_not_ok = value;
        tx_list_send_pool_update_not_ok.value_namespace = name_space;
        tx_list_send_pool_update_not_ok.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "redundancy-role")
    {
        redundancy_role.yfilter = yfilter;
    }
    if(value_path == "restart-client-sync-in-progress")
    {
        restart_client_sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "client-init-sync-time-stamp")
    {
        client_init_sync_time_stamp.yfilter = yfilter;
    }
    if(value_path == "restart-peer-sync-in-progress")
    {
        restart_peer_sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "peer-init-sync-time-stamp")
    {
        peer_init_sync_time_stamp.yfilter = yfilter;
    }
    if(value_path == "sync-in-progress")
    {
        sync_in_progress.yfilter = yfilter;
    }
    if(value_path == "peer-action-timer")
    {
        peer_action_timer.yfilter = yfilter;
    }
    if(value_path == "retry-timer-remaining")
    {
        retry_timer_remaining.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-registration-invalid")
    {
        tx_list_client_registration_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-de-registration-invalid")
    {
        tx_list_client_de_registration_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-connection-up")
    {
        tx_list_client_connection_up.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-connection-down")
    {
        tx_list_client_connection_down.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-peer-done")
    {
        tx_list_client_peer_done.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-message-call-back")
    {
        tx_list_client_message_call_back.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-receive-valid")
    {
        tx_list_client_receive_valid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-receive-invalid")
    {
        tx_list_client_receive_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-receive-command-valid")
    {
        tx_list_client_receive_command_valid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-receive-command-invalid")
    {
        tx_list_client_receive_command_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-receive-session-sessionvalid")
    {
        tx_list_client_receive_session_sessionvalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-client-receive-session-session-invalid")
    {
        tx_list_client_receive_session_session_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-timer-handler")
    {
        tx_list_peer_timer_handler.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-registration-invalid")
    {
        tx_list_peer_registration_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-de-registration-invalid")
    {
        tx_list_peer_de_registration_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-message-call-back-valid")
    {
        tx_list_peer_message_call_back_valid.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-message-call-back-invalid")
    {
        tx_list_peer_message_call_back_invalid.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-done")
    {
        tx_list_peer_done.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-cmd-connection-up-not-ok")
    {
        tx_list_peer_cmd_connection_up_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-cmd-connection-down-not-ok")
    {
        tx_list_peer_cmd_connection_down_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-session-connection-up-not-ok")
    {
        tx_list_peer_session_connection_up_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-peer-session-connection-down-not-ok")
    {
        tx_list_peer_session_connection_down_not_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-send-pool-update-not-ok")
    {
        tx_list_send_pool_update_not_ok.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-status-statistics" || name == "tx-list-statistics" || name == "client-status" || name == "opaque-memory-status" || name == "tx-list-over-tcp-status" || name == "source-interface-name" || name == "vrf-name" || name == "source-interface-ipv4-address" || name == "source-interface-ipv6-address" || name == "redundancy-role" || name == "restart-client-sync-in-progress" || name == "client-init-sync-time-stamp" || name == "restart-peer-sync-in-progress" || name == "peer-init-sync-time-stamp" || name == "sync-in-progress" || name == "peer-action-timer" || name == "retry-timer-remaining" || name == "tx-list-client-registration-invalid" || name == "tx-list-client-de-registration-invalid" || name == "tx-list-client-connection-up" || name == "tx-list-client-connection-down" || name == "tx-list-client-peer-done" || name == "tx-list-client-message-call-back" || name == "tx-list-client-receive-valid" || name == "tx-list-client-receive-invalid" || name == "tx-list-client-receive-command-valid" || name == "tx-list-client-receive-command-invalid" || name == "tx-list-client-receive-session-sessionvalid" || name == "tx-list-client-receive-session-session-invalid" || name == "tx-list-peer-timer-handler" || name == "tx-list-peer-registration-invalid" || name == "tx-list-peer-de-registration-invalid" || name == "tx-list-peer-message-call-back-valid" || name == "tx-list-peer-message-call-back-invalid" || name == "tx-list-peer-done" || name == "tx-list-peer-cmd-connection-up-not-ok" || name == "tx-list-peer-cmd-connection-down-not-ok" || name == "tx-list-peer-session-connection-up-not-ok" || name == "tx-list-peer-session-connection-down-not-ok" || name == "tx-list-send-pool-update-not-ok")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::IntfStatusStatistics()
    :
    pend_caps_rem_cnt{YType::uint32, "pend-caps-rem-cnt"},
    pend_reg_disable_cnt{YType::uint32, "pend-reg-disable-cnt"},
    pend_other_batch_oper_cnt{YType::uint32, "pend-other-batch-oper-cnt"},
    non_stale_cnt{YType::uint32, "non-stale-cnt"},
    grp_bound_cnt{YType::uint32, "grp-bound-cnt"}
{

    yang_name = "intf-status-statistics"; yang_parent_name = "stats-global"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::~IntfStatusStatistics()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::has_data() const
{
    if (is_presence_container) return true;
    return pend_caps_rem_cnt.is_set
	|| pend_reg_disable_cnt.is_set
	|| pend_other_batch_oper_cnt.is_set
	|| non_stale_cnt.is_set
	|| grp_bound_cnt.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pend_caps_rem_cnt.yfilter)
	|| ydk::is_set(pend_reg_disable_cnt.yfilter)
	|| ydk::is_set(pend_other_batch_oper_cnt.yfilter)
	|| ydk::is_set(non_stale_cnt.yfilter)
	|| ydk::is_set(grp_bound_cnt.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-status-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pend_caps_rem_cnt.is_set || is_set(pend_caps_rem_cnt.yfilter)) leaf_name_data.push_back(pend_caps_rem_cnt.get_name_leafdata());
    if (pend_reg_disable_cnt.is_set || is_set(pend_reg_disable_cnt.yfilter)) leaf_name_data.push_back(pend_reg_disable_cnt.get_name_leafdata());
    if (pend_other_batch_oper_cnt.is_set || is_set(pend_other_batch_oper_cnt.yfilter)) leaf_name_data.push_back(pend_other_batch_oper_cnt.get_name_leafdata());
    if (non_stale_cnt.is_set || is_set(non_stale_cnt.yfilter)) leaf_name_data.push_back(non_stale_cnt.get_name_leafdata());
    if (grp_bound_cnt.is_set || is_set(grp_bound_cnt.yfilter)) leaf_name_data.push_back(grp_bound_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pend-caps-rem-cnt")
    {
        pend_caps_rem_cnt = value;
        pend_caps_rem_cnt.value_namespace = name_space;
        pend_caps_rem_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pend-reg-disable-cnt")
    {
        pend_reg_disable_cnt = value;
        pend_reg_disable_cnt.value_namespace = name_space;
        pend_reg_disable_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pend-other-batch-oper-cnt")
    {
        pend_other_batch_oper_cnt = value;
        pend_other_batch_oper_cnt.value_namespace = name_space;
        pend_other_batch_oper_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-stale-cnt")
    {
        non_stale_cnt = value;
        non_stale_cnt.value_namespace = name_space;
        non_stale_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp-bound-cnt")
    {
        grp_bound_cnt = value;
        grp_bound_cnt.value_namespace = name_space;
        grp_bound_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pend-caps-rem-cnt")
    {
        pend_caps_rem_cnt.yfilter = yfilter;
    }
    if(value_path == "pend-reg-disable-cnt")
    {
        pend_reg_disable_cnt.yfilter = yfilter;
    }
    if(value_path == "pend-other-batch-oper-cnt")
    {
        pend_other_batch_oper_cnt.yfilter = yfilter;
    }
    if(value_path == "non-stale-cnt")
    {
        non_stale_cnt.yfilter = yfilter;
    }
    if(value_path == "grp-bound-cnt")
    {
        grp_bound_cnt.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::IntfStatusStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pend-caps-rem-cnt" || name == "pend-reg-disable-cnt" || name == "pend-other-batch-oper-cnt" || name == "non-stale-cnt" || name == "grp-bound-cnt")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::TxListStatistics()
    :
    tx_list_encode_marker_ok{YType::uint32, "tx-list-encode-marker-ok"},
    tx_list_encode_marker_partial_write{YType::uint32, "tx-list-encode-marker-partial-write"},
    tx_list_clean_marker{YType::uint32, "tx-list-clean-marker"},
    tx_list_encode_command_ok{YType::uint32, "tx-list-encode-command-ok"},
    tx_list_encode_command_partial_write{YType::uint32, "tx-list-encode-command-partial-write"},
    tx_list_clean_command{YType::uint32, "tx-list-clean-command"},
    tx_list_encode_negotiation_ok{YType::uint32, "tx-list-encode-negotiation-ok"},
    tx_list_encode_negotiation_partial_write{YType::uint32, "tx-list-encode-negotiation-partial-write"},
    tx_list_clean_negotiation{YType::uint32, "tx-list-clean-negotiation"}
{

    yang_name = "tx-list-statistics"; yang_parent_name = "stats-global"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::~TxListStatistics()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_list_encode_marker_ok.is_set
	|| tx_list_encode_marker_partial_write.is_set
	|| tx_list_clean_marker.is_set
	|| tx_list_encode_command_ok.is_set
	|| tx_list_encode_command_partial_write.is_set
	|| tx_list_clean_command.is_set
	|| tx_list_encode_negotiation_ok.is_set
	|| tx_list_encode_negotiation_partial_write.is_set
	|| tx_list_clean_negotiation.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_list_encode_marker_ok.yfilter)
	|| ydk::is_set(tx_list_encode_marker_partial_write.yfilter)
	|| ydk::is_set(tx_list_clean_marker.yfilter)
	|| ydk::is_set(tx_list_encode_command_ok.yfilter)
	|| ydk::is_set(tx_list_encode_command_partial_write.yfilter)
	|| ydk::is_set(tx_list_clean_command.yfilter)
	|| ydk::is_set(tx_list_encode_negotiation_ok.yfilter)
	|| ydk::is_set(tx_list_encode_negotiation_partial_write.yfilter)
	|| ydk::is_set(tx_list_clean_negotiation.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-list-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_list_encode_marker_ok.is_set || is_set(tx_list_encode_marker_ok.yfilter)) leaf_name_data.push_back(tx_list_encode_marker_ok.get_name_leafdata());
    if (tx_list_encode_marker_partial_write.is_set || is_set(tx_list_encode_marker_partial_write.yfilter)) leaf_name_data.push_back(tx_list_encode_marker_partial_write.get_name_leafdata());
    if (tx_list_clean_marker.is_set || is_set(tx_list_clean_marker.yfilter)) leaf_name_data.push_back(tx_list_clean_marker.get_name_leafdata());
    if (tx_list_encode_command_ok.is_set || is_set(tx_list_encode_command_ok.yfilter)) leaf_name_data.push_back(tx_list_encode_command_ok.get_name_leafdata());
    if (tx_list_encode_command_partial_write.is_set || is_set(tx_list_encode_command_partial_write.yfilter)) leaf_name_data.push_back(tx_list_encode_command_partial_write.get_name_leafdata());
    if (tx_list_clean_command.is_set || is_set(tx_list_clean_command.yfilter)) leaf_name_data.push_back(tx_list_clean_command.get_name_leafdata());
    if (tx_list_encode_negotiation_ok.is_set || is_set(tx_list_encode_negotiation_ok.yfilter)) leaf_name_data.push_back(tx_list_encode_negotiation_ok.get_name_leafdata());
    if (tx_list_encode_negotiation_partial_write.is_set || is_set(tx_list_encode_negotiation_partial_write.yfilter)) leaf_name_data.push_back(tx_list_encode_negotiation_partial_write.get_name_leafdata());
    if (tx_list_clean_negotiation.is_set || is_set(tx_list_clean_negotiation.yfilter)) leaf_name_data.push_back(tx_list_clean_negotiation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-list-encode-marker-ok")
    {
        tx_list_encode_marker_ok = value;
        tx_list_encode_marker_ok.value_namespace = name_space;
        tx_list_encode_marker_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-marker-partial-write")
    {
        tx_list_encode_marker_partial_write = value;
        tx_list_encode_marker_partial_write.value_namespace = name_space;
        tx_list_encode_marker_partial_write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clean-marker")
    {
        tx_list_clean_marker = value;
        tx_list_clean_marker.value_namespace = name_space;
        tx_list_clean_marker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-command-ok")
    {
        tx_list_encode_command_ok = value;
        tx_list_encode_command_ok.value_namespace = name_space;
        tx_list_encode_command_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-command-partial-write")
    {
        tx_list_encode_command_partial_write = value;
        tx_list_encode_command_partial_write.value_namespace = name_space;
        tx_list_encode_command_partial_write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clean-command")
    {
        tx_list_clean_command = value;
        tx_list_clean_command.value_namespace = name_space;
        tx_list_clean_command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-negotiation-ok")
    {
        tx_list_encode_negotiation_ok = value;
        tx_list_encode_negotiation_ok.value_namespace = name_space;
        tx_list_encode_negotiation_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-encode-negotiation-partial-write")
    {
        tx_list_encode_negotiation_partial_write = value;
        tx_list_encode_negotiation_partial_write.value_namespace = name_space;
        tx_list_encode_negotiation_partial_write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-list-clean-negotiation")
    {
        tx_list_clean_negotiation = value;
        tx_list_clean_negotiation.value_namespace = name_space;
        tx_list_clean_negotiation.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-list-encode-marker-ok")
    {
        tx_list_encode_marker_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-marker-partial-write")
    {
        tx_list_encode_marker_partial_write.yfilter = yfilter;
    }
    if(value_path == "tx-list-clean-marker")
    {
        tx_list_clean_marker.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-command-ok")
    {
        tx_list_encode_command_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-command-partial-write")
    {
        tx_list_encode_command_partial_write.yfilter = yfilter;
    }
    if(value_path == "tx-list-clean-command")
    {
        tx_list_clean_command.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-negotiation-ok")
    {
        tx_list_encode_negotiation_ok.yfilter = yfilter;
    }
    if(value_path == "tx-list-encode-negotiation-partial-write")
    {
        tx_list_encode_negotiation_partial_write.yfilter = yfilter;
    }
    if(value_path == "tx-list-clean-negotiation")
    {
        tx_list_clean_negotiation.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-list-encode-marker-ok" || name == "tx-list-encode-marker-partial-write" || name == "tx-list-clean-marker" || name == "tx-list-encode-command-ok" || name == "tx-list-encode-command-partial-write" || name == "tx-list-clean-command" || name == "tx-list-encode-negotiation-ok" || name == "tx-list-encode-negotiation-partial-write" || name == "tx-list-clean-negotiation")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::ClientStatus()
    :
    component{YType::enumeration, "component"},
    client_connection_status{YType::boolean, "client-connection-status"},
    client_initialization_synchronization_pending{YType::boolean, "client-initialization-synchronization-pending"},
    client_synchronization_end_of_download_pending{YType::boolean, "client-synchronization-end-of-download-pending"},
    up_time_stamp{YType::str, "up-time-stamp"},
    down_time_stamp{YType::str, "down-time-stamp"},
    clean_up_timer_remaining{YType::uint32, "clean-up-timer-remaining"}
{

    yang_name = "client-status"; yang_parent_name = "stats-global"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::~ClientStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| client_connection_status.is_set
	|| client_initialization_synchronization_pending.is_set
	|| client_synchronization_end_of_download_pending.is_set
	|| up_time_stamp.is_set
	|| down_time_stamp.is_set
	|| clean_up_timer_remaining.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(client_connection_status.yfilter)
	|| ydk::is_set(client_initialization_synchronization_pending.yfilter)
	|| ydk::is_set(client_synchronization_end_of_download_pending.yfilter)
	|| ydk::is_set(up_time_stamp.yfilter)
	|| ydk::is_set(down_time_stamp.yfilter)
	|| ydk::is_set(clean_up_timer_remaining.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (client_connection_status.is_set || is_set(client_connection_status.yfilter)) leaf_name_data.push_back(client_connection_status.get_name_leafdata());
    if (client_initialization_synchronization_pending.is_set || is_set(client_initialization_synchronization_pending.yfilter)) leaf_name_data.push_back(client_initialization_synchronization_pending.get_name_leafdata());
    if (client_synchronization_end_of_download_pending.is_set || is_set(client_synchronization_end_of_download_pending.yfilter)) leaf_name_data.push_back(client_synchronization_end_of_download_pending.get_name_leafdata());
    if (up_time_stamp.is_set || is_set(up_time_stamp.yfilter)) leaf_name_data.push_back(up_time_stamp.get_name_leafdata());
    if (down_time_stamp.is_set || is_set(down_time_stamp.yfilter)) leaf_name_data.push_back(down_time_stamp.get_name_leafdata());
    if (clean_up_timer_remaining.is_set || is_set(clean_up_timer_remaining.yfilter)) leaf_name_data.push_back(clean_up_timer_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-connection-status")
    {
        client_connection_status = value;
        client_connection_status.value_namespace = name_space;
        client_connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-initialization-synchronization-pending")
    {
        client_initialization_synchronization_pending = value;
        client_initialization_synchronization_pending.value_namespace = name_space;
        client_initialization_synchronization_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-synchronization-end-of-download-pending")
    {
        client_synchronization_end_of_download_pending = value;
        client_synchronization_end_of_download_pending.value_namespace = name_space;
        client_synchronization_end_of_download_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time-stamp")
    {
        up_time_stamp = value;
        up_time_stamp.value_namespace = name_space;
        up_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-time-stamp")
    {
        down_time_stamp = value;
        down_time_stamp.value_namespace = name_space;
        down_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clean-up-timer-remaining")
    {
        clean_up_timer_remaining = value;
        clean_up_timer_remaining.value_namespace = name_space;
        clean_up_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "client-connection-status")
    {
        client_connection_status.yfilter = yfilter;
    }
    if(value_path == "client-initialization-synchronization-pending")
    {
        client_initialization_synchronization_pending.yfilter = yfilter;
    }
    if(value_path == "client-synchronization-end-of-download-pending")
    {
        client_synchronization_end_of_download_pending.yfilter = yfilter;
    }
    if(value_path == "up-time-stamp")
    {
        up_time_stamp.yfilter = yfilter;
    }
    if(value_path == "down-time-stamp")
    {
        down_time_stamp.yfilter = yfilter;
    }
    if(value_path == "clean-up-timer-remaining")
    {
        clean_up_timer_remaining.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::ClientStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "client-connection-status" || name == "client-initialization-synchronization-pending" || name == "client-synchronization-end-of-download-pending" || name == "up-time-stamp" || name == "down-time-stamp" || name == "clean-up-timer-remaining")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::OpaqueMemoryStatus()
    :
    component{YType::enumeration, "component"},
    session_count{YType::uint32, "session-count"},
    opaque_size{YType::uint32, "opaque-size"},
    opaque_high_size{YType::uint32, "opaque-high-size"},
    opaque_data_size{YType::uint32, "opaque-data-size"}
{

    yang_name = "opaque-memory-status"; yang_parent_name = "stats-global"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::~OpaqueMemoryStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::has_data() const
{
    if (is_presence_container) return true;
    return component.is_set
	|| session_count.is_set
	|| opaque_size.is_set
	|| opaque_high_size.is_set
	|| opaque_data_size.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(component.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(opaque_size.yfilter)
	|| ydk::is_set(opaque_high_size.yfilter)
	|| ydk::is_set(opaque_data_size.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-memory-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (component.is_set || is_set(component.yfilter)) leaf_name_data.push_back(component.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (opaque_size.is_set || is_set(opaque_size.yfilter)) leaf_name_data.push_back(opaque_size.get_name_leafdata());
    if (opaque_high_size.is_set || is_set(opaque_high_size.yfilter)) leaf_name_data.push_back(opaque_high_size.get_name_leafdata());
    if (opaque_data_size.is_set || is_set(opaque_data_size.yfilter)) leaf_name_data.push_back(opaque_data_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "component")
    {
        component = value;
        component.value_namespace = name_space;
        component.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-size")
    {
        opaque_size = value;
        opaque_size.value_namespace = name_space;
        opaque_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-high-size")
    {
        opaque_high_size = value;
        opaque_high_size.value_namespace = name_space;
        opaque_high_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size = value;
        opaque_data_size.value_namespace = name_space;
        opaque_data_size.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "component")
    {
        component.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "opaque-size")
    {
        opaque_size.yfilter = yfilter;
    }
    if(value_path == "opaque-high-size")
    {
        opaque_high_size.yfilter = yfilter;
    }
    if(value_path == "opaque-data-size")
    {
        opaque_data_size.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::OpaqueMemoryStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "component" || name == "session-count" || name == "opaque-size" || name == "opaque-high-size" || name == "opaque-data-size")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::TxListOverTcpStatus()
    :
    messages_sent{YType::uint32, "messages-sent"},
    bytes_sent{YType::uint32, "bytes-sent"},
    messages_received{YType::uint32, "messages-received"},
    bytes_received{YType::uint32, "bytes-received"},
    connect_count{YType::uint32, "connect-count"},
    blocked_connect_count{YType::uint32, "blocked-connect-count"},
    connect_retry_count{YType::uint32, "connect-retry-count"},
    remote_node_down_count{YType::uint32, "remote-node-down-count"},
    accept_count{YType::uint32, "accept-count"},
    maximum_sent_message_size{YType::uint32, "maximum-sent-message-size"},
    maximum_received_message_size{YType::uint32, "maximum-received-message-size"},
    peer_pause_count{YType::uint32, "peer-pause-count"},
    buffer_full_occurence_count{YType::uint32, "buffer-full-occurence-count"},
    mem_move_message_count{YType::uint32, "mem-move-message-count"},
    mem_move_bytes_count{YType::uint32, "mem-move-bytes-count"},
    socket_read_count{YType::uint32, "socket-read-count"},
    socket_write_count{YType::uint32, "socket-write-count"},
    active_socket_count{YType::uint16, "active-socket-count"},
    maximum_requested_buffer_size{YType::uint32, "maximum-requested-buffer-size"},
    buffer_freed_count{YType::uint16, "buffer-freed-count"},
    buffer_cache_hit{YType::uint16, "buffer-cache-hit"},
    buffer_cache_miss{YType::uint16, "buffer-cache-miss"}
{

    yang_name = "tx-list-over-tcp-status"; yang_parent_name = "stats-global"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::~TxListOverTcpStatus()
{
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::has_data() const
{
    if (is_presence_container) return true;
    return messages_sent.is_set
	|| bytes_sent.is_set
	|| messages_received.is_set
	|| bytes_received.is_set
	|| connect_count.is_set
	|| blocked_connect_count.is_set
	|| connect_retry_count.is_set
	|| remote_node_down_count.is_set
	|| accept_count.is_set
	|| maximum_sent_message_size.is_set
	|| maximum_received_message_size.is_set
	|| peer_pause_count.is_set
	|| buffer_full_occurence_count.is_set
	|| mem_move_message_count.is_set
	|| mem_move_bytes_count.is_set
	|| socket_read_count.is_set
	|| socket_write_count.is_set
	|| active_socket_count.is_set
	|| maximum_requested_buffer_size.is_set
	|| buffer_freed_count.is_set
	|| buffer_cache_hit.is_set
	|| buffer_cache_miss.is_set;
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(messages_sent.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(messages_received.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(blocked_connect_count.yfilter)
	|| ydk::is_set(connect_retry_count.yfilter)
	|| ydk::is_set(remote_node_down_count.yfilter)
	|| ydk::is_set(accept_count.yfilter)
	|| ydk::is_set(maximum_sent_message_size.yfilter)
	|| ydk::is_set(maximum_received_message_size.yfilter)
	|| ydk::is_set(peer_pause_count.yfilter)
	|| ydk::is_set(buffer_full_occurence_count.yfilter)
	|| ydk::is_set(mem_move_message_count.yfilter)
	|| ydk::is_set(mem_move_bytes_count.yfilter)
	|| ydk::is_set(socket_read_count.yfilter)
	|| ydk::is_set(socket_write_count.yfilter)
	|| ydk::is_set(active_socket_count.yfilter)
	|| ydk::is_set(maximum_requested_buffer_size.yfilter)
	|| ydk::is_set(buffer_freed_count.yfilter)
	|| ydk::is_set(buffer_cache_hit.yfilter)
	|| ydk::is_set(buffer_cache_miss.yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-list-over-tcp-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (messages_sent.is_set || is_set(messages_sent.yfilter)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.yfilter)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (blocked_connect_count.is_set || is_set(blocked_connect_count.yfilter)) leaf_name_data.push_back(blocked_connect_count.get_name_leafdata());
    if (connect_retry_count.is_set || is_set(connect_retry_count.yfilter)) leaf_name_data.push_back(connect_retry_count.get_name_leafdata());
    if (remote_node_down_count.is_set || is_set(remote_node_down_count.yfilter)) leaf_name_data.push_back(remote_node_down_count.get_name_leafdata());
    if (accept_count.is_set || is_set(accept_count.yfilter)) leaf_name_data.push_back(accept_count.get_name_leafdata());
    if (maximum_sent_message_size.is_set || is_set(maximum_sent_message_size.yfilter)) leaf_name_data.push_back(maximum_sent_message_size.get_name_leafdata());
    if (maximum_received_message_size.is_set || is_set(maximum_received_message_size.yfilter)) leaf_name_data.push_back(maximum_received_message_size.get_name_leafdata());
    if (peer_pause_count.is_set || is_set(peer_pause_count.yfilter)) leaf_name_data.push_back(peer_pause_count.get_name_leafdata());
    if (buffer_full_occurence_count.is_set || is_set(buffer_full_occurence_count.yfilter)) leaf_name_data.push_back(buffer_full_occurence_count.get_name_leafdata());
    if (mem_move_message_count.is_set || is_set(mem_move_message_count.yfilter)) leaf_name_data.push_back(mem_move_message_count.get_name_leafdata());
    if (mem_move_bytes_count.is_set || is_set(mem_move_bytes_count.yfilter)) leaf_name_data.push_back(mem_move_bytes_count.get_name_leafdata());
    if (socket_read_count.is_set || is_set(socket_read_count.yfilter)) leaf_name_data.push_back(socket_read_count.get_name_leafdata());
    if (socket_write_count.is_set || is_set(socket_write_count.yfilter)) leaf_name_data.push_back(socket_write_count.get_name_leafdata());
    if (active_socket_count.is_set || is_set(active_socket_count.yfilter)) leaf_name_data.push_back(active_socket_count.get_name_leafdata());
    if (maximum_requested_buffer_size.is_set || is_set(maximum_requested_buffer_size.yfilter)) leaf_name_data.push_back(maximum_requested_buffer_size.get_name_leafdata());
    if (buffer_freed_count.is_set || is_set(buffer_freed_count.yfilter)) leaf_name_data.push_back(buffer_freed_count.get_name_leafdata());
    if (buffer_cache_hit.is_set || is_set(buffer_cache_hit.yfilter)) leaf_name_data.push_back(buffer_cache_hit.get_name_leafdata());
    if (buffer_cache_miss.is_set || is_set(buffer_cache_miss.yfilter)) leaf_name_data.push_back(buffer_cache_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "messages-sent")
    {
        messages_sent = value;
        messages_sent.value_namespace = name_space;
        messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
        messages_received.value_namespace = name_space;
        messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocked-connect-count")
    {
        blocked_connect_count = value;
        blocked_connect_count.value_namespace = name_space;
        blocked_connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-retry-count")
    {
        connect_retry_count = value;
        connect_retry_count.value_namespace = name_space;
        connect_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-down-count")
    {
        remote_node_down_count = value;
        remote_node_down_count.value_namespace = name_space;
        remote_node_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-count")
    {
        accept_count = value;
        accept_count.value_namespace = name_space;
        accept_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-sent-message-size")
    {
        maximum_sent_message_size = value;
        maximum_sent_message_size.value_namespace = name_space;
        maximum_sent_message_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-received-message-size")
    {
        maximum_received_message_size = value;
        maximum_received_message_size.value_namespace = name_space;
        maximum_received_message_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-pause-count")
    {
        peer_pause_count = value;
        peer_pause_count.value_namespace = name_space;
        peer_pause_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-full-occurence-count")
    {
        buffer_full_occurence_count = value;
        buffer_full_occurence_count.value_namespace = name_space;
        buffer_full_occurence_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-move-message-count")
    {
        mem_move_message_count = value;
        mem_move_message_count.value_namespace = name_space;
        mem_move_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-move-bytes-count")
    {
        mem_move_bytes_count = value;
        mem_move_bytes_count.value_namespace = name_space;
        mem_move_bytes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-read-count")
    {
        socket_read_count = value;
        socket_read_count.value_namespace = name_space;
        socket_read_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-write-count")
    {
        socket_write_count = value;
        socket_write_count.value_namespace = name_space;
        socket_write_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-socket-count")
    {
        active_socket_count = value;
        active_socket_count.value_namespace = name_space;
        active_socket_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-requested-buffer-size")
    {
        maximum_requested_buffer_size = value;
        maximum_requested_buffer_size.value_namespace = name_space;
        maximum_requested_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-freed-count")
    {
        buffer_freed_count = value;
        buffer_freed_count.value_namespace = name_space;
        buffer_freed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-cache-hit")
    {
        buffer_cache_hit = value;
        buffer_cache_hit.value_namespace = name_space;
        buffer_cache_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-cache-miss")
    {
        buffer_cache_miss = value;
        buffer_cache_miss.value_namespace = name_space;
        buffer_cache_miss.value_namespace_prefix = name_space_prefix;
    }
}

void SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "messages-sent")
    {
        messages_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "messages-received")
    {
        messages_received.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "blocked-connect-count")
    {
        blocked_connect_count.yfilter = yfilter;
    }
    if(value_path == "connect-retry-count")
    {
        connect_retry_count.yfilter = yfilter;
    }
    if(value_path == "remote-node-down-count")
    {
        remote_node_down_count.yfilter = yfilter;
    }
    if(value_path == "accept-count")
    {
        accept_count.yfilter = yfilter;
    }
    if(value_path == "maximum-sent-message-size")
    {
        maximum_sent_message_size.yfilter = yfilter;
    }
    if(value_path == "maximum-received-message-size")
    {
        maximum_received_message_size.yfilter = yfilter;
    }
    if(value_path == "peer-pause-count")
    {
        peer_pause_count.yfilter = yfilter;
    }
    if(value_path == "buffer-full-occurence-count")
    {
        buffer_full_occurence_count.yfilter = yfilter;
    }
    if(value_path == "mem-move-message-count")
    {
        mem_move_message_count.yfilter = yfilter;
    }
    if(value_path == "mem-move-bytes-count")
    {
        mem_move_bytes_count.yfilter = yfilter;
    }
    if(value_path == "socket-read-count")
    {
        socket_read_count.yfilter = yfilter;
    }
    if(value_path == "socket-write-count")
    {
        socket_write_count.yfilter = yfilter;
    }
    if(value_path == "active-socket-count")
    {
        active_socket_count.yfilter = yfilter;
    }
    if(value_path == "maximum-requested-buffer-size")
    {
        maximum_requested_buffer_size.yfilter = yfilter;
    }
    if(value_path == "buffer-freed-count")
    {
        buffer_freed_count.yfilter = yfilter;
    }
    if(value_path == "buffer-cache-hit")
    {
        buffer_cache_hit.yfilter = yfilter;
    }
    if(value_path == "buffer-cache-miss")
    {
        buffer_cache_miss.yfilter = yfilter;
    }
}

bool SessionRedundancyAgent::Nodes::Node::StatsGlobal::TxListOverTcpStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "messages-sent" || name == "bytes-sent" || name == "messages-received" || name == "bytes-received" || name == "connect-count" || name == "blocked-connect-count" || name == "connect-retry-count" || name == "remote-node-down-count" || name == "accept-count" || name == "maximum-sent-message-size" || name == "maximum-received-message-size" || name == "peer-pause-count" || name == "buffer-full-occurence-count" || name == "mem-move-message-count" || name == "mem-move-bytes-count" || name == "socket-read-count" || name == "socket-write-count" || name == "active-socket-count" || name == "maximum-requested-buffer-size" || name == "buffer-freed-count" || name == "buffer-cache-hit" || name == "buffer-cache-miss")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummaries()
    :
    group_summary(this, {"group_id"})
{

    yang_name = "group-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionRedundancyAgent::Nodes::Node::GroupSummaries::~GroupSummaries()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_summary.len(); index++)
    {
        if(group_summary[index]->has_data())
            return true;
    }
    return false;
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::has_operation() const
{
    for (std::size_t index=0; index<group_summary.len(); index++)
    {
        if(group_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-summary")
    {
        auto ent_ = std::make_shared<SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary>();
        ent_->parent = this;
        group_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupSummaries::get_children() const
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

void SessionRedundancyAgent::Nodes::Node::GroupSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionRedundancyAgent::Nodes::Node::GroupSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-summary")
        return true;
    return false;
}

SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::GroupSummary()
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

SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::~GroupSummary()
{
}

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_data() const
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

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_operation() const
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

std::string SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool SessionRedundancyAgent::Nodes::Node::GroupSummaries::GroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "group-id-xr" || name == "role" || name == "disabled" || name == "peer-ipv4-address" || name == "peer-ipv6-address" || name == "peer-status" || name == "preferred-role" || name == "slave-mode" || name == "object-tracking-status" || name == "interface-count" || name == "session-count" || name == "pending-add-session-count")
        return true;
    return false;
}

const Enum::YLeaf SergShowSessionError::none {0, "none"};
const Enum::YLeaf SergShowSessionError::hard {1, "hard"};
const Enum::YLeaf SergShowSessionError::soft {2, "soft"};

const Enum::YLeaf SergShowSlaveMode::none {0, "none"};
const Enum::YLeaf SergShowSlaveMode::warm {1, "warm"};
const Enum::YLeaf SergShowSlaveMode::hot {2, "hot"};

const Enum::YLeaf SergShowSoReason::internal {0, "internal"};
const Enum::YLeaf SergShowSoReason::admin {1, "admin"};
const Enum::YLeaf SergShowSoReason::peer_up {2, "peer-up"};
const Enum::YLeaf SergShowSoReason::peer_down {3, "peer-down"};
const Enum::YLeaf SergShowSoReason::object_tracking_status_change {4, "object-tracking-status-change"};
const Enum::YLeaf SergShowSoReason::serg_show_so_reason_max {5, "serg-show-so-reason-max"};

const Enum::YLeaf SergShowMem::standard {0, "standard"};
const Enum::YLeaf SergShowMem::chunk {1, "chunk"};
const Enum::YLeaf SergShowMem::edm {2, "edm"};
const Enum::YLeaf SergShowMem::string {3, "string"};
const Enum::YLeaf SergShowMem::static_ {4, "static"};
const Enum::YLeaf SergShowMem::unknown {5, "unknown"};

const Enum::YLeaf SergPeerStatus::not_configured {0, "not-configured"};
const Enum::YLeaf SergPeerStatus::initialize {1, "initialize"};
const Enum::YLeaf SergPeerStatus::retry {2, "retry"};
const Enum::YLeaf SergPeerStatus::connect {3, "connect"};
const Enum::YLeaf SergPeerStatus::listen {4, "listen"};
const Enum::YLeaf SergPeerStatus::registration {5, "registration"};
const Enum::YLeaf SergPeerStatus::cleanup {6, "cleanup"};
const Enum::YLeaf SergPeerStatus::connected {7, "connected"};
const Enum::YLeaf SergPeerStatus::established {8, "established"};

const Enum::YLeaf SergShowImRole::none {0, "none"};
const Enum::YLeaf SergShowImRole::master {1, "master"};
const Enum::YLeaf SergShowImRole::slave {2, "slave"};

const Enum::YLeaf SergShowComp::serga {0, "serga"};
const Enum::YLeaf SergShowComp::ipv6nd {1, "ipv6nd"};
const Enum::YLeaf SergShowComp::dhcpv6 {2, "dhcpv6"};
const Enum::YLeaf SergShowComp::daps {3, "daps"};

const Enum::YLeaf SergShowSessionOperation::none {0, "none"};
const Enum::YLeaf SergShowSessionOperation::update {1, "update"};
const Enum::YLeaf SergShowSessionOperation::delete_ {2, "delete"};
const Enum::YLeaf SergShowSessionOperation::in_sync {3, "in-sync"};

const Enum::YLeaf SergShowRole::none {0, "none"};
const Enum::YLeaf SergShowRole::master {1, "master"};
const Enum::YLeaf SergShowRole::slave {2, "slave"};


}
}

