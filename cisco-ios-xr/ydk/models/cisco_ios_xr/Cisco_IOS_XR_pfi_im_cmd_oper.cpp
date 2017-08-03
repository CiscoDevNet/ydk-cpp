
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pfi_im_cmd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pfi_im_cmd_oper {

Interfaces::Interfaces()
    :
    interface_briefs(std::make_shared<Interfaces::InterfaceBriefs>())
	,interface_summary(std::make_shared<Interfaces::InterfaceSummary>())
	,interface_xr(std::make_shared<Interfaces::InterfaceXr>())
	,interfaces(std::make_shared<Interfaces::Interfaces_>())
	,inventory_summary(std::make_shared<Interfaces::InventorySummary>())
	,node_type_sets(std::make_shared<Interfaces::NodeTypeSets>())
{
    interface_briefs->parent = this;

    interface_summary->parent = this;

    interface_xr->parent = this;

    interfaces->parent = this;

    inventory_summary->parent = this;

    node_type_sets->parent = this;

    yang_name = "interfaces"; yang_parent_name = "Cisco-IOS-XR-pfi-im-cmd-oper";
}

Interfaces::~Interfaces()
{
}

bool Interfaces::has_data() const
{
    return (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (interface_xr !=  nullptr && interface_xr->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (inventory_summary !=  nullptr && inventory_summary->has_data())
	|| (node_type_sets !=  nullptr && node_type_sets->has_data());
}

bool Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (interface_xr !=  nullptr && interface_xr->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (inventory_summary !=  nullptr && inventory_summary->has_operation())
	|| (node_type_sets !=  nullptr && node_type_sets->has_operation());
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces";

    return path_buffer.str();

}

const EntityPath Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Interfaces::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<Interfaces::InterfaceSummary>();
        }
        return interface_summary;
    }

    if(child_yang_name == "interface-xr")
    {
        if(interface_xr == nullptr)
        {
            interface_xr = std::make_shared<Interfaces::InterfaceXr>();
        }
        return interface_xr;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    if(child_yang_name == "inventory-summary")
    {
        if(inventory_summary == nullptr)
        {
            inventory_summary = std::make_shared<Interfaces::InventorySummary>();
        }
        return inventory_summary;
    }

    if(child_yang_name == "node-type-sets")
    {
        if(node_type_sets == nullptr)
        {
            node_type_sets = std::make_shared<Interfaces::NodeTypeSets>();
        }
        return node_type_sets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interface_summary != nullptr)
    {
        children["interface-summary"] = interface_summary;
    }

    if(interface_xr != nullptr)
    {
        children["interface-xr"] = interface_xr;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(inventory_summary != nullptr)
    {
        children["inventory-summary"] = inventory_summary;
    }

    if(node_type_sets != nullptr)
    {
        children["node-type-sets"] = node_type_sets;
    }

    return children;
}

void Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Interfaces::clone_ptr() const
{
    return std::make_shared<Interfaces>();
}

std::string Interfaces::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Interfaces::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Interfaces::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Interfaces::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-briefs" || name == "interface-summary" || name == "interface-xr" || name == "interfaces" || name == "inventory-summary" || name == "node-type-sets")
        return true;
    return false;
}

Interfaces::InterfaceXr::InterfaceXr()
{
    yang_name = "interface-xr"; yang_parent_name = "interfaces";
}

Interfaces::InterfaceXr::~InterfaceXr()
{
}

bool Interfaces::InterfaceXr::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::InterfaceXr::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::InterfaceXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-xr";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth{YType::uint32, "bandwidth"},
    crc_length{YType::uint32, "crc-length"},
    description{YType::str, "description"},
    duplexity{YType::enumeration, "duplexity"},
    encapsulation{YType::str, "encapsulation"},
    encapsulation_type_string{YType::str, "encapsulation-type-string"},
    hardware_type_string{YType::str, "hardware-type-string"},
    if_index{YType::uint32, "if-index"},
    in_flow_control{YType::enumeration, "in-flow-control"},
    interface_handle{YType::str, "interface-handle"},
    interface_type{YType::str, "interface-type"},
    is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
    is_data_inverted{YType::boolean, "is-data-inverted"},
    is_l2_looped{YType::boolean, "is-l2-looped"},
    is_l2_transport_enabled{YType::boolean, "is-l2-transport-enabled"},
    is_maintenance_enabled{YType::boolean, "is-maintenance-enabled"},
    is_scramble_enabled{YType::boolean, "is-scramble-enabled"},
    keepalive{YType::uint32, "keepalive"},
    last_state_transition_time{YType::uint32, "last-state-transition-time"},
    line_state{YType::enumeration, "line-state"},
    link_type{YType::enumeration, "link-type"},
    loopback_configuration{YType::enumeration, "loopback-configuration"},
    max_bandwidth{YType::uint32, "max-bandwidth"},
    media_type{YType::enumeration, "media-type"},
    mtu{YType::uint32, "mtu"},
    out_flow_control{YType::enumeration, "out-flow-control"},
    parent_interface_name{YType::str, "parent-interface-name"},
    speed{YType::uint32, "speed"},
    state{YType::enumeration, "state"},
    state_transition_count{YType::uint32, "state-transition-count"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    arp_information(std::make_shared<Interfaces::InterfaceXr::Interface::ArpInformation>())
	,burned_in_address(std::make_shared<Interfaces::InterfaceXr::Interface::BurnedInAddress>())
	,carrier_delay(std::make_shared<Interfaces::InterfaceXr::Interface::CarrierDelay>())
	,dampening_information(std::make_shared<Interfaces::InterfaceXr::Interface::DampeningInformation>())
	,data_rates(std::make_shared<Interfaces::InterfaceXr::Interface::DataRates>())
	,encapsulation_information(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation>())
	,interface_statistics(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceStatistics>())
	,interface_type_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation>())
	,ip_information(std::make_shared<Interfaces::InterfaceXr::Interface::IpInformation>())
	,l2_interface_statistics(std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics>())
	,mac_address(std::make_shared<Interfaces::InterfaceXr::Interface::MacAddress>())
	,nv_optical(std::make_shared<Interfaces::InterfaceXr::Interface::NvOptical>())
{
    arp_information->parent = this;

    burned_in_address->parent = this;

    carrier_delay->parent = this;

    dampening_information->parent = this;

    data_rates->parent = this;

    encapsulation_information->parent = this;

    interface_statistics->parent = this;

    interface_type_information->parent = this;

    ip_information->parent = this;

    l2_interface_statistics->parent = this;

    mac_address->parent = this;

    nv_optical->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-xr";
}

Interfaces::InterfaceXr::Interface::~Interface()
{
}

bool Interfaces::InterfaceXr::Interface::has_data() const
{
    return interface_name.is_set
	|| bandwidth.is_set
	|| crc_length.is_set
	|| description.is_set
	|| duplexity.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| hardware_type_string.is_set
	|| if_index.is_set
	|| in_flow_control.is_set
	|| interface_handle.is_set
	|| interface_type.is_set
	|| is_dampening_enabled.is_set
	|| is_data_inverted.is_set
	|| is_l2_looped.is_set
	|| is_l2_transport_enabled.is_set
	|| is_maintenance_enabled.is_set
	|| is_scramble_enabled.is_set
	|| keepalive.is_set
	|| last_state_transition_time.is_set
	|| line_state.is_set
	|| link_type.is_set
	|| loopback_configuration.is_set
	|| max_bandwidth.is_set
	|| media_type.is_set
	|| mtu.is_set
	|| out_flow_control.is_set
	|| parent_interface_name.is_set
	|| speed.is_set
	|| state.is_set
	|| state_transition_count.is_set
	|| transport_mode.is_set
	|| (arp_information !=  nullptr && arp_information->has_data())
	|| (burned_in_address !=  nullptr && burned_in_address->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (dampening_information !=  nullptr && dampening_information->has_data())
	|| (data_rates !=  nullptr && data_rates->has_data())
	|| (encapsulation_information !=  nullptr && encapsulation_information->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (interface_type_information !=  nullptr && interface_type_information->has_data())
	|| (ip_information !=  nullptr && ip_information->has_data())
	|| (l2_interface_statistics !=  nullptr && l2_interface_statistics->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (nv_optical !=  nullptr && nv_optical->has_data());
}

bool Interfaces::InterfaceXr::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(crc_length.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(duplexity.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(encapsulation_type_string.yfilter)
	|| ydk::is_set(hardware_type_string.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(in_flow_control.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(is_dampening_enabled.yfilter)
	|| ydk::is_set(is_data_inverted.yfilter)
	|| ydk::is_set(is_l2_looped.yfilter)
	|| ydk::is_set(is_l2_transport_enabled.yfilter)
	|| ydk::is_set(is_maintenance_enabled.yfilter)
	|| ydk::is_set(is_scramble_enabled.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(last_state_transition_time.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(loopback_configuration.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(out_flow_control.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_transition_count.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| (arp_information !=  nullptr && arp_information->has_operation())
	|| (burned_in_address !=  nullptr && burned_in_address->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (dampening_information !=  nullptr && dampening_information->has_operation())
	|| (data_rates !=  nullptr && data_rates->has_operation())
	|| (encapsulation_information !=  nullptr && encapsulation_information->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (interface_type_information !=  nullptr && interface_type_information->has_operation())
	|| (ip_information !=  nullptr && ip_information->has_operation())
	|| (l2_interface_statistics !=  nullptr && l2_interface_statistics->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (nv_optical !=  nullptr && nv_optical->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/interface-xr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (crc_length.is_set || is_set(crc_length.yfilter)) leaf_name_data.push_back(crc_length.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (duplexity.is_set || is_set(duplexity.yfilter)) leaf_name_data.push_back(duplexity.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.yfilter)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (hardware_type_string.is_set || is_set(hardware_type_string.yfilter)) leaf_name_data.push_back(hardware_type_string.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (in_flow_control.is_set || is_set(in_flow_control.yfilter)) leaf_name_data.push_back(in_flow_control.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.yfilter)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (is_data_inverted.is_set || is_set(is_data_inverted.yfilter)) leaf_name_data.push_back(is_data_inverted.get_name_leafdata());
    if (is_l2_looped.is_set || is_set(is_l2_looped.yfilter)) leaf_name_data.push_back(is_l2_looped.get_name_leafdata());
    if (is_l2_transport_enabled.is_set || is_set(is_l2_transport_enabled.yfilter)) leaf_name_data.push_back(is_l2_transport_enabled.get_name_leafdata());
    if (is_maintenance_enabled.is_set || is_set(is_maintenance_enabled.yfilter)) leaf_name_data.push_back(is_maintenance_enabled.get_name_leafdata());
    if (is_scramble_enabled.is_set || is_set(is_scramble_enabled.yfilter)) leaf_name_data.push_back(is_scramble_enabled.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.yfilter)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (loopback_configuration.is_set || is_set(loopback_configuration.yfilter)) leaf_name_data.push_back(loopback_configuration.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (out_flow_control.is_set || is_set(out_flow_control.yfilter)) leaf_name_data.push_back(out_flow_control.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_transition_count.is_set || is_set(state_transition_count.yfilter)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-information")
    {
        if(arp_information == nullptr)
        {
            arp_information = std::make_shared<Interfaces::InterfaceXr::Interface::ArpInformation>();
        }
        return arp_information;
    }

    if(child_yang_name == "burned-in-address")
    {
        if(burned_in_address == nullptr)
        {
            burned_in_address = std::make_shared<Interfaces::InterfaceXr::Interface::BurnedInAddress>();
        }
        return burned_in_address;
    }

    if(child_yang_name == "carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Interfaces::InterfaceXr::Interface::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "dampening-information")
    {
        if(dampening_information == nullptr)
        {
            dampening_information = std::make_shared<Interfaces::InterfaceXr::Interface::DampeningInformation>();
        }
        return dampening_information;
    }

    if(child_yang_name == "data-rates")
    {
        if(data_rates == nullptr)
        {
            data_rates = std::make_shared<Interfaces::InterfaceXr::Interface::DataRates>();
        }
        return data_rates;
    }

    if(child_yang_name == "encapsulation-information")
    {
        if(encapsulation_information == nullptr)
        {
            encapsulation_information = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation>();
        }
        return encapsulation_information;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "interface-type-information")
    {
        if(interface_type_information == nullptr)
        {
            interface_type_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation>();
        }
        return interface_type_information;
    }

    if(child_yang_name == "ip-information")
    {
        if(ip_information == nullptr)
        {
            ip_information = std::make_shared<Interfaces::InterfaceXr::Interface::IpInformation>();
        }
        return ip_information;
    }

    if(child_yang_name == "l2-interface-statistics")
    {
        if(l2_interface_statistics == nullptr)
        {
            l2_interface_statistics = std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics>();
        }
        return l2_interface_statistics;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Interfaces::InterfaceXr::Interface::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "nv-optical")
    {
        if(nv_optical == nullptr)
        {
            nv_optical = std::make_shared<Interfaces::InterfaceXr::Interface::NvOptical>();
        }
        return nv_optical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(arp_information != nullptr)
    {
        children["arp-information"] = arp_information;
    }

    if(burned_in_address != nullptr)
    {
        children["burned-in-address"] = burned_in_address;
    }

    if(carrier_delay != nullptr)
    {
        children["carrier-delay"] = carrier_delay;
    }

    if(dampening_information != nullptr)
    {
        children["dampening-information"] = dampening_information;
    }

    if(data_rates != nullptr)
    {
        children["data-rates"] = data_rates;
    }

    if(encapsulation_information != nullptr)
    {
        children["encapsulation-information"] = encapsulation_information;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(interface_type_information != nullptr)
    {
        children["interface-type-information"] = interface_type_information;
    }

    if(ip_information != nullptr)
    {
        children["ip-information"] = ip_information;
    }

    if(l2_interface_statistics != nullptr)
    {
        children["l2-interface-statistics"] = l2_interface_statistics;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(nv_optical != nullptr)
    {
        children["nv-optical"] = nv_optical;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-length")
    {
        crc_length = value;
        crc_length.value_namespace = name_space;
        crc_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplexity")
    {
        duplexity = value;
        duplexity.value_namespace = name_space;
        duplexity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
        encapsulation_type_string.value_namespace = name_space;
        encapsulation_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-type-string")
    {
        hardware_type_string = value;
        hardware_type_string.value_namespace = name_space;
        hardware_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-flow-control")
    {
        in_flow_control = value;
        in_flow_control.value_namespace = name_space;
        in_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
        is_dampening_enabled.value_namespace = name_space;
        is_dampening_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-inverted")
    {
        is_data_inverted = value;
        is_data_inverted.value_namespace = name_space;
        is_data_inverted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-l2-looped")
    {
        is_l2_looped = value;
        is_l2_looped.value_namespace = name_space;
        is_l2_looped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-l2-transport-enabled")
    {
        is_l2_transport_enabled = value;
        is_l2_transport_enabled.value_namespace = name_space;
        is_l2_transport_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maintenance-enabled")
    {
        is_maintenance_enabled = value;
        is_maintenance_enabled.value_namespace = name_space;
        is_maintenance_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-scramble-enabled")
    {
        is_scramble_enabled = value;
        is_scramble_enabled.value_namespace = name_space;
        is_scramble_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
        last_state_transition_time.value_namespace = name_space;
        last_state_transition_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback-configuration")
    {
        loopback_configuration = value;
        loopback_configuration.value_namespace = name_space;
        loopback_configuration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-flow-control")
    {
        out_flow_control = value;
        out_flow_control.value_namespace = name_space;
        out_flow_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
        state_transition_count.value_namespace = name_space;
        state_transition_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "crc-length")
    {
        crc_length.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "duplexity")
    {
        duplexity.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string.yfilter = yfilter;
    }
    if(value_path == "hardware-type-string")
    {
        hardware_type_string.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "in-flow-control")
    {
        in_flow_control.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled.yfilter = yfilter;
    }
    if(value_path == "is-data-inverted")
    {
        is_data_inverted.yfilter = yfilter;
    }
    if(value_path == "is-l2-looped")
    {
        is_l2_looped.yfilter = yfilter;
    }
    if(value_path == "is-l2-transport-enabled")
    {
        is_l2_transport_enabled.yfilter = yfilter;
    }
    if(value_path == "is-maintenance-enabled")
    {
        is_maintenance_enabled.yfilter = yfilter;
    }
    if(value_path == "is-scramble-enabled")
    {
        is_scramble_enabled.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "loopback-configuration")
    {
        loopback_configuration.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "out-flow-control")
    {
        out_flow_control.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-information" || name == "burned-in-address" || name == "carrier-delay" || name == "dampening-information" || name == "data-rates" || name == "encapsulation-information" || name == "interface-statistics" || name == "interface-type-information" || name == "ip-information" || name == "l2-interface-statistics" || name == "mac-address" || name == "nv-optical" || name == "interface-name" || name == "bandwidth" || name == "crc-length" || name == "description" || name == "duplexity" || name == "encapsulation" || name == "encapsulation-type-string" || name == "hardware-type-string" || name == "if-index" || name == "in-flow-control" || name == "interface-handle" || name == "interface-type" || name == "is-dampening-enabled" || name == "is-data-inverted" || name == "is-l2-looped" || name == "is-l2-transport-enabled" || name == "is-maintenance-enabled" || name == "is-scramble-enabled" || name == "keepalive" || name == "last-state-transition-time" || name == "line-state" || name == "link-type" || name == "loopback-configuration" || name == "max-bandwidth" || name == "media-type" || name == "mtu" || name == "out-flow-control" || name == "parent-interface-name" || name == "speed" || name == "state" || name == "state-transition-count" || name == "transport-mode")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::DampeningInformation::DampeningInformation()
    :
    half_life{YType::uint32, "half-life"},
    is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    penalty{YType::uint32, "penalty"},
    restart_penalty{YType::uint32, "restart-penalty"},
    reuse_threshold{YType::uint32, "reuse-threshold"},
    seconds_remaining{YType::uint32, "seconds-remaining"},
    suppress_threshold{YType::uint32, "suppress-threshold"}
{
    yang_name = "dampening-information"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::DampeningInformation::~DampeningInformation()
{
}

bool Interfaces::InterfaceXr::Interface::DampeningInformation::has_data() const
{
    return half_life.is_set
	|| is_suppressed_enabled.is_set
	|| maximum_suppress_time.is_set
	|| penalty.is_set
	|| restart_penalty.is_set
	|| reuse_threshold.is_set
	|| seconds_remaining.is_set
	|| suppress_threshold.is_set;
}

bool Interfaces::InterfaceXr::Interface::DampeningInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life.yfilter)
	|| ydk::is_set(is_suppressed_enabled.yfilter)
	|| ydk::is_set(maximum_suppress_time.yfilter)
	|| ydk::is_set(penalty.yfilter)
	|| ydk::is_set(restart_penalty.yfilter)
	|| ydk::is_set(reuse_threshold.yfilter)
	|| ydk::is_set(seconds_remaining.yfilter)
	|| ydk::is_set(suppress_threshold.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::DampeningInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::DampeningInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DampeningInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.yfilter)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.yfilter)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.yfilter)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.yfilter)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.yfilter)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.yfilter)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.yfilter)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::DampeningInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::DampeningInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::DampeningInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life")
    {
        half_life = value;
        half_life.value_namespace = name_space;
        half_life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
        is_suppressed_enabled.value_namespace = name_space;
        is_suppressed_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
        maximum_suppress_time.value_namespace = name_space;
        maximum_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penalty")
    {
        penalty = value;
        penalty.value_namespace = name_space;
        penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
        reuse_threshold.value_namespace = name_space;
        reuse_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
        seconds_remaining.value_namespace = name_space;
        seconds_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
        suppress_threshold.value_namespace = name_space;
        suppress_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::DampeningInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life")
    {
        half_life.yfilter = yfilter;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled.yfilter = yfilter;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time.yfilter = yfilter;
    }
    if(value_path == "penalty")
    {
        penalty.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold.yfilter = yfilter;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining.yfilter = yfilter;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::DampeningInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life" || name == "is-suppressed-enabled" || name == "maximum-suppress-time" || name == "penalty" || name == "restart-penalty" || name == "reuse-threshold" || name == "seconds-remaining" || name == "suppress-threshold")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::MacAddress::~MacAddress()
{
}

bool Interfaces::InterfaceXr::Interface::MacAddress::has_data() const
{
    return address.is_set;
}

bool Interfaces::InterfaceXr::Interface::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::BurnedInAddress::BurnedInAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "burned-in-address"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::BurnedInAddress::~BurnedInAddress()
{
}

bool Interfaces::InterfaceXr::Interface::BurnedInAddress::has_data() const
{
    return address.is_set;
}

bool Interfaces::InterfaceXr::Interface::BurnedInAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::BurnedInAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burned-in-address";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::BurnedInAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BurnedInAddress' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::BurnedInAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::BurnedInAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::BurnedInAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::BurnedInAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::BurnedInAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::CarrierDelay::CarrierDelay()
    :
    carrier_delay_down{YType::uint32, "carrier-delay-down"},
    carrier_delay_up{YType::uint32, "carrier-delay-up"}
{
    yang_name = "carrier-delay"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::CarrierDelay::~CarrierDelay()
{
}

bool Interfaces::InterfaceXr::Interface::CarrierDelay::has_data() const
{
    return carrier_delay_down.is_set
	|| carrier_delay_up.is_set;
}

bool Interfaces::InterfaceXr::Interface::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(carrier_delay_down.yfilter)
	|| ydk::is_set(carrier_delay_up.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "carrier-delay";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::CarrierDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CarrierDelay' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_down.is_set || is_set(carrier_delay_down.yfilter)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());
    if (carrier_delay_up.is_set || is_set(carrier_delay_up.yfilter)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
        carrier_delay_down.value_namespace = name_space;
        carrier_delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
        carrier_delay_up.value_namespace = name_space;
        carrier_delay_up.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down.yfilter = yfilter;
    }
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay-down" || name == "carrier-delay-up")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::ArpInformation::ArpInformation()
    :
    arp_is_learning_disabled{YType::boolean, "arp-is-learning-disabled"},
    arp_timeout{YType::uint32, "arp-timeout"},
    arp_type_name{YType::str, "arp-type-name"}
{
    yang_name = "arp-information"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::ArpInformation::~ArpInformation()
{
}

bool Interfaces::InterfaceXr::Interface::ArpInformation::has_data() const
{
    return arp_is_learning_disabled.is_set
	|| arp_timeout.is_set
	|| arp_type_name.is_set;
}

bool Interfaces::InterfaceXr::Interface::ArpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp_is_learning_disabled.yfilter)
	|| ydk::is_set(arp_timeout.yfilter)
	|| ydk::is_set(arp_type_name.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::ArpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::ArpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArpInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp_is_learning_disabled.is_set || is_set(arp_is_learning_disabled.yfilter)) leaf_name_data.push_back(arp_is_learning_disabled.get_name_leafdata());
    if (arp_timeout.is_set || is_set(arp_timeout.yfilter)) leaf_name_data.push_back(arp_timeout.get_name_leafdata());
    if (arp_type_name.is_set || is_set(arp_type_name.yfilter)) leaf_name_data.push_back(arp_type_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::ArpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::ArpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::ArpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp-is-learning-disabled")
    {
        arp_is_learning_disabled = value;
        arp_is_learning_disabled.value_namespace = name_space;
        arp_is_learning_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-timeout")
    {
        arp_timeout = value;
        arp_timeout.value_namespace = name_space;
        arp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-type-name")
    {
        arp_type_name = value;
        arp_type_name.value_namespace = name_space;
        arp_type_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::ArpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp-is-learning-disabled")
    {
        arp_is_learning_disabled.yfilter = yfilter;
    }
    if(value_path == "arp-timeout")
    {
        arp_timeout.yfilter = yfilter;
    }
    if(value_path == "arp-type-name")
    {
        arp_type_name.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::ArpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-is-learning-disabled" || name == "arp-timeout" || name == "arp-type-name")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::IpInformation::IpInformation()
    :
    ip_address{YType::str, "ip-address"},
    subnet_mask_length{YType::uint32, "subnet-mask-length"}
{
    yang_name = "ip-information"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::IpInformation::~IpInformation()
{
}

bool Interfaces::InterfaceXr::Interface::IpInformation::has_data() const
{
    return ip_address.is_set
	|| subnet_mask_length.is_set;
}

bool Interfaces::InterfaceXr::Interface::IpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(subnet_mask_length.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::IpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::IpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (subnet_mask_length.is_set || is_set(subnet_mask_length.yfilter)) leaf_name_data.push_back(subnet_mask_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::IpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::IpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::IpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask-length")
    {
        subnet_mask_length = value;
        subnet_mask_length.value_namespace = name_space;
        subnet_mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::IpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "subnet-mask-length")
    {
        subnet_mask_length.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::IpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "subnet-mask-length")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::EncapsulationInformation()
    :
    encapsulation_type{YType::enumeration, "encapsulation-type"}
    	,
    dot1q_information(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation>())
	,frame_relay_information(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation>())
	,ppp_information(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation>())
{
    dot1q_information->parent = this;

    frame_relay_information->parent = this;

    ppp_information->parent = this;

    yang_name = "encapsulation-information"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::~EncapsulationInformation()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::has_data() const
{
    return encapsulation_type.is_set
	|| (dot1q_information !=  nullptr && dot1q_information->has_data())
	|| (frame_relay_information !=  nullptr && frame_relay_information->has_data())
	|| (ppp_information !=  nullptr && ppp_information->has_data());
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| (dot1q_information !=  nullptr && dot1q_information->has_operation())
	|| (frame_relay_information !=  nullptr && frame_relay_information->has_operation())
	|| (ppp_information !=  nullptr && ppp_information->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1q-information")
    {
        if(dot1q_information == nullptr)
        {
            dot1q_information = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation>();
        }
        return dot1q_information;
    }

    if(child_yang_name == "frame-relay-information")
    {
        if(frame_relay_information == nullptr)
        {
            frame_relay_information = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation>();
        }
        return frame_relay_information;
    }

    if(child_yang_name == "ppp-information")
    {
        if(ppp_information == nullptr)
        {
            ppp_information = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation>();
        }
        return ppp_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q_information != nullptr)
    {
        children["dot1q-information"] = dot1q_information;
    }

    if(frame_relay_information != nullptr)
    {
        children["frame-relay-information"] = frame_relay_information;
    }

    if(ppp_information != nullptr)
    {
        children["ppp-information"] = ppp_information;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q-information" || name == "frame-relay-information" || name == "ppp-information" || name == "encapsulation-type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::FrameRelayInformation()
    :
    enquiries_received{YType::uint32, "enquiries-received"},
    enquiries_sent{YType::uint32, "enquiries-sent"},
    fr_encapsulation_type{YType::enumeration, "fr-encapsulation-type"},
    is_dte{YType::boolean, "is-dte"},
    is_lmi_enabled{YType::boolean, "is-lmi-enabled"},
    is_lmi_nni_dce_up{YType::boolean, "is-lmi-nni-dce-up"},
    is_lmi_up{YType::boolean, "is-lmi-up"},
    is_nni{YType::boolean, "is-nni"},
    lmi_type{YType::enumeration, "lmi-type"},
    lmidlci{YType::uint32, "lmidlci"},
    status_received{YType::uint32, "status-received"},
    status_sent{YType::uint32, "status-sent"},
    update_status_received{YType::uint32, "update-status-received"},
    update_status_sent{YType::uint32, "update-status-sent"}
{
    yang_name = "frame-relay-information"; yang_parent_name = "encapsulation-information";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::~FrameRelayInformation()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::has_data() const
{
    return enquiries_received.is_set
	|| enquiries_sent.is_set
	|| fr_encapsulation_type.is_set
	|| is_dte.is_set
	|| is_lmi_enabled.is_set
	|| is_lmi_nni_dce_up.is_set
	|| is_lmi_up.is_set
	|| is_nni.is_set
	|| lmi_type.is_set
	|| lmidlci.is_set
	|| status_received.is_set
	|| status_sent.is_set
	|| update_status_received.is_set
	|| update_status_sent.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enquiries_received.yfilter)
	|| ydk::is_set(enquiries_sent.yfilter)
	|| ydk::is_set(fr_encapsulation_type.yfilter)
	|| ydk::is_set(is_dte.yfilter)
	|| ydk::is_set(is_lmi_enabled.yfilter)
	|| ydk::is_set(is_lmi_nni_dce_up.yfilter)
	|| ydk::is_set(is_lmi_up.yfilter)
	|| ydk::is_set(is_nni.yfilter)
	|| ydk::is_set(lmi_type.yfilter)
	|| ydk::is_set(lmidlci.yfilter)
	|| ydk::is_set(status_received.yfilter)
	|| ydk::is_set(status_sent.yfilter)
	|| ydk::is_set(update_status_received.yfilter)
	|| ydk::is_set(update_status_sent.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameRelayInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enquiries_received.is_set || is_set(enquiries_received.yfilter)) leaf_name_data.push_back(enquiries_received.get_name_leafdata());
    if (enquiries_sent.is_set || is_set(enquiries_sent.yfilter)) leaf_name_data.push_back(enquiries_sent.get_name_leafdata());
    if (fr_encapsulation_type.is_set || is_set(fr_encapsulation_type.yfilter)) leaf_name_data.push_back(fr_encapsulation_type.get_name_leafdata());
    if (is_dte.is_set || is_set(is_dte.yfilter)) leaf_name_data.push_back(is_dte.get_name_leafdata());
    if (is_lmi_enabled.is_set || is_set(is_lmi_enabled.yfilter)) leaf_name_data.push_back(is_lmi_enabled.get_name_leafdata());
    if (is_lmi_nni_dce_up.is_set || is_set(is_lmi_nni_dce_up.yfilter)) leaf_name_data.push_back(is_lmi_nni_dce_up.get_name_leafdata());
    if (is_lmi_up.is_set || is_set(is_lmi_up.yfilter)) leaf_name_data.push_back(is_lmi_up.get_name_leafdata());
    if (is_nni.is_set || is_set(is_nni.yfilter)) leaf_name_data.push_back(is_nni.get_name_leafdata());
    if (lmi_type.is_set || is_set(lmi_type.yfilter)) leaf_name_data.push_back(lmi_type.get_name_leafdata());
    if (lmidlci.is_set || is_set(lmidlci.yfilter)) leaf_name_data.push_back(lmidlci.get_name_leafdata());
    if (status_received.is_set || is_set(status_received.yfilter)) leaf_name_data.push_back(status_received.get_name_leafdata());
    if (status_sent.is_set || is_set(status_sent.yfilter)) leaf_name_data.push_back(status_sent.get_name_leafdata());
    if (update_status_received.is_set || is_set(update_status_received.yfilter)) leaf_name_data.push_back(update_status_received.get_name_leafdata());
    if (update_status_sent.is_set || is_set(update_status_sent.yfilter)) leaf_name_data.push_back(update_status_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enquiries-received")
    {
        enquiries_received = value;
        enquiries_received.value_namespace = name_space;
        enquiries_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enquiries-sent")
    {
        enquiries_sent = value;
        enquiries_sent.value_namespace = name_space;
        enquiries_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-encapsulation-type")
    {
        fr_encapsulation_type = value;
        fr_encapsulation_type.value_namespace = name_space;
        fr_encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dte")
    {
        is_dte = value;
        is_dte.value_namespace = name_space;
        is_dte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmi-enabled")
    {
        is_lmi_enabled = value;
        is_lmi_enabled.value_namespace = name_space;
        is_lmi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmi-nni-dce-up")
    {
        is_lmi_nni_dce_up = value;
        is_lmi_nni_dce_up.value_namespace = name_space;
        is_lmi_nni_dce_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lmi-up")
    {
        is_lmi_up = value;
        is_lmi_up.value_namespace = name_space;
        is_lmi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nni")
    {
        is_nni = value;
        is_nni.value_namespace = name_space;
        is_nni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmi-type")
    {
        lmi_type = value;
        lmi_type.value_namespace = name_space;
        lmi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmidlci")
    {
        lmidlci = value;
        lmidlci.value_namespace = name_space;
        lmidlci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-received")
    {
        status_received = value;
        status_received.value_namespace = name_space;
        status_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-sent")
    {
        status_sent = value;
        status_sent.value_namespace = name_space;
        status_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-status-received")
    {
        update_status_received = value;
        update_status_received.value_namespace = name_space;
        update_status_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-status-sent")
    {
        update_status_sent = value;
        update_status_sent.value_namespace = name_space;
        update_status_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enquiries-received")
    {
        enquiries_received.yfilter = yfilter;
    }
    if(value_path == "enquiries-sent")
    {
        enquiries_sent.yfilter = yfilter;
    }
    if(value_path == "fr-encapsulation-type")
    {
        fr_encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "is-dte")
    {
        is_dte.yfilter = yfilter;
    }
    if(value_path == "is-lmi-enabled")
    {
        is_lmi_enabled.yfilter = yfilter;
    }
    if(value_path == "is-lmi-nni-dce-up")
    {
        is_lmi_nni_dce_up.yfilter = yfilter;
    }
    if(value_path == "is-lmi-up")
    {
        is_lmi_up.yfilter = yfilter;
    }
    if(value_path == "is-nni")
    {
        is_nni.yfilter = yfilter;
    }
    if(value_path == "lmi-type")
    {
        lmi_type.yfilter = yfilter;
    }
    if(value_path == "lmidlci")
    {
        lmidlci.yfilter = yfilter;
    }
    if(value_path == "status-received")
    {
        status_received.yfilter = yfilter;
    }
    if(value_path == "status-sent")
    {
        status_sent.yfilter = yfilter;
    }
    if(value_path == "update-status-received")
    {
        update_status_received.yfilter = yfilter;
    }
    if(value_path == "update-status-sent")
    {
        update_status_sent.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enquiries-received" || name == "enquiries-sent" || name == "fr-encapsulation-type" || name == "is-dte" || name == "is-lmi-enabled" || name == "is-lmi-nni-dce-up" || name == "is-lmi-up" || name == "is-nni" || name == "lmi-type" || name == "lmidlci" || name == "status-received" || name == "status-sent" || name == "update-status-received" || name == "update-status-sent")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::Dot1QInformation()
    :
    encapsulation_details(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails>())
{
    encapsulation_details->parent = this;

    yang_name = "dot1q-information"; yang_parent_name = "encapsulation-information";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::~Dot1QInformation()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::has_data() const
{
    return (encapsulation_details !=  nullptr && encapsulation_details->has_data());
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1QInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-details")
    {
        if(encapsulation_details == nullptr)
        {
            encapsulation_details = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails>();
        }
        return encapsulation_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation_details != nullptr)
    {
        children["encapsulation-details"] = encapsulation_details;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-details")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::EncapsulationDetails()
    :
    dot1ad_native_tag{YType::uint16, "dot1ad-native-tag"},
    dot1ad_outer_tag{YType::uint16, "dot1ad-outer-tag"},
    dot1ad_tag{YType::uint16, "dot1ad-tag"},
    native_tag{YType::uint16, "native-tag"},
    outer_tag{YType::uint16, "outer-tag"},
    tag{YType::uint16, "tag"},
    vlan_encapsulation{YType::enumeration, "vlan-encapsulation"}
    	,
    dot1ad_dot1q_stack(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack>())
	,service_instance_details(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails>())
	,stack(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack>())
{
    dot1ad_dot1q_stack->parent = this;

    service_instance_details->parent = this;

    stack->parent = this;

    yang_name = "encapsulation-details"; yang_parent_name = "dot1q-information";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::~EncapsulationDetails()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::has_data() const
{
    return dot1ad_native_tag.is_set
	|| dot1ad_outer_tag.is_set
	|| dot1ad_tag.is_set
	|| native_tag.is_set
	|| outer_tag.is_set
	|| tag.is_set
	|| vlan_encapsulation.is_set
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_data())
	|| (service_instance_details !=  nullptr && service_instance_details->has_data())
	|| (stack !=  nullptr && stack->has_data());
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1ad_native_tag.yfilter)
	|| ydk::is_set(dot1ad_outer_tag.yfilter)
	|| ydk::is_set(dot1ad_tag.yfilter)
	|| ydk::is_set(native_tag.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vlan_encapsulation.yfilter)
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_operation())
	|| (service_instance_details !=  nullptr && service_instance_details->has_operation())
	|| (stack !=  nullptr && stack->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-details";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationDetails' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1ad_native_tag.is_set || is_set(dot1ad_native_tag.yfilter)) leaf_name_data.push_back(dot1ad_native_tag.get_name_leafdata());
    if (dot1ad_outer_tag.is_set || is_set(dot1ad_outer_tag.yfilter)) leaf_name_data.push_back(dot1ad_outer_tag.get_name_leafdata());
    if (dot1ad_tag.is_set || is_set(dot1ad_tag.yfilter)) leaf_name_data.push_back(dot1ad_tag.get_name_leafdata());
    if (native_tag.is_set || is_set(native_tag.yfilter)) leaf_name_data.push_back(native_tag.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan_encapsulation.is_set || is_set(vlan_encapsulation.yfilter)) leaf_name_data.push_back(vlan_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad-dot1q-stack")
    {
        if(dot1ad_dot1q_stack == nullptr)
        {
            dot1ad_dot1q_stack = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack>();
        }
        return dot1ad_dot1q_stack;
    }

    if(child_yang_name == "service-instance-details")
    {
        if(service_instance_details == nullptr)
        {
            service_instance_details = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails>();
        }
        return service_instance_details;
    }

    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad_dot1q_stack != nullptr)
    {
        children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack;
    }

    if(service_instance_details != nullptr)
    {
        children["service-instance-details"] = service_instance_details;
    }

    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag = value;
        dot1ad_native_tag.value_namespace = name_space;
        dot1ad_native_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag = value;
        dot1ad_outer_tag.value_namespace = name_space;
        dot1ad_outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag = value;
        dot1ad_tag.value_namespace = name_space;
        dot1ad_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native-tag")
    {
        native_tag = value;
        native_tag.value_namespace = name_space;
        native_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation = value;
        vlan_encapsulation.value_namespace = name_space;
        vlan_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag.yfilter = yfilter;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag.yfilter = yfilter;
    }
    if(value_path == "native-tag")
    {
        native_tag.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad-dot1q-stack" || name == "service-instance-details" || name == "stack" || name == "dot1ad-native-tag" || name == "dot1ad-outer-tag" || name == "dot1ad-tag" || name == "native-tag" || name == "outer-tag" || name == "tag" || name == "vlan-encapsulation")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::Stack()
    :
    outer_tag{YType::uint16, "outer-tag"},
    second_tag{YType::uint16, "second-tag"}
{
    yang_name = "stack"; yang_parent_name = "encapsulation-details";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::~Stack()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::has_data() const
{
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "second-tag")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::ServiceInstanceDetails()
    :
    destination_mac_match{YType::str, "destination-mac-match"},
    is_exact_match{YType::int32, "is-exact-match"},
    is_native_preserving{YType::int32, "is-native-preserving"},
    is_native_vlan{YType::int32, "is-native-vlan"},
    payload_ethertype{YType::enumeration, "payload-ethertype"},
    source_mac_match{YType::str, "source-mac-match"},
    tags_popped{YType::uint16, "tags-popped"}
    	,
    local_traffic_stack(std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>())
{
    local_traffic_stack->parent = this;

    yang_name = "service-instance-details"; yang_parent_name = "encapsulation-details";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::~ServiceInstanceDetails()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<pushe.size(); index++)
    {
        if(pushe[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tags_to_match.size(); index++)
    {
        if(tags_to_match[index]->has_data())
            return true;
    }
    return destination_mac_match.is_set
	|| is_exact_match.is_set
	|| is_native_preserving.is_set
	|| is_native_vlan.is_set
	|| payload_ethertype.is_set
	|| source_mac_match.is_set
	|| tags_popped.is_set
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_data());
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<pushe.size(); index++)
    {
        if(pushe[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tags_to_match.size(); index++)
    {
        if(tags_to_match[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_mac_match.yfilter)
	|| ydk::is_set(is_exact_match.yfilter)
	|| ydk::is_set(is_native_preserving.yfilter)
	|| ydk::is_set(is_native_vlan.yfilter)
	|| ydk::is_set(payload_ethertype.yfilter)
	|| ydk::is_set(source_mac_match.yfilter)
	|| ydk::is_set(tags_popped.yfilter)
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance-details";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceInstanceDetails' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_match.is_set || is_set(destination_mac_match.yfilter)) leaf_name_data.push_back(destination_mac_match.get_name_leafdata());
    if (is_exact_match.is_set || is_set(is_exact_match.yfilter)) leaf_name_data.push_back(is_exact_match.get_name_leafdata());
    if (is_native_preserving.is_set || is_set(is_native_preserving.yfilter)) leaf_name_data.push_back(is_native_preserving.get_name_leafdata());
    if (is_native_vlan.is_set || is_set(is_native_vlan.yfilter)) leaf_name_data.push_back(is_native_vlan.get_name_leafdata());
    if (payload_ethertype.is_set || is_set(payload_ethertype.yfilter)) leaf_name_data.push_back(payload_ethertype.get_name_leafdata());
    if (source_mac_match.is_set || is_set(source_mac_match.yfilter)) leaf_name_data.push_back(source_mac_match.get_name_leafdata());
    if (tags_popped.is_set || is_set(tags_popped.yfilter)) leaf_name_data.push_back(tags_popped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-stack")
    {
        if(local_traffic_stack == nullptr)
        {
            local_traffic_stack = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>();
        }
        return local_traffic_stack;
    }

    if(child_yang_name == "pushe")
    {
        for(auto const & c : pushe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe>();
        c->parent = this;
        pushe.push_back(c);
        return c;
    }

    if(child_yang_name == "tags-to-match")
    {
        for(auto const & c : tags_to_match)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch>();
        c->parent = this;
        tags_to_match.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_traffic_stack != nullptr)
    {
        children["local-traffic-stack"] = local_traffic_stack;
    }

    for (auto const & c : pushe)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tags_to_match)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-mac-match")
    {
        destination_mac_match = value;
        destination_mac_match.value_namespace = name_space;
        destination_mac_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match = value;
        is_exact_match.value_namespace = name_space;
        is_exact_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving = value;
        is_native_preserving.value_namespace = name_space;
        is_native_preserving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan = value;
        is_native_vlan.value_namespace = name_space;
        is_native_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-ethertype")
    {
        payload_ethertype = value;
        payload_ethertype.value_namespace = name_space;
        payload_ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match = value;
        source_mac_match.value_namespace = name_space;
        source_mac_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tags-popped")
    {
        tags_popped = value;
        tags_popped.value_namespace = name_space;
        tags_popped.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-mac-match")
    {
        destination_mac_match.yfilter = yfilter;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match.yfilter = yfilter;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving.yfilter = yfilter;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan.yfilter = yfilter;
    }
    if(value_path == "payload-ethertype")
    {
        payload_ethertype.yfilter = yfilter;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match.yfilter = yfilter;
    }
    if(value_path == "tags-popped")
    {
        tags_popped.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-stack" || name == "pushe" || name == "tags-to-match" || name == "destination-mac-match" || name == "is-exact-match" || name == "is-native-preserving" || name == "is-native-vlan" || name == "payload-ethertype" || name == "source-mac-match" || name == "tags-popped")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficStack()
{
    yang_name = "local-traffic-stack"; yang_parent_name = "service-instance-details";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::~LocalTrafficStack()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_data() const
{
    for (std::size_t index=0; index<local_traffic_tag.size(); index++)
    {
        if(local_traffic_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_operation() const
{
    for (std::size_t index=0; index<local_traffic_tag.size(); index++)
    {
        if(local_traffic_tag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-stack";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTrafficStack' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-traffic-tag")
    {
        for(auto const & c : local_traffic_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag>();
        c->parent = this;
        local_traffic_tag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_traffic_tag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-traffic-tag")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::LocalTrafficTag()
    :
    ethertype{YType::enumeration, "ethertype"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "local-traffic-tag"; yang_parent_name = "local-traffic-stack";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::~LocalTrafficTag()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_data() const
{
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-tag";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTrafficTag' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethertype" || name == "vlan-id")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::TagsToMatch()
    :
    ethertype{YType::enumeration, "ethertype"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "tags-to-match"; yang_parent_name = "service-instance-details";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::~TagsToMatch()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return ethertype.is_set
	|| priority.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags-to-match";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TagsToMatch' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "ethertype" || name == "priority")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::VlanRange()
    :
    vlan_id_high{YType::uint16, "vlan-id-high"},
    vlan_id_low{YType::uint16, "vlan-id-low"}
{
    yang_name = "vlan-range"; yang_parent_name = "tags-to-match";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::~VlanRange()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_data() const
{
    return vlan_id_high.is_set
	|| vlan_id_low.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id_high.yfilter)
	|| ydk::is_set(vlan_id_low.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id_high.is_set || is_set(vlan_id_high.yfilter)) leaf_name_data.push_back(vlan_id_high.get_name_leafdata());
    if (vlan_id_low.is_set || is_set(vlan_id_low.yfilter)) leaf_name_data.push_back(vlan_id_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id-high")
    {
        vlan_id_high = value;
        vlan_id_high.value_namespace = name_space;
        vlan_id_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-low")
    {
        vlan_id_low = value;
        vlan_id_low.value_namespace = name_space;
        vlan_id_low.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id-high")
    {
        vlan_id_high.yfilter = yfilter;
    }
    if(value_path == "vlan-id-low")
    {
        vlan_id_low.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id-high" || name == "vlan-id-low")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::Pushe()
    :
    ethertype{YType::enumeration, "ethertype"},
    vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "pushe"; yang_parent_name = "service-instance-details";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::~Pushe()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_data() const
{
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pushe";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pushe' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethertype" || name == "vlan-id")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::Dot1AdDot1QStack()
    :
    outer_tag{YType::uint16, "outer-tag"},
    second_tag{YType::uint16, "second-tag"}
{
    yang_name = "dot1ad-dot1q-stack"; yang_parent_name = "encapsulation-details";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::~Dot1AdDot1QStack()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::has_data() const
{
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(second_tag.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad-dot1q-stack";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1AdDot1QStack' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.yfilter)) leaf_name_data.push_back(second_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
        second_tag.value_namespace = name_space;
        second_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "second-tag")
    {
        second_tag.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1QInformation::EncapsulationDetails::Dot1AdDot1QStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outer-tag" || name == "second-tag")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::PppInformation()
    :
    is_loopback_detected{YType::int32, "is-loopback-detected"},
    is_mp_bundle_member{YType::int32, "is-mp-bundle-member"},
    is_multilink_open{YType::int32, "is-multilink-open"},
    keepalive_period{YType::uint32, "keepalive-period"},
    lcp_state{YType::enumeration, "lcp-state"}
{
    yang_name = "ppp-information"; yang_parent_name = "encapsulation-information";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::~PppInformation()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::has_data() const
{
    for (std::size_t index=0; index<ncp_info_array.size(); index++)
    {
        if(ncp_info_array[index]->has_data())
            return true;
    }
    return is_loopback_detected.is_set
	|| is_mp_bundle_member.is_set
	|| is_multilink_open.is_set
	|| keepalive_period.is_set
	|| lcp_state.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::has_operation() const
{
    for (std::size_t index=0; index<ncp_info_array.size(); index++)
    {
        if(ncp_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_loopback_detected.yfilter)
	|| ydk::is_set(is_mp_bundle_member.yfilter)
	|| ydk::is_set(is_multilink_open.yfilter)
	|| ydk::is_set(keepalive_period.yfilter)
	|| ydk::is_set(lcp_state.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PppInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_loopback_detected.is_set || is_set(is_loopback_detected.yfilter)) leaf_name_data.push_back(is_loopback_detected.get_name_leafdata());
    if (is_mp_bundle_member.is_set || is_set(is_mp_bundle_member.yfilter)) leaf_name_data.push_back(is_mp_bundle_member.get_name_leafdata());
    if (is_multilink_open.is_set || is_set(is_multilink_open.yfilter)) leaf_name_data.push_back(is_multilink_open.get_name_leafdata());
    if (keepalive_period.is_set || is_set(keepalive_period.yfilter)) leaf_name_data.push_back(keepalive_period.get_name_leafdata());
    if (lcp_state.is_set || is_set(lcp_state.yfilter)) leaf_name_data.push_back(lcp_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncp-info-array")
    {
        for(auto const & c : ncp_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray>();
        c->parent = this;
        ncp_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ncp_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-loopback-detected")
    {
        is_loopback_detected = value;
        is_loopback_detected.value_namespace = name_space;
        is_loopback_detected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-bundle-member")
    {
        is_mp_bundle_member = value;
        is_mp_bundle_member.value_namespace = name_space;
        is_mp_bundle_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multilink-open")
    {
        is_multilink_open = value;
        is_multilink_open.value_namespace = name_space;
        is_multilink_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period = value;
        keepalive_period.value_namespace = name_space;
        keepalive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcp-state")
    {
        lcp_state = value;
        lcp_state.value_namespace = name_space;
        lcp_state.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-loopback-detected")
    {
        is_loopback_detected.yfilter = yfilter;
    }
    if(value_path == "is-mp-bundle-member")
    {
        is_mp_bundle_member.yfilter = yfilter;
    }
    if(value_path == "is-multilink-open")
    {
        is_multilink_open.yfilter = yfilter;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period.yfilter = yfilter;
    }
    if(value_path == "lcp-state")
    {
        lcp_state.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncp-info-array" || name == "is-loopback-detected" || name == "is-mp-bundle-member" || name == "is-multilink-open" || name == "keepalive-period" || name == "lcp-state")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::NcpInfoArray()
    :
    ncp_identifier{YType::enumeration, "ncp-identifier"},
    ncp_state{YType::enumeration, "ncp-state"}
{
    yang_name = "ncp-info-array"; yang_parent_name = "ppp-information";
}

Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::~NcpInfoArray()
{
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::has_data() const
{
    return ncp_identifier.is_set
	|| ncp_state.is_set;
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ncp_identifier.yfilter)
	|| ydk::is_set(ncp_state.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncp-info-array";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcpInfoArray' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ncp_identifier.is_set || is_set(ncp_identifier.yfilter)) leaf_name_data.push_back(ncp_identifier.get_name_leafdata());
    if (ncp_state.is_set || is_set(ncp_state.yfilter)) leaf_name_data.push_back(ncp_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ncp-identifier")
    {
        ncp_identifier = value;
        ncp_identifier.value_namespace = name_space;
        ncp_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ncp-state")
    {
        ncp_state = value;
        ncp_state.value_namespace = name_space;
        ncp_state.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ncp-identifier")
    {
        ncp_identifier.yfilter = yfilter;
    }
    if(value_path == "ncp-state")
    {
        ncp_state.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncp-identifier" || name == "ncp-state")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::InterfaceTypeInformation()
    :
    interface_type_info{YType::enumeration, "interface-type-info"}
    	,
    bundle_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation>())
	,cem_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation>())
	,gcc_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation>())
	,pseudowire_head_end_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation>())
	,serial_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation>())
	,sonet_pos_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation>())
	,srp_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation>())
	,tunnel_gre_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation>())
	,tunnel_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation>())
{
    bundle_information->parent = this;

    cem_information->parent = this;

    gcc_information->parent = this;

    pseudowire_head_end_information->parent = this;

    serial_information->parent = this;

    sonet_pos_information->parent = this;

    srp_information->parent = this;

    tunnel_gre_information->parent = this;

    tunnel_information->parent = this;

    yang_name = "interface-type-information"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::~InterfaceTypeInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::has_data() const
{
    return interface_type_info.is_set
	|| (bundle_information !=  nullptr && bundle_information->has_data())
	|| (cem_information !=  nullptr && cem_information->has_data())
	|| (gcc_information !=  nullptr && gcc_information->has_data())
	|| (pseudowire_head_end_information !=  nullptr && pseudowire_head_end_information->has_data())
	|| (serial_information !=  nullptr && serial_information->has_data())
	|| (sonet_pos_information !=  nullptr && sonet_pos_information->has_data())
	|| (srp_information !=  nullptr && srp_information->has_data())
	|| (tunnel_gre_information !=  nullptr && tunnel_gre_information->has_data())
	|| (tunnel_information !=  nullptr && tunnel_information->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type_info.yfilter)
	|| (bundle_information !=  nullptr && bundle_information->has_operation())
	|| (cem_information !=  nullptr && cem_information->has_operation())
	|| (gcc_information !=  nullptr && gcc_information->has_operation())
	|| (pseudowire_head_end_information !=  nullptr && pseudowire_head_end_information->has_operation())
	|| (serial_information !=  nullptr && serial_information->has_operation())
	|| (sonet_pos_information !=  nullptr && sonet_pos_information->has_operation())
	|| (srp_information !=  nullptr && srp_information->has_operation())
	|| (tunnel_gre_information !=  nullptr && tunnel_gre_information->has_operation())
	|| (tunnel_information !=  nullptr && tunnel_information->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-type-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTypeInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type_info.is_set || is_set(interface_type_info.yfilter)) leaf_name_data.push_back(interface_type_info.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-information")
    {
        if(bundle_information == nullptr)
        {
            bundle_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation>();
        }
        return bundle_information;
    }

    if(child_yang_name == "cem-information")
    {
        if(cem_information == nullptr)
        {
            cem_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation>();
        }
        return cem_information;
    }

    if(child_yang_name == "gcc-information")
    {
        if(gcc_information == nullptr)
        {
            gcc_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation>();
        }
        return gcc_information;
    }

    if(child_yang_name == "pseudowire-head-end-information")
    {
        if(pseudowire_head_end_information == nullptr)
        {
            pseudowire_head_end_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation>();
        }
        return pseudowire_head_end_information;
    }

    if(child_yang_name == "serial-information")
    {
        if(serial_information == nullptr)
        {
            serial_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation>();
        }
        return serial_information;
    }

    if(child_yang_name == "sonet-pos-information")
    {
        if(sonet_pos_information == nullptr)
        {
            sonet_pos_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation>();
        }
        return sonet_pos_information;
    }

    if(child_yang_name == "srp-information")
    {
        if(srp_information == nullptr)
        {
            srp_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation>();
        }
        return srp_information;
    }

    if(child_yang_name == "tunnel-gre-information")
    {
        if(tunnel_gre_information == nullptr)
        {
            tunnel_gre_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation>();
        }
        return tunnel_gre_information;
    }

    if(child_yang_name == "tunnel-information")
    {
        if(tunnel_information == nullptr)
        {
            tunnel_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation>();
        }
        return tunnel_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_information != nullptr)
    {
        children["bundle-information"] = bundle_information;
    }

    if(cem_information != nullptr)
    {
        children["cem-information"] = cem_information;
    }

    if(gcc_information != nullptr)
    {
        children["gcc-information"] = gcc_information;
    }

    if(pseudowire_head_end_information != nullptr)
    {
        children["pseudowire-head-end-information"] = pseudowire_head_end_information;
    }

    if(serial_information != nullptr)
    {
        children["serial-information"] = serial_information;
    }

    if(sonet_pos_information != nullptr)
    {
        children["sonet-pos-information"] = sonet_pos_information;
    }

    if(srp_information != nullptr)
    {
        children["srp-information"] = srp_information;
    }

    if(tunnel_gre_information != nullptr)
    {
        children["tunnel-gre-information"] = tunnel_gre_information;
    }

    if(tunnel_information != nullptr)
    {
        children["tunnel-information"] = tunnel_information;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type-info")
    {
        interface_type_info = value;
        interface_type_info.value_namespace = name_space;
        interface_type_info.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type-info")
    {
        interface_type_info.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-information" || name == "cem-information" || name == "gcc-information" || name == "pseudowire-head-end-information" || name == "serial-information" || name == "sonet-pos-information" || name == "srp-information" || name == "tunnel-gre-information" || name == "tunnel-information" || name == "interface-type-info")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation()
    :
    srp_information(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_>())
	,srp_statistics(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics>())
{
    srp_information->parent = this;

    srp_statistics->parent = this;

    yang_name = "srp-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::~SrpInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::has_data() const
{
    return (srp_information !=  nullptr && srp_information->has_data())
	|| (srp_statistics !=  nullptr && srp_statistics->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::has_operation() const
{
    return is_set(yfilter)
	|| (srp_information !=  nullptr && srp_information->has_operation())
	|| (srp_statistics !=  nullptr && srp_statistics->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srp-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrpInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srp-information")
    {
        if(srp_information == nullptr)
        {
            srp_information = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_>();
        }
        return srp_information;
    }

    if(child_yang_name == "srp-statistics")
    {
        if(srp_statistics == nullptr)
        {
            srp_statistics = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics>();
        }
        return srp_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srp_information != nullptr)
    {
        children["srp-information"] = srp_information;
    }

    if(srp_statistics != nullptr)
    {
        children["srp-statistics"] = srp_statistics;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srp-information" || name == "srp-statistics")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrpInformation_()
    :
    ips_info(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo>())
	,rate_limit_info(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo>())
	,srr_info(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo>())
	,topology_info(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo>())
{
    ips_info->parent = this;

    rate_limit_info->parent = this;

    srr_info->parent = this;

    topology_info->parent = this;

    yang_name = "srp-information"; yang_parent_name = "srp-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::~SrpInformation_()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::has_data() const
{
    return (ips_info !=  nullptr && ips_info->has_data())
	|| (rate_limit_info !=  nullptr && rate_limit_info->has_data())
	|| (srr_info !=  nullptr && srr_info->has_data())
	|| (topology_info !=  nullptr && topology_info->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::has_operation() const
{
    return is_set(yfilter)
	|| (ips_info !=  nullptr && ips_info->has_operation())
	|| (rate_limit_info !=  nullptr && rate_limit_info->has_operation())
	|| (srr_info !=  nullptr && srr_info->has_operation())
	|| (topology_info !=  nullptr && topology_info->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srp-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrpInformation_' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ips-info")
    {
        if(ips_info == nullptr)
        {
            ips_info = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo>();
        }
        return ips_info;
    }

    if(child_yang_name == "rate-limit-info")
    {
        if(rate_limit_info == nullptr)
        {
            rate_limit_info = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo>();
        }
        return rate_limit_info;
    }

    if(child_yang_name == "srr-info")
    {
        if(srr_info == nullptr)
        {
            srr_info = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo>();
        }
        return srr_info;
    }

    if(child_yang_name == "topology-info")
    {
        if(topology_info == nullptr)
        {
            topology_info = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo>();
        }
        return topology_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ips_info != nullptr)
    {
        children["ips-info"] = ips_info;
    }

    if(rate_limit_info != nullptr)
    {
        children["rate-limit-info"] = rate_limit_info;
    }

    if(srr_info != nullptr)
    {
        children["srr-info"] = srr_info;
    }

    if(topology_info != nullptr)
    {
        children["topology-info"] = topology_info;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ips-info" || name == "rate-limit-info" || name == "srr-info" || name == "topology-info")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::IpsInfo()
    :
    is_admin_down{YType::int32, "is-admin-down"}
{
    yang_name = "ips-info"; yang_parent_name = "srp-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::~IpsInfo()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::has_data() const
{
    for (std::size_t index=0; index<local_information.size(); index++)
    {
        if(local_information[index]->has_data())
            return true;
    }
    return is_admin_down.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::has_operation() const
{
    for (std::size_t index=0; index<local_information.size(); index++)
    {
        if(local_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_admin_down.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ips-info";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpsInfo' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_down.is_set || is_set(is_admin_down.yfilter)) leaf_name_data.push_back(is_admin_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-information")
    {
        for(auto const & c : local_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation>();
        c->parent = this;
        local_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down = value;
        is_admin_down.value_namespace = name_space;
        is_admin_down.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-information" || name == "is-admin-down")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::LocalInformation()
    :
    is_inter_card_bus_enabled{YType::int32, "is-inter-card-bus-enabled"},
    mac_address{YType::str, "mac-address"},
    wtr_timer_period{YType::uint32, "wtr-timer-period"}
    	,
    side_a(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA>())
	,side_b(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB>())
{
    side_a->parent = this;

    side_b->parent = this;

    yang_name = "local-information"; yang_parent_name = "ips-info";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::~LocalInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::has_data() const
{
    return is_inter_card_bus_enabled.is_set
	|| mac_address.is_set
	|| wtr_timer_period.is_set
	|| (side_a !=  nullptr && side_a->has_data())
	|| (side_b !=  nullptr && side_b->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_inter_card_bus_enabled.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(wtr_timer_period.yfilter)
	|| (side_a !=  nullptr && side_a->has_operation())
	|| (side_b !=  nullptr && side_b->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_inter_card_bus_enabled.is_set || is_set(is_inter_card_bus_enabled.yfilter)) leaf_name_data.push_back(is_inter_card_bus_enabled.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (wtr_timer_period.is_set || is_set(wtr_timer_period.yfilter)) leaf_name_data.push_back(wtr_timer_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "side-a")
    {
        if(side_a == nullptr)
        {
            side_a = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA>();
        }
        return side_a;
    }

    if(child_yang_name == "side-b")
    {
        if(side_b == nullptr)
        {
            side_b = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB>();
        }
        return side_b;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(side_a != nullptr)
    {
        children["side-a"] = side_a;
    }

    if(side_b != nullptr)
    {
        children["side-b"] = side_b;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-inter-card-bus-enabled")
    {
        is_inter_card_bus_enabled = value;
        is_inter_card_bus_enabled.value_namespace = name_space;
        is_inter_card_bus_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timer-period")
    {
        wtr_timer_period = value;
        wtr_timer_period.value_namespace = name_space;
        wtr_timer_period.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-inter-card-bus-enabled")
    {
        is_inter_card_bus_enabled.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "wtr-timer-period")
    {
        wtr_timer_period.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "side-a" || name == "side-b" || name == "is-inter-card-bus-enabled" || name == "mac-address" || name == "wtr-timer-period")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::SideA()
    :
    delay_keep_alive_trigger{YType::uint32, "delay-keep-alive-trigger"},
    mac_address{YType::str, "mac-address"},
    packet_sent_timer{YType::uint32, "packet-sent-timer"},
    remote_request{YType::enumeration, "remote-request"},
    rx_message_type{YType::enumeration, "rx-message-type"},
    rx_neighbor_mac_address{YType::str, "rx-neighbor-mac-address"},
    rx_packet_test{YType::int32, "rx-packet-test"},
    rx_path_type{YType::enumeration, "rx-path-type"},
    rx_ttl{YType::uint32, "rx-ttl"},
    self_detected_request{YType::enumeration, "self-detected-request"},
    send_timer_time_remaining{YType::uint32, "send-timer-time-remaining"},
    tx_message_type{YType::enumeration, "tx-message-type"},
    tx_neighbor_mac_address{YType::str, "tx-neighbor-mac-address"},
    tx_packet_test{YType::int32, "tx-packet-test"},
    tx_path_type{YType::enumeration, "tx-path-type"},
    tx_ttl{YType::uint32, "tx-ttl"},
    wrap_state{YType::enumeration, "wrap-state"},
    wtr_timer_remaining{YType::uint32, "wtr-timer-remaining"}
{
    yang_name = "side-a"; yang_parent_name = "local-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::~SideA()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::has_data() const
{
    for (std::size_t index=0; index<asserted_failure.size(); index++)
    {
        if(asserted_failure[index]->has_data())
            return true;
    }
    return delay_keep_alive_trigger.is_set
	|| mac_address.is_set
	|| packet_sent_timer.is_set
	|| remote_request.is_set
	|| rx_message_type.is_set
	|| rx_neighbor_mac_address.is_set
	|| rx_packet_test.is_set
	|| rx_path_type.is_set
	|| rx_ttl.is_set
	|| self_detected_request.is_set
	|| send_timer_time_remaining.is_set
	|| tx_message_type.is_set
	|| tx_neighbor_mac_address.is_set
	|| tx_packet_test.is_set
	|| tx_path_type.is_set
	|| tx_ttl.is_set
	|| wrap_state.is_set
	|| wtr_timer_remaining.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::has_operation() const
{
    for (std::size_t index=0; index<asserted_failure.size(); index++)
    {
        if(asserted_failure[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delay_keep_alive_trigger.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(packet_sent_timer.yfilter)
	|| ydk::is_set(remote_request.yfilter)
	|| ydk::is_set(rx_message_type.yfilter)
	|| ydk::is_set(rx_neighbor_mac_address.yfilter)
	|| ydk::is_set(rx_packet_test.yfilter)
	|| ydk::is_set(rx_path_type.yfilter)
	|| ydk::is_set(rx_ttl.yfilter)
	|| ydk::is_set(self_detected_request.yfilter)
	|| ydk::is_set(send_timer_time_remaining.yfilter)
	|| ydk::is_set(tx_message_type.yfilter)
	|| ydk::is_set(tx_neighbor_mac_address.yfilter)
	|| ydk::is_set(tx_packet_test.yfilter)
	|| ydk::is_set(tx_path_type.yfilter)
	|| ydk::is_set(tx_ttl.yfilter)
	|| ydk::is_set(wrap_state.yfilter)
	|| ydk::is_set(wtr_timer_remaining.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "side-a";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SideA' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_keep_alive_trigger.is_set || is_set(delay_keep_alive_trigger.yfilter)) leaf_name_data.push_back(delay_keep_alive_trigger.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packet_sent_timer.is_set || is_set(packet_sent_timer.yfilter)) leaf_name_data.push_back(packet_sent_timer.get_name_leafdata());
    if (remote_request.is_set || is_set(remote_request.yfilter)) leaf_name_data.push_back(remote_request.get_name_leafdata());
    if (rx_message_type.is_set || is_set(rx_message_type.yfilter)) leaf_name_data.push_back(rx_message_type.get_name_leafdata());
    if (rx_neighbor_mac_address.is_set || is_set(rx_neighbor_mac_address.yfilter)) leaf_name_data.push_back(rx_neighbor_mac_address.get_name_leafdata());
    if (rx_packet_test.is_set || is_set(rx_packet_test.yfilter)) leaf_name_data.push_back(rx_packet_test.get_name_leafdata());
    if (rx_path_type.is_set || is_set(rx_path_type.yfilter)) leaf_name_data.push_back(rx_path_type.get_name_leafdata());
    if (rx_ttl.is_set || is_set(rx_ttl.yfilter)) leaf_name_data.push_back(rx_ttl.get_name_leafdata());
    if (self_detected_request.is_set || is_set(self_detected_request.yfilter)) leaf_name_data.push_back(self_detected_request.get_name_leafdata());
    if (send_timer_time_remaining.is_set || is_set(send_timer_time_remaining.yfilter)) leaf_name_data.push_back(send_timer_time_remaining.get_name_leafdata());
    if (tx_message_type.is_set || is_set(tx_message_type.yfilter)) leaf_name_data.push_back(tx_message_type.get_name_leafdata());
    if (tx_neighbor_mac_address.is_set || is_set(tx_neighbor_mac_address.yfilter)) leaf_name_data.push_back(tx_neighbor_mac_address.get_name_leafdata());
    if (tx_packet_test.is_set || is_set(tx_packet_test.yfilter)) leaf_name_data.push_back(tx_packet_test.get_name_leafdata());
    if (tx_path_type.is_set || is_set(tx_path_type.yfilter)) leaf_name_data.push_back(tx_path_type.get_name_leafdata());
    if (tx_ttl.is_set || is_set(tx_ttl.yfilter)) leaf_name_data.push_back(tx_ttl.get_name_leafdata());
    if (wrap_state.is_set || is_set(wrap_state.yfilter)) leaf_name_data.push_back(wrap_state.get_name_leafdata());
    if (wtr_timer_remaining.is_set || is_set(wtr_timer_remaining.yfilter)) leaf_name_data.push_back(wtr_timer_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asserted-failure")
    {
        for(auto const & c : asserted_failure)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure>();
        c->parent = this;
        asserted_failure.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : asserted_failure)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-keep-alive-trigger")
    {
        delay_keep_alive_trigger = value;
        delay_keep_alive_trigger.value_namespace = name_space;
        delay_keep_alive_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-sent-timer")
    {
        packet_sent_timer = value;
        packet_sent_timer.value_namespace = name_space;
        packet_sent_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-request")
    {
        remote_request = value;
        remote_request.value_namespace = name_space;
        remote_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-message-type")
    {
        rx_message_type = value;
        rx_message_type.value_namespace = name_space;
        rx_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-neighbor-mac-address")
    {
        rx_neighbor_mac_address = value;
        rx_neighbor_mac_address.value_namespace = name_space;
        rx_neighbor_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packet-test")
    {
        rx_packet_test = value;
        rx_packet_test.value_namespace = name_space;
        rx_packet_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-type")
    {
        rx_path_type = value;
        rx_path_type.value_namespace = name_space;
        rx_path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ttl")
    {
        rx_ttl = value;
        rx_ttl.value_namespace = name_space;
        rx_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-detected-request")
    {
        self_detected_request = value;
        self_detected_request.value_namespace = name_space;
        self_detected_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-timer-time-remaining")
    {
        send_timer_time_remaining = value;
        send_timer_time_remaining.value_namespace = name_space;
        send_timer_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-message-type")
    {
        tx_message_type = value;
        tx_message_type.value_namespace = name_space;
        tx_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-neighbor-mac-address")
    {
        tx_neighbor_mac_address = value;
        tx_neighbor_mac_address.value_namespace = name_space;
        tx_neighbor_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packet-test")
    {
        tx_packet_test = value;
        tx_packet_test.value_namespace = name_space;
        tx_packet_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-type")
    {
        tx_path_type = value;
        tx_path_type.value_namespace = name_space;
        tx_path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-ttl")
    {
        tx_ttl = value;
        tx_ttl.value_namespace = name_space;
        tx_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrap-state")
    {
        wrap_state = value;
        wrap_state.value_namespace = name_space;
        wrap_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timer-remaining")
    {
        wtr_timer_remaining = value;
        wtr_timer_remaining.value_namespace = name_space;
        wtr_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-keep-alive-trigger")
    {
        delay_keep_alive_trigger.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "packet-sent-timer")
    {
        packet_sent_timer.yfilter = yfilter;
    }
    if(value_path == "remote-request")
    {
        remote_request.yfilter = yfilter;
    }
    if(value_path == "rx-message-type")
    {
        rx_message_type.yfilter = yfilter;
    }
    if(value_path == "rx-neighbor-mac-address")
    {
        rx_neighbor_mac_address.yfilter = yfilter;
    }
    if(value_path == "rx-packet-test")
    {
        rx_packet_test.yfilter = yfilter;
    }
    if(value_path == "rx-path-type")
    {
        rx_path_type.yfilter = yfilter;
    }
    if(value_path == "rx-ttl")
    {
        rx_ttl.yfilter = yfilter;
    }
    if(value_path == "self-detected-request")
    {
        self_detected_request.yfilter = yfilter;
    }
    if(value_path == "send-timer-time-remaining")
    {
        send_timer_time_remaining.yfilter = yfilter;
    }
    if(value_path == "tx-message-type")
    {
        tx_message_type.yfilter = yfilter;
    }
    if(value_path == "tx-neighbor-mac-address")
    {
        tx_neighbor_mac_address.yfilter = yfilter;
    }
    if(value_path == "tx-packet-test")
    {
        tx_packet_test.yfilter = yfilter;
    }
    if(value_path == "tx-path-type")
    {
        tx_path_type.yfilter = yfilter;
    }
    if(value_path == "tx-ttl")
    {
        tx_ttl.yfilter = yfilter;
    }
    if(value_path == "wrap-state")
    {
        wrap_state.yfilter = yfilter;
    }
    if(value_path == "wtr-timer-remaining")
    {
        wtr_timer_remaining.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asserted-failure" || name == "delay-keep-alive-trigger" || name == "mac-address" || name == "packet-sent-timer" || name == "remote-request" || name == "rx-message-type" || name == "rx-neighbor-mac-address" || name == "rx-packet-test" || name == "rx-path-type" || name == "rx-ttl" || name == "self-detected-request" || name == "send-timer-time-remaining" || name == "tx-message-type" || name == "tx-neighbor-mac-address" || name == "tx-packet-test" || name == "tx-path-type" || name == "tx-ttl" || name == "wrap-state" || name == "wtr-timer-remaining")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::AssertedFailure()
    :
    current_state{YType::enumeration, "current-state"},
    debounced_delay{YType::uint32, "debounced-delay"},
    debounced_state{YType::enumeration, "debounced-state"},
    reported_state{YType::enumeration, "reported-state"},
    stable_time{YType::uint64, "stable-time"},
    type{YType::enumeration, "type"}
{
    yang_name = "asserted-failure"; yang_parent_name = "side-a";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::~AssertedFailure()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::has_data() const
{
    return current_state.is_set
	|| debounced_delay.is_set
	|| debounced_state.is_set
	|| reported_state.is_set
	|| stable_time.is_set
	|| type.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_state.yfilter)
	|| ydk::is_set(debounced_delay.yfilter)
	|| ydk::is_set(debounced_state.yfilter)
	|| ydk::is_set(reported_state.yfilter)
	|| ydk::is_set(stable_time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asserted-failure";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssertedFailure' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_state.is_set || is_set(current_state.yfilter)) leaf_name_data.push_back(current_state.get_name_leafdata());
    if (debounced_delay.is_set || is_set(debounced_delay.yfilter)) leaf_name_data.push_back(debounced_delay.get_name_leafdata());
    if (debounced_state.is_set || is_set(debounced_state.yfilter)) leaf_name_data.push_back(debounced_state.get_name_leafdata());
    if (reported_state.is_set || is_set(reported_state.yfilter)) leaf_name_data.push_back(reported_state.get_name_leafdata());
    if (stable_time.is_set || is_set(stable_time.yfilter)) leaf_name_data.push_back(stable_time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-state")
    {
        current_state = value;
        current_state.value_namespace = name_space;
        current_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounced-delay")
    {
        debounced_delay = value;
        debounced_delay.value_namespace = name_space;
        debounced_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounced-state")
    {
        debounced_state = value;
        debounced_state.value_namespace = name_space;
        debounced_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-state")
    {
        reported_state = value;
        reported_state.value_namespace = name_space;
        reported_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stable-time")
    {
        stable_time = value;
        stable_time.value_namespace = name_space;
        stable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-state")
    {
        current_state.yfilter = yfilter;
    }
    if(value_path == "debounced-delay")
    {
        debounced_delay.yfilter = yfilter;
    }
    if(value_path == "debounced-state")
    {
        debounced_state.yfilter = yfilter;
    }
    if(value_path == "reported-state")
    {
        reported_state.yfilter = yfilter;
    }
    if(value_path == "stable-time")
    {
        stable_time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-state" || name == "debounced-delay" || name == "debounced-state" || name == "reported-state" || name == "stable-time" || name == "type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::SideB()
    :
    delay_keep_alive_trigger{YType::uint32, "delay-keep-alive-trigger"},
    mac_address{YType::str, "mac-address"},
    packet_sent_timer{YType::uint32, "packet-sent-timer"},
    remote_request{YType::enumeration, "remote-request"},
    rx_message_type{YType::enumeration, "rx-message-type"},
    rx_neighbor_mac_address{YType::str, "rx-neighbor-mac-address"},
    rx_packet_test{YType::int32, "rx-packet-test"},
    rx_path_type{YType::enumeration, "rx-path-type"},
    rx_ttl{YType::uint32, "rx-ttl"},
    self_detected_request{YType::enumeration, "self-detected-request"},
    send_timer_time_remaining{YType::uint32, "send-timer-time-remaining"},
    tx_message_type{YType::enumeration, "tx-message-type"},
    tx_neighbor_mac_address{YType::str, "tx-neighbor-mac-address"},
    tx_packet_test{YType::int32, "tx-packet-test"},
    tx_path_type{YType::enumeration, "tx-path-type"},
    tx_ttl{YType::uint32, "tx-ttl"},
    wrap_state{YType::enumeration, "wrap-state"},
    wtr_timer_remaining{YType::uint32, "wtr-timer-remaining"}
{
    yang_name = "side-b"; yang_parent_name = "local-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::~SideB()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::has_data() const
{
    for (std::size_t index=0; index<asserted_failure.size(); index++)
    {
        if(asserted_failure[index]->has_data())
            return true;
    }
    return delay_keep_alive_trigger.is_set
	|| mac_address.is_set
	|| packet_sent_timer.is_set
	|| remote_request.is_set
	|| rx_message_type.is_set
	|| rx_neighbor_mac_address.is_set
	|| rx_packet_test.is_set
	|| rx_path_type.is_set
	|| rx_ttl.is_set
	|| self_detected_request.is_set
	|| send_timer_time_remaining.is_set
	|| tx_message_type.is_set
	|| tx_neighbor_mac_address.is_set
	|| tx_packet_test.is_set
	|| tx_path_type.is_set
	|| tx_ttl.is_set
	|| wrap_state.is_set
	|| wtr_timer_remaining.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::has_operation() const
{
    for (std::size_t index=0; index<asserted_failure.size(); index++)
    {
        if(asserted_failure[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(delay_keep_alive_trigger.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(packet_sent_timer.yfilter)
	|| ydk::is_set(remote_request.yfilter)
	|| ydk::is_set(rx_message_type.yfilter)
	|| ydk::is_set(rx_neighbor_mac_address.yfilter)
	|| ydk::is_set(rx_packet_test.yfilter)
	|| ydk::is_set(rx_path_type.yfilter)
	|| ydk::is_set(rx_ttl.yfilter)
	|| ydk::is_set(self_detected_request.yfilter)
	|| ydk::is_set(send_timer_time_remaining.yfilter)
	|| ydk::is_set(tx_message_type.yfilter)
	|| ydk::is_set(tx_neighbor_mac_address.yfilter)
	|| ydk::is_set(tx_packet_test.yfilter)
	|| ydk::is_set(tx_path_type.yfilter)
	|| ydk::is_set(tx_ttl.yfilter)
	|| ydk::is_set(wrap_state.yfilter)
	|| ydk::is_set(wtr_timer_remaining.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "side-b";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SideB' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_keep_alive_trigger.is_set || is_set(delay_keep_alive_trigger.yfilter)) leaf_name_data.push_back(delay_keep_alive_trigger.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packet_sent_timer.is_set || is_set(packet_sent_timer.yfilter)) leaf_name_data.push_back(packet_sent_timer.get_name_leafdata());
    if (remote_request.is_set || is_set(remote_request.yfilter)) leaf_name_data.push_back(remote_request.get_name_leafdata());
    if (rx_message_type.is_set || is_set(rx_message_type.yfilter)) leaf_name_data.push_back(rx_message_type.get_name_leafdata());
    if (rx_neighbor_mac_address.is_set || is_set(rx_neighbor_mac_address.yfilter)) leaf_name_data.push_back(rx_neighbor_mac_address.get_name_leafdata());
    if (rx_packet_test.is_set || is_set(rx_packet_test.yfilter)) leaf_name_data.push_back(rx_packet_test.get_name_leafdata());
    if (rx_path_type.is_set || is_set(rx_path_type.yfilter)) leaf_name_data.push_back(rx_path_type.get_name_leafdata());
    if (rx_ttl.is_set || is_set(rx_ttl.yfilter)) leaf_name_data.push_back(rx_ttl.get_name_leafdata());
    if (self_detected_request.is_set || is_set(self_detected_request.yfilter)) leaf_name_data.push_back(self_detected_request.get_name_leafdata());
    if (send_timer_time_remaining.is_set || is_set(send_timer_time_remaining.yfilter)) leaf_name_data.push_back(send_timer_time_remaining.get_name_leafdata());
    if (tx_message_type.is_set || is_set(tx_message_type.yfilter)) leaf_name_data.push_back(tx_message_type.get_name_leafdata());
    if (tx_neighbor_mac_address.is_set || is_set(tx_neighbor_mac_address.yfilter)) leaf_name_data.push_back(tx_neighbor_mac_address.get_name_leafdata());
    if (tx_packet_test.is_set || is_set(tx_packet_test.yfilter)) leaf_name_data.push_back(tx_packet_test.get_name_leafdata());
    if (tx_path_type.is_set || is_set(tx_path_type.yfilter)) leaf_name_data.push_back(tx_path_type.get_name_leafdata());
    if (tx_ttl.is_set || is_set(tx_ttl.yfilter)) leaf_name_data.push_back(tx_ttl.get_name_leafdata());
    if (wrap_state.is_set || is_set(wrap_state.yfilter)) leaf_name_data.push_back(wrap_state.get_name_leafdata());
    if (wtr_timer_remaining.is_set || is_set(wtr_timer_remaining.yfilter)) leaf_name_data.push_back(wtr_timer_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asserted-failure")
    {
        for(auto const & c : asserted_failure)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure>();
        c->parent = this;
        asserted_failure.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : asserted_failure)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-keep-alive-trigger")
    {
        delay_keep_alive_trigger = value;
        delay_keep_alive_trigger.value_namespace = name_space;
        delay_keep_alive_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-sent-timer")
    {
        packet_sent_timer = value;
        packet_sent_timer.value_namespace = name_space;
        packet_sent_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-request")
    {
        remote_request = value;
        remote_request.value_namespace = name_space;
        remote_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-message-type")
    {
        rx_message_type = value;
        rx_message_type.value_namespace = name_space;
        rx_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-neighbor-mac-address")
    {
        rx_neighbor_mac_address = value;
        rx_neighbor_mac_address.value_namespace = name_space;
        rx_neighbor_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packet-test")
    {
        rx_packet_test = value;
        rx_packet_test.value_namespace = name_space;
        rx_packet_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-type")
    {
        rx_path_type = value;
        rx_path_type.value_namespace = name_space;
        rx_path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ttl")
    {
        rx_ttl = value;
        rx_ttl.value_namespace = name_space;
        rx_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-detected-request")
    {
        self_detected_request = value;
        self_detected_request.value_namespace = name_space;
        self_detected_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-timer-time-remaining")
    {
        send_timer_time_remaining = value;
        send_timer_time_remaining.value_namespace = name_space;
        send_timer_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-message-type")
    {
        tx_message_type = value;
        tx_message_type.value_namespace = name_space;
        tx_message_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-neighbor-mac-address")
    {
        tx_neighbor_mac_address = value;
        tx_neighbor_mac_address.value_namespace = name_space;
        tx_neighbor_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packet-test")
    {
        tx_packet_test = value;
        tx_packet_test.value_namespace = name_space;
        tx_packet_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-type")
    {
        tx_path_type = value;
        tx_path_type.value_namespace = name_space;
        tx_path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-ttl")
    {
        tx_ttl = value;
        tx_ttl.value_namespace = name_space;
        tx_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrap-state")
    {
        wrap_state = value;
        wrap_state.value_namespace = name_space;
        wrap_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timer-remaining")
    {
        wtr_timer_remaining = value;
        wtr_timer_remaining.value_namespace = name_space;
        wtr_timer_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-keep-alive-trigger")
    {
        delay_keep_alive_trigger.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "packet-sent-timer")
    {
        packet_sent_timer.yfilter = yfilter;
    }
    if(value_path == "remote-request")
    {
        remote_request.yfilter = yfilter;
    }
    if(value_path == "rx-message-type")
    {
        rx_message_type.yfilter = yfilter;
    }
    if(value_path == "rx-neighbor-mac-address")
    {
        rx_neighbor_mac_address.yfilter = yfilter;
    }
    if(value_path == "rx-packet-test")
    {
        rx_packet_test.yfilter = yfilter;
    }
    if(value_path == "rx-path-type")
    {
        rx_path_type.yfilter = yfilter;
    }
    if(value_path == "rx-ttl")
    {
        rx_ttl.yfilter = yfilter;
    }
    if(value_path == "self-detected-request")
    {
        self_detected_request.yfilter = yfilter;
    }
    if(value_path == "send-timer-time-remaining")
    {
        send_timer_time_remaining.yfilter = yfilter;
    }
    if(value_path == "tx-message-type")
    {
        tx_message_type.yfilter = yfilter;
    }
    if(value_path == "tx-neighbor-mac-address")
    {
        tx_neighbor_mac_address.yfilter = yfilter;
    }
    if(value_path == "tx-packet-test")
    {
        tx_packet_test.yfilter = yfilter;
    }
    if(value_path == "tx-path-type")
    {
        tx_path_type.yfilter = yfilter;
    }
    if(value_path == "tx-ttl")
    {
        tx_ttl.yfilter = yfilter;
    }
    if(value_path == "wrap-state")
    {
        wrap_state.yfilter = yfilter;
    }
    if(value_path == "wtr-timer-remaining")
    {
        wtr_timer_remaining.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asserted-failure" || name == "delay-keep-alive-trigger" || name == "mac-address" || name == "packet-sent-timer" || name == "remote-request" || name == "rx-message-type" || name == "rx-neighbor-mac-address" || name == "rx-packet-test" || name == "rx-path-type" || name == "rx-ttl" || name == "self-detected-request" || name == "send-timer-time-remaining" || name == "tx-message-type" || name == "tx-neighbor-mac-address" || name == "tx-packet-test" || name == "tx-path-type" || name == "tx-ttl" || name == "wrap-state" || name == "wtr-timer-remaining")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::AssertedFailure()
    :
    current_state{YType::enumeration, "current-state"},
    debounced_delay{YType::uint32, "debounced-delay"},
    debounced_state{YType::enumeration, "debounced-state"},
    reported_state{YType::enumeration, "reported-state"},
    stable_time{YType::uint64, "stable-time"},
    type{YType::enumeration, "type"}
{
    yang_name = "asserted-failure"; yang_parent_name = "side-b";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::~AssertedFailure()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::has_data() const
{
    return current_state.is_set
	|| debounced_delay.is_set
	|| debounced_state.is_set
	|| reported_state.is_set
	|| stable_time.is_set
	|| type.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_state.yfilter)
	|| ydk::is_set(debounced_delay.yfilter)
	|| ydk::is_set(debounced_state.yfilter)
	|| ydk::is_set(reported_state.yfilter)
	|| ydk::is_set(stable_time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asserted-failure";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssertedFailure' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_state.is_set || is_set(current_state.yfilter)) leaf_name_data.push_back(current_state.get_name_leafdata());
    if (debounced_delay.is_set || is_set(debounced_delay.yfilter)) leaf_name_data.push_back(debounced_delay.get_name_leafdata());
    if (debounced_state.is_set || is_set(debounced_state.yfilter)) leaf_name_data.push_back(debounced_state.get_name_leafdata());
    if (reported_state.is_set || is_set(reported_state.yfilter)) leaf_name_data.push_back(reported_state.get_name_leafdata());
    if (stable_time.is_set || is_set(stable_time.yfilter)) leaf_name_data.push_back(stable_time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-state")
    {
        current_state = value;
        current_state.value_namespace = name_space;
        current_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounced-delay")
    {
        debounced_delay = value;
        debounced_delay.value_namespace = name_space;
        debounced_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounced-state")
    {
        debounced_state = value;
        debounced_state.value_namespace = name_space;
        debounced_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-state")
    {
        reported_state = value;
        reported_state.value_namespace = name_space;
        reported_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stable-time")
    {
        stable_time = value;
        stable_time.value_namespace = name_space;
        stable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-state")
    {
        current_state.yfilter = yfilter;
    }
    if(value_path == "debounced-delay")
    {
        debounced_delay.yfilter = yfilter;
    }
    if(value_path == "debounced-state")
    {
        debounced_state.yfilter = yfilter;
    }
    if(value_path == "reported-state")
    {
        reported_state.yfilter = yfilter;
    }
    if(value_path == "stable-time")
    {
        stable_time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-state" || name == "debounced-delay" || name == "debounced-state" || name == "reported-state" || name == "stable-time" || name == "type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::TopologyInfo()
    :
    is_admin_down{YType::int32, "is-admin-down"}
{
    yang_name = "topology-info"; yang_parent_name = "srp-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::~TopologyInfo()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::has_data() const
{
    for (std::size_t index=0; index<local_information.size(); index++)
    {
        if(local_information[index]->has_data())
            return true;
    }
    return is_admin_down.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::has_operation() const
{
    for (std::size_t index=0; index<local_information.size(); index++)
    {
        if(local_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_admin_down.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-info";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyInfo' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_down.is_set || is_set(is_admin_down.yfilter)) leaf_name_data.push_back(is_admin_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-information")
    {
        for(auto const & c : local_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation>();
        c->parent = this;
        local_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down = value;
        is_admin_down.value_namespace = name_space;
        is_admin_down.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-information" || name == "is-admin-down")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::LocalInformation()
    :
    next_topology_packet_delay{YType::uint32, "next-topology-packet-delay"},
    number_of_nodes_on_ring{YType::uint16, "number-of-nodes-on-ring"},
    time_since_last_topology_change{YType::uint32, "time-since-last-topology-change"},
    time_since_last_topology_packet_received{YType::uint32, "time-since-last-topology-packet-received"},
    topology_timer{YType::uint32, "topology-timer"}
{
    yang_name = "local-information"; yang_parent_name = "topology-info";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::~LocalInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::has_data() const
{
    for (std::size_t index=0; index<ring_node.size(); index++)
    {
        if(ring_node[index]->has_data())
            return true;
    }
    return next_topology_packet_delay.is_set
	|| number_of_nodes_on_ring.is_set
	|| time_since_last_topology_change.is_set
	|| time_since_last_topology_packet_received.is_set
	|| topology_timer.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::has_operation() const
{
    for (std::size_t index=0; index<ring_node.size(); index++)
    {
        if(ring_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(next_topology_packet_delay.yfilter)
	|| ydk::is_set(number_of_nodes_on_ring.yfilter)
	|| ydk::is_set(time_since_last_topology_change.yfilter)
	|| ydk::is_set(time_since_last_topology_packet_received.yfilter)
	|| ydk::is_set(topology_timer.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_topology_packet_delay.is_set || is_set(next_topology_packet_delay.yfilter)) leaf_name_data.push_back(next_topology_packet_delay.get_name_leafdata());
    if (number_of_nodes_on_ring.is_set || is_set(number_of_nodes_on_ring.yfilter)) leaf_name_data.push_back(number_of_nodes_on_ring.get_name_leafdata());
    if (time_since_last_topology_change.is_set || is_set(time_since_last_topology_change.yfilter)) leaf_name_data.push_back(time_since_last_topology_change.get_name_leafdata());
    if (time_since_last_topology_packet_received.is_set || is_set(time_since_last_topology_packet_received.yfilter)) leaf_name_data.push_back(time_since_last_topology_packet_received.get_name_leafdata());
    if (topology_timer.is_set || is_set(topology_timer.yfilter)) leaf_name_data.push_back(topology_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ring-node")
    {
        for(auto const & c : ring_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode>();
        c->parent = this;
        ring_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ring_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-topology-packet-delay")
    {
        next_topology_packet_delay = value;
        next_topology_packet_delay.value_namespace = name_space;
        next_topology_packet_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-nodes-on-ring")
    {
        number_of_nodes_on_ring = value;
        number_of_nodes_on_ring.value_namespace = name_space;
        number_of_nodes_on_ring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-topology-change")
    {
        time_since_last_topology_change = value;
        time_since_last_topology_change.value_namespace = name_space;
        time_since_last_topology_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-topology-packet-received")
    {
        time_since_last_topology_packet_received = value;
        time_since_last_topology_packet_received.value_namespace = name_space;
        time_since_last_topology_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-timer")
    {
        topology_timer = value;
        topology_timer.value_namespace = name_space;
        topology_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-topology-packet-delay")
    {
        next_topology_packet_delay.yfilter = yfilter;
    }
    if(value_path == "number-of-nodes-on-ring")
    {
        number_of_nodes_on_ring.yfilter = yfilter;
    }
    if(value_path == "time-since-last-topology-change")
    {
        time_since_last_topology_change.yfilter = yfilter;
    }
    if(value_path == "time-since-last-topology-packet-received")
    {
        time_since_last_topology_packet_received.yfilter = yfilter;
    }
    if(value_path == "topology-timer")
    {
        topology_timer.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ring-node" || name == "next-topology-packet-delay" || name == "number-of-nodes-on-ring" || name == "time-since-last-topology-change" || name == "time-since-last-topology-packet-received" || name == "topology-timer")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::RingNode()
    :
    hop_count{YType::uint16, "hop-count"},
    ipv4_address{YType::str, "ipv4-address"},
    is_srr_supported{YType::int32, "is-srr-supported"},
    is_wrapped{YType::int32, "is-wrapped"},
    mac_address{YType::str, "mac-address"},
    node_name{YType::str, "node-name"}
{
    yang_name = "ring-node"; yang_parent_name = "local-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::~RingNode()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::has_data() const
{
    return hop_count.is_set
	|| ipv4_address.is_set
	|| is_srr_supported.is_set
	|| is_wrapped.is_set
	|| mac_address.is_set
	|| node_name.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_count.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(is_srr_supported.yfilter)
	|| ydk::is_set(is_wrapped.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ring-node";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RingNode' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_count.is_set || is_set(hop_count.yfilter)) leaf_name_data.push_back(hop_count.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (is_srr_supported.is_set || is_set(is_srr_supported.yfilter)) leaf_name_data.push_back(is_srr_supported.get_name_leafdata());
    if (is_wrapped.is_set || is_set(is_wrapped.yfilter)) leaf_name_data.push_back(is_wrapped.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-count")
    {
        hop_count = value;
        hop_count.value_namespace = name_space;
        hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srr-supported")
    {
        is_srr_supported = value;
        is_srr_supported.value_namespace = name_space;
        is_srr_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-wrapped")
    {
        is_wrapped = value;
        is_wrapped.value_namespace = name_space;
        is_wrapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-count")
    {
        hop_count.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "is-srr-supported")
    {
        is_srr_supported.yfilter = yfilter;
    }
    if(value_path == "is-wrapped")
    {
        is_wrapped.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-count" || name == "ipv4-address" || name == "is-srr-supported" || name == "is-wrapped" || name == "mac-address" || name == "node-name")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrInfo()
    :
    is_admin_down{YType::int32, "is-admin-down"},
    is_srr_enabled{YType::int32, "is-srr-enabled"}
{
    yang_name = "srr-info"; yang_parent_name = "srp-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::~SrrInfo()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::has_data() const
{
    for (std::size_t index=0; index<srr_detailed_info.size(); index++)
    {
        if(srr_detailed_info[index]->has_data())
            return true;
    }
    return is_admin_down.is_set
	|| is_srr_enabled.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::has_operation() const
{
    for (std::size_t index=0; index<srr_detailed_info.size(); index++)
    {
        if(srr_detailed_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_admin_down.yfilter)
	|| ydk::is_set(is_srr_enabled.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srr-info";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrrInfo' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_down.is_set || is_set(is_admin_down.yfilter)) leaf_name_data.push_back(is_admin_down.get_name_leafdata());
    if (is_srr_enabled.is_set || is_set(is_srr_enabled.yfilter)) leaf_name_data.push_back(is_srr_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srr-detailed-info")
    {
        for(auto const & c : srr_detailed_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo>();
        c->parent = this;
        srr_detailed_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srr_detailed_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down = value;
        is_admin_down.value_namespace = name_space;
        is_admin_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srr-enabled")
    {
        is_srr_enabled = value;
        is_srr_enabled.value_namespace = name_space;
        is_srr_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down.yfilter = yfilter;
    }
    if(value_path == "is-srr-enabled")
    {
        is_srr_enabled.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srr-detailed-info" || name == "is-admin-down" || name == "is-srr-enabled")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::SrrDetailedInfo()
    :
    inner_fail_type{YType::enumeration, "inner-fail-type"},
    is_announce{YType::int32, "is-announce"},
    is_inner_ring_in_use{YType::int32, "is-inner-ring-in-use"},
    is_outer_ring_in_use{YType::int32, "is-outer-ring-in-use"},
    is_wrong_version_received{YType::int32, "is-wrong-version-received"},
    last_wrong_version_receive_time{YType::uint32, "last-wrong-version-receive-time"},
    mac_address{YType::str, "mac-address"},
    next_srr_packet_send_time{YType::uint32, "next-srr-packet-send-time"},
    node_state{YType::enumeration, "node-state"},
    outer_fail_type{YType::enumeration, "outer-fail-type"},
    packet_send_timer{YType::uint32, "packet-send-timer"},
    single_ring_bw{YType::uint32, "single-ring-bw"},
    version_number{YType::uint32, "version-number"},
    wtr_time{YType::uint32, "wtr-time"},
    wtr_timer_remaining_inner_ring{YType::uint32, "wtr-timer-remaining-inner-ring"},
    wtr_timer_remaining_outer_ring{YType::uint32, "wtr-timer-remaining-outer-ring"}
{
    yang_name = "srr-detailed-info"; yang_parent_name = "srr-info";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::~SrrDetailedInfo()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::has_data() const
{
    for (std::size_t index=0; index<nodes_not_on_ring.size(); index++)
    {
        if(nodes_not_on_ring[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nodes_on_ring.size(); index++)
    {
        if(nodes_on_ring[index]->has_data())
            return true;
    }
    return inner_fail_type.is_set
	|| is_announce.is_set
	|| is_inner_ring_in_use.is_set
	|| is_outer_ring_in_use.is_set
	|| is_wrong_version_received.is_set
	|| last_wrong_version_receive_time.is_set
	|| mac_address.is_set
	|| next_srr_packet_send_time.is_set
	|| node_state.is_set
	|| outer_fail_type.is_set
	|| packet_send_timer.is_set
	|| single_ring_bw.is_set
	|| version_number.is_set
	|| wtr_time.is_set
	|| wtr_timer_remaining_inner_ring.is_set
	|| wtr_timer_remaining_outer_ring.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::has_operation() const
{
    for (std::size_t index=0; index<nodes_not_on_ring.size(); index++)
    {
        if(nodes_not_on_ring[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nodes_on_ring.size(); index++)
    {
        if(nodes_on_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner_fail_type.yfilter)
	|| ydk::is_set(is_announce.yfilter)
	|| ydk::is_set(is_inner_ring_in_use.yfilter)
	|| ydk::is_set(is_outer_ring_in_use.yfilter)
	|| ydk::is_set(is_wrong_version_received.yfilter)
	|| ydk::is_set(last_wrong_version_receive_time.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(next_srr_packet_send_time.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(outer_fail_type.yfilter)
	|| ydk::is_set(packet_send_timer.yfilter)
	|| ydk::is_set(single_ring_bw.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| ydk::is_set(wtr_time.yfilter)
	|| ydk::is_set(wtr_timer_remaining_inner_ring.yfilter)
	|| ydk::is_set(wtr_timer_remaining_outer_ring.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srr-detailed-info";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrrDetailedInfo' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_fail_type.is_set || is_set(inner_fail_type.yfilter)) leaf_name_data.push_back(inner_fail_type.get_name_leafdata());
    if (is_announce.is_set || is_set(is_announce.yfilter)) leaf_name_data.push_back(is_announce.get_name_leafdata());
    if (is_inner_ring_in_use.is_set || is_set(is_inner_ring_in_use.yfilter)) leaf_name_data.push_back(is_inner_ring_in_use.get_name_leafdata());
    if (is_outer_ring_in_use.is_set || is_set(is_outer_ring_in_use.yfilter)) leaf_name_data.push_back(is_outer_ring_in_use.get_name_leafdata());
    if (is_wrong_version_received.is_set || is_set(is_wrong_version_received.yfilter)) leaf_name_data.push_back(is_wrong_version_received.get_name_leafdata());
    if (last_wrong_version_receive_time.is_set || is_set(last_wrong_version_receive_time.yfilter)) leaf_name_data.push_back(last_wrong_version_receive_time.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (next_srr_packet_send_time.is_set || is_set(next_srr_packet_send_time.yfilter)) leaf_name_data.push_back(next_srr_packet_send_time.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (outer_fail_type.is_set || is_set(outer_fail_type.yfilter)) leaf_name_data.push_back(outer_fail_type.get_name_leafdata());
    if (packet_send_timer.is_set || is_set(packet_send_timer.yfilter)) leaf_name_data.push_back(packet_send_timer.get_name_leafdata());
    if (single_ring_bw.is_set || is_set(single_ring_bw.yfilter)) leaf_name_data.push_back(single_ring_bw.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());
    if (wtr_time.is_set || is_set(wtr_time.yfilter)) leaf_name_data.push_back(wtr_time.get_name_leafdata());
    if (wtr_timer_remaining_inner_ring.is_set || is_set(wtr_timer_remaining_inner_ring.yfilter)) leaf_name_data.push_back(wtr_timer_remaining_inner_ring.get_name_leafdata());
    if (wtr_timer_remaining_outer_ring.is_set || is_set(wtr_timer_remaining_outer_ring.yfilter)) leaf_name_data.push_back(wtr_timer_remaining_outer_ring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes-not-on-ring")
    {
        for(auto const & c : nodes_not_on_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing>();
        c->parent = this;
        nodes_not_on_ring.push_back(c);
        return c;
    }

    if(child_yang_name == "nodes-on-ring")
    {
        for(auto const & c : nodes_on_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing>();
        c->parent = this;
        nodes_on_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nodes_not_on_ring)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nodes_on_ring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-fail-type")
    {
        inner_fail_type = value;
        inner_fail_type.value_namespace = name_space;
        inner_fail_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-announce")
    {
        is_announce = value;
        is_announce.value_namespace = name_space;
        is_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-inner-ring-in-use")
    {
        is_inner_ring_in_use = value;
        is_inner_ring_in_use.value_namespace = name_space;
        is_inner_ring_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-outer-ring-in-use")
    {
        is_outer_ring_in_use = value;
        is_outer_ring_in_use.value_namespace = name_space;
        is_outer_ring_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-wrong-version-received")
    {
        is_wrong_version_received = value;
        is_wrong_version_received.value_namespace = name_space;
        is_wrong_version_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-wrong-version-receive-time")
    {
        last_wrong_version_receive_time = value;
        last_wrong_version_receive_time.value_namespace = name_space;
        last_wrong_version_receive_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-srr-packet-send-time")
    {
        next_srr_packet_send_time = value;
        next_srr_packet_send_time.value_namespace = name_space;
        next_srr_packet_send_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-fail-type")
    {
        outer_fail_type = value;
        outer_fail_type.value_namespace = name_space;
        outer_fail_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-send-timer")
    {
        packet_send_timer = value;
        packet_send_timer.value_namespace = name_space;
        packet_send_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-ring-bw")
    {
        single_ring_bw = value;
        single_ring_bw.value_namespace = name_space;
        single_ring_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-time")
    {
        wtr_time = value;
        wtr_time.value_namespace = name_space;
        wtr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timer-remaining-inner-ring")
    {
        wtr_timer_remaining_inner_ring = value;
        wtr_timer_remaining_inner_ring.value_namespace = name_space;
        wtr_timer_remaining_inner_ring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timer-remaining-outer-ring")
    {
        wtr_timer_remaining_outer_ring = value;
        wtr_timer_remaining_outer_ring.value_namespace = name_space;
        wtr_timer_remaining_outer_ring.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-fail-type")
    {
        inner_fail_type.yfilter = yfilter;
    }
    if(value_path == "is-announce")
    {
        is_announce.yfilter = yfilter;
    }
    if(value_path == "is-inner-ring-in-use")
    {
        is_inner_ring_in_use.yfilter = yfilter;
    }
    if(value_path == "is-outer-ring-in-use")
    {
        is_outer_ring_in_use.yfilter = yfilter;
    }
    if(value_path == "is-wrong-version-received")
    {
        is_wrong_version_received.yfilter = yfilter;
    }
    if(value_path == "last-wrong-version-receive-time")
    {
        last_wrong_version_receive_time.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "next-srr-packet-send-time")
    {
        next_srr_packet_send_time.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "outer-fail-type")
    {
        outer_fail_type.yfilter = yfilter;
    }
    if(value_path == "packet-send-timer")
    {
        packet_send_timer.yfilter = yfilter;
    }
    if(value_path == "single-ring-bw")
    {
        single_ring_bw.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
    if(value_path == "wtr-time")
    {
        wtr_time.yfilter = yfilter;
    }
    if(value_path == "wtr-timer-remaining-inner-ring")
    {
        wtr_timer_remaining_inner_ring.yfilter = yfilter;
    }
    if(value_path == "wtr-timer-remaining-outer-ring")
    {
        wtr_timer_remaining_outer_ring.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes-not-on-ring" || name == "nodes-on-ring" || name == "inner-fail-type" || name == "is-announce" || name == "is-inner-ring-in-use" || name == "is-outer-ring-in-use" || name == "is-wrong-version-received" || name == "last-wrong-version-receive-time" || name == "mac-address" || name == "next-srr-packet-send-time" || name == "node-state" || name == "outer-fail-type" || name == "packet-send-timer" || name == "single-ring-bw" || name == "version-number" || name == "wtr-time" || name == "wtr-timer-remaining-inner-ring" || name == "wtr-timer-remaining-outer-ring")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::NodesOnRing()
    :
    inner_failure{YType::enumeration, "inner-failure"},
    is_last_announce_received{YType::int32, "is-last-announce-received"},
    last_announce_received_time{YType::uint32, "last-announce-received-time"},
    mac_address{YType::str, "mac-address"},
    node_name{YType::str, "node-name"},
    outer_failure{YType::enumeration, "outer-failure"},
    srr_entry_exits{YType::int32, "srr-entry-exits"}
{
    yang_name = "nodes-on-ring"; yang_parent_name = "srr-detailed-info";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::~NodesOnRing()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::has_data() const
{
    return inner_failure.is_set
	|| is_last_announce_received.is_set
	|| last_announce_received_time.is_set
	|| mac_address.is_set
	|| node_name.is_set
	|| outer_failure.is_set
	|| srr_entry_exits.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_failure.yfilter)
	|| ydk::is_set(is_last_announce_received.yfilter)
	|| ydk::is_set(last_announce_received_time.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(outer_failure.yfilter)
	|| ydk::is_set(srr_entry_exits.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes-on-ring";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodesOnRing' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_failure.is_set || is_set(inner_failure.yfilter)) leaf_name_data.push_back(inner_failure.get_name_leafdata());
    if (is_last_announce_received.is_set || is_set(is_last_announce_received.yfilter)) leaf_name_data.push_back(is_last_announce_received.get_name_leafdata());
    if (last_announce_received_time.is_set || is_set(last_announce_received_time.yfilter)) leaf_name_data.push_back(last_announce_received_time.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (outer_failure.is_set || is_set(outer_failure.yfilter)) leaf_name_data.push_back(outer_failure.get_name_leafdata());
    if (srr_entry_exits.is_set || is_set(srr_entry_exits.yfilter)) leaf_name_data.push_back(srr_entry_exits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-failure")
    {
        inner_failure = value;
        inner_failure.value_namespace = name_space;
        inner_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-last-announce-received")
    {
        is_last_announce_received = value;
        is_last_announce_received.value_namespace = name_space;
        is_last_announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-announce-received-time")
    {
        last_announce_received_time = value;
        last_announce_received_time.value_namespace = name_space;
        last_announce_received_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-failure")
    {
        outer_failure = value;
        outer_failure.value_namespace = name_space;
        outer_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srr-entry-exits")
    {
        srr_entry_exits = value;
        srr_entry_exits.value_namespace = name_space;
        srr_entry_exits.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-failure")
    {
        inner_failure.yfilter = yfilter;
    }
    if(value_path == "is-last-announce-received")
    {
        is_last_announce_received.yfilter = yfilter;
    }
    if(value_path == "last-announce-received-time")
    {
        last_announce_received_time.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "outer-failure")
    {
        outer_failure.yfilter = yfilter;
    }
    if(value_path == "srr-entry-exits")
    {
        srr_entry_exits.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-failure" || name == "is-last-announce-received" || name == "last-announce-received-time" || name == "mac-address" || name == "node-name" || name == "outer-failure" || name == "srr-entry-exits")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::NodesNotOnRing()
    :
    inner_failure{YType::enumeration, "inner-failure"},
    is_last_announce_received{YType::int32, "is-last-announce-received"},
    last_announce_received_time{YType::uint32, "last-announce-received-time"},
    mac_address{YType::str, "mac-address"},
    node_name{YType::str, "node-name"},
    outer_failure{YType::enumeration, "outer-failure"},
    srr_entry_exits{YType::int32, "srr-entry-exits"}
{
    yang_name = "nodes-not-on-ring"; yang_parent_name = "srr-detailed-info";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::~NodesNotOnRing()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::has_data() const
{
    return inner_failure.is_set
	|| is_last_announce_received.is_set
	|| last_announce_received_time.is_set
	|| mac_address.is_set
	|| node_name.is_set
	|| outer_failure.is_set
	|| srr_entry_exits.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_failure.yfilter)
	|| ydk::is_set(is_last_announce_received.yfilter)
	|| ydk::is_set(last_announce_received_time.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(outer_failure.yfilter)
	|| ydk::is_set(srr_entry_exits.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes-not-on-ring";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodesNotOnRing' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_failure.is_set || is_set(inner_failure.yfilter)) leaf_name_data.push_back(inner_failure.get_name_leafdata());
    if (is_last_announce_received.is_set || is_set(is_last_announce_received.yfilter)) leaf_name_data.push_back(is_last_announce_received.get_name_leafdata());
    if (last_announce_received_time.is_set || is_set(last_announce_received_time.yfilter)) leaf_name_data.push_back(last_announce_received_time.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (outer_failure.is_set || is_set(outer_failure.yfilter)) leaf_name_data.push_back(outer_failure.get_name_leafdata());
    if (srr_entry_exits.is_set || is_set(srr_entry_exits.yfilter)) leaf_name_data.push_back(srr_entry_exits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-failure")
    {
        inner_failure = value;
        inner_failure.value_namespace = name_space;
        inner_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-last-announce-received")
    {
        is_last_announce_received = value;
        is_last_announce_received.value_namespace = name_space;
        is_last_announce_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-announce-received-time")
    {
        last_announce_received_time = value;
        last_announce_received_time.value_namespace = name_space;
        last_announce_received_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-failure")
    {
        outer_failure = value;
        outer_failure.value_namespace = name_space;
        outer_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srr-entry-exits")
    {
        srr_entry_exits = value;
        srr_entry_exits.value_namespace = name_space;
        srr_entry_exits.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-failure")
    {
        inner_failure.yfilter = yfilter;
    }
    if(value_path == "is-last-announce-received")
    {
        is_last_announce_received.yfilter = yfilter;
    }
    if(value_path == "last-announce-received-time")
    {
        last_announce_received_time.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "outer-failure")
    {
        outer_failure.yfilter = yfilter;
    }
    if(value_path == "srr-entry-exits")
    {
        srr_entry_exits.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-failure" || name == "is-last-announce-received" || name == "last-announce-received-time" || name == "mac-address" || name == "node-name" || name == "outer-failure" || name == "srr-entry-exits")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitInfo()
    :
    is_admin_down{YType::int32, "is-admin-down"}
{
    yang_name = "rate-limit-info"; yang_parent_name = "srp-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::~RateLimitInfo()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::has_data() const
{
    for (std::size_t index=0; index<rate_limit_detailed_info.size(); index++)
    {
        if(rate_limit_detailed_info[index]->has_data())
            return true;
    }
    return is_admin_down.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::has_operation() const
{
    for (std::size_t index=0; index<rate_limit_detailed_info.size(); index++)
    {
        if(rate_limit_detailed_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_admin_down.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit-info";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RateLimitInfo' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_down.is_set || is_set(is_admin_down.yfilter)) leaf_name_data.push_back(is_admin_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit-detailed-info")
    {
        for(auto const & c : rate_limit_detailed_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo>();
        c->parent = this;
        rate_limit_detailed_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rate_limit_detailed_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down = value;
        is_admin_down.value_namespace = name_space;
        is_admin_down.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-down")
    {
        is_admin_down.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit-detailed-info" || name == "is-admin-down")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::RateLimitDetailedInfo()
    :
    min_priority_value{YType::uint16, "min-priority-value"}
{
    yang_name = "rate-limit-detailed-info"; yang_parent_name = "rate-limit-info";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::~RateLimitDetailedInfo()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::has_data() const
{
    return min_priority_value.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_priority_value.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit-detailed-info";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RateLimitDetailedInfo' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_priority_value.is_set || is_set(min_priority_value.yfilter)) leaf_name_data.push_back(min_priority_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-priority-value")
    {
        min_priority_value = value;
        min_priority_value.value_namespace = name_space;
        min_priority_value.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-priority-value")
    {
        min_priority_value.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-priority-value")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SrpStatistics()
    :
    data_rate_interval{YType::uint32, "data-rate-interval"}
    	,
    side_a_data_rate(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate>())
	,side_a_errors(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors>())
	,side_b_data_rate(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate>())
	,side_b_errors(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors>())
{
    side_a_data_rate->parent = this;

    side_a_errors->parent = this;

    side_b_data_rate->parent = this;

    side_b_errors->parent = this;

    yang_name = "srp-statistics"; yang_parent_name = "srp-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::~SrpStatistics()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::has_data() const
{
    return data_rate_interval.is_set
	|| (side_a_data_rate !=  nullptr && side_a_data_rate->has_data())
	|| (side_a_errors !=  nullptr && side_a_errors->has_data())
	|| (side_b_data_rate !=  nullptr && side_b_data_rate->has_data())
	|| (side_b_errors !=  nullptr && side_b_errors->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_rate_interval.yfilter)
	|| (side_a_data_rate !=  nullptr && side_a_data_rate->has_operation())
	|| (side_a_errors !=  nullptr && side_a_errors->has_operation())
	|| (side_b_data_rate !=  nullptr && side_b_data_rate->has_operation())
	|| (side_b_errors !=  nullptr && side_b_errors->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srp-statistics";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrpStatistics' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_rate_interval.is_set || is_set(data_rate_interval.yfilter)) leaf_name_data.push_back(data_rate_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "side-a-data-rate")
    {
        if(side_a_data_rate == nullptr)
        {
            side_a_data_rate = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate>();
        }
        return side_a_data_rate;
    }

    if(child_yang_name == "side-a-errors")
    {
        if(side_a_errors == nullptr)
        {
            side_a_errors = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors>();
        }
        return side_a_errors;
    }

    if(child_yang_name == "side-b-data-rate")
    {
        if(side_b_data_rate == nullptr)
        {
            side_b_data_rate = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate>();
        }
        return side_b_data_rate;
    }

    if(child_yang_name == "side-b-errors")
    {
        if(side_b_errors == nullptr)
        {
            side_b_errors = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors>();
        }
        return side_b_errors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(side_a_data_rate != nullptr)
    {
        children["side-a-data-rate"] = side_a_data_rate;
    }

    if(side_a_errors != nullptr)
    {
        children["side-a-errors"] = side_a_errors;
    }

    if(side_b_data_rate != nullptr)
    {
        children["side-b-data-rate"] = side_b_data_rate;
    }

    if(side_b_errors != nullptr)
    {
        children["side-b-errors"] = side_b_errors;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-rate-interval")
    {
        data_rate_interval = value;
        data_rate_interval.value_namespace = name_space;
        data_rate_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-rate-interval")
    {
        data_rate_interval.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "side-a-data-rate" || name == "side-a-errors" || name == "side-b-data-rate" || name == "side-b-errors" || name == "data-rate-interval")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::SideADataRate()
    :
    bit_rate_received{YType::uint32, "bit-rate-received"},
    bit_rate_sent{YType::uint32, "bit-rate-sent"},
    packet_rate_received{YType::uint32, "packet-rate-received"},
    packet_rate_sent{YType::uint32, "packet-rate-sent"}
{
    yang_name = "side-a-data-rate"; yang_parent_name = "srp-statistics";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::~SideADataRate()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::has_data() const
{
    return bit_rate_received.is_set
	|| bit_rate_sent.is_set
	|| packet_rate_received.is_set
	|| packet_rate_sent.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate_received.yfilter)
	|| ydk::is_set(bit_rate_sent.yfilter)
	|| ydk::is_set(packet_rate_received.yfilter)
	|| ydk::is_set(packet_rate_sent.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "side-a-data-rate";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SideADataRate' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate_received.is_set || is_set(bit_rate_received.yfilter)) leaf_name_data.push_back(bit_rate_received.get_name_leafdata());
    if (bit_rate_sent.is_set || is_set(bit_rate_sent.yfilter)) leaf_name_data.push_back(bit_rate_sent.get_name_leafdata());
    if (packet_rate_received.is_set || is_set(packet_rate_received.yfilter)) leaf_name_data.push_back(packet_rate_received.get_name_leafdata());
    if (packet_rate_sent.is_set || is_set(packet_rate_sent.yfilter)) leaf_name_data.push_back(packet_rate_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate-received")
    {
        bit_rate_received = value;
        bit_rate_received.value_namespace = name_space;
        bit_rate_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate-sent")
    {
        bit_rate_sent = value;
        bit_rate_sent.value_namespace = name_space;
        bit_rate_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate-received")
    {
        packet_rate_received = value;
        packet_rate_received.value_namespace = name_space;
        packet_rate_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate-sent")
    {
        packet_rate_sent = value;
        packet_rate_sent.value_namespace = name_space;
        packet_rate_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate-received")
    {
        bit_rate_received.yfilter = yfilter;
    }
    if(value_path == "bit-rate-sent")
    {
        bit_rate_sent.yfilter = yfilter;
    }
    if(value_path == "packet-rate-received")
    {
        packet_rate_received.yfilter = yfilter;
    }
    if(value_path == "packet-rate-sent")
    {
        packet_rate_sent.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate-received" || name == "bit-rate-sent" || name == "packet-rate-received" || name == "packet-rate-sent")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::SideBDataRate()
    :
    bit_rate_received{YType::uint32, "bit-rate-received"},
    bit_rate_sent{YType::uint32, "bit-rate-sent"},
    packet_rate_received{YType::uint32, "packet-rate-received"},
    packet_rate_sent{YType::uint32, "packet-rate-sent"}
{
    yang_name = "side-b-data-rate"; yang_parent_name = "srp-statistics";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::~SideBDataRate()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::has_data() const
{
    return bit_rate_received.is_set
	|| bit_rate_sent.is_set
	|| packet_rate_received.is_set
	|| packet_rate_sent.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate_received.yfilter)
	|| ydk::is_set(bit_rate_sent.yfilter)
	|| ydk::is_set(packet_rate_received.yfilter)
	|| ydk::is_set(packet_rate_sent.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "side-b-data-rate";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SideBDataRate' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate_received.is_set || is_set(bit_rate_received.yfilter)) leaf_name_data.push_back(bit_rate_received.get_name_leafdata());
    if (bit_rate_sent.is_set || is_set(bit_rate_sent.yfilter)) leaf_name_data.push_back(bit_rate_sent.get_name_leafdata());
    if (packet_rate_received.is_set || is_set(packet_rate_received.yfilter)) leaf_name_data.push_back(packet_rate_received.get_name_leafdata());
    if (packet_rate_sent.is_set || is_set(packet_rate_sent.yfilter)) leaf_name_data.push_back(packet_rate_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate-received")
    {
        bit_rate_received = value;
        bit_rate_received.value_namespace = name_space;
        bit_rate_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate-sent")
    {
        bit_rate_sent = value;
        bit_rate_sent.value_namespace = name_space;
        bit_rate_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate-received")
    {
        packet_rate_received = value;
        packet_rate_received.value_namespace = name_space;
        packet_rate_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate-sent")
    {
        packet_rate_sent = value;
        packet_rate_sent.value_namespace = name_space;
        packet_rate_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate-received")
    {
        bit_rate_received.yfilter = yfilter;
    }
    if(value_path == "bit-rate-sent")
    {
        bit_rate_sent.yfilter = yfilter;
    }
    if(value_path == "packet-rate-received")
    {
        packet_rate_received.yfilter = yfilter;
    }
    if(value_path == "packet-rate-sent")
    {
        packet_rate_sent.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate-received" || name == "bit-rate-sent" || name == "packet-rate-received" || name == "packet-rate-sent")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::SideAErrors()
    :
    crc_errors{YType::uint32, "crc-errors"},
    error_packets_received{YType::uint32, "error-packets-received"},
    framer_aborts_received{YType::uint32, "framer-aborts-received"},
    framer_giant_packets_received{YType::uint32, "framer-giant-packets-received"},
    framer_runt_packets_received{YType::uint32, "framer-runt-packets-received"},
    input_insufficient_resource_events{YType::uint32, "input-insufficient-resource-events"},
    mac_aborts_received{YType::uint32, "mac-aborts-received"},
    mac_giant_packets_received{YType::uint32, "mac-giant-packets-received"},
    mac_runt_packets_received{YType::uint32, "mac-runt-packets-received"}
{
    yang_name = "side-a-errors"; yang_parent_name = "srp-statistics";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::~SideAErrors()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::has_data() const
{
    return crc_errors.is_set
	|| error_packets_received.is_set
	|| framer_aborts_received.is_set
	|| framer_giant_packets_received.is_set
	|| framer_runt_packets_received.is_set
	|| input_insufficient_resource_events.is_set
	|| mac_aborts_received.is_set
	|| mac_giant_packets_received.is_set
	|| mac_runt_packets_received.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(error_packets_received.yfilter)
	|| ydk::is_set(framer_aborts_received.yfilter)
	|| ydk::is_set(framer_giant_packets_received.yfilter)
	|| ydk::is_set(framer_runt_packets_received.yfilter)
	|| ydk::is_set(input_insufficient_resource_events.yfilter)
	|| ydk::is_set(mac_aborts_received.yfilter)
	|| ydk::is_set(mac_giant_packets_received.yfilter)
	|| ydk::is_set(mac_runt_packets_received.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "side-a-errors";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SideAErrors' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (error_packets_received.is_set || is_set(error_packets_received.yfilter)) leaf_name_data.push_back(error_packets_received.get_name_leafdata());
    if (framer_aborts_received.is_set || is_set(framer_aborts_received.yfilter)) leaf_name_data.push_back(framer_aborts_received.get_name_leafdata());
    if (framer_giant_packets_received.is_set || is_set(framer_giant_packets_received.yfilter)) leaf_name_data.push_back(framer_giant_packets_received.get_name_leafdata());
    if (framer_runt_packets_received.is_set || is_set(framer_runt_packets_received.yfilter)) leaf_name_data.push_back(framer_runt_packets_received.get_name_leafdata());
    if (input_insufficient_resource_events.is_set || is_set(input_insufficient_resource_events.yfilter)) leaf_name_data.push_back(input_insufficient_resource_events.get_name_leafdata());
    if (mac_aborts_received.is_set || is_set(mac_aborts_received.yfilter)) leaf_name_data.push_back(mac_aborts_received.get_name_leafdata());
    if (mac_giant_packets_received.is_set || is_set(mac_giant_packets_received.yfilter)) leaf_name_data.push_back(mac_giant_packets_received.get_name_leafdata());
    if (mac_runt_packets_received.is_set || is_set(mac_runt_packets_received.yfilter)) leaf_name_data.push_back(mac_runt_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-packets-received")
    {
        error_packets_received = value;
        error_packets_received.value_namespace = name_space;
        error_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framer-aborts-received")
    {
        framer_aborts_received = value;
        framer_aborts_received.value_namespace = name_space;
        framer_aborts_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framer-giant-packets-received")
    {
        framer_giant_packets_received = value;
        framer_giant_packets_received.value_namespace = name_space;
        framer_giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framer-runt-packets-received")
    {
        framer_runt_packets_received = value;
        framer_runt_packets_received.value_namespace = name_space;
        framer_runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-insufficient-resource-events")
    {
        input_insufficient_resource_events = value;
        input_insufficient_resource_events.value_namespace = name_space;
        input_insufficient_resource_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aborts-received")
    {
        mac_aborts_received = value;
        mac_aborts_received.value_namespace = name_space;
        mac_aborts_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-giant-packets-received")
    {
        mac_giant_packets_received = value;
        mac_giant_packets_received.value_namespace = name_space;
        mac_giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-runt-packets-received")
    {
        mac_runt_packets_received = value;
        mac_runt_packets_received.value_namespace = name_space;
        mac_runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "error-packets-received")
    {
        error_packets_received.yfilter = yfilter;
    }
    if(value_path == "framer-aborts-received")
    {
        framer_aborts_received.yfilter = yfilter;
    }
    if(value_path == "framer-giant-packets-received")
    {
        framer_giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "framer-runt-packets-received")
    {
        framer_runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-insufficient-resource-events")
    {
        input_insufficient_resource_events.yfilter = yfilter;
    }
    if(value_path == "mac-aborts-received")
    {
        mac_aborts_received.yfilter = yfilter;
    }
    if(value_path == "mac-giant-packets-received")
    {
        mac_giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "mac-runt-packets-received")
    {
        mac_runt_packets_received.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-errors" || name == "error-packets-received" || name == "framer-aborts-received" || name == "framer-giant-packets-received" || name == "framer-runt-packets-received" || name == "input-insufficient-resource-events" || name == "mac-aborts-received" || name == "mac-giant-packets-received" || name == "mac-runt-packets-received")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::SideBErrors()
    :
    crc_errors{YType::uint32, "crc-errors"},
    error_packets_received{YType::uint32, "error-packets-received"},
    framer_aborts_received{YType::uint32, "framer-aborts-received"},
    framer_giant_packets_received{YType::uint32, "framer-giant-packets-received"},
    framer_runt_packets_received{YType::uint32, "framer-runt-packets-received"},
    input_insufficient_resource_events{YType::uint32, "input-insufficient-resource-events"},
    mac_aborts_received{YType::uint32, "mac-aborts-received"},
    mac_giant_packets_received{YType::uint32, "mac-giant-packets-received"},
    mac_runt_packets_received{YType::uint32, "mac-runt-packets-received"}
{
    yang_name = "side-b-errors"; yang_parent_name = "srp-statistics";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::~SideBErrors()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::has_data() const
{
    return crc_errors.is_set
	|| error_packets_received.is_set
	|| framer_aborts_received.is_set
	|| framer_giant_packets_received.is_set
	|| framer_runt_packets_received.is_set
	|| input_insufficient_resource_events.is_set
	|| mac_aborts_received.is_set
	|| mac_giant_packets_received.is_set
	|| mac_runt_packets_received.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(error_packets_received.yfilter)
	|| ydk::is_set(framer_aborts_received.yfilter)
	|| ydk::is_set(framer_giant_packets_received.yfilter)
	|| ydk::is_set(framer_runt_packets_received.yfilter)
	|| ydk::is_set(input_insufficient_resource_events.yfilter)
	|| ydk::is_set(mac_aborts_received.yfilter)
	|| ydk::is_set(mac_giant_packets_received.yfilter)
	|| ydk::is_set(mac_runt_packets_received.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "side-b-errors";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SideBErrors' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (error_packets_received.is_set || is_set(error_packets_received.yfilter)) leaf_name_data.push_back(error_packets_received.get_name_leafdata());
    if (framer_aborts_received.is_set || is_set(framer_aborts_received.yfilter)) leaf_name_data.push_back(framer_aborts_received.get_name_leafdata());
    if (framer_giant_packets_received.is_set || is_set(framer_giant_packets_received.yfilter)) leaf_name_data.push_back(framer_giant_packets_received.get_name_leafdata());
    if (framer_runt_packets_received.is_set || is_set(framer_runt_packets_received.yfilter)) leaf_name_data.push_back(framer_runt_packets_received.get_name_leafdata());
    if (input_insufficient_resource_events.is_set || is_set(input_insufficient_resource_events.yfilter)) leaf_name_data.push_back(input_insufficient_resource_events.get_name_leafdata());
    if (mac_aborts_received.is_set || is_set(mac_aborts_received.yfilter)) leaf_name_data.push_back(mac_aborts_received.get_name_leafdata());
    if (mac_giant_packets_received.is_set || is_set(mac_giant_packets_received.yfilter)) leaf_name_data.push_back(mac_giant_packets_received.get_name_leafdata());
    if (mac_runt_packets_received.is_set || is_set(mac_runt_packets_received.yfilter)) leaf_name_data.push_back(mac_runt_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-packets-received")
    {
        error_packets_received = value;
        error_packets_received.value_namespace = name_space;
        error_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framer-aborts-received")
    {
        framer_aborts_received = value;
        framer_aborts_received.value_namespace = name_space;
        framer_aborts_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framer-giant-packets-received")
    {
        framer_giant_packets_received = value;
        framer_giant_packets_received.value_namespace = name_space;
        framer_giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framer-runt-packets-received")
    {
        framer_runt_packets_received = value;
        framer_runt_packets_received.value_namespace = name_space;
        framer_runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-insufficient-resource-events")
    {
        input_insufficient_resource_events = value;
        input_insufficient_resource_events.value_namespace = name_space;
        input_insufficient_resource_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-aborts-received")
    {
        mac_aborts_received = value;
        mac_aborts_received.value_namespace = name_space;
        mac_aborts_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-giant-packets-received")
    {
        mac_giant_packets_received = value;
        mac_giant_packets_received.value_namespace = name_space;
        mac_giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-runt-packets-received")
    {
        mac_runt_packets_received = value;
        mac_runt_packets_received.value_namespace = name_space;
        mac_runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "error-packets-received")
    {
        error_packets_received.yfilter = yfilter;
    }
    if(value_path == "framer-aborts-received")
    {
        framer_aborts_received.yfilter = yfilter;
    }
    if(value_path == "framer-giant-packets-received")
    {
        framer_giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "framer-runt-packets-received")
    {
        framer_runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-insufficient-resource-events")
    {
        input_insufficient_resource_events.yfilter = yfilter;
    }
    if(value_path == "mac-aborts-received")
    {
        mac_aborts_received.yfilter = yfilter;
    }
    if(value_path == "mac-giant-packets-received")
    {
        mac_giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "mac-runt-packets-received")
    {
        mac_runt_packets_received.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crc-errors" || name == "error-packets-received" || name == "framer-aborts-received" || name == "framer-giant-packets-received" || name == "framer-runt-packets-received" || name == "input-insufficient-resource-events" || name == "mac-aborts-received" || name == "mac-giant-packets-received" || name == "mac-runt-packets-received")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::TunnelInformation()
    :
    destination_ipv4_address{YType::str, "destination-ipv4-address"},
    key{YType::uint32, "key"},
    source_ipv4_address{YType::str, "source-ipv4-address"},
    source_name{YType::str, "source-name"},
    ttl{YType::uint32, "ttl"},
    tunnel_type{YType::str, "tunnel-type"}
{
    yang_name = "tunnel-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::~TunnelInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::has_data() const
{
    return destination_ipv4_address.is_set
	|| key.is_set
	|| source_ipv4_address.is_set
	|| source_name.is_set
	|| ttl.is_set
	|| tunnel_type.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_ipv4_address.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(source_ipv4_address.yfilter)
	|| ydk::is_set(source_name.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(tunnel_type.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_ipv4_address.is_set || is_set(destination_ipv4_address.yfilter)) leaf_name_data.push_back(destination_ipv4_address.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (source_ipv4_address.is_set || is_set(source_ipv4_address.yfilter)) leaf_name_data.push_back(source_ipv4_address.get_name_leafdata());
    if (source_name.is_set || is_set(source_name.yfilter)) leaf_name_data.push_back(source_name.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address = value;
        destination_ipv4_address.value_namespace = name_space;
        destination_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address = value;
        source_ipv4_address.value_namespace = name_space;
        source_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-name")
    {
        source_name = value;
        source_name.value_namespace = name_space;
        source_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "source-name")
    {
        source_name.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-ipv4-address" || name == "key" || name == "source-ipv4-address" || name == "source-name" || name == "ttl" || name == "tunnel-type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::BundleInformation()
{
    yang_name = "bundle-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::~BundleInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Member()
    :
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters>())
	,link_data(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData>())
	,mac_address(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress>())
	,member_mux_data(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData>())
{
    counters->parent = this;

    link_data->parent = this;

    mac_address->parent = this;

    member_mux_data->parent = this;

    yang_name = "member"; yang_parent_name = "bundle-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::~Member()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::has_data() const
{
    return bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_order_number.yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(member_type.yfilter)
	|| ydk::is_set(port_number.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(underlying_link_id.yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(member_mux_data != nullptr)
    {
        children["member-mux-data"] = member_mux_data;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
        iccp_node.value_namespace = name_space;
        iccp_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
        link_order_number.value_namespace = name_space;
        link_order_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-type")
    {
        member_type = value;
        member_type.value_namespace = name_space;
        member_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
        underlying_link_id.value_namespace = name_space;
        underlying_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "iccp-node")
    {
        iccp_node.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-order-number")
    {
        link_order_number.yfilter = yfilter;
    }
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "member-type")
    {
        member_type.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "member";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::~Counters()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defaulted.yfilter)
	|| ydk::is_set(excess_lacpd_us_received.yfilter)
	|| ydk::is_set(excess_marker_packets_received.yfilter)
	|| ydk::is_set(expired.yfilter)
	|| ydk::is_set(illegal_packets_received.yfilter)
	|| ydk::is_set(lacpd_us_received.yfilter)
	|| ydk::is_set(lacpd_us_transmitted.yfilter)
	|| ydk::is_set(last_cleared_nsec.yfilter)
	|| ydk::is_set(last_cleared_sec.yfilter)
	|| ydk::is_set(marker_packets_received.yfilter)
	|| ydk::is_set(marker_responses_transmitted.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.yfilter)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.yfilter)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.yfilter)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.yfilter)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.yfilter)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.yfilter)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.yfilter)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.yfilter)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.yfilter)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.yfilter)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.yfilter)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
        defaulted.value_namespace = name_space;
        defaulted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
        excess_lacpd_us_received.value_namespace = name_space;
        excess_lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
        excess_marker_packets_received.value_namespace = name_space;
        excess_marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired")
    {
        expired = value;
        expired.value_namespace = name_space;
        expired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
        illegal_packets_received.value_namespace = name_space;
        illegal_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
        lacpd_us_received.value_namespace = name_space;
        lacpd_us_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
        lacpd_us_transmitted.value_namespace = name_space;
        lacpd_us_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
        last_cleared_nsec.value_namespace = name_space;
        last_cleared_nsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
        last_cleared_sec.value_namespace = name_space;
        last_cleared_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
        marker_packets_received.value_namespace = name_space;
        marker_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
        marker_responses_transmitted.value_namespace = name_space;
        marker_responses_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defaulted")
    {
        defaulted.yfilter = yfilter;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "expired")
    {
        expired.yfilter = yfilter;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received.yfilter = yfilter;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec.yfilter = yfilter;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec.yfilter = yfilter;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received.yfilter = yfilter;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "member";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::~LinkData()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_operational_key.yfilter)
	|| ydk::is_set(actor_port_id.yfilter)
	|| ydk::is_set(actor_port_priority.yfilter)
	|| ydk::is_set(actor_port_state.yfilter)
	|| ydk::is_set(actor_system_mac_address.yfilter)
	|| ydk::is_set(actor_system_priority.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(partner_operational_key.yfilter)
	|| ydk::is_set(partner_port_id.yfilter)
	|| ydk::is_set(partner_port_priority.yfilter)
	|| ydk::is_set(partner_port_state.yfilter)
	|| ydk::is_set(partner_system_mac_address.yfilter)
	|| ydk::is_set(partner_system_priority.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.yfilter)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.yfilter)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.yfilter)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.yfilter)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.yfilter)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.yfilter)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.yfilter)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.yfilter)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.yfilter)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.yfilter)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.yfilter)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.yfilter)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
        actor_operational_key.value_namespace = name_space;
        actor_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
        actor_port_id.value_namespace = name_space;
        actor_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
        actor_port_priority.value_namespace = name_space;
        actor_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
        actor_port_state.value_namespace = name_space;
        actor_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
        actor_system_mac_address.value_namespace = name_space;
        actor_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
        actor_system_priority.value_namespace = name_space;
        actor_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
        partner_operational_key.value_namespace = name_space;
        partner_operational_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
        partner_port_id.value_namespace = name_space;
        partner_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
        partner_port_priority.value_namespace = name_space;
        partner_port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
        partner_port_state.value_namespace = name_space;
        partner_port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
        partner_system_mac_address.value_namespace = name_space;
        partner_system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
        partner_system_priority.value_namespace = name_space;
        partner_system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key.yfilter = yfilter;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id.yfilter = yfilter;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority.yfilter = yfilter;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state.yfilter = yfilter;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key.yfilter = yfilter;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id.yfilter = yfilter;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority.yfilter = yfilter;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state.yfilter = yfilter;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address.yfilter = yfilter;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::~MemberMuxData()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
        member_mux_state_reason.value_namespace = name_space;
        member_mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
        mux_state_reason.value_namespace = name_space;
        mux_state_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
        reason_type.value_namespace = name_space;
        reason_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-type")
    {
        reason_type.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "member";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::~MacAddress()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::has_data() const
{
    return address.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::SerialInformation()
    :
    timeslots{YType::str, "timeslots"}
{
    yang_name = "serial-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::~SerialInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::has_data() const
{
    return timeslots.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SerialInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeslots")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::SonetPosInformation()
    :
    aps_state{YType::enumeration, "aps-state"}
{
    yang_name = "sonet-pos-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::~SonetPosInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::has_data() const
{
    return aps_state.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aps_state.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-pos-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetPosInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_state.is_set || is_set(aps_state.yfilter)) leaf_name_data.push_back(aps_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aps-state")
    {
        aps_state = value;
        aps_state.value_namespace = name_space;
        aps_state.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aps-state")
    {
        aps_state.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-state")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::TunnelGreInformation()
    :
    destination_ip_address_length{YType::uint8, "destination-ip-address-length"},
    df_bit_state{YType::enumeration, "df-bit-state"},
    keepalive_maximum_retry{YType::uint8, "keepalive-maximum-retry"},
    keepalive_period{YType::uint16, "keepalive-period"},
    keepalive_state{YType::enumeration, "keepalive-state"},
    key{YType::uint32, "key"},
    key_bit_state{YType::enumeration, "key-bit-state"},
    source_name{YType::str, "source-name"},
    tunnel_mode{YType::enumeration, "tunnel-mode"},
    tunnel_mode_decap{YType::int32, "tunnel-mode-decap"},
    tunnel_tos{YType::uint32, "tunnel-tos"},
    tunnel_ttl{YType::uint32, "tunnel-ttl"}
    	,
    destination_ip_address(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress>())
	,source_ip_address(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress>())
{
    destination_ip_address->parent = this;

    source_ip_address->parent = this;

    yang_name = "tunnel-gre-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::~TunnelGreInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::has_data() const
{
    return destination_ip_address_length.is_set
	|| df_bit_state.is_set
	|| keepalive_maximum_retry.is_set
	|| keepalive_period.is_set
	|| keepalive_state.is_set
	|| key.is_set
	|| key_bit_state.is_set
	|| source_name.is_set
	|| tunnel_mode.is_set
	|| tunnel_mode_decap.is_set
	|| tunnel_tos.is_set
	|| tunnel_ttl.is_set
	|| (destination_ip_address !=  nullptr && destination_ip_address->has_data())
	|| (source_ip_address !=  nullptr && source_ip_address->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_ip_address_length.yfilter)
	|| ydk::is_set(df_bit_state.yfilter)
	|| ydk::is_set(keepalive_maximum_retry.yfilter)
	|| ydk::is_set(keepalive_period.yfilter)
	|| ydk::is_set(keepalive_state.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(key_bit_state.yfilter)
	|| ydk::is_set(source_name.yfilter)
	|| ydk::is_set(tunnel_mode.yfilter)
	|| ydk::is_set(tunnel_mode_decap.yfilter)
	|| ydk::is_set(tunnel_tos.yfilter)
	|| ydk::is_set(tunnel_ttl.yfilter)
	|| (destination_ip_address !=  nullptr && destination_ip_address->has_operation())
	|| (source_ip_address !=  nullptr && source_ip_address->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-gre-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelGreInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_ip_address_length.is_set || is_set(destination_ip_address_length.yfilter)) leaf_name_data.push_back(destination_ip_address_length.get_name_leafdata());
    if (df_bit_state.is_set || is_set(df_bit_state.yfilter)) leaf_name_data.push_back(df_bit_state.get_name_leafdata());
    if (keepalive_maximum_retry.is_set || is_set(keepalive_maximum_retry.yfilter)) leaf_name_data.push_back(keepalive_maximum_retry.get_name_leafdata());
    if (keepalive_period.is_set || is_set(keepalive_period.yfilter)) leaf_name_data.push_back(keepalive_period.get_name_leafdata());
    if (keepalive_state.is_set || is_set(keepalive_state.yfilter)) leaf_name_data.push_back(keepalive_state.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (key_bit_state.is_set || is_set(key_bit_state.yfilter)) leaf_name_data.push_back(key_bit_state.get_name_leafdata());
    if (source_name.is_set || is_set(source_name.yfilter)) leaf_name_data.push_back(source_name.get_name_leafdata());
    if (tunnel_mode.is_set || is_set(tunnel_mode.yfilter)) leaf_name_data.push_back(tunnel_mode.get_name_leafdata());
    if (tunnel_mode_decap.is_set || is_set(tunnel_mode_decap.yfilter)) leaf_name_data.push_back(tunnel_mode_decap.get_name_leafdata());
    if (tunnel_tos.is_set || is_set(tunnel_tos.yfilter)) leaf_name_data.push_back(tunnel_tos.get_name_leafdata());
    if (tunnel_ttl.is_set || is_set(tunnel_ttl.yfilter)) leaf_name_data.push_back(tunnel_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-ip-address")
    {
        if(destination_ip_address == nullptr)
        {
            destination_ip_address = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress>();
        }
        return destination_ip_address;
    }

    if(child_yang_name == "source-ip-address")
    {
        if(source_ip_address == nullptr)
        {
            source_ip_address = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress>();
        }
        return source_ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_ip_address != nullptr)
    {
        children["destination-ip-address"] = destination_ip_address;
    }

    if(source_ip_address != nullptr)
    {
        children["source-ip-address"] = source_ip_address;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-ip-address-length")
    {
        destination_ip_address_length = value;
        destination_ip_address_length.value_namespace = name_space;
        destination_ip_address_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-bit-state")
    {
        df_bit_state = value;
        df_bit_state.value_namespace = name_space;
        df_bit_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-maximum-retry")
    {
        keepalive_maximum_retry = value;
        keepalive_maximum_retry.value_namespace = name_space;
        keepalive_maximum_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period = value;
        keepalive_period.value_namespace = name_space;
        keepalive_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-state")
    {
        keepalive_state = value;
        keepalive_state.value_namespace = name_space;
        keepalive_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-bit-state")
    {
        key_bit_state = value;
        key_bit_state.value_namespace = name_space;
        key_bit_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-name")
    {
        source_name = value;
        source_name.value_namespace = name_space;
        source_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-mode")
    {
        tunnel_mode = value;
        tunnel_mode.value_namespace = name_space;
        tunnel_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-mode-decap")
    {
        tunnel_mode_decap = value;
        tunnel_mode_decap.value_namespace = name_space;
        tunnel_mode_decap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-tos")
    {
        tunnel_tos = value;
        tunnel_tos.value_namespace = name_space;
        tunnel_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-ttl")
    {
        tunnel_ttl = value;
        tunnel_ttl.value_namespace = name_space;
        tunnel_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-ip-address-length")
    {
        destination_ip_address_length.yfilter = yfilter;
    }
    if(value_path == "df-bit-state")
    {
        df_bit_state.yfilter = yfilter;
    }
    if(value_path == "keepalive-maximum-retry")
    {
        keepalive_maximum_retry.yfilter = yfilter;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period.yfilter = yfilter;
    }
    if(value_path == "keepalive-state")
    {
        keepalive_state.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "key-bit-state")
    {
        key_bit_state.yfilter = yfilter;
    }
    if(value_path == "source-name")
    {
        source_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-mode")
    {
        tunnel_mode.yfilter = yfilter;
    }
    if(value_path == "tunnel-mode-decap")
    {
        tunnel_mode_decap.yfilter = yfilter;
    }
    if(value_path == "tunnel-tos")
    {
        tunnel_tos.yfilter = yfilter;
    }
    if(value_path == "tunnel-ttl")
    {
        tunnel_ttl.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-ip-address" || name == "source-ip-address" || name == "destination-ip-address-length" || name == "df-bit-state" || name == "keepalive-maximum-retry" || name == "keepalive-period" || name == "keepalive-state" || name == "key" || name == "key-bit-state" || name == "source-name" || name == "tunnel-mode" || name == "tunnel-mode-decap" || name == "tunnel-tos" || name == "tunnel-ttl")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::SourceIpAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-ip-address"; yang_parent_name = "tunnel-gre-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::~SourceIpAddress()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::has_data() const
{
    return afi.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-ip-address";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceIpAddress' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::DestinationIpAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-ip-address"; yang_parent_name = "tunnel-gre-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::~DestinationIpAddress()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::has_data() const
{
    return afi.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-ip-address";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationIpAddress' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::PseudowireHeadEndInformation()
    :
    interface_list_name{YType::str, "interface-list-name"},
    internal_label{YType::uint32, "internal-label"},
    l2_overhead{YType::uint32, "l2-overhead"}
{
    yang_name = "pseudowire-head-end-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::~PseudowireHeadEndInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::has_data() const
{
    return interface_list_name.is_set
	|| internal_label.is_set
	|| l2_overhead.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(l2_overhead.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-head-end-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireHeadEndInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list-name" || name == "internal-label" || name == "l2-overhead")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::CemInformation()
    :
    dejitter_buffer{YType::uint16, "dejitter-buffer"},
    framing{YType::int32, "framing"},
    payload{YType::uint16, "payload"},
    timeslots{YType::str, "timeslots"}
{
    yang_name = "cem-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::~CemInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::has_data() const
{
    return dejitter_buffer.is_set
	|| framing.is_set
	|| payload.is_set
	|| timeslots.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dejitter_buffer.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CemInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dejitter_buffer.is_set || is_set(dejitter_buffer.yfilter)) leaf_name_data.push_back(dejitter_buffer.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dejitter-buffer")
    {
        dejitter_buffer = value;
        dejitter_buffer.value_namespace = name_space;
        dejitter_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dejitter-buffer")
    {
        dejitter_buffer.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dejitter-buffer" || name == "framing" || name == "payload" || name == "timeslots")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::GccInformation()
    :
    derived_mode{YType::enumeration, "derived-mode"},
    sec_state{YType::enumeration, "sec-state"}
{
    yang_name = "gcc-information"; yang_parent_name = "interface-type-information";
}

Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::~GccInformation()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::has_data() const
{
    return derived_mode.is_set
	|| sec_state.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(derived_mode.yfilter)
	|| ydk::is_set(sec_state.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcc-information";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GccInformation' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (derived_mode.is_set || is_set(derived_mode.yfilter)) leaf_name_data.push_back(derived_mode.get_name_leafdata());
    if (sec_state.is_set || is_set(sec_state.yfilter)) leaf_name_data.push_back(sec_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "derived-mode")
    {
        derived_mode = value;
        derived_mode.value_namespace = name_space;
        derived_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec-state")
    {
        sec_state = value;
        sec_state.value_namespace = name_space;
        sec_state.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "derived-mode")
    {
        derived_mode.yfilter = yfilter;
    }
    if(value_path == "sec-state")
    {
        sec_state.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "derived-mode" || name == "sec-state")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::DataRates::DataRates()
    :
    bandwidth{YType::uint32, "bandwidth"},
    input_data_rate{YType::uint64, "input-data-rate"},
    input_load{YType::uint8, "input-load"},
    input_packet_rate{YType::uint64, "input-packet-rate"},
    load_interval{YType::uint32, "load-interval"},
    output_data_rate{YType::uint64, "output-data-rate"},
    output_load{YType::uint8, "output-load"},
    output_packet_rate{YType::uint64, "output-packet-rate"},
    peak_input_data_rate{YType::uint64, "peak-input-data-rate"},
    peak_input_packet_rate{YType::uint64, "peak-input-packet-rate"},
    peak_output_data_rate{YType::uint64, "peak-output-data-rate"},
    peak_output_packet_rate{YType::uint64, "peak-output-packet-rate"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "data-rates"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::DataRates::~DataRates()
{
}

bool Interfaces::InterfaceXr::Interface::DataRates::has_data() const
{
    return bandwidth.is_set
	|| input_data_rate.is_set
	|| input_load.is_set
	|| input_packet_rate.is_set
	|| load_interval.is_set
	|| output_data_rate.is_set
	|| output_load.is_set
	|| output_packet_rate.is_set
	|| peak_input_data_rate.is_set
	|| peak_input_packet_rate.is_set
	|| peak_output_data_rate.is_set
	|| peak_output_packet_rate.is_set
	|| reliability.is_set;
}

bool Interfaces::InterfaceXr::Interface::DataRates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(input_data_rate.yfilter)
	|| ydk::is_set(input_load.yfilter)
	|| ydk::is_set(input_packet_rate.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(output_data_rate.yfilter)
	|| ydk::is_set(output_load.yfilter)
	|| ydk::is_set(output_packet_rate.yfilter)
	|| ydk::is_set(peak_input_data_rate.yfilter)
	|| ydk::is_set(peak_input_packet_rate.yfilter)
	|| ydk::is_set(peak_output_data_rate.yfilter)
	|| ydk::is_set(peak_output_packet_rate.yfilter)
	|| ydk::is_set(reliability.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::DataRates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rates";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::DataRates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DataRates' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (input_data_rate.is_set || is_set(input_data_rate.yfilter)) leaf_name_data.push_back(input_data_rate.get_name_leafdata());
    if (input_load.is_set || is_set(input_load.yfilter)) leaf_name_data.push_back(input_load.get_name_leafdata());
    if (input_packet_rate.is_set || is_set(input_packet_rate.yfilter)) leaf_name_data.push_back(input_packet_rate.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (output_data_rate.is_set || is_set(output_data_rate.yfilter)) leaf_name_data.push_back(output_data_rate.get_name_leafdata());
    if (output_load.is_set || is_set(output_load.yfilter)) leaf_name_data.push_back(output_load.get_name_leafdata());
    if (output_packet_rate.is_set || is_set(output_packet_rate.yfilter)) leaf_name_data.push_back(output_packet_rate.get_name_leafdata());
    if (peak_input_data_rate.is_set || is_set(peak_input_data_rate.yfilter)) leaf_name_data.push_back(peak_input_data_rate.get_name_leafdata());
    if (peak_input_packet_rate.is_set || is_set(peak_input_packet_rate.yfilter)) leaf_name_data.push_back(peak_input_packet_rate.get_name_leafdata());
    if (peak_output_data_rate.is_set || is_set(peak_output_data_rate.yfilter)) leaf_name_data.push_back(peak_output_data_rate.get_name_leafdata());
    if (peak_output_packet_rate.is_set || is_set(peak_output_packet_rate.yfilter)) leaf_name_data.push_back(peak_output_packet_rate.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::DataRates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::DataRates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::DataRates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate = value;
        input_data_rate.value_namespace = name_space;
        input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-load")
    {
        input_load = value;
        input_load.value_namespace = name_space;
        input_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate = value;
        input_packet_rate.value_namespace = name_space;
        input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate = value;
        output_data_rate.value_namespace = name_space;
        output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-load")
    {
        output_load = value;
        output_load.value_namespace = name_space;
        output_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate = value;
        output_packet_rate.value_namespace = name_space;
        output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate = value;
        peak_input_data_rate.value_namespace = name_space;
        peak_input_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate = value;
        peak_input_packet_rate.value_namespace = name_space;
        peak_input_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate = value;
        peak_output_data_rate.value_namespace = name_space;
        peak_output_data_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate = value;
        peak_output_packet_rate.value_namespace = name_space;
        peak_output_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::DataRates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "input-data-rate")
    {
        input_data_rate.yfilter = yfilter;
    }
    if(value_path == "input-load")
    {
        input_load.yfilter = yfilter;
    }
    if(value_path == "input-packet-rate")
    {
        input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "output-data-rate")
    {
        output_data_rate.yfilter = yfilter;
    }
    if(value_path == "output-load")
    {
        output_load.yfilter = yfilter;
    }
    if(value_path == "output-packet-rate")
    {
        output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-data-rate")
    {
        peak_input_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-input-packet-rate")
    {
        peak_input_packet_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-data-rate")
    {
        peak_output_data_rate.yfilter = yfilter;
    }
    if(value_path == "peak-output-packet-rate")
    {
        peak_output_packet_rate.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::DataRates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "input-data-rate" || name == "input-load" || name == "input-packet-rate" || name == "load-interval" || name == "output-data-rate" || name == "output-load" || name == "output-packet-rate" || name == "peak-input-data-rate" || name == "peak-input-packet-rate" || name == "peak-output-data-rate" || name == "peak-output-packet-rate" || name == "reliability")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceStatistics::InterfaceStatistics()
    :
    stats_type{YType::enumeration, "stats-type"}
    	,
    basic_interface_stats(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats>())
	,full_interface_stats(std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats>())
{
    basic_interface_stats->parent = this;

    full_interface_stats->parent = this;

    yang_name = "interface-statistics"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::has_data() const
{
    return stats_type.is_set
	|| (basic_interface_stats !=  nullptr && basic_interface_stats->has_data())
	|| (full_interface_stats !=  nullptr && full_interface_stats->has_data());
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stats_type.yfilter)
	|| (basic_interface_stats !=  nullptr && basic_interface_stats->has_operation())
	|| (full_interface_stats !=  nullptr && full_interface_stats->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistics' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stats_type.is_set || is_set(stats_type.yfilter)) leaf_name_data.push_back(stats_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-interface-stats")
    {
        if(basic_interface_stats == nullptr)
        {
            basic_interface_stats = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats>();
        }
        return basic_interface_stats;
    }

    if(child_yang_name == "full-interface-stats")
    {
        if(full_interface_stats == nullptr)
        {
            full_interface_stats = std::make_shared<Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats>();
        }
        return full_interface_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_interface_stats != nullptr)
    {
        children["basic-interface-stats"] = basic_interface_stats;
    }

    if(full_interface_stats != nullptr)
    {
        children["full-interface-stats"] = full_interface_stats;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stats-type")
    {
        stats_type = value;
        stats_type.value_namespace = name_space;
        stats_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stats-type")
    {
        stats_type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-interface-stats" || name == "full-interface-stats" || name == "stats-type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::FullInterfaceStats()
    :
    applique{YType::uint32, "applique"},
    availability_flag{YType::uint32, "availability-flag"},
    broadcast_packets_received{YType::uint64, "broadcast-packets-received"},
    broadcast_packets_sent{YType::uint64, "broadcast-packets-sent"},
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    carrier_transitions{YType::uint32, "carrier-transitions"},
    crc_errors{YType::uint32, "crc-errors"},
    framing_errors_received{YType::uint32, "framing-errors-received"},
    giant_packets_received{YType::uint32, "giant-packets-received"},
    input_aborts{YType::uint32, "input-aborts"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_ignored_packets{YType::uint32, "input-ignored-packets"},
    input_overruns{YType::uint32, "input-overruns"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    multicast_packets_received{YType::uint64, "multicast-packets-received"},
    multicast_packets_sent{YType::uint64, "multicast-packets-sent"},
    output_buffer_failures{YType::uint32, "output-buffer-failures"},
    output_buffers_swapped_out{YType::uint32, "output-buffers-swapped-out"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    output_underruns{YType::uint32, "output-underruns"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    parity_packets_received{YType::uint32, "parity-packets-received"},
    resets{YType::uint32, "resets"},
    runt_packets_received{YType::uint32, "runt-packets-received"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    throttled_packets_received{YType::uint32, "throttled-packets-received"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "full-interface-stats"; yang_parent_name = "interface-statistics";
}

Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::~FullInterfaceStats()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::has_data() const
{
    return applique.is_set
	|| availability_flag.is_set
	|| broadcast_packets_received.is_set
	|| broadcast_packets_sent.is_set
	|| bytes_received.is_set
	|| bytes_sent.is_set
	|| carrier_transitions.is_set
	|| crc_errors.is_set
	|| framing_errors_received.is_set
	|| giant_packets_received.is_set
	|| input_aborts.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_ignored_packets.is_set
	|| input_overruns.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| multicast_packets_received.is_set
	|| multicast_packets_sent.is_set
	|| output_buffer_failures.is_set
	|| output_buffers_swapped_out.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| output_underruns.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| parity_packets_received.is_set
	|| resets.is_set
	|| runt_packets_received.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| throttled_packets_received.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(applique.yfilter)
	|| ydk::is_set(availability_flag.yfilter)
	|| ydk::is_set(broadcast_packets_received.yfilter)
	|| ydk::is_set(broadcast_packets_sent.yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(carrier_transitions.yfilter)
	|| ydk::is_set(crc_errors.yfilter)
	|| ydk::is_set(framing_errors_received.yfilter)
	|| ydk::is_set(giant_packets_received.yfilter)
	|| ydk::is_set(input_aborts.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(input_ignored_packets.yfilter)
	|| ydk::is_set(input_overruns.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(multicast_packets_received.yfilter)
	|| ydk::is_set(multicast_packets_sent.yfilter)
	|| ydk::is_set(output_buffer_failures.yfilter)
	|| ydk::is_set(output_buffers_swapped_out.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(output_underruns.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(parity_packets_received.yfilter)
	|| ydk::is_set(resets.yfilter)
	|| ydk::is_set(runt_packets_received.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter)
	|| ydk::is_set(throttled_packets_received.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "full-interface-stats";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FullInterfaceStats' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applique.is_set || is_set(applique.yfilter)) leaf_name_data.push_back(applique.get_name_leafdata());
    if (availability_flag.is_set || is_set(availability_flag.yfilter)) leaf_name_data.push_back(availability_flag.get_name_leafdata());
    if (broadcast_packets_received.is_set || is_set(broadcast_packets_received.yfilter)) leaf_name_data.push_back(broadcast_packets_received.get_name_leafdata());
    if (broadcast_packets_sent.is_set || is_set(broadcast_packets_sent.yfilter)) leaf_name_data.push_back(broadcast_packets_sent.get_name_leafdata());
    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (carrier_transitions.is_set || is_set(carrier_transitions.yfilter)) leaf_name_data.push_back(carrier_transitions.get_name_leafdata());
    if (crc_errors.is_set || is_set(crc_errors.yfilter)) leaf_name_data.push_back(crc_errors.get_name_leafdata());
    if (framing_errors_received.is_set || is_set(framing_errors_received.yfilter)) leaf_name_data.push_back(framing_errors_received.get_name_leafdata());
    if (giant_packets_received.is_set || is_set(giant_packets_received.yfilter)) leaf_name_data.push_back(giant_packets_received.get_name_leafdata());
    if (input_aborts.is_set || is_set(input_aborts.yfilter)) leaf_name_data.push_back(input_aborts.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_ignored_packets.is_set || is_set(input_ignored_packets.yfilter)) leaf_name_data.push_back(input_ignored_packets.get_name_leafdata());
    if (input_overruns.is_set || is_set(input_overruns.yfilter)) leaf_name_data.push_back(input_overruns.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (multicast_packets_received.is_set || is_set(multicast_packets_received.yfilter)) leaf_name_data.push_back(multicast_packets_received.get_name_leafdata());
    if (multicast_packets_sent.is_set || is_set(multicast_packets_sent.yfilter)) leaf_name_data.push_back(multicast_packets_sent.get_name_leafdata());
    if (output_buffer_failures.is_set || is_set(output_buffer_failures.yfilter)) leaf_name_data.push_back(output_buffer_failures.get_name_leafdata());
    if (output_buffers_swapped_out.is_set || is_set(output_buffers_swapped_out.yfilter)) leaf_name_data.push_back(output_buffers_swapped_out.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (output_underruns.is_set || is_set(output_underruns.yfilter)) leaf_name_data.push_back(output_underruns.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (parity_packets_received.is_set || is_set(parity_packets_received.yfilter)) leaf_name_data.push_back(parity_packets_received.get_name_leafdata());
    if (resets.is_set || is_set(resets.yfilter)) leaf_name_data.push_back(resets.get_name_leafdata());
    if (runt_packets_received.is_set || is_set(runt_packets_received.yfilter)) leaf_name_data.push_back(runt_packets_received.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (throttled_packets_received.is_set || is_set(throttled_packets_received.yfilter)) leaf_name_data.push_back(throttled_packets_received.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "applique")
    {
        applique = value;
        applique.value_namespace = name_space;
        applique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "availability-flag")
    {
        availability_flag = value;
        availability_flag.value_namespace = name_space;
        availability_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received = value;
        broadcast_packets_received.value_namespace = name_space;
        broadcast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent = value;
        broadcast_packets_sent.value_namespace = name_space;
        broadcast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions = value;
        carrier_transitions.value_namespace = name_space;
        carrier_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crc-errors")
    {
        crc_errors = value;
        crc_errors.value_namespace = name_space;
        crc_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received = value;
        framing_errors_received.value_namespace = name_space;
        framing_errors_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received = value;
        giant_packets_received.value_namespace = name_space;
        giant_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-aborts")
    {
        input_aborts = value;
        input_aborts.value_namespace = name_space;
        input_aborts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets = value;
        input_ignored_packets.value_namespace = name_space;
        input_ignored_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-overruns")
    {
        input_overruns = value;
        input_overruns.value_namespace = name_space;
        input_overruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received = value;
        multicast_packets_received.value_namespace = name_space;
        multicast_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent = value;
        multicast_packets_sent.value_namespace = name_space;
        multicast_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures = value;
        output_buffer_failures.value_namespace = name_space;
        output_buffer_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out = value;
        output_buffers_swapped_out.value_namespace = name_space;
        output_buffers_swapped_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-underruns")
    {
        output_underruns = value;
        output_underruns.value_namespace = name_space;
        output_underruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received = value;
        parity_packets_received.value_namespace = name_space;
        parity_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resets")
    {
        resets = value;
        resets.value_namespace = name_space;
        resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received = value;
        runt_packets_received.value_namespace = name_space;
        runt_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received = value;
        throttled_packets_received.value_namespace = name_space;
        throttled_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "applique")
    {
        applique.yfilter = yfilter;
    }
    if(value_path == "availability-flag")
    {
        availability_flag.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-received")
    {
        broadcast_packets_received.yfilter = yfilter;
    }
    if(value_path == "broadcast-packets-sent")
    {
        broadcast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "carrier-transitions")
    {
        carrier_transitions.yfilter = yfilter;
    }
    if(value_path == "crc-errors")
    {
        crc_errors.yfilter = yfilter;
    }
    if(value_path == "framing-errors-received")
    {
        framing_errors_received.yfilter = yfilter;
    }
    if(value_path == "giant-packets-received")
    {
        giant_packets_received.yfilter = yfilter;
    }
    if(value_path == "input-aborts")
    {
        input_aborts.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "input-ignored-packets")
    {
        input_ignored_packets.yfilter = yfilter;
    }
    if(value_path == "input-overruns")
    {
        input_overruns.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-received")
    {
        multicast_packets_received.yfilter = yfilter;
    }
    if(value_path == "multicast-packets-sent")
    {
        multicast_packets_sent.yfilter = yfilter;
    }
    if(value_path == "output-buffer-failures")
    {
        output_buffer_failures.yfilter = yfilter;
    }
    if(value_path == "output-buffers-swapped-out")
    {
        output_buffers_swapped_out.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "output-underruns")
    {
        output_underruns.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "parity-packets-received")
    {
        parity_packets_received.yfilter = yfilter;
    }
    if(value_path == "resets")
    {
        resets.yfilter = yfilter;
    }
    if(value_path == "runt-packets-received")
    {
        runt_packets_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
    if(value_path == "throttled-packets-received")
    {
        throttled_packets_received.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "applique" || name == "availability-flag" || name == "broadcast-packets-received" || name == "broadcast-packets-sent" || name == "bytes-received" || name == "bytes-sent" || name == "carrier-transitions" || name == "crc-errors" || name == "framing-errors-received" || name == "giant-packets-received" || name == "input-aborts" || name == "input-drops" || name == "input-errors" || name == "input-ignored-packets" || name == "input-overruns" || name == "input-queue-drops" || name == "last-data-time" || name == "last-discontinuity-time" || name == "multicast-packets-received" || name == "multicast-packets-sent" || name == "output-buffer-failures" || name == "output-buffers-swapped-out" || name == "output-drops" || name == "output-errors" || name == "output-queue-drops" || name == "output-underruns" || name == "packets-received" || name == "packets-sent" || name == "parity-packets-received" || name == "resets" || name == "runt-packets-received" || name == "seconds-since-last-clear-counters" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent" || name == "throttled-packets-received" || name == "unknown-protocol-packets-received")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::BasicInterfaceStats()
    :
    bytes_received{YType::uint64, "bytes-received"},
    bytes_sent{YType::uint64, "bytes-sent"},
    input_drops{YType::uint32, "input-drops"},
    input_errors{YType::uint32, "input-errors"},
    input_queue_drops{YType::uint32, "input-queue-drops"},
    last_data_time{YType::uint32, "last-data-time"},
    last_discontinuity_time{YType::uint32, "last-discontinuity-time"},
    output_drops{YType::uint32, "output-drops"},
    output_errors{YType::uint32, "output-errors"},
    output_queue_drops{YType::uint32, "output-queue-drops"},
    packets_received{YType::uint64, "packets-received"},
    packets_sent{YType::uint64, "packets-sent"},
    seconds_since_last_clear_counters{YType::uint32, "seconds-since-last-clear-counters"},
    seconds_since_packet_received{YType::uint32, "seconds-since-packet-received"},
    seconds_since_packet_sent{YType::uint32, "seconds-since-packet-sent"},
    unknown_protocol_packets_received{YType::uint32, "unknown-protocol-packets-received"}
{
    yang_name = "basic-interface-stats"; yang_parent_name = "interface-statistics";
}

Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::~BasicInterfaceStats()
{
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::has_data() const
{
    return bytes_received.is_set
	|| bytes_sent.is_set
	|| input_drops.is_set
	|| input_errors.is_set
	|| input_queue_drops.is_set
	|| last_data_time.is_set
	|| last_discontinuity_time.is_set
	|| output_drops.is_set
	|| output_errors.is_set
	|| output_queue_drops.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| seconds_since_last_clear_counters.is_set
	|| seconds_since_packet_received.is_set
	|| seconds_since_packet_sent.is_set
	|| unknown_protocol_packets_received.is_set;
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes_received.yfilter)
	|| ydk::is_set(bytes_sent.yfilter)
	|| ydk::is_set(input_drops.yfilter)
	|| ydk::is_set(input_errors.yfilter)
	|| ydk::is_set(input_queue_drops.yfilter)
	|| ydk::is_set(last_data_time.yfilter)
	|| ydk::is_set(last_discontinuity_time.yfilter)
	|| ydk::is_set(output_drops.yfilter)
	|| ydk::is_set(output_errors.yfilter)
	|| ydk::is_set(output_queue_drops.yfilter)
	|| ydk::is_set(packets_received.yfilter)
	|| ydk::is_set(packets_sent.yfilter)
	|| ydk::is_set(seconds_since_last_clear_counters.yfilter)
	|| ydk::is_set(seconds_since_packet_received.yfilter)
	|| ydk::is_set(seconds_since_packet_sent.yfilter)
	|| ydk::is_set(unknown_protocol_packets_received.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-interface-stats";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInterfaceStats' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_received.is_set || is_set(bytes_received.yfilter)) leaf_name_data.push_back(bytes_received.get_name_leafdata());
    if (bytes_sent.is_set || is_set(bytes_sent.yfilter)) leaf_name_data.push_back(bytes_sent.get_name_leafdata());
    if (input_drops.is_set || is_set(input_drops.yfilter)) leaf_name_data.push_back(input_drops.get_name_leafdata());
    if (input_errors.is_set || is_set(input_errors.yfilter)) leaf_name_data.push_back(input_errors.get_name_leafdata());
    if (input_queue_drops.is_set || is_set(input_queue_drops.yfilter)) leaf_name_data.push_back(input_queue_drops.get_name_leafdata());
    if (last_data_time.is_set || is_set(last_data_time.yfilter)) leaf_name_data.push_back(last_data_time.get_name_leafdata());
    if (last_discontinuity_time.is_set || is_set(last_discontinuity_time.yfilter)) leaf_name_data.push_back(last_discontinuity_time.get_name_leafdata());
    if (output_drops.is_set || is_set(output_drops.yfilter)) leaf_name_data.push_back(output_drops.get_name_leafdata());
    if (output_errors.is_set || is_set(output_errors.yfilter)) leaf_name_data.push_back(output_errors.get_name_leafdata());
    if (output_queue_drops.is_set || is_set(output_queue_drops.yfilter)) leaf_name_data.push_back(output_queue_drops.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.yfilter)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.yfilter)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (seconds_since_last_clear_counters.is_set || is_set(seconds_since_last_clear_counters.yfilter)) leaf_name_data.push_back(seconds_since_last_clear_counters.get_name_leafdata());
    if (seconds_since_packet_received.is_set || is_set(seconds_since_packet_received.yfilter)) leaf_name_data.push_back(seconds_since_packet_received.get_name_leafdata());
    if (seconds_since_packet_sent.is_set || is_set(seconds_since_packet_sent.yfilter)) leaf_name_data.push_back(seconds_since_packet_sent.get_name_leafdata());
    if (unknown_protocol_packets_received.is_set || is_set(unknown_protocol_packets_received.yfilter)) leaf_name_data.push_back(unknown_protocol_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes-received")
    {
        bytes_received = value;
        bytes_received.value_namespace = name_space;
        bytes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent = value;
        bytes_sent.value_namespace = name_space;
        bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drops")
    {
        input_drops = value;
        input_drops.value_namespace = name_space;
        input_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-errors")
    {
        input_errors = value;
        input_errors.value_namespace = name_space;
        input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops = value;
        input_queue_drops.value_namespace = name_space;
        input_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-data-time")
    {
        last_data_time = value;
        last_data_time.value_namespace = name_space;
        last_data_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time = value;
        last_discontinuity_time.value_namespace = name_space;
        last_discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-drops")
    {
        output_drops = value;
        output_drops.value_namespace = name_space;
        output_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-errors")
    {
        output_errors = value;
        output_errors.value_namespace = name_space;
        output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops = value;
        output_queue_drops.value_namespace = name_space;
        output_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
        packets_received.value_namespace = name_space;
        packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
        packets_sent.value_namespace = name_space;
        packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters = value;
        seconds_since_last_clear_counters.value_namespace = name_space;
        seconds_since_last_clear_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received = value;
        seconds_since_packet_received.value_namespace = name_space;
        seconds_since_packet_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent = value;
        seconds_since_packet_sent.value_namespace = name_space;
        seconds_since_packet_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received = value;
        unknown_protocol_packets_received.value_namespace = name_space;
        unknown_protocol_packets_received.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes-received")
    {
        bytes_received.yfilter = yfilter;
    }
    if(value_path == "bytes-sent")
    {
        bytes_sent.yfilter = yfilter;
    }
    if(value_path == "input-drops")
    {
        input_drops.yfilter = yfilter;
    }
    if(value_path == "input-errors")
    {
        input_errors.yfilter = yfilter;
    }
    if(value_path == "input-queue-drops")
    {
        input_queue_drops.yfilter = yfilter;
    }
    if(value_path == "last-data-time")
    {
        last_data_time.yfilter = yfilter;
    }
    if(value_path == "last-discontinuity-time")
    {
        last_discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "output-drops")
    {
        output_drops.yfilter = yfilter;
    }
    if(value_path == "output-errors")
    {
        output_errors.yfilter = yfilter;
    }
    if(value_path == "output-queue-drops")
    {
        output_queue_drops.yfilter = yfilter;
    }
    if(value_path == "packets-received")
    {
        packets_received.yfilter = yfilter;
    }
    if(value_path == "packets-sent")
    {
        packets_sent.yfilter = yfilter;
    }
    if(value_path == "seconds-since-last-clear-counters")
    {
        seconds_since_last_clear_counters.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-received")
    {
        seconds_since_packet_received.yfilter = yfilter;
    }
    if(value_path == "seconds-since-packet-sent")
    {
        seconds_since_packet_sent.yfilter = yfilter;
    }
    if(value_path == "unknown-protocol-packets-received")
    {
        unknown_protocol_packets_received.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes-received" || name == "bytes-sent" || name == "input-drops" || name == "input-errors" || name == "input-queue-drops" || name == "last-data-time" || name == "last-discontinuity-time" || name == "output-drops" || name == "output-errors" || name == "output-queue-drops" || name == "packets-received" || name == "packets-sent" || name == "seconds-since-last-clear-counters" || name == "seconds-since-packet-received" || name == "seconds-since-packet-sent" || name == "unknown-protocol-packets-received")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::L2InterfaceStatistics()
    :
    contents{YType::enumeration, "contents"},
    stats_type{YType::uint32, "stats-type"}
    	,
    stats_id(std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId>())
{
    stats_id->parent = this;

    yang_name = "l2-interface-statistics"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::~L2InterfaceStatistics()
{
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<block_array.size(); index++)
    {
        if(block_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<element_array.size(); index++)
    {
        if(element_array[index]->has_data())
            return true;
    }
    return contents.is_set
	|| stats_type.is_set
	|| (stats_id !=  nullptr && stats_id->has_data());
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<block_array.size(); index++)
    {
        if(block_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<element_array.size(); index++)
    {
        if(element_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(contents.yfilter)
	|| ydk::is_set(stats_type.yfilter)
	|| (stats_id !=  nullptr && stats_id->has_operation());
}

std::string Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-interface-statistics";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2InterfaceStatistics' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contents.is_set || is_set(contents.yfilter)) leaf_name_data.push_back(contents.get_name_leafdata());
    if (stats_type.is_set || is_set(stats_type.yfilter)) leaf_name_data.push_back(stats_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-array")
    {
        for(auto const & c : block_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray>();
        c->parent = this;
        block_array.push_back(c);
        return c;
    }

    if(child_yang_name == "element-array")
    {
        for(auto const & c : element_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray>();
        c->parent = this;
        element_array.push_back(c);
        return c;
    }

    if(child_yang_name == "stats-id")
    {
        if(stats_id == nullptr)
        {
            stats_id = std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId>();
        }
        return stats_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : block_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : element_array)
    {
        children[c->get_segment_path()] = c;
    }

    if(stats_id != nullptr)
    {
        children["stats-id"] = stats_id;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "contents")
    {
        contents = value;
        contents.value_namespace = name_space;
        contents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-type")
    {
        stats_type = value;
        stats_type.value_namespace = name_space;
        stats_type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contents")
    {
        contents.yfilter = yfilter;
    }
    if(value_path == "stats-type")
    {
        stats_type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-array" || name == "element-array" || name == "stats-id" || name == "contents" || name == "stats-type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::StatsId()
    :
    feature_id{YType::uint32, "feature-id"},
    id{YType::uint32, "id"},
    id_type{YType::enumeration, "id-type"},
    interface_handle{YType::str, "interface-handle"},
    node_id{YType::str, "node-id"},
    unused{YType::uint32, "unused"}
{
    yang_name = "stats-id"; yang_parent_name = "l2-interface-statistics";
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::~StatsId()
{
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::has_data() const
{
    return feature_id.is_set
	|| id.is_set
	|| id_type.is_set
	|| interface_handle.is_set
	|| node_id.is_set
	|| unused.is_set;
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(feature_id.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(id_type.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(unused.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-id";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatsId' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (feature_id.is_set || is_set(feature_id.yfilter)) leaf_name_data.push_back(feature_id.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (id_type.is_set || is_set(id_type.yfilter)) leaf_name_data.push_back(id_type.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "feature-id")
    {
        feature_id = value;
        feature_id.value_namespace = name_space;
        feature_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id-type")
    {
        id_type = value;
        id_type.value_namespace = name_space;
        id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "feature-id")
    {
        feature_id.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "id-type")
    {
        id_type.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature-id" || name == "id" || name == "id-type" || name == "interface-handle" || name == "node-id" || name == "unused")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::BlockArray()
    :
    count{YType::uint32, "count"},
    data{YType::str, "data"},
    type{YType::enumeration, "type"}
{
    yang_name = "block-array"; yang_parent_name = "l2-interface-statistics";
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::~BlockArray()
{
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::has_data() const
{
    return count.is_set
	|| data.is_set
	|| type.is_set;
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-array";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BlockArray' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "data" || name == "type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::ElementArray()
    :
    key{YType::str, "key"}
{
    yang_name = "element-array"; yang_parent_name = "l2-interface-statistics";
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::~ElementArray()
{
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::has_data() const
{
    for (std::size_t index=0; index<block_array.size(); index++)
    {
        if(block_array[index]->has_data())
            return true;
    }
    return key.is_set;
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::has_operation() const
{
    for (std::size_t index=0; index<block_array.size(); index++)
    {
        if(block_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "element-array";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ElementArray' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-array")
    {
        for(auto const & c : block_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray>();
        c->parent = this;
        block_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : block_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-array" || name == "key")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::BlockArray()
    :
    count{YType::uint32, "count"},
    data{YType::str, "data"},
    type{YType::enumeration, "type"}
{
    yang_name = "block-array"; yang_parent_name = "element-array";
}

Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::~BlockArray()
{
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::has_data() const
{
    return count.is_set
	|| data.is_set
	|| type.is_set;
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-array";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BlockArray' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "data" || name == "type")
        return true;
    return false;
}

Interfaces::InterfaceXr::Interface::NvOptical::NvOptical()
    :
    controller{YType::str, "controller"}
{
    yang_name = "nv-optical"; yang_parent_name = "interface";
}

Interfaces::InterfaceXr::Interface::NvOptical::~NvOptical()
{
}

bool Interfaces::InterfaceXr::Interface::NvOptical::has_data() const
{
    return controller.is_set;
}

bool Interfaces::InterfaceXr::Interface::NvOptical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller.yfilter);
}

std::string Interfaces::InterfaceXr::Interface::NvOptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-optical";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceXr::Interface::NvOptical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvOptical' in Cisco_IOS_XR_pfi_im_cmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.yfilter)) leaf_name_data.push_back(controller.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceXr::Interface::NvOptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceXr::Interface::NvOptical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceXr::Interface::NvOptical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller")
    {
        controller = value;
        controller.value_namespace = name_space;
        controller.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceXr::Interface::NvOptical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller")
    {
        controller.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceXr::Interface::NvOptical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Interfaces::NodeTypeSets::NodeTypeSets()
{
    yang_name = "node-type-sets"; yang_parent_name = "interfaces";
}

Interfaces::NodeTypeSets::~NodeTypeSets()
{
}

bool Interfaces::NodeTypeSets::has_data() const
{
    for (std::size_t index=0; index<node_type_set.size(); index++)
    {
        if(node_type_set[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::NodeTypeSets::has_operation() const
{
    for (std::size_t index=0; index<node_type_set.size(); index++)
    {
        if(node_type_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::NodeTypeSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-type-sets";

    return path_buffer.str();

}

const EntityPath Interfaces::NodeTypeSets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::NodeTypeSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-type-set")
    {
        for(auto const & c : node_type_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet>();
        c->parent = this;
        node_type_set.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::NodeTypeSets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_type_set)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::NodeTypeSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::NodeTypeSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::NodeTypeSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-type-set")
        return true;
    return false;
}

Interfaces::NodeTypeSets::NodeTypeSet::NodeTypeSet()
    :
    node_name{YType::str, "node-name"},
    type_set_name{YType::enumeration, "type-set-name"}
    	,
    interface_summary(std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary>())
{
    interface_summary->parent = this;

    yang_name = "node-type-set"; yang_parent_name = "node-type-sets";
}

Interfaces::NodeTypeSets::NodeTypeSet::~NodeTypeSet()
{
}

bool Interfaces::NodeTypeSets::NodeTypeSet::has_data() const
{
    return node_name.is_set
	|| type_set_name.is_set
	|| (interface_summary !=  nullptr && interface_summary->has_data());
}

bool Interfaces::NodeTypeSets::NodeTypeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(type_set_name.yfilter)
	|| (interface_summary !=  nullptr && interface_summary->has_operation());
}

std::string Interfaces::NodeTypeSets::NodeTypeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-type-set";

    return path_buffer.str();

}

const EntityPath Interfaces::NodeTypeSets::NodeTypeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/node-type-sets/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (type_set_name.is_set || is_set(type_set_name.yfilter)) leaf_name_data.push_back(type_set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::NodeTypeSets::NodeTypeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        if(interface_summary == nullptr)
        {
            interface_summary = std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary>();
        }
        return interface_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::NodeTypeSets::NodeTypeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_summary != nullptr)
    {
        children["interface-summary"] = interface_summary;
    }

    return children;
}

void Interfaces::NodeTypeSets::NodeTypeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-set-name")
    {
        type_set_name = value;
        type_set_name.value_namespace = name_space;
        type_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::NodeTypeSets::NodeTypeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "type-set-name")
    {
        type_set_name.yfilter = yfilter;
    }
}

bool Interfaces::NodeTypeSets::NodeTypeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary" || name == "node-name" || name == "type-set-name")
        return true;
    return false;
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceSummary()
    :
    interface_counts(std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts>())
{
    interface_counts->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "node-type-set";
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::~InterfaceSummary()
{
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::has_data() const
{
    for (std::size_t index=0; index<interface_type.size(); index++)
    {
        if(interface_type[index]->has_data())
            return true;
    }
    return (interface_counts !=  nullptr && interface_counts->has_data());
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::has_operation() const
{
    for (std::size_t index=0; index<interface_type.size(); index++)
    {
        if(interface_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/node-type-sets/node-type-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts>();
        }
        return interface_counts;
    }

    if(child_yang_name == "interface-type")
    {
        for(auto const & c : interface_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType>();
        c->parent = this;
        interface_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    for (auto const & c : interface_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counts" || name == "interface-type")
        return true;
    return false;
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::InterfaceCounts()
    :
    admin_down_interface_count{YType::uint32, "admin-down-interface-count"},
    down_interface_count{YType::uint32, "down-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    up_interface_count{YType::uint32, "up-interface-count"}
{
    yang_name = "interface-counts"; yang_parent_name = "interface-summary";
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::~InterfaceCounts()
{
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::has_data() const
{
    return admin_down_interface_count.is_set
	|| down_interface_count.is_set
	|| interface_count.is_set
	|| up_interface_count.is_set;
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_interface_count.yfilter)
	|| ydk::is_set(down_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(up_interface_count.yfilter);
}

std::string Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";

    return path_buffer.str();

}

const EntityPath Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/node-type-sets/node-type-set/interface-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interface_count.is_set || is_set(admin_down_interface_count.yfilter)) leaf_name_data.push_back(admin_down_interface_count.get_name_leafdata());
    if (down_interface_count.is_set || is_set(down_interface_count.yfilter)) leaf_name_data.push_back(down_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (up_interface_count.is_set || is_set(up_interface_count.yfilter)) leaf_name_data.push_back(up_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count = value;
        admin_down_interface_count.value_namespace = name_space;
        admin_down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count = value;
        down_interface_count.value_namespace = name_space;
        down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count = value;
        up_interface_count.value_namespace = name_space;
        up_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count.yfilter = yfilter;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count.yfilter = yfilter;
    }
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-interface-count" || name == "down-interface-count" || name == "interface-count" || name == "up-interface-count")
        return true;
    return false;
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceType()
    :
    interface_type_description{YType::str, "interface-type-description"},
    interface_type_name{YType::str, "interface-type-name"}
    	,
    interface_counts(std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts>())
{
    interface_counts->parent = this;

    yang_name = "interface-type"; yang_parent_name = "interface-summary";
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::~InterfaceType()
{
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::has_data() const
{
    return interface_type_description.is_set
	|| interface_type_name.is_set
	|| (interface_counts !=  nullptr && interface_counts->has_data());
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type_description.yfilter)
	|| ydk::is_set(interface_type_name.yfilter)
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-type";

    return path_buffer.str();

}

const EntityPath Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/node-type-sets/node-type-set/interface-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type_description.is_set || is_set(interface_type_description.yfilter)) leaf_name_data.push_back(interface_type_description.get_name_leafdata());
    if (interface_type_name.is_set || is_set(interface_type_name.yfilter)) leaf_name_data.push_back(interface_type_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts>();
        }
        return interface_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    return children;
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type-description")
    {
        interface_type_description = value;
        interface_type_description.value_namespace = name_space;
        interface_type_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type-name")
    {
        interface_type_name = value;
        interface_type_name.value_namespace = name_space;
        interface_type_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type-description")
    {
        interface_type_description.yfilter = yfilter;
    }
    if(value_path == "interface-type-name")
    {
        interface_type_name.yfilter = yfilter;
    }
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counts" || name == "interface-type-description" || name == "interface-type-name")
        return true;
    return false;
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::InterfaceCounts()
    :
    admin_down_interface_count{YType::uint32, "admin-down-interface-count"},
    down_interface_count{YType::uint32, "down-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    up_interface_count{YType::uint32, "up-interface-count"}
{
    yang_name = "interface-counts"; yang_parent_name = "interface-type";
}

Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::~InterfaceCounts()
{
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::has_data() const
{
    return admin_down_interface_count.is_set
	|| down_interface_count.is_set
	|| interface_count.is_set
	|| up_interface_count.is_set;
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_interface_count.yfilter)
	|| ydk::is_set(down_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(up_interface_count.yfilter);
}

std::string Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";

    return path_buffer.str();

}

const EntityPath Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/node-type-sets/node-type-set/interface-summary/interface-type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interface_count.is_set || is_set(admin_down_interface_count.yfilter)) leaf_name_data.push_back(admin_down_interface_count.get_name_leafdata());
    if (down_interface_count.is_set || is_set(down_interface_count.yfilter)) leaf_name_data.push_back(down_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (up_interface_count.is_set || is_set(up_interface_count.yfilter)) leaf_name_data.push_back(up_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count = value;
        admin_down_interface_count.value_namespace = name_space;
        admin_down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count = value;
        down_interface_count.value_namespace = name_space;
        down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count = value;
        up_interface_count.value_namespace = name_space;
        up_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count.yfilter = yfilter;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count.yfilter = yfilter;
    }
}

bool Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-interface-count" || name == "down-interface-count" || name == "interface-count" || name == "up-interface-count")
        return true;
    return false;
}

Interfaces::InterfaceBriefs::InterfaceBriefs()
{
    yang_name = "interface-briefs"; yang_parent_name = "interfaces";
}

Interfaces::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Interfaces::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Interfaces::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    actual_line_state{YType::enumeration, "actual-line-state"},
    actual_state{YType::enumeration, "actual-state"},
    bandwidth{YType::uint32, "bandwidth"},
    encapsulation{YType::str, "encapsulation"},
    encapsulation_type_string{YType::str, "encapsulation-type-string"},
    interface{YType::str, "interface"},
    l2_transport{YType::boolean, "l2-transport"},
    line_state{YType::enumeration, "line-state"},
    mtu{YType::uint32, "mtu"},
    parent_interface{YType::str, "parent-interface"},
    state{YType::enumeration, "state"},
    sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
    type{YType::str, "type"}
{
    yang_name = "interface-brief"; yang_parent_name = "interface-briefs";
}

Interfaces::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Interfaces::InterfaceBriefs::InterfaceBrief::has_data() const
{
    return interface_name.is_set
	|| actual_line_state.is_set
	|| actual_state.is_set
	|| bandwidth.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| interface.is_set
	|| l2_transport.is_set
	|| line_state.is_set
	|| mtu.is_set
	|| parent_interface.is_set
	|| state.is_set
	|| sub_interface_mtu_overhead.is_set
	|| type.is_set;
}

bool Interfaces::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(actual_line_state.yfilter)
	|| ydk::is_set(actual_state.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(encapsulation_type_string.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(l2_transport.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(parent_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(sub_interface_mtu_overhead.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Interfaces::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceBriefs::InterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/interface-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (actual_line_state.is_set || is_set(actual_line_state.yfilter)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.yfilter)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.yfilter)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.yfilter)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.yfilter)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.yfilter)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
        actual_line_state.value_namespace = name_space;
        actual_line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
        actual_state.value_namespace = name_space;
        actual_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
        encapsulation_type_string.value_namespace = name_space;
        encapsulation_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
        l2_transport.value_namespace = name_space;
        l2_transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
        parent_interface.value_namespace = name_space;
        parent_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
        sub_interface_mtu_overhead.value_namespace = name_space;
        sub_interface_mtu_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state.yfilter = yfilter;
    }
    if(value_path == "actual-state")
    {
        actual_state.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "l2-transport")
    {
        l2_transport.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "parent-interface")
    {
        parent_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "actual-line-state" || name == "actual-state" || name == "bandwidth" || name == "encapsulation" || name == "encapsulation-type-string" || name == "interface" || name == "l2-transport" || name == "line-state" || name == "mtu" || name == "parent-interface" || name == "state" || name == "sub-interface-mtu-overhead" || name == "type")
        return true;
    return false;
}

Interfaces::InventorySummary::InventorySummary()
    :
    interface_counts(std::make_shared<Interfaces::InventorySummary::InterfaceCounts>())
{
    interface_counts->parent = this;

    yang_name = "inventory-summary"; yang_parent_name = "interfaces";
}

Interfaces::InventorySummary::~InventorySummary()
{
}

bool Interfaces::InventorySummary::has_data() const
{
    for (std::size_t index=0; index<interface_type.size(); index++)
    {
        if(interface_type[index]->has_data())
            return true;
    }
    return (interface_counts !=  nullptr && interface_counts->has_data());
}

bool Interfaces::InventorySummary::has_operation() const
{
    for (std::size_t index=0; index<interface_type.size(); index++)
    {
        if(interface_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string Interfaces::InventorySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory-summary";

    return path_buffer.str();

}

const EntityPath Interfaces::InventorySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InventorySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<Interfaces::InventorySummary::InterfaceCounts>();
        }
        return interface_counts;
    }

    if(child_yang_name == "interface-type")
    {
        for(auto const & c : interface_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InventorySummary::InterfaceType>();
        c->parent = this;
        interface_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InventorySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    for (auto const & c : interface_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InventorySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InventorySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InventorySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counts" || name == "interface-type")
        return true;
    return false;
}

Interfaces::InventorySummary::InterfaceCounts::InterfaceCounts()
    :
    admin_down_interface_count{YType::uint32, "admin-down-interface-count"},
    down_interface_count{YType::uint32, "down-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    up_interface_count{YType::uint32, "up-interface-count"}
{
    yang_name = "interface-counts"; yang_parent_name = "inventory-summary";
}

Interfaces::InventorySummary::InterfaceCounts::~InterfaceCounts()
{
}

bool Interfaces::InventorySummary::InterfaceCounts::has_data() const
{
    return admin_down_interface_count.is_set
	|| down_interface_count.is_set
	|| interface_count.is_set
	|| up_interface_count.is_set;
}

bool Interfaces::InventorySummary::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_interface_count.yfilter)
	|| ydk::is_set(down_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(up_interface_count.yfilter);
}

std::string Interfaces::InventorySummary::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";

    return path_buffer.str();

}

const EntityPath Interfaces::InventorySummary::InterfaceCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/inventory-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interface_count.is_set || is_set(admin_down_interface_count.yfilter)) leaf_name_data.push_back(admin_down_interface_count.get_name_leafdata());
    if (down_interface_count.is_set || is_set(down_interface_count.yfilter)) leaf_name_data.push_back(down_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (up_interface_count.is_set || is_set(up_interface_count.yfilter)) leaf_name_data.push_back(up_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InventorySummary::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InventorySummary::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InventorySummary::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count = value;
        admin_down_interface_count.value_namespace = name_space;
        admin_down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count = value;
        down_interface_count.value_namespace = name_space;
        down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count = value;
        up_interface_count.value_namespace = name_space;
        up_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InventorySummary::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count.yfilter = yfilter;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count.yfilter = yfilter;
    }
}

bool Interfaces::InventorySummary::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-interface-count" || name == "down-interface-count" || name == "interface-count" || name == "up-interface-count")
        return true;
    return false;
}

Interfaces::InventorySummary::InterfaceType::InterfaceType()
    :
    interface_type_description{YType::str, "interface-type-description"},
    interface_type_name{YType::str, "interface-type-name"}
    	,
    interface_counts(std::make_shared<Interfaces::InventorySummary::InterfaceType::InterfaceCounts>())
{
    interface_counts->parent = this;

    yang_name = "interface-type"; yang_parent_name = "inventory-summary";
}

Interfaces::InventorySummary::InterfaceType::~InterfaceType()
{
}

bool Interfaces::InventorySummary::InterfaceType::has_data() const
{
    return interface_type_description.is_set
	|| interface_type_name.is_set
	|| (interface_counts !=  nullptr && interface_counts->has_data());
}

bool Interfaces::InventorySummary::InterfaceType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type_description.yfilter)
	|| ydk::is_set(interface_type_name.yfilter)
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string Interfaces::InventorySummary::InterfaceType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-type";

    return path_buffer.str();

}

const EntityPath Interfaces::InventorySummary::InterfaceType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/inventory-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type_description.is_set || is_set(interface_type_description.yfilter)) leaf_name_data.push_back(interface_type_description.get_name_leafdata());
    if (interface_type_name.is_set || is_set(interface_type_name.yfilter)) leaf_name_data.push_back(interface_type_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InventorySummary::InterfaceType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<Interfaces::InventorySummary::InterfaceType::InterfaceCounts>();
        }
        return interface_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InventorySummary::InterfaceType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    return children;
}

void Interfaces::InventorySummary::InterfaceType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type-description")
    {
        interface_type_description = value;
        interface_type_description.value_namespace = name_space;
        interface_type_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type-name")
    {
        interface_type_name = value;
        interface_type_name.value_namespace = name_space;
        interface_type_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InventorySummary::InterfaceType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type-description")
    {
        interface_type_description.yfilter = yfilter;
    }
    if(value_path == "interface-type-name")
    {
        interface_type_name.yfilter = yfilter;
    }
}

bool Interfaces::InventorySummary::InterfaceType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counts" || name == "interface-type-description" || name == "interface-type-name")
        return true;
    return false;
}

Interfaces::InventorySummary::InterfaceType::InterfaceCounts::InterfaceCounts()
    :
    admin_down_interface_count{YType::uint32, "admin-down-interface-count"},
    down_interface_count{YType::uint32, "down-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    up_interface_count{YType::uint32, "up-interface-count"}
{
    yang_name = "interface-counts"; yang_parent_name = "interface-type";
}

Interfaces::InventorySummary::InterfaceType::InterfaceCounts::~InterfaceCounts()
{
}

bool Interfaces::InventorySummary::InterfaceType::InterfaceCounts::has_data() const
{
    return admin_down_interface_count.is_set
	|| down_interface_count.is_set
	|| interface_count.is_set
	|| up_interface_count.is_set;
}

bool Interfaces::InventorySummary::InterfaceType::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_interface_count.yfilter)
	|| ydk::is_set(down_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(up_interface_count.yfilter);
}

std::string Interfaces::InventorySummary::InterfaceType::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";

    return path_buffer.str();

}

const EntityPath Interfaces::InventorySummary::InterfaceType::InterfaceCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/inventory-summary/interface-type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interface_count.is_set || is_set(admin_down_interface_count.yfilter)) leaf_name_data.push_back(admin_down_interface_count.get_name_leafdata());
    if (down_interface_count.is_set || is_set(down_interface_count.yfilter)) leaf_name_data.push_back(down_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (up_interface_count.is_set || is_set(up_interface_count.yfilter)) leaf_name_data.push_back(up_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InventorySummary::InterfaceType::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InventorySummary::InterfaceType::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InventorySummary::InterfaceType::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count = value;
        admin_down_interface_count.value_namespace = name_space;
        admin_down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count = value;
        down_interface_count.value_namespace = name_space;
        down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count = value;
        up_interface_count.value_namespace = name_space;
        up_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InventorySummary::InterfaceType::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count.yfilter = yfilter;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count.yfilter = yfilter;
    }
}

bool Interfaces::InventorySummary::InterfaceType::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-interface-count" || name == "down-interface-count" || name == "interface-count" || name == "up-interface-count")
        return true;
    return false;
}

Interfaces::Interfaces_::Interfaces_()
{
    yang_name = "interfaces"; yang_parent_name = "interfaces";
}

Interfaces::Interfaces_::~Interfaces_()
{
}

bool Interfaces::Interfaces_::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Interfaces::Interfaces_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::Interfaces_::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interfaces_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    description{YType::str, "description"},
    interface{YType::str, "interface"},
    line_state{YType::enumeration, "line-state"},
    state{YType::enumeration, "state"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Interfaces::Interfaces_::Interface::~Interface()
{
}

bool Interfaces::Interfaces_::Interface::has_data() const
{
    return interface_name.is_set
	|| description.is_set
	|| interface.is_set
	|| line_state.is_set
	|| state.is_set;
}

bool Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(line_state.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Interfaces::Interfaces_::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.yfilter)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-state")
    {
        line_state = value;
        line_state.value_namespace = name_space;
        line_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "line-state")
    {
        line_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "description" || name == "interface" || name == "line-state" || name == "state")
        return true;
    return false;
}

Interfaces::InterfaceSummary::InterfaceSummary()
    :
    interface_counts(std::make_shared<Interfaces::InterfaceSummary::InterfaceCounts>())
{
    interface_counts->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "interfaces";
}

Interfaces::InterfaceSummary::~InterfaceSummary()
{
}

bool Interfaces::InterfaceSummary::has_data() const
{
    for (std::size_t index=0; index<interface_type.size(); index++)
    {
        if(interface_type[index]->has_data())
            return true;
    }
    return (interface_counts !=  nullptr && interface_counts->has_data());
}

bool Interfaces::InterfaceSummary::has_operation() const
{
    for (std::size_t index=0; index<interface_type.size(); index++)
    {
        if(interface_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string Interfaces::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<Interfaces::InterfaceSummary::InterfaceCounts>();
        }
        return interface_counts;
    }

    if(child_yang_name == "interface-type")
    {
        for(auto const & c : interface_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Interfaces::InterfaceSummary::InterfaceType>();
        c->parent = this;
        interface_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    for (auto const & c : interface_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Interfaces::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Interfaces::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Interfaces::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counts" || name == "interface-type")
        return true;
    return false;
}

Interfaces::InterfaceSummary::InterfaceCounts::InterfaceCounts()
    :
    admin_down_interface_count{YType::uint32, "admin-down-interface-count"},
    down_interface_count{YType::uint32, "down-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    up_interface_count{YType::uint32, "up-interface-count"}
{
    yang_name = "interface-counts"; yang_parent_name = "interface-summary";
}

Interfaces::InterfaceSummary::InterfaceCounts::~InterfaceCounts()
{
}

bool Interfaces::InterfaceSummary::InterfaceCounts::has_data() const
{
    return admin_down_interface_count.is_set
	|| down_interface_count.is_set
	|| interface_count.is_set
	|| up_interface_count.is_set;
}

bool Interfaces::InterfaceSummary::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_interface_count.yfilter)
	|| ydk::is_set(down_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(up_interface_count.yfilter);
}

std::string Interfaces::InterfaceSummary::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceSummary::InterfaceCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/interface-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interface_count.is_set || is_set(admin_down_interface_count.yfilter)) leaf_name_data.push_back(admin_down_interface_count.get_name_leafdata());
    if (down_interface_count.is_set || is_set(down_interface_count.yfilter)) leaf_name_data.push_back(down_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (up_interface_count.is_set || is_set(up_interface_count.yfilter)) leaf_name_data.push_back(up_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceSummary::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceSummary::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceSummary::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count = value;
        admin_down_interface_count.value_namespace = name_space;
        admin_down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count = value;
        down_interface_count.value_namespace = name_space;
        down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count = value;
        up_interface_count.value_namespace = name_space;
        up_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceSummary::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count.yfilter = yfilter;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceSummary::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-interface-count" || name == "down-interface-count" || name == "interface-count" || name == "up-interface-count")
        return true;
    return false;
}

Interfaces::InterfaceSummary::InterfaceType::InterfaceType()
    :
    interface_type_description{YType::str, "interface-type-description"},
    interface_type_name{YType::str, "interface-type-name"}
    	,
    interface_counts(std::make_shared<Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts>())
{
    interface_counts->parent = this;

    yang_name = "interface-type"; yang_parent_name = "interface-summary";
}

Interfaces::InterfaceSummary::InterfaceType::~InterfaceType()
{
}

bool Interfaces::InterfaceSummary::InterfaceType::has_data() const
{
    return interface_type_description.is_set
	|| interface_type_name.is_set
	|| (interface_counts !=  nullptr && interface_counts->has_data());
}

bool Interfaces::InterfaceSummary::InterfaceType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type_description.yfilter)
	|| ydk::is_set(interface_type_name.yfilter)
	|| (interface_counts !=  nullptr && interface_counts->has_operation());
}

std::string Interfaces::InterfaceSummary::InterfaceType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-type";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceSummary::InterfaceType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/interface-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type_description.is_set || is_set(interface_type_description.yfilter)) leaf_name_data.push_back(interface_type_description.get_name_leafdata());
    if (interface_type_name.is_set || is_set(interface_type_name.yfilter)) leaf_name_data.push_back(interface_type_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceSummary::InterfaceType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-counts")
    {
        if(interface_counts == nullptr)
        {
            interface_counts = std::make_shared<Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts>();
        }
        return interface_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceSummary::InterfaceType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_counts != nullptr)
    {
        children["interface-counts"] = interface_counts;
    }

    return children;
}

void Interfaces::InterfaceSummary::InterfaceType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type-description")
    {
        interface_type_description = value;
        interface_type_description.value_namespace = name_space;
        interface_type_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type-name")
    {
        interface_type_name = value;
        interface_type_name.value_namespace = name_space;
        interface_type_name.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceSummary::InterfaceType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type-description")
    {
        interface_type_description.yfilter = yfilter;
    }
    if(value_path == "interface-type-name")
    {
        interface_type_name.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceSummary::InterfaceType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-counts" || name == "interface-type-description" || name == "interface-type-name")
        return true;
    return false;
}

Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::InterfaceCounts()
    :
    admin_down_interface_count{YType::uint32, "admin-down-interface-count"},
    down_interface_count{YType::uint32, "down-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    up_interface_count{YType::uint32, "up-interface-count"}
{
    yang_name = "interface-counts"; yang_parent_name = "interface-type";
}

Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::~InterfaceCounts()
{
}

bool Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::has_data() const
{
    return admin_down_interface_count.is_set
	|| down_interface_count.is_set
	|| interface_count.is_set
	|| up_interface_count.is_set;
}

bool Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_down_interface_count.yfilter)
	|| ydk::is_set(down_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(up_interface_count.yfilter);
}

std::string Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counts";

    return path_buffer.str();

}

const EntityPath Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pfi-im-cmd-oper:interfaces/interface-summary/interface-type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down_interface_count.is_set || is_set(admin_down_interface_count.yfilter)) leaf_name_data.push_back(admin_down_interface_count.get_name_leafdata());
    if (down_interface_count.is_set || is_set(down_interface_count.yfilter)) leaf_name_data.push_back(down_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (up_interface_count.is_set || is_set(up_interface_count.yfilter)) leaf_name_data.push_back(up_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count = value;
        admin_down_interface_count.value_namespace = name_space;
        admin_down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count = value;
        down_interface_count.value_namespace = name_space;
        down_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count = value;
        up_interface_count.value_namespace = name_space;
        up_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-down-interface-count")
    {
        admin_down_interface_count.yfilter = yfilter;
    }
    if(value_path == "down-interface-count")
    {
        down_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "up-interface-count")
    {
        up_interface_count.yfilter = yfilter;
    }
}

bool Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-down-interface-count" || name == "down-interface-count" || name == "interface-count" || name == "up-interface-count")
        return true;
    return false;
}

const Enum::YLeaf BmSeverity::ok {0, "ok"};
const Enum::YLeaf BmSeverity::information {1, "information"};
const Enum::YLeaf BmSeverity::misconfiguration {2, "misconfiguration"};
const Enum::YLeaf BmSeverity::warning {3, "warning"};
const Enum::YLeaf BmSeverity::error {5, "error"};

const Enum::YLeaf SrpMgmtIpsReq::idle_ips_request {0, "idle-ips-request"};
const Enum::YLeaf SrpMgmtIpsReq::wait_to_restore_ips_request {1, "wait-to-restore-ips-request"};
const Enum::YLeaf SrpMgmtIpsReq::manual_switch_ips_request {2, "manual-switch-ips-request"};
const Enum::YLeaf SrpMgmtIpsReq::signal_degrade_ips_request {3, "signal-degrade-ips-request"};
const Enum::YLeaf SrpMgmtIpsReq::signal_fail_ips_request {4, "signal-fail-ips-request"};
const Enum::YLeaf SrpMgmtIpsReq::forced_switch_ips_request {5, "forced-switch-ips-request"};
const Enum::YLeaf SrpMgmtIpsReq::unknown_ips_request {6, "unknown-ips-request"};

const Enum::YLeaf ImAttrDuplex::im_attr_duplex_unknown {0, "im-attr-duplex-unknown"};
const Enum::YLeaf ImAttrDuplex::im_attr_duplex_half {1, "im-attr-duplex-half"};
const Enum::YLeaf ImAttrDuplex::im_attr_duplex_full {2, "im-attr-duplex-full"};

const Enum::YLeaf GccDerState::in_service {0, "in-service"};
const Enum::YLeaf GccDerState::out_of_service {1, "out-of-service"};
const Enum::YLeaf GccDerState::maintainance {2, "maintainance"};
const Enum::YLeaf GccDerState::ais {3, "ais"};

const Enum::YLeaf StatsId::stats_id_type_unknown {0, "stats-id-type-unknown"};
const Enum::YLeaf StatsId::stats_id_type_min {1, "stats-id-type-min"};
const Enum::YLeaf StatsId::stats_id_type_spare {2, "stats-id-type-spare"};
const Enum::YLeaf StatsId::stats_id_type_node {3, "stats-id-type-node"};
const Enum::YLeaf StatsId::stats_id_type_other {4, "stats-id-type-other"};
const Enum::YLeaf StatsId::stats_id_type_feature {5, "stats-id-type-feature"};
const Enum::YLeaf StatsId::stats_id_type_max {6, "stats-id-type-max"};

const Enum::YLeaf NcpIdent::cdpcp {1, "cdpcp"};
const Enum::YLeaf NcpIdent::ipcp {2, "ipcp"};
const Enum::YLeaf NcpIdent::ipcpiw {3, "ipcpiw"};
const Enum::YLeaf NcpIdent::ipv6cp {4, "ipv6cp"};
const Enum::YLeaf NcpIdent::mplscp {5, "mplscp"};
const Enum::YLeaf NcpIdent::osicp {6, "osicp"};

const Enum::YLeaf EfpTagPriority::priority0 {0, "priority0"};
const Enum::YLeaf EfpTagPriority::priority1 {1, "priority1"};
const Enum::YLeaf EfpTagPriority::priority2 {2, "priority2"};
const Enum::YLeaf EfpTagPriority::priority3 {3, "priority3"};
const Enum::YLeaf EfpTagPriority::priority4 {4, "priority4"};
const Enum::YLeaf EfpTagPriority::priority5 {5, "priority5"};
const Enum::YLeaf EfpTagPriority::priority6 {6, "priority6"};
const Enum::YLeaf EfpTagPriority::priority7 {7, "priority7"};
const Enum::YLeaf EfpTagPriority::priority_any {8, "priority-any"};

const Enum::YLeaf BmMuxstate::detached {1, "detached"};
const Enum::YLeaf BmMuxstate::waiting {2, "waiting"};
const Enum::YLeaf BmMuxstate::attached {3, "attached"};
const Enum::YLeaf BmMuxstate::collecting {4, "collecting"};
const Enum::YLeaf BmMuxstate::distributing {5, "distributing"};
const Enum::YLeaf BmMuxstate::collecting_distributing {6, "collecting-distributing"};

const Enum::YLeaf TunnelGreMode::unknown {0, "unknown"};
const Enum::YLeaf TunnelGreMode::gr_eo_ipv4 {1, "gr-eo-ipv4"};
const Enum::YLeaf TunnelGreMode::gr_eo_ipv6 {2, "gr-eo-ipv6"};
const Enum::YLeaf TunnelGreMode::mgr_eo_ipv4 {3, "mgr-eo-ipv4"};
const Enum::YLeaf TunnelGreMode::mgr_eo_ipv6 {4, "mgr-eo-ipv6"};
const Enum::YLeaf TunnelGreMode::ipv4 {5, "ipv4"};
const Enum::YLeaf TunnelGreMode::ipv6 {6, "ipv6"};

const Enum::YLeaf ImCmdIntfTypeEnum::srp {0, "srp"};
const Enum::YLeaf ImCmdIntfTypeEnum::tunnel {1, "tunnel"};
const Enum::YLeaf ImCmdIntfTypeEnum::bundle {2, "bundle"};
const Enum::YLeaf ImCmdIntfTypeEnum::serial {3, "serial"};
const Enum::YLeaf ImCmdIntfTypeEnum::sonet_pos {4, "sonet-pos"};
const Enum::YLeaf ImCmdIntfTypeEnum::tunnel_gre {5, "tunnel-gre"};
const Enum::YLeaf ImCmdIntfTypeEnum::pseudowire_head_end {6, "pseudowire-head-end"};
const Enum::YLeaf ImCmdIntfTypeEnum::cem {7, "cem"};
const Enum::YLeaf ImCmdIntfTypeEnum::gcc {8, "gcc"};

const Enum::YLeaf InterfaceTypeSet::hardware_interfaces {0, "hardware-interfaces"};

const Enum::YLeaf GccSecState::normal {0, "normal"};
const Enum::YLeaf GccSecState::maintainance {1, "maintainance"};
const Enum::YLeaf GccSecState::ais {2, "ais"};

const Enum::YLeaf PppFsmState::ppp_fsm_state_initial_0 {0, "ppp-fsm-state-initial-0"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_starting_1 {1, "ppp-fsm-state-starting-1"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_closed_2 {2, "ppp-fsm-state-closed-2"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_stopped_3 {3, "ppp-fsm-state-stopped-3"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_closing_4 {4, "ppp-fsm-state-closing-4"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_stopping_5 {5, "ppp-fsm-state-stopping-5"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_req_sent_6 {6, "ppp-fsm-state-req-sent-6"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_ack_rcvd_7 {7, "ppp-fsm-state-ack-rcvd-7"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_ack_sent_8 {8, "ppp-fsm-state-ack-sent-8"};
const Enum::YLeaf PppFsmState::ppp_fsm_state_opened_9 {9, "ppp-fsm-state-opened-9"};

const Enum::YLeaf TunnelKaDfState::disable {0, "disable"};
const Enum::YLeaf TunnelKaDfState::enable {1, "enable"};

const Enum::YLeaf StatsCounter::stats_counter_rate {0, "stats-counter-rate"};
const Enum::YLeaf StatsCounter::stats_counter_uint32 {1, "stats-counter-uint32"};
const Enum::YLeaf StatsCounter::stats_counter_uint64 {2, "stats-counter-uint64"};
const Enum::YLeaf StatsCounter::stats_counter_generic {3, "stats-counter-generic"};
const Enum::YLeaf StatsCounter::stats_counter_proto {4, "stats-counter-proto"};
const Enum::YLeaf StatsCounter::stats_counter_srp {5, "stats-counter-srp"};
const Enum::YLeaf StatsCounter::stats_counter_ipv4_prec {6, "stats-counter-ipv4-prec"};
const Enum::YLeaf StatsCounter::stats_counter_ipv4_dscp {7, "stats-counter-ipv4-dscp"};
const Enum::YLeaf StatsCounter::stats_counter_mpls_exp {8, "stats-counter-mpls-exp"};
const Enum::YLeaf StatsCounter::stats_counter_ipv4_bgppa {9, "stats-counter-ipv4-bgppa"};
const Enum::YLeaf StatsCounter::stats_counter_src_bgppa {10, "stats-counter-src-bgppa"};
const Enum::YLeaf StatsCounter::stats_counter_basic {11, "stats-counter-basic"};
const Enum::YLeaf StatsCounter::stats_counter_comp_generic {12, "stats-counter-comp-generic"};
const Enum::YLeaf StatsCounter::stats_counter_comp_proto {13, "stats-counter-comp-proto"};
const Enum::YLeaf StatsCounter::stats_counter_comp_basic {14, "stats-counter-comp-basic"};
const Enum::YLeaf StatsCounter::stats_counter_accounting {15, "stats-counter-accounting"};
const Enum::YLeaf StatsCounter::stats_counter_comp_accounting {16, "stats-counter-comp-accounting"};
const Enum::YLeaf StatsCounter::stats_counter_flow {17, "stats-counter-flow"};
const Enum::YLeaf StatsCounter::stats_counter_comp_flow {18, "stats-counter-comp-flow"};

const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_unknown {0, "bm-mbr-state-reason-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_unselectable_unknown {1, "bm-mbr-state-reason-unselectable-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_down {2, "bm-mbr-state-reason-link-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_deleting {3, "bm-mbr-state-reason-link-deleting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_creating {4, "bm-mbr-state-reason-creating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_creating {5, "bm-mbr-state-reason-bundle-creating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_deleting {6, "bm-mbr-state-reason-bundle-deleting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_admin_down {7, "bm-mbr-state-reason-bundle-admin-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_replicating {8, "bm-mbr-state-reason-replicating"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bandwidth {9, "bm-mbr-state-reason-bandwidth"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_loop_back {10, "bm-mbr-state-reason-loop-back"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_type {11, "bm-mbr-state-reason-activity-type"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_shutdown {12, "bm-mbr-state-reason-bundle-shutdown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_min_selected {13, "bm-mbr-state-reason-min-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_max_selected {14, "bm-mbr-state-reason-max-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_limit {15, "bm-mbr-state-reason-link-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_active_limit {16, "bm-mbr-state-reason-active-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_unknown {17, "bm-mbr-state-reason-standby-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_expired {18, "bm-mbr-state-reason-expired"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_defaulted {19, "bm-mbr-state-reason-defaulted"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_act_or_not_agg {20, "bm-mbr-state-reason-act-or-not-agg"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_agg {21, "bm-mbr-state-reason-partner-not-agg"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_lagid {22, "bm-mbr-state-reason-lagid"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_cfgd {23, "bm-mbr-state-reason-bundle-not-cfgd"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_ready {24, "bm-mbr-state-reason-bundle-not-ready"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_ood {25, "bm-mbr-state-reason-partner-ood"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_in_sync {26, "bm-mbr-state-reason-partner-not-in-sync"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_foreign_partner_oos {27, "bm-mbr-state-reason-foreign-partner-oos"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_attach_unknown {28, "bm-mbr-state-reason-attach-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_partner_not_collecting {29, "bm-mbr-state-reason-partner-not-collecting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_collect_unknown {30, "bm-mbr-state-reason-collect-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_foreign {31, "bm-mbr-state-reason-standby-foreign"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_starting {32, "bm-mbr-state-reason-bfd-starting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_down {33, "bm-mbr-state-reason-bfd-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_nbr_unconfig {34, "bm-mbr-state-reason-bfd-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp {35, "bm-mbr-state-reason-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_pe_isolated {36, "bm-mbr-state-reason-pe-isolated"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_forced_switchover {37, "bm-mbr-state-reason-forced-switchover"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_errdis_unknown {38, "bm-mbr-state-reason-errdis-unknown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_mbr_state_info {39, "bm-mbr-state-reason-mlacp-no-mbr-state-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_active {40, "bm-mbr-state-reason-active"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_state_info {41, "bm-mbr-state-reason-mlacp-no-bdl-state-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_config_info {42, "bm-mbr-state-reason-mlacp-no-bdl-config-info"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_no_bdl_sync {43, "bm-mbr-state-reason-mlacp-no-bdl-sync"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_bdl_has_no_peer {44, "bm-mbr-state-reason-mlacp-bdl-has-no-peer"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_nak {45, "bm-mbr-state-reason-mlacp-nak"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_transport_unavailable {46, "bm-mbr-state-reason-mlacp-transport-unavailable"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_not_configured {47, "bm-mbr-state-reason-mlacp-not-configured"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_recovery_timer {48, "bm-mbr-state-reason-recovery-timer"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_standby {49, "bm-mbr-state-reason-mlacp-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_maximized_out {50, "bm-mbr-state-reason-maximized-out"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_peer_selected {51, "bm-mbr-state-reason-mlacp-peer-selected"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_mlacp_connect_timer_running {52, "bm-mbr-state-reason-mlacp-connect-timer-running"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_not_mlacp {53, "bm-mbr-state-reason-bundle-not-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_lon {54, "bm-mbr-state-reason-no-lon"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_cumul_rel_bw_limit {55, "bm-mbr-state-reason-cumul-rel-bw-limit"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_mac {56, "bm-mbr-state-reason-no-mac"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_system_id {57, "bm-mbr-state-reason-no-system-id"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_link_shutdown {58, "bm-mbr-state-reason-link-shutdown"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_mlacp {59, "bm-mbr-state-reason-activity-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_activity_iccp {60, "bm-mbr-state-reason-activity-iccp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_icpe_mlacp {61, "bm-mbr-state-reason-bundle-icpe-mlacp"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_no_link_num {62, "bm-mbr-state-reason-no-link-num"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_standby_peer_higher_prio {63, "bm-mbr-state-reason-standby-peer-higher-prio"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_red_state_standby {64, "bm-mbr-state-reason-red-state-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_other_red_state_standby {65, "bm-mbr-state-reason-other-red-state-standby"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_hold_ing {66, "bm-mbr-state-reason-hold-ing"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_error_disabled {67, "bm-mbr-state-reason-bundle-error-disabled"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bundle_efd_disabled {68, "bm-mbr-state-reason-bundle-efd-disabled"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_singleton_pe_isolated {69, "bm-mbr-state-reason-singleton-pe-isolated"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_starting {70, "bm-mbr-state-reason-bfd-ipv6-starting"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_down {71, "bm-mbr-state-reason-bfd-ipv6-down"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_bfd_ipv6_nbr_unconfig {72, "bm-mbr-state-reason-bfd-ipv6-nbr-unconfig"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_timer_running {73, "bm-mbr-state-reason-timer-running"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_client_bundle_ctrl {74, "bm-mbr-state-reason-client-bundle-ctrl"};
const Enum::YLeaf BmMbrStateReason::bm_mbr_state_reason_count {75, "bm-mbr-state-reason-count"};

const Enum::YLeaf ImAttrFlowControl::im_attr_flow_control_off {0, "im-attr-flow-control-off"};
const Enum::YLeaf ImAttrFlowControl::im_attr_flow_control_on {1, "im-attr-flow-control-on"};
const Enum::YLeaf ImAttrFlowControl::im_attr_flow_control_not_sup {2, "im-attr-flow-control-not-sup"};
const Enum::YLeaf ImAttrFlowControl::im_attr_flow_control_priority {3, "im-attr-flow-control-priority"};

const Enum::YLeaf BmStateReasonTarget::member_reason {0, "member-reason"};
const Enum::YLeaf BmStateReasonTarget::bundle_reason {1, "bundle-reason"};

const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_unknown {0, "im-attr-transport-mode-unknown"};
const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_lan {1, "im-attr-transport-mode-lan"};
const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_wan {2, "im-attr-transport-mode-wan"};
const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_otn_bt_opu1e {3, "im-attr-transport-mode-otn-bt-opu1e"};
const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_otn_bt_opu2e {4, "im-attr-transport-mode-otn-bt-opu2e"};
const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_otn_opu3 {5, "im-attr-transport-mode-otn-opu3"};
const Enum::YLeaf ImAttrTransportMode::im_attr_transport_mode_otn_opu4 {6, "im-attr-transport-mode-otn-opu4"};

const Enum::YLeaf VlanEncaps::no_encapsulation {0, "no-encapsulation"};
const Enum::YLeaf VlanEncaps::dot1q {1, "dot1q"};
const Enum::YLeaf VlanEncaps::qinq {2, "qinq"};
const Enum::YLeaf VlanEncaps::qin_any {3, "qin-any"};
const Enum::YLeaf VlanEncaps::dot1q_native {4, "dot1q-native"};
const Enum::YLeaf VlanEncaps::dot1ad {5, "dot1ad"};
const Enum::YLeaf VlanEncaps::dot1ad_native {6, "dot1ad-native"};
const Enum::YLeaf VlanEncaps::service_instance {7, "service-instance"};
const Enum::YLeaf VlanEncaps::dot1ad_dot1q {8, "dot1ad-dot1q"};
const Enum::YLeaf VlanEncaps::dot1ad_any {9, "dot1ad-any"};

const Enum::YLeaf BmdMemberState::bmd_mbr_state_configured {1, "bmd-mbr-state-configured"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_standby {2, "bmd-mbr-state-standby"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_hot_standby {3, "bmd-mbr-state-hot-standby"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_negotiating {4, "bmd-mbr-state-negotiating"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_bfd_running {5, "bmd-mbr-state-bfd-running"};
const Enum::YLeaf BmdMemberState::bmd_mbr_state_active {6, "bmd-mbr-state-active"};

const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_local {0, "bmd-mbr-local"};
const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_foreign {1, "bmd-mbr-foreign"};
const Enum::YLeaf BmdMemberTypeEnum::bmd_mbr_unknown {2, "bmd-mbr-unknown"};

const Enum::YLeaf EfpTagEtype::untagged {0, "untagged"};
const Enum::YLeaf EfpTagEtype::dot1q {33024, "dot1q"};
const Enum::YLeaf EfpTagEtype::dot1ad {34984, "dot1ad"};

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf SrpMgmtIpsWrapState::idle_wrap_state {0, "idle-wrap-state"};
const Enum::YLeaf SrpMgmtIpsWrapState::wrapped_state {1, "wrapped-state"};
const Enum::YLeaf SrpMgmtIpsWrapState::locked_out_wrap_state {2, "locked-out-wrap-state"};
const Enum::YLeaf SrpMgmtIpsWrapState::unknown_wrap_state {3, "unknown-wrap-state"};

const Enum::YLeaf SrpMgmtSrrFailure::idle_srr_failure {0, "idle-srr-failure"};
const Enum::YLeaf SrpMgmtSrrFailure::wait_to_restore_srr_failure {1, "wait-to-restore-srr-failure"};
const Enum::YLeaf SrpMgmtSrrFailure::signal_fail_srr_failure {2, "signal-fail-srr-failure"};
const Enum::YLeaf SrpMgmtSrrFailure::forced_switch_srr_failure {3, "forced-switch-srr-failure"};
const Enum::YLeaf SrpMgmtSrrFailure::unknown_srr_failure {4, "unknown-srr-failure"};

const Enum::YLeaf BmMuxreason::bm_mux_reason_no_reason {0, "bm-mux-reason-no-reason"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_down {1, "bm-mux-reason-link-down"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_deleted {2, "bm-mux-reason-link-deleted"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_duplex {3, "bm-mux-reason-duplex"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_bandwidth {4, "bm-mux-reason-bandwidth"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_loop_back {5, "bm-mux-reason-loop-back"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_activity_type {6, "bm-mux-reason-activity-type"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_link_limit {7, "bm-mux-reason-link-limit"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_shared {8, "bm-mux-reason-shared"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_lagid {9, "bm-mux-reason-lagid"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_no_bundle {10, "bm-mux-reason-no-bundle"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_no_primary {11, "bm-mux-reason-no-primary"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_bundle_down {12, "bm-mux-reason-bundle-down"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_individual {13, "bm-mux-reason-individual"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_defaulted {14, "bm-mux-reason-defaulted"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_in_sync {15, "bm-mux-reason-in-sync"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_collecting {16, "bm-mux-reason-collecting"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_active_link_limit {17, "bm-mux-reason-active-link-limit"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_distributing {18, "bm-mux-reason-distributing"};
const Enum::YLeaf BmMuxreason::bm_mux_reason_count {19, "bm-mux-reason-count"};

const Enum::YLeaf ImCmdEncapsEnum::frame_relay {0, "frame-relay"};
const Enum::YLeaf ImCmdEncapsEnum::vlan {1, "vlan"};
const Enum::YLeaf ImCmdEncapsEnum::ppp {2, "ppp"};

const Enum::YLeaf SrpMgmtFailureStateEt::idle_failure_state {0, "idle-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::wait_to_restore_failure_state {1, "wait-to-restore-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::manual_switch_failure_state {2, "manual-switch-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::signal_degrade_failure_state {3, "signal-degrade-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::signal_fail_failure_state {4, "signal-fail-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::forced_switch_failure_state {5, "forced-switch-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::shutdown_failure_state {6, "shutdown-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::invalid_failure_state {7, "invalid-failure-state"};
const Enum::YLeaf SrpMgmtFailureStateEt::unknown_failure_state {8, "unknown-failure-state"};

const Enum::YLeaf ImCmdStatsEnum::full {1, "full"};
const Enum::YLeaf ImCmdStatsEnum::basic {2, "basic"};

const Enum::YLeaf SrpMgmtIpsPathInd::short_path {0, "short-path"};
const Enum::YLeaf SrpMgmtIpsPathInd::long_path {1, "long-path"};
const Enum::YLeaf SrpMgmtIpsPathInd::unknown_path {2, "unknown-path"};

const Enum::YLeaf ImCmdLmiTypeEnum::lmi_type_auto {0, "lmi-type-auto"};
const Enum::YLeaf ImCmdLmiTypeEnum::lmi_type_ansi {1, "lmi-type-ansi"};
const Enum::YLeaf ImCmdLmiTypeEnum::lmi_type_ccitt {2, "lmi-type-ccitt"};
const Enum::YLeaf ImCmdLmiTypeEnum::lmi_type_cisco {3, "lmi-type-cisco"};

const Enum::YLeaf TunnelKeyState::absent {0, "absent"};
const Enum::YLeaf TunnelKeyState::present {1, "present"};

const Enum::YLeaf TunlPfiAfId::tunl_pfi_af_id_none {0, "tunl-pfi-af-id-none"};
const Enum::YLeaf TunlPfiAfId::tunl_pfi_af_id_ipv4 {2, "tunl-pfi-af-id-ipv4"};
const Enum::YLeaf TunlPfiAfId::tunl_pfi_af_id_ipv6 {10, "tunl-pfi-af-id-ipv6"};

const Enum::YLeaf EfpPayloadEtype::payload_ethertype_any {0, "payload-ethertype-any"};
const Enum::YLeaf EfpPayloadEtype::payload_ethertype_ip {1, "payload-ethertype-ip"};
const Enum::YLeaf EfpPayloadEtype::payload_ethertype_pppoe {2, "payload-ethertype-pppoe"};

const Enum::YLeaf ImAttrLink::im_attr_link_type_auto {0, "im-attr-link-type-auto"};
const Enum::YLeaf ImAttrLink::im_attr_link_type_force {1, "im-attr-link-type-force"};

const Enum::YLeaf ImCmdFrTypeEnum::frame_relay_cisco {0, "frame-relay-cisco"};
const Enum::YLeaf ImCmdFrTypeEnum::frame_relay_ietf {1, "frame-relay-ietf"};

const Enum::YLeaf SonetApsEt::not_configured {0, "not-configured"};
const Enum::YLeaf SonetApsEt::working_active {1, "working-active"};
const Enum::YLeaf SonetApsEt::protect_active {2, "protect-active"};
const Enum::YLeaf SonetApsEt::working_inactive {3, "working-inactive"};
const Enum::YLeaf SonetApsEt::protect_inactive {4, "protect-inactive"};

const Enum::YLeaf SrpMgmtFailureEt::hardware_missing_failure {0, "hardware-missing-failure"};
const Enum::YLeaf SrpMgmtFailureEt::layer1_admin_state_failure {1, "layer1-admin-state-failure"};
const Enum::YLeaf SrpMgmtFailureEt::layer1_error_failure {2, "layer1-error-failure"};
const Enum::YLeaf SrpMgmtFailureEt::keepalive_missed_failure {3, "keepalive-missed-failure"};
const Enum::YLeaf SrpMgmtFailureEt::link_quality_degraded_failure {4, "link-quality-degraded-failure"};
const Enum::YLeaf SrpMgmtFailureEt::mate_problem_failure {5, "mate-problem-failure"};
const Enum::YLeaf SrpMgmtFailureEt::side_mismatch_failure {6, "side-mismatch-failure"};
const Enum::YLeaf SrpMgmtFailureEt::unknown_failure {7, "unknown-failure"};

const Enum::YLeaf ImCmdLoopbackEnum::no_loopback {0, "no-loopback"};
const Enum::YLeaf ImCmdLoopbackEnum::internal_loopback {1, "internal-loopback"};
const Enum::YLeaf ImCmdLoopbackEnum::external_loopback {2, "external-loopback"};
const Enum::YLeaf ImCmdLoopbackEnum::line_loopback {3, "line-loopback"};

const Enum::YLeaf StatsTypeContents::stats_type_single {100, "stats-type-single"};
const Enum::YLeaf StatsTypeContents::stats_type_variable {101, "stats-type-variable"};

const Enum::YLeaf SrpMgmtSrrNodeState::idle_srr_state {0, "idle-srr-state"};
const Enum::YLeaf SrpMgmtSrrNodeState::discovery_srr_state {1, "discovery-srr-state"};
const Enum::YLeaf SrpMgmtSrrNodeState::unknown_srr_state {2, "unknown-srr-state"};

const Enum::YLeaf ImAttrMedia::im_attr_media_other {0, "im-attr-media-other"};
const Enum::YLeaf ImAttrMedia::im_attr_media_unknown {1, "im-attr-media-unknown"};
const Enum::YLeaf ImAttrMedia::im_attr_media_aui {2, "im-attr-media-aui"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base5 {3, "im-attr-media-10base5"};
const Enum::YLeaf ImAttrMedia::im_attr_media_foirl {4, "im-attr-media-foirl"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base2 {5, "im-attr-media-10base2"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10broad36 {6, "im-attr-media-10broad36"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base {7, "im-attr-media-10base"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_thd {8, "im-attr-media-10base-thd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_tfd {9, "im-attr-media-10base-tfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_fp {10, "im-attr-media-10base-fp"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_fb {11, "im-attr-media-10base-fb"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_fl {12, "im-attr-media-10base-fl"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_flhd {13, "im-attr-media-10base-flhd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10base_flfd {14, "im-attr-media-10base-flfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_t4 {15, "im-attr-media-100base-t4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_tx {16, "im-attr-media-100base-tx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_txhd {17, "im-attr-media-100base-txhd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_txfd {18, "im-attr-media-100base-txfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_fx {19, "im-attr-media-100base-fx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_fxhd {20, "im-attr-media-100base-fxhd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_fxfd {21, "im-attr-media-100base-fxfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_ex {22, "im-attr-media-100base-ex"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_exhd {23, "im-attr-media-100base-exhd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_exfd {24, "im-attr-media-100base-exfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_t2 {25, "im-attr-media-100base-t2"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_t2hd {26, "im-attr-media-100base-t2hd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_t2fd {27, "im-attr-media-100base-t2fd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_x {28, "im-attr-media-1000base-x"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_xhdx {29, "im-attr-media-1000base-xhdx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_xfd {30, "im-attr-media-1000base-xfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_lx {31, "im-attr-media-1000base-lx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_lxhd {32, "im-attr-media-1000base-lxhd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_lxfdx {33, "im-attr-media-1000base-lxfdx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_sx {34, "im-attr-media-1000base-sx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_sxhd {35, "im-attr-media-1000base-sxhd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_sxfd {36, "im-attr-media-1000base-sxfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cx {37, "im-attr-media-1000base-cx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cxhdx {38, "im-attr-media-1000base-cxhdx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cxfd {39, "im-attr-media-1000base-cxfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base {40, "im-attr-media-1000base"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_thd {41, "im-attr-media-1000base-thd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_tfd {42, "im-attr-media-1000base-tfd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_x {43, "im-attr-media-10gbase-x"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_lx4 {44, "im-attr-media-10gbase-lx4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_r {45, "im-attr-media-10gbase-r"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_er {46, "im-attr-media-10gbase-er"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_lr {47, "im-attr-media-10gbase-lr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_sr {48, "im-attr-media-10gbase-sr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_w {49, "im-attr-media-10gbase-w"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_ew {50, "im-attr-media-10gbase-ew"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_lw {51, "im-attr-media-10gbase-lw"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_sw {52, "im-attr-media-10gbase-sw"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_zr {53, "im-attr-media-10gbase-zr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_802_9a {54, "im-attr-media-802-9a"};
const Enum::YLeaf ImAttrMedia::im_attr_media_rj45 {55, "im-attr-media-rj45"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_zx {56, "im-attr-media-1000base-zx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm {57, "im-attr-media-1000base-cwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1470 {58, "im-attr-media-1000base-cwdm-1470"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1490 {59, "im-attr-media-1000base-cwdm-1490"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1510 {60, "im-attr-media-1000base-cwdm-1510"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1530 {61, "im-attr-media-1000base-cwdm-1530"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1550 {62, "im-attr-media-1000base-cwdm-1550"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1570 {63, "im-attr-media-1000base-cwdm-1570"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1590 {64, "im-attr-media-1000base-cwdm-1590"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_cwdm_1610 {65, "im-attr-media-1000base-cwdm-1610"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm {66, "im-attr-media-10gbase-dwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_lr4 {67, "im-attr-media-100gbase-lr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm {68, "im-attr-media-1000base-dwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1533 {69, "im-attr-media-1000base-dwdm-1533"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1537 {70, "im-attr-media-1000base-dwdm-1537"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1541 {71, "im-attr-media-1000base-dwdm-1541"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1545 {72, "im-attr-media-1000base-dwdm-1545"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1549 {73, "im-attr-media-1000base-dwdm-1549"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1553 {74, "im-attr-media-1000base-dwdm-1553"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1557 {75, "im-attr-media-1000base-dwdm-1557"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1561 {76, "im-attr-media-1000base-dwdm-1561"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_lr4 {77, "im-attr-media-40gbase-lr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_er4 {78, "im-attr-media-40gbase-er4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_er4 {79, "im-attr-media-100gbase-er4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_ex {80, "im-attr-media-1000base-ex"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx10_d {81, "im-attr-media-1000base-bx10-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx10_u {82, "im-attr-media-1000base-bx10-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1561_42 {83, "im-attr-media-1000base-dwdm-1561-42"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1560_61 {84, "im-attr-media-1000base-dwdm-1560-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1559_79 {85, "im-attr-media-1000base-dwdm-1559-79"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1558_98 {86, "im-attr-media-1000base-dwdm-1558-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1558_17 {87, "im-attr-media-1000base-dwdm-1558-17"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1557_36 {88, "im-attr-media-1000base-dwdm-1557-36"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1556_55 {89, "im-attr-media-1000base-dwdm-1556-55"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1555_75 {90, "im-attr-media-1000base-dwdm-1555-75"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1554_94 {91, "im-attr-media-1000base-dwdm-1554-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1554_13 {92, "im-attr-media-1000base-dwdm-1554-13"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1553_33 {93, "im-attr-media-1000base-dwdm-1553-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1552_52 {94, "im-attr-media-1000base-dwdm-1552-52"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1551_72 {95, "im-attr-media-1000base-dwdm-1551-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1550_92 {96, "im-attr-media-1000base-dwdm-1550-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1550_12 {97, "im-attr-media-1000base-dwdm-1550-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1549_32 {98, "im-attr-media-1000base-dwdm-1549-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1548_51 {99, "im-attr-media-1000base-dwdm-1548-51"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1547_72 {100, "im-attr-media-1000base-dwdm-1547-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1546_92 {101, "im-attr-media-1000base-dwdm-1546-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1546_12 {102, "im-attr-media-1000base-dwdm-1546-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1545_32 {103, "im-attr-media-1000base-dwdm-1545-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1544_53 {104, "im-attr-media-1000base-dwdm-1544-53"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1543_73 {105, "im-attr-media-1000base-dwdm-1543-73"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1542_94 {106, "im-attr-media-1000base-dwdm-1542-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1542_14 {107, "im-attr-media-1000base-dwdm-1542-14"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1541_35 {108, "im-attr-media-1000base-dwdm-1541-35"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1540_56 {109, "im-attr-media-1000base-dwdm-1540-56"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1539_77 {110, "im-attr-media-1000base-dwdm-1539-77"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1538_98 {111, "im-attr-media-1000base-dwdm-1538-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1538_19 {112, "im-attr-media-1000base-dwdm-1538-19"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1537_40 {113, "im-attr-media-1000base-dwdm-1537-40"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1536_61 {114, "im-attr-media-1000base-dwdm-1536-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1535_82 {115, "im-attr-media-1000base-dwdm-1535-82"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1535_04 {116, "im-attr-media-1000base-dwdm-1535-04"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1534_25 {117, "im-attr-media-1000base-dwdm-1534-25"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1533_47 {118, "im-attr-media-1000base-dwdm-1533-47"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1532_68 {119, "im-attr-media-1000base-dwdm-1532-68"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1531_90 {120, "im-attr-media-1000base-dwdm-1531-90"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1531_12 {121, "im-attr-media-1000base-dwdm-1531-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_1530_33 {122, "im-attr-media-1000base-dwdm-1530-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dwdm_tunable {123, "im-attr-media-1000base-dwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1561_42 {124, "im-attr-media-10gbase-dwdm-1561-42"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1560_61 {125, "im-attr-media-10gbase-dwdm-1560-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1559_79 {126, "im-attr-media-10gbase-dwdm-1559-79"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1558_98 {127, "im-attr-media-10gbase-dwdm-1558-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1558_17 {128, "im-attr-media-10gbase-dwdm-1558-17"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1557_36 {129, "im-attr-media-10gbase-dwdm-1557-36"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1556_55 {130, "im-attr-media-10gbase-dwdm-1556-55"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1555_75 {131, "im-attr-media-10gbase-dwdm-1555-75"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1554_94 {132, "im-attr-media-10gbase-dwdm-1554-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1554_13 {133, "im-attr-media-10gbase-dwdm-1554-13"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1553_33 {134, "im-attr-media-10gbase-dwdm-1553-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1552_52 {135, "im-attr-media-10gbase-dwdm-1552-52"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1551_72 {136, "im-attr-media-10gbase-dwdm-1551-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1550_92 {137, "im-attr-media-10gbase-dwdm-1550-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1550_12 {138, "im-attr-media-10gbase-dwdm-1550-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1549_32 {139, "im-attr-media-10gbase-dwdm-1549-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1548_51 {140, "im-attr-media-10gbase-dwdm-1548-51"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1547_72 {141, "im-attr-media-10gbase-dwdm-1547-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1546_92 {142, "im-attr-media-10gbase-dwdm-1546-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1546_12 {143, "im-attr-media-10gbase-dwdm-1546-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1545_32 {144, "im-attr-media-10gbase-dwdm-1545-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1544_53 {145, "im-attr-media-10gbase-dwdm-1544-53"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1543_73 {146, "im-attr-media-10gbase-dwdm-1543-73"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1542_94 {147, "im-attr-media-10gbase-dwdm-1542-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1542_14 {148, "im-attr-media-10gbase-dwdm-1542-14"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1541_35 {149, "im-attr-media-10gbase-dwdm-1541-35"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1540_56 {150, "im-attr-media-10gbase-dwdm-1540-56"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1539_77 {151, "im-attr-media-10gbase-dwdm-1539-77"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1538_98 {152, "im-attr-media-10gbase-dwdm-1538-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1538_19 {153, "im-attr-media-10gbase-dwdm-1538-19"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1537_40 {154, "im-attr-media-10gbase-dwdm-1537-40"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1536_61 {155, "im-attr-media-10gbase-dwdm-1536-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1535_82 {156, "im-attr-media-10gbase-dwdm-1535-82"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1535_04 {157, "im-attr-media-10gbase-dwdm-1535-04"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1534_25 {158, "im-attr-media-10gbase-dwdm-1534-25"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1533_47 {159, "im-attr-media-10gbase-dwdm-1533-47"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1532_68 {160, "im-attr-media-10gbase-dwdm-1532-68"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1531_90 {161, "im-attr-media-10gbase-dwdm-1531-90"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1531_12 {162, "im-attr-media-10gbase-dwdm-1531-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_1530_33 {163, "im-attr-media-10gbase-dwdm-1530-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_dwdm_tunable {164, "im-attr-media-10gbase-dwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1561_42 {165, "im-attr-media-40gbase-dwdm-1561-42"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1560_61 {166, "im-attr-media-40gbase-dwdm-1560-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1559_79 {167, "im-attr-media-40gbase-dwdm-1559-79"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1558_98 {168, "im-attr-media-40gbase-dwdm-1558-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1558_17 {169, "im-attr-media-40gbase-dwdm-1558-17"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1557_36 {170, "im-attr-media-40gbase-dwdm-1557-36"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1556_55 {171, "im-attr-media-40gbase-dwdm-1556-55"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1555_75 {172, "im-attr-media-40gbase-dwdm-1555-75"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1554_94 {173, "im-attr-media-40gbase-dwdm-1554-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1554_13 {174, "im-attr-media-40gbase-dwdm-1554-13"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1553_33 {175, "im-attr-media-40gbase-dwdm-1553-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1552_52 {176, "im-attr-media-40gbase-dwdm-1552-52"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1551_72 {177, "im-attr-media-40gbase-dwdm-1551-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1550_92 {178, "im-attr-media-40gbase-dwdm-1550-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1550_12 {179, "im-attr-media-40gbase-dwdm-1550-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1549_32 {180, "im-attr-media-40gbase-dwdm-1549-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1548_51 {181, "im-attr-media-40gbase-dwdm-1548-51"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1547_72 {182, "im-attr-media-40gbase-dwdm-1547-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1546_92 {183, "im-attr-media-40gbase-dwdm-1546-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1546_12 {184, "im-attr-media-40gbase-dwdm-1546-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1545_32 {185, "im-attr-media-40gbase-dwdm-1545-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1544_53 {186, "im-attr-media-40gbase-dwdm-1544-53"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1543_73 {187, "im-attr-media-40gbase-dwdm-1543-73"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1542_94 {188, "im-attr-media-40gbase-dwdm-1542-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1542_14 {189, "im-attr-media-40gbase-dwdm-1542-14"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1541_35 {190, "im-attr-media-40gbase-dwdm-1541-35"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1540_56 {191, "im-attr-media-40gbase-dwdm-1540-56"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1539_77 {192, "im-attr-media-40gbase-dwdm-1539-77"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1538_98 {193, "im-attr-media-40gbase-dwdm-1538-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1538_19 {194, "im-attr-media-40gbase-dwdm-1538-19"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1537_40 {195, "im-attr-media-40gbase-dwdm-1537-40"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1536_61 {196, "im-attr-media-40gbase-dwdm-1536-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1535_82 {197, "im-attr-media-40gbase-dwdm-1535-82"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1535_04 {198, "im-attr-media-40gbase-dwdm-1535-04"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1534_25 {199, "im-attr-media-40gbase-dwdm-1534-25"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1533_47 {200, "im-attr-media-40gbase-dwdm-1533-47"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1532_68 {201, "im-attr-media-40gbase-dwdm-1532-68"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1531_90 {202, "im-attr-media-40gbase-dwdm-1531-90"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1531_12 {203, "im-attr-media-40gbase-dwdm-1531-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_1530_33 {204, "im-attr-media-40gbase-dwdm-1530-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_dwdm_tunable {205, "im-attr-media-40gbase-dwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1561_42 {206, "im-attr-media-100gbase-dwdm-1561-42"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1560_61 {207, "im-attr-media-100gbase-dwdm-1560-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1559_79 {208, "im-attr-media-100gbase-dwdm-1559-79"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1558_98 {209, "im-attr-media-100gbase-dwdm-1558-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1558_17 {210, "im-attr-media-100gbase-dwdm-1558-17"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1557_36 {211, "im-attr-media-100gbase-dwdm-1557-36"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1556_55 {212, "im-attr-media-100gbase-dwdm-1556-55"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1555_75 {213, "im-attr-media-100gbase-dwdm-1555-75"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1554_94 {214, "im-attr-media-100gbase-dwdm-1554-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1554_13 {215, "im-attr-media-100gbase-dwdm-1554-13"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1553_33 {216, "im-attr-media-100gbase-dwdm-1553-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1552_52 {217, "im-attr-media-100gbase-dwdm-1552-52"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1551_72 {218, "im-attr-media-100gbase-dwdm-1551-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1550_92 {219, "im-attr-media-100gbase-dwdm-1550-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1550_12 {220, "im-attr-media-100gbase-dwdm-1550-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1549_32 {221, "im-attr-media-100gbase-dwdm-1549-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1548_51 {222, "im-attr-media-100gbase-dwdm-1548-51"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1547_72 {223, "im-attr-media-100gbase-dwdm-1547-72"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1546_92 {224, "im-attr-media-100gbase-dwdm-1546-92"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1546_12 {225, "im-attr-media-100gbase-dwdm-1546-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1545_32 {226, "im-attr-media-100gbase-dwdm-1545-32"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1544_53 {227, "im-attr-media-100gbase-dwdm-1544-53"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1543_73 {228, "im-attr-media-100gbase-dwdm-1543-73"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1542_94 {229, "im-attr-media-100gbase-dwdm-1542-94"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1542_14 {230, "im-attr-media-100gbase-dwdm-1542-14"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1541_35 {231, "im-attr-media-100gbase-dwdm-1541-35"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1540_56 {232, "im-attr-media-100gbase-dwdm-1540-56"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1539_77 {233, "im-attr-media-100gbase-dwdm-1539-77"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1538_98 {234, "im-attr-media-100gbase-dwdm-1538-98"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1538_19 {235, "im-attr-media-100gbase-dwdm-1538-19"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1537_40 {236, "im-attr-media-100gbase-dwdm-1537-40"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1536_61 {237, "im-attr-media-100gbase-dwdm-1536-61"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1535_82 {238, "im-attr-media-100gbase-dwdm-1535-82"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1535_04 {239, "im-attr-media-100gbase-dwdm-1535-04"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1534_25 {240, "im-attr-media-100gbase-dwdm-1534-25"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1533_47 {241, "im-attr-media-100gbase-dwdm-1533-47"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1532_68 {242, "im-attr-media-100gbase-dwdm-1532-68"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1531_90 {243, "im-attr-media-100gbase-dwdm-1531-90"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1531_12 {244, "im-attr-media-100gbase-dwdm-1531-12"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_1530_33 {245, "im-attr-media-100gbase-dwdm-1530-33"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_dwdm_tunable {246, "im-attr-media-100gbase-dwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_kr4 {247, "im-attr-media-40gbase-kr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cr4 {248, "im-attr-media-40gbase-cr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_sr4 {249, "im-attr-media-40gbase-sr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_fr {250, "im-attr-media-40gbase-fr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cr10 {251, "im-attr-media-100gbase-cr10"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_sr10 {252, "im-attr-media-100gbase-sr10"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_csr4 {253, "im-attr-media-40gbase-csr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm {254, "im-attr-media-10gbase-cwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_tunable {255, "im-attr-media-10gbase-cwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1470 {256, "im-attr-media-10gbase-cwdm-1470"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1490 {257, "im-attr-media-10gbase-cwdm-1490"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1510 {258, "im-attr-media-10gbase-cwdm-1510"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1530 {259, "im-attr-media-10gbase-cwdm-1530"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1550 {260, "im-attr-media-10gbase-cwdm-1550"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1570 {261, "im-attr-media-10gbase-cwdm-1570"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1590 {262, "im-attr-media-10gbase-cwdm-1590"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cwdm_1610 {263, "im-attr-media-10gbase-cwdm-1610"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm {264, "im-attr-media-40gbase-cwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_tunable {265, "im-attr-media-40gbase-cwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1470 {266, "im-attr-media-40gbase-cwdm-1470"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1490 {267, "im-attr-media-40gbase-cwdm-1490"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1510 {268, "im-attr-media-40gbase-cwdm-1510"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1530 {269, "im-attr-media-40gbase-cwdm-1530"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1550 {270, "im-attr-media-40gbase-cwdm-1550"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1570 {271, "im-attr-media-40gbase-cwdm-1570"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1590 {272, "im-attr-media-40gbase-cwdm-1590"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_cwdm_1610 {273, "im-attr-media-40gbase-cwdm-1610"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm {274, "im-attr-media-100gbase-cwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_tunable {275, "im-attr-media-100gbase-cwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1470 {276, "im-attr-media-100gbase-cwdm-1470"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1490 {277, "im-attr-media-100gbase-cwdm-1490"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1510 {278, "im-attr-media-100gbase-cwdm-1510"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1530 {279, "im-attr-media-100gbase-cwdm-1530"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1550 {280, "im-attr-media-100gbase-cwdm-1550"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1570 {281, "im-attr-media-100gbase-cwdm-1570"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1590 {282, "im-attr-media-100gbase-cwdm-1590"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm_1610 {283, "im-attr-media-100gbase-cwdm-1610"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_elpb {284, "im-attr-media-40gbase-elpb"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_elpb {285, "im-attr-media-100gbase-elpb"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_lr10 {286, "im-attr-media-100gbase-lr10"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase {287, "im-attr-media-40gbase"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_kp4 {288, "im-attr-media-100gbase-kp4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_kr4 {289, "im-attr-media-100gbase-kr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_lrm {290, "im-attr-media-10gbase-lrm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_cx4 {291, "im-attr-media-10gbase-cx4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase {292, "im-attr-media-10gbase"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_kx4 {293, "im-attr-media-10gbase-kx4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_kr {294, "im-attr-media-10gbase-kr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_pr {295, "im-attr-media-10gbase-pr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_lx {296, "im-attr-media-100base-lx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100base_zx {297, "im-attr-media-100base-zx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx_d {298, "im-attr-media-1000base-bx-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx_u {299, "im-attr-media-1000base-bx-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx20_d {300, "im-attr-media-1000base-bx20-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx20_u {301, "im-attr-media-1000base-bx20-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx40_d {302, "im-attr-media-1000base-bx40-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx40_da {303, "im-attr-media-1000base-bx40-da"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx40_u {304, "im-attr-media-1000base-bx40-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx80_d {305, "im-attr-media-1000base-bx80-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx80_u {306, "im-attr-media-1000base-bx80-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx120_d {307, "im-attr-media-1000base-bx120-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_bx120_u {308, "im-attr-media-1000base-bx120-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx_d {309, "im-attr-media-10gbase-bx-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx_u {310, "im-attr-media-10gbase-bx-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx10_d {311, "im-attr-media-10gbase-bx10-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx10_u {312, "im-attr-media-10gbase-bx10-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx20_d {313, "im-attr-media-10gbase-bx20-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx20_u {314, "im-attr-media-10gbase-bx20-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx40_d {315, "im-attr-media-10gbase-bx40-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx40_u {316, "im-attr-media-10gbase-bx40-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx80_d {317, "im-attr-media-10gbase-bx80-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx80_u {318, "im-attr-media-10gbase-bx80-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx120_d {319, "im-attr-media-10gbase-bx120-d"};
const Enum::YLeaf ImAttrMedia::im_attr_media_10gbase_bx120_u {320, "im-attr-media-10gbase-bx120-u"};
const Enum::YLeaf ImAttrMedia::im_attr_media_1000base_dr_lx {321, "im-attr-media-1000base-dr-lx"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_er4l {322, "im-attr-media-100gbase-er4l"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_sr4 {323, "im-attr-media-100gbase-sr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_sr_bd {324, "im-attr-media-40gbase-sr-bd"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_cr {325, "im-attr-media-25gbase-cr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_cr_s {326, "im-attr-media-25gbase-cr-s"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_kr {327, "im-attr-media-25gbase-kr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_kr_s {328, "im-attr-media-25gbase-kr-s"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_r {329, "im-attr-media-25gbase-r"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_sr {330, "im-attr-media-25gbase-sr"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_dwdm {331, "im-attr-media-25gbase-dwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_dwdm_tunable {332, "im-attr-media-25gbase-dwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_cwdm {333, "im-attr-media-25gbase-cwdm"};
const Enum::YLeaf ImAttrMedia::im_attr_media_25gbase_cwdm_tunable {334, "im-attr-media-25gbase-cwdm-tunable"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_psm4 {335, "im-attr-media-100gbase-psm4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_er10 {336, "im-attr-media-100gbase-er10"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_er10l {337, "im-attr-media-100gbase-er10l"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_acc {338, "im-attr-media-100gbase-acc"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_aoc {339, "im-attr-media-100gbase-aoc"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cwdm4 {340, "im-attr-media-100gbase-cwdm4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_40gbase_psm4 {341, "im-attr-media-40gbase-psm4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_cr4 {342, "im-attr-media-100gbase-cr4"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_act_loop {343, "im-attr-media-100gbase-act-loop"};
const Enum::YLeaf ImAttrMedia::im_attr_media_100gbase_pas_loop {344, "im-attr-media-100gbase-pas-loop"};


}
}

