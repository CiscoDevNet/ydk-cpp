
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_link_oam_oper {

EtherLinkOam::EtherLinkOam()
    :
    discovery_info_interfaces(std::make_shared<EtherLinkOam::DiscoveryInfoInterfaces>())
	,event_log_entry_interfaces(std::make_shared<EtherLinkOam::EventLogEntryInterfaces>())
	,interface_state_interfaces(std::make_shared<EtherLinkOam::InterfaceStateInterfaces>())
	,nodes(std::make_shared<EtherLinkOam::Nodes>())
	,running_config_interfaces(std::make_shared<EtherLinkOam::RunningConfigInterfaces>())
	,stats_interfaces(std::make_shared<EtherLinkOam::StatsInterfaces>())
{
    discovery_info_interfaces->parent = this;
    children["discovery-info-interfaces"] = discovery_info_interfaces;

    event_log_entry_interfaces->parent = this;
    children["event-log-entry-interfaces"] = event_log_entry_interfaces;

    interface_state_interfaces->parent = this;
    children["interface-state-interfaces"] = interface_state_interfaces;

    nodes->parent = this;
    children["nodes"] = nodes;

    running_config_interfaces->parent = this;
    children["running-config-interfaces"] = running_config_interfaces;

    stats_interfaces->parent = this;
    children["stats-interfaces"] = stats_interfaces;

    yang_name = "ether-link-oam"; yang_parent_name = "Cisco-IOS-XR-ethernet-link-oam-oper";
}

EtherLinkOam::~EtherLinkOam()
{
}

bool EtherLinkOam::has_data() const
{
    return (discovery_info_interfaces !=  nullptr && discovery_info_interfaces->has_data())
	|| (event_log_entry_interfaces !=  nullptr && event_log_entry_interfaces->has_data())
	|| (interface_state_interfaces !=  nullptr && interface_state_interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (running_config_interfaces !=  nullptr && running_config_interfaces->has_data())
	|| (stats_interfaces !=  nullptr && stats_interfaces->has_data());
}

bool EtherLinkOam::has_operation() const
{
    return is_set(operation)
	|| (discovery_info_interfaces !=  nullptr && discovery_info_interfaces->has_operation())
	|| (event_log_entry_interfaces !=  nullptr && event_log_entry_interfaces->has_operation())
	|| (interface_state_interfaces !=  nullptr && interface_state_interfaces->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (running_config_interfaces !=  nullptr && running_config_interfaces->has_operation())
	|| (stats_interfaces !=  nullptr && stats_interfaces->has_operation());
}

std::string EtherLinkOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam";

    return path_buffer.str();

}

EntityPath EtherLinkOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-info-interfaces")
    {
        if(discovery_info_interfaces != nullptr)
        {
            children["discovery-info-interfaces"] = discovery_info_interfaces;
        }
        else
        {
            discovery_info_interfaces = std::make_shared<EtherLinkOam::DiscoveryInfoInterfaces>();
            discovery_info_interfaces->parent = this;
            children["discovery-info-interfaces"] = discovery_info_interfaces;
        }
        return children.at("discovery-info-interfaces");
    }

    if(child_yang_name == "event-log-entry-interfaces")
    {
        if(event_log_entry_interfaces != nullptr)
        {
            children["event-log-entry-interfaces"] = event_log_entry_interfaces;
        }
        else
        {
            event_log_entry_interfaces = std::make_shared<EtherLinkOam::EventLogEntryInterfaces>();
            event_log_entry_interfaces->parent = this;
            children["event-log-entry-interfaces"] = event_log_entry_interfaces;
        }
        return children.at("event-log-entry-interfaces");
    }

    if(child_yang_name == "interface-state-interfaces")
    {
        if(interface_state_interfaces != nullptr)
        {
            children["interface-state-interfaces"] = interface_state_interfaces;
        }
        else
        {
            interface_state_interfaces = std::make_shared<EtherLinkOam::InterfaceStateInterfaces>();
            interface_state_interfaces->parent = this;
            children["interface-state-interfaces"] = interface_state_interfaces;
        }
        return children.at("interface-state-interfaces");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<EtherLinkOam::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    if(child_yang_name == "running-config-interfaces")
    {
        if(running_config_interfaces != nullptr)
        {
            children["running-config-interfaces"] = running_config_interfaces;
        }
        else
        {
            running_config_interfaces = std::make_shared<EtherLinkOam::RunningConfigInterfaces>();
            running_config_interfaces->parent = this;
            children["running-config-interfaces"] = running_config_interfaces;
        }
        return children.at("running-config-interfaces");
    }

    if(child_yang_name == "stats-interfaces")
    {
        if(stats_interfaces != nullptr)
        {
            children["stats-interfaces"] = stats_interfaces;
        }
        else
        {
            stats_interfaces = std::make_shared<EtherLinkOam::StatsInterfaces>();
            stats_interfaces->parent = this;
            children["stats-interfaces"] = stats_interfaces;
        }
        return children.at("stats-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::get_children()
{
    if(children.find("discovery-info-interfaces") == children.end())
    {
        if(discovery_info_interfaces != nullptr)
        {
            children["discovery-info-interfaces"] = discovery_info_interfaces;
        }
    }

    if(children.find("event-log-entry-interfaces") == children.end())
    {
        if(event_log_entry_interfaces != nullptr)
        {
            children["event-log-entry-interfaces"] = event_log_entry_interfaces;
        }
    }

    if(children.find("interface-state-interfaces") == children.end())
    {
        if(interface_state_interfaces != nullptr)
        {
            children["interface-state-interfaces"] = interface_state_interfaces;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    if(children.find("running-config-interfaces") == children.end())
    {
        if(running_config_interfaces != nullptr)
        {
            children["running-config-interfaces"] = running_config_interfaces;
        }
    }

    if(children.find("stats-interfaces") == children.end())
    {
        if(stats_interfaces != nullptr)
        {
            children["stats-interfaces"] = stats_interfaces;
        }
    }

    return children;
}

void EtherLinkOam::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EtherLinkOam::clone_ptr() const
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

EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterfaces()
{
    yang_name = "discovery-info-interfaces"; yang_parent_name = "ether-link-oam";
}

EtherLinkOam::DiscoveryInfoInterfaces::~DiscoveryInfoInterfaces()
{
}

bool EtherLinkOam::DiscoveryInfoInterfaces::has_data() const
{
    for (std::size_t index=0; index<discovery_info_interface.size(); index++)
    {
        if(discovery_info_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::DiscoveryInfoInterfaces::has_operation() const
{
    for (std::size_t index=0; index<discovery_info_interface.size(); index++)
    {
        if(discovery_info_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::DiscoveryInfoInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-info-interfaces";

    return path_buffer.str();

}

EntityPath EtherLinkOam::DiscoveryInfoInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::DiscoveryInfoInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-info-interface")
    {
        for(auto const & c : discovery_info_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface>();
        c->parent = this;
        discovery_info_interface.push_back(std::move(c));
        children[segment_path] = discovery_info_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::DiscoveryInfoInterfaces::get_children()
{
    for (auto const & c : discovery_info_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::DiscoveryInfoInterfaces::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::DiscoveryInfoInterface()
    :
    member_interface{YType::str, "member-interface"},
    local_evaluating{YType::boolean, "local-evaluating"},
    local_function_event{YType::boolean, "local-function-event"},
    local_function_event_valid{YType::boolean, "local-function-event-valid"},
    local_function_loopback{YType::boolean, "local-function-loopback"},
    local_function_loopback_valid{YType::boolean, "local-function-loopback-valid"},
    local_function_unidirectional{YType::boolean, "local-function-unidirectional"},
    local_function_unidirectional_valid{YType::boolean, "local-function-unidirectional-valid"},
    local_functionvariable{YType::boolean, "local-functionvariable"},
    local_functionvariable_valid{YType::boolean, "local-functionvariable-valid"},
    local_mode{YType::enumeration, "local-mode"},
    local_mode_valid{YType::boolean, "local-mode-valid"},
    local_mtu{YType::uint32, "local-mtu"},
    local_mtu_valid{YType::boolean, "local-mtu-valid"},
    local_mwd_key{YType::uint32, "local-mwd-key"},
    local_mwd_key_valid{YType::boolean, "local-mwd-key-valid"},
    local_operational{YType::boolean, "local-operational"},
    local_revision{YType::uint32, "local-revision"},
    local_revisionvalid{YType::boolean, "local-revisionvalid"},
    loopback_mode{YType::enumeration, "loopback-mode"},
    loopback_mode_valid{YType::boolean, "loopback-mode-valid"},
    miswired{YType::boolean, "miswired"},
    miswired_valid{YType::boolean, "miswired-valid"},
    name{YType::str, "name"},
    operational_status{YType::enumeration, "operational-status"},
    operational_status_valid{YType::boolean, "operational-status-valid"},
    received_at_risk_notification_time_remaining{YType::uint16, "received-at-risk-notification-time-remaining"},
    received_at_risk_notification_timestamp{YType::uint64, "received-at-risk-notification-timestamp"},
    remote_event{YType::boolean, "remote-event"},
    remote_event_valid{YType::boolean, "remote-event-valid"},
    remote_loopback{YType::boolean, "remote-loopback"},
    remote_loopback_valid{YType::boolean, "remote-loopback-valid"},
    remote_mac_address{YType::str, "remote-mac-address"},
    remote_mac_address_valid{YType::boolean, "remote-mac-address-valid"},
    remote_mode{YType::enumeration, "remote-mode"},
    remote_mode_valid{YType::boolean, "remote-mode-valid"},
    remote_mtu{YType::uint32, "remote-mtu"},
    remote_mtu_valid{YType::boolean, "remote-mtu-valid"},
    remote_mwd_key{YType::uint32, "remote-mwd-key"},
    remote_mwd_key_valid{YType::boolean, "remote-mwd-key-valid"},
    remote_revision{YType::uint16, "remote-revision"},
    remote_revisionvalid{YType::boolean, "remote-revisionvalid"},
    remote_unidirectional{YType::boolean, "remote-unidirectional"},
    remote_unidirectional_valid{YType::boolean, "remote-unidirectional-valid"},
    remote_variable{YType::boolean, "remote-variable"},
    remote_variable_valid{YType::boolean, "remote-variable-valid"},
    remote_vendor_info{YType::uint32, "remote-vendor-info"},
    remote_vendor_info_valid{YType::boolean, "remote-vendor-info-valid"},
    remote_vendor_oui{YType::str, "remote-vendor-oui"},
    remote_vendor_oui_valid{YType::boolean, "remote-vendor-oui-valid"}
{
    yang_name = "discovery-info-interface"; yang_parent_name = "discovery-info-interfaces";
}

EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::~DiscoveryInfoInterface()
{
}

bool EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::has_data() const
{
    return member_interface.is_set
	|| local_evaluating.is_set
	|| local_function_event.is_set
	|| local_function_event_valid.is_set
	|| local_function_loopback.is_set
	|| local_function_loopback_valid.is_set
	|| local_function_unidirectional.is_set
	|| local_function_unidirectional_valid.is_set
	|| local_functionvariable.is_set
	|| local_functionvariable_valid.is_set
	|| local_mode.is_set
	|| local_mode_valid.is_set
	|| local_mtu.is_set
	|| local_mtu_valid.is_set
	|| local_mwd_key.is_set
	|| local_mwd_key_valid.is_set
	|| local_operational.is_set
	|| local_revision.is_set
	|| local_revisionvalid.is_set
	|| loopback_mode.is_set
	|| loopback_mode_valid.is_set
	|| miswired.is_set
	|| miswired_valid.is_set
	|| name.is_set
	|| operational_status.is_set
	|| operational_status_valid.is_set
	|| received_at_risk_notification_time_remaining.is_set
	|| received_at_risk_notification_timestamp.is_set
	|| remote_event.is_set
	|| remote_event_valid.is_set
	|| remote_loopback.is_set
	|| remote_loopback_valid.is_set
	|| remote_mac_address.is_set
	|| remote_mac_address_valid.is_set
	|| remote_mode.is_set
	|| remote_mode_valid.is_set
	|| remote_mtu.is_set
	|| remote_mtu_valid.is_set
	|| remote_mwd_key.is_set
	|| remote_mwd_key_valid.is_set
	|| remote_revision.is_set
	|| remote_revisionvalid.is_set
	|| remote_unidirectional.is_set
	|| remote_unidirectional_valid.is_set
	|| remote_variable.is_set
	|| remote_variable_valid.is_set
	|| remote_vendor_info.is_set
	|| remote_vendor_info_valid.is_set
	|| remote_vendor_oui.is_set
	|| remote_vendor_oui_valid.is_set;
}

bool EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(local_evaluating.operation)
	|| is_set(local_function_event.operation)
	|| is_set(local_function_event_valid.operation)
	|| is_set(local_function_loopback.operation)
	|| is_set(local_function_loopback_valid.operation)
	|| is_set(local_function_unidirectional.operation)
	|| is_set(local_function_unidirectional_valid.operation)
	|| is_set(local_functionvariable.operation)
	|| is_set(local_functionvariable_valid.operation)
	|| is_set(local_mode.operation)
	|| is_set(local_mode_valid.operation)
	|| is_set(local_mtu.operation)
	|| is_set(local_mtu_valid.operation)
	|| is_set(local_mwd_key.operation)
	|| is_set(local_mwd_key_valid.operation)
	|| is_set(local_operational.operation)
	|| is_set(local_revision.operation)
	|| is_set(local_revisionvalid.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(loopback_mode_valid.operation)
	|| is_set(miswired.operation)
	|| is_set(miswired_valid.operation)
	|| is_set(name.operation)
	|| is_set(operational_status.operation)
	|| is_set(operational_status_valid.operation)
	|| is_set(received_at_risk_notification_time_remaining.operation)
	|| is_set(received_at_risk_notification_timestamp.operation)
	|| is_set(remote_event.operation)
	|| is_set(remote_event_valid.operation)
	|| is_set(remote_loopback.operation)
	|| is_set(remote_loopback_valid.operation)
	|| is_set(remote_mac_address.operation)
	|| is_set(remote_mac_address_valid.operation)
	|| is_set(remote_mode.operation)
	|| is_set(remote_mode_valid.operation)
	|| is_set(remote_mtu.operation)
	|| is_set(remote_mtu_valid.operation)
	|| is_set(remote_mwd_key.operation)
	|| is_set(remote_mwd_key_valid.operation)
	|| is_set(remote_revision.operation)
	|| is_set(remote_revisionvalid.operation)
	|| is_set(remote_unidirectional.operation)
	|| is_set(remote_unidirectional_valid.operation)
	|| is_set(remote_variable.operation)
	|| is_set(remote_variable_valid.operation)
	|| is_set(remote_vendor_info.operation)
	|| is_set(remote_vendor_info_valid.operation)
	|| is_set(remote_vendor_oui.operation)
	|| is_set(remote_vendor_oui_valid.operation);
}

std::string EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-info-interface" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/discovery-info-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (local_evaluating.is_set || is_set(local_evaluating.operation)) leaf_name_data.push_back(local_evaluating.get_name_leafdata());
    if (local_function_event.is_set || is_set(local_function_event.operation)) leaf_name_data.push_back(local_function_event.get_name_leafdata());
    if (local_function_event_valid.is_set || is_set(local_function_event_valid.operation)) leaf_name_data.push_back(local_function_event_valid.get_name_leafdata());
    if (local_function_loopback.is_set || is_set(local_function_loopback.operation)) leaf_name_data.push_back(local_function_loopback.get_name_leafdata());
    if (local_function_loopback_valid.is_set || is_set(local_function_loopback_valid.operation)) leaf_name_data.push_back(local_function_loopback_valid.get_name_leafdata());
    if (local_function_unidirectional.is_set || is_set(local_function_unidirectional.operation)) leaf_name_data.push_back(local_function_unidirectional.get_name_leafdata());
    if (local_function_unidirectional_valid.is_set || is_set(local_function_unidirectional_valid.operation)) leaf_name_data.push_back(local_function_unidirectional_valid.get_name_leafdata());
    if (local_functionvariable.is_set || is_set(local_functionvariable.operation)) leaf_name_data.push_back(local_functionvariable.get_name_leafdata());
    if (local_functionvariable_valid.is_set || is_set(local_functionvariable_valid.operation)) leaf_name_data.push_back(local_functionvariable_valid.get_name_leafdata());
    if (local_mode.is_set || is_set(local_mode.operation)) leaf_name_data.push_back(local_mode.get_name_leafdata());
    if (local_mode_valid.is_set || is_set(local_mode_valid.operation)) leaf_name_data.push_back(local_mode_valid.get_name_leafdata());
    if (local_mtu.is_set || is_set(local_mtu.operation)) leaf_name_data.push_back(local_mtu.get_name_leafdata());
    if (local_mtu_valid.is_set || is_set(local_mtu_valid.operation)) leaf_name_data.push_back(local_mtu_valid.get_name_leafdata());
    if (local_mwd_key.is_set || is_set(local_mwd_key.operation)) leaf_name_data.push_back(local_mwd_key.get_name_leafdata());
    if (local_mwd_key_valid.is_set || is_set(local_mwd_key_valid.operation)) leaf_name_data.push_back(local_mwd_key_valid.get_name_leafdata());
    if (local_operational.is_set || is_set(local_operational.operation)) leaf_name_data.push_back(local_operational.get_name_leafdata());
    if (local_revision.is_set || is_set(local_revision.operation)) leaf_name_data.push_back(local_revision.get_name_leafdata());
    if (local_revisionvalid.is_set || is_set(local_revisionvalid.operation)) leaf_name_data.push_back(local_revisionvalid.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (loopback_mode_valid.is_set || is_set(loopback_mode_valid.operation)) leaf_name_data.push_back(loopback_mode_valid.get_name_leafdata());
    if (miswired.is_set || is_set(miswired.operation)) leaf_name_data.push_back(miswired.get_name_leafdata());
    if (miswired_valid.is_set || is_set(miswired_valid.operation)) leaf_name_data.push_back(miswired_valid.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.operation)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (operational_status_valid.is_set || is_set(operational_status_valid.operation)) leaf_name_data.push_back(operational_status_valid.get_name_leafdata());
    if (received_at_risk_notification_time_remaining.is_set || is_set(received_at_risk_notification_time_remaining.operation)) leaf_name_data.push_back(received_at_risk_notification_time_remaining.get_name_leafdata());
    if (received_at_risk_notification_timestamp.is_set || is_set(received_at_risk_notification_timestamp.operation)) leaf_name_data.push_back(received_at_risk_notification_timestamp.get_name_leafdata());
    if (remote_event.is_set || is_set(remote_event.operation)) leaf_name_data.push_back(remote_event.get_name_leafdata());
    if (remote_event_valid.is_set || is_set(remote_event_valid.operation)) leaf_name_data.push_back(remote_event_valid.get_name_leafdata());
    if (remote_loopback.is_set || is_set(remote_loopback.operation)) leaf_name_data.push_back(remote_loopback.get_name_leafdata());
    if (remote_loopback_valid.is_set || is_set(remote_loopback_valid.operation)) leaf_name_data.push_back(remote_loopback_valid.get_name_leafdata());
    if (remote_mac_address.is_set || is_set(remote_mac_address.operation)) leaf_name_data.push_back(remote_mac_address.get_name_leafdata());
    if (remote_mac_address_valid.is_set || is_set(remote_mac_address_valid.operation)) leaf_name_data.push_back(remote_mac_address_valid.get_name_leafdata());
    if (remote_mode.is_set || is_set(remote_mode.operation)) leaf_name_data.push_back(remote_mode.get_name_leafdata());
    if (remote_mode_valid.is_set || is_set(remote_mode_valid.operation)) leaf_name_data.push_back(remote_mode_valid.get_name_leafdata());
    if (remote_mtu.is_set || is_set(remote_mtu.operation)) leaf_name_data.push_back(remote_mtu.get_name_leafdata());
    if (remote_mtu_valid.is_set || is_set(remote_mtu_valid.operation)) leaf_name_data.push_back(remote_mtu_valid.get_name_leafdata());
    if (remote_mwd_key.is_set || is_set(remote_mwd_key.operation)) leaf_name_data.push_back(remote_mwd_key.get_name_leafdata());
    if (remote_mwd_key_valid.is_set || is_set(remote_mwd_key_valid.operation)) leaf_name_data.push_back(remote_mwd_key_valid.get_name_leafdata());
    if (remote_revision.is_set || is_set(remote_revision.operation)) leaf_name_data.push_back(remote_revision.get_name_leafdata());
    if (remote_revisionvalid.is_set || is_set(remote_revisionvalid.operation)) leaf_name_data.push_back(remote_revisionvalid.get_name_leafdata());
    if (remote_unidirectional.is_set || is_set(remote_unidirectional.operation)) leaf_name_data.push_back(remote_unidirectional.get_name_leafdata());
    if (remote_unidirectional_valid.is_set || is_set(remote_unidirectional_valid.operation)) leaf_name_data.push_back(remote_unidirectional_valid.get_name_leafdata());
    if (remote_variable.is_set || is_set(remote_variable.operation)) leaf_name_data.push_back(remote_variable.get_name_leafdata());
    if (remote_variable_valid.is_set || is_set(remote_variable_valid.operation)) leaf_name_data.push_back(remote_variable_valid.get_name_leafdata());
    if (remote_vendor_info.is_set || is_set(remote_vendor_info.operation)) leaf_name_data.push_back(remote_vendor_info.get_name_leafdata());
    if (remote_vendor_info_valid.is_set || is_set(remote_vendor_info_valid.operation)) leaf_name_data.push_back(remote_vendor_info_valid.get_name_leafdata());
    if (remote_vendor_oui.is_set || is_set(remote_vendor_oui.operation)) leaf_name_data.push_back(remote_vendor_oui.get_name_leafdata());
    if (remote_vendor_oui_valid.is_set || is_set(remote_vendor_oui_valid.operation)) leaf_name_data.push_back(remote_vendor_oui_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::get_children()
{
    return children;
}

void EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "local-evaluating")
    {
        local_evaluating = value;
    }
    if(value_path == "local-function-event")
    {
        local_function_event = value;
    }
    if(value_path == "local-function-event-valid")
    {
        local_function_event_valid = value;
    }
    if(value_path == "local-function-loopback")
    {
        local_function_loopback = value;
    }
    if(value_path == "local-function-loopback-valid")
    {
        local_function_loopback_valid = value;
    }
    if(value_path == "local-function-unidirectional")
    {
        local_function_unidirectional = value;
    }
    if(value_path == "local-function-unidirectional-valid")
    {
        local_function_unidirectional_valid = value;
    }
    if(value_path == "local-functionvariable")
    {
        local_functionvariable = value;
    }
    if(value_path == "local-functionvariable-valid")
    {
        local_functionvariable_valid = value;
    }
    if(value_path == "local-mode")
    {
        local_mode = value;
    }
    if(value_path == "local-mode-valid")
    {
        local_mode_valid = value;
    }
    if(value_path == "local-mtu")
    {
        local_mtu = value;
    }
    if(value_path == "local-mtu-valid")
    {
        local_mtu_valid = value;
    }
    if(value_path == "local-mwd-key")
    {
        local_mwd_key = value;
    }
    if(value_path == "local-mwd-key-valid")
    {
        local_mwd_key_valid = value;
    }
    if(value_path == "local-operational")
    {
        local_operational = value;
    }
    if(value_path == "local-revision")
    {
        local_revision = value;
    }
    if(value_path == "local-revisionvalid")
    {
        local_revisionvalid = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "loopback-mode-valid")
    {
        loopback_mode_valid = value;
    }
    if(value_path == "miswired")
    {
        miswired = value;
    }
    if(value_path == "miswired-valid")
    {
        miswired_valid = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
    }
    if(value_path == "operational-status-valid")
    {
        operational_status_valid = value;
    }
    if(value_path == "received-at-risk-notification-time-remaining")
    {
        received_at_risk_notification_time_remaining = value;
    }
    if(value_path == "received-at-risk-notification-timestamp")
    {
        received_at_risk_notification_timestamp = value;
    }
    if(value_path == "remote-event")
    {
        remote_event = value;
    }
    if(value_path == "remote-event-valid")
    {
        remote_event_valid = value;
    }
    if(value_path == "remote-loopback")
    {
        remote_loopback = value;
    }
    if(value_path == "remote-loopback-valid")
    {
        remote_loopback_valid = value;
    }
    if(value_path == "remote-mac-address")
    {
        remote_mac_address = value;
    }
    if(value_path == "remote-mac-address-valid")
    {
        remote_mac_address_valid = value;
    }
    if(value_path == "remote-mode")
    {
        remote_mode = value;
    }
    if(value_path == "remote-mode-valid")
    {
        remote_mode_valid = value;
    }
    if(value_path == "remote-mtu")
    {
        remote_mtu = value;
    }
    if(value_path == "remote-mtu-valid")
    {
        remote_mtu_valid = value;
    }
    if(value_path == "remote-mwd-key")
    {
        remote_mwd_key = value;
    }
    if(value_path == "remote-mwd-key-valid")
    {
        remote_mwd_key_valid = value;
    }
    if(value_path == "remote-revision")
    {
        remote_revision = value;
    }
    if(value_path == "remote-revisionvalid")
    {
        remote_revisionvalid = value;
    }
    if(value_path == "remote-unidirectional")
    {
        remote_unidirectional = value;
    }
    if(value_path == "remote-unidirectional-valid")
    {
        remote_unidirectional_valid = value;
    }
    if(value_path == "remote-variable")
    {
        remote_variable = value;
    }
    if(value_path == "remote-variable-valid")
    {
        remote_variable_valid = value;
    }
    if(value_path == "remote-vendor-info")
    {
        remote_vendor_info = value;
    }
    if(value_path == "remote-vendor-info-valid")
    {
        remote_vendor_info_valid = value;
    }
    if(value_path == "remote-vendor-oui")
    {
        remote_vendor_oui = value;
    }
    if(value_path == "remote-vendor-oui-valid")
    {
        remote_vendor_oui_valid = value;
    }
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterfaces()
{
    yang_name = "interface-state-interfaces"; yang_parent_name = "ether-link-oam";
}

EtherLinkOam::InterfaceStateInterfaces::~InterfaceStateInterfaces()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::has_data() const
{
    for (std::size_t index=0; index<interface_state_interface.size(); index++)
    {
        if(interface_state_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::InterfaceStateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<interface_state_interface.size(); index++)
    {
        if(interface_state_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::InterfaceStateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-interfaces";

    return path_buffer.str();

}

EntityPath EtherLinkOam::InterfaceStateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::InterfaceStateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-state-interface")
    {
        for(auto const & c : interface_state_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface>();
        c->parent = this;
        interface_state_interface.push_back(std::move(c));
        children[segment_path] = interface_state_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::InterfaceStateInterfaces::get_children()
{
    for (auto const & c : interface_state_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::InterfaceStateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::InterfaceStateInterface()
    :
    member_interface{YType::str, "member-interface"},
    local_mwd_key{YType::uint32, "local-mwd-key"},
    protocol_code{YType::enumeration, "protocol-code"},
    remote_mwd_key{YType::uint32, "remote-mwd-key"},
    remote_mwd_key_present{YType::boolean, "remote-mwd-key-present"},
    rx_fault{YType::boolean, "rx-fault"}
    	,
    efd_triggers(std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers>())
	,errors(std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors>())
{
    efd_triggers->parent = this;
    children["efd-triggers"] = efd_triggers;

    errors->parent = this;
    children["errors"] = errors;

    yang_name = "interface-state-interface"; yang_parent_name = "interface-state-interfaces";
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::~InterfaceStateInterface()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::has_data() const
{
    return member_interface.is_set
	|| local_mwd_key.is_set
	|| protocol_code.is_set
	|| remote_mwd_key.is_set
	|| remote_mwd_key_present.is_set
	|| rx_fault.is_set
	|| (efd_triggers !=  nullptr && efd_triggers->has_data())
	|| (errors !=  nullptr && errors->has_data());
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(local_mwd_key.operation)
	|| is_set(protocol_code.operation)
	|| is_set(remote_mwd_key.operation)
	|| is_set(remote_mwd_key_present.operation)
	|| is_set(rx_fault.operation)
	|| (efd_triggers !=  nullptr && efd_triggers->has_operation())
	|| (errors !=  nullptr && errors->has_operation());
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-interface" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/interface-state-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (local_mwd_key.is_set || is_set(local_mwd_key.operation)) leaf_name_data.push_back(local_mwd_key.get_name_leafdata());
    if (protocol_code.is_set || is_set(protocol_code.operation)) leaf_name_data.push_back(protocol_code.get_name_leafdata());
    if (remote_mwd_key.is_set || is_set(remote_mwd_key.operation)) leaf_name_data.push_back(remote_mwd_key.get_name_leafdata());
    if (remote_mwd_key_present.is_set || is_set(remote_mwd_key_present.operation)) leaf_name_data.push_back(remote_mwd_key_present.get_name_leafdata());
    if (rx_fault.is_set || is_set(rx_fault.operation)) leaf_name_data.push_back(rx_fault.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "efd-triggers")
    {
        if(efd_triggers != nullptr)
        {
            children["efd-triggers"] = efd_triggers;
        }
        else
        {
            efd_triggers = std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers>();
            efd_triggers->parent = this;
            children["efd-triggers"] = efd_triggers;
        }
        return children.at("efd-triggers");
    }

    if(child_yang_name == "errors")
    {
        if(errors != nullptr)
        {
            children["errors"] = errors;
        }
        else
        {
            errors = std::make_shared<EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors>();
            errors->parent = this;
            children["errors"] = errors;
        }
        return children.at("errors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::get_children()
{
    if(children.find("efd-triggers") == children.end())
    {
        if(efd_triggers != nullptr)
        {
            children["efd-triggers"] = efd_triggers;
        }
    }

    if(children.find("errors") == children.end())
    {
        if(errors != nullptr)
        {
            children["errors"] = errors;
        }
    }

    return children;
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "local-mwd-key")
    {
        local_mwd_key = value;
    }
    if(value_path == "protocol-code")
    {
        protocol_code = value;
    }
    if(value_path == "remote-mwd-key")
    {
        remote_mwd_key = value;
    }
    if(value_path == "remote-mwd-key-present")
    {
        remote_mwd_key_present = value;
    }
    if(value_path == "rx-fault")
    {
        rx_fault = value;
    }
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::Errors()
    :
    caps_add_error_code{YType::uint32, "caps-add-error-code"},
    caps_add_reason{YType::str, "caps-add-reason"},
    epi_error_code{YType::uint32, "epi-error-code"},
    epi_reason{YType::str, "epi-reason"},
    pfi_error_code{YType::uint32, "pfi-error-code"},
    pfi_reason{YType::str, "pfi-reason"},
    platform_error_code{YType::uint32, "platform-error-code"},
    platform_reason{YType::str, "platform-reason"},
    spio_error_code{YType::uint32, "spio-error-code"},
    spio_reason{YType::str, "spio-reason"}
{
    yang_name = "errors"; yang_parent_name = "interface-state-interface";
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::~Errors()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::has_data() const
{
    return caps_add_error_code.is_set
	|| caps_add_reason.is_set
	|| epi_error_code.is_set
	|| epi_reason.is_set
	|| pfi_error_code.is_set
	|| pfi_reason.is_set
	|| platform_error_code.is_set
	|| platform_reason.is_set
	|| spio_error_code.is_set
	|| spio_reason.is_set;
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::has_operation() const
{
    return is_set(operation)
	|| is_set(caps_add_error_code.operation)
	|| is_set(caps_add_reason.operation)
	|| is_set(epi_error_code.operation)
	|| is_set(epi_reason.operation)
	|| is_set(pfi_error_code.operation)
	|| is_set(pfi_reason.operation)
	|| is_set(platform_error_code.operation)
	|| is_set(platform_reason.operation)
	|| is_set(spio_error_code.operation)
	|| is_set(spio_reason.operation);
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";

    return path_buffer.str();

}

EntityPath EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Errors' in Cisco_IOS_XR_ethernet_link_oam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (caps_add_error_code.is_set || is_set(caps_add_error_code.operation)) leaf_name_data.push_back(caps_add_error_code.get_name_leafdata());
    if (caps_add_reason.is_set || is_set(caps_add_reason.operation)) leaf_name_data.push_back(caps_add_reason.get_name_leafdata());
    if (epi_error_code.is_set || is_set(epi_error_code.operation)) leaf_name_data.push_back(epi_error_code.get_name_leafdata());
    if (epi_reason.is_set || is_set(epi_reason.operation)) leaf_name_data.push_back(epi_reason.get_name_leafdata());
    if (pfi_error_code.is_set || is_set(pfi_error_code.operation)) leaf_name_data.push_back(pfi_error_code.get_name_leafdata());
    if (pfi_reason.is_set || is_set(pfi_reason.operation)) leaf_name_data.push_back(pfi_reason.get_name_leafdata());
    if (platform_error_code.is_set || is_set(platform_error_code.operation)) leaf_name_data.push_back(platform_error_code.get_name_leafdata());
    if (platform_reason.is_set || is_set(platform_reason.operation)) leaf_name_data.push_back(platform_reason.get_name_leafdata());
    if (spio_error_code.is_set || is_set(spio_error_code.operation)) leaf_name_data.push_back(spio_error_code.get_name_leafdata());
    if (spio_reason.is_set || is_set(spio_reason.operation)) leaf_name_data.push_back(spio_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::get_children()
{
    return children;
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "caps-add-error-code")
    {
        caps_add_error_code = value;
    }
    if(value_path == "caps-add-reason")
    {
        caps_add_reason = value;
    }
    if(value_path == "epi-error-code")
    {
        epi_error_code = value;
    }
    if(value_path == "epi-reason")
    {
        epi_reason = value;
    }
    if(value_path == "pfi-error-code")
    {
        pfi_error_code = value;
    }
    if(value_path == "pfi-reason")
    {
        pfi_reason = value;
    }
    if(value_path == "platform-error-code")
    {
        platform_error_code = value;
    }
    if(value_path == "platform-reason")
    {
        platform_reason = value;
    }
    if(value_path == "spio-error-code")
    {
        spio_error_code = value;
    }
    if(value_path == "spio-reason")
    {
        spio_reason = value;
    }
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::EfdTriggers()
    :
    capabilities_conflict{YType::boolean, "capabilities-conflict"},
    discovery_timed_out{YType::boolean, "discovery-timed-out"},
    link_fault_received{YType::boolean, "link-fault-received"},
    session_down{YType::boolean, "session-down"},
    wiring_conflict{YType::boolean, "wiring-conflict"}
{
    yang_name = "efd-triggers"; yang_parent_name = "interface-state-interface";
}

EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::~EfdTriggers()
{
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::has_data() const
{
    return capabilities_conflict.is_set
	|| discovery_timed_out.is_set
	|| link_fault_received.is_set
	|| session_down.is_set
	|| wiring_conflict.is_set;
}

bool EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities_conflict.operation)
	|| is_set(discovery_timed_out.operation)
	|| is_set(link_fault_received.operation)
	|| is_set(session_down.operation)
	|| is_set(wiring_conflict.operation);
}

std::string EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "efd-triggers";

    return path_buffer.str();

}

EntityPath EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EfdTriggers' in Cisco_IOS_XR_ethernet_link_oam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capabilities_conflict.is_set || is_set(capabilities_conflict.operation)) leaf_name_data.push_back(capabilities_conflict.get_name_leafdata());
    if (discovery_timed_out.is_set || is_set(discovery_timed_out.operation)) leaf_name_data.push_back(discovery_timed_out.get_name_leafdata());
    if (link_fault_received.is_set || is_set(link_fault_received.operation)) leaf_name_data.push_back(link_fault_received.get_name_leafdata());
    if (session_down.is_set || is_set(session_down.operation)) leaf_name_data.push_back(session_down.get_name_leafdata());
    if (wiring_conflict.is_set || is_set(wiring_conflict.operation)) leaf_name_data.push_back(wiring_conflict.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::get_children()
{
    return children;
}

void EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities-conflict")
    {
        capabilities_conflict = value;
    }
    if(value_path == "discovery-timed-out")
    {
        discovery_timed_out = value;
    }
    if(value_path == "link-fault-received")
    {
        link_fault_received = value;
    }
    if(value_path == "session-down")
    {
        session_down = value;
    }
    if(value_path == "wiring-conflict")
    {
        wiring_conflict = value;
    }
}

EtherLinkOam::RunningConfigInterfaces::RunningConfigInterfaces()
{
    yang_name = "running-config-interfaces"; yang_parent_name = "ether-link-oam";
}

EtherLinkOam::RunningConfigInterfaces::~RunningConfigInterfaces()
{
}

bool EtherLinkOam::RunningConfigInterfaces::has_data() const
{
    for (std::size_t index=0; index<running_config_interface.size(); index++)
    {
        if(running_config_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::RunningConfigInterfaces::has_operation() const
{
    for (std::size_t index=0; index<running_config_interface.size(); index++)
    {
        if(running_config_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::RunningConfigInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-config-interfaces";

    return path_buffer.str();

}

EntityPath EtherLinkOam::RunningConfigInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::RunningConfigInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "running-config-interface")
    {
        for(auto const & c : running_config_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface>();
        c->parent = this;
        running_config_interface.push_back(std::move(c));
        children[segment_path] = running_config_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::RunningConfigInterfaces::get_children()
{
    for (auto const & c : running_config_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::RunningConfigInterfaces::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::RunningConfigInterface()
    :
    member_interface{YType::str, "member-interface"},
    capabilities_conflict_action{YType::enumeration, "capabilities-conflict-action"},
    capabilities_conflict_action_overridden{YType::boolean, "capabilities-conflict-action-overridden"},
    connection_timeout{YType::uint8, "connection-timeout"},
    connection_timeout_overridden{YType::boolean, "connection-timeout-overridden"},
    critical_event_action{YType::enumeration, "critical-event-action"},
    critical_event_action_overridden{YType::boolean, "critical-event-action-overridden"},
    discovery_timeout_action{YType::enumeration, "discovery-timeout-action"},
    discovery_timeout_action_overridden{YType::boolean, "discovery-timeout-action-overridden"},
    dying_gasp_action{YType::enumeration, "dying-gasp-action"},
    dying_gasp_action_overridden{YType::boolean, "dying-gasp-action-overridden"},
    fast_hello_interval_enabled{YType::boolean, "fast-hello-interval-enabled"},
    fast_hello_interval_enabled_overridden{YType::boolean, "fast-hello-interval-enabled-overridden"},
    frame_period_threshold_high{YType::uint64, "frame-period-threshold-high"},
    frame_period_threshold_high_multiplier{YType::uint8, "frame-period-threshold-high-multiplier"},
    frame_period_threshold_high_overridden{YType::boolean, "frame-period-threshold-high-overridden"},
    frame_period_threshold_low{YType::uint64, "frame-period-threshold-low"},
    frame_period_threshold_low_multiplier{YType::uint8, "frame-period-threshold-low-multiplier"},
    frame_period_threshold_low_overridden{YType::boolean, "frame-period-threshold-low-overridden"},
    frame_period_threshold_units{YType::uint8, "frame-period-threshold-units"},
    frame_period_window{YType::uint32, "frame-period-window"},
    frame_period_window_multiplier{YType::uint8, "frame-period-window-multiplier"},
    frame_period_window_overridden{YType::boolean, "frame-period-window-overridden"},
    frame_period_window_units{YType::uint8, "frame-period-window-units"},
    frame_seconds_threshold_high{YType::uint64, "frame-seconds-threshold-high"},
    frame_seconds_threshold_high_overridden{YType::boolean, "frame-seconds-threshold-high-overridden"},
    frame_seconds_threshold_low{YType::uint64, "frame-seconds-threshold-low"},
    frame_seconds_threshold_low_overridden{YType::boolean, "frame-seconds-threshold-low-overridden"},
    frame_seconds_window{YType::uint32, "frame-seconds-window"},
    frame_seconds_window_overridden{YType::boolean, "frame-seconds-window-overridden"},
    frame_threshold_high{YType::uint64, "frame-threshold-high"},
    frame_threshold_high_multiplier{YType::uint8, "frame-threshold-high-multiplier"},
    frame_threshold_high_overridden{YType::boolean, "frame-threshold-high-overridden"},
    frame_threshold_low{YType::uint64, "frame-threshold-low"},
    frame_threshold_low_multiplier{YType::uint8, "frame-threshold-low-multiplier"},
    frame_threshold_low_overridden{YType::boolean, "frame-threshold-low-overridden"},
    frame_window{YType::uint32, "frame-window"},
    frame_window_overridden{YType::boolean, "frame-window-overridden"},
    high_threshold_action{YType::enumeration, "high-threshold-action"},
    high_threshold_action_overridden{YType::boolean, "high-threshold-action-overridden"},
    link_fault_action{YType::enumeration, "link-fault-action"},
    link_fault_action_overridden{YType::boolean, "link-fault-action-overridden"},
    link_monitor_enabled{YType::boolean, "link-monitor-enabled"},
    link_monitoring_enabled_overridden{YType::boolean, "link-monitoring-enabled-overridden"},
    mib_retrieval_enabled{YType::boolean, "mib-retrieval-enabled"},
    mib_retrieval_enabled_overridden{YType::boolean, "mib-retrieval-enabled-overridden"},
    mode{YType::enumeration, "mode"},
    mode_overridden{YType::boolean, "mode-overridden"},
    remote_loopback_action{YType::enumeration, "remote-loopback-action"},
    remote_loopback_action_overridden{YType::boolean, "remote-loopback-action-overridden"},
    remote_loopback_enabled{YType::boolean, "remote-loopback-enabled"},
    remote_loopback_enabled_overridden{YType::boolean, "remote-loopback-enabled-overridden"},
    require_link_monitoring{YType::boolean, "require-link-monitoring"},
    require_link_monitoring_overridden{YType::boolean, "require-link-monitoring-overridden"},
    require_loopback{YType::boolean, "require-loopback"},
    require_loopback_overridden{YType::boolean, "require-loopback-overridden"},
    require_mib_retrieval_overridden{YType::boolean, "require-mib-retrieval-overridden"},
    require_mode_overridden{YType::boolean, "require-mode-overridden"},
    require_remote_mib_retrieval{YType::boolean, "require-remote-mib-retrieval"},
    require_remote_mode{YType::enumeration, "require-remote-mode"},
    session_down_action{YType::enumeration, "session-down-action"},
    session_down_action_overridden{YType::boolean, "session-down-action-overridden"},
    session_up_action{YType::enumeration, "session-up-action"},
    session_up_action_overridden{YType::boolean, "session-up-action-overridden"},
    symbol_period_threshold_high{YType::uint64, "symbol-period-threshold-high"},
    symbol_period_threshold_high_multiplier{YType::uint8, "symbol-period-threshold-high-multiplier"},
    symbol_period_threshold_high_overridden{YType::boolean, "symbol-period-threshold-high-overridden"},
    symbol_period_threshold_low{YType::uint64, "symbol-period-threshold-low"},
    symbol_period_threshold_low_multiplier{YType::uint8, "symbol-period-threshold-low-multiplier"},
    symbol_period_threshold_low_overridden{YType::boolean, "symbol-period-threshold-low-overridden"},
    symbol_period_threshold_units{YType::uint8, "symbol-period-threshold-units"},
    symbol_period_window{YType::uint32, "symbol-period-window"},
    symbol_period_window_multiplier{YType::uint8, "symbol-period-window-multiplier"},
    symbol_period_window_overridden{YType::boolean, "symbol-period-window-overridden"},
    symbol_period_window_units{YType::uint8, "symbol-period-window-units"},
    udlf_enabled{YType::boolean, "udlf-enabled"},
    udlf_enabled_overridden{YType::boolean, "udlf-enabled-overridden"},
    wiring_conflict_action{YType::enumeration, "wiring-conflict-action"},
    wiring_conflict_action_overridden{YType::boolean, "wiring-conflict-action-overridden"}
{
    yang_name = "running-config-interface"; yang_parent_name = "running-config-interfaces";
}

EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::~RunningConfigInterface()
{
}

bool EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::has_data() const
{
    return member_interface.is_set
	|| capabilities_conflict_action.is_set
	|| capabilities_conflict_action_overridden.is_set
	|| connection_timeout.is_set
	|| connection_timeout_overridden.is_set
	|| critical_event_action.is_set
	|| critical_event_action_overridden.is_set
	|| discovery_timeout_action.is_set
	|| discovery_timeout_action_overridden.is_set
	|| dying_gasp_action.is_set
	|| dying_gasp_action_overridden.is_set
	|| fast_hello_interval_enabled.is_set
	|| fast_hello_interval_enabled_overridden.is_set
	|| frame_period_threshold_high.is_set
	|| frame_period_threshold_high_multiplier.is_set
	|| frame_period_threshold_high_overridden.is_set
	|| frame_period_threshold_low.is_set
	|| frame_period_threshold_low_multiplier.is_set
	|| frame_period_threshold_low_overridden.is_set
	|| frame_period_threshold_units.is_set
	|| frame_period_window.is_set
	|| frame_period_window_multiplier.is_set
	|| frame_period_window_overridden.is_set
	|| frame_period_window_units.is_set
	|| frame_seconds_threshold_high.is_set
	|| frame_seconds_threshold_high_overridden.is_set
	|| frame_seconds_threshold_low.is_set
	|| frame_seconds_threshold_low_overridden.is_set
	|| frame_seconds_window.is_set
	|| frame_seconds_window_overridden.is_set
	|| frame_threshold_high.is_set
	|| frame_threshold_high_multiplier.is_set
	|| frame_threshold_high_overridden.is_set
	|| frame_threshold_low.is_set
	|| frame_threshold_low_multiplier.is_set
	|| frame_threshold_low_overridden.is_set
	|| frame_window.is_set
	|| frame_window_overridden.is_set
	|| high_threshold_action.is_set
	|| high_threshold_action_overridden.is_set
	|| link_fault_action.is_set
	|| link_fault_action_overridden.is_set
	|| link_monitor_enabled.is_set
	|| link_monitoring_enabled_overridden.is_set
	|| mib_retrieval_enabled.is_set
	|| mib_retrieval_enabled_overridden.is_set
	|| mode.is_set
	|| mode_overridden.is_set
	|| remote_loopback_action.is_set
	|| remote_loopback_action_overridden.is_set
	|| remote_loopback_enabled.is_set
	|| remote_loopback_enabled_overridden.is_set
	|| require_link_monitoring.is_set
	|| require_link_monitoring_overridden.is_set
	|| require_loopback.is_set
	|| require_loopback_overridden.is_set
	|| require_mib_retrieval_overridden.is_set
	|| require_mode_overridden.is_set
	|| require_remote_mib_retrieval.is_set
	|| require_remote_mode.is_set
	|| session_down_action.is_set
	|| session_down_action_overridden.is_set
	|| session_up_action.is_set
	|| session_up_action_overridden.is_set
	|| symbol_period_threshold_high.is_set
	|| symbol_period_threshold_high_multiplier.is_set
	|| symbol_period_threshold_high_overridden.is_set
	|| symbol_period_threshold_low.is_set
	|| symbol_period_threshold_low_multiplier.is_set
	|| symbol_period_threshold_low_overridden.is_set
	|| symbol_period_threshold_units.is_set
	|| symbol_period_window.is_set
	|| symbol_period_window_multiplier.is_set
	|| symbol_period_window_overridden.is_set
	|| symbol_period_window_units.is_set
	|| udlf_enabled.is_set
	|| udlf_enabled_overridden.is_set
	|| wiring_conflict_action.is_set
	|| wiring_conflict_action_overridden.is_set;
}

bool EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(capabilities_conflict_action.operation)
	|| is_set(capabilities_conflict_action_overridden.operation)
	|| is_set(connection_timeout.operation)
	|| is_set(connection_timeout_overridden.operation)
	|| is_set(critical_event_action.operation)
	|| is_set(critical_event_action_overridden.operation)
	|| is_set(discovery_timeout_action.operation)
	|| is_set(discovery_timeout_action_overridden.operation)
	|| is_set(dying_gasp_action.operation)
	|| is_set(dying_gasp_action_overridden.operation)
	|| is_set(fast_hello_interval_enabled.operation)
	|| is_set(fast_hello_interval_enabled_overridden.operation)
	|| is_set(frame_period_threshold_high.operation)
	|| is_set(frame_period_threshold_high_multiplier.operation)
	|| is_set(frame_period_threshold_high_overridden.operation)
	|| is_set(frame_period_threshold_low.operation)
	|| is_set(frame_period_threshold_low_multiplier.operation)
	|| is_set(frame_period_threshold_low_overridden.operation)
	|| is_set(frame_period_threshold_units.operation)
	|| is_set(frame_period_window.operation)
	|| is_set(frame_period_window_multiplier.operation)
	|| is_set(frame_period_window_overridden.operation)
	|| is_set(frame_period_window_units.operation)
	|| is_set(frame_seconds_threshold_high.operation)
	|| is_set(frame_seconds_threshold_high_overridden.operation)
	|| is_set(frame_seconds_threshold_low.operation)
	|| is_set(frame_seconds_threshold_low_overridden.operation)
	|| is_set(frame_seconds_window.operation)
	|| is_set(frame_seconds_window_overridden.operation)
	|| is_set(frame_threshold_high.operation)
	|| is_set(frame_threshold_high_multiplier.operation)
	|| is_set(frame_threshold_high_overridden.operation)
	|| is_set(frame_threshold_low.operation)
	|| is_set(frame_threshold_low_multiplier.operation)
	|| is_set(frame_threshold_low_overridden.operation)
	|| is_set(frame_window.operation)
	|| is_set(frame_window_overridden.operation)
	|| is_set(high_threshold_action.operation)
	|| is_set(high_threshold_action_overridden.operation)
	|| is_set(link_fault_action.operation)
	|| is_set(link_fault_action_overridden.operation)
	|| is_set(link_monitor_enabled.operation)
	|| is_set(link_monitoring_enabled_overridden.operation)
	|| is_set(mib_retrieval_enabled.operation)
	|| is_set(mib_retrieval_enabled_overridden.operation)
	|| is_set(mode.operation)
	|| is_set(mode_overridden.operation)
	|| is_set(remote_loopback_action.operation)
	|| is_set(remote_loopback_action_overridden.operation)
	|| is_set(remote_loopback_enabled.operation)
	|| is_set(remote_loopback_enabled_overridden.operation)
	|| is_set(require_link_monitoring.operation)
	|| is_set(require_link_monitoring_overridden.operation)
	|| is_set(require_loopback.operation)
	|| is_set(require_loopback_overridden.operation)
	|| is_set(require_mib_retrieval_overridden.operation)
	|| is_set(require_mode_overridden.operation)
	|| is_set(require_remote_mib_retrieval.operation)
	|| is_set(require_remote_mode.operation)
	|| is_set(session_down_action.operation)
	|| is_set(session_down_action_overridden.operation)
	|| is_set(session_up_action.operation)
	|| is_set(session_up_action_overridden.operation)
	|| is_set(symbol_period_threshold_high.operation)
	|| is_set(symbol_period_threshold_high_multiplier.operation)
	|| is_set(symbol_period_threshold_high_overridden.operation)
	|| is_set(symbol_period_threshold_low.operation)
	|| is_set(symbol_period_threshold_low_multiplier.operation)
	|| is_set(symbol_period_threshold_low_overridden.operation)
	|| is_set(symbol_period_threshold_units.operation)
	|| is_set(symbol_period_window.operation)
	|| is_set(symbol_period_window_multiplier.operation)
	|| is_set(symbol_period_window_overridden.operation)
	|| is_set(symbol_period_window_units.operation)
	|| is_set(udlf_enabled.operation)
	|| is_set(udlf_enabled_overridden.operation)
	|| is_set(wiring_conflict_action.operation)
	|| is_set(wiring_conflict_action_overridden.operation);
}

std::string EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-config-interface" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/running-config-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (capabilities_conflict_action.is_set || is_set(capabilities_conflict_action.operation)) leaf_name_data.push_back(capabilities_conflict_action.get_name_leafdata());
    if (capabilities_conflict_action_overridden.is_set || is_set(capabilities_conflict_action_overridden.operation)) leaf_name_data.push_back(capabilities_conflict_action_overridden.get_name_leafdata());
    if (connection_timeout.is_set || is_set(connection_timeout.operation)) leaf_name_data.push_back(connection_timeout.get_name_leafdata());
    if (connection_timeout_overridden.is_set || is_set(connection_timeout_overridden.operation)) leaf_name_data.push_back(connection_timeout_overridden.get_name_leafdata());
    if (critical_event_action.is_set || is_set(critical_event_action.operation)) leaf_name_data.push_back(critical_event_action.get_name_leafdata());
    if (critical_event_action_overridden.is_set || is_set(critical_event_action_overridden.operation)) leaf_name_data.push_back(critical_event_action_overridden.get_name_leafdata());
    if (discovery_timeout_action.is_set || is_set(discovery_timeout_action.operation)) leaf_name_data.push_back(discovery_timeout_action.get_name_leafdata());
    if (discovery_timeout_action_overridden.is_set || is_set(discovery_timeout_action_overridden.operation)) leaf_name_data.push_back(discovery_timeout_action_overridden.get_name_leafdata());
    if (dying_gasp_action.is_set || is_set(dying_gasp_action.operation)) leaf_name_data.push_back(dying_gasp_action.get_name_leafdata());
    if (dying_gasp_action_overridden.is_set || is_set(dying_gasp_action_overridden.operation)) leaf_name_data.push_back(dying_gasp_action_overridden.get_name_leafdata());
    if (fast_hello_interval_enabled.is_set || is_set(fast_hello_interval_enabled.operation)) leaf_name_data.push_back(fast_hello_interval_enabled.get_name_leafdata());
    if (fast_hello_interval_enabled_overridden.is_set || is_set(fast_hello_interval_enabled_overridden.operation)) leaf_name_data.push_back(fast_hello_interval_enabled_overridden.get_name_leafdata());
    if (frame_period_threshold_high.is_set || is_set(frame_period_threshold_high.operation)) leaf_name_data.push_back(frame_period_threshold_high.get_name_leafdata());
    if (frame_period_threshold_high_multiplier.is_set || is_set(frame_period_threshold_high_multiplier.operation)) leaf_name_data.push_back(frame_period_threshold_high_multiplier.get_name_leafdata());
    if (frame_period_threshold_high_overridden.is_set || is_set(frame_period_threshold_high_overridden.operation)) leaf_name_data.push_back(frame_period_threshold_high_overridden.get_name_leafdata());
    if (frame_period_threshold_low.is_set || is_set(frame_period_threshold_low.operation)) leaf_name_data.push_back(frame_period_threshold_low.get_name_leafdata());
    if (frame_period_threshold_low_multiplier.is_set || is_set(frame_period_threshold_low_multiplier.operation)) leaf_name_data.push_back(frame_period_threshold_low_multiplier.get_name_leafdata());
    if (frame_period_threshold_low_overridden.is_set || is_set(frame_period_threshold_low_overridden.operation)) leaf_name_data.push_back(frame_period_threshold_low_overridden.get_name_leafdata());
    if (frame_period_threshold_units.is_set || is_set(frame_period_threshold_units.operation)) leaf_name_data.push_back(frame_period_threshold_units.get_name_leafdata());
    if (frame_period_window.is_set || is_set(frame_period_window.operation)) leaf_name_data.push_back(frame_period_window.get_name_leafdata());
    if (frame_period_window_multiplier.is_set || is_set(frame_period_window_multiplier.operation)) leaf_name_data.push_back(frame_period_window_multiplier.get_name_leafdata());
    if (frame_period_window_overridden.is_set || is_set(frame_period_window_overridden.operation)) leaf_name_data.push_back(frame_period_window_overridden.get_name_leafdata());
    if (frame_period_window_units.is_set || is_set(frame_period_window_units.operation)) leaf_name_data.push_back(frame_period_window_units.get_name_leafdata());
    if (frame_seconds_threshold_high.is_set || is_set(frame_seconds_threshold_high.operation)) leaf_name_data.push_back(frame_seconds_threshold_high.get_name_leafdata());
    if (frame_seconds_threshold_high_overridden.is_set || is_set(frame_seconds_threshold_high_overridden.operation)) leaf_name_data.push_back(frame_seconds_threshold_high_overridden.get_name_leafdata());
    if (frame_seconds_threshold_low.is_set || is_set(frame_seconds_threshold_low.operation)) leaf_name_data.push_back(frame_seconds_threshold_low.get_name_leafdata());
    if (frame_seconds_threshold_low_overridden.is_set || is_set(frame_seconds_threshold_low_overridden.operation)) leaf_name_data.push_back(frame_seconds_threshold_low_overridden.get_name_leafdata());
    if (frame_seconds_window.is_set || is_set(frame_seconds_window.operation)) leaf_name_data.push_back(frame_seconds_window.get_name_leafdata());
    if (frame_seconds_window_overridden.is_set || is_set(frame_seconds_window_overridden.operation)) leaf_name_data.push_back(frame_seconds_window_overridden.get_name_leafdata());
    if (frame_threshold_high.is_set || is_set(frame_threshold_high.operation)) leaf_name_data.push_back(frame_threshold_high.get_name_leafdata());
    if (frame_threshold_high_multiplier.is_set || is_set(frame_threshold_high_multiplier.operation)) leaf_name_data.push_back(frame_threshold_high_multiplier.get_name_leafdata());
    if (frame_threshold_high_overridden.is_set || is_set(frame_threshold_high_overridden.operation)) leaf_name_data.push_back(frame_threshold_high_overridden.get_name_leafdata());
    if (frame_threshold_low.is_set || is_set(frame_threshold_low.operation)) leaf_name_data.push_back(frame_threshold_low.get_name_leafdata());
    if (frame_threshold_low_multiplier.is_set || is_set(frame_threshold_low_multiplier.operation)) leaf_name_data.push_back(frame_threshold_low_multiplier.get_name_leafdata());
    if (frame_threshold_low_overridden.is_set || is_set(frame_threshold_low_overridden.operation)) leaf_name_data.push_back(frame_threshold_low_overridden.get_name_leafdata());
    if (frame_window.is_set || is_set(frame_window.operation)) leaf_name_data.push_back(frame_window.get_name_leafdata());
    if (frame_window_overridden.is_set || is_set(frame_window_overridden.operation)) leaf_name_data.push_back(frame_window_overridden.get_name_leafdata());
    if (high_threshold_action.is_set || is_set(high_threshold_action.operation)) leaf_name_data.push_back(high_threshold_action.get_name_leafdata());
    if (high_threshold_action_overridden.is_set || is_set(high_threshold_action_overridden.operation)) leaf_name_data.push_back(high_threshold_action_overridden.get_name_leafdata());
    if (link_fault_action.is_set || is_set(link_fault_action.operation)) leaf_name_data.push_back(link_fault_action.get_name_leafdata());
    if (link_fault_action_overridden.is_set || is_set(link_fault_action_overridden.operation)) leaf_name_data.push_back(link_fault_action_overridden.get_name_leafdata());
    if (link_monitor_enabled.is_set || is_set(link_monitor_enabled.operation)) leaf_name_data.push_back(link_monitor_enabled.get_name_leafdata());
    if (link_monitoring_enabled_overridden.is_set || is_set(link_monitoring_enabled_overridden.operation)) leaf_name_data.push_back(link_monitoring_enabled_overridden.get_name_leafdata());
    if (mib_retrieval_enabled.is_set || is_set(mib_retrieval_enabled.operation)) leaf_name_data.push_back(mib_retrieval_enabled.get_name_leafdata());
    if (mib_retrieval_enabled_overridden.is_set || is_set(mib_retrieval_enabled_overridden.operation)) leaf_name_data.push_back(mib_retrieval_enabled_overridden.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mode_overridden.is_set || is_set(mode_overridden.operation)) leaf_name_data.push_back(mode_overridden.get_name_leafdata());
    if (remote_loopback_action.is_set || is_set(remote_loopback_action.operation)) leaf_name_data.push_back(remote_loopback_action.get_name_leafdata());
    if (remote_loopback_action_overridden.is_set || is_set(remote_loopback_action_overridden.operation)) leaf_name_data.push_back(remote_loopback_action_overridden.get_name_leafdata());
    if (remote_loopback_enabled.is_set || is_set(remote_loopback_enabled.operation)) leaf_name_data.push_back(remote_loopback_enabled.get_name_leafdata());
    if (remote_loopback_enabled_overridden.is_set || is_set(remote_loopback_enabled_overridden.operation)) leaf_name_data.push_back(remote_loopback_enabled_overridden.get_name_leafdata());
    if (require_link_monitoring.is_set || is_set(require_link_monitoring.operation)) leaf_name_data.push_back(require_link_monitoring.get_name_leafdata());
    if (require_link_monitoring_overridden.is_set || is_set(require_link_monitoring_overridden.operation)) leaf_name_data.push_back(require_link_monitoring_overridden.get_name_leafdata());
    if (require_loopback.is_set || is_set(require_loopback.operation)) leaf_name_data.push_back(require_loopback.get_name_leafdata());
    if (require_loopback_overridden.is_set || is_set(require_loopback_overridden.operation)) leaf_name_data.push_back(require_loopback_overridden.get_name_leafdata());
    if (require_mib_retrieval_overridden.is_set || is_set(require_mib_retrieval_overridden.operation)) leaf_name_data.push_back(require_mib_retrieval_overridden.get_name_leafdata());
    if (require_mode_overridden.is_set || is_set(require_mode_overridden.operation)) leaf_name_data.push_back(require_mode_overridden.get_name_leafdata());
    if (require_remote_mib_retrieval.is_set || is_set(require_remote_mib_retrieval.operation)) leaf_name_data.push_back(require_remote_mib_retrieval.get_name_leafdata());
    if (require_remote_mode.is_set || is_set(require_remote_mode.operation)) leaf_name_data.push_back(require_remote_mode.get_name_leafdata());
    if (session_down_action.is_set || is_set(session_down_action.operation)) leaf_name_data.push_back(session_down_action.get_name_leafdata());
    if (session_down_action_overridden.is_set || is_set(session_down_action_overridden.operation)) leaf_name_data.push_back(session_down_action_overridden.get_name_leafdata());
    if (session_up_action.is_set || is_set(session_up_action.operation)) leaf_name_data.push_back(session_up_action.get_name_leafdata());
    if (session_up_action_overridden.is_set || is_set(session_up_action_overridden.operation)) leaf_name_data.push_back(session_up_action_overridden.get_name_leafdata());
    if (symbol_period_threshold_high.is_set || is_set(symbol_period_threshold_high.operation)) leaf_name_data.push_back(symbol_period_threshold_high.get_name_leafdata());
    if (symbol_period_threshold_high_multiplier.is_set || is_set(symbol_period_threshold_high_multiplier.operation)) leaf_name_data.push_back(symbol_period_threshold_high_multiplier.get_name_leafdata());
    if (symbol_period_threshold_high_overridden.is_set || is_set(symbol_period_threshold_high_overridden.operation)) leaf_name_data.push_back(symbol_period_threshold_high_overridden.get_name_leafdata());
    if (symbol_period_threshold_low.is_set || is_set(symbol_period_threshold_low.operation)) leaf_name_data.push_back(symbol_period_threshold_low.get_name_leafdata());
    if (symbol_period_threshold_low_multiplier.is_set || is_set(symbol_period_threshold_low_multiplier.operation)) leaf_name_data.push_back(symbol_period_threshold_low_multiplier.get_name_leafdata());
    if (symbol_period_threshold_low_overridden.is_set || is_set(symbol_period_threshold_low_overridden.operation)) leaf_name_data.push_back(symbol_period_threshold_low_overridden.get_name_leafdata());
    if (symbol_period_threshold_units.is_set || is_set(symbol_period_threshold_units.operation)) leaf_name_data.push_back(symbol_period_threshold_units.get_name_leafdata());
    if (symbol_period_window.is_set || is_set(symbol_period_window.operation)) leaf_name_data.push_back(symbol_period_window.get_name_leafdata());
    if (symbol_period_window_multiplier.is_set || is_set(symbol_period_window_multiplier.operation)) leaf_name_data.push_back(symbol_period_window_multiplier.get_name_leafdata());
    if (symbol_period_window_overridden.is_set || is_set(symbol_period_window_overridden.operation)) leaf_name_data.push_back(symbol_period_window_overridden.get_name_leafdata());
    if (symbol_period_window_units.is_set || is_set(symbol_period_window_units.operation)) leaf_name_data.push_back(symbol_period_window_units.get_name_leafdata());
    if (udlf_enabled.is_set || is_set(udlf_enabled.operation)) leaf_name_data.push_back(udlf_enabled.get_name_leafdata());
    if (udlf_enabled_overridden.is_set || is_set(udlf_enabled_overridden.operation)) leaf_name_data.push_back(udlf_enabled_overridden.get_name_leafdata());
    if (wiring_conflict_action.is_set || is_set(wiring_conflict_action.operation)) leaf_name_data.push_back(wiring_conflict_action.get_name_leafdata());
    if (wiring_conflict_action_overridden.is_set || is_set(wiring_conflict_action_overridden.operation)) leaf_name_data.push_back(wiring_conflict_action_overridden.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::get_children()
{
    return children;
}

void EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "capabilities-conflict-action")
    {
        capabilities_conflict_action = value;
    }
    if(value_path == "capabilities-conflict-action-overridden")
    {
        capabilities_conflict_action_overridden = value;
    }
    if(value_path == "connection-timeout")
    {
        connection_timeout = value;
    }
    if(value_path == "connection-timeout-overridden")
    {
        connection_timeout_overridden = value;
    }
    if(value_path == "critical-event-action")
    {
        critical_event_action = value;
    }
    if(value_path == "critical-event-action-overridden")
    {
        critical_event_action_overridden = value;
    }
    if(value_path == "discovery-timeout-action")
    {
        discovery_timeout_action = value;
    }
    if(value_path == "discovery-timeout-action-overridden")
    {
        discovery_timeout_action_overridden = value;
    }
    if(value_path == "dying-gasp-action")
    {
        dying_gasp_action = value;
    }
    if(value_path == "dying-gasp-action-overridden")
    {
        dying_gasp_action_overridden = value;
    }
    if(value_path == "fast-hello-interval-enabled")
    {
        fast_hello_interval_enabled = value;
    }
    if(value_path == "fast-hello-interval-enabled-overridden")
    {
        fast_hello_interval_enabled_overridden = value;
    }
    if(value_path == "frame-period-threshold-high")
    {
        frame_period_threshold_high = value;
    }
    if(value_path == "frame-period-threshold-high-multiplier")
    {
        frame_period_threshold_high_multiplier = value;
    }
    if(value_path == "frame-period-threshold-high-overridden")
    {
        frame_period_threshold_high_overridden = value;
    }
    if(value_path == "frame-period-threshold-low")
    {
        frame_period_threshold_low = value;
    }
    if(value_path == "frame-period-threshold-low-multiplier")
    {
        frame_period_threshold_low_multiplier = value;
    }
    if(value_path == "frame-period-threshold-low-overridden")
    {
        frame_period_threshold_low_overridden = value;
    }
    if(value_path == "frame-period-threshold-units")
    {
        frame_period_threshold_units = value;
    }
    if(value_path == "frame-period-window")
    {
        frame_period_window = value;
    }
    if(value_path == "frame-period-window-multiplier")
    {
        frame_period_window_multiplier = value;
    }
    if(value_path == "frame-period-window-overridden")
    {
        frame_period_window_overridden = value;
    }
    if(value_path == "frame-period-window-units")
    {
        frame_period_window_units = value;
    }
    if(value_path == "frame-seconds-threshold-high")
    {
        frame_seconds_threshold_high = value;
    }
    if(value_path == "frame-seconds-threshold-high-overridden")
    {
        frame_seconds_threshold_high_overridden = value;
    }
    if(value_path == "frame-seconds-threshold-low")
    {
        frame_seconds_threshold_low = value;
    }
    if(value_path == "frame-seconds-threshold-low-overridden")
    {
        frame_seconds_threshold_low_overridden = value;
    }
    if(value_path == "frame-seconds-window")
    {
        frame_seconds_window = value;
    }
    if(value_path == "frame-seconds-window-overridden")
    {
        frame_seconds_window_overridden = value;
    }
    if(value_path == "frame-threshold-high")
    {
        frame_threshold_high = value;
    }
    if(value_path == "frame-threshold-high-multiplier")
    {
        frame_threshold_high_multiplier = value;
    }
    if(value_path == "frame-threshold-high-overridden")
    {
        frame_threshold_high_overridden = value;
    }
    if(value_path == "frame-threshold-low")
    {
        frame_threshold_low = value;
    }
    if(value_path == "frame-threshold-low-multiplier")
    {
        frame_threshold_low_multiplier = value;
    }
    if(value_path == "frame-threshold-low-overridden")
    {
        frame_threshold_low_overridden = value;
    }
    if(value_path == "frame-window")
    {
        frame_window = value;
    }
    if(value_path == "frame-window-overridden")
    {
        frame_window_overridden = value;
    }
    if(value_path == "high-threshold-action")
    {
        high_threshold_action = value;
    }
    if(value_path == "high-threshold-action-overridden")
    {
        high_threshold_action_overridden = value;
    }
    if(value_path == "link-fault-action")
    {
        link_fault_action = value;
    }
    if(value_path == "link-fault-action-overridden")
    {
        link_fault_action_overridden = value;
    }
    if(value_path == "link-monitor-enabled")
    {
        link_monitor_enabled = value;
    }
    if(value_path == "link-monitoring-enabled-overridden")
    {
        link_monitoring_enabled_overridden = value;
    }
    if(value_path == "mib-retrieval-enabled")
    {
        mib_retrieval_enabled = value;
    }
    if(value_path == "mib-retrieval-enabled-overridden")
    {
        mib_retrieval_enabled_overridden = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "mode-overridden")
    {
        mode_overridden = value;
    }
    if(value_path == "remote-loopback-action")
    {
        remote_loopback_action = value;
    }
    if(value_path == "remote-loopback-action-overridden")
    {
        remote_loopback_action_overridden = value;
    }
    if(value_path == "remote-loopback-enabled")
    {
        remote_loopback_enabled = value;
    }
    if(value_path == "remote-loopback-enabled-overridden")
    {
        remote_loopback_enabled_overridden = value;
    }
    if(value_path == "require-link-monitoring")
    {
        require_link_monitoring = value;
    }
    if(value_path == "require-link-monitoring-overridden")
    {
        require_link_monitoring_overridden = value;
    }
    if(value_path == "require-loopback")
    {
        require_loopback = value;
    }
    if(value_path == "require-loopback-overridden")
    {
        require_loopback_overridden = value;
    }
    if(value_path == "require-mib-retrieval-overridden")
    {
        require_mib_retrieval_overridden = value;
    }
    if(value_path == "require-mode-overridden")
    {
        require_mode_overridden = value;
    }
    if(value_path == "require-remote-mib-retrieval")
    {
        require_remote_mib_retrieval = value;
    }
    if(value_path == "require-remote-mode")
    {
        require_remote_mode = value;
    }
    if(value_path == "session-down-action")
    {
        session_down_action = value;
    }
    if(value_path == "session-down-action-overridden")
    {
        session_down_action_overridden = value;
    }
    if(value_path == "session-up-action")
    {
        session_up_action = value;
    }
    if(value_path == "session-up-action-overridden")
    {
        session_up_action_overridden = value;
    }
    if(value_path == "symbol-period-threshold-high")
    {
        symbol_period_threshold_high = value;
    }
    if(value_path == "symbol-period-threshold-high-multiplier")
    {
        symbol_period_threshold_high_multiplier = value;
    }
    if(value_path == "symbol-period-threshold-high-overridden")
    {
        symbol_period_threshold_high_overridden = value;
    }
    if(value_path == "symbol-period-threshold-low")
    {
        symbol_period_threshold_low = value;
    }
    if(value_path == "symbol-period-threshold-low-multiplier")
    {
        symbol_period_threshold_low_multiplier = value;
    }
    if(value_path == "symbol-period-threshold-low-overridden")
    {
        symbol_period_threshold_low_overridden = value;
    }
    if(value_path == "symbol-period-threshold-units")
    {
        symbol_period_threshold_units = value;
    }
    if(value_path == "symbol-period-window")
    {
        symbol_period_window = value;
    }
    if(value_path == "symbol-period-window-multiplier")
    {
        symbol_period_window_multiplier = value;
    }
    if(value_path == "symbol-period-window-overridden")
    {
        symbol_period_window_overridden = value;
    }
    if(value_path == "symbol-period-window-units")
    {
        symbol_period_window_units = value;
    }
    if(value_path == "udlf-enabled")
    {
        udlf_enabled = value;
    }
    if(value_path == "udlf-enabled-overridden")
    {
        udlf_enabled_overridden = value;
    }
    if(value_path == "wiring-conflict-action")
    {
        wiring_conflict_action = value;
    }
    if(value_path == "wiring-conflict-action-overridden")
    {
        wiring_conflict_action_overridden = value;
    }
}

EtherLinkOam::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ether-link-oam";
}

EtherLinkOam::Nodes::~Nodes()
{
}

bool EtherLinkOam::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath EtherLinkOam::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::Nodes::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    summary(std::make_shared<EtherLinkOam::Nodes::Node::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "node"; yang_parent_name = "nodes";
}

EtherLinkOam::Nodes::Node::~Node()
{
}

bool EtherLinkOam::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (summary !=  nullptr && summary->has_data());
}

bool EtherLinkOam::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string EtherLinkOam::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<EtherLinkOam::Nodes::Node::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::Nodes::Node::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void EtherLinkOam::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

EtherLinkOam::Nodes::Node::Summary::Summary()
    :
    active_send{YType::uint32, "active-send"},
    evaluating{YType::uint32, "evaluating"},
    events{YType::uint64, "events"},
    interfaces{YType::uint32, "interfaces"},
    local_accept{YType::uint32, "local-accept"},
    local_events{YType::uint64, "local-events"},
    local_frame{YType::uint64, "local-frame"},
    local_frame_period{YType::uint64, "local-frame-period"},
    local_frame_seconds{YType::uint64, "local-frame-seconds"},
    local_reject{YType::uint32, "local-reject"},
    local_symbol_period{YType::uint64, "local-symbol-period"},
    loopback_mode{YType::uint32, "loopback-mode"},
    miswired_connections{YType::uint32, "miswired-connections"},
    operational{YType::uint32, "operational"},
    passive_wait{YType::uint32, "passive-wait"},
    port_down{YType::uint32, "port-down"},
    remote_events{YType::uint64, "remote-events"},
    remote_frame{YType::uint64, "remote-frame"},
    remote_frame_period{YType::uint64, "remote-frame-period"},
    remote_frame_seconds{YType::uint64, "remote-frame-seconds"},
    remote_reject{YType::uint32, "remote-reject"},
    remote_symbol_period{YType::uint64, "remote-symbol-period"}
{
    yang_name = "summary"; yang_parent_name = "node";
}

EtherLinkOam::Nodes::Node::Summary::~Summary()
{
}

bool EtherLinkOam::Nodes::Node::Summary::has_data() const
{
    return active_send.is_set
	|| evaluating.is_set
	|| events.is_set
	|| interfaces.is_set
	|| local_accept.is_set
	|| local_events.is_set
	|| local_frame.is_set
	|| local_frame_period.is_set
	|| local_frame_seconds.is_set
	|| local_reject.is_set
	|| local_symbol_period.is_set
	|| loopback_mode.is_set
	|| miswired_connections.is_set
	|| operational.is_set
	|| passive_wait.is_set
	|| port_down.is_set
	|| remote_events.is_set
	|| remote_frame.is_set
	|| remote_frame_period.is_set
	|| remote_frame_seconds.is_set
	|| remote_reject.is_set
	|| remote_symbol_period.is_set;
}

bool EtherLinkOam::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(active_send.operation)
	|| is_set(evaluating.operation)
	|| is_set(events.operation)
	|| is_set(interfaces.operation)
	|| is_set(local_accept.operation)
	|| is_set(local_events.operation)
	|| is_set(local_frame.operation)
	|| is_set(local_frame_period.operation)
	|| is_set(local_frame_seconds.operation)
	|| is_set(local_reject.operation)
	|| is_set(local_symbol_period.operation)
	|| is_set(loopback_mode.operation)
	|| is_set(miswired_connections.operation)
	|| is_set(operational.operation)
	|| is_set(passive_wait.operation)
	|| is_set(port_down.operation)
	|| is_set(remote_events.operation)
	|| is_set(remote_frame.operation)
	|| is_set(remote_frame_period.operation)
	|| is_set(remote_frame_seconds.operation)
	|| is_set(remote_reject.operation)
	|| is_set(remote_symbol_period.operation);
}

std::string EtherLinkOam::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath EtherLinkOam::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ethernet_link_oam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_send.is_set || is_set(active_send.operation)) leaf_name_data.push_back(active_send.get_name_leafdata());
    if (evaluating.is_set || is_set(evaluating.operation)) leaf_name_data.push_back(evaluating.get_name_leafdata());
    if (events.is_set || is_set(events.operation)) leaf_name_data.push_back(events.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (local_accept.is_set || is_set(local_accept.operation)) leaf_name_data.push_back(local_accept.get_name_leafdata());
    if (local_events.is_set || is_set(local_events.operation)) leaf_name_data.push_back(local_events.get_name_leafdata());
    if (local_frame.is_set || is_set(local_frame.operation)) leaf_name_data.push_back(local_frame.get_name_leafdata());
    if (local_frame_period.is_set || is_set(local_frame_period.operation)) leaf_name_data.push_back(local_frame_period.get_name_leafdata());
    if (local_frame_seconds.is_set || is_set(local_frame_seconds.operation)) leaf_name_data.push_back(local_frame_seconds.get_name_leafdata());
    if (local_reject.is_set || is_set(local_reject.operation)) leaf_name_data.push_back(local_reject.get_name_leafdata());
    if (local_symbol_period.is_set || is_set(local_symbol_period.operation)) leaf_name_data.push_back(local_symbol_period.get_name_leafdata());
    if (loopback_mode.is_set || is_set(loopback_mode.operation)) leaf_name_data.push_back(loopback_mode.get_name_leafdata());
    if (miswired_connections.is_set || is_set(miswired_connections.operation)) leaf_name_data.push_back(miswired_connections.get_name_leafdata());
    if (operational.is_set || is_set(operational.operation)) leaf_name_data.push_back(operational.get_name_leafdata());
    if (passive_wait.is_set || is_set(passive_wait.operation)) leaf_name_data.push_back(passive_wait.get_name_leafdata());
    if (port_down.is_set || is_set(port_down.operation)) leaf_name_data.push_back(port_down.get_name_leafdata());
    if (remote_events.is_set || is_set(remote_events.operation)) leaf_name_data.push_back(remote_events.get_name_leafdata());
    if (remote_frame.is_set || is_set(remote_frame.operation)) leaf_name_data.push_back(remote_frame.get_name_leafdata());
    if (remote_frame_period.is_set || is_set(remote_frame_period.operation)) leaf_name_data.push_back(remote_frame_period.get_name_leafdata());
    if (remote_frame_seconds.is_set || is_set(remote_frame_seconds.operation)) leaf_name_data.push_back(remote_frame_seconds.get_name_leafdata());
    if (remote_reject.is_set || is_set(remote_reject.operation)) leaf_name_data.push_back(remote_reject.get_name_leafdata());
    if (remote_symbol_period.is_set || is_set(remote_symbol_period.operation)) leaf_name_data.push_back(remote_symbol_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::Nodes::Node::Summary::get_children()
{
    return children;
}

void EtherLinkOam::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-send")
    {
        active_send = value;
    }
    if(value_path == "evaluating")
    {
        evaluating = value;
    }
    if(value_path == "events")
    {
        events = value;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "local-accept")
    {
        local_accept = value;
    }
    if(value_path == "local-events")
    {
        local_events = value;
    }
    if(value_path == "local-frame")
    {
        local_frame = value;
    }
    if(value_path == "local-frame-period")
    {
        local_frame_period = value;
    }
    if(value_path == "local-frame-seconds")
    {
        local_frame_seconds = value;
    }
    if(value_path == "local-reject")
    {
        local_reject = value;
    }
    if(value_path == "local-symbol-period")
    {
        local_symbol_period = value;
    }
    if(value_path == "loopback-mode")
    {
        loopback_mode = value;
    }
    if(value_path == "miswired-connections")
    {
        miswired_connections = value;
    }
    if(value_path == "operational")
    {
        operational = value;
    }
    if(value_path == "passive-wait")
    {
        passive_wait = value;
    }
    if(value_path == "port-down")
    {
        port_down = value;
    }
    if(value_path == "remote-events")
    {
        remote_events = value;
    }
    if(value_path == "remote-frame")
    {
        remote_frame = value;
    }
    if(value_path == "remote-frame-period")
    {
        remote_frame_period = value;
    }
    if(value_path == "remote-frame-seconds")
    {
        remote_frame_seconds = value;
    }
    if(value_path == "remote-reject")
    {
        remote_reject = value;
    }
    if(value_path == "remote-symbol-period")
    {
        remote_symbol_period = value;
    }
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterfaces()
{
    yang_name = "event-log-entry-interfaces"; yang_parent_name = "ether-link-oam";
}

EtherLinkOam::EventLogEntryInterfaces::~EventLogEntryInterfaces()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::has_data() const
{
    for (std::size_t index=0; index<event_log_entry_interface.size(); index++)
    {
        if(event_log_entry_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::EventLogEntryInterfaces::has_operation() const
{
    for (std::size_t index=0; index<event_log_entry_interface.size(); index++)
    {
        if(event_log_entry_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::EventLogEntryInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-interfaces";

    return path_buffer.str();

}

EntityPath EtherLinkOam::EventLogEntryInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::EventLogEntryInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event-log-entry-interface")
    {
        for(auto const & c : event_log_entry_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface>();
        c->parent = this;
        event_log_entry_interface.push_back(std::move(c));
        children[segment_path] = event_log_entry_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::EventLogEntryInterfaces::get_children()
{
    for (auto const & c : event_log_entry_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::EventLogEntryInterfaces::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryInterface()
    :
    member_interface{YType::str, "member-interface"}
    	,
    event_log_entry_indexes(std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes>())
{
    event_log_entry_indexes->parent = this;
    children["event-log-entry-indexes"] = event_log_entry_indexes;

    yang_name = "event-log-entry-interface"; yang_parent_name = "event-log-entry-interfaces";
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::~EventLogEntryInterface()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::has_data() const
{
    return member_interface.is_set
	|| (event_log_entry_indexes !=  nullptr && event_log_entry_indexes->has_data());
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (event_log_entry_indexes !=  nullptr && event_log_entry_indexes->has_operation());
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-interface" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/event-log-entry-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event-log-entry-indexes")
    {
        if(event_log_entry_indexes != nullptr)
        {
            children["event-log-entry-indexes"] = event_log_entry_indexes;
        }
        else
        {
            event_log_entry_indexes = std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes>();
            event_log_entry_indexes->parent = this;
            children["event-log-entry-indexes"] = event_log_entry_indexes;
        }
        return children.at("event-log-entry-indexes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::get_children()
{
    if(children.find("event-log-entry-indexes") == children.end())
    {
        if(event_log_entry_indexes != nullptr)
        {
            children["event-log-entry-indexes"] = event_log_entry_indexes;
        }
    }

    return children;
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndexes()
{
    yang_name = "event-log-entry-indexes"; yang_parent_name = "event-log-entry-interface";
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::~EventLogEntryIndexes()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::has_data() const
{
    for (std::size_t index=0; index<event_log_entry_index.size(); index++)
    {
        if(event_log_entry_index[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::has_operation() const
{
    for (std::size_t index=0; index<event_log_entry_index.size(); index++)
    {
        if(event_log_entry_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-indexes";

    return path_buffer.str();

}

EntityPath EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventLogEntryIndexes' in Cisco_IOS_XR_ethernet_link_oam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event-log-entry-index")
    {
        for(auto const & c : event_log_entry_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex>();
        c->parent = this;
        event_log_entry_index.push_back(std::move(c));
        children[segment_path] = event_log_entry_index.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::get_children()
{
    for (auto const & c : event_log_entry_index)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::EventLogEntryIndex()
    :
    event_log_entry_index{YType::str, "event-log-entry-index"},
    action_taken{YType::enumeration, "action-taken"},
    event_total{YType::uint32, "event-total"},
    handle{YType::str, "handle"},
    index_{YType::uint32, "index"},
    local_high_threshold{YType::uint64, "local-high-threshold"},
    local_high_threshold_config_units{YType::uint64, "local-high-threshold-config-units"},
    location{YType::enumeration, "location"},
    oui{YType::str, "oui"},
    running_total{YType::uint64, "running-total"},
    threshold{YType::uint64, "threshold"},
    threshold_config_units{YType::uint64, "threshold-config-units"},
    threshold_units{YType::uint8, "threshold-units"},
    timestamp{YType::uint64, "timestamp"},
    type{YType::enumeration, "type"},
    value_{YType::uint64, "value"},
    value_config_units{YType::uint64, "value-config-units"},
    window{YType::uint64, "window"},
    window_config_units{YType::uint64, "window-config-units"},
    window_units{YType::uint8, "window-units"}
{
    yang_name = "event-log-entry-index"; yang_parent_name = "event-log-entry-indexes";
}

EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::~EventLogEntryIndex()
{
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::has_data() const
{
    return event_log_entry_index.is_set
	|| action_taken.is_set
	|| event_total.is_set
	|| handle.is_set
	|| index_.is_set
	|| local_high_threshold.is_set
	|| local_high_threshold_config_units.is_set
	|| location.is_set
	|| oui.is_set
	|| running_total.is_set
	|| threshold.is_set
	|| threshold_config_units.is_set
	|| threshold_units.is_set
	|| timestamp.is_set
	|| type.is_set
	|| value_.is_set
	|| value_config_units.is_set
	|| window.is_set
	|| window_config_units.is_set
	|| window_units.is_set;
}

bool EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(event_log_entry_index.operation)
	|| is_set(action_taken.operation)
	|| is_set(event_total.operation)
	|| is_set(handle.operation)
	|| is_set(index_.operation)
	|| is_set(local_high_threshold.operation)
	|| is_set(local_high_threshold_config_units.operation)
	|| is_set(location.operation)
	|| is_set(oui.operation)
	|| is_set(running_total.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold_config_units.operation)
	|| is_set(threshold_units.operation)
	|| is_set(timestamp.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation)
	|| is_set(value_config_units.operation)
	|| is_set(window.operation)
	|| is_set(window_config_units.operation)
	|| is_set(window_units.operation);
}

std::string EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log-entry-index" <<"[event-log-entry-index='" <<event_log_entry_index <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventLogEntryIndex' in Cisco_IOS_XR_ethernet_link_oam_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_log_entry_index.is_set || is_set(event_log_entry_index.operation)) leaf_name_data.push_back(event_log_entry_index.get_name_leafdata());
    if (action_taken.is_set || is_set(action_taken.operation)) leaf_name_data.push_back(action_taken.get_name_leafdata());
    if (event_total.is_set || is_set(event_total.operation)) leaf_name_data.push_back(event_total.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (local_high_threshold.is_set || is_set(local_high_threshold.operation)) leaf_name_data.push_back(local_high_threshold.get_name_leafdata());
    if (local_high_threshold_config_units.is_set || is_set(local_high_threshold_config_units.operation)) leaf_name_data.push_back(local_high_threshold_config_units.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (running_total.is_set || is_set(running_total.operation)) leaf_name_data.push_back(running_total.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_config_units.is_set || is_set(threshold_config_units.operation)) leaf_name_data.push_back(threshold_config_units.get_name_leafdata());
    if (threshold_units.is_set || is_set(threshold_units.operation)) leaf_name_data.push_back(threshold_units.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_config_units.is_set || is_set(value_config_units.operation)) leaf_name_data.push_back(value_config_units.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());
    if (window_config_units.is_set || is_set(window_config_units.operation)) leaf_name_data.push_back(window_config_units.get_name_leafdata());
    if (window_units.is_set || is_set(window_units.operation)) leaf_name_data.push_back(window_units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::get_children()
{
    return children;
}

void EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-log-entry-index")
    {
        event_log_entry_index = value;
    }
    if(value_path == "action-taken")
    {
        action_taken = value;
    }
    if(value_path == "event-total")
    {
        event_total = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "local-high-threshold")
    {
        local_high_threshold = value;
    }
    if(value_path == "local-high-threshold-config-units")
    {
        local_high_threshold_config_units = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "oui")
    {
        oui = value;
    }
    if(value_path == "running-total")
    {
        running_total = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold-config-units")
    {
        threshold_config_units = value;
    }
    if(value_path == "threshold-units")
    {
        threshold_units = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "value-config-units")
    {
        value_config_units = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
    if(value_path == "window-config-units")
    {
        window_config_units = value;
    }
    if(value_path == "window-units")
    {
        window_units = value;
    }
}

EtherLinkOam::StatsInterfaces::StatsInterfaces()
{
    yang_name = "stats-interfaces"; yang_parent_name = "ether-link-oam";
}

EtherLinkOam::StatsInterfaces::~StatsInterfaces()
{
}

bool EtherLinkOam::StatsInterfaces::has_data() const
{
    for (std::size_t index=0; index<stats_interface.size(); index++)
    {
        if(stats_interface[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLinkOam::StatsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<stats_interface.size(); index++)
    {
        if(stats_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherLinkOam::StatsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-interfaces";

    return path_buffer.str();

}

EntityPath EtherLinkOam::StatsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::StatsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stats-interface")
    {
        for(auto const & c : stats_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<EtherLinkOam::StatsInterfaces::StatsInterface>();
        c->parent = this;
        stats_interface.push_back(std::move(c));
        children[segment_path] = stats_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::StatsInterfaces::get_children()
{
    for (auto const & c : stats_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void EtherLinkOam::StatsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

EtherLinkOam::StatsInterfaces::StatsInterface::StatsInterface()
    :
    member_interface{YType::str, "member-interface"},
    duplicate_event_notification_rx{YType::uint32, "duplicate-event-notification-rx"},
    duplicate_event_notification_tx{YType::uint32, "duplicate-event-notification-tx"},
    fixed_frames_rx{YType::uint32, "fixed-frames-rx"},
    frames_lost_due_to_oam{YType::uint32, "frames-lost-due-to-oam"},
    information_rx{YType::uint32, "information-rx"},
    information_tx{YType::uint32, "information-tx"},
    local_error_frame_period_records{YType::uint32, "local-error-frame-period-records"},
    local_error_frame_records{YType::uint32, "local-error-frame-records"},
    local_error_frame_second_records{YType::uint32, "local-error-frame-second-records"},
    local_error_symbol_period_records{YType::uint32, "local-error-symbol-period-records"},
    loopback_control_rx{YType::uint32, "loopback-control-rx"},
    loopback_control_tx{YType::uint32, "loopback-control-tx"},
    org_specific_rx{YType::uint32, "org-specific-rx"},
    org_specific_tx{YType::uint32, "org-specific-tx"},
    remote_error_frame_period_records{YType::uint32, "remote-error-frame-period-records"},
    remote_error_frame_records{YType::uint32, "remote-error-frame-records"},
    remote_error_frame_second_records{YType::uint32, "remote-error-frame-second-records"},
    remote_error_symbol_period_records{YType::uint32, "remote-error-symbol-period-records"},
    unique_event_notification_rx{YType::uint32, "unique-event-notification-rx"},
    unique_event_notification_tx{YType::uint32, "unique-event-notification-tx"},
    unsupported_codes_rx{YType::uint32, "unsupported-codes-rx"},
    unsupported_codes_tx{YType::uint32, "unsupported-codes-tx"},
    variable_request_rx{YType::uint32, "variable-request-rx"},
    variable_request_tx{YType::uint32, "variable-request-tx"},
    variable_response_rx{YType::uint32, "variable-response-rx"},
    variable_response_tx{YType::uint32, "variable-response-tx"}
{
    yang_name = "stats-interface"; yang_parent_name = "stats-interfaces";
}

EtherLinkOam::StatsInterfaces::StatsInterface::~StatsInterface()
{
}

bool EtherLinkOam::StatsInterfaces::StatsInterface::has_data() const
{
    return member_interface.is_set
	|| duplicate_event_notification_rx.is_set
	|| duplicate_event_notification_tx.is_set
	|| fixed_frames_rx.is_set
	|| frames_lost_due_to_oam.is_set
	|| information_rx.is_set
	|| information_tx.is_set
	|| local_error_frame_period_records.is_set
	|| local_error_frame_records.is_set
	|| local_error_frame_second_records.is_set
	|| local_error_symbol_period_records.is_set
	|| loopback_control_rx.is_set
	|| loopback_control_tx.is_set
	|| org_specific_rx.is_set
	|| org_specific_tx.is_set
	|| remote_error_frame_period_records.is_set
	|| remote_error_frame_records.is_set
	|| remote_error_frame_second_records.is_set
	|| remote_error_symbol_period_records.is_set
	|| unique_event_notification_rx.is_set
	|| unique_event_notification_tx.is_set
	|| unsupported_codes_rx.is_set
	|| unsupported_codes_tx.is_set
	|| variable_request_rx.is_set
	|| variable_request_tx.is_set
	|| variable_response_rx.is_set
	|| variable_response_tx.is_set;
}

bool EtherLinkOam::StatsInterfaces::StatsInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(duplicate_event_notification_rx.operation)
	|| is_set(duplicate_event_notification_tx.operation)
	|| is_set(fixed_frames_rx.operation)
	|| is_set(frames_lost_due_to_oam.operation)
	|| is_set(information_rx.operation)
	|| is_set(information_tx.operation)
	|| is_set(local_error_frame_period_records.operation)
	|| is_set(local_error_frame_records.operation)
	|| is_set(local_error_frame_second_records.operation)
	|| is_set(local_error_symbol_period_records.operation)
	|| is_set(loopback_control_rx.operation)
	|| is_set(loopback_control_tx.operation)
	|| is_set(org_specific_rx.operation)
	|| is_set(org_specific_tx.operation)
	|| is_set(remote_error_frame_period_records.operation)
	|| is_set(remote_error_frame_records.operation)
	|| is_set(remote_error_frame_second_records.operation)
	|| is_set(remote_error_symbol_period_records.operation)
	|| is_set(unique_event_notification_rx.operation)
	|| is_set(unique_event_notification_tx.operation)
	|| is_set(unsupported_codes_rx.operation)
	|| is_set(unsupported_codes_tx.operation)
	|| is_set(variable_request_rx.operation)
	|| is_set(variable_request_tx.operation)
	|| is_set(variable_response_rx.operation)
	|| is_set(variable_response_tx.operation);
}

std::string EtherLinkOam::StatsInterfaces::StatsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-interface" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath EtherLinkOam::StatsInterfaces::StatsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam/stats-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (duplicate_event_notification_rx.is_set || is_set(duplicate_event_notification_rx.operation)) leaf_name_data.push_back(duplicate_event_notification_rx.get_name_leafdata());
    if (duplicate_event_notification_tx.is_set || is_set(duplicate_event_notification_tx.operation)) leaf_name_data.push_back(duplicate_event_notification_tx.get_name_leafdata());
    if (fixed_frames_rx.is_set || is_set(fixed_frames_rx.operation)) leaf_name_data.push_back(fixed_frames_rx.get_name_leafdata());
    if (frames_lost_due_to_oam.is_set || is_set(frames_lost_due_to_oam.operation)) leaf_name_data.push_back(frames_lost_due_to_oam.get_name_leafdata());
    if (information_rx.is_set || is_set(information_rx.operation)) leaf_name_data.push_back(information_rx.get_name_leafdata());
    if (information_tx.is_set || is_set(information_tx.operation)) leaf_name_data.push_back(information_tx.get_name_leafdata());
    if (local_error_frame_period_records.is_set || is_set(local_error_frame_period_records.operation)) leaf_name_data.push_back(local_error_frame_period_records.get_name_leafdata());
    if (local_error_frame_records.is_set || is_set(local_error_frame_records.operation)) leaf_name_data.push_back(local_error_frame_records.get_name_leafdata());
    if (local_error_frame_second_records.is_set || is_set(local_error_frame_second_records.operation)) leaf_name_data.push_back(local_error_frame_second_records.get_name_leafdata());
    if (local_error_symbol_period_records.is_set || is_set(local_error_symbol_period_records.operation)) leaf_name_data.push_back(local_error_symbol_period_records.get_name_leafdata());
    if (loopback_control_rx.is_set || is_set(loopback_control_rx.operation)) leaf_name_data.push_back(loopback_control_rx.get_name_leafdata());
    if (loopback_control_tx.is_set || is_set(loopback_control_tx.operation)) leaf_name_data.push_back(loopback_control_tx.get_name_leafdata());
    if (org_specific_rx.is_set || is_set(org_specific_rx.operation)) leaf_name_data.push_back(org_specific_rx.get_name_leafdata());
    if (org_specific_tx.is_set || is_set(org_specific_tx.operation)) leaf_name_data.push_back(org_specific_tx.get_name_leafdata());
    if (remote_error_frame_period_records.is_set || is_set(remote_error_frame_period_records.operation)) leaf_name_data.push_back(remote_error_frame_period_records.get_name_leafdata());
    if (remote_error_frame_records.is_set || is_set(remote_error_frame_records.operation)) leaf_name_data.push_back(remote_error_frame_records.get_name_leafdata());
    if (remote_error_frame_second_records.is_set || is_set(remote_error_frame_second_records.operation)) leaf_name_data.push_back(remote_error_frame_second_records.get_name_leafdata());
    if (remote_error_symbol_period_records.is_set || is_set(remote_error_symbol_period_records.operation)) leaf_name_data.push_back(remote_error_symbol_period_records.get_name_leafdata());
    if (unique_event_notification_rx.is_set || is_set(unique_event_notification_rx.operation)) leaf_name_data.push_back(unique_event_notification_rx.get_name_leafdata());
    if (unique_event_notification_tx.is_set || is_set(unique_event_notification_tx.operation)) leaf_name_data.push_back(unique_event_notification_tx.get_name_leafdata());
    if (unsupported_codes_rx.is_set || is_set(unsupported_codes_rx.operation)) leaf_name_data.push_back(unsupported_codes_rx.get_name_leafdata());
    if (unsupported_codes_tx.is_set || is_set(unsupported_codes_tx.operation)) leaf_name_data.push_back(unsupported_codes_tx.get_name_leafdata());
    if (variable_request_rx.is_set || is_set(variable_request_rx.operation)) leaf_name_data.push_back(variable_request_rx.get_name_leafdata());
    if (variable_request_tx.is_set || is_set(variable_request_tx.operation)) leaf_name_data.push_back(variable_request_tx.get_name_leafdata());
    if (variable_response_rx.is_set || is_set(variable_response_rx.operation)) leaf_name_data.push_back(variable_response_rx.get_name_leafdata());
    if (variable_response_tx.is_set || is_set(variable_response_tx.operation)) leaf_name_data.push_back(variable_response_tx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherLinkOam::StatsInterfaces::StatsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & EtherLinkOam::StatsInterfaces::StatsInterface::get_children()
{
    return children;
}

void EtherLinkOam::StatsInterfaces::StatsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "duplicate-event-notification-rx")
    {
        duplicate_event_notification_rx = value;
    }
    if(value_path == "duplicate-event-notification-tx")
    {
        duplicate_event_notification_tx = value;
    }
    if(value_path == "fixed-frames-rx")
    {
        fixed_frames_rx = value;
    }
    if(value_path == "frames-lost-due-to-oam")
    {
        frames_lost_due_to_oam = value;
    }
    if(value_path == "information-rx")
    {
        information_rx = value;
    }
    if(value_path == "information-tx")
    {
        information_tx = value;
    }
    if(value_path == "local-error-frame-period-records")
    {
        local_error_frame_period_records = value;
    }
    if(value_path == "local-error-frame-records")
    {
        local_error_frame_records = value;
    }
    if(value_path == "local-error-frame-second-records")
    {
        local_error_frame_second_records = value;
    }
    if(value_path == "local-error-symbol-period-records")
    {
        local_error_symbol_period_records = value;
    }
    if(value_path == "loopback-control-rx")
    {
        loopback_control_rx = value;
    }
    if(value_path == "loopback-control-tx")
    {
        loopback_control_tx = value;
    }
    if(value_path == "org-specific-rx")
    {
        org_specific_rx = value;
    }
    if(value_path == "org-specific-tx")
    {
        org_specific_tx = value;
    }
    if(value_path == "remote-error-frame-period-records")
    {
        remote_error_frame_period_records = value;
    }
    if(value_path == "remote-error-frame-records")
    {
        remote_error_frame_records = value;
    }
    if(value_path == "remote-error-frame-second-records")
    {
        remote_error_frame_second_records = value;
    }
    if(value_path == "remote-error-symbol-period-records")
    {
        remote_error_symbol_period_records = value;
    }
    if(value_path == "unique-event-notification-rx")
    {
        unique_event_notification_rx = value;
    }
    if(value_path == "unique-event-notification-tx")
    {
        unique_event_notification_tx = value;
    }
    if(value_path == "unsupported-codes-rx")
    {
        unsupported_codes_rx = value;
    }
    if(value_path == "unsupported-codes-tx")
    {
        unsupported_codes_tx = value;
    }
    if(value_path == "variable-request-rx")
    {
        variable_request_rx = value;
    }
    if(value_path == "variable-request-tx")
    {
        variable_request_tx = value;
    }
    if(value_path == "variable-response-rx")
    {
        variable_response_rx = value;
    }
    if(value_path == "variable-response-tx")
    {
        variable_response_tx = value;
    }
}

const Enum::YLeaf LogEnum::log_type_symbol_event {1, "log-type-symbol-event"};
const Enum::YLeaf LogEnum::log_type_period_event {2, "log-type-period-event"};
const Enum::YLeaf LogEnum::log_type_frame_event {3, "log-type-frame-event"};
const Enum::YLeaf LogEnum::log_type_secs_event {4, "log-type-secs-event"};
const Enum::YLeaf LogEnum::log_type_link_fault {256, "log-type-link-fault"};
const Enum::YLeaf LogEnum::log_type_dying_gasp {257, "log-type-dying-gasp"};
const Enum::YLeaf LogEnum::log_type_critical_event {258, "log-type-critical-event"};

const Enum::YLeaf LogLocationEnum::log_location_local {1, "log-location-local"};
const Enum::YLeaf LogLocationEnum::log_location_remote {2, "log-location-remote"};

const Enum::YLeaf LoopbackStatusEnum::none {1, "none"};
const Enum::YLeaf LoopbackStatusEnum::initiating {2, "initiating"};
const Enum::YLeaf LoopbackStatusEnum::master_loopback {3, "master-loopback"};
const Enum::YLeaf LoopbackStatusEnum::terminating {4, "terminating"};
const Enum::YLeaf LoopbackStatusEnum::local_loopback {5, "local-loopback"};
const Enum::YLeaf LoopbackStatusEnum::unknown {6, "unknown"};

const Enum::YLeaf OperationalStateEnum::disabled {1, "disabled"};
const Enum::YLeaf OperationalStateEnum::link_fault {2, "link-fault"};
const Enum::YLeaf OperationalStateEnum::passive_wait {3, "passive-wait"};
const Enum::YLeaf OperationalStateEnum::active_send_local {4, "active-send-local"};
const Enum::YLeaf OperationalStateEnum::send_local_and_remote {5, "send-local-and-remote"};
const Enum::YLeaf OperationalStateEnum::send_local_and_remote_ok {6, "send-local-and-remote-ok"};
const Enum::YLeaf OperationalStateEnum::peering_locally_rejected {7, "peering-locally-rejected"};
const Enum::YLeaf OperationalStateEnum::peering_remotely_rejected {8, "peering-remotely-rejected"};
const Enum::YLeaf OperationalStateEnum::operational {9, "operational"};
const Enum::YLeaf OperationalStateEnum::operational_half_duplex {10, "operational-half-duplex"};

const Enum::YLeaf ModeEnum::passive {0, "passive"};
const Enum::YLeaf ModeEnum::active {1, "active"};
const Enum::YLeaf ModeEnum::dont_care {2, "dont-care"};

const Enum::YLeaf ActionEnum::no_action {1, "no-action"};
const Enum::YLeaf ActionEnum::disable_interface {2, "disable-interface"};
const Enum::YLeaf ActionEnum::log {3, "log"};
const Enum::YLeaf ActionEnum::efd {4, "efd"};

const Enum::YLeaf ProtocolStateEnum::protocol_state_inactive {0, "protocol-state-inactive"};
const Enum::YLeaf ProtocolStateEnum::protocol_state_fault {1, "protocol-state-fault"};
const Enum::YLeaf ProtocolStateEnum::protocol_state_active_send_local {2, "protocol-state-active-send-local"};
const Enum::YLeaf ProtocolStateEnum::protocol_state_passive_wait {3, "protocol-state-passive-wait"};
const Enum::YLeaf ProtocolStateEnum::protocol_state_send_local_remote {4, "protocol-state-send-local-remote"};
const Enum::YLeaf ProtocolStateEnum::protocol_state_send_local_remote_ok {5, "protocol-state-send-local-remote-ok"};
const Enum::YLeaf ProtocolStateEnum::protocol_state_send_any {6, "protocol-state-send-any"};


}
}

