
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_link_oam_oper {

EtherLinkOam::EtherLinkOam()
    :
    discovery_info_interfaces(std::make_shared<EtherLinkOam::DiscoveryInfoInterfaces>())
    , interface_state_interfaces(std::make_shared<EtherLinkOam::InterfaceStateInterfaces>())
    , running_config_interfaces(std::make_shared<EtherLinkOam::RunningConfigInterfaces>())
    , nodes(std::make_shared<EtherLinkOam::Nodes>())
    , event_log_entry_interfaces(std::make_shared<EtherLinkOam::EventLogEntryInterfaces>())
    , stats_interfaces(std::make_shared<EtherLinkOam::StatsInterfaces>())
{
    discovery_info_interfaces->parent = this;
    interface_state_interfaces->parent = this;
    running_config_interfaces->parent = this;
    nodes->parent = this;
    event_log_entry_interfaces->parent = this;
    stats_interfaces->parent = this;

    yang_name = "ether-link-oam"; yang_parent_name = "Cisco-IOS-XR-ethernet-link-oam-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

EtherLinkOam::~EtherLinkOam()
{
}

bool EtherLinkOam::has_data() const
{
    if (is_presence_container) return true;
    return (discovery_info_interfaces !=  nullptr && discovery_info_interfaces->has_data())
	|| (interface_state_interfaces !=  nullptr && interface_state_interfaces->has_data())
	|| (running_config_interfaces !=  nullptr && running_config_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (event_log_entry_interfaces !=  nullptr && event_log_entry_interfaces->has_data())
	|| (stats_interfaces !=  nullptr && stats_interfaces->has_data());
}

bool EtherLinkOam::has_operation() const
{
    return is_set(yfilter)
	|| (discovery_info_interfaces !=  nullptr && discovery_info_interfaces->has_operation())
	|| (interface_state_interfaces !=  nullptr && interface_state_interfaces->has_operation())
	|| (running_config_interfaces !=  nullptr && running_config_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (event_log_entry_interfaces !=  nullptr && event_log_entry_interfaces->has_operation())
	|| (stats_interfaces !=  nullptr && stats_interfaces->has_operation());
}

std::string EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-info-interfaces")
    {
        if(discovery_info_interfaces == nullptr)
        {
            discovery_info_interfaces = std::make_shared<EtherLinkOam::DiscoveryInfoInterfaces>();
        }
        return discovery_info_interfaces;
    }

    if(child_yang_name == "interface-state-interfaces")
    {
        if(interface_state_interfaces == nullptr)
        {
            interface_state_interfaces = std::make_shared<EtherLinkOam::InterfaceStateInterfaces>();
        }
        return interface_state_interfaces;
    }

    if(child_yang_name == "running-config-interfaces")
    {
        if(running_config_interfaces == nullptr)
        {
            running_config_interfaces = std::make_shared<EtherLinkOam::RunningConfigInterfaces>();
        }
        return running_config_interfaces;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<EtherLinkOam::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "event-log-entry-interfaces")
    {
        if(event_log_entry_interfaces == nullptr)
        {
            event_log_entry_interfaces = std::make_shared<EtherLinkOam::EventLogEntryInterfaces>();
        }
        return event_log_entry_interfaces;
    }

    if(child_yang_name == "stats-interfaces")
    {
        if(stats_interfaces == nullptr)
        {
            stats_interfaces = std::make_shared<EtherLinkOam::StatsInterfaces>();
        }
        return stats_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery_info_interfaces != nullptr)
    {
        _children["discovery-info-interfaces"] = discovery_info_interfaces;
    }

    if(interface_state_interfaces != nullptr)
    {
        _children["interface-state-interfaces"] = interface_state_interfaces;
    }

    if(running_config_interfaces != nullptr)
    {
        _children["running-config-interfaces"] = running_config_interfaces;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    if(event_log_entry_interfaces != nullptr)
    {
        _children["event-log-entry-interfaces"] = event_log_entry_interfaces;
    }

    if(stats_interfaces != nullptr)
    {
        _children["stats-interfaces"] = stats_interfaces;
    }

    return _children;
}

void EtherLinkOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> EtherLinkOam::clone_ptr() const
{
    return std::make_shared<EtherLinkOam>();
}

std::string EtherLinkOam::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EtherLinkOam::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EtherLinkOam::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EtherLinkOam::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EtherLinkOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-info-interfaces" || name == "interface-state-interfaces" || name == "running-config-interfaces" || name == "nodes" || name == "event-log-entry-interfaces" || name == "stats-interfaces")
        return true;
    return false;
}

EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterfaces()
    :
    discovery_info_interface(this, {"member_interface"})
{

    yang_name = "discovery-info-interfaces"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::DiscoveryInfoInterfaces::~DiscoveryInfoInterfaces()
{
}

bool EtherLinkOam::DiscoveryInfoInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discovery_info_interface.len(); index++)
    {
        if(discovery_info_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::DiscoveryInfoInterfaces::has_operation() const
{
    for (std::size_t index=0; index<discovery_info_interface.len(); index++)
    {
        if(discovery_info_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::DiscoveryInfoInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::DiscoveryInfoInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-info-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::DiscoveryInfoInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::DiscoveryInfoInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery-info-interface")
    {
        auto ent_ = std::make_shared<EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface>();
        ent_->parent = this;
        discovery_info_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::DiscoveryInfoInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discovery_info_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLinkOam::DiscoveryInfoInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::DiscoveryInfoInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::DiscoveryInfoInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery-info-interface")
        return true;
    return false;
}

EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::DiscoveryInfoInterface()
    :
    member_interface{YType::str, "member-interface"},
    name{YType::str, "name"},
    operational_status{YType::enumeration, "operational-status"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    local_mode{YType::enumeration, "local-mode"},
    miswired{YType::boolean, "miswired"},
    local_mwd_key{YType::uint32, "local-mwd-key"},
    local_function_unidirectional{YType::boolean, "local-function-unidirectional"},
    local_function_loopback{YType::boolean, "local-function-loopback"},
    local_function_event{YType::boolean, "local-function-event"},
    local_functionvariable{YType::boolean, "local-functionvariable"},
    local_revision{YType::uint32, "local-revision"},
    local_mtu{YType::uint32, "local-mtu"},
    local_operational{YType::boolean, "local-operational"},
    local_evaluating{YType::boolean, "local-evaluating"},
    remote_mode{YType::enumeration, "remote-mode"},
    remote_unidirectional{YType::boolean, "remote-unidirectional"},
    remote_loopback{YType::boolean, "remote-loopback"},
    remote_event{YType::boolean, "remote-event"},
    remote_variable{YType::boolean, "remote-variable"},
    remote_mtu{YType::uint32, "remote-mtu"},
    remote_mac_address{YType::str, "remote-mac-address"},
    remote_vendor_oui{YType::str, "remote-vendor-oui"},
    remote_revision{YType::uint16, "remote-revision"},
    remote_vendor_info{YType::uint32, "remote-vendor-info"},
    remote_mwd_key{YType::uint32, "remote-mwd-key"},
    operational_status_valid{YType::boolean, "operational-status-valid"},
    loopback_mode_valid{YType::boolean, "loopback-mode-valid"},
    local_mode_valid{YType::boolean, "local-mode-valid"},
    miswired_valid{YType::boolean, "miswired-valid"},
    local_mwd_key_valid{YType::boolean, "local-mwd-key-valid"},
    local_function_unidirectional_valid{YType::boolean, "local-function-unidirectional-valid"},
    local_function_loopback_valid{YType::boolean, "local-function-loopback-valid"},
    local_function_event_valid{YType::boolean, "local-function-event-valid"},
    local_functionvariable_valid{YType::boolean, "local-functionvariable-valid"},
    local_revisionvalid{YType::boolean, "local-revisionvalid"},
    local_mtu_valid{YType::boolean, "local-mtu-valid"},
    remote_mode_valid{YType::boolean, "remote-mode-valid"},
    remote_unidirectional_valid{YType::boolean, "remote-unidirectional-valid"},
    remote_loopback_valid{YType::boolean, "remote-loopback-valid"},
    remote_event_valid{YType::boolean, "remote-event-valid"},
    remote_variable_valid{YType::boolean, "remote-variable-valid"},
    remote_mtu_valid{YType::boolean, "remote-mtu-valid"},
    remote_mac_address_valid{YType::boolean, "remote-mac-address-valid"},
    remote_vendor_oui_valid{YType::boolean, "remote-vendor-oui-valid"},
    remote_revisionvalid{YType::boolean, "remote-revisionvalid"},
    remote_vendor_info_valid{YType::boolean, "remote-vendor-info-valid"},
    remote_mwd_key_valid{YType::boolean, "remote-mwd-key-valid"},
    received_at_risk_notification_timestamp{YType::uint64, "received-at-risk-notification-timestamp"},
    received_at_risk_notification_time_remaining{YType::uint16, "received-at-risk-notification-time-remaining"}
{

    yang_name = "discovery-info-interface"; yang_parent_name = "discovery-info-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::~DiscoveryInfoInterface()
{
}

bool EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| name.is_set
	|| operational_status.is_set
	|| loopback_mode.is_set
	|| local_mode.is_set
	|| miswired.is_set
	|| local_mwd_key.is_set
	|| local_function_unidirectional.is_set
	|| local_function_loopback.is_set
	|| local_function_event.is_set
	|| local_functionvariable.is_set
	|| local_revision.is_set
	|| local_mtu.is_set
	|| local_operational.is_set
	|| local_evaluating.is_set
	|| remote_mode.is_set
	|| remote_unidirectional.is_set
	|| remote_loopback.is_set
	|| remote_event.is_set
	|| remote_variable.is_set
	|| remote_mtu.is_set
	|| remote_mac_address.is_set
	|| remote_vendor_oui.is_set
	|| remote_revision.is_set
	|| remote_vendor_info.is_set
	|| remote_mwd_key.is_set
	|| operational_status_valid.is_set
	|| loopback_mode_valid.is_set
	|| local_mode_valid.is_set
	|| miswired_valid.is_set
	|| local_mwd_key_valid.is_set
	|| local_function_unidirectional_valid.is_set
	|| local_function_loopback_valid.is_set
	|| local_function_event_valid.is_set
	|| local_functionvariable_valid.is_set
	|| local_revisionvalid.is_set
	|| local_mtu_valid.is_set
	|| remote_mode_valid.is_set
	|| remote_unidirectional_valid.is_set
	|| remote_loopback_valid.is_set
	|| remote_event_valid.is_set
	|| remote_variable_valid.is_set
	|| remote_mtu_valid.is_set
	|| remote_mac_address_valid.is_set
	|| remote_vendor_oui_valid.is_set
	|| remote_revisionvalid.is_set
	|| remote_vendor_info_valid.is_set
	|| remote_mwd_key_valid.is_set
	|| received_at_risk_notification_timestamp.is_set
	|| received_at_risk_notification_time_remaining.is_set;
}

bool EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(local_mode.yfilter)
	|| ydk::is_set(miswired.yfilter)
	|| ydk::is_set(local_mwd_key.yfilter)
	|| ydk::is_set(local_function_unidirectional.yfilter)
	|| ydk::is_set(local_function_loopback.yfilter)
	|| ydk::is_set(local_function_event.yfilter)
	|| ydk::is_set(local_functionvariable.yfilter)
	|| ydk::is_set(local_revision.yfilter)
	|| ydk::is_set(local_mtu.yfilter)
	|| ydk::is_set(local_operational.yfilter)
	|| ydk::is_set(local_evaluating.yfilter)
	|| ydk::is_set(remote_mode.yfilter)
	|| ydk::is_set(remote_unidirectional.yfilter)
	|| ydk::is_set(remote_loopback.yfilter)
	|| ydk::is_set(remote_event.yfilter)
	|| ydk::is_set(remote_variable.yfilter)
	|| ydk::is_set(remote_mtu.yfilter)
	|| ydk::is_set(remote_mac_address.yfilter)
	|| ydk::is_set(remote_vendor_oui.yfilter)
	|| ydk::is_set(remote_revision.yfilter)
	|| ydk::is_set(remote_vendor_info.yfilter)
	|| ydk::is_set(remote_mwd_key.yfilter)
	|| ydk::is_set(operational_status_valid.yfilter)
	|| ydk::is_set(loopback_mode_valid.yfilter)
	|| ydk::is_set(local_mode_valid.yfilter)
	|| ydk::is_set(miswired_valid.yfilter)
	|| ydk::is_set(local_mwd_key_valid.yfilter)
	|| ydk::is_set(local_function_unidirectional_valid.yfilter)
	|| ydk::is_set(local_function_loopback_valid.yfilter)
	|| ydk::is_set(local_function_event_valid.yfilter)
	|| ydk::is_set(local_functionvariable_valid.yfilter)
	|| ydk::is_set(local_revisionvalid.yfilter)
	|| ydk::is_set(local_mtu_valid.yfilter)
	|| ydk::is_set(remote_mode_valid.yfilter)
	|| ydk::is_set(remote_unidirectional_valid.yfilter)
	|| ydk::is_set(remote_loopback_valid.yfilter)
	|| ydk::is_set(remote_event_valid.yfilter)
	|| ydk::is_set(remote_variable_valid.yfilter)
	|| ydk::is_set(remote_mtu_valid.yfilter)
	|| ydk::is_set(remote_mac_address_valid.yfilter)
	|| ydk::is_set(remote_vendor_oui_valid.yfilter)
	|| ydk::is_set(remote_revisionvalid.yfilter)
	|| ydk::is_set(remote_vendor_info_valid.yfilter)
	|| ydk::is_set(remote_mwd_key_valid.yfilter)
	|| ydk::is_set(received_at_risk_notification_timestamp.yfilter)
	|| ydk::is_set(received_at_risk_notification_time_remaining.yfilter);
}

std::string EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/discovery-info-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-info-interface";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (local_mode.is_set || is_set(local_mode.yfilter)) leaf_name_data.push_back(local_mode.get_name_leafdata());
    if (miswired.is_set || is_set(miswired.yfilter)) leaf_name_data.push_back(miswired.get_name_leafdata());
    if (local_mwd_key.is_set || is_set(local_mwd_key.yfilter)) leaf_name_data.push_back(local_mwd_key.get_name_leafdata());
    if (local_function_unidirectional.is_set || is_set(local_function_unidirectional.yfilter)) leaf_name_data.push_back(local_function_unidirectional.get_name_leafdata());
    if (local_function_loopback.is_set || is_set(local_function_loopback.yfilter)) leaf_name_data.push_back(local_function_loopback.get_name_leafdata());
    if (local_function_event.is_set || is_set(local_function_event.yfilter)) leaf_name_data.push_back(local_function_event.get_name_leafdata());
    if (local_functionvariable.is_set || is_set(local_functionvariable.yfilter)) leaf_name_data.push_back(local_functionvariable.get_name_leafdata());
    if (local_revision.is_set || is_set(local_revision.yfilter)) leaf_name_data.push_back(local_revision.get_name_leafdata());
    if (local_mtu.is_set || is_set(local_mtu.yfilter)) leaf_name_data.push_back(local_mtu.get_name_leafdata());
    if (local_operational.is_set || is_set(local_operational.yfilter)) leaf_name_data.push_back(local_operational.get_name_leafdata());
    if (local_evaluating.is_set || is_set(local_evaluating.yfilter)) leaf_name_data.push_back(local_evaluating.get_name_leafdata());
    if (remote_mode.is_set || is_set(remote_mode.yfilter)) leaf_name_data.push_back(remote_mode.get_name_leafdata());
    if (remote_unidirectional.is_set || is_set(remote_unidirectional.yfilter)) leaf_name_data.push_back(remote_unidirectional.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.yfilter)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (remote_event.is_set || is_set(remote_event.yfilter)) leaf_name_data.push_back(remote_event.get_name_leafdata());
    if (remote_variable.is_set || is_set(remote_variable.yfilter)) leaf_name_data.push_back(remote_variable.get_name_leafdata());
    if (remote_mtu.is_set || is_set(remote_mtu.yfilter)) leaf_name_data.push_back(remote_mtu.get_name_leafdata());
    if (remote_mac_address.is_set || is_set(remote_mac_address.yfilter)) leaf_name_data.push_back(remote_mac_address.get_name_leafdata());
    if (remote_vendor_oui.is_set || is_set(remote_vendor_oui.yfilter)) leaf_name_data.push_back(remote_vendor_oui.get_name_leafdata());
    if (remote_revision.is_set || is_set(remote_revision.yfilter)) leaf_name_data.push_back(remote_revision.get_name_leafdata());
    if (remote_vendor_info.is_set || is_set(remote_vendor_info.yfilter)) leaf_name_data.push_back(remote_vendor_info.get_name_leafdata());
    if (remote_mwd_key.is_set || is_set(remote_mwd_key.yfilter)) leaf_name_data.push_back(remote_mwd_key.get_name_leafdata());
    if (operational_status_valid.is_set || is_set(operational_status_valid.yfilter)) leaf_name_data.push_back(operational_status_valid.get_name_leafdata());
    if (loopback_mode_valid.is_set || is_set(loopback_mode_valid.yfilter)) leaf_name_data.push_back(loopback_mode_valid.get_name_leafdata());
    if (local_mode_valid.is_set || is_set(local_mode_valid.yfilter)) leaf_name_data.push_back(local_mode_valid.get_name_leafdata());
    if (miswired_valid.is_set || is_set(miswired_valid.yfilter)) leaf_name_data.push_back(miswired_valid.get_name_leafdata());
    if (local_mwd_key_valid.is_set || is_set(local_mwd_key_valid.yfilter)) leaf_name_data.push_back(local_mwd_key_valid.get_name_leafdata());
    if (local_function_unidirectional_valid.is_set || is_set(local_function_unidirectional_valid.yfilter)) leaf_name_data.push_back(local_function_unidirectional_valid.get_name_leafdata());
    if (local_function_loopback_valid.is_set || is_set(local_function_loopback_valid.yfilter)) leaf_name_data.push_back(local_function_loopback_valid.get_name_leafdata());
    if (local_function_event_valid.is_set || is_set(local_function_event_valid.yfilter)) leaf_name_data.push_back(local_function_event_valid.get_name_leafdata());
    if (local_functionvariable_valid.is_set || is_set(local_functionvariable_valid.yfilter)) leaf_name_data.push_back(local_functionvariable_valid.get_name_leafdata());
    if (local_revisionvalid.is_set || is_set(local_revisionvalid.yfilter)) leaf_name_data.push_back(local_revisionvalid.get_name_leafdata());
    if (local_mtu_valid.is_set || is_set(local_mtu_valid.yfilter)) leaf_name_data.push_back(local_mtu_valid.get_name_leafdata());
    if (remote_mode_valid.is_set || is_set(remote_mode_valid.yfilter)) leaf_name_data.push_back(remote_mode_valid.get_name_leafdata());
    if (remote_unidirectional_valid.is_set || is_set(remote_unidirectional_valid.yfilter)) leaf_name_data.push_back(remote_unidirectional_valid.get_name_leafdata());
    if (remote_loopback_valid.is_set || is_set(remote_loopback_valid.yfilter)) leaf_name_data.push_back(remote_loopback_valid.get_name_leafdata());
    if (remote_event_valid.is_set || is_set(remote_event_valid.yfilter)) leaf_name_data.push_back(remote_event_valid.get_name_leafdata());
    if (remote_variable_valid.is_set || is_set(remote_variable_valid.yfilter)) leaf_name_data.push_back(remote_variable_valid.get_name_leafdata());
    if (remote_mtu_valid.is_set || is_set(remote_mtu_valid.yfilter)) leaf_name_data.push_back(remote_mtu_valid.get_name_leafdata());
    if (remote_mac_address_valid.is_set || is_set(remote_mac_address_valid.yfilter)) leaf_name_data.push_back(remote_mac_address_valid.get_name_leafdata());
    if (remote_vendor_oui_valid.is_set || is_set(remote_vendor_oui_valid.yfilter)) leaf_name_data.push_back(remote_vendor_oui_valid.get_name_leafdata());
    if (remote_revisionvalid.is_set || is_set(remote_revisionvalid.yfilter)) leaf_name_data.push_back(remote_revisionvalid.get_name_leafdata());
    if (remote_vendor_info_valid.is_set || is_set(remote_vendor_info_valid.yfilter)) leaf_name_data.push_back(remote_vendor_info_valid.get_name_leafdata());
    if (remote_mwd_key_valid.is_set || is_set(remote_mwd_key_valid.yfilter)) leaf_name_data.push_back(remote_mwd_key_valid.get_name_leafdata());
    if (received_at_risk_notification_timestamp.is_set || is_set(received_at_risk_notification_timestamp.yfilter)) leaf_name_data.push_back(received_at_risk_notification_timestamp.get_name_leafdata());
    if (received_at_risk_notification_time_remaining.is_set || is_set(received_at_risk_notification_time_remaining.yfilter)) leaf_name_data.push_back(received_at_risk_notification_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
        operational_status.value_namespace = name_space;
        operational_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mode")
    {
        local_mode = value;
        local_mode.value_namespace = name_space;
        local_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miswired")
    {
        miswired = value;
        miswired.value_namespace = name_space;
        miswired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mwd-key")
    {
        local_mwd_key = value;
        local_mwd_key.value_namespace = name_space;
        local_mwd_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-function-unidirectional")
    {
        local_function_unidirectional = value;
        local_function_unidirectional.value_namespace = name_space;
        local_function_unidirectional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-function-loopback")
    {
        local_function_loopback = value;
        local_function_loopback.value_namespace = name_space;
        local_function_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-function-event")
    {
        local_function_event = value;
        local_function_event.value_namespace = name_space;
        local_function_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-functionvariable")
    {
        local_functionvariable = value;
        local_functionvariable.value_namespace = name_space;
        local_functionvariable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-revision")
    {
        local_revision = value;
        local_revision.value_namespace = name_space;
        local_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mtu")
    {
        local_mtu = value;
        local_mtu.value_namespace = name_space;
        local_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-operational")
    {
        local_operational = value;
        local_operational.value_namespace = name_space;
        local_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-evaluating")
    {
        local_evaluating = value;
        local_evaluating.value_namespace = name_space;
        local_evaluating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mode")
    {
        remote_mode = value;
        remote_mode.value_namespace = name_space;
        remote_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-unidirectional")
    {
        remote_unidirectional = value;
        remote_unidirectional.value_namespace = name_space;
        remote_unidirectional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
        remote_loopback.value_namespace = name_space;
        remote_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-event")
    {
        remote_event = value;
        remote_event.value_namespace = name_space;
        remote_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-variable")
    {
        remote_variable = value;
        remote_variable.value_namespace = name_space;
        remote_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mtu")
    {
        remote_mtu = value;
        remote_mtu.value_namespace = name_space;
        remote_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-address")
    {
        remote_mac_address = value;
        remote_mac_address.value_namespace = name_space;
        remote_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vendor-oui")
    {
        remote_vendor_oui = value;
        remote_vendor_oui.value_namespace = name_space;
        remote_vendor_oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-revision")
    {
        remote_revision = value;
        remote_revision.value_namespace = name_space;
        remote_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vendor-info")
    {
        remote_vendor_info = value;
        remote_vendor_info.value_namespace = name_space;
        remote_vendor_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mwd-key")
    {
        remote_mwd_key = value;
        remote_mwd_key.value_namespace = name_space;
        remote_mwd_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status-valid")
    {
        operational_status_valid = value;
        operational_status_valid.value_namespace = name_space;
        operational_status_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode-valid")
    {
        loopback_mode_valid = value;
        loopback_mode_valid.value_namespace = name_space;
        loopback_mode_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mode-valid")
    {
        local_mode_valid = value;
        local_mode_valid.value_namespace = name_space;
        local_mode_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miswired-valid")
    {
        miswired_valid = value;
        miswired_valid.value_namespace = name_space;
        miswired_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mwd-key-valid")
    {
        local_mwd_key_valid = value;
        local_mwd_key_valid.value_namespace = name_space;
        local_mwd_key_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-function-unidirectional-valid")
    {
        local_function_unidirectional_valid = value;
        local_function_unidirectional_valid.value_namespace = name_space;
        local_function_unidirectional_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-function-loopback-valid")
    {
        local_function_loopback_valid = value;
        local_function_loopback_valid.value_namespace = name_space;
        local_function_loopback_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-function-event-valid")
    {
        local_function_event_valid = value;
        local_function_event_valid.value_namespace = name_space;
        local_function_event_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-functionvariable-valid")
    {
        local_functionvariable_valid = value;
        local_functionvariable_valid.value_namespace = name_space;
        local_functionvariable_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-revisionvalid")
    {
        local_revisionvalid = value;
        local_revisionvalid.value_namespace = name_space;
        local_revisionvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mtu-valid")
    {
        local_mtu_valid = value;
        local_mtu_valid.value_namespace = name_space;
        local_mtu_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mode-valid")
    {
        remote_mode_valid = value;
        remote_mode_valid.value_namespace = name_space;
        remote_mode_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-unidirectional-valid")
    {
        remote_unidirectional_valid = value;
        remote_unidirectional_valid.value_namespace = name_space;
        remote_unidirectional_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback-valid")
    {
        remote_loopback_valid = value;
        remote_loopback_valid.value_namespace = name_space;
        remote_loopback_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-event-valid")
    {
        remote_event_valid = value;
        remote_event_valid.value_namespace = name_space;
        remote_event_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-variable-valid")
    {
        remote_variable_valid = value;
        remote_variable_valid.value_namespace = name_space;
        remote_variable_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mtu-valid")
    {
        remote_mtu_valid = value;
        remote_mtu_valid.value_namespace = name_space;
        remote_mtu_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-address-valid")
    {
        remote_mac_address_valid = value;
        remote_mac_address_valid.value_namespace = name_space;
        remote_mac_address_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vendor-oui-valid")
    {
        remote_vendor_oui_valid = value;
        remote_vendor_oui_valid.value_namespace = name_space;
        remote_vendor_oui_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-revisionvalid")
    {
        remote_revisionvalid = value;
        remote_revisionvalid.value_namespace = name_space;
        remote_revisionvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vendor-info-valid")
    {
        remote_vendor_info_valid = value;
        remote_vendor_info_valid.value_namespace = name_space;
        remote_vendor_info_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mwd-key-valid")
    {
        remote_mwd_key_valid = value;
        remote_mwd_key_valid.value_namespace = name_space;
        remote_mwd_key_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-at-risk-notification-timestamp")
    {
        received_at_risk_notification_timestamp = value;
        received_at_risk_notification_timestamp.value_namespace = name_space;
        received_at_risk_notification_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-at-risk-notification-time-remaining")
    {
        received_at_risk_notification_time_remaining = value;
        received_at_risk_notification_time_remaining.value_namespace = name_space;
        received_at_risk_notification_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "local-mode")
    {
        local_mode.yfilter = yfilter;
    }
    if(value_path == "miswired")
    {
        miswired.yfilter = yfilter;
    }
    if(value_path == "local-mwd-key")
    {
        local_mwd_key.yfilter = yfilter;
    }
    if(value_path == "local-function-unidirectional")
    {
        local_function_unidirectional.yfilter = yfilter;
    }
    if(value_path == "local-function-loopback")
    {
        local_function_loopback.yfilter = yfilter;
    }
    if(value_path == "local-function-event")
    {
        local_function_event.yfilter = yfilter;
    }
    if(value_path == "local-functionvariable")
    {
        local_functionvariable.yfilter = yfilter;
    }
    if(value_path == "local-revision")
    {
        local_revision.yfilter = yfilter;
    }
    if(value_path == "local-mtu")
    {
        local_mtu.yfilter = yfilter;
    }
    if(value_path == "local-operational")
    {
        local_operational.yfilter = yfilter;
    }
    if(value_path == "local-evaluating")
    {
        local_evaluating.yfilter = yfilter;
    }
    if(value_path == "remote-mode")
    {
        remote_mode.yfilter = yfilter;
    }
    if(value_path == "remote-unidirectional")
    {
        remote_unidirectional.yfilter = yfilter;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback.yfilter = yfilter;
    }
    if(value_path == "remote-event")
    {
        remote_event.yfilter = yfilter;
    }
    if(value_path == "remote-variable")
    {
        remote_variable.yfilter = yfilter;
    }
    if(value_path == "remote-mtu")
    {
        remote_mtu.yfilter = yfilter;
    }
    if(value_path == "remote-mac-address")
    {
        remote_mac_address.yfilter = yfilter;
    }
    if(value_path == "remote-vendor-oui")
    {
        remote_vendor_oui.yfilter = yfilter;
    }
    if(value_path == "remote-revision")
    {
        remote_revision.yfilter = yfilter;
    }
    if(value_path == "remote-vendor-info")
    {
        remote_vendor_info.yfilter = yfilter;
    }
    if(value_path == "remote-mwd-key")
    {
        remote_mwd_key.yfilter = yfilter;
    }
    if(value_path == "operational-status-valid")
    {
        operational_status_valid.yfilter = yfilter;
    }
    if(value_path == "loopback-mode-valid")
    {
        loopback_mode_valid.yfilter = yfilter;
    }
    if(value_path == "local-mode-valid")
    {
        local_mode_valid.yfilter = yfilter;
    }
    if(value_path == "miswired-valid")
    {
        miswired_valid.yfilter = yfilter;
    }
    if(value_path == "local-mwd-key-valid")
    {
        local_mwd_key_valid.yfilter = yfilter;
    }
    if(value_path == "local-function-unidirectional-valid")
    {
        local_function_unidirectional_valid.yfilter = yfilter;
    }
    if(value_path == "local-function-loopback-valid")
    {
        local_function_loopback_valid.yfilter = yfilter;
    }
    if(value_path == "local-function-event-valid")
    {
        local_function_event_valid.yfilter = yfilter;
    }
    if(value_path == "local-functionvariable-valid")
    {
        local_functionvariable_valid.yfilter = yfilter;
    }
    if(value_path == "local-revisionvalid")
    {
        local_revisionvalid.yfilter = yfilter;
    }
    if(value_path == "local-mtu-valid")
    {
        local_mtu_valid.yfilter = yfilter;
    }
    if(value_path == "remote-mode-valid")
    {
        remote_mode_valid.yfilter = yfilter;
    }
    if(value_path == "remote-unidirectional-valid")
    {
        remote_unidirectional_valid.yfilter = yfilter;
    }
    if(value_path == "remote-loopback-valid")
    {
        remote_loopback_valid.yfilter = yfilter;
    }
    if(value_path == "remote-event-valid")
    {
        remote_event_valid.yfilter = yfilter;
    }
    if(value_path == "remote-variable-valid")
    {
        remote_variable_valid.yfilter = yfilter;
    }
    if(value_path == "remote-mtu-valid")
    {
        remote_mtu_valid.yfilter = yfilter;
    }
    if(value_path == "remote-mac-address-valid")
    {
        remote_mac_address_valid.yfilter = yfilter;
    }
    if(value_path == "remote-vendor-oui-valid")
    {
        remote_vendor_oui_valid.yfilter = yfilter;
    }
    if(value_path == "remote-revisionvalid")
    {
        remote_revisionvalid.yfilter = yfilter;
    }
    if(value_path == "remote-vendor-info-valid")
    {
        remote_vendor_info_valid.yfilter = yfilter;
    }
    if(value_path == "remote-mwd-key-valid")
    {
        remote_mwd_key_valid.yfilter = yfilter;
    }
    if(value_path == "received-at-risk-notification-timestamp")
    {
        received_at_risk_notification_timestamp.yfilter = yfilter;
    }
    if(value_path == "received-at-risk-notification-time-remaining")
    {
        received_at_risk_notification_time_remaining.yfilter = yfilter;
    }
}

bool EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface" || name == "name" || name == "operational-status" || name == "loopback-mode" || name == "local-mode" || name == "miswired" || name == "local-mwd-key" || name == "local-function-unidirectional" || name == "local-function-loopback" || name == "local-function-event" || name == "local-functionvariable" || name == "local-revision" || name == "local-mtu" || name == "local-operational" || name == "local-evaluating" || name == "remote-mode" || name == "remote-unidirectional" || name == "remote-loopback" || name == "remote-event" || name == "remote-variable" || name == "remote-mtu" || name == "remote-mac-address" || name == "remote-vendor-oui" || name == "remote-revision" || name == "remote-vendor-info" || name == "remote-mwd-key" || name == "operational-status-valid" || name == "loopback-mode-valid" || name == "local-mode-valid" || name == "miswired-valid" || name == "local-mwd-key-valid" || name == "local-function-unidirectional-valid" || name == "local-function-loopback-valid" || name == "local-function-event-valid" || name == "local-functionvariable-valid" || name == "local-revisionvalid" || name == "local-mtu-valid" || name == "remote-mode-valid" || name == "remote-unidirectional-valid" || name == "remote-loopback-valid" || name == "remote-event-valid" || name == "remote-variable-valid" || name == "remote-mtu-valid" || name == "remote-mac-address-valid" || name == "remote-vendor-oui-valid" || name == "remote-revisionvalid" || name == "remote-vendor-info-valid" || name == "remote-mwd-key-valid" || name == "received-at-risk-notification-timestamp" || name == "received-at-risk-notification-time-remaining")
        return true;
    return false;
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterfaces()
    :
    interface_state_interface(this, {"member_interface"})
{

    yang_name = "interface-state-interfaces"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::InterfaceStateInterfaces::~InterfaceStateInterfaces()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_state_interface.len(); index++)
    {
        if(interface_state_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::InterfaceStateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<interface_state_interface.len(); index++)
    {
        if(interface_state_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::InterfaceStateInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::InterfaceStateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::InterfaceStateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::InterfaceStateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-interface")
    {
        auto ent_ = std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface>();
        ent_->parent = this;
        interface_state_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::InterfaceStateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_state_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLinkOam::InterfaceStateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::InterfaceStateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::InterfaceStateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-state-interface")
        return true;
    return false;
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::InterfaceStateInterface()
    :
    member_interface{YType::str, "member-interface"},
    protocol_code{YType::enumeration, "protocol-code"},
    rx_fault{YType::boolean, "rx-fault"},
    local_mwd_key{YType::uint32, "local-mwd-key"},
    remote_mwd_key_present{YType::boolean, "remote-mwd-key-present"},
    remote_mwd_key{YType::uint32, "remote-mwd-key"}
        ,
    errors(std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors>())
    , efd_triggers(std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers>())
{
    errors->parent = this;
    efd_triggers->parent = this;

    yang_name = "interface-state-interface"; yang_parent_name = "interface-state-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::~InterfaceStateInterface()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| protocol_code.is_set
	|| rx_fault.is_set
	|| local_mwd_key.is_set
	|| remote_mwd_key_present.is_set
	|| remote_mwd_key.is_set
	|| (errors !=  nullptr && errors->has_data())
	|| (efd_triggers !=  nullptr && efd_triggers->has_data());
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(protocol_code.yfilter)
	|| ydk::is_set(rx_fault.yfilter)
	|| ydk::is_set(local_mwd_key.yfilter)
	|| ydk::is_set(remote_mwd_key_present.yfilter)
	|| ydk::is_set(remote_mwd_key.yfilter)
	|| (errors !=  nullptr && errors->has_operation())
	|| (efd_triggers !=  nullptr && efd_triggers->has_operation());
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/interface-state-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-interface";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (protocol_code.is_set || is_set(protocol_code.yfilter)) leaf_name_data.push_back(protocol_code.get_name_leafdata());
    if (rx_fault.is_set || is_set(rx_fault.yfilter)) leaf_name_data.push_back(rx_fault.get_name_leafdata());
    if (local_mwd_key.is_set || is_set(local_mwd_key.yfilter)) leaf_name_data.push_back(local_mwd_key.get_name_leafdata());
    if (remote_mwd_key_present.is_set || is_set(remote_mwd_key_present.yfilter)) leaf_name_data.push_back(remote_mwd_key_present.get_name_leafdata());
    if (remote_mwd_key.is_set || is_set(remote_mwd_key.yfilter)) leaf_name_data.push_back(remote_mwd_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "efd-triggers")
    {
        if(efd_triggers == nullptr)
        {
            efd_triggers = std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers>();
        }
        return efd_triggers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(errors != nullptr)
    {
        _children["errors"] = errors;
    }

    if(efd_triggers != nullptr)
    {
        _children["efd-triggers"] = efd_triggers;
    }

    return _children;
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-code")
    {
        protocol_code = value;
        protocol_code.value_namespace = name_space;
        protocol_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-fault")
    {
        rx_fault = value;
        rx_fault.value_namespace = name_space;
        rx_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mwd-key")
    {
        local_mwd_key = value;
        local_mwd_key.value_namespace = name_space;
        local_mwd_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mwd-key-present")
    {
        remote_mwd_key_present = value;
        remote_mwd_key_present.value_namespace = name_space;
        remote_mwd_key_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mwd-key")
    {
        remote_mwd_key = value;
        remote_mwd_key.value_namespace = name_space;
        remote_mwd_key.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "protocol-code")
    {
        protocol_code.yfilter = yfilter;
    }
    if(value_path == "rx-fault")
    {
        rx_fault.yfilter = yfilter;
    }
    if(value_path == "local-mwd-key")
    {
        local_mwd_key.yfilter = yfilter;
    }
    if(value_path == "remote-mwd-key-present")
    {
        remote_mwd_key_present.yfilter = yfilter;
    }
    if(value_path == "remote-mwd-key")
    {
        remote_mwd_key.yfilter = yfilter;
    }
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errors" || name == "efd-triggers" || name == "member-interface" || name == "protocol-code" || name == "rx-fault" || name == "local-mwd-key" || name == "remote-mwd-key-present" || name == "remote-mwd-key")
        return true;
    return false;
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::Errors()
    :
    pfi_reason{YType::str, "pfi-reason"},
    pfi_error_code{YType::uint32, "pfi-error-code"},
    platform_reason{YType::str, "platform-reason"},
    platform_error_code{YType::uint32, "platform-error-code"},
    spio_reason{YType::str, "spio-reason"},
    spio_error_code{YType::uint32, "spio-error-code"},
    epi_reason{YType::str, "epi-reason"},
    epi_error_code{YType::uint32, "epi-error-code"},
    caps_add_reason{YType::str, "caps-add-reason"},
    caps_add_error_code{YType::uint32, "caps-add-error-code"}
{

    yang_name = "errors"; yang_parent_name = "interface-state-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::~Errors()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::has_data() const
{
    if (is_presence_container) return true;
    return pfi_reason.is_set
	|| pfi_error_code.is_set
	|| platform_reason.is_set
	|| platform_error_code.is_set
	|| spio_reason.is_set
	|| spio_error_code.is_set
	|| epi_reason.is_set
	|| epi_error_code.is_set
	|| caps_add_reason.is_set
	|| caps_add_error_code.is_set;
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfi_reason.yfilter)
	|| ydk::is_set(pfi_error_code.yfilter)
	|| ydk::is_set(platform_reason.yfilter)
	|| ydk::is_set(platform_error_code.yfilter)
	|| ydk::is_set(spio_reason.yfilter)
	|| ydk::is_set(spio_error_code.yfilter)
	|| ydk::is_set(epi_reason.yfilter)
	|| ydk::is_set(epi_error_code.yfilter)
	|| ydk::is_set(caps_add_reason.yfilter)
	|| ydk::is_set(caps_add_error_code.yfilter);
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfi_reason.is_set || is_set(pfi_reason.yfilter)) leaf_name_data.push_back(pfi_reason.get_name_leafdata());
    if (pfi_error_code.is_set || is_set(pfi_error_code.yfilter)) leaf_name_data.push_back(pfi_error_code.get_name_leafdata());
    if (platform_reason.is_set || is_set(platform_reason.yfilter)) leaf_name_data.push_back(platform_reason.get_name_leafdata());
    if (platform_error_code.is_set || is_set(platform_error_code.yfilter)) leaf_name_data.push_back(platform_error_code.get_name_leafdata());
    if (spio_reason.is_set || is_set(spio_reason.yfilter)) leaf_name_data.push_back(spio_reason.get_name_leafdata());
    if (spio_error_code.is_set || is_set(spio_error_code.yfilter)) leaf_name_data.push_back(spio_error_code.get_name_leafdata());
    if (epi_reason.is_set || is_set(epi_reason.yfilter)) leaf_name_data.push_back(epi_reason.get_name_leafdata());
    if (epi_error_code.is_set || is_set(epi_error_code.yfilter)) leaf_name_data.push_back(epi_error_code.get_name_leafdata());
    if (caps_add_reason.is_set || is_set(caps_add_reason.yfilter)) leaf_name_data.push_back(caps_add_reason.get_name_leafdata());
    if (caps_add_error_code.is_set || is_set(caps_add_error_code.yfilter)) leaf_name_data.push_back(caps_add_error_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfi-reason")
    {
        pfi_reason = value;
        pfi_reason.value_namespace = name_space;
        pfi_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfi-error-code")
    {
        pfi_error_code = value;
        pfi_error_code.value_namespace = name_space;
        pfi_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-reason")
    {
        platform_reason = value;
        platform_reason.value_namespace = name_space;
        platform_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-error-code")
    {
        platform_error_code = value;
        platform_error_code.value_namespace = name_space;
        platform_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spio-reason")
    {
        spio_reason = value;
        spio_reason.value_namespace = name_space;
        spio_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spio-error-code")
    {
        spio_error_code = value;
        spio_error_code.value_namespace = name_space;
        spio_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epi-reason")
    {
        epi_reason = value;
        epi_reason.value_namespace = name_space;
        epi_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epi-error-code")
    {
        epi_error_code = value;
        epi_error_code.value_namespace = name_space;
        epi_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caps-add-reason")
    {
        caps_add_reason = value;
        caps_add_reason.value_namespace = name_space;
        caps_add_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caps-add-error-code")
    {
        caps_add_error_code = value;
        caps_add_error_code.value_namespace = name_space;
        caps_add_error_code.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfi-reason")
    {
        pfi_reason.yfilter = yfilter;
    }
    if(value_path == "pfi-error-code")
    {
        pfi_error_code.yfilter = yfilter;
    }
    if(value_path == "platform-reason")
    {
        platform_reason.yfilter = yfilter;
    }
    if(value_path == "platform-error-code")
    {
        platform_error_code.yfilter = yfilter;
    }
    if(value_path == "spio-reason")
    {
        spio_reason.yfilter = yfilter;
    }
    if(value_path == "spio-error-code")
    {
        spio_error_code.yfilter = yfilter;
    }
    if(value_path == "epi-reason")
    {
        epi_reason.yfilter = yfilter;
    }
    if(value_path == "epi-error-code")
    {
        epi_error_code.yfilter = yfilter;
    }
    if(value_path == "caps-add-reason")
    {
        caps_add_reason.yfilter = yfilter;
    }
    if(value_path == "caps-add-error-code")
    {
        caps_add_error_code.yfilter = yfilter;
    }
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfi-reason" || name == "pfi-error-code" || name == "platform-reason" || name == "platform-error-code" || name == "spio-reason" || name == "spio-error-code" || name == "epi-reason" || name == "epi-error-code" || name == "caps-add-reason" || name == "caps-add-error-code")
        return true;
    return false;
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::EfdTriggers()
    :
    link_fault_received{YType::boolean, "link-fault-received"},
    discovery_timed_out{YType::boolean, "discovery-timed-out"},
    capabilities_conflict{YType::boolean, "capabilities-conflict"},
    wiring_conflict{YType::boolean, "wiring-conflict"},
    session_down{YType::boolean, "session-down"}
{

    yang_name = "efd-triggers"; yang_parent_name = "interface-state-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::~EfdTriggers()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::has_data() const
{
    if (is_presence_container) return true;
    return link_fault_received.is_set
	|| discovery_timed_out.is_set
	|| capabilities_conflict.is_set
	|| wiring_conflict.is_set
	|| session_down.is_set;
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_fault_received.yfilter)
	|| ydk::is_set(discovery_timed_out.yfilter)
	|| ydk::is_set(capabilities_conflict.yfilter)
	|| ydk::is_set(wiring_conflict.yfilter)
	|| ydk::is_set(session_down.yfilter);
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "efd-triggers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_fault_received.is_set || is_set(link_fault_received.yfilter)) leaf_name_data.push_back(link_fault_received.get_name_leafdata());
    if (discovery_timed_out.is_set || is_set(discovery_timed_out.yfilter)) leaf_name_data.push_back(discovery_timed_out.get_name_leafdata());
    if (capabilities_conflict.is_set || is_set(capabilities_conflict.yfilter)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.yfilter)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.yfilter)) leaf_name_data.push_back(session_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-fault-received")
    {
        link_fault_received = value;
        link_fault_received.value_namespace = name_space;
        link_fault_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timed-out")
    {
        discovery_timed_out = value;
        discovery_timed_out.value_namespace = name_space;
        discovery_timed_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
        capabilities_conflict.value_namespace = name_space;
        capabilities_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
        wiring_conflict.value_namespace = name_space;
        wiring_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down")
    {
        session_down = value;
        session_down.value_namespace = name_space;
        session_down.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-fault-received")
    {
        link_fault_received.yfilter = yfilter;
    }
    if(value_path == "discovery-timed-out")
    {
        discovery_timed_out.yfilter = yfilter;
    }
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict.yfilter = yfilter;
    }
    if(value_path == "session-down")
    {
        session_down.yfilter = yfilter;
    }
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-fault-received" || name == "discovery-timed-out" || name == "capabilities-conflict" || name == "wiring-conflict" || name == "session-down")
        return true;
    return false;
}

EtherLinkOam::RunningConfigInterfaces::RunningConfigInterfaces()
    :
    running_config_interface(this, {"member_interface"})
{

    yang_name = "running-config-interfaces"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::RunningConfigInterfaces::~RunningConfigInterfaces()
{
}

bool EtherLinkOam::RunningConfigInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<running_config_interface.len(); index++)
    {
        if(running_config_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::RunningConfigInterfaces::has_operation() const
{
    for (std::size_t index=0; index<running_config_interface.len(); index++)
    {
        if(running_config_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::RunningConfigInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::RunningConfigInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-config-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::RunningConfigInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::RunningConfigInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-config-interface")
    {
        auto ent_ = std::make_shared<EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface>();
        ent_->parent = this;
        running_config_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::RunningConfigInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : running_config_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLinkOam::RunningConfigInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::RunningConfigInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::RunningConfigInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-config-interface")
        return true;
    return false;
}

EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::RunningConfigInterface()
    :
    member_interface{YType::str, "member-interface"},
    fast_hello_interval_enabled{YType::boolean, "fast-hello-interval-enabled"},
    link_monitor_enabled{YType::boolean, "link-monitor-enabled"},
    remote_loopback_enabled{YType::boolean, "remote-loopback-enabled"},
    mib_retrieval_enabled{YType::boolean, "mib-retrieval-enabled"},
    udlf_enabled{YType::boolean, "udlf-enabled"},
    mode{YType::enumeration, "mode"},
    connection_timeout{YType::uint8, "connection-timeout"},
    symbol_period_window{YType::uint32, "symbol-period-window"},
    symbol_period_window_units{YType::uint8, "symbol-period-window-units"},
    symbol_period_window_multiplier{YType::uint8, "symbol-period-window-multiplier"},
    symbol_period_threshold_low{YType::uint64, "symbol-period-threshold-low"},
    symbol_period_threshold_high{YType::uint64, "symbol-period-threshold-high"},
    symbol_period_threshold_units{YType::uint8, "symbol-period-threshold-units"},
    symbol_period_threshold_low_multiplier{YType::uint8, "symbol-period-threshold-low-multiplier"},
    symbol_period_threshold_high_multiplier{YType::uint8, "symbol-period-threshold-high-multiplier"},
    frame_window{YType::uint32, "frame-window"},
    frame_threshold_low{YType::uint64, "frame-threshold-low"},
    frame_threshold_high{YType::uint64, "frame-threshold-high"},
    frame_threshold_low_multiplier{YType::uint8, "frame-threshold-low-multiplier"},
    frame_threshold_high_multiplier{YType::uint8, "frame-threshold-high-multiplier"},
    frame_period_window{YType::uint32, "frame-period-window"},
    frame_period_window_units{YType::uint8, "frame-period-window-units"},
    frame_period_window_multiplier{YType::uint8, "frame-period-window-multiplier"},
    frame_period_threshold_low{YType::uint64, "frame-period-threshold-low"},
    frame_period_threshold_high{YType::uint64, "frame-period-threshold-high"},
    frame_period_threshold_units{YType::uint8, "frame-period-threshold-units"},
    frame_period_threshold_low_multiplier{YType::uint8, "frame-period-threshold-low-multiplier"},
    frame_period_threshold_high_multiplier{YType::uint8, "frame-period-threshold-high-multiplier"},
    frame_seconds_window{YType::uint32, "frame-seconds-window"},
    frame_seconds_threshold_low{YType::uint64, "frame-seconds-threshold-low"},
    frame_seconds_threshold_high{YType::uint64, "frame-seconds-threshold-high"},
    high_threshold_action{YType::enumeration, "high-threshold-action"},
    link_fault_action{YType::enumeration, "link-fault-action"},
    dying_gasp_action{YType::enumeration, "dying-gasp-action"},
    critical_event_action{YType::enumeration, "critical-event-action"},
    discovery_timeout_action{YType::enumeration, "discovery-timeout-action"},
    capabilities_conflict_action{YType::enumeration, "capabilities-conflict-action"},
    wiring_conflict_action{YType::enumeration, "wiring-conflict-action"},
    session_up_action{YType::enumeration, "session-up-action"},
    session_down_action{YType::enumeration, "session-down-action"},
    remote_loopback_action{YType::enumeration, "remote-loopback-action"},
    require_remote_mode{YType::enumeration, "require-remote-mode"},
    require_remote_mib_retrieval{YType::boolean, "require-remote-mib-retrieval"},
    require_loopback{YType::boolean, "require-loopback"},
    require_link_monitoring{YType::boolean, "require-link-monitoring"},
    fast_hello_interval_enabled_overridden{YType::boolean, "fast-hello-interval-enabled-overridden"},
    link_monitoring_enabled_overridden{YType::boolean, "link-monitoring-enabled-overridden"},
    remote_loopback_enabled_overridden{YType::boolean, "remote-loopback-enabled-overridden"},
    mib_retrieval_enabled_overridden{YType::boolean, "mib-retrieval-enabled-overridden"},
    udlf_enabled_overridden{YType::boolean, "udlf-enabled-overridden"},
    mode_overridden{YType::boolean, "mode-overridden"},
    connection_timeout_overridden{YType::boolean, "connection-timeout-overridden"},
    symbol_period_window_overridden{YType::boolean, "symbol-period-window-overridden"},
    symbol_period_threshold_low_overridden{YType::boolean, "symbol-period-threshold-low-overridden"},
    symbol_period_threshold_high_overridden{YType::boolean, "symbol-period-threshold-high-overridden"},
    frame_window_overridden{YType::boolean, "frame-window-overridden"},
    frame_threshold_low_overridden{YType::boolean, "frame-threshold-low-overridden"},
    frame_threshold_high_overridden{YType::boolean, "frame-threshold-high-overridden"},
    frame_period_window_overridden{YType::boolean, "frame-period-window-overridden"},
    frame_period_threshold_low_overridden{YType::boolean, "frame-period-threshold-low-overridden"},
    frame_period_threshold_high_overridden{YType::boolean, "frame-period-threshold-high-overridden"},
    frame_seconds_window_overridden{YType::boolean, "frame-seconds-window-overridden"},
    frame_seconds_threshold_low_overridden{YType::boolean, "frame-seconds-threshold-low-overridden"},
    frame_seconds_threshold_high_overridden{YType::boolean, "frame-seconds-threshold-high-overridden"},
    high_threshold_action_overridden{YType::boolean, "high-threshold-action-overridden"},
    link_fault_action_overridden{YType::boolean, "link-fault-action-overridden"},
    dying_gasp_action_overridden{YType::boolean, "dying-gasp-action-overridden"},
    critical_event_action_overridden{YType::boolean, "critical-event-action-overridden"},
    discovery_timeout_action_overridden{YType::boolean, "discovery-timeout-action-overridden"},
    capabilities_conflict_action_overridden{YType::boolean, "capabilities-conflict-action-overridden"},
    wiring_conflict_action_overridden{YType::boolean, "wiring-conflict-action-overridden"},
    session_down_action_overridden{YType::boolean, "session-down-action-overridden"},
    session_up_action_overridden{YType::boolean, "session-up-action-overridden"},
    remote_loopback_action_overridden{YType::boolean, "remote-loopback-action-overridden"},
    require_mode_overridden{YType::boolean, "require-mode-overridden"},
    require_mib_retrieval_overridden{YType::boolean, "require-mib-retrieval-overridden"},
    require_loopback_overridden{YType::boolean, "require-loopback-overridden"},
    require_link_monitoring_overridden{YType::boolean, "require-link-monitoring-overridden"}
{

    yang_name = "running-config-interface"; yang_parent_name = "running-config-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::~RunningConfigInterface()
{
}

bool EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| fast_hello_interval_enabled.is_set
	|| link_monitor_enabled.is_set
	|| remote_loopback_enabled.is_set
	|| mib_retrieval_enabled.is_set
	|| udlf_enabled.is_set
	|| mode.is_set
	|| connection_timeout.is_set
	|| symbol_period_window.is_set
	|| symbol_period_window_units.is_set
	|| symbol_period_window_multiplier.is_set
	|| symbol_period_threshold_low.is_set
	|| symbol_period_threshold_high.is_set
	|| symbol_period_threshold_units.is_set
	|| symbol_period_threshold_low_multiplier.is_set
	|| symbol_period_threshold_high_multiplier.is_set
	|| frame_window.is_set
	|| frame_threshold_low.is_set
	|| frame_threshold_high.is_set
	|| frame_threshold_low_multiplier.is_set
	|| frame_threshold_high_multiplier.is_set
	|| frame_period_window.is_set
	|| frame_period_window_units.is_set
	|| frame_period_window_multiplier.is_set
	|| frame_period_threshold_low.is_set
	|| frame_period_threshold_high.is_set
	|| frame_period_threshold_units.is_set
	|| frame_period_threshold_low_multiplier.is_set
	|| frame_period_threshold_high_multiplier.is_set
	|| frame_seconds_window.is_set
	|| frame_seconds_threshold_low.is_set
	|| frame_seconds_threshold_high.is_set
	|| high_threshold_action.is_set
	|| link_fault_action.is_set
	|| dying_gasp_action.is_set
	|| critical_event_action.is_set
	|| discovery_timeout_action.is_set
	|| capabilities_conflict_action.is_set
	|| wiring_conflict_action.is_set
	|| session_up_action.is_set
	|| session_down_action.is_set
	|| remote_loopback_action.is_set
	|| require_remote_mode.is_set
	|| require_remote_mib_retrieval.is_set
	|| require_loopback.is_set
	|| require_link_monitoring.is_set
	|| fast_hello_interval_enabled_overridden.is_set
	|| link_monitoring_enabled_overridden.is_set
	|| remote_loopback_enabled_overridden.is_set
	|| mib_retrieval_enabled_overridden.is_set
	|| udlf_enabled_overridden.is_set
	|| mode_overridden.is_set
	|| connection_timeout_overridden.is_set
	|| symbol_period_window_overridden.is_set
	|| symbol_period_threshold_low_overridden.is_set
	|| symbol_period_threshold_high_overridden.is_set
	|| frame_window_overridden.is_set
	|| frame_threshold_low_overridden.is_set
	|| frame_threshold_high_overridden.is_set
	|| frame_period_window_overridden.is_set
	|| frame_period_threshold_low_overridden.is_set
	|| frame_period_threshold_high_overridden.is_set
	|| frame_seconds_window_overridden.is_set
	|| frame_seconds_threshold_low_overridden.is_set
	|| frame_seconds_threshold_high_overridden.is_set
	|| high_threshold_action_overridden.is_set
	|| link_fault_action_overridden.is_set
	|| dying_gasp_action_overridden.is_set
	|| critical_event_action_overridden.is_set
	|| discovery_timeout_action_overridden.is_set
	|| capabilities_conflict_action_overridden.is_set
	|| wiring_conflict_action_overridden.is_set
	|| session_down_action_overridden.is_set
	|| session_up_action_overridden.is_set
	|| remote_loopback_action_overridden.is_set
	|| require_mode_overridden.is_set
	|| require_mib_retrieval_overridden.is_set
	|| require_loopback_overridden.is_set
	|| require_link_monitoring_overridden.is_set;
}

bool EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(fast_hello_interval_enabled.yfilter)
	|| ydk::is_set(link_monitor_enabled.yfilter)
	|| ydk::is_set(remote_loopback_enabled.yfilter)
	|| ydk::is_set(mib_retrieval_enabled.yfilter)
	|| ydk::is_set(udlf_enabled.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(connection_timeout.yfilter)
	|| ydk::is_set(symbol_period_window.yfilter)
	|| ydk::is_set(symbol_period_window_units.yfilter)
	|| ydk::is_set(symbol_period_window_multiplier.yfilter)
	|| ydk::is_set(symbol_period_threshold_low.yfilter)
	|| ydk::is_set(symbol_period_threshold_high.yfilter)
	|| ydk::is_set(symbol_period_threshold_units.yfilter)
	|| ydk::is_set(symbol_period_threshold_low_multiplier.yfilter)
	|| ydk::is_set(symbol_period_threshold_high_multiplier.yfilter)
	|| ydk::is_set(frame_window.yfilter)
	|| ydk::is_set(frame_threshold_low.yfilter)
	|| ydk::is_set(frame_threshold_high.yfilter)
	|| ydk::is_set(frame_threshold_low_multiplier.yfilter)
	|| ydk::is_set(frame_threshold_high_multiplier.yfilter)
	|| ydk::is_set(frame_period_window.yfilter)
	|| ydk::is_set(frame_period_window_units.yfilter)
	|| ydk::is_set(frame_period_window_multiplier.yfilter)
	|| ydk::is_set(frame_period_threshold_low.yfilter)
	|| ydk::is_set(frame_period_threshold_high.yfilter)
	|| ydk::is_set(frame_period_threshold_units.yfilter)
	|| ydk::is_set(frame_period_threshold_low_multiplier.yfilter)
	|| ydk::is_set(frame_period_threshold_high_multiplier.yfilter)
	|| ydk::is_set(frame_seconds_window.yfilter)
	|| ydk::is_set(frame_seconds_threshold_low.yfilter)
	|| ydk::is_set(frame_seconds_threshold_high.yfilter)
	|| ydk::is_set(high_threshold_action.yfilter)
	|| ydk::is_set(link_fault_action.yfilter)
	|| ydk::is_set(dying_gasp_action.yfilter)
	|| ydk::is_set(critical_event_action.yfilter)
	|| ydk::is_set(discovery_timeout_action.yfilter)
	|| ydk::is_set(capabilities_conflict_action.yfilter)
	|| ydk::is_set(wiring_conflict_action.yfilter)
	|| ydk::is_set(session_up_action.yfilter)
	|| ydk::is_set(session_down_action.yfilter)
	|| ydk::is_set(remote_loopback_action.yfilter)
	|| ydk::is_set(require_remote_mode.yfilter)
	|| ydk::is_set(require_remote_mib_retrieval.yfilter)
	|| ydk::is_set(require_loopback.yfilter)
	|| ydk::is_set(require_link_monitoring.yfilter)
	|| ydk::is_set(fast_hello_interval_enabled_overridden.yfilter)
	|| ydk::is_set(link_monitoring_enabled_overridden.yfilter)
	|| ydk::is_set(remote_loopback_enabled_overridden.yfilter)
	|| ydk::is_set(mib_retrieval_enabled_overridden.yfilter)
	|| ydk::is_set(udlf_enabled_overridden.yfilter)
	|| ydk::is_set(mode_overridden.yfilter)
	|| ydk::is_set(connection_timeout_overridden.yfilter)
	|| ydk::is_set(symbol_period_window_overridden.yfilter)
	|| ydk::is_set(symbol_period_threshold_low_overridden.yfilter)
	|| ydk::is_set(symbol_period_threshold_high_overridden.yfilter)
	|| ydk::is_set(frame_window_overridden.yfilter)
	|| ydk::is_set(frame_threshold_low_overridden.yfilter)
	|| ydk::is_set(frame_threshold_high_overridden.yfilter)
	|| ydk::is_set(frame_period_window_overridden.yfilter)
	|| ydk::is_set(frame_period_threshold_low_overridden.yfilter)
	|| ydk::is_set(frame_period_threshold_high_overridden.yfilter)
	|| ydk::is_set(frame_seconds_window_overridden.yfilter)
	|| ydk::is_set(frame_seconds_threshold_low_overridden.yfilter)
	|| ydk::is_set(frame_seconds_threshold_high_overridden.yfilter)
	|| ydk::is_set(high_threshold_action_overridden.yfilter)
	|| ydk::is_set(link_fault_action_overridden.yfilter)
	|| ydk::is_set(dying_gasp_action_overridden.yfilter)
	|| ydk::is_set(critical_event_action_overridden.yfilter)
	|| ydk::is_set(discovery_timeout_action_overridden.yfilter)
	|| ydk::is_set(capabilities_conflict_action_overridden.yfilter)
	|| ydk::is_set(wiring_conflict_action_overridden.yfilter)
	|| ydk::is_set(session_down_action_overridden.yfilter)
	|| ydk::is_set(session_up_action_overridden.yfilter)
	|| ydk::is_set(remote_loopback_action_overridden.yfilter)
	|| ydk::is_set(require_mode_overridden.yfilter)
	|| ydk::is_set(require_mib_retrieval_overridden.yfilter)
	|| ydk::is_set(require_loopback_overridden.yfilter)
	|| ydk::is_set(require_link_monitoring_overridden.yfilter);
}

std::string EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/running-config-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-config-interface";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (fast_hello_interval_enabled.is_set || is_set(fast_hello_interval_enabled.yfilter)) leaf_name_data.push_back(fast_hello_interval_enabled.get_name_leafdata());
    if (link_monitor_enabled.is_set || is_set(link_monitor_enabled.yfilter)) leaf_name_data.push_back(link_monitor_enabled.get_name_leafdata());
    if (remote_loopback_enabled.is_set || is_set(remote_loopback_enabled.yfilter)) leaf_name_data.push_back(remote_loopback_enabled.get_name_leafdata());
    if (mib_retrieval_enabled.is_set || is_set(mib_retrieval_enabled.yfilter)) leaf_name_data.push_back(mib_retrieval_enabled.get_name_leafdata());
    if (udlf_enabled.is_set || is_set(udlf_enabled.yfilter)) leaf_name_data.push_back(udlf_enabled.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (connection_timeout.is_set || is_set(connection_timeout.yfilter)) leaf_name_data.push_back(connection_timeout.get_name_leafdata());
    if (symbol_period_window.is_set || is_set(symbol_period_window.yfilter)) leaf_name_data.push_back(symbol_period_window.get_name_leafdata());
    if (symbol_period_window_units.is_set || is_set(symbol_period_window_units.yfilter)) leaf_name_data.push_back(symbol_period_window_units.get_name_leafdata());
    if (symbol_period_window_multiplier.is_set || is_set(symbol_period_window_multiplier.yfilter)) leaf_name_data.push_back(symbol_period_window_multiplier.get_name_leafdata());
    if (symbol_period_threshold_low.is_set || is_set(symbol_period_threshold_low.yfilter)) leaf_name_data.push_back(symbol_period_threshold_low.get_name_leafdata());
    if (symbol_period_threshold_high.is_set || is_set(symbol_period_threshold_high.yfilter)) leaf_name_data.push_back(symbol_period_threshold_high.get_name_leafdata());
    if (symbol_period_threshold_units.is_set || is_set(symbol_period_threshold_units.yfilter)) leaf_name_data.push_back(symbol_period_threshold_units.get_name_leafdata());
    if (symbol_period_threshold_low_multiplier.is_set || is_set(symbol_period_threshold_low_multiplier.yfilter)) leaf_name_data.push_back(symbol_period_threshold_low_multiplier.get_name_leafdata());
    if (symbol_period_threshold_high_multiplier.is_set || is_set(symbol_period_threshold_high_multiplier.yfilter)) leaf_name_data.push_back(symbol_period_threshold_high_multiplier.get_name_leafdata());
    if (frame_window.is_set || is_set(frame_window.yfilter)) leaf_name_data.push_back(frame_window.get_name_leafdata());
    if (frame_threshold_low.is_set || is_set(frame_threshold_low.yfilter)) leaf_name_data.push_back(frame_threshold_low.get_name_leafdata());
    if (frame_threshold_high.is_set || is_set(frame_threshold_high.yfilter)) leaf_name_data.push_back(frame_threshold_high.get_name_leafdata());
    if (frame_threshold_low_multiplier.is_set || is_set(frame_threshold_low_multiplier.yfilter)) leaf_name_data.push_back(frame_threshold_low_multiplier.get_name_leafdata());
    if (frame_threshold_high_multiplier.is_set || is_set(frame_threshold_high_multiplier.yfilter)) leaf_name_data.push_back(frame_threshold_high_multiplier.get_name_leafdata());
    if (frame_period_window.is_set || is_set(frame_period_window.yfilter)) leaf_name_data.push_back(frame_period_window.get_name_leafdata());
    if (frame_period_window_units.is_set || is_set(frame_period_window_units.yfilter)) leaf_name_data.push_back(frame_period_window_units.get_name_leafdata());
    if (frame_period_window_multiplier.is_set || is_set(frame_period_window_multiplier.yfilter)) leaf_name_data.push_back(frame_period_window_multiplier.get_name_leafdata());
    if (frame_period_threshold_low.is_set || is_set(frame_period_threshold_low.yfilter)) leaf_name_data.push_back(frame_period_threshold_low.get_name_leafdata());
    if (frame_period_threshold_high.is_set || is_set(frame_period_threshold_high.yfilter)) leaf_name_data.push_back(frame_period_threshold_high.get_name_leafdata());
    if (frame_period_threshold_units.is_set || is_set(frame_period_threshold_units.yfilter)) leaf_name_data.push_back(frame_period_threshold_units.get_name_leafdata());
    if (frame_period_threshold_low_multiplier.is_set || is_set(frame_period_threshold_low_multiplier.yfilter)) leaf_name_data.push_back(frame_period_threshold_low_multiplier.get_name_leafdata());
    if (frame_period_threshold_high_multiplier.is_set || is_set(frame_period_threshold_high_multiplier.yfilter)) leaf_name_data.push_back(frame_period_threshold_high_multiplier.get_name_leafdata());
    if (frame_seconds_window.is_set || is_set(frame_seconds_window.yfilter)) leaf_name_data.push_back(frame_seconds_window.get_name_leafdata());
    if (frame_seconds_threshold_low.is_set || is_set(frame_seconds_threshold_low.yfilter)) leaf_name_data.push_back(frame_seconds_threshold_low.get_name_leafdata());
    if (frame_seconds_threshold_high.is_set || is_set(frame_seconds_threshold_high.yfilter)) leaf_name_data.push_back(frame_seconds_threshold_high.get_name_leafdata());
    if (high_threshold_action.is_set || is_set(high_threshold_action.yfilter)) leaf_name_data.push_back(high_threshold_action.get_name_leafdata());
    if (link_fault_action.is_set || is_set(link_fault_action.yfilter)) leaf_name_data.push_back(link_fault_action.get_name_leafdata());
    if (dying_gasp_action.is_set || is_set(dying_gasp_action.yfilter)) leaf_name_data.push_back(dying_gasp_action.get_name_leafdata());
    if (critical_event_action.is_set || is_set(critical_event_action.yfilter)) leaf_name_data.push_back(critical_event_action.get_name_leafdata());
    if (discovery_timeout_action.is_set || is_set(discovery_timeout_action.yfilter)) leaf_name_data.push_back(discovery_timeout_action.get_name_leafdata());
    if (capabilities_conflict_action.is_set || is_set(capabilities_conflict_action.yfilter)) leaf_name_data.push_back(capabilities_conflict_action.get_name_leafdata());
    if (wiring_conflict_action.is_set || is_set(wiring_conflict_action.yfilter)) leaf_name_data.push_back(wiring_conflict_action.get_name_leafdata());
    if (session_up_action.is_set || is_set(session_up_action.yfilter)) leaf_name_data.push_back(session_up_action.get_name_leafdata());
    if (session_down_action.is_set || is_set(session_down_action.yfilter)) leaf_name_data.push_back(session_down_action.get_name_leafdata());
    if (remote_loopback_action.is_set || is_set(remote_loopback_action.yfilter)) leaf_name_data.push_back(remote_loopback_action.get_name_leafdata());
    if (require_remote_mode.is_set || is_set(require_remote_mode.yfilter)) leaf_name_data.push_back(require_remote_mode.get_name_leafdata());
    if (require_remote_mib_retrieval.is_set || is_set(require_remote_mib_retrieval.yfilter)) leaf_name_data.push_back(require_remote_mib_retrieval.get_name_leafdata());
    if (require_loopback.is_set || is_set(require_loopback.yfilter)) leaf_name_data.push_back(require_loopback.get_name_leafdata());
    if (require_link_monitoring.is_set || is_set(require_link_monitoring.yfilter)) leaf_name_data.push_back(require_link_monitoring.get_name_leafdata());
    if (fast_hello_interval_enabled_overridden.is_set || is_set(fast_hello_interval_enabled_overridden.yfilter)) leaf_name_data.push_back(fast_hello_interval_enabled_overridden.get_name_leafdata());
    if (link_monitoring_enabled_overridden.is_set || is_set(link_monitoring_enabled_overridden.yfilter)) leaf_name_data.push_back(link_monitoring_enabled_overridden.get_name_leafdata());
    if (remote_loopback_enabled_overridden.is_set || is_set(remote_loopback_enabled_overridden.yfilter)) leaf_name_data.push_back(remote_loopback_enabled_overridden.get_name_leafdata());
    if (mib_retrieval_enabled_overridden.is_set || is_set(mib_retrieval_enabled_overridden.yfilter)) leaf_name_data.push_back(mib_retrieval_enabled_overridden.get_name_leafdata());
    if (udlf_enabled_overridden.is_set || is_set(udlf_enabled_overridden.yfilter)) leaf_name_data.push_back(udlf_enabled_overridden.get_name_leafdata());
    if (mode_overridden.is_set || is_set(mode_overridden.yfilter)) leaf_name_data.push_back(mode_overridden.get_name_leafdata());
    if (connection_timeout_overridden.is_set || is_set(connection_timeout_overridden.yfilter)) leaf_name_data.push_back(connection_timeout_overridden.get_name_leafdata());
    if (symbol_period_window_overridden.is_set || is_set(symbol_period_window_overridden.yfilter)) leaf_name_data.push_back(symbol_period_window_overridden.get_name_leafdata());
    if (symbol_period_threshold_low_overridden.is_set || is_set(symbol_period_threshold_low_overridden.yfilter)) leaf_name_data.push_back(symbol_period_threshold_low_overridden.get_name_leafdata());
    if (symbol_period_threshold_high_overridden.is_set || is_set(symbol_period_threshold_high_overridden.yfilter)) leaf_name_data.push_back(symbol_period_threshold_high_overridden.get_name_leafdata());
    if (frame_window_overridden.is_set || is_set(frame_window_overridden.yfilter)) leaf_name_data.push_back(frame_window_overridden.get_name_leafdata());
    if (frame_threshold_low_overridden.is_set || is_set(frame_threshold_low_overridden.yfilter)) leaf_name_data.push_back(frame_threshold_low_overridden.get_name_leafdata());
    if (frame_threshold_high_overridden.is_set || is_set(frame_threshold_high_overridden.yfilter)) leaf_name_data.push_back(frame_threshold_high_overridden.get_name_leafdata());
    if (frame_period_window_overridden.is_set || is_set(frame_period_window_overridden.yfilter)) leaf_name_data.push_back(frame_period_window_overridden.get_name_leafdata());
    if (frame_period_threshold_low_overridden.is_set || is_set(frame_period_threshold_low_overridden.yfilter)) leaf_name_data.push_back(frame_period_threshold_low_overridden.get_name_leafdata());
    if (frame_period_threshold_high_overridden.is_set || is_set(frame_period_threshold_high_overridden.yfilter)) leaf_name_data.push_back(frame_period_threshold_high_overridden.get_name_leafdata());
    if (frame_seconds_window_overridden.is_set || is_set(frame_seconds_window_overridden.yfilter)) leaf_name_data.push_back(frame_seconds_window_overridden.get_name_leafdata());
    if (frame_seconds_threshold_low_overridden.is_set || is_set(frame_seconds_threshold_low_overridden.yfilter)) leaf_name_data.push_back(frame_seconds_threshold_low_overridden.get_name_leafdata());
    if (frame_seconds_threshold_high_overridden.is_set || is_set(frame_seconds_threshold_high_overridden.yfilter)) leaf_name_data.push_back(frame_seconds_threshold_high_overridden.get_name_leafdata());
    if (high_threshold_action_overridden.is_set || is_set(high_threshold_action_overridden.yfilter)) leaf_name_data.push_back(high_threshold_action_overridden.get_name_leafdata());
    if (link_fault_action_overridden.is_set || is_set(link_fault_action_overridden.yfilter)) leaf_name_data.push_back(link_fault_action_overridden.get_name_leafdata());
    if (dying_gasp_action_overridden.is_set || is_set(dying_gasp_action_overridden.yfilter)) leaf_name_data.push_back(dying_gasp_action_overridden.get_name_leafdata());
    if (critical_event_action_overridden.is_set || is_set(critical_event_action_overridden.yfilter)) leaf_name_data.push_back(critical_event_action_overridden.get_name_leafdata());
    if (discovery_timeout_action_overridden.is_set || is_set(discovery_timeout_action_overridden.yfilter)) leaf_name_data.push_back(discovery_timeout_action_overridden.get_name_leafdata());
    if (capabilities_conflict_action_overridden.is_set || is_set(capabilities_conflict_action_overridden.yfilter)) leaf_name_data.push_back(capabilities_conflict_action_overridden.get_name_leafdata());
    if (wiring_conflict_action_overridden.is_set || is_set(wiring_conflict_action_overridden.yfilter)) leaf_name_data.push_back(wiring_conflict_action_overridden.get_name_leafdata());
    if (session_down_action_overridden.is_set || is_set(session_down_action_overridden.yfilter)) leaf_name_data.push_back(session_down_action_overridden.get_name_leafdata());
    if (session_up_action_overridden.is_set || is_set(session_up_action_overridden.yfilter)) leaf_name_data.push_back(session_up_action_overridden.get_name_leafdata());
    if (remote_loopback_action_overridden.is_set || is_set(remote_loopback_action_overridden.yfilter)) leaf_name_data.push_back(remote_loopback_action_overridden.get_name_leafdata());
    if (require_mode_overridden.is_set || is_set(require_mode_overridden.yfilter)) leaf_name_data.push_back(require_mode_overridden.get_name_leafdata());
    if (require_mib_retrieval_overridden.is_set || is_set(require_mib_retrieval_overridden.yfilter)) leaf_name_data.push_back(require_mib_retrieval_overridden.get_name_leafdata());
    if (require_loopback_overridden.is_set || is_set(require_loopback_overridden.yfilter)) leaf_name_data.push_back(require_loopback_overridden.get_name_leafdata());
    if (require_link_monitoring_overridden.is_set || is_set(require_link_monitoring_overridden.yfilter)) leaf_name_data.push_back(require_link_monitoring_overridden.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-hello-interval-enabled")
    {
        fast_hello_interval_enabled = value;
        fast_hello_interval_enabled.value_namespace = name_space;
        fast_hello_interval_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitor-enabled")
    {
        link_monitor_enabled = value;
        link_monitor_enabled.value_namespace = name_space;
        link_monitor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback-enabled")
    {
        remote_loopback_enabled = value;
        remote_loopback_enabled.value_namespace = name_space;
        remote_loopback_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval-enabled")
    {
        mib_retrieval_enabled = value;
        mib_retrieval_enabled.value_namespace = name_space;
        mib_retrieval_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udlf-enabled")
    {
        udlf_enabled = value;
        udlf_enabled.value_namespace = name_space;
        udlf_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-timeout")
    {
        connection_timeout = value;
        connection_timeout.value_namespace = name_space;
        connection_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-window")
    {
        symbol_period_window = value;
        symbol_period_window.value_namespace = name_space;
        symbol_period_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-window-units")
    {
        symbol_period_window_units = value;
        symbol_period_window_units.value_namespace = name_space;
        symbol_period_window_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-window-multiplier")
    {
        symbol_period_window_multiplier = value;
        symbol_period_window_multiplier.value_namespace = name_space;
        symbol_period_window_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-low")
    {
        symbol_period_threshold_low = value;
        symbol_period_threshold_low.value_namespace = name_space;
        symbol_period_threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-high")
    {
        symbol_period_threshold_high = value;
        symbol_period_threshold_high.value_namespace = name_space;
        symbol_period_threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-units")
    {
        symbol_period_threshold_units = value;
        symbol_period_threshold_units.value_namespace = name_space;
        symbol_period_threshold_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-low-multiplier")
    {
        symbol_period_threshold_low_multiplier = value;
        symbol_period_threshold_low_multiplier.value_namespace = name_space;
        symbol_period_threshold_low_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-high-multiplier")
    {
        symbol_period_threshold_high_multiplier = value;
        symbol_period_threshold_high_multiplier.value_namespace = name_space;
        symbol_period_threshold_high_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-window")
    {
        frame_window = value;
        frame_window.value_namespace = name_space;
        frame_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-threshold-low")
    {
        frame_threshold_low = value;
        frame_threshold_low.value_namespace = name_space;
        frame_threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-threshold-high")
    {
        frame_threshold_high = value;
        frame_threshold_high.value_namespace = name_space;
        frame_threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-threshold-low-multiplier")
    {
        frame_threshold_low_multiplier = value;
        frame_threshold_low_multiplier.value_namespace = name_space;
        frame_threshold_low_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-threshold-high-multiplier")
    {
        frame_threshold_high_multiplier = value;
        frame_threshold_high_multiplier.value_namespace = name_space;
        frame_threshold_high_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-window")
    {
        frame_period_window = value;
        frame_period_window.value_namespace = name_space;
        frame_period_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-window-units")
    {
        frame_period_window_units = value;
        frame_period_window_units.value_namespace = name_space;
        frame_period_window_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-window-multiplier")
    {
        frame_period_window_multiplier = value;
        frame_period_window_multiplier.value_namespace = name_space;
        frame_period_window_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-low")
    {
        frame_period_threshold_low = value;
        frame_period_threshold_low.value_namespace = name_space;
        frame_period_threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-high")
    {
        frame_period_threshold_high = value;
        frame_period_threshold_high.value_namespace = name_space;
        frame_period_threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-units")
    {
        frame_period_threshold_units = value;
        frame_period_threshold_units.value_namespace = name_space;
        frame_period_threshold_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-low-multiplier")
    {
        frame_period_threshold_low_multiplier = value;
        frame_period_threshold_low_multiplier.value_namespace = name_space;
        frame_period_threshold_low_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-high-multiplier")
    {
        frame_period_threshold_high_multiplier = value;
        frame_period_threshold_high_multiplier.value_namespace = name_space;
        frame_period_threshold_high_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-seconds-window")
    {
        frame_seconds_window = value;
        frame_seconds_window.value_namespace = name_space;
        frame_seconds_window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-seconds-threshold-low")
    {
        frame_seconds_threshold_low = value;
        frame_seconds_threshold_low.value_namespace = name_space;
        frame_seconds_threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-seconds-threshold-high")
    {
        frame_seconds_threshold_high = value;
        frame_seconds_threshold_high.value_namespace = name_space;
        frame_seconds_threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-threshold-action")
    {
        high_threshold_action = value;
        high_threshold_action.value_namespace = name_space;
        high_threshold_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault-action")
    {
        link_fault_action = value;
        link_fault_action.value_namespace = name_space;
        link_fault_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp-action")
    {
        dying_gasp_action = value;
        dying_gasp_action.value_namespace = name_space;
        dying_gasp_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-event-action")
    {
        critical_event_action = value;
        critical_event_action.value_namespace = name_space;
        critical_event_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timeout-action")
    {
        discovery_timeout_action = value;
        discovery_timeout_action.value_namespace = name_space;
        discovery_timeout_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities-conflict-action")
    {
        capabilities_conflict_action = value;
        capabilities_conflict_action.value_namespace = name_space;
        capabilities_conflict_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiring-conflict-action")
    {
        wiring_conflict_action = value;
        wiring_conflict_action.value_namespace = name_space;
        wiring_conflict_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-action")
    {
        session_up_action = value;
        session_up_action.value_namespace = name_space;
        session_up_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-action")
    {
        session_down_action = value;
        session_down_action.value_namespace = name_space;
        session_down_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback-action")
    {
        remote_loopback_action = value;
        remote_loopback_action.value_namespace = name_space;
        remote_loopback_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-remote-mode")
    {
        require_remote_mode = value;
        require_remote_mode.value_namespace = name_space;
        require_remote_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-remote-mib-retrieval")
    {
        require_remote_mib_retrieval = value;
        require_remote_mib_retrieval.value_namespace = name_space;
        require_remote_mib_retrieval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-loopback")
    {
        require_loopback = value;
        require_loopback.value_namespace = name_space;
        require_loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-link-monitoring")
    {
        require_link_monitoring = value;
        require_link_monitoring.value_namespace = name_space;
        require_link_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-hello-interval-enabled-overridden")
    {
        fast_hello_interval_enabled_overridden = value;
        fast_hello_interval_enabled_overridden.value_namespace = name_space;
        fast_hello_interval_enabled_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-monitoring-enabled-overridden")
    {
        link_monitoring_enabled_overridden = value;
        link_monitoring_enabled_overridden.value_namespace = name_space;
        link_monitoring_enabled_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback-enabled-overridden")
    {
        remote_loopback_enabled_overridden = value;
        remote_loopback_enabled_overridden.value_namespace = name_space;
        remote_loopback_enabled_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib-retrieval-enabled-overridden")
    {
        mib_retrieval_enabled_overridden = value;
        mib_retrieval_enabled_overridden.value_namespace = name_space;
        mib_retrieval_enabled_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udlf-enabled-overridden")
    {
        udlf_enabled_overridden = value;
        udlf_enabled_overridden.value_namespace = name_space;
        udlf_enabled_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-overridden")
    {
        mode_overridden = value;
        mode_overridden.value_namespace = name_space;
        mode_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-timeout-overridden")
    {
        connection_timeout_overridden = value;
        connection_timeout_overridden.value_namespace = name_space;
        connection_timeout_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-window-overridden")
    {
        symbol_period_window_overridden = value;
        symbol_period_window_overridden.value_namespace = name_space;
        symbol_period_window_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-low-overridden")
    {
        symbol_period_threshold_low_overridden = value;
        symbol_period_threshold_low_overridden.value_namespace = name_space;
        symbol_period_threshold_low_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-period-threshold-high-overridden")
    {
        symbol_period_threshold_high_overridden = value;
        symbol_period_threshold_high_overridden.value_namespace = name_space;
        symbol_period_threshold_high_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-window-overridden")
    {
        frame_window_overridden = value;
        frame_window_overridden.value_namespace = name_space;
        frame_window_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-threshold-low-overridden")
    {
        frame_threshold_low_overridden = value;
        frame_threshold_low_overridden.value_namespace = name_space;
        frame_threshold_low_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-threshold-high-overridden")
    {
        frame_threshold_high_overridden = value;
        frame_threshold_high_overridden.value_namespace = name_space;
        frame_threshold_high_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-window-overridden")
    {
        frame_period_window_overridden = value;
        frame_period_window_overridden.value_namespace = name_space;
        frame_period_window_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-low-overridden")
    {
        frame_period_threshold_low_overridden = value;
        frame_period_threshold_low_overridden.value_namespace = name_space;
        frame_period_threshold_low_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-period-threshold-high-overridden")
    {
        frame_period_threshold_high_overridden = value;
        frame_period_threshold_high_overridden.value_namespace = name_space;
        frame_period_threshold_high_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-seconds-window-overridden")
    {
        frame_seconds_window_overridden = value;
        frame_seconds_window_overridden.value_namespace = name_space;
        frame_seconds_window_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-seconds-threshold-low-overridden")
    {
        frame_seconds_threshold_low_overridden = value;
        frame_seconds_threshold_low_overridden.value_namespace = name_space;
        frame_seconds_threshold_low_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-seconds-threshold-high-overridden")
    {
        frame_seconds_threshold_high_overridden = value;
        frame_seconds_threshold_high_overridden.value_namespace = name_space;
        frame_seconds_threshold_high_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-threshold-action-overridden")
    {
        high_threshold_action_overridden = value;
        high_threshold_action_overridden.value_namespace = name_space;
        high_threshold_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fault-action-overridden")
    {
        link_fault_action_overridden = value;
        link_fault_action_overridden.value_namespace = name_space;
        link_fault_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dying-gasp-action-overridden")
    {
        dying_gasp_action_overridden = value;
        dying_gasp_action_overridden.value_namespace = name_space;
        dying_gasp_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-event-action-overridden")
    {
        critical_event_action_overridden = value;
        critical_event_action_overridden.value_namespace = name_space;
        critical_event_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discovery-timeout-action-overridden")
    {
        discovery_timeout_action_overridden = value;
        discovery_timeout_action_overridden.value_namespace = name_space;
        discovery_timeout_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities-conflict-action-overridden")
    {
        capabilities_conflict_action_overridden = value;
        capabilities_conflict_action_overridden.value_namespace = name_space;
        capabilities_conflict_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wiring-conflict-action-overridden")
    {
        wiring_conflict_action_overridden = value;
        wiring_conflict_action_overridden.value_namespace = name_space;
        wiring_conflict_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-action-overridden")
    {
        session_down_action_overridden = value;
        session_down_action_overridden.value_namespace = name_space;
        session_down_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-action-overridden")
    {
        session_up_action_overridden = value;
        session_up_action_overridden.value_namespace = name_space;
        session_up_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-loopback-action-overridden")
    {
        remote_loopback_action_overridden = value;
        remote_loopback_action_overridden.value_namespace = name_space;
        remote_loopback_action_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-mode-overridden")
    {
        require_mode_overridden = value;
        require_mode_overridden.value_namespace = name_space;
        require_mode_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-mib-retrieval-overridden")
    {
        require_mib_retrieval_overridden = value;
        require_mib_retrieval_overridden.value_namespace = name_space;
        require_mib_retrieval_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-loopback-overridden")
    {
        require_loopback_overridden = value;
        require_loopback_overridden.value_namespace = name_space;
        require_loopback_overridden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "require-link-monitoring-overridden")
    {
        require_link_monitoring_overridden = value;
        require_link_monitoring_overridden.value_namespace = name_space;
        require_link_monitoring_overridden.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "fast-hello-interval-enabled")
    {
        fast_hello_interval_enabled.yfilter = yfilter;
    }
    if(value_path == "link-monitor-enabled")
    {
        link_monitor_enabled.yfilter = yfilter;
    }
    if(value_path == "remote-loopback-enabled")
    {
        remote_loopback_enabled.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval-enabled")
    {
        mib_retrieval_enabled.yfilter = yfilter;
    }
    if(value_path == "udlf-enabled")
    {
        udlf_enabled.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "connection-timeout")
    {
        connection_timeout.yfilter = yfilter;
    }
    if(value_path == "symbol-period-window")
    {
        symbol_period_window.yfilter = yfilter;
    }
    if(value_path == "symbol-period-window-units")
    {
        symbol_period_window_units.yfilter = yfilter;
    }
    if(value_path == "symbol-period-window-multiplier")
    {
        symbol_period_window_multiplier.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-low")
    {
        symbol_period_threshold_low.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-high")
    {
        symbol_period_threshold_high.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-units")
    {
        symbol_period_threshold_units.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-low-multiplier")
    {
        symbol_period_threshold_low_multiplier.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-high-multiplier")
    {
        symbol_period_threshold_high_multiplier.yfilter = yfilter;
    }
    if(value_path == "frame-window")
    {
        frame_window.yfilter = yfilter;
    }
    if(value_path == "frame-threshold-low")
    {
        frame_threshold_low.yfilter = yfilter;
    }
    if(value_path == "frame-threshold-high")
    {
        frame_threshold_high.yfilter = yfilter;
    }
    if(value_path == "frame-threshold-low-multiplier")
    {
        frame_threshold_low_multiplier.yfilter = yfilter;
    }
    if(value_path == "frame-threshold-high-multiplier")
    {
        frame_threshold_high_multiplier.yfilter = yfilter;
    }
    if(value_path == "frame-period-window")
    {
        frame_period_window.yfilter = yfilter;
    }
    if(value_path == "frame-period-window-units")
    {
        frame_period_window_units.yfilter = yfilter;
    }
    if(value_path == "frame-period-window-multiplier")
    {
        frame_period_window_multiplier.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-low")
    {
        frame_period_threshold_low.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-high")
    {
        frame_period_threshold_high.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-units")
    {
        frame_period_threshold_units.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-low-multiplier")
    {
        frame_period_threshold_low_multiplier.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-high-multiplier")
    {
        frame_period_threshold_high_multiplier.yfilter = yfilter;
    }
    if(value_path == "frame-seconds-window")
    {
        frame_seconds_window.yfilter = yfilter;
    }
    if(value_path == "frame-seconds-threshold-low")
    {
        frame_seconds_threshold_low.yfilter = yfilter;
    }
    if(value_path == "frame-seconds-threshold-high")
    {
        frame_seconds_threshold_high.yfilter = yfilter;
    }
    if(value_path == "high-threshold-action")
    {
        high_threshold_action.yfilter = yfilter;
    }
    if(value_path == "link-fault-action")
    {
        link_fault_action.yfilter = yfilter;
    }
    if(value_path == "dying-gasp-action")
    {
        dying_gasp_action.yfilter = yfilter;
    }
    if(value_path == "critical-event-action")
    {
        critical_event_action.yfilter = yfilter;
    }
    if(value_path == "discovery-timeout-action")
    {
        discovery_timeout_action.yfilter = yfilter;
    }
    if(value_path == "capabilities-conflict-action")
    {
        capabilities_conflict_action.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict-action")
    {
        wiring_conflict_action.yfilter = yfilter;
    }
    if(value_path == "session-up-action")
    {
        session_up_action.yfilter = yfilter;
    }
    if(value_path == "session-down-action")
    {
        session_down_action.yfilter = yfilter;
    }
    if(value_path == "remote-loopback-action")
    {
        remote_loopback_action.yfilter = yfilter;
    }
    if(value_path == "require-remote-mode")
    {
        require_remote_mode.yfilter = yfilter;
    }
    if(value_path == "require-remote-mib-retrieval")
    {
        require_remote_mib_retrieval.yfilter = yfilter;
    }
    if(value_path == "require-loopback")
    {
        require_loopback.yfilter = yfilter;
    }
    if(value_path == "require-link-monitoring")
    {
        require_link_monitoring.yfilter = yfilter;
    }
    if(value_path == "fast-hello-interval-enabled-overridden")
    {
        fast_hello_interval_enabled_overridden.yfilter = yfilter;
    }
    if(value_path == "link-monitoring-enabled-overridden")
    {
        link_monitoring_enabled_overridden.yfilter = yfilter;
    }
    if(value_path == "remote-loopback-enabled-overridden")
    {
        remote_loopback_enabled_overridden.yfilter = yfilter;
    }
    if(value_path == "mib-retrieval-enabled-overridden")
    {
        mib_retrieval_enabled_overridden.yfilter = yfilter;
    }
    if(value_path == "udlf-enabled-overridden")
    {
        udlf_enabled_overridden.yfilter = yfilter;
    }
    if(value_path == "mode-overridden")
    {
        mode_overridden.yfilter = yfilter;
    }
    if(value_path == "connection-timeout-overridden")
    {
        connection_timeout_overridden.yfilter = yfilter;
    }
    if(value_path == "symbol-period-window-overridden")
    {
        symbol_period_window_overridden.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-low-overridden")
    {
        symbol_period_threshold_low_overridden.yfilter = yfilter;
    }
    if(value_path == "symbol-period-threshold-high-overridden")
    {
        symbol_period_threshold_high_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-window-overridden")
    {
        frame_window_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-threshold-low-overridden")
    {
        frame_threshold_low_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-threshold-high-overridden")
    {
        frame_threshold_high_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-period-window-overridden")
    {
        frame_period_window_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-low-overridden")
    {
        frame_period_threshold_low_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-period-threshold-high-overridden")
    {
        frame_period_threshold_high_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-seconds-window-overridden")
    {
        frame_seconds_window_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-seconds-threshold-low-overridden")
    {
        frame_seconds_threshold_low_overridden.yfilter = yfilter;
    }
    if(value_path == "frame-seconds-threshold-high-overridden")
    {
        frame_seconds_threshold_high_overridden.yfilter = yfilter;
    }
    if(value_path == "high-threshold-action-overridden")
    {
        high_threshold_action_overridden.yfilter = yfilter;
    }
    if(value_path == "link-fault-action-overridden")
    {
        link_fault_action_overridden.yfilter = yfilter;
    }
    if(value_path == "dying-gasp-action-overridden")
    {
        dying_gasp_action_overridden.yfilter = yfilter;
    }
    if(value_path == "critical-event-action-overridden")
    {
        critical_event_action_overridden.yfilter = yfilter;
    }
    if(value_path == "discovery-timeout-action-overridden")
    {
        discovery_timeout_action_overridden.yfilter = yfilter;
    }
    if(value_path == "capabilities-conflict-action-overridden")
    {
        capabilities_conflict_action_overridden.yfilter = yfilter;
    }
    if(value_path == "wiring-conflict-action-overridden")
    {
        wiring_conflict_action_overridden.yfilter = yfilter;
    }
    if(value_path == "session-down-action-overridden")
    {
        session_down_action_overridden.yfilter = yfilter;
    }
    if(value_path == "session-up-action-overridden")
    {
        session_up_action_overridden.yfilter = yfilter;
    }
    if(value_path == "remote-loopback-action-overridden")
    {
        remote_loopback_action_overridden.yfilter = yfilter;
    }
    if(value_path == "require-mode-overridden")
    {
        require_mode_overridden.yfilter = yfilter;
    }
    if(value_path == "require-mib-retrieval-overridden")
    {
        require_mib_retrieval_overridden.yfilter = yfilter;
    }
    if(value_path == "require-loopback-overridden")
    {
        require_loopback_overridden.yfilter = yfilter;
    }
    if(value_path == "require-link-monitoring-overridden")
    {
        require_link_monitoring_overridden.yfilter = yfilter;
    }
}

bool EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface" || name == "fast-hello-interval-enabled" || name == "link-monitor-enabled" || name == "remote-loopback-enabled" || name == "mib-retrieval-enabled" || name == "udlf-enabled" || name == "mode" || name == "connection-timeout" || name == "symbol-period-window" || name == "symbol-period-window-units" || name == "symbol-period-window-multiplier" || name == "symbol-period-threshold-low" || name == "symbol-period-threshold-high" || name == "symbol-period-threshold-units" || name == "symbol-period-threshold-low-multiplier" || name == "symbol-period-threshold-high-multiplier" || name == "frame-window" || name == "frame-threshold-low" || name == "frame-threshold-high" || name == "frame-threshold-low-multiplier" || name == "frame-threshold-high-multiplier" || name == "frame-period-window" || name == "frame-period-window-units" || name == "frame-period-window-multiplier" || name == "frame-period-threshold-low" || name == "frame-period-threshold-high" || name == "frame-period-threshold-units" || name == "frame-period-threshold-low-multiplier" || name == "frame-period-threshold-high-multiplier" || name == "frame-seconds-window" || name == "frame-seconds-threshold-low" || name == "frame-seconds-threshold-high" || name == "high-threshold-action" || name == "link-fault-action" || name == "dying-gasp-action" || name == "critical-event-action" || name == "discovery-timeout-action" || name == "capabilities-conflict-action" || name == "wiring-conflict-action" || name == "session-up-action" || name == "session-down-action" || name == "remote-loopback-action" || name == "require-remote-mode" || name == "require-remote-mib-retrieval" || name == "require-loopback" || name == "require-link-monitoring" || name == "fast-hello-interval-enabled-overridden" || name == "link-monitoring-enabled-overridden" || name == "remote-loopback-enabled-overridden" || name == "mib-retrieval-enabled-overridden" || name == "udlf-enabled-overridden" || name == "mode-overridden" || name == "connection-timeout-overridden" || name == "symbol-period-window-overridden" || name == "symbol-period-threshold-low-overridden" || name == "symbol-period-threshold-high-overridden" || name == "frame-window-overridden" || name == "frame-threshold-low-overridden" || name == "frame-threshold-high-overridden" || name == "frame-period-window-overridden" || name == "frame-period-threshold-low-overridden" || name == "frame-period-threshold-high-overridden" || name == "frame-seconds-window-overridden" || name == "frame-seconds-threshold-low-overridden" || name == "frame-seconds-threshold-high-overridden" || name == "high-threshold-action-overridden" || name == "link-fault-action-overridden" || name == "dying-gasp-action-overridden" || name == "critical-event-action-overridden" || name == "discovery-timeout-action-overridden" || name == "capabilities-conflict-action-overridden" || name == "wiring-conflict-action-overridden" || name == "session-down-action-overridden" || name == "session-up-action-overridden" || name == "remote-loopback-action-overridden" || name == "require-mode-overridden" || name == "require-mib-retrieval-overridden" || name == "require-loopback-overridden" || name == "require-link-monitoring-overridden")
        return true;
    return false;
}

EtherLinkOam::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::Nodes::~Nodes()
{
}

bool EtherLinkOam::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<EtherLinkOam::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::Nodes::get_children() const
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

void EtherLinkOam::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

EtherLinkOam::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    summary(std::make_shared<EtherLinkOam::Nodes::Node::Summary>())
{
    summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::Nodes::Node::~Node()
{
}

bool EtherLinkOam::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (summary !=  nullptr && summary->has_data());
}

bool EtherLinkOam::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string EtherLinkOam::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<EtherLinkOam::Nodes::Node::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void EtherLinkOam::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool EtherLinkOam::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "node-name")
        return true;
    return false;
}

EtherLinkOam::Nodes::Node::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    port_down{YType::uint32, "port-down"},
    passive_wait{YType::uint32, "passive-wait"},
    active_send{YType::uint32, "active-send"},
    evaluating{YType::uint32, "evaluating"},
    local_accept{YType::uint32, "local-accept"},
    local_reject{YType::uint32, "local-reject"},
    remote_reject{YType::uint32, "remote-reject"},
    operational{YType::uint32, "operational"},
    loopback_mode{YType::uint32, "loopback-mode"},
    miswired_connections{YType::uint32, "miswired-connections"},
    events{YType::uint64, "events"},
    local_events{YType::uint64, "local-events"},
    local_symbol_period{YType::uint64, "local-symbol-period"},
    local_frame{YType::uint64, "local-frame"},
    local_frame_period{YType::uint64, "local-frame-period"},
    local_frame_seconds{YType::uint64, "local-frame-seconds"},
    remote_events{YType::uint64, "remote-events"},
    remote_symbol_period{YType::uint64, "remote-symbol-period"},
    remote_frame{YType::uint64, "remote-frame"},
    remote_frame_period{YType::uint64, "remote-frame-period"},
    remote_frame_seconds{YType::uint64, "remote-frame-seconds"}
{

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

EtherLinkOam::Nodes::Node::Summary::~Summary()
{
}

bool EtherLinkOam::Nodes::Node::Summary::has_data() const
{
    if (is_presence_container) return true;
    return interfaces.is_set
	|| port_down.is_set
	|| passive_wait.is_set
	|| active_send.is_set
	|| evaluating.is_set
	|| local_accept.is_set
	|| local_reject.is_set
	|| remote_reject.is_set
	|| operational.is_set
	|| loopback_mode.is_set
	|| miswired_connections.is_set
	|| events.is_set
	|| local_events.is_set
	|| local_symbol_period.is_set
	|| local_frame.is_set
	|| local_frame_period.is_set
	|| local_frame_seconds.is_set
	|| remote_events.is_set
	|| remote_symbol_period.is_set
	|| remote_frame.is_set
	|| remote_frame_period.is_set
	|| remote_frame_seconds.is_set;
}

bool EtherLinkOam::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(port_down.yfilter)
	|| ydk::is_set(passive_wait.yfilter)
	|| ydk::is_set(active_send.yfilter)
	|| ydk::is_set(evaluating.yfilter)
	|| ydk::is_set(local_accept.yfilter)
	|| ydk::is_set(local_reject.yfilter)
	|| ydk::is_set(remote_reject.yfilter)
	|| ydk::is_set(operational.yfilter)
	|| ydk::is_set(loopback_mode.yfilter)
	|| ydk::is_set(miswired_connections.yfilter)
	|| ydk::is_set(events.yfilter)
	|| ydk::is_set(local_events.yfilter)
	|| ydk::is_set(local_symbol_period.yfilter)
	|| ydk::is_set(local_frame.yfilter)
	|| ydk::is_set(local_frame_period.yfilter)
	|| ydk::is_set(local_frame_seconds.yfilter)
	|| ydk::is_set(remote_events.yfilter)
	|| ydk::is_set(remote_symbol_period.yfilter)
	|| ydk::is_set(remote_frame.yfilter)
	|| ydk::is_set(remote_frame_period.yfilter)
	|| ydk::is_set(remote_frame_seconds.yfilter);
}

std::string EtherLinkOam::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (port_down.is_set || is_set(port_down.yfilter)) leaf_name_data.push_back(port_down.get_name_leafdata());
    if (passive_wait.is_set || is_set(passive_wait.yfilter)) leaf_name_data.push_back(passive_wait.get_name_leafdata());
    if (active_send.is_set || is_set(active_send.yfilter)) leaf_name_data.push_back(active_send.get_name_leafdata());
    if (evaluating.is_set || is_set(evaluating.yfilter)) leaf_name_data.push_back(evaluating.get_name_leafdata());
    if (local_accept.is_set || is_set(local_accept.yfilter)) leaf_name_data.push_back(local_accept.get_name_leafdata());
    if (local_reject.is_set || is_set(local_reject.yfilter)) leaf_name_data.push_back(local_reject.get_name_leafdata());
    if (remote_reject.is_set || is_set(remote_reject.yfilter)) leaf_name_data.push_back(remote_reject.get_name_leafdata());
    if (operational.is_set || is_set(operational.yfilter)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.yfilter)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (miswired_connections.is_set || is_set(miswired_connections.yfilter)) leaf_name_data.push_back(miswired_connections.get_name_leafdata());
    if (events.is_set || is_set(events.yfilter)) leaf_name_data.push_back(events.get_name_leafdata());
    if (local_events.is_set || is_set(local_events.yfilter)) leaf_name_data.push_back(local_events.get_name_leafdata());
    if (local_symbol_period.is_set || is_set(local_symbol_period.yfilter)) leaf_name_data.push_back(local_symbol_period.get_name_leafdata());
    if (local_frame.is_set || is_set(local_frame.yfilter)) leaf_name_data.push_back(local_frame.get_name_leafdata());
    if (local_frame_period.is_set || is_set(local_frame_period.yfilter)) leaf_name_data.push_back(local_frame_period.get_name_leafdata());
    if (local_frame_seconds.is_set || is_set(local_frame_seconds.yfilter)) leaf_name_data.push_back(local_frame_seconds.get_name_leafdata());
    if (remote_events.is_set || is_set(remote_events.yfilter)) leaf_name_data.push_back(remote_events.get_name_leafdata());
    if (remote_symbol_period.is_set || is_set(remote_symbol_period.yfilter)) leaf_name_data.push_back(remote_symbol_period.get_name_leafdata());
    if (remote_frame.is_set || is_set(remote_frame.yfilter)) leaf_name_data.push_back(remote_frame.get_name_leafdata());
    if (remote_frame_period.is_set || is_set(remote_frame_period.yfilter)) leaf_name_data.push_back(remote_frame_period.get_name_leafdata());
    if (remote_frame_seconds.is_set || is_set(remote_frame_seconds.yfilter)) leaf_name_data.push_back(remote_frame_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-down")
    {
        port_down = value;
        port_down.value_namespace = name_space;
        port_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-wait")
    {
        passive_wait = value;
        passive_wait.value_namespace = name_space;
        passive_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-send")
    {
        active_send = value;
        active_send.value_namespace = name_space;
        active_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evaluating")
    {
        evaluating = value;
        evaluating.value_namespace = name_space;
        evaluating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-accept")
    {
        local_accept = value;
        local_accept.value_namespace = name_space;
        local_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-reject")
    {
        local_reject = value;
        local_reject.value_namespace = name_space;
        local_reject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-reject")
    {
        remote_reject = value;
        remote_reject.value_namespace = name_space;
        remote_reject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational")
    {
        operational = value;
        operational.value_namespace = name_space;
        operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
        loopback_mode.value_namespace = name_space;
        loopback_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miswired-connections")
    {
        miswired_connections = value;
        miswired_connections.value_namespace = name_space;
        miswired_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events")
    {
        events = value;
        events.value_namespace = name_space;
        events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-events")
    {
        local_events = value;
        local_events.value_namespace = name_space;
        local_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-symbol-period")
    {
        local_symbol_period = value;
        local_symbol_period.value_namespace = name_space;
        local_symbol_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-frame")
    {
        local_frame = value;
        local_frame.value_namespace = name_space;
        local_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-frame-period")
    {
        local_frame_period = value;
        local_frame_period.value_namespace = name_space;
        local_frame_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-frame-seconds")
    {
        local_frame_seconds = value;
        local_frame_seconds.value_namespace = name_space;
        local_frame_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-events")
    {
        remote_events = value;
        remote_events.value_namespace = name_space;
        remote_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-symbol-period")
    {
        remote_symbol_period = value;
        remote_symbol_period.value_namespace = name_space;
        remote_symbol_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-frame")
    {
        remote_frame = value;
        remote_frame.value_namespace = name_space;
        remote_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-frame-period")
    {
        remote_frame_period = value;
        remote_frame_period.value_namespace = name_space;
        remote_frame_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-frame-seconds")
    {
        remote_frame_seconds = value;
        remote_frame_seconds.value_namespace = name_space;
        remote_frame_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "port-down")
    {
        port_down.yfilter = yfilter;
    }
    if(value_path == "passive-wait")
    {
        passive_wait.yfilter = yfilter;
    }
    if(value_path == "active-send")
    {
        active_send.yfilter = yfilter;
    }
    if(value_path == "evaluating")
    {
        evaluating.yfilter = yfilter;
    }
    if(value_path == "local-accept")
    {
        local_accept.yfilter = yfilter;
    }
    if(value_path == "local-reject")
    {
        local_reject.yfilter = yfilter;
    }
    if(value_path == "remote-reject")
    {
        remote_reject.yfilter = yfilter;
    }
    if(value_path == "operational")
    {
        operational.yfilter = yfilter;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode.yfilter = yfilter;
    }
    if(value_path == "miswired-connections")
    {
        miswired_connections.yfilter = yfilter;
    }
    if(value_path == "events")
    {
        events.yfilter = yfilter;
    }
    if(value_path == "local-events")
    {
        local_events.yfilter = yfilter;
    }
    if(value_path == "local-symbol-period")
    {
        local_symbol_period.yfilter = yfilter;
    }
    if(value_path == "local-frame")
    {
        local_frame.yfilter = yfilter;
    }
    if(value_path == "local-frame-period")
    {
        local_frame_period.yfilter = yfilter;
    }
    if(value_path == "local-frame-seconds")
    {
        local_frame_seconds.yfilter = yfilter;
    }
    if(value_path == "remote-events")
    {
        remote_events.yfilter = yfilter;
    }
    if(value_path == "remote-symbol-period")
    {
        remote_symbol_period.yfilter = yfilter;
    }
    if(value_path == "remote-frame")
    {
        remote_frame.yfilter = yfilter;
    }
    if(value_path == "remote-frame-period")
    {
        remote_frame_period.yfilter = yfilter;
    }
    if(value_path == "remote-frame-seconds")
    {
        remote_frame_seconds.yfilter = yfilter;
    }
}

bool EtherLinkOam::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "port-down" || name == "passive-wait" || name == "active-send" || name == "evaluating" || name == "local-accept" || name == "local-reject" || name == "remote-reject" || name == "operational" || name == "loopback-mode" || name == "miswired-connections" || name == "events" || name == "local-events" || name == "local-symbol-period" || name == "local-frame" || name == "local-frame-period" || name == "local-frame-seconds" || name == "remote-events" || name == "remote-symbol-period" || name == "remote-frame" || name == "remote-frame-period" || name == "remote-frame-seconds")
        return true;
    return false;
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterfaces()
    :
    event_log_entry_interface(this, {"member_interface"})
{

    yang_name = "event-log-entry-interfaces"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::EventLogEntryInterfaces::~EventLogEntryInterfaces()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_log_entry_interface.len(); index++)
    {
        if(event_log_entry_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::EventLogEntryInterfaces::has_operation() const
{
    for (std::size_t index=0; index<event_log_entry_interface.len(); index++)
    {
        if(event_log_entry_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::EventLogEntryInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::EventLogEntryInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::EventLogEntryInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::EventLogEntryInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-log-entry-interface")
    {
        auto ent_ = std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface>();
        ent_->parent = this;
        event_log_entry_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::EventLogEntryInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_log_entry_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLinkOam::EventLogEntryInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::EventLogEntryInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::EventLogEntryInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-log-entry-interface")
        return true;
    return false;
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryInterface()
    :
    member_interface{YType::str, "member-interface"}
        ,
    event_log_entry_indexes(std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes>())
{
    event_log_entry_indexes->parent = this;

    yang_name = "event-log-entry-interface"; yang_parent_name = "event-log-entry-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::~EventLogEntryInterface()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| (event_log_entry_indexes !=  nullptr && event_log_entry_indexes->has_data());
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| (event_log_entry_indexes !=  nullptr && event_log_entry_indexes->has_operation());
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/event-log-entry-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-interface";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-log-entry-indexes")
    {
        if(event_log_entry_indexes == nullptr)
        {
            event_log_entry_indexes = std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes>();
        }
        return event_log_entry_indexes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_log_entry_indexes != nullptr)
    {
        _children["event-log-entry-indexes"] = event_log_entry_indexes;
    }

    return _children;
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-log-entry-indexes" || name == "member-interface")
        return true;
    return false;
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndexes()
    :
    event_log_entry_index(this, {"event_log_entry_index"})
{

    yang_name = "event-log-entry-indexes"; yang_parent_name = "event-log-entry-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::~EventLogEntryIndexes()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_log_entry_index.len(); index++)
    {
        if(event_log_entry_index[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::has_operation() const
{
    for (std::size_t index=0; index<event_log_entry_index.len(); index++)
    {
        if(event_log_entry_index[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-log-entry-index")
    {
        auto ent_ = std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex>();
        ent_->parent = this;
        event_log_entry_index.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_log_entry_index.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-log-entry-index")
        return true;
    return false;
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::EventLogEntryIndex()
    :
    event_log_entry_index{YType::str, "event-log-entry-index"},
    index_{YType::uint32, "index"},
    handle{YType::str, "handle"},
    oui{YType::str, "oui"},
    timestamp{YType::uint64, "timestamp"},
    type{YType::enumeration, "type"},
    location{YType::enumeration, "location"},
    event_total{YType::uint32, "event-total"},
    action_taken{YType::enumeration, "action-taken"},
    window{YType::uint64, "window"},
    threshold{YType::uint64, "threshold"},
    local_high_threshold{YType::uint64, "local-high-threshold"},
    value_{YType::uint64, "value"},
    running_total{YType::uint64, "running-total"},
    window_config_units{YType::uint64, "window-config-units"},
    window_units{YType::uint8, "window-units"},
    threshold_config_units{YType::uint64, "threshold-config-units"},
    threshold_units{YType::uint8, "threshold-units"},
    local_high_threshold_config_units{YType::uint64, "local-high-threshold-config-units"},
    value_config_units{YType::uint64, "value-config-units"}
{

    yang_name = "event-log-entry-index"; yang_parent_name = "event-log-entry-indexes"; is_top_level_class = false; has_list_ancestor = true; 
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::~EventLogEntryIndex()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::has_data() const
{
    if (is_presence_container) return true;
    return event_log_entry_index.is_set
	|| index_.is_set
	|| handle.is_set
	|| oui.is_set
	|| timestamp.is_set
	|| type.is_set
	|| location.is_set
	|| event_total.is_set
	|| action_taken.is_set
	|| window.is_set
	|| threshold.is_set
	|| local_high_threshold.is_set
	|| value_.is_set
	|| running_total.is_set
	|| window_config_units.is_set
	|| window_units.is_set
	|| threshold_config_units.is_set
	|| threshold_units.is_set
	|| local_high_threshold_config_units.is_set
	|| value_config_units.is_set;
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_log_entry_index.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(event_total.yfilter)
	|| ydk::is_set(action_taken.yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(local_high_threshold.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(running_total.yfilter)
	|| ydk::is_set(window_config_units.yfilter)
	|| ydk::is_set(window_units.yfilter)
	|| ydk::is_set(threshold_config_units.yfilter)
	|| ydk::is_set(threshold_units.yfilter)
	|| ydk::is_set(local_high_threshold_config_units.yfilter)
	|| ydk::is_set(value_config_units.yfilter);
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-index";
    ADD_KEY_TOKEN(event_log_entry_index, "event-log-entry-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_log_entry_index.is_set || is_set(event_log_entry_index.yfilter)) leaf_name_data.push_back(event_log_entry_index.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (event_total.is_set || is_set(event_total.yfilter)) leaf_name_data.push_back(event_total.get_name_leafdata());
    if (action_taken.is_set || is_set(action_taken.yfilter)) leaf_name_data.push_back(action_taken.get_name_leafdata());
    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (local_high_threshold.is_set || is_set(local_high_threshold.yfilter)) leaf_name_data.push_back(local_high_threshold.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (running_total.is_set || is_set(running_total.yfilter)) leaf_name_data.push_back(running_total.get_name_leafdata());
    if (window_config_units.is_set || is_set(window_config_units.yfilter)) leaf_name_data.push_back(window_config_units.get_name_leafdata());
    if (window_units.is_set || is_set(window_units.yfilter)) leaf_name_data.push_back(window_units.get_name_leafdata());
    if (threshold_config_units.is_set || is_set(threshold_config_units.yfilter)) leaf_name_data.push_back(threshold_config_units.get_name_leafdata());
    if (threshold_units.is_set || is_set(threshold_units.yfilter)) leaf_name_data.push_back(threshold_units.get_name_leafdata());
    if (local_high_threshold_config_units.is_set || is_set(local_high_threshold_config_units.yfilter)) leaf_name_data.push_back(local_high_threshold_config_units.get_name_leafdata());
    if (value_config_units.is_set || is_set(value_config_units.yfilter)) leaf_name_data.push_back(value_config_units.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-log-entry-index")
    {
        event_log_entry_index = value;
        event_log_entry_index.value_namespace = name_space;
        event_log_entry_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-total")
    {
        event_total = value;
        event_total.value_namespace = name_space;
        event_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-taken")
    {
        action_taken = value;
        action_taken.value_namespace = name_space;
        action_taken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-high-threshold")
    {
        local_high_threshold = value;
        local_high_threshold.value_namespace = name_space;
        local_high_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-total")
    {
        running_total = value;
        running_total.value_namespace = name_space;
        running_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-config-units")
    {
        window_config_units = value;
        window_config_units.value_namespace = name_space;
        window_config_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-units")
    {
        window_units = value;
        window_units.value_namespace = name_space;
        window_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-config-units")
    {
        threshold_config_units = value;
        threshold_config_units.value_namespace = name_space;
        threshold_config_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-units")
    {
        threshold_units = value;
        threshold_units.value_namespace = name_space;
        threshold_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-high-threshold-config-units")
    {
        local_high_threshold_config_units = value;
        local_high_threshold_config_units.value_namespace = name_space;
        local_high_threshold_config_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-config-units")
    {
        value_config_units = value;
        value_config_units.value_namespace = name_space;
        value_config_units.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-log-entry-index")
    {
        event_log_entry_index.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "event-total")
    {
        event_total.yfilter = yfilter;
    }
    if(value_path == "action-taken")
    {
        action_taken.yfilter = yfilter;
    }
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "local-high-threshold")
    {
        local_high_threshold.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "running-total")
    {
        running_total.yfilter = yfilter;
    }
    if(value_path == "window-config-units")
    {
        window_config_units.yfilter = yfilter;
    }
    if(value_path == "window-units")
    {
        window_units.yfilter = yfilter;
    }
    if(value_path == "threshold-config-units")
    {
        threshold_config_units.yfilter = yfilter;
    }
    if(value_path == "threshold-units")
    {
        threshold_units.yfilter = yfilter;
    }
    if(value_path == "local-high-threshold-config-units")
    {
        local_high_threshold_config_units.yfilter = yfilter;
    }
    if(value_path == "value-config-units")
    {
        value_config_units.yfilter = yfilter;
    }
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-log-entry-index" || name == "index" || name == "handle" || name == "oui" || name == "timestamp" || name == "type" || name == "location" || name == "event-total" || name == "action-taken" || name == "window" || name == "threshold" || name == "local-high-threshold" || name == "value" || name == "running-total" || name == "window-config-units" || name == "window-units" || name == "threshold-config-units" || name == "threshold-units" || name == "local-high-threshold-config-units" || name == "value-config-units")
        return true;
    return false;
}

EtherLinkOam::StatsInterfaces::StatsInterfaces()
    :
    stats_interface(this, {"member_interface"})
{

    yang_name = "stats-interfaces"; yang_parent_name = "ether-link-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::StatsInterfaces::~StatsInterfaces()
{
}

bool EtherLinkOam::StatsInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_interface.len(); index++)
    {
        if(stats_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::StatsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<stats_interface.len(); index++)
    {
        if(stats_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLinkOam::StatsInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::StatsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::StatsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::StatsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-interface")
    {
        auto ent_ = std::make_shared<EtherLinkOam::StatsInterfaces::StatsInterface>();
        ent_->parent = this;
        stats_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::StatsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLinkOam::StatsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLinkOam::StatsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLinkOam::StatsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-interface")
        return true;
    return false;
}

EtherLinkOam::StatsInterfaces::StatsInterface::StatsInterface()
    :
    member_interface{YType::str, "member-interface"},
    information_tx{YType::uint32, "information-tx"},
    information_rx{YType::uint32, "information-rx"},
    unique_event_notification_tx{YType::uint32, "unique-event-notification-tx"},
    unique_event_notification_rx{YType::uint32, "unique-event-notification-rx"},
    duplicate_event_notification_tx{YType::uint32, "duplicate-event-notification-tx"},
    duplicate_event_notification_rx{YType::uint32, "duplicate-event-notification-rx"},
    loopback_control_tx{YType::uint32, "loopback-control-tx"},
    loopback_control_rx{YType::uint32, "loopback-control-rx"},
    variable_request_tx{YType::uint32, "variable-request-tx"},
    variable_request_rx{YType::uint32, "variable-request-rx"},
    variable_response_tx{YType::uint32, "variable-response-tx"},
    variable_response_rx{YType::uint32, "variable-response-rx"},
    org_specific_tx{YType::uint32, "org-specific-tx"},
    org_specific_rx{YType::uint32, "org-specific-rx"},
    unsupported_codes_tx{YType::uint32, "unsupported-codes-tx"},
    unsupported_codes_rx{YType::uint32, "unsupported-codes-rx"},
    frames_lost_due_to_oam{YType::uint32, "frames-lost-due-to-oam"},
    fixed_frames_rx{YType::uint32, "fixed-frames-rx"},
    local_error_symbol_period_records{YType::uint32, "local-error-symbol-period-records"},
    local_error_frame_records{YType::uint32, "local-error-frame-records"},
    local_error_frame_period_records{YType::uint32, "local-error-frame-period-records"},
    local_error_frame_second_records{YType::uint32, "local-error-frame-second-records"},
    remote_error_symbol_period_records{YType::uint32, "remote-error-symbol-period-records"},
    remote_error_frame_records{YType::uint32, "remote-error-frame-records"},
    remote_error_frame_period_records{YType::uint32, "remote-error-frame-period-records"},
    remote_error_frame_second_records{YType::uint32, "remote-error-frame-second-records"}
{

    yang_name = "stats-interface"; yang_parent_name = "stats-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLinkOam::StatsInterfaces::StatsInterface::~StatsInterface()
{
}

bool EtherLinkOam::StatsInterfaces::StatsInterface::has_data() const
{
    if (is_presence_container) return true;
    return member_interface.is_set
	|| information_tx.is_set
	|| information_rx.is_set
	|| unique_event_notification_tx.is_set
	|| unique_event_notification_rx.is_set
	|| duplicate_event_notification_tx.is_set
	|| duplicate_event_notification_rx.is_set
	|| loopback_control_tx.is_set
	|| loopback_control_rx.is_set
	|| variable_request_tx.is_set
	|| variable_request_rx.is_set
	|| variable_response_tx.is_set
	|| variable_response_rx.is_set
	|| org_specific_tx.is_set
	|| org_specific_rx.is_set
	|| unsupported_codes_tx.is_set
	|| unsupported_codes_rx.is_set
	|| frames_lost_due_to_oam.is_set
	|| fixed_frames_rx.is_set
	|| local_error_symbol_period_records.is_set
	|| local_error_frame_records.is_set
	|| local_error_frame_period_records.is_set
	|| local_error_frame_second_records.is_set
	|| remote_error_symbol_period_records.is_set
	|| remote_error_frame_records.is_set
	|| remote_error_frame_period_records.is_set
	|| remote_error_frame_second_records.is_set;
}

bool EtherLinkOam::StatsInterfaces::StatsInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(information_tx.yfilter)
	|| ydk::is_set(information_rx.yfilter)
	|| ydk::is_set(unique_event_notification_tx.yfilter)
	|| ydk::is_set(unique_event_notification_rx.yfilter)
	|| ydk::is_set(duplicate_event_notification_tx.yfilter)
	|| ydk::is_set(duplicate_event_notification_rx.yfilter)
	|| ydk::is_set(loopback_control_tx.yfilter)
	|| ydk::is_set(loopback_control_rx.yfilter)
	|| ydk::is_set(variable_request_tx.yfilter)
	|| ydk::is_set(variable_request_rx.yfilter)
	|| ydk::is_set(variable_response_tx.yfilter)
	|| ydk::is_set(variable_response_rx.yfilter)
	|| ydk::is_set(org_specific_tx.yfilter)
	|| ydk::is_set(org_specific_rx.yfilter)
	|| ydk::is_set(unsupported_codes_tx.yfilter)
	|| ydk::is_set(unsupported_codes_rx.yfilter)
	|| ydk::is_set(frames_lost_due_to_oam.yfilter)
	|| ydk::is_set(fixed_frames_rx.yfilter)
	|| ydk::is_set(local_error_symbol_period_records.yfilter)
	|| ydk::is_set(local_error_frame_records.yfilter)
	|| ydk::is_set(local_error_frame_period_records.yfilter)
	|| ydk::is_set(local_error_frame_second_records.yfilter)
	|| ydk::is_set(remote_error_symbol_period_records.yfilter)
	|| ydk::is_set(remote_error_frame_records.yfilter)
	|| ydk::is_set(remote_error_frame_period_records.yfilter)
	|| ydk::is_set(remote_error_frame_second_records.yfilter);
}

std::string EtherLinkOam::StatsInterfaces::StatsInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/stats-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLinkOam::StatsInterfaces::StatsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-interface";
    ADD_KEY_TOKEN(member_interface, "member-interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLinkOam::StatsInterfaces::StatsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (information_tx.is_set || is_set(information_tx.yfilter)) leaf_name_data.push_back(information_tx.get_name_leafdata());
    if (information_rx.is_set || is_set(information_rx.yfilter)) leaf_name_data.push_back(information_rx.get_name_leafdata());
    if (unique_event_notification_tx.is_set || is_set(unique_event_notification_tx.yfilter)) leaf_name_data.push_back(unique_event_notification_tx.get_name_leafdata());
    if (unique_event_notification_rx.is_set || is_set(unique_event_notification_rx.yfilter)) leaf_name_data.push_back(unique_event_notification_rx.get_name_leafdata());
    if (duplicate_event_notification_tx.is_set || is_set(duplicate_event_notification_tx.yfilter)) leaf_name_data.push_back(duplicate_event_notification_tx.get_name_leafdata());
    if (duplicate_event_notification_rx.is_set || is_set(duplicate_event_notification_rx.yfilter)) leaf_name_data.push_back(duplicate_event_notification_rx.get_name_leafdata());
    if (loopback_control_tx.is_set || is_set(loopback_control_tx.yfilter)) leaf_name_data.push_back(loopback_control_tx.get_name_leafdata());
    if (loopback_control_rx.is_set || is_set(loopback_control_rx.yfilter)) leaf_name_data.push_back(loopback_control_rx.get_name_leafdata());
    if (variable_request_tx.is_set || is_set(variable_request_tx.yfilter)) leaf_name_data.push_back(variable_request_tx.get_name_leafdata());
    if (variable_request_rx.is_set || is_set(variable_request_rx.yfilter)) leaf_name_data.push_back(variable_request_rx.get_name_leafdata());
    if (variable_response_tx.is_set || is_set(variable_response_tx.yfilter)) leaf_name_data.push_back(variable_response_tx.get_name_leafdata());
    if (variable_response_rx.is_set || is_set(variable_response_rx.yfilter)) leaf_name_data.push_back(variable_response_rx.get_name_leafdata());
    if (org_specific_tx.is_set || is_set(org_specific_tx.yfilter)) leaf_name_data.push_back(org_specific_tx.get_name_leafdata());
    if (org_specific_rx.is_set || is_set(org_specific_rx.yfilter)) leaf_name_data.push_back(org_specific_rx.get_name_leafdata());
    if (unsupported_codes_tx.is_set || is_set(unsupported_codes_tx.yfilter)) leaf_name_data.push_back(unsupported_codes_tx.get_name_leafdata());
    if (unsupported_codes_rx.is_set || is_set(unsupported_codes_rx.yfilter)) leaf_name_data.push_back(unsupported_codes_rx.get_name_leafdata());
    if (frames_lost_due_to_oam.is_set || is_set(frames_lost_due_to_oam.yfilter)) leaf_name_data.push_back(frames_lost_due_to_oam.get_name_leafdata());
    if (fixed_frames_rx.is_set || is_set(fixed_frames_rx.yfilter)) leaf_name_data.push_back(fixed_frames_rx.get_name_leafdata());
    if (local_error_symbol_period_records.is_set || is_set(local_error_symbol_period_records.yfilter)) leaf_name_data.push_back(local_error_symbol_period_records.get_name_leafdata());
    if (local_error_frame_records.is_set || is_set(local_error_frame_records.yfilter)) leaf_name_data.push_back(local_error_frame_records.get_name_leafdata());
    if (local_error_frame_period_records.is_set || is_set(local_error_frame_period_records.yfilter)) leaf_name_data.push_back(local_error_frame_period_records.get_name_leafdata());
    if (local_error_frame_second_records.is_set || is_set(local_error_frame_second_records.yfilter)) leaf_name_data.push_back(local_error_frame_second_records.get_name_leafdata());
    if (remote_error_symbol_period_records.is_set || is_set(remote_error_symbol_period_records.yfilter)) leaf_name_data.push_back(remote_error_symbol_period_records.get_name_leafdata());
    if (remote_error_frame_records.is_set || is_set(remote_error_frame_records.yfilter)) leaf_name_data.push_back(remote_error_frame_records.get_name_leafdata());
    if (remote_error_frame_period_records.is_set || is_set(remote_error_frame_period_records.yfilter)) leaf_name_data.push_back(remote_error_frame_period_records.get_name_leafdata());
    if (remote_error_frame_second_records.is_set || is_set(remote_error_frame_second_records.yfilter)) leaf_name_data.push_back(remote_error_frame_second_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLinkOam::StatsInterfaces::StatsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLinkOam::StatsInterfaces::StatsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLinkOam::StatsInterfaces::StatsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-tx")
    {
        information_tx = value;
        information_tx.value_namespace = name_space;
        information_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "information-rx")
    {
        information_rx = value;
        information_rx.value_namespace = name_space;
        information_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-event-notification-tx")
    {
        unique_event_notification_tx = value;
        unique_event_notification_tx.value_namespace = name_space;
        unique_event_notification_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-event-notification-rx")
    {
        unique_event_notification_rx = value;
        unique_event_notification_rx.value_namespace = name_space;
        unique_event_notification_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-event-notification-tx")
    {
        duplicate_event_notification_tx = value;
        duplicate_event_notification_tx.value_namespace = name_space;
        duplicate_event_notification_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicate-event-notification-rx")
    {
        duplicate_event_notification_rx = value;
        duplicate_event_notification_rx.value_namespace = name_space;
        duplicate_event_notification_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-control-tx")
    {
        loopback_control_tx = value;
        loopback_control_tx.value_namespace = name_space;
        loopback_control_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-control-rx")
    {
        loopback_control_rx = value;
        loopback_control_rx.value_namespace = name_space;
        loopback_control_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-request-tx")
    {
        variable_request_tx = value;
        variable_request_tx.value_namespace = name_space;
        variable_request_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-request-rx")
    {
        variable_request_rx = value;
        variable_request_rx.value_namespace = name_space;
        variable_request_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-response-tx")
    {
        variable_response_tx = value;
        variable_response_tx.value_namespace = name_space;
        variable_response_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variable-response-rx")
    {
        variable_response_rx = value;
        variable_response_rx.value_namespace = name_space;
        variable_response_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "org-specific-tx")
    {
        org_specific_tx = value;
        org_specific_tx.value_namespace = name_space;
        org_specific_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "org-specific-rx")
    {
        org_specific_rx = value;
        org_specific_rx.value_namespace = name_space;
        org_specific_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-codes-tx")
    {
        unsupported_codes_tx = value;
        unsupported_codes_tx.value_namespace = name_space;
        unsupported_codes_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-codes-rx")
    {
        unsupported_codes_rx = value;
        unsupported_codes_rx.value_namespace = name_space;
        unsupported_codes_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frames-lost-due-to-oam")
    {
        frames_lost_due_to_oam = value;
        frames_lost_due_to_oam.value_namespace = name_space;
        frames_lost_due_to_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-frames-rx")
    {
        fixed_frames_rx = value;
        fixed_frames_rx.value_namespace = name_space;
        fixed_frames_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-error-symbol-period-records")
    {
        local_error_symbol_period_records = value;
        local_error_symbol_period_records.value_namespace = name_space;
        local_error_symbol_period_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-error-frame-records")
    {
        local_error_frame_records = value;
        local_error_frame_records.value_namespace = name_space;
        local_error_frame_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-error-frame-period-records")
    {
        local_error_frame_period_records = value;
        local_error_frame_period_records.value_namespace = name_space;
        local_error_frame_period_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-error-frame-second-records")
    {
        local_error_frame_second_records = value;
        local_error_frame_second_records.value_namespace = name_space;
        local_error_frame_second_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-symbol-period-records")
    {
        remote_error_symbol_period_records = value;
        remote_error_symbol_period_records.value_namespace = name_space;
        remote_error_symbol_period_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-frame-records")
    {
        remote_error_frame_records = value;
        remote_error_frame_records.value_namespace = name_space;
        remote_error_frame_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-frame-period-records")
    {
        remote_error_frame_period_records = value;
        remote_error_frame_period_records.value_namespace = name_space;
        remote_error_frame_period_records.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-error-frame-second-records")
    {
        remote_error_frame_second_records = value;
        remote_error_frame_second_records.value_namespace = name_space;
        remote_error_frame_second_records.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLinkOam::StatsInterfaces::StatsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
    if(value_path == "information-tx")
    {
        information_tx.yfilter = yfilter;
    }
    if(value_path == "information-rx")
    {
        information_rx.yfilter = yfilter;
    }
    if(value_path == "unique-event-notification-tx")
    {
        unique_event_notification_tx.yfilter = yfilter;
    }
    if(value_path == "unique-event-notification-rx")
    {
        unique_event_notification_rx.yfilter = yfilter;
    }
    if(value_path == "duplicate-event-notification-tx")
    {
        duplicate_event_notification_tx.yfilter = yfilter;
    }
    if(value_path == "duplicate-event-notification-rx")
    {
        duplicate_event_notification_rx.yfilter = yfilter;
    }
    if(value_path == "loopback-control-tx")
    {
        loopback_control_tx.yfilter = yfilter;
    }
    if(value_path == "loopback-control-rx")
    {
        loopback_control_rx.yfilter = yfilter;
    }
    if(value_path == "variable-request-tx")
    {
        variable_request_tx.yfilter = yfilter;
    }
    if(value_path == "variable-request-rx")
    {
        variable_request_rx.yfilter = yfilter;
    }
    if(value_path == "variable-response-tx")
    {
        variable_response_tx.yfilter = yfilter;
    }
    if(value_path == "variable-response-rx")
    {
        variable_response_rx.yfilter = yfilter;
    }
    if(value_path == "org-specific-tx")
    {
        org_specific_tx.yfilter = yfilter;
    }
    if(value_path == "org-specific-rx")
    {
        org_specific_rx.yfilter = yfilter;
    }
    if(value_path == "unsupported-codes-tx")
    {
        unsupported_codes_tx.yfilter = yfilter;
    }
    if(value_path == "unsupported-codes-rx")
    {
        unsupported_codes_rx.yfilter = yfilter;
    }
    if(value_path == "frames-lost-due-to-oam")
    {
        frames_lost_due_to_oam.yfilter = yfilter;
    }
    if(value_path == "fixed-frames-rx")
    {
        fixed_frames_rx.yfilter = yfilter;
    }
    if(value_path == "local-error-symbol-period-records")
    {
        local_error_symbol_period_records.yfilter = yfilter;
    }
    if(value_path == "local-error-frame-records")
    {
        local_error_frame_records.yfilter = yfilter;
    }
    if(value_path == "local-error-frame-period-records")
    {
        local_error_frame_period_records.yfilter = yfilter;
    }
    if(value_path == "local-error-frame-second-records")
    {
        local_error_frame_second_records.yfilter = yfilter;
    }
    if(value_path == "remote-error-symbol-period-records")
    {
        remote_error_symbol_period_records.yfilter = yfilter;
    }
    if(value_path == "remote-error-frame-records")
    {
        remote_error_frame_records.yfilter = yfilter;
    }
    if(value_path == "remote-error-frame-period-records")
    {
        remote_error_frame_period_records.yfilter = yfilter;
    }
    if(value_path == "remote-error-frame-second-records")
    {
        remote_error_frame_second_records.yfilter = yfilter;
    }
}

bool EtherLinkOam::StatsInterfaces::StatsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-interface" || name == "information-tx" || name == "information-rx" || name == "unique-event-notification-tx" || name == "unique-event-notification-rx" || name == "duplicate-event-notification-tx" || name == "duplicate-event-notification-rx" || name == "loopback-control-tx" || name == "loopback-control-rx" || name == "variable-request-tx" || name == "variable-request-rx" || name == "variable-response-tx" || name == "variable-response-rx" || name == "org-specific-tx" || name == "org-specific-rx" || name == "unsupported-codes-tx" || name == "unsupported-codes-rx" || name == "frames-lost-due-to-oam" || name == "fixed-frames-rx" || name == "local-error-symbol-period-records" || name == "local-error-frame-records" || name == "local-error-frame-period-records" || name == "local-error-frame-second-records" || name == "remote-error-symbol-period-records" || name == "remote-error-frame-records" || name == "remote-error-frame-period-records" || name == "remote-error-frame-second-records")
        return true;
    return false;
}

const Enum::YLeaf Log::log_type_symbol_event {1, "log-type-symbol-event"};
const Enum::YLeaf Log::log_type_period_event {2, "log-type-period-event"};
const Enum::YLeaf Log::log_type_frame_event {3, "log-type-frame-event"};
const Enum::YLeaf Log::log_type_secs_event {4, "log-type-secs-event"};
const Enum::YLeaf Log::log_type_link_fault {256, "log-type-link-fault"};
const Enum::YLeaf Log::log_type_dying_gasp {257, "log-type-dying-gasp"};
const Enum::YLeaf Log::log_type_critical_event {258, "log-type-critical-event"};

const Enum::YLeaf LogLocation::log_location_local {1, "log-location-local"};
const Enum::YLeaf LogLocation::log_location_remote {2, "log-location-remote"};

const Enum::YLeaf LoopbackStatus::none {1, "none"};
const Enum::YLeaf LoopbackStatus::initiating {2, "initiating"};
const Enum::YLeaf LoopbackStatus::master_loopback {3, "master-loopback"};
const Enum::YLeaf LoopbackStatus::terminating {4, "terminating"};
const Enum::YLeaf LoopbackStatus::local_loopback {5, "local-loopback"};
const Enum::YLeaf LoopbackStatus::unknown {6, "unknown"};

const Enum::YLeaf OperationalState::disabled {1, "disabled"};
const Enum::YLeaf OperationalState::link_fault {2, "link-fault"};
const Enum::YLeaf OperationalState::passive_wait {3, "passive-wait"};
const Enum::YLeaf OperationalState::active_send_local {4, "active-send-local"};
const Enum::YLeaf OperationalState::send_local_and_remote {5, "send-local-and-remote"};
const Enum::YLeaf OperationalState::send_local_and_remote_ok {6, "send-local-and-remote-ok"};
const Enum::YLeaf OperationalState::peering_locally_rejected {7, "peering-locally-rejected"};
const Enum::YLeaf OperationalState::peering_remotely_rejected {8, "peering-remotely-rejected"};
const Enum::YLeaf OperationalState::operational {9, "operational"};
const Enum::YLeaf OperationalState::operational_half_duplex {10, "operational-half-duplex"};

const Enum::YLeaf Mode::passive {0, "passive"};
const Enum::YLeaf Mode::active {1, "active"};
const Enum::YLeaf Mode::dont_care {2, "dont-care"};

const Enum::YLeaf Action::no_action {1, "no-action"};
const Enum::YLeaf Action::disable_interface {2, "disable-interface"};
const Enum::YLeaf Action::log {3, "log"};
const Enum::YLeaf Action::efd {4, "efd"};

const Enum::YLeaf ProtocolState::protocol_state_inactive {0, "protocol-state-inactive"};
const Enum::YLeaf ProtocolState::protocol_state_fault {1, "protocol-state-fault"};
const Enum::YLeaf ProtocolState::protocol_state_active_send_local {2, "protocol-state-active-send-local"};
const Enum::YLeaf ProtocolState::protocol_state_passive_wait {3, "protocol-state-passive-wait"};
const Enum::YLeaf ProtocolState::protocol_state_send_local_remote {4, "protocol-state-send-local-remote"};
const Enum::YLeaf ProtocolState::protocol_state_send_local_remote_ok {5, "protocol-state-send-local-remote-ok"};
const Enum::YLeaf ProtocolState::protocol_state_send_any {6, "protocol-state-send-any"};


}
}

