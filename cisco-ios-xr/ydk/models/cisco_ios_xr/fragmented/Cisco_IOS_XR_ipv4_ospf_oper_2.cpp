
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-information";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    dead_interval{YType::uint32, "dead-interval"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_address{YType::str, "designated-router-address"},
    designated_router_id{YType::str, "designated-router-id"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    interface_address{YType::str, "interface-address"},
    interface_area{YType::str, "interface-area"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_priority{YType::uint8, "interface-priority"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_router_id{YType::str, "interface-router-id"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_state{YType::enumeration, "interface-state"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ip_mtu{YType::uint16, "ip-mtu"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    network_type{YType::enumeration, "network-type"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    passive_interface{YType::boolean, "passive-interface"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    srlg{YType::uint32, "srlg"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    wait_interval{YType::uint32, "wait-interval"}
    	,
    active_interface(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface>())
	,interface_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation>())
{
    active_interface->parent = this;

    interface_bfd_information->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_address.is_set
	|| backup_designated_router_id.is_set
	|| cfg_cost_fallback.is_set
	|| configured_demand_circuit.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| cost_fallback_active.is_set
	|| dead_interval.is_set
	|| designated_router.is_set
	|| designated_router_address.is_set
	|| designated_router_id.is_set
	|| fast_detect_hold_down_time.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| fast_reroute_type.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| interface_address.is_set
	|| interface_area.is_set
	|| interface_bandwidth.is_set
	|| interface_cost_fallback.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| interface_demand_circuit.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_last_nsf.is_set
	|| interface_ldp_sync.is_set
	|| interface_line_state.is_set
	|| interface_link_cost.is_set
	|| interface_lsa_filter.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_nsf.is_set
	|| interface_nsf_enabled.is_set
	|| interface_priority.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_router_id.is_set
	|| interface_sid.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_sid_php_off.is_set
	|| interface_state.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_tunnel_flags.is_set
	|| interfaceis_madj.is_set
	|| ip_mtu.is_set
	|| is_loopback_stub_network.is_set
	|| maximum_packet_size.is_set
	|| network_lsa_flush_timer.is_set
	|| network_type.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ospf_interface_state.is_set
	|| passive_interface.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| transmission_delay.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| wait_interval.is_set
	|| (active_interface !=  nullptr && active_interface->has_data())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(backup_designated_router.operation)
	|| is_set(backup_designated_router_address.operation)
	|| is_set(backup_designated_router_id.operation)
	|| is_set(cfg_cost_fallback.operation)
	|| is_set(configured_demand_circuit.operation)
	|| is_set(configured_ldp_sync.operation)
	|| is_set(configured_ldp_sync_igp_shortcuts.operation)
	|| is_set(cost_fallback_active.operation)
	|| is_set(dead_interval.operation)
	|| is_set(designated_router.operation)
	|| is_set(designated_router_address.operation)
	|| is_set(designated_router_id.operation)
	|| is_set(fast_detect_hold_down_time.operation)
	|| is_set(fast_detect_hold_down_time_remaining.operation)
	|| is_set(fast_reroute_topology_independent_lfa.operation)
	|| is_set(fast_reroute_type.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hello_interval_ms.operation)
	|| is_set(interface_ack_list_count.operation)
	|| is_set(interface_ack_list_high_watermark.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(interface_cost_fallback.operation)
	|| is_set(interface_dc_bitless_lsa_count.operation)
	|| is_set(interface_demand_circuit.operation)
	|| is_set(interface_fast_detect_hold_down.operation)
	|| is_set(interface_last_nsf.operation)
	|| is_set(interface_ldp_sync.operation)
	|| is_set(interface_line_state.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_lsa_filter.operation)
	|| is_set(interface_madj_count.operation)
	|| is_set(interface_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_nsf.operation)
	|| is_set(interface_nsf_enabled.operation)
	|| is_set(interface_priority.operation)
	|| is_set(interface_retransmission_interrval.operation)
	|| is_set(interface_router_id.operation)
	|| is_set(interface_sid.operation)
	|| is_set(interface_sid_n_flag_clear.operation)
	|| is_set(interface_sid_php_off.operation)
	|| is_set(interface_state.operation)
	|| is_set(interface_strict_spf_sid.operation)
	|| is_set(interface_strict_spf_sid_n_flag_clear.operation)
	|| is_set(interface_strict_spf_sid_php_off.operation)
	|| is_set(interface_tunnel_flags.operation)
	|| is_set(interfaceis_madj.operation)
	|| is_set(ip_mtu.operation)
	|| is_set(is_loopback_stub_network.operation)
	|| is_set(maximum_packet_size.operation)
	|| is_set(network_lsa_flush_timer.operation)
	|| is_set(network_type.operation)
	|| is_set(next_hello_time.operation)
	|| is_set(next_hello_time_ms.operation)
	|| is_set(ospf_interface_state.operation)
	|| is_set(passive_interface.operation)
	|| is_set(prefix_suppress_primary_addresses.operation)
	|| is_set(prefix_suppress_secondary_addresses.operation)
	|| is_set(registered_for_link_down_fast_detection.operation)
	|| is_set(srlg.operation)
	|| is_set(transmission_delay.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(ttl_security_hop_count.operation)
	|| is_set(wait_interval.operation)
	|| (active_interface !=  nullptr && active_interface->has_operation())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.operation)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.operation)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.operation)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.operation)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.operation)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.operation)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.operation)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.operation)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.operation)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.operation)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.operation)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.operation)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.operation)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.operation)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.operation)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.operation)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.operation)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.operation)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.operation)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.operation)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.operation)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.operation)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.operation)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.operation)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.operation)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.operation)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.operation)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.operation)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.operation)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.operation)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.operation)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.operation)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.operation)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.operation)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.operation)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.operation)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.operation)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.operation)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.operation)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.operation)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.operation)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.operation)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.operation)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.operation)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.operation)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.operation)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.operation)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.operation)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.operation)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.operation)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.operation)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.operation)) leaf_name_data.push_back(wait_interval.get_name_leafdata());

    auto srlg_name_datas = srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_name_datas.begin(), srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        for(auto const & c : interface_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        for(auto const & c : ipfrr_tiebreakers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipfrr_tiebreakers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms = value;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count = value;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses = value;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses = value;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
    }
    if(value_path == "srlg")
    {
        srlg.append(value);
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count = value;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "interface-bfd-information"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    flood_scan_length{YType::uint32, "flood-scan-length"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    keychain_id{YType::uint64, "keychain-id"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    md_keys{YType::uint16, "md-keys"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    wait_time{YType::uint32, "wait-time"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"}
{
    yang_name = "active-interface"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (auto const & leaf : md_keys.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return flood_scan_length.is_set
	|| interface_area_flood_index.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| interface_authentication_type.is_set
	|| interface_flood_length.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| keychain_id.is_set
	|| last_flood_time.is_set
	|| maximum_flood_length.is_set
	|| maximum_flood_time.is_set
	|| old_md5_key_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| wait_time.is_set
	|| youngest_md_key.is_set
	|| youngest_md_key_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (auto const & leaf : md_keys.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(flood_scan_length.operation)
	|| is_set(interface_area_flood_index.operation)
	|| is_set(interface_area_next_flood.operation)
	|| is_set(interface_area_next_flood_index.operation)
	|| is_set(interface_as_flood_index.operation)
	|| is_set(interface_as_next_flood.operation)
	|| is_set(interface_as_next_flood_index.operation)
	|| is_set(interface_authentication_type.operation)
	|| is_set(interface_flood_length.operation)
	|| is_set(interface_flood_pacing_timer.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(keychain_id.operation)
	|| is_set(last_flood_time.operation)
	|| is_set(maximum_flood_length.operation)
	|| is_set(maximum_flood_time.operation)
	|| is_set(md_keys.operation)
	|| is_set(old_md5_key_neighbor_count.operation)
	|| is_set(suppress_hello_count.operation)
	|| is_set(wait_time.operation)
	|| is_set(youngest_md_key.operation)
	|| is_set(youngest_md_key_id.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveInterface' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood_scan_length.is_set || is_set(flood_scan_length.operation)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.operation)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.operation)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.operation)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.operation)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.operation)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.operation)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.operation)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.operation)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.operation)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.operation)) leaf_name_data.push_back(keychain_id.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.operation)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.operation)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.operation)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.operation)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.operation)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.operation)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.operation)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());

    auto md_keys_name_datas = md_keys.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), md_keys_name_datas.begin(), md_keys_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "keychain-id")
    {
        keychain_id = value;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
    }
    if(value_path == "md-keys")
    {
        md_keys.append(value);
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{
    yang_name = "interface-neighbor"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| neighbor_bdr.is_set
	|| neighbor_dr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_neighbor_cost.operation)
	|| is_set(interface_neighbor_id.operation)
	|| is_set(neighbor_bdr.operation)
	|| is_set(neighbor_dr.operation)
	|| is_set(suppress_hello.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceNeighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.operation)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.operation)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.operation)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.operation)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.operation)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-madj"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_adj_neighbor_count.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(madj_area_id.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMadj' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.operation)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.operation)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_index{YType::uint32, "tiebreaker-index"},
    tiebreaker_type{YType::enumeration, "tiebreaker-type"}
{
    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_index.is_set
	|| tiebreaker_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_index.operation)
	|| is_set(tiebreaker_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrTiebreakers' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouters()
{
    yang_name = "border-routers"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::~BorderRouters()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::has_data() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::has_operation() const
{
    for (std::size_t index=0; index<border_router.size(); index++)
    {
        if(border_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-routers";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouters' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border-router")
    {
        for(auto const & c : border_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter>();
        c->parent = this;
        border_router.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : border_router)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouter()
    :
    border_router_id{YType::str, "border-router-id"},
    border_router_id_xr{YType::str, "border-router-id-xr"}
{
    yang_name = "border-router"; yang_parent_name = "border-routers";
}

Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::~BorderRouter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::has_data() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_data())
            return true;
    }
    return border_router_id.is_set
	|| border_router_id_xr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::has_operation() const
{
    for (std::size_t index=0; index<border_router_path.size(); index++)
    {
        if(border_router_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(border_router_id.operation)
	|| is_set(border_router_id_xr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router" <<"[border-router-id='" <<border_router_id <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouter' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_id.is_set || is_set(border_router_id.operation)) leaf_name_data.push_back(border_router_id.get_name_leafdata());
    if (border_router_id_xr.is_set || is_set(border_router_id_xr.operation)) leaf_name_data.push_back(border_router_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border-router-path")
    {
        for(auto const & c : border_router_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath>();
        c->parent = this;
        border_router_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : border_router_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border-router-id")
    {
        border_router_id = value;
    }
    if(value_path == "border-router-id-xr")
    {
        border_router_id_xr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::BorderRouterPath()
    :
    border_router_area_id{YType::str, "border-router-area-id"},
    border_router_next_hop{YType::str, "border-router-next-hop"},
    border_router_next_hop_interface_name{YType::str, "border-router-next-hop-interface-name"},
    border_router_route_metric{YType::uint32, "border-router-route-metric"},
    border_router_route_type{YType::enumeration, "border-router-route-type"},
    border_router_type{YType::enumeration, "border-router-type"},
    spf_version{YType::uint64, "spf-version"}
{
    yang_name = "border-router-path"; yang_parent_name = "border-router";
}

Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::~BorderRouterPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::has_data() const
{
    return border_router_area_id.is_set
	|| border_router_next_hop.is_set
	|| border_router_next_hop_interface_name.is_set
	|| border_router_route_metric.is_set
	|| border_router_route_type.is_set
	|| border_router_type.is_set
	|| spf_version.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::has_operation() const
{
    return is_set(operation)
	|| is_set(border_router_area_id.operation)
	|| is_set(border_router_next_hop.operation)
	|| is_set(border_router_next_hop_interface_name.operation)
	|| is_set(border_router_route_metric.operation)
	|| is_set(border_router_route_type.operation)
	|| is_set(border_router_type.operation)
	|| is_set(spf_version.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border-router-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BorderRouterPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border_router_area_id.is_set || is_set(border_router_area_id.operation)) leaf_name_data.push_back(border_router_area_id.get_name_leafdata());
    if (border_router_next_hop.is_set || is_set(border_router_next_hop.operation)) leaf_name_data.push_back(border_router_next_hop.get_name_leafdata());
    if (border_router_next_hop_interface_name.is_set || is_set(border_router_next_hop_interface_name.operation)) leaf_name_data.push_back(border_router_next_hop_interface_name.get_name_leafdata());
    if (border_router_route_metric.is_set || is_set(border_router_route_metric.operation)) leaf_name_data.push_back(border_router_route_metric.get_name_leafdata());
    if (border_router_route_type.is_set || is_set(border_router_route_type.operation)) leaf_name_data.push_back(border_router_route_type.get_name_leafdata());
    if (border_router_type.is_set || is_set(border_router_type.operation)) leaf_name_data.push_back(border_router_type.get_name_leafdata());
    if (spf_version.is_set || is_set(spf_version.operation)) leaf_name_data.push_back(spf_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::BorderRouters::BorderRouter::BorderRouterPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border-router-area-id")
    {
        border_router_area_id = value;
    }
    if(value_path == "border-router-next-hop")
    {
        border_router_next_hop = value;
    }
    if(value_path == "border-router-next-hop-interface-name")
    {
        border_router_next_hop_interface_name = value;
    }
    if(value_path == "border-router-route-metric")
    {
        border_router_route_metric = value;
    }
    if(value_path == "border-router-route-type")
    {
        border_router_route_type = value;
    }
    if(value_path == "border-router-type")
    {
        border_router_type = value;
    }
    if(value_path == "spf-version")
    {
        spf_version = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessInformation()
    :
    process_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas>())
	,process_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary>())
	,protocol_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas>())
	,protocol_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary>())
	,redistributions(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions>())
{
    process_areas->parent = this;

    process_summary->parent = this;

    protocol_areas->parent = this;

    protocol_summary->parent = this;

    redistributions->parent = this;

    yang_name = "process-information"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::~ProcessInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::has_data() const
{
    return (process_areas !=  nullptr && process_areas->has_data())
	|| (process_summary !=  nullptr && process_summary->has_data())
	|| (protocol_areas !=  nullptr && protocol_areas->has_data())
	|| (protocol_summary !=  nullptr && protocol_summary->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::has_operation() const
{
    return is_set(operation)
	|| (process_areas !=  nullptr && process_areas->has_operation())
	|| (process_summary !=  nullptr && process_summary->has_operation())
	|| (protocol_areas !=  nullptr && protocol_areas->has_operation())
	|| (protocol_summary !=  nullptr && protocol_summary->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-areas")
    {
        if(process_areas == nullptr)
        {
            process_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas>();
        }
        return process_areas;
    }

    if(child_yang_name == "process-summary")
    {
        if(process_summary == nullptr)
        {
            process_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary>();
        }
        return process_summary;
    }

    if(child_yang_name == "protocol-areas")
    {
        if(protocol_areas == nullptr)
        {
            protocol_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas>();
        }
        return protocol_areas;
    }

    if(child_yang_name == "protocol-summary")
    {
        if(protocol_summary == nullptr)
        {
            protocol_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary>();
        }
        return protocol_summary;
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions == nullptr)
        {
            redistributions = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions>();
        }
        return redistributions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(process_areas != nullptr)
    {
        children["process-areas"] = process_areas;
    }

    if(process_summary != nullptr)
    {
        children["process-summary"] = process_summary;
    }

    if(protocol_areas != nullptr)
    {
        children["protocol-areas"] = protocol_areas;
    }

    if(protocol_summary != nullptr)
    {
        children["protocol-summary"] = protocol_summary;
    }

    if(redistributions != nullptr)
    {
        children["redistributions"] = redistributions;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolAreas()
{
    yang_name = "protocol-areas"; yang_parent_name = "process-information";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::~ProtocolAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::has_data() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::has_operation() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-area")
    {
        for(auto const & c : protocol_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea>();
        c->parent = this;
        protocol_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolArea()
    :
    address{YType::str, "address"},
    area_id{YType::int32, "area-id"},
    protcol_area{YType::str, "protcol-area"},
    protocol_area_dist_list_in{YType::str, "protocol-area-dist-list-in"},
    protocol_mpls{YType::boolean, "protocol-mpls"}
{
    yang_name = "protocol-area"; yang_parent_name = "protocol-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::~ProtocolArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_data() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_data())
            return true;
    }
    return address.is_set
	|| area_id.is_set
	|| protcol_area.is_set
	|| protocol_area_dist_list_in.is_set
	|| protocol_mpls.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::has_operation() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(area_id.operation)
	|| is_set(protcol_area.operation)
	|| is_set(protocol_area_dist_list_in.operation)
	|| is_set(protocol_mpls.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (protcol_area.is_set || is_set(protcol_area.operation)) leaf_name_data.push_back(protcol_area.get_name_leafdata());
    if (protocol_area_dist_list_in.is_set || is_set(protocol_area_dist_list_in.operation)) leaf_name_data.push_back(protocol_area_dist_list_in.get_name_leafdata());
    if (protocol_mpls.is_set || is_set(protocol_mpls.operation)) leaf_name_data.push_back(protocol_mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-interface")
    {
        for(auto const & c : protocol_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface>();
        c->parent = this;
        protocol_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "protcol-area")
    {
        protcol_area = value;
    }
    if(value_path == "protocol-area-dist-list-in")
    {
        protocol_area_dist_list_in = value;
    }
    if(value_path == "protocol-mpls")
    {
        protocol_mpls = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::ProtocolInterface()
    :
    protocol_authentication_type{YType::enumeration, "protocol-authentication-type"},
    protocol_interface_dist_list_in{YType::str, "protocol-interface-dist-list-in"},
    protocol_interface_name{YType::str, "protocol-interface-name"}
{
    yang_name = "protocol-interface"; yang_parent_name = "protocol-area";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::~ProtocolInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_data() const
{
    return protocol_authentication_type.is_set
	|| protocol_interface_dist_list_in.is_set
	|| protocol_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_authentication_type.operation)
	|| is_set(protocol_interface_dist_list_in.operation)
	|| is_set(protocol_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-interface";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolInterface' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_authentication_type.is_set || is_set(protocol_authentication_type.operation)) leaf_name_data.push_back(protocol_authentication_type.get_name_leafdata());
    if (protocol_interface_dist_list_in.is_set || is_set(protocol_interface_dist_list_in.operation)) leaf_name_data.push_back(protocol_interface_dist_list_in.get_name_leafdata());
    if (protocol_interface_name.is_set || is_set(protocol_interface_name.operation)) leaf_name_data.push_back(protocol_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-authentication-type")
    {
        protocol_authentication_type = value;
    }
    if(value_path == "protocol-interface-dist-list-in")
    {
        protocol_interface_dist_list_in = value;
    }
    if(value_path == "protocol-interface-name")
    {
        protocol_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::ProtocolSummary()
    :
    administrative_distance_external{YType::uint32, "administrative-distance-external"},
    administrative_distance_inter_area{YType::uint32, "administrative-distance-inter-area"},
    dist_list_in{YType::str, "dist-list-in"},
    protocol_distance{YType::uint32, "protocol-distance"},
    protocol_nsf{YType::boolean, "protocol-nsf"},
    protocol_router_id{YType::str, "protocol-router-id"}
{
    yang_name = "protocol-summary"; yang_parent_name = "process-information";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::~ProtocolSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::has_data() const
{
    return administrative_distance_external.is_set
	|| administrative_distance_inter_area.is_set
	|| dist_list_in.is_set
	|| protocol_distance.is_set
	|| protocol_nsf.is_set
	|| protocol_router_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(administrative_distance_external.operation)
	|| is_set(administrative_distance_inter_area.operation)
	|| is_set(dist_list_in.operation)
	|| is_set(protocol_distance.operation)
	|| is_set(protocol_nsf.operation)
	|| is_set(protocol_router_id.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-summary";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_distance_external.is_set || is_set(administrative_distance_external.operation)) leaf_name_data.push_back(administrative_distance_external.get_name_leafdata());
    if (administrative_distance_inter_area.is_set || is_set(administrative_distance_inter_area.operation)) leaf_name_data.push_back(administrative_distance_inter_area.get_name_leafdata());
    if (dist_list_in.is_set || is_set(dist_list_in.operation)) leaf_name_data.push_back(dist_list_in.get_name_leafdata());
    if (protocol_distance.is_set || is_set(protocol_distance.operation)) leaf_name_data.push_back(protocol_distance.get_name_leafdata());
    if (protocol_nsf.is_set || is_set(protocol_nsf.operation)) leaf_name_data.push_back(protocol_nsf.get_name_leafdata());
    if (protocol_router_id.is_set || is_set(protocol_router_id.operation)) leaf_name_data.push_back(protocol_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProtocolSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external = value;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area = value;
    }
    if(value_path == "dist-list-in")
    {
        dist_list_in = value;
    }
    if(value_path == "protocol-distance")
    {
        protocol_distance = value;
    }
    if(value_path == "protocol-nsf")
    {
        protocol_nsf = value;
    }
    if(value_path == "protocol-router-id")
    {
        protocol_router_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistributions()
{
    yang_name = "redistributions"; yang_parent_name = "process-information";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::~Redistributions()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::has_data() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistributions' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution")
    {
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redistribution)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::Redistribution()
    :
    classless{YType::boolean, "classless"},
    metric{YType::uint32, "metric"},
    metric_flag{YType::boolean, "metric-flag"},
    nssa_only{YType::boolean, "nssa-only"},
    process_name{YType::str, "process-name"},
    protocol_name{YType::str, "protocol-name"}
    	,
    redistribution_protocol(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol>())
{
    redistribution_protocol->parent = this;

    yang_name = "redistribution"; yang_parent_name = "redistributions";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::~Redistribution()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::has_data() const
{
    return classless.is_set
	|| metric.is_set
	|| metric_flag.is_set
	|| nssa_only.is_set
	|| process_name.is_set
	|| protocol_name.is_set
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::has_operation() const
{
    return is_set(operation)
	|| is_set(classless.operation)
	|| is_set(metric.operation)
	|| is_set(metric_flag.operation)
	|| is_set(nssa_only.operation)
	|| is_set(process_name.operation)
	|| is_set(protocol_name.operation)
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classless.is_set || is_set(classless.operation)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_flag.is_set || is_set(metric_flag.operation)) leaf_name_data.push_back(metric_flag.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-protocol")
    {
        if(redistribution_protocol == nullptr)
        {
            redistribution_protocol = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol>();
        }
        return redistribution_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classless")
    {
        classless = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-flag")
    {
        metric_flag = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::RedistributionProtocol()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{
    yang_name = "redistribution-protocol"; yang_parent_name = "redistribution";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::~RedistributionProtocol()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_as_number.operation)
	|| is_set(connected_instance.operation)
	|| is_set(eigrp_as_number.operation)
	|| is_set(isis_instance_id.operation)
	|| is_set(ospf_process_id.operation)
	|| is_set(protocol_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-protocol";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributionProtocol' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as_number.is_set || is_set(bgp_as_number.operation)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.operation)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.operation)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.operation)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.operation)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessAreas()
{
    yang_name = "process-areas"; yang_parent_name = "process-information";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::~ProcessAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::has_data() const
{
    for (std::size_t index=0; index<process_area.size(); index++)
    {
        if(process_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::has_operation() const
{
    for (std::size_t index=0; index<process_area.size(); index++)
    {
        if(process_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-area")
    {
        for(auto const & c : process_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea>();
        c->parent = this;
        process_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::ProcessArea()
    :
    address{YType::str, "address"},
    area_adj_stag_num_nbr_forming{YType::uint16, "area-adj-stag-num-nbr-forming"},
    area_dc_bitless_lsa_count{YType::uint32, "area-dc-bitless-lsa-count"},
    area_id{YType::int32, "area-id"},
    area_id_string{YType::str, "area-id-string"},
    area_interface_count{YType::uint16, "area-interface-count"},
    area_lfa_interface_count{YType::uint32, "area-lfa-interface-count"},
    area_lfa_revision{YType::uint32, "area-lfa-revision"},
    area_lsa_checksum{YType::uint32, "area-lsa-checksum"},
    area_lsa_count{YType::uint32, "area-lsa-count"},
    area_nssa{YType::boolean, "area-nssa"},
    area_num_nbr_full{YType::uint16, "area-num-nbr-full"},
    area_opaque_lsa_checksum{YType::uint32, "area-opaque-lsa-checksum"},
    area_opaque_lsa_count{YType::uint32, "area-opaque-lsa-count"},
    area_per_prefix_lfa_interface_count{YType::uint32, "area-per-prefix-lfa-interface-count"},
    area_policy_in{YType::boolean, "area-policy-in"},
    area_policy_in_name{YType::str, "area-policy-in-name"},
    area_policy_out{YType::boolean, "area-policy-out"},
    area_policy_out_name{YType::str, "area-policy-out-name"},
    area_stub{YType::boolean, "area-stub"},
    area_total_stub{YType::boolean, "area-total-stub"},
    authentication_type{YType::enumeration, "authentication-type"},
    backbone_area_active{YType::boolean, "backbone-area-active"},
    dna_lsa_count{YType::uint32, "dna-lsa-count"},
    external_out{YType::boolean, "external-out"},
    flood_list_length{YType::uint32, "flood-list-length"},
    indication_lsa_count{YType::uint32, "indication-lsa-count"},
    nssa_default{YType::boolean, "nssa-default"},
    nssa_no_redistribution{YType::boolean, "nssa-no-redistribution"},
    nssa_translate{YType::boolean, "nssa-translate"},
    segment_routing{YType::uint32, "segment-routing"},
    spf_count{YType::uint32, "spf-count"},
    sr_microloop_avoidance_active{YType::boolean, "sr-microloop-avoidance-active"},
    sr_microloop_avoidance_event_type{YType::enumeration, "sr-microloop-avoidance-event-type"},
    sr_microloop_avoidance_far_end_id{YType::str, "sr-microloop-avoidance-far-end-id"},
    sr_microloop_avoidance_near_end_id{YType::str, "sr-microloop-avoidance-near-end-id"},
    sr_microloop_avoidance_pseudonode_id{YType::str, "sr-microloop-avoidance-pseudonode-id"},
    sr_strict_spf_cap{YType::boolean, "sr-strict-spf-cap"},
    sr_strict_spfsids_available{YType::boolean, "sr-strict-spfsids-available"},
    stub_default_cost{YType::uint16, "stub-default-cost"},
    summary_in{YType::boolean, "summary-in"},
    te_enabled{YType::boolean, "te-enabled"},
    te_topology_version{YType::uint32, "te-topology-version"}
{
    yang_name = "process-area"; yang_parent_name = "process-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::~ProcessArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::has_data() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_data())
            return true;
    }
    return address.is_set
	|| area_adj_stag_num_nbr_forming.is_set
	|| area_dc_bitless_lsa_count.is_set
	|| area_id.is_set
	|| area_id_string.is_set
	|| area_interface_count.is_set
	|| area_lfa_interface_count.is_set
	|| area_lfa_revision.is_set
	|| area_lsa_checksum.is_set
	|| area_lsa_count.is_set
	|| area_nssa.is_set
	|| area_num_nbr_full.is_set
	|| area_opaque_lsa_checksum.is_set
	|| area_opaque_lsa_count.is_set
	|| area_per_prefix_lfa_interface_count.is_set
	|| area_policy_in.is_set
	|| area_policy_in_name.is_set
	|| area_policy_out.is_set
	|| area_policy_out_name.is_set
	|| area_stub.is_set
	|| area_total_stub.is_set
	|| authentication_type.is_set
	|| backbone_area_active.is_set
	|| dna_lsa_count.is_set
	|| external_out.is_set
	|| flood_list_length.is_set
	|| indication_lsa_count.is_set
	|| nssa_default.is_set
	|| nssa_no_redistribution.is_set
	|| nssa_translate.is_set
	|| segment_routing.is_set
	|| spf_count.is_set
	|| sr_microloop_avoidance_active.is_set
	|| sr_microloop_avoidance_event_type.is_set
	|| sr_microloop_avoidance_far_end_id.is_set
	|| sr_microloop_avoidance_near_end_id.is_set
	|| sr_microloop_avoidance_pseudonode_id.is_set
	|| sr_strict_spf_cap.is_set
	|| sr_strict_spfsids_available.is_set
	|| stub_default_cost.is_set
	|| summary_in.is_set
	|| te_enabled.is_set
	|| te_topology_version.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::has_operation() const
{
    for (std::size_t index=0; index<area_range.size(); index++)
    {
        if(area_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(area_adj_stag_num_nbr_forming.operation)
	|| is_set(area_dc_bitless_lsa_count.operation)
	|| is_set(area_id.operation)
	|| is_set(area_id_string.operation)
	|| is_set(area_interface_count.operation)
	|| is_set(area_lfa_interface_count.operation)
	|| is_set(area_lfa_revision.operation)
	|| is_set(area_lsa_checksum.operation)
	|| is_set(area_lsa_count.operation)
	|| is_set(area_nssa.operation)
	|| is_set(area_num_nbr_full.operation)
	|| is_set(area_opaque_lsa_checksum.operation)
	|| is_set(area_opaque_lsa_count.operation)
	|| is_set(area_per_prefix_lfa_interface_count.operation)
	|| is_set(area_policy_in.operation)
	|| is_set(area_policy_in_name.operation)
	|| is_set(area_policy_out.operation)
	|| is_set(area_policy_out_name.operation)
	|| is_set(area_stub.operation)
	|| is_set(area_total_stub.operation)
	|| is_set(authentication_type.operation)
	|| is_set(backbone_area_active.operation)
	|| is_set(dna_lsa_count.operation)
	|| is_set(external_out.operation)
	|| is_set(flood_list_length.operation)
	|| is_set(indication_lsa_count.operation)
	|| is_set(nssa_default.operation)
	|| is_set(nssa_no_redistribution.operation)
	|| is_set(nssa_translate.operation)
	|| is_set(segment_routing.operation)
	|| is_set(spf_count.operation)
	|| is_set(sr_microloop_avoidance_active.operation)
	|| is_set(sr_microloop_avoidance_event_type.operation)
	|| is_set(sr_microloop_avoidance_far_end_id.operation)
	|| is_set(sr_microloop_avoidance_near_end_id.operation)
	|| is_set(sr_microloop_avoidance_pseudonode_id.operation)
	|| is_set(sr_strict_spf_cap.operation)
	|| is_set(sr_strict_spfsids_available.operation)
	|| is_set(stub_default_cost.operation)
	|| is_set(summary_in.operation)
	|| is_set(te_enabled.operation)
	|| is_set(te_topology_version.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (area_adj_stag_num_nbr_forming.is_set || is_set(area_adj_stag_num_nbr_forming.operation)) leaf_name_data.push_back(area_adj_stag_num_nbr_forming.get_name_leafdata());
    if (area_dc_bitless_lsa_count.is_set || is_set(area_dc_bitless_lsa_count.operation)) leaf_name_data.push_back(area_dc_bitless_lsa_count.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_string.is_set || is_set(area_id_string.operation)) leaf_name_data.push_back(area_id_string.get_name_leafdata());
    if (area_interface_count.is_set || is_set(area_interface_count.operation)) leaf_name_data.push_back(area_interface_count.get_name_leafdata());
    if (area_lfa_interface_count.is_set || is_set(area_lfa_interface_count.operation)) leaf_name_data.push_back(area_lfa_interface_count.get_name_leafdata());
    if (area_lfa_revision.is_set || is_set(area_lfa_revision.operation)) leaf_name_data.push_back(area_lfa_revision.get_name_leafdata());
    if (area_lsa_checksum.is_set || is_set(area_lsa_checksum.operation)) leaf_name_data.push_back(area_lsa_checksum.get_name_leafdata());
    if (area_lsa_count.is_set || is_set(area_lsa_count.operation)) leaf_name_data.push_back(area_lsa_count.get_name_leafdata());
    if (area_nssa.is_set || is_set(area_nssa.operation)) leaf_name_data.push_back(area_nssa.get_name_leafdata());
    if (area_num_nbr_full.is_set || is_set(area_num_nbr_full.operation)) leaf_name_data.push_back(area_num_nbr_full.get_name_leafdata());
    if (area_opaque_lsa_checksum.is_set || is_set(area_opaque_lsa_checksum.operation)) leaf_name_data.push_back(area_opaque_lsa_checksum.get_name_leafdata());
    if (area_opaque_lsa_count.is_set || is_set(area_opaque_lsa_count.operation)) leaf_name_data.push_back(area_opaque_lsa_count.get_name_leafdata());
    if (area_per_prefix_lfa_interface_count.is_set || is_set(area_per_prefix_lfa_interface_count.operation)) leaf_name_data.push_back(area_per_prefix_lfa_interface_count.get_name_leafdata());
    if (area_policy_in.is_set || is_set(area_policy_in.operation)) leaf_name_data.push_back(area_policy_in.get_name_leafdata());
    if (area_policy_in_name.is_set || is_set(area_policy_in_name.operation)) leaf_name_data.push_back(area_policy_in_name.get_name_leafdata());
    if (area_policy_out.is_set || is_set(area_policy_out.operation)) leaf_name_data.push_back(area_policy_out.get_name_leafdata());
    if (area_policy_out_name.is_set || is_set(area_policy_out_name.operation)) leaf_name_data.push_back(area_policy_out_name.get_name_leafdata());
    if (area_stub.is_set || is_set(area_stub.operation)) leaf_name_data.push_back(area_stub.get_name_leafdata());
    if (area_total_stub.is_set || is_set(area_total_stub.operation)) leaf_name_data.push_back(area_total_stub.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (backbone_area_active.is_set || is_set(backbone_area_active.operation)) leaf_name_data.push_back(backbone_area_active.get_name_leafdata());
    if (dna_lsa_count.is_set || is_set(dna_lsa_count.operation)) leaf_name_data.push_back(dna_lsa_count.get_name_leafdata());
    if (external_out.is_set || is_set(external_out.operation)) leaf_name_data.push_back(external_out.get_name_leafdata());
    if (flood_list_length.is_set || is_set(flood_list_length.operation)) leaf_name_data.push_back(flood_list_length.get_name_leafdata());
    if (indication_lsa_count.is_set || is_set(indication_lsa_count.operation)) leaf_name_data.push_back(indication_lsa_count.get_name_leafdata());
    if (nssa_default.is_set || is_set(nssa_default.operation)) leaf_name_data.push_back(nssa_default.get_name_leafdata());
    if (nssa_no_redistribution.is_set || is_set(nssa_no_redistribution.operation)) leaf_name_data.push_back(nssa_no_redistribution.get_name_leafdata());
    if (nssa_translate.is_set || is_set(nssa_translate.operation)) leaf_name_data.push_back(nssa_translate.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (spf_count.is_set || is_set(spf_count.operation)) leaf_name_data.push_back(spf_count.get_name_leafdata());
    if (sr_microloop_avoidance_active.is_set || is_set(sr_microloop_avoidance_active.operation)) leaf_name_data.push_back(sr_microloop_avoidance_active.get_name_leafdata());
    if (sr_microloop_avoidance_event_type.is_set || is_set(sr_microloop_avoidance_event_type.operation)) leaf_name_data.push_back(sr_microloop_avoidance_event_type.get_name_leafdata());
    if (sr_microloop_avoidance_far_end_id.is_set || is_set(sr_microloop_avoidance_far_end_id.operation)) leaf_name_data.push_back(sr_microloop_avoidance_far_end_id.get_name_leafdata());
    if (sr_microloop_avoidance_near_end_id.is_set || is_set(sr_microloop_avoidance_near_end_id.operation)) leaf_name_data.push_back(sr_microloop_avoidance_near_end_id.get_name_leafdata());
    if (sr_microloop_avoidance_pseudonode_id.is_set || is_set(sr_microloop_avoidance_pseudonode_id.operation)) leaf_name_data.push_back(sr_microloop_avoidance_pseudonode_id.get_name_leafdata());
    if (sr_strict_spf_cap.is_set || is_set(sr_strict_spf_cap.operation)) leaf_name_data.push_back(sr_strict_spf_cap.get_name_leafdata());
    if (sr_strict_spfsids_available.is_set || is_set(sr_strict_spfsids_available.operation)) leaf_name_data.push_back(sr_strict_spfsids_available.get_name_leafdata());
    if (stub_default_cost.is_set || is_set(stub_default_cost.operation)) leaf_name_data.push_back(stub_default_cost.get_name_leafdata());
    if (summary_in.is_set || is_set(summary_in.operation)) leaf_name_data.push_back(summary_in.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.operation)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (te_topology_version.is_set || is_set(te_topology_version.operation)) leaf_name_data.push_back(te_topology_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-range")
    {
        for(auto const & c : area_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange>();
        c->parent = this;
        area_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "area-adj-stag-num-nbr-forming")
    {
        area_adj_stag_num_nbr_forming = value;
    }
    if(value_path == "area-dc-bitless-lsa-count")
    {
        area_dc_bitless_lsa_count = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-id-string")
    {
        area_id_string = value;
    }
    if(value_path == "area-interface-count")
    {
        area_interface_count = value;
    }
    if(value_path == "area-lfa-interface-count")
    {
        area_lfa_interface_count = value;
    }
    if(value_path == "area-lfa-revision")
    {
        area_lfa_revision = value;
    }
    if(value_path == "area-lsa-checksum")
    {
        area_lsa_checksum = value;
    }
    if(value_path == "area-lsa-count")
    {
        area_lsa_count = value;
    }
    if(value_path == "area-nssa")
    {
        area_nssa = value;
    }
    if(value_path == "area-num-nbr-full")
    {
        area_num_nbr_full = value;
    }
    if(value_path == "area-opaque-lsa-checksum")
    {
        area_opaque_lsa_checksum = value;
    }
    if(value_path == "area-opaque-lsa-count")
    {
        area_opaque_lsa_count = value;
    }
    if(value_path == "area-per-prefix-lfa-interface-count")
    {
        area_per_prefix_lfa_interface_count = value;
    }
    if(value_path == "area-policy-in")
    {
        area_policy_in = value;
    }
    if(value_path == "area-policy-in-name")
    {
        area_policy_in_name = value;
    }
    if(value_path == "area-policy-out")
    {
        area_policy_out = value;
    }
    if(value_path == "area-policy-out-name")
    {
        area_policy_out_name = value;
    }
    if(value_path == "area-stub")
    {
        area_stub = value;
    }
    if(value_path == "area-total-stub")
    {
        area_total_stub = value;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "backbone-area-active")
    {
        backbone_area_active = value;
    }
    if(value_path == "dna-lsa-count")
    {
        dna_lsa_count = value;
    }
    if(value_path == "external-out")
    {
        external_out = value;
    }
    if(value_path == "flood-list-length")
    {
        flood_list_length = value;
    }
    if(value_path == "indication-lsa-count")
    {
        indication_lsa_count = value;
    }
    if(value_path == "nssa-default")
    {
        nssa_default = value;
    }
    if(value_path == "nssa-no-redistribution")
    {
        nssa_no_redistribution = value;
    }
    if(value_path == "nssa-translate")
    {
        nssa_translate = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "spf-count")
    {
        spf_count = value;
    }
    if(value_path == "sr-microloop-avoidance-active")
    {
        sr_microloop_avoidance_active = value;
    }
    if(value_path == "sr-microloop-avoidance-event-type")
    {
        sr_microloop_avoidance_event_type = value;
    }
    if(value_path == "sr-microloop-avoidance-far-end-id")
    {
        sr_microloop_avoidance_far_end_id = value;
    }
    if(value_path == "sr-microloop-avoidance-near-end-id")
    {
        sr_microloop_avoidance_near_end_id = value;
    }
    if(value_path == "sr-microloop-avoidance-pseudonode-id")
    {
        sr_microloop_avoidance_pseudonode_id = value;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap = value;
    }
    if(value_path == "sr-strict-spfsids-available")
    {
        sr_strict_spfsids_available = value;
    }
    if(value_path == "stub-default-cost")
    {
        stub_default_cost = value;
    }
    if(value_path == "summary-in")
    {
        summary_in = value;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
    }
    if(value_path == "te-topology-version")
    {
        te_topology_version = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::AreaRange()
    :
    advertise_flag{YType::boolean, "advertise-flag"},
    cost{YType::uint32, "cost"},
    range_mask{YType::str, "range-mask"},
    range_prefix{YType::str, "range-prefix"}
{
    yang_name = "area-range"; yang_parent_name = "process-area";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::~AreaRange()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_data() const
{
    return advertise_flag.is_set
	|| cost.is_set
	|| range_mask.is_set
	|| range_prefix.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_flag.operation)
	|| is_set(cost.operation)
	|| is_set(range_mask.operation)
	|| is_set(range_prefix.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-range";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaRange' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_flag.is_set || is_set(advertise_flag.operation)) leaf_name_data.push_back(advertise_flag.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (range_mask.is_set || is_set(range_mask.operation)) leaf_name_data.push_back(range_mask.get_name_leafdata());
    if (range_prefix.is_set || is_set(range_prefix.operation)) leaf_name_data.push_back(range_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-flag")
    {
        advertise_flag = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "range-mask")
    {
        range_mask = value;
    }
    if(value_path == "range-prefix")
    {
        range_prefix = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::ProcessSummary()
    :
    adj_stag_init_num_nbr{YType::uint16, "adj-stag-init-num-nbr"},
    adj_stag_max_num_nbr{YType::uint16, "adj-stag-max-num-nbr"},
    adj_stag_num_nbr_forming{YType::uint16, "adj-stag-num-nbr-forming"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    area_border_router{YType::boolean, "area-border-router"},
    area_count{YType::uint16, "area-count"},
    as_border_router{YType::boolean, "as-border-router"},
    as_dc_bitless_lsa_count{YType::uint32, "as-dc-bitless-lsa-count"},
    as_dna_lsa_count{YType::uint32, "as-dna-lsa-count"},
    as_lsa_checksum{YType::uint32, "as-lsa-checksum"},
    as_lsa_count{YType::uint32, "as-lsa-count"},
    as_lsa_flood_list_length{YType::uint32, "as-lsa-flood-list-length"},
    context_name{YType::str, "context-name"},
    graceful_shutdown_retention_time{YType::uint32, "graceful-shutdown-retention-time"},
    graceful_shutdown_state{YType::enumeration, "graceful-shutdown-state"},
    if_flood_pacing_interval{YType::uint16, "if-flood-pacing-interval"},
    if_retrans_pacing_interval{YType::uint16, "if-retrans-pacing-interval"},
    igp_intact_on{YType::boolean, "igp-intact-on"},
    last_nsf_time{YType::uint32, "last-nsf-time"},
    lsa_hold_time{YType::uint32, "lsa-hold-time"},
    lsa_maximum_time{YType::uint32, "lsa-maximum-time"},
    lsa_refresh_interval{YType::uint32, "lsa-refresh-interval"},
    lsa_start_time{YType::int32, "lsa-start-time"},
    lsd_bound{YType::boolean, "lsd-bound"},
    lsd_connected{YType::boolean, "lsd-connected"},
    lsd_connection_revision{YType::uint32, "lsd-connection-revision"},
    lsd_registered{YType::boolean, "lsd-registered"},
    max_lsa_enabled{YType::boolean, "max-lsa-enabled"},
    max_lsa_ignore_count{YType::uint32, "max-lsa-ignore-count"},
    max_lsa_ignore_limit{YType::uint32, "max-lsa-ignore-limit"},
    max_lsa_ignore_time{YType::uint32, "max-lsa-ignore-time"},
    max_lsa_ignore_timer{YType::uint32, "max-lsa-ignore-timer"},
    max_lsa_limit{YType::uint32, "max-lsa-limit"},
    max_lsa_reset_time{YType::uint32, "max-lsa-reset-time"},
    max_lsa_reset_timer{YType::uint32, "max-lsa-reset-timer"},
    max_lsa_treshold{YType::uint32, "max-lsa-treshold"},
    max_lsa_warning_only{YType::boolean, "max-lsa-warning-only"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    maximum_metric_abr_off_buffer_time{YType::uint32, "maximum-metric-abr-off-buffer-time"},
    maximum_metric_abr_off_mode{YType::boolean, "maximum-metric-abr-off-mode"},
    maximum_metric_abr_off_reasons{YType::enumeration, "maximum-metric-abr-off-reasons"},
    maximum_metric_set_reason{YType::enumeration, "maximum-metric-set-reason"},
    maximum_metric_start{YType::boolean, "maximum-metric-start"},
    maximum_metric_start_timer{YType::uint32, "maximum-metric-start-timer"},
    microloop_avoidance_active{YType::boolean, "microloop-avoidance-active"},
    microloop_avoidance_delay{YType::uint32, "microloop-avoidance-delay"},
    microloop_avoidance_delay_expiry{YType::uint32, "microloop-avoidance-delay-expiry"},
    microloop_avoidance_type{YType::enumeration, "microloop-avoidance-type"},
    minimum_lsa_arrival_interval{YType::uint16, "minimum-lsa-arrival-interval"},
    minimum_lsa_arrival_interval_u32{YType::uint32, "minimum-lsa-arrival-interval-u32"},
    minimum_lsa_interval{YType::uint16, "minimum-lsa-interval"},
    minimum_lsa_interval_u32{YType::uint32, "minimum-lsa-interval-u32"},
    non_self_lsa_count{YType::uint32, "non-self-lsa-count"},
    normal_area_count{YType::uint16, "normal-area-count"},
    nsf_enabled{YType::boolean, "nsf-enabled"},
    nsf_time{YType::uint32, "nsf-time"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_switchover_on_restart{YType::boolean, "nsr-switchover-on-restart"},
    nssa_area_count{YType::uint16, "nssa-area-count"},
    number_nbrs_full{YType::uint16, "number-nbrs-full"},
    opaque_capable{YType::boolean, "opaque-capable"},
    opaque_lsa_checksum{YType::uint32, "opaque-lsa-checksum"},
    opaque_lsa_count{YType::uint32, "opaque-lsa-count"},
    redistribution_limit{YType::uint32, "redistribution-limit"},
    redistribution_limit_warn{YType::boolean, "redistribution-limit-warn"},
    redistribution_threshold{YType::uint32, "redistribution-threshold"},
    role{YType::uint32, "role"},
    role_standby{YType::boolean, "role-standby"},
    router_id{YType::str, "router-id"},
    snmp_trap_enabled{YType::boolean, "snmp-trap-enabled"},
    spf_hold_time{YType::uint16, "spf-hold-time"},
    spf_hold_time_u32{YType::uint32, "spf-hold-time-u32"},
    spf_maximum_time{YType::uint16, "spf-maximum-time"},
    spf_maximum_time_u32{YType::uint32, "spf-maximum-time-u32"},
    spf_prefix_priority{YType::boolean, "spf-prefix-priority"},
    spf_prefix_priority_route_policy{YType::str, "spf-prefix-priority-route-policy"},
    spf_start_time{YType::uint16, "spf-start-time"},
    spf_start_time_u32{YType::uint32, "spf-start-time-u32"},
    sr_strict_spf_cap{YType::boolean, "sr-strict-spf-cap"},
    srgb_configured{YType::boolean, "srgb-configured"},
    srgb_end{YType::uint32, "srgb-end"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_status{YType::enumeration, "srgb-status"},
    stub_area_count{YType::uint16, "stub-area-count"},
    table_prefix_limit_reached{YType::boolean, "table-prefix-limit-reached"},
    tos_options{YType::uint8, "tos-options"},
    ucmp{YType::boolean, "ucmp"},
    ucmp_delay{YType::uint32, "ucmp-delay"},
    ucmp_prefix_list{YType::str, "ucmp-prefix-list"},
    ucmp_variance{YType::int32, "ucmp-variance"},
    vrf_lite_enabled{YType::boolean, "vrf-lite-enabled"}
    	,
    domain_id(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId>())
{
    domain_id->parent = this;

    yang_name = "process-summary"; yang_parent_name = "process-information";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::~ProcessSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::has_data() const
{
    for (std::size_t index=0; index<maximum_metric.size(); index++)
    {
        if(maximum_metric[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return adj_stag_init_num_nbr.is_set
	|| adj_stag_max_num_nbr.is_set
	|| adj_stag_num_nbr_forming.is_set
	|| adj_stagger_enabled.is_set
	|| area_border_router.is_set
	|| area_count.is_set
	|| as_border_router.is_set
	|| as_dc_bitless_lsa_count.is_set
	|| as_dna_lsa_count.is_set
	|| as_lsa_checksum.is_set
	|| as_lsa_count.is_set
	|| as_lsa_flood_list_length.is_set
	|| context_name.is_set
	|| graceful_shutdown_retention_time.is_set
	|| graceful_shutdown_state.is_set
	|| if_flood_pacing_interval.is_set
	|| if_retrans_pacing_interval.is_set
	|| igp_intact_on.is_set
	|| last_nsf_time.is_set
	|| lsa_hold_time.is_set
	|| lsa_maximum_time.is_set
	|| lsa_refresh_interval.is_set
	|| lsa_start_time.is_set
	|| lsd_bound.is_set
	|| lsd_connected.is_set
	|| lsd_connection_revision.is_set
	|| lsd_registered.is_set
	|| max_lsa_enabled.is_set
	|| max_lsa_ignore_count.is_set
	|| max_lsa_ignore_limit.is_set
	|| max_lsa_ignore_time.is_set
	|| max_lsa_ignore_timer.is_set
	|| max_lsa_limit.is_set
	|| max_lsa_reset_time.is_set
	|| max_lsa_reset_timer.is_set
	|| max_lsa_treshold.is_set
	|| max_lsa_warning_only.is_set
	|| maximum_interfaces.is_set
	|| maximum_metric_abr_off_buffer_time.is_set
	|| maximum_metric_abr_off_mode.is_set
	|| maximum_metric_abr_off_reasons.is_set
	|| maximum_metric_set_reason.is_set
	|| maximum_metric_start.is_set
	|| maximum_metric_start_timer.is_set
	|| microloop_avoidance_active.is_set
	|| microloop_avoidance_delay.is_set
	|| microloop_avoidance_delay_expiry.is_set
	|| microloop_avoidance_type.is_set
	|| minimum_lsa_arrival_interval.is_set
	|| minimum_lsa_arrival_interval_u32.is_set
	|| minimum_lsa_interval.is_set
	|| minimum_lsa_interval_u32.is_set
	|| non_self_lsa_count.is_set
	|| normal_area_count.is_set
	|| nsf_enabled.is_set
	|| nsf_time.is_set
	|| nsr_enabled.is_set
	|| nsr_switchover_on_restart.is_set
	|| nssa_area_count.is_set
	|| number_nbrs_full.is_set
	|| opaque_capable.is_set
	|| opaque_lsa_checksum.is_set
	|| opaque_lsa_count.is_set
	|| redistribution_limit.is_set
	|| redistribution_limit_warn.is_set
	|| redistribution_threshold.is_set
	|| role.is_set
	|| role_standby.is_set
	|| router_id.is_set
	|| snmp_trap_enabled.is_set
	|| spf_hold_time.is_set
	|| spf_hold_time_u32.is_set
	|| spf_maximum_time.is_set
	|| spf_maximum_time_u32.is_set
	|| spf_prefix_priority.is_set
	|| spf_prefix_priority_route_policy.is_set
	|| spf_start_time.is_set
	|| spf_start_time_u32.is_set
	|| sr_strict_spf_cap.is_set
	|| srgb_configured.is_set
	|| srgb_end.is_set
	|| srgb_start.is_set
	|| srgb_status.is_set
	|| stub_area_count.is_set
	|| table_prefix_limit_reached.is_set
	|| tos_options.is_set
	|| ucmp.is_set
	|| ucmp_delay.is_set
	|| ucmp_prefix_list.is_set
	|| ucmp_variance.is_set
	|| vrf_lite_enabled.is_set
	|| (domain_id !=  nullptr && domain_id->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::has_operation() const
{
    for (std::size_t index=0; index<maximum_metric.size(); index++)
    {
        if(maximum_metric[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(adj_stag_init_num_nbr.operation)
	|| is_set(adj_stag_max_num_nbr.operation)
	|| is_set(adj_stag_num_nbr_forming.operation)
	|| is_set(adj_stagger_enabled.operation)
	|| is_set(area_border_router.operation)
	|| is_set(area_count.operation)
	|| is_set(as_border_router.operation)
	|| is_set(as_dc_bitless_lsa_count.operation)
	|| is_set(as_dna_lsa_count.operation)
	|| is_set(as_lsa_checksum.operation)
	|| is_set(as_lsa_count.operation)
	|| is_set(as_lsa_flood_list_length.operation)
	|| is_set(context_name.operation)
	|| is_set(graceful_shutdown_retention_time.operation)
	|| is_set(graceful_shutdown_state.operation)
	|| is_set(if_flood_pacing_interval.operation)
	|| is_set(if_retrans_pacing_interval.operation)
	|| is_set(igp_intact_on.operation)
	|| is_set(last_nsf_time.operation)
	|| is_set(lsa_hold_time.operation)
	|| is_set(lsa_maximum_time.operation)
	|| is_set(lsa_refresh_interval.operation)
	|| is_set(lsa_start_time.operation)
	|| is_set(lsd_bound.operation)
	|| is_set(lsd_connected.operation)
	|| is_set(lsd_connection_revision.operation)
	|| is_set(lsd_registered.operation)
	|| is_set(max_lsa_enabled.operation)
	|| is_set(max_lsa_ignore_count.operation)
	|| is_set(max_lsa_ignore_limit.operation)
	|| is_set(max_lsa_ignore_time.operation)
	|| is_set(max_lsa_ignore_timer.operation)
	|| is_set(max_lsa_limit.operation)
	|| is_set(max_lsa_reset_time.operation)
	|| is_set(max_lsa_reset_timer.operation)
	|| is_set(max_lsa_treshold.operation)
	|| is_set(max_lsa_warning_only.operation)
	|| is_set(maximum_interfaces.operation)
	|| is_set(maximum_metric_abr_off_buffer_time.operation)
	|| is_set(maximum_metric_abr_off_mode.operation)
	|| is_set(maximum_metric_abr_off_reasons.operation)
	|| is_set(maximum_metric_set_reason.operation)
	|| is_set(maximum_metric_start.operation)
	|| is_set(maximum_metric_start_timer.operation)
	|| is_set(microloop_avoidance_active.operation)
	|| is_set(microloop_avoidance_delay.operation)
	|| is_set(microloop_avoidance_delay_expiry.operation)
	|| is_set(microloop_avoidance_type.operation)
	|| is_set(minimum_lsa_arrival_interval.operation)
	|| is_set(minimum_lsa_arrival_interval_u32.operation)
	|| is_set(minimum_lsa_interval.operation)
	|| is_set(minimum_lsa_interval_u32.operation)
	|| is_set(non_self_lsa_count.operation)
	|| is_set(normal_area_count.operation)
	|| is_set(nsf_enabled.operation)
	|| is_set(nsf_time.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_switchover_on_restart.operation)
	|| is_set(nssa_area_count.operation)
	|| is_set(number_nbrs_full.operation)
	|| is_set(opaque_capable.operation)
	|| is_set(opaque_lsa_checksum.operation)
	|| is_set(opaque_lsa_count.operation)
	|| is_set(redistribution_limit.operation)
	|| is_set(redistribution_limit_warn.operation)
	|| is_set(redistribution_threshold.operation)
	|| is_set(role.operation)
	|| is_set(role_standby.operation)
	|| is_set(router_id.operation)
	|| is_set(snmp_trap_enabled.operation)
	|| is_set(spf_hold_time.operation)
	|| is_set(spf_hold_time_u32.operation)
	|| is_set(spf_maximum_time.operation)
	|| is_set(spf_maximum_time_u32.operation)
	|| is_set(spf_prefix_priority.operation)
	|| is_set(spf_prefix_priority_route_policy.operation)
	|| is_set(spf_start_time.operation)
	|| is_set(spf_start_time_u32.operation)
	|| is_set(sr_strict_spf_cap.operation)
	|| is_set(srgb_configured.operation)
	|| is_set(srgb_end.operation)
	|| is_set(srgb_start.operation)
	|| is_set(srgb_status.operation)
	|| is_set(stub_area_count.operation)
	|| is_set(table_prefix_limit_reached.operation)
	|| is_set(tos_options.operation)
	|| is_set(ucmp.operation)
	|| is_set(ucmp_delay.operation)
	|| is_set(ucmp_prefix_list.operation)
	|| is_set(ucmp_variance.operation)
	|| is_set(vrf_lite_enabled.operation)
	|| (domain_id !=  nullptr && domain_id->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-summary";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_stag_init_num_nbr.is_set || is_set(adj_stag_init_num_nbr.operation)) leaf_name_data.push_back(adj_stag_init_num_nbr.get_name_leafdata());
    if (adj_stag_max_num_nbr.is_set || is_set(adj_stag_max_num_nbr.operation)) leaf_name_data.push_back(adj_stag_max_num_nbr.get_name_leafdata());
    if (adj_stag_num_nbr_forming.is_set || is_set(adj_stag_num_nbr_forming.operation)) leaf_name_data.push_back(adj_stag_num_nbr_forming.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.operation)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (area_border_router.is_set || is_set(area_border_router.operation)) leaf_name_data.push_back(area_border_router.get_name_leafdata());
    if (area_count.is_set || is_set(area_count.operation)) leaf_name_data.push_back(area_count.get_name_leafdata());
    if (as_border_router.is_set || is_set(as_border_router.operation)) leaf_name_data.push_back(as_border_router.get_name_leafdata());
    if (as_dc_bitless_lsa_count.is_set || is_set(as_dc_bitless_lsa_count.operation)) leaf_name_data.push_back(as_dc_bitless_lsa_count.get_name_leafdata());
    if (as_dna_lsa_count.is_set || is_set(as_dna_lsa_count.operation)) leaf_name_data.push_back(as_dna_lsa_count.get_name_leafdata());
    if (as_lsa_checksum.is_set || is_set(as_lsa_checksum.operation)) leaf_name_data.push_back(as_lsa_checksum.get_name_leafdata());
    if (as_lsa_count.is_set || is_set(as_lsa_count.operation)) leaf_name_data.push_back(as_lsa_count.get_name_leafdata());
    if (as_lsa_flood_list_length.is_set || is_set(as_lsa_flood_list_length.operation)) leaf_name_data.push_back(as_lsa_flood_list_length.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.operation)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (graceful_shutdown_retention_time.is_set || is_set(graceful_shutdown_retention_time.operation)) leaf_name_data.push_back(graceful_shutdown_retention_time.get_name_leafdata());
    if (graceful_shutdown_state.is_set || is_set(graceful_shutdown_state.operation)) leaf_name_data.push_back(graceful_shutdown_state.get_name_leafdata());
    if (if_flood_pacing_interval.is_set || is_set(if_flood_pacing_interval.operation)) leaf_name_data.push_back(if_flood_pacing_interval.get_name_leafdata());
    if (if_retrans_pacing_interval.is_set || is_set(if_retrans_pacing_interval.operation)) leaf_name_data.push_back(if_retrans_pacing_interval.get_name_leafdata());
    if (igp_intact_on.is_set || is_set(igp_intact_on.operation)) leaf_name_data.push_back(igp_intact_on.get_name_leafdata());
    if (last_nsf_time.is_set || is_set(last_nsf_time.operation)) leaf_name_data.push_back(last_nsf_time.get_name_leafdata());
    if (lsa_hold_time.is_set || is_set(lsa_hold_time.operation)) leaf_name_data.push_back(lsa_hold_time.get_name_leafdata());
    if (lsa_maximum_time.is_set || is_set(lsa_maximum_time.operation)) leaf_name_data.push_back(lsa_maximum_time.get_name_leafdata());
    if (lsa_refresh_interval.is_set || is_set(lsa_refresh_interval.operation)) leaf_name_data.push_back(lsa_refresh_interval.get_name_leafdata());
    if (lsa_start_time.is_set || is_set(lsa_start_time.operation)) leaf_name_data.push_back(lsa_start_time.get_name_leafdata());
    if (lsd_bound.is_set || is_set(lsd_bound.operation)) leaf_name_data.push_back(lsd_bound.get_name_leafdata());
    if (lsd_connected.is_set || is_set(lsd_connected.operation)) leaf_name_data.push_back(lsd_connected.get_name_leafdata());
    if (lsd_connection_revision.is_set || is_set(lsd_connection_revision.operation)) leaf_name_data.push_back(lsd_connection_revision.get_name_leafdata());
    if (lsd_registered.is_set || is_set(lsd_registered.operation)) leaf_name_data.push_back(lsd_registered.get_name_leafdata());
    if (max_lsa_enabled.is_set || is_set(max_lsa_enabled.operation)) leaf_name_data.push_back(max_lsa_enabled.get_name_leafdata());
    if (max_lsa_ignore_count.is_set || is_set(max_lsa_ignore_count.operation)) leaf_name_data.push_back(max_lsa_ignore_count.get_name_leafdata());
    if (max_lsa_ignore_limit.is_set || is_set(max_lsa_ignore_limit.operation)) leaf_name_data.push_back(max_lsa_ignore_limit.get_name_leafdata());
    if (max_lsa_ignore_time.is_set || is_set(max_lsa_ignore_time.operation)) leaf_name_data.push_back(max_lsa_ignore_time.get_name_leafdata());
    if (max_lsa_ignore_timer.is_set || is_set(max_lsa_ignore_timer.operation)) leaf_name_data.push_back(max_lsa_ignore_timer.get_name_leafdata());
    if (max_lsa_limit.is_set || is_set(max_lsa_limit.operation)) leaf_name_data.push_back(max_lsa_limit.get_name_leafdata());
    if (max_lsa_reset_time.is_set || is_set(max_lsa_reset_time.operation)) leaf_name_data.push_back(max_lsa_reset_time.get_name_leafdata());
    if (max_lsa_reset_timer.is_set || is_set(max_lsa_reset_timer.operation)) leaf_name_data.push_back(max_lsa_reset_timer.get_name_leafdata());
    if (max_lsa_treshold.is_set || is_set(max_lsa_treshold.operation)) leaf_name_data.push_back(max_lsa_treshold.get_name_leafdata());
    if (max_lsa_warning_only.is_set || is_set(max_lsa_warning_only.operation)) leaf_name_data.push_back(max_lsa_warning_only.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.operation)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (maximum_metric_abr_off_buffer_time.is_set || is_set(maximum_metric_abr_off_buffer_time.operation)) leaf_name_data.push_back(maximum_metric_abr_off_buffer_time.get_name_leafdata());
    if (maximum_metric_abr_off_mode.is_set || is_set(maximum_metric_abr_off_mode.operation)) leaf_name_data.push_back(maximum_metric_abr_off_mode.get_name_leafdata());
    if (maximum_metric_abr_off_reasons.is_set || is_set(maximum_metric_abr_off_reasons.operation)) leaf_name_data.push_back(maximum_metric_abr_off_reasons.get_name_leafdata());
    if (maximum_metric_set_reason.is_set || is_set(maximum_metric_set_reason.operation)) leaf_name_data.push_back(maximum_metric_set_reason.get_name_leafdata());
    if (maximum_metric_start.is_set || is_set(maximum_metric_start.operation)) leaf_name_data.push_back(maximum_metric_start.get_name_leafdata());
    if (maximum_metric_start_timer.is_set || is_set(maximum_metric_start_timer.operation)) leaf_name_data.push_back(maximum_metric_start_timer.get_name_leafdata());
    if (microloop_avoidance_active.is_set || is_set(microloop_avoidance_active.operation)) leaf_name_data.push_back(microloop_avoidance_active.get_name_leafdata());
    if (microloop_avoidance_delay.is_set || is_set(microloop_avoidance_delay.operation)) leaf_name_data.push_back(microloop_avoidance_delay.get_name_leafdata());
    if (microloop_avoidance_delay_expiry.is_set || is_set(microloop_avoidance_delay_expiry.operation)) leaf_name_data.push_back(microloop_avoidance_delay_expiry.get_name_leafdata());
    if (microloop_avoidance_type.is_set || is_set(microloop_avoidance_type.operation)) leaf_name_data.push_back(microloop_avoidance_type.get_name_leafdata());
    if (minimum_lsa_arrival_interval.is_set || is_set(minimum_lsa_arrival_interval.operation)) leaf_name_data.push_back(minimum_lsa_arrival_interval.get_name_leafdata());
    if (minimum_lsa_arrival_interval_u32.is_set || is_set(minimum_lsa_arrival_interval_u32.operation)) leaf_name_data.push_back(minimum_lsa_arrival_interval_u32.get_name_leafdata());
    if (minimum_lsa_interval.is_set || is_set(minimum_lsa_interval.operation)) leaf_name_data.push_back(minimum_lsa_interval.get_name_leafdata());
    if (minimum_lsa_interval_u32.is_set || is_set(minimum_lsa_interval_u32.operation)) leaf_name_data.push_back(minimum_lsa_interval_u32.get_name_leafdata());
    if (non_self_lsa_count.is_set || is_set(non_self_lsa_count.operation)) leaf_name_data.push_back(non_self_lsa_count.get_name_leafdata());
    if (normal_area_count.is_set || is_set(normal_area_count.operation)) leaf_name_data.push_back(normal_area_count.get_name_leafdata());
    if (nsf_enabled.is_set || is_set(nsf_enabled.operation)) leaf_name_data.push_back(nsf_enabled.get_name_leafdata());
    if (nsf_time.is_set || is_set(nsf_time.operation)) leaf_name_data.push_back(nsf_time.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_switchover_on_restart.is_set || is_set(nsr_switchover_on_restart.operation)) leaf_name_data.push_back(nsr_switchover_on_restart.get_name_leafdata());
    if (nssa_area_count.is_set || is_set(nssa_area_count.operation)) leaf_name_data.push_back(nssa_area_count.get_name_leafdata());
    if (number_nbrs_full.is_set || is_set(number_nbrs_full.operation)) leaf_name_data.push_back(number_nbrs_full.get_name_leafdata());
    if (opaque_capable.is_set || is_set(opaque_capable.operation)) leaf_name_data.push_back(opaque_capable.get_name_leafdata());
    if (opaque_lsa_checksum.is_set || is_set(opaque_lsa_checksum.operation)) leaf_name_data.push_back(opaque_lsa_checksum.get_name_leafdata());
    if (opaque_lsa_count.is_set || is_set(opaque_lsa_count.operation)) leaf_name_data.push_back(opaque_lsa_count.get_name_leafdata());
    if (redistribution_limit.is_set || is_set(redistribution_limit.operation)) leaf_name_data.push_back(redistribution_limit.get_name_leafdata());
    if (redistribution_limit_warn.is_set || is_set(redistribution_limit_warn.operation)) leaf_name_data.push_back(redistribution_limit_warn.get_name_leafdata());
    if (redistribution_threshold.is_set || is_set(redistribution_threshold.operation)) leaf_name_data.push_back(redistribution_threshold.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (role_standby.is_set || is_set(role_standby.operation)) leaf_name_data.push_back(role_standby.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmp_trap_enabled.is_set || is_set(snmp_trap_enabled.operation)) leaf_name_data.push_back(snmp_trap_enabled.get_name_leafdata());
    if (spf_hold_time.is_set || is_set(spf_hold_time.operation)) leaf_name_data.push_back(spf_hold_time.get_name_leafdata());
    if (spf_hold_time_u32.is_set || is_set(spf_hold_time_u32.operation)) leaf_name_data.push_back(spf_hold_time_u32.get_name_leafdata());
    if (spf_maximum_time.is_set || is_set(spf_maximum_time.operation)) leaf_name_data.push_back(spf_maximum_time.get_name_leafdata());
    if (spf_maximum_time_u32.is_set || is_set(spf_maximum_time_u32.operation)) leaf_name_data.push_back(spf_maximum_time_u32.get_name_leafdata());
    if (spf_prefix_priority.is_set || is_set(spf_prefix_priority.operation)) leaf_name_data.push_back(spf_prefix_priority.get_name_leafdata());
    if (spf_prefix_priority_route_policy.is_set || is_set(spf_prefix_priority_route_policy.operation)) leaf_name_data.push_back(spf_prefix_priority_route_policy.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.operation)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (spf_start_time_u32.is_set || is_set(spf_start_time_u32.operation)) leaf_name_data.push_back(spf_start_time_u32.get_name_leafdata());
    if (sr_strict_spf_cap.is_set || is_set(sr_strict_spf_cap.operation)) leaf_name_data.push_back(sr_strict_spf_cap.get_name_leafdata());
    if (srgb_configured.is_set || is_set(srgb_configured.operation)) leaf_name_data.push_back(srgb_configured.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.operation)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.operation)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_status.is_set || is_set(srgb_status.operation)) leaf_name_data.push_back(srgb_status.get_name_leafdata());
    if (stub_area_count.is_set || is_set(stub_area_count.operation)) leaf_name_data.push_back(stub_area_count.get_name_leafdata());
    if (table_prefix_limit_reached.is_set || is_set(table_prefix_limit_reached.operation)) leaf_name_data.push_back(table_prefix_limit_reached.get_name_leafdata());
    if (tos_options.is_set || is_set(tos_options.operation)) leaf_name_data.push_back(tos_options.get_name_leafdata());
    if (ucmp.is_set || is_set(ucmp.operation)) leaf_name_data.push_back(ucmp.get_name_leafdata());
    if (ucmp_delay.is_set || is_set(ucmp_delay.operation)) leaf_name_data.push_back(ucmp_delay.get_name_leafdata());
    if (ucmp_prefix_list.is_set || is_set(ucmp_prefix_list.operation)) leaf_name_data.push_back(ucmp_prefix_list.get_name_leafdata());
    if (ucmp_variance.is_set || is_set(ucmp_variance.operation)) leaf_name_data.push_back(ucmp_variance.get_name_leafdata());
    if (vrf_lite_enabled.is_set || is_set(vrf_lite_enabled.operation)) leaf_name_data.push_back(vrf_lite_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-id")
    {
        if(domain_id == nullptr)
        {
            domain_id = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId>();
        }
        return domain_id;
    }

    if(child_yang_name == "maximum-metric")
    {
        for(auto const & c : maximum_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric>();
        c->parent = this;
        maximum_metric.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribution")
    {
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution>();
        c->parent = this;
        redistribution.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain_id != nullptr)
    {
        children["domain-id"] = domain_id;
    }

    for (auto const & c : maximum_metric)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : redistribution)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adj-stag-init-num-nbr")
    {
        adj_stag_init_num_nbr = value;
    }
    if(value_path == "adj-stag-max-num-nbr")
    {
        adj_stag_max_num_nbr = value;
    }
    if(value_path == "adj-stag-num-nbr-forming")
    {
        adj_stag_num_nbr_forming = value;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
    }
    if(value_path == "area-border-router")
    {
        area_border_router = value;
    }
    if(value_path == "area-count")
    {
        area_count = value;
    }
    if(value_path == "as-border-router")
    {
        as_border_router = value;
    }
    if(value_path == "as-dc-bitless-lsa-count")
    {
        as_dc_bitless_lsa_count = value;
    }
    if(value_path == "as-dna-lsa-count")
    {
        as_dna_lsa_count = value;
    }
    if(value_path == "as-lsa-checksum")
    {
        as_lsa_checksum = value;
    }
    if(value_path == "as-lsa-count")
    {
        as_lsa_count = value;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length = value;
    }
    if(value_path == "context-name")
    {
        context_name = value;
    }
    if(value_path == "graceful-shutdown-retention-time")
    {
        graceful_shutdown_retention_time = value;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state = value;
    }
    if(value_path == "if-flood-pacing-interval")
    {
        if_flood_pacing_interval = value;
    }
    if(value_path == "if-retrans-pacing-interval")
    {
        if_retrans_pacing_interval = value;
    }
    if(value_path == "igp-intact-on")
    {
        igp_intact_on = value;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time = value;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time = value;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time = value;
    }
    if(value_path == "lsa-refresh-interval")
    {
        lsa_refresh_interval = value;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time = value;
    }
    if(value_path == "lsd-bound")
    {
        lsd_bound = value;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected = value;
    }
    if(value_path == "lsd-connection-revision")
    {
        lsd_connection_revision = value;
    }
    if(value_path == "lsd-registered")
    {
        lsd_registered = value;
    }
    if(value_path == "max-lsa-enabled")
    {
        max_lsa_enabled = value;
    }
    if(value_path == "max-lsa-ignore-count")
    {
        max_lsa_ignore_count = value;
    }
    if(value_path == "max-lsa-ignore-limit")
    {
        max_lsa_ignore_limit = value;
    }
    if(value_path == "max-lsa-ignore-time")
    {
        max_lsa_ignore_time = value;
    }
    if(value_path == "max-lsa-ignore-timer")
    {
        max_lsa_ignore_timer = value;
    }
    if(value_path == "max-lsa-limit")
    {
        max_lsa_limit = value;
    }
    if(value_path == "max-lsa-reset-time")
    {
        max_lsa_reset_time = value;
    }
    if(value_path == "max-lsa-reset-timer")
    {
        max_lsa_reset_timer = value;
    }
    if(value_path == "max-lsa-treshold")
    {
        max_lsa_treshold = value;
    }
    if(value_path == "max-lsa-warning-only")
    {
        max_lsa_warning_only = value;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
    }
    if(value_path == "maximum-metric-abr-off-buffer-time")
    {
        maximum_metric_abr_off_buffer_time = value;
    }
    if(value_path == "maximum-metric-abr-off-mode")
    {
        maximum_metric_abr_off_mode = value;
    }
    if(value_path == "maximum-metric-abr-off-reasons")
    {
        maximum_metric_abr_off_reasons = value;
    }
    if(value_path == "maximum-metric-set-reason")
    {
        maximum_metric_set_reason = value;
    }
    if(value_path == "maximum-metric-start")
    {
        maximum_metric_start = value;
    }
    if(value_path == "maximum-metric-start-timer")
    {
        maximum_metric_start_timer = value;
    }
    if(value_path == "microloop-avoidance-active")
    {
        microloop_avoidance_active = value;
    }
    if(value_path == "microloop-avoidance-delay")
    {
        microloop_avoidance_delay = value;
    }
    if(value_path == "microloop-avoidance-delay-expiry")
    {
        microloop_avoidance_delay_expiry = value;
    }
    if(value_path == "microloop-avoidance-type")
    {
        microloop_avoidance_type = value;
    }
    if(value_path == "minimum-lsa-arrival-interval")
    {
        minimum_lsa_arrival_interval = value;
    }
    if(value_path == "minimum-lsa-arrival-interval-u32")
    {
        minimum_lsa_arrival_interval_u32 = value;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval = value;
    }
    if(value_path == "minimum-lsa-interval-u32")
    {
        minimum_lsa_interval_u32 = value;
    }
    if(value_path == "non-self-lsa-count")
    {
        non_self_lsa_count = value;
    }
    if(value_path == "normal-area-count")
    {
        normal_area_count = value;
    }
    if(value_path == "nsf-enabled")
    {
        nsf_enabled = value;
    }
    if(value_path == "nsf-time")
    {
        nsf_time = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-switchover-on-restart")
    {
        nsr_switchover_on_restart = value;
    }
    if(value_path == "nssa-area-count")
    {
        nssa_area_count = value;
    }
    if(value_path == "number-nbrs-full")
    {
        number_nbrs_full = value;
    }
    if(value_path == "opaque-capable")
    {
        opaque_capable = value;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum = value;
    }
    if(value_path == "opaque-lsa-count")
    {
        opaque_lsa_count = value;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit = value;
    }
    if(value_path == "redistribution-limit-warn")
    {
        redistribution_limit_warn = value;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "role-standby")
    {
        role_standby = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled = value;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time = value;
    }
    if(value_path == "spf-hold-time-u32")
    {
        spf_hold_time_u32 = value;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time = value;
    }
    if(value_path == "spf-maximum-time-u32")
    {
        spf_maximum_time_u32 = value;
    }
    if(value_path == "spf-prefix-priority")
    {
        spf_prefix_priority = value;
    }
    if(value_path == "spf-prefix-priority-route-policy")
    {
        spf_prefix_priority_route_policy = value;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
    }
    if(value_path == "spf-start-time-u32")
    {
        spf_start_time_u32 = value;
    }
    if(value_path == "sr-strict-spf-cap")
    {
        sr_strict_spf_cap = value;
    }
    if(value_path == "srgb-configured")
    {
        srgb_configured = value;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
    }
    if(value_path == "srgb-status")
    {
        srgb_status = value;
    }
    if(value_path == "stub-area-count")
    {
        stub_area_count = value;
    }
    if(value_path == "table-prefix-limit-reached")
    {
        table_prefix_limit_reached = value;
    }
    if(value_path == "tos-options")
    {
        tos_options = value;
    }
    if(value_path == "ucmp")
    {
        ucmp = value;
    }
    if(value_path == "ucmp-delay")
    {
        ucmp_delay = value;
    }
    if(value_path == "ucmp-prefix-list")
    {
        ucmp_prefix_list = value;
    }
    if(value_path == "ucmp-variance")
    {
        ucmp_variance = value;
    }
    if(value_path == "vrf-lite-enabled")
    {
        vrf_lite_enabled = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId>())
{
    primary_domain_id->parent = this;

    yang_name = "domain-id"; yang_parent_name = "process-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::~DomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainId' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id == nullptr)
        {
            primary_domain_id = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId>();
        }
        return primary_domain_id;
    }

    if(child_yang_name == "secondary-domain-id")
    {
        for(auto const & c : secondary_domain_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary_domain_id != nullptr)
    {
        children["primary-domain-id"] = primary_domain_id;
    }

    for (auto const & c : secondary_domain_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{
    yang_name = "primary-domain-id"; yang_parent_name = "domain-id";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_type.operation)
	|| is_set(domain_id_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryDomainId' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.operation)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{
    yang_name = "secondary-domain-id"; yang_parent_name = "domain-id";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_type.operation)
	|| is_set(domain_id_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryDomainId' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.operation)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetric()
    :
    max_metric_enabled{YType::boolean, "max-metric-enabled"},
    max_metric_reason{YType::uint8, "max-metric-reason"},
    maximum_metric_external_lsa{YType::boolean, "maximum-metric-external-lsa"},
    maximum_metric_external_lsa_metric{YType::uint32, "maximum-metric-external-lsa-metric"},
    maximum_metric_include_stubs{YType::boolean, "maximum-metric-include-stubs"},
    maximum_metric_originated_for{YType::uint32, "maximum-metric-originated-for"},
    maximum_metric_start_time{YType::uint32, "maximum-metric-start-time"},
    maximum_metric_summary_lsa{YType::boolean, "maximum-metric-summary-lsa"},
    maximum_metric_summary_lsa_metric{YType::uint32, "maximum-metric-summary-lsa-metric"},
    maximum_metric_unset_reason{YType::enumeration, "maximum-metric-unset-reason"},
    saved_startup_time{YType::uint32, "saved-startup-time"},
    saved_unset_maximum_metric{YType::boolean, "saved-unset-maximum-metric"},
    unset_maximum_metric{YType::boolean, "unset-maximum-metric"}
    	,
    maximum_metric_time_unset(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset>())
{
    maximum_metric_time_unset->parent = this;

    yang_name = "maximum-metric"; yang_parent_name = "process-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::~MaximumMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::has_data() const
{
    return max_metric_enabled.is_set
	|| max_metric_reason.is_set
	|| maximum_metric_external_lsa.is_set
	|| maximum_metric_external_lsa_metric.is_set
	|| maximum_metric_include_stubs.is_set
	|| maximum_metric_originated_for.is_set
	|| maximum_metric_start_time.is_set
	|| maximum_metric_summary_lsa.is_set
	|| maximum_metric_summary_lsa_metric.is_set
	|| maximum_metric_unset_reason.is_set
	|| saved_startup_time.is_set
	|| saved_unset_maximum_metric.is_set
	|| unset_maximum_metric.is_set
	|| (maximum_metric_time_unset !=  nullptr && maximum_metric_time_unset->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(max_metric_enabled.operation)
	|| is_set(max_metric_reason.operation)
	|| is_set(maximum_metric_external_lsa.operation)
	|| is_set(maximum_metric_external_lsa_metric.operation)
	|| is_set(maximum_metric_include_stubs.operation)
	|| is_set(maximum_metric_originated_for.operation)
	|| is_set(maximum_metric_start_time.operation)
	|| is_set(maximum_metric_summary_lsa.operation)
	|| is_set(maximum_metric_summary_lsa_metric.operation)
	|| is_set(maximum_metric_unset_reason.operation)
	|| is_set(saved_startup_time.operation)
	|| is_set(saved_unset_maximum_metric.operation)
	|| is_set(unset_maximum_metric.operation)
	|| (maximum_metric_time_unset !=  nullptr && maximum_metric_time_unset->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumMetric' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_metric_enabled.is_set || is_set(max_metric_enabled.operation)) leaf_name_data.push_back(max_metric_enabled.get_name_leafdata());
    if (max_metric_reason.is_set || is_set(max_metric_reason.operation)) leaf_name_data.push_back(max_metric_reason.get_name_leafdata());
    if (maximum_metric_external_lsa.is_set || is_set(maximum_metric_external_lsa.operation)) leaf_name_data.push_back(maximum_metric_external_lsa.get_name_leafdata());
    if (maximum_metric_external_lsa_metric.is_set || is_set(maximum_metric_external_lsa_metric.operation)) leaf_name_data.push_back(maximum_metric_external_lsa_metric.get_name_leafdata());
    if (maximum_metric_include_stubs.is_set || is_set(maximum_metric_include_stubs.operation)) leaf_name_data.push_back(maximum_metric_include_stubs.get_name_leafdata());
    if (maximum_metric_originated_for.is_set || is_set(maximum_metric_originated_for.operation)) leaf_name_data.push_back(maximum_metric_originated_for.get_name_leafdata());
    if (maximum_metric_start_time.is_set || is_set(maximum_metric_start_time.operation)) leaf_name_data.push_back(maximum_metric_start_time.get_name_leafdata());
    if (maximum_metric_summary_lsa.is_set || is_set(maximum_metric_summary_lsa.operation)) leaf_name_data.push_back(maximum_metric_summary_lsa.get_name_leafdata());
    if (maximum_metric_summary_lsa_metric.is_set || is_set(maximum_metric_summary_lsa_metric.operation)) leaf_name_data.push_back(maximum_metric_summary_lsa_metric.get_name_leafdata());
    if (maximum_metric_unset_reason.is_set || is_set(maximum_metric_unset_reason.operation)) leaf_name_data.push_back(maximum_metric_unset_reason.get_name_leafdata());
    if (saved_startup_time.is_set || is_set(saved_startup_time.operation)) leaf_name_data.push_back(saved_startup_time.get_name_leafdata());
    if (saved_unset_maximum_metric.is_set || is_set(saved_unset_maximum_metric.operation)) leaf_name_data.push_back(saved_unset_maximum_metric.get_name_leafdata());
    if (unset_maximum_metric.is_set || is_set(unset_maximum_metric.operation)) leaf_name_data.push_back(unset_maximum_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum-metric-time-unset")
    {
        if(maximum_metric_time_unset == nullptr)
        {
            maximum_metric_time_unset = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset>();
        }
        return maximum_metric_time_unset;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximum_metric_time_unset != nullptr)
    {
        children["maximum-metric-time-unset"] = maximum_metric_time_unset;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-metric-enabled")
    {
        max_metric_enabled = value;
    }
    if(value_path == "max-metric-reason")
    {
        max_metric_reason = value;
    }
    if(value_path == "maximum-metric-external-lsa")
    {
        maximum_metric_external_lsa = value;
    }
    if(value_path == "maximum-metric-external-lsa-metric")
    {
        maximum_metric_external_lsa_metric = value;
    }
    if(value_path == "maximum-metric-include-stubs")
    {
        maximum_metric_include_stubs = value;
    }
    if(value_path == "maximum-metric-originated-for")
    {
        maximum_metric_originated_for = value;
    }
    if(value_path == "maximum-metric-start-time")
    {
        maximum_metric_start_time = value;
    }
    if(value_path == "maximum-metric-summary-lsa")
    {
        maximum_metric_summary_lsa = value;
    }
    if(value_path == "maximum-metric-summary-lsa-metric")
    {
        maximum_metric_summary_lsa_metric = value;
    }
    if(value_path == "maximum-metric-unset-reason")
    {
        maximum_metric_unset_reason = value;
    }
    if(value_path == "saved-startup-time")
    {
        saved_startup_time = value;
    }
    if(value_path == "saved-unset-maximum-metric")
    {
        saved_unset_maximum_metric = value;
    }
    if(value_path == "unset-maximum-metric")
    {
        unset_maximum_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::MaximumMetricTimeUnset()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "maximum-metric-time-unset"; yang_parent_name = "maximum-metric";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::~MaximumMetricTimeUnset()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-metric-time-unset";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumMetricTimeUnset' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::Redistribution()
    :
    classless{YType::boolean, "classless"},
    metric{YType::uint32, "metric"},
    metric_flag{YType::boolean, "metric-flag"},
    nssa_only{YType::boolean, "nssa-only"}
    	,
    redistribution_protocol(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol>())
{
    redistribution_protocol->parent = this;

    yang_name = "redistribution"; yang_parent_name = "process-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::~Redistribution()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::has_data() const
{
    return classless.is_set
	|| metric.is_set
	|| metric_flag.is_set
	|| nssa_only.is_set
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::has_operation() const
{
    return is_set(operation)
	|| is_set(classless.operation)
	|| is_set(metric.operation)
	|| is_set(metric_flag.operation)
	|| is_set(nssa_only.operation)
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classless.is_set || is_set(classless.operation)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_flag.is_set || is_set(metric_flag.operation)) leaf_name_data.push_back(metric_flag.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-protocol")
    {
        if(redistribution_protocol == nullptr)
        {
            redistribution_protocol = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol>();
        }
        return redistribution_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistribution_protocol != nullptr)
    {
        children["redistribution-protocol"] = redistribution_protocol;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classless")
    {
        classless = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-flag")
    {
        metric_flag = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::RedistributionProtocol()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{
    yang_name = "redistribution-protocol"; yang_parent_name = "redistribution";
}

Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::~RedistributionProtocol()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_as_number.operation)
	|| is_set(connected_instance.operation)
	|| is_set(eigrp_as_number.operation)
	|| is_set(isis_instance_id.operation)
	|| is_set(ospf_process_id.operation)
	|| is_set(protocol_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-protocol";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistributionProtocol' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as_number.is_set || is_set(bgp_as_number.operation)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.operation)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.operation)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.operation)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.operation)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Areas()
{
    yang_name = "areas"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::~Areas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Areas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Area()
    :
    area_id{YType::int32, "area-id"}
    	,
    area_statistics(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics>())
	,flood_list_area_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable>())
	,interface_briefs(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs>())
	,interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces>())
	,neighbor_details(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions>())
{
    area_statistics->parent = this;

    flood_list_area_table->parent = this;

    interface_briefs->parent = this;

    interfaces->parent = this;

    neighbor_details->parent = this;

    neighbors->parent = this;

    requests->parent = this;

    retransmissions->parent = this;

    yang_name = "area"; yang_parent_name = "areas";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::~Area()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::has_data() const
{
    return area_id.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (flood_list_area_table !=  nullptr && flood_list_area_table->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "flood-list-area-table")
    {
        if(flood_list_area_table == nullptr)
        {
            flood_list_area_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable>();
        }
        return flood_list_area_table;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    if(flood_list_area_table != nullptr)
    {
        children["flood-list-area-table"] = flood_list_area_table;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::FloodListAreaTable()
{
    yang_name = "flood-list-area-table"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::~FloodListAreaTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-area-table";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodListAreaTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        for(auto const & c : flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood>();
        c->parent = this;
        flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flood)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"}
{
    yang_name = "flood"; yang_parent_name = "flood-list-area-table";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::has_data() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_lsa_count.is_set
	|| flood_pacing_timer.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(flood_interface_name.operation)
	|| is_set(flood_lsa_count.operation)
	|| is_set(flood_pacing_timer.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.operation)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.operation)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.operation)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        for(auto const & c : area_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(c);
        return c;
    }

    if(child_yang_name == "as-flood")
    {
        for(auto const & c : as_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_flood)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : as_flood)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "area-flood"; yang_parent_name = "flood";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaFlood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "as-flood"; yang_parent_name = "flood";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsFlood' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::Neighbor()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::has_data() const
{
    return dr_bdr_state.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_bdr_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(neighbor_madj_interface.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.operation)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.operation)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBriefs()
{
    yang_name = "interface-briefs"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBriefs' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-brief"; yang_parent_name = "interface-briefs";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_link_cost.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_neighbor_count.is_set
	|| interfaceis_madj.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_adj_neighbor_count.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_fast_detect_hold_down.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_madj_count.operation)
	|| is_set(interface_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(interfaceis_madj.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBrief' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.operation)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.operation)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.operation)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.operation)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.operation)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-madj"; yang_parent_name = "interface-brief";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_adj_neighbor_count.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(madj_area_id.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMadj' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.operation)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.operation)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Requests()
{
    yang_name = "requests"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::~Requests()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Requests' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{
    yang_name = "request"; yang_parent_name = "requests";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_interface_name.is_set
	|| request_neighbor_address.is_set
	|| request_neighbor_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(request_interface_name.operation)
	|| is_set(request_neighbor_address.operation)
	|| is_set(request_neighbor_id.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.operation)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.operation)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.operation)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "request"; yang_parent_name = "request";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmissions()
{
    yang_name = "retransmissions"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmissions' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        for(auto const & c : retransmission)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_timer{YType::uint32, "retransmission-timer"}
{
    yang_name = "retransmission"; yang_parent_name = "retransmissions";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_count.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_timer.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(retransmission_count.operation)
	|| is_set(retransmission_interface_name.operation)
	|| is_set(retransmission_neighbor_id.operation)
	|| is_set(retransmission_neighbor_ip_address.operation)
	|| is_set(retransmission_timer.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmission' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.operation)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.operation)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.operation)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.operation)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.operation)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission-area-db")
    {
        for(auto const & c : retransmission_area_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        for(auto const & c : retransmission_asdb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission_area_db)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : retransmission_asdb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAreaDb' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAsdb' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::has_data() const
{
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::has_operation() const
{
    return is_set(operation)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStatistics' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_stats_entries != nullptr)
    {
        children["interface-stats-entries"] = interface_stats_entries;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
{
    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        for(auto const & c : interface_stats_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_stats_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{
    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(handle.operation)
	|| is_set(if_name_str.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatsEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.operation)) leaf_name_data.push_back(if_name_str.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        for(auto const & c : if_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : if_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    if_stat{YType::uint32, "if-stat"},
    madj_intf{YType::boolean, "madj-intf"}
{
    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_id_str.operation)
	|| is_set(if_stat.operation)
	|| is_set(madj_intf.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.operation)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.operation)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    auto if_stat_name_datas = if_stat.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), if_stat_name_datas.begin(), if_stat_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
    }
    if(value_path == "if-stat")
    {
        if_stat.append(value);
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetails()
{
    yang_name = "neighbor-details"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetails' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_lls_option{YType::uint16, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;

    neighbor_retransmission_information->parent = this;

    neighbor_summary->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::has_data() const
{
    return adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| lfa_next_hop.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_filter.is_set
	|| neighbor_lls_option.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| nsf_router_state.is_set
	|| oob_resynchronization.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_change_count.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_sid_label.operation)
	|| is_set(adjacency_sid_protected.operation)
	|| is_set(adjacency_sid_unprotected_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_type.operation)
	|| is_set(last_oob_time.operation)
	|| is_set(lfa_interface.operation)
	|| is_set(lfa_neighbor_id.operation)
	|| is_set(lfa_neighbor_revision.operation)
	|| is_set(lfa_next_hop.operation)
	|| is_set(neighbor_ack_list_count.operation)
	|| is_set(neighbor_ack_list_high_watermark.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_area_id.operation)
	|| is_set(neighbor_backup_designated_router_address.operation)
	|| is_set(neighbor_cost.operation)
	|| is_set(neighbor_designated_router_address.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(neighbor_lls_option.operation)
	|| is_set(neighbor_option.operation)
	|| is_set(next_poll_interval.operation)
	|| is_set(nsf_router_state.operation)
	|| is_set(oob_resynchronization.operation)
	|| is_set(pending_events.operation)
	|| is_set(poll_interval.operation)
	|| is_set(state_change_count.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.operation)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.operation)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.operation)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.operation)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.operation)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.operation)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.operation)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.operation)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.operation)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.operation)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.operation)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.operation)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.operation)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.operation)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.operation)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.operation)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.operation)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.operation)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.operation)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.operation)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return dr_bdr_state.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_bdr_state.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(neighbor_madj_interface.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.operation)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.operation)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{
    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood_information.operation)
	|| is_set(area_first_flood_information_index.operation)
	|| is_set(area_flooding_index.operation)
	|| is_set(area_next_flood_information.operation)
	|| is_set(area_next_flood_information_index.operation)
	|| is_set(as_first_flood_information.operation)
	|| is_set(as_first_flood_information_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood_information.operation)
	|| is_set(as_next_flood_information_index.operation)
	|| is_set(dbd_retransmission_count.operation)
	|| is_set(dbd_retransmission_total_count.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmission_count.operation)
	|| is_set(number_of_retransmissions.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRetransmissionInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.operation)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.operation)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.operation)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.operation)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.operation)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.operation)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.operation)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.operation)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.operation)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.operation)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.operation)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.operation)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.operation)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "area";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::~Interfaces()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    backup_designated_router{YType::boolean, "backup-designated-router"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    cfg_cost_fallback{YType::boolean, "cfg-cost-fallback"},
    configured_demand_circuit{YType::boolean, "configured-demand-circuit"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    configured_ldp_sync_igp_shortcuts{YType::boolean, "configured-ldp-sync-igp-shortcuts"},
    cost_fallback_active{YType::boolean, "cost-fallback-active"},
    dead_interval{YType::uint32, "dead-interval"},
    designated_router{YType::boolean, "designated-router"},
    designated_router_address{YType::str, "designated-router-address"},
    designated_router_id{YType::str, "designated-router-id"},
    fast_detect_hold_down_time{YType::uint32, "fast-detect-hold-down-time"},
    fast_detect_hold_down_time_remaining{YType::uint32, "fast-detect-hold-down-time-remaining"},
    fast_reroute_topology_independent_lfa{YType::boolean, "fast-reroute-topology-independent-lfa"},
    fast_reroute_type{YType::enumeration, "fast-reroute-type"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_interval_ms{YType::uint32, "hello-interval-ms"},
    interface_ack_list_count{YType::uint32, "interface-ack-list-count"},
    interface_ack_list_high_watermark{YType::uint32, "interface-ack-list-high-watermark"},
    interface_address{YType::str, "interface-address"},
    interface_area{YType::str, "interface-area"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    interface_cost_fallback{YType::uint16, "interface-cost-fallback"},
    interface_dc_bitless_lsa_count{YType::uint32, "interface-dc-bitless-lsa-count"},
    interface_demand_circuit{YType::boolean, "interface-demand-circuit"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_last_nsf{YType::uint32, "interface-last-nsf"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    interface_line_state{YType::boolean, "interface-line-state"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_lsa_filter{YType::boolean, "interface-lsa-filter"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_nsf{YType::boolean, "interface-nsf"},
    interface_nsf_enabled{YType::boolean, "interface-nsf-enabled"},
    interface_priority{YType::uint8, "interface-priority"},
    interface_retransmission_interrval{YType::uint32, "interface-retransmission-interrval"},
    interface_router_id{YType::str, "interface-router-id"},
    interface_sid{YType::uint32, "interface-sid"},
    interface_sid_n_flag_clear{YType::boolean, "interface-sid-n-flag-clear"},
    interface_sid_php_off{YType::boolean, "interface-sid-php-off"},
    interface_state{YType::enumeration, "interface-state"},
    interface_strict_spf_sid{YType::uint32, "interface-strict-spf-sid"},
    interface_strict_spf_sid_n_flag_clear{YType::boolean, "interface-strict-spf-sid-n-flag-clear"},
    interface_strict_spf_sid_php_off{YType::boolean, "interface-strict-spf-sid-php-off"},
    interface_tunnel_flags{YType::uint32, "interface-tunnel-flags"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ip_mtu{YType::uint16, "ip-mtu"},
    is_loopback_stub_network{YType::boolean, "is-loopback-stub-network"},
    maximum_packet_size{YType::uint16, "maximum-packet-size"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    network_type{YType::enumeration, "network-type"},
    next_hello_time{YType::uint32, "next-hello-time"},
    next_hello_time_ms{YType::uint32, "next-hello-time-ms"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    passive_interface{YType::boolean, "passive-interface"},
    prefix_suppress_primary_addresses{YType::boolean, "prefix-suppress-primary-addresses"},
    prefix_suppress_secondary_addresses{YType::boolean, "prefix-suppress-secondary-addresses"},
    registered_for_link_down_fast_detection{YType::boolean, "registered-for-link-down-fast-detection"},
    srlg{YType::uint32, "srlg"},
    transmission_delay{YType::uint16, "transmission-delay"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    ttl_security_hop_count{YType::uint32, "ttl-security-hop-count"},
    wait_interval{YType::uint32, "wait-interval"}
    	,
    active_interface(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface>())
	,interface_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>())
{
    active_interface->parent = this;

    interface_bfd_information->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::~Interface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlg.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| backup_designated_router.is_set
	|| backup_designated_router_address.is_set
	|| backup_designated_router_id.is_set
	|| cfg_cost_fallback.is_set
	|| configured_demand_circuit.is_set
	|| configured_ldp_sync.is_set
	|| configured_ldp_sync_igp_shortcuts.is_set
	|| cost_fallback_active.is_set
	|| dead_interval.is_set
	|| designated_router.is_set
	|| designated_router_address.is_set
	|| designated_router_id.is_set
	|| fast_detect_hold_down_time.is_set
	|| fast_detect_hold_down_time_remaining.is_set
	|| fast_reroute_topology_independent_lfa.is_set
	|| fast_reroute_type.is_set
	|| hello_interval.is_set
	|| hello_interval_ms.is_set
	|| interface_ack_list_count.is_set
	|| interface_ack_list_high_watermark.is_set
	|| interface_address.is_set
	|| interface_area.is_set
	|| interface_bandwidth.is_set
	|| interface_cost_fallback.is_set
	|| interface_dc_bitless_lsa_count.is_set
	|| interface_demand_circuit.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_last_nsf.is_set
	|| interface_ldp_sync.is_set
	|| interface_line_state.is_set
	|| interface_link_cost.is_set
	|| interface_lsa_filter.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_nsf.is_set
	|| interface_nsf_enabled.is_set
	|| interface_priority.is_set
	|| interface_retransmission_interrval.is_set
	|| interface_router_id.is_set
	|| interface_sid.is_set
	|| interface_sid_n_flag_clear.is_set
	|| interface_sid_php_off.is_set
	|| interface_state.is_set
	|| interface_strict_spf_sid.is_set
	|| interface_strict_spf_sid_n_flag_clear.is_set
	|| interface_strict_spf_sid_php_off.is_set
	|| interface_tunnel_flags.is_set
	|| interfaceis_madj.is_set
	|| ip_mtu.is_set
	|| is_loopback_stub_network.is_set
	|| maximum_packet_size.is_set
	|| network_lsa_flush_timer.is_set
	|| network_type.is_set
	|| next_hello_time.is_set
	|| next_hello_time_ms.is_set
	|| ospf_interface_state.is_set
	|| passive_interface.is_set
	|| prefix_suppress_primary_addresses.is_set
	|| prefix_suppress_secondary_addresses.is_set
	|| registered_for_link_down_fast_detection.is_set
	|| transmission_delay.is_set
	|| ttl_security_enabled.is_set
	|| ttl_security_hop_count.is_set
	|| wait_interval.is_set
	|| (active_interface !=  nullptr && active_interface->has_data())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlg.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(backup_designated_router.operation)
	|| is_set(backup_designated_router_address.operation)
	|| is_set(backup_designated_router_id.operation)
	|| is_set(cfg_cost_fallback.operation)
	|| is_set(configured_demand_circuit.operation)
	|| is_set(configured_ldp_sync.operation)
	|| is_set(configured_ldp_sync_igp_shortcuts.operation)
	|| is_set(cost_fallback_active.operation)
	|| is_set(dead_interval.operation)
	|| is_set(designated_router.operation)
	|| is_set(designated_router_address.operation)
	|| is_set(designated_router_id.operation)
	|| is_set(fast_detect_hold_down_time.operation)
	|| is_set(fast_detect_hold_down_time_remaining.operation)
	|| is_set(fast_reroute_topology_independent_lfa.operation)
	|| is_set(fast_reroute_type.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hello_interval_ms.operation)
	|| is_set(interface_ack_list_count.operation)
	|| is_set(interface_ack_list_high_watermark.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(interface_cost_fallback.operation)
	|| is_set(interface_dc_bitless_lsa_count.operation)
	|| is_set(interface_demand_circuit.operation)
	|| is_set(interface_fast_detect_hold_down.operation)
	|| is_set(interface_last_nsf.operation)
	|| is_set(interface_ldp_sync.operation)
	|| is_set(interface_line_state.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_lsa_filter.operation)
	|| is_set(interface_madj_count.operation)
	|| is_set(interface_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_nsf.operation)
	|| is_set(interface_nsf_enabled.operation)
	|| is_set(interface_priority.operation)
	|| is_set(interface_retransmission_interrval.operation)
	|| is_set(interface_router_id.operation)
	|| is_set(interface_sid.operation)
	|| is_set(interface_sid_n_flag_clear.operation)
	|| is_set(interface_sid_php_off.operation)
	|| is_set(interface_state.operation)
	|| is_set(interface_strict_spf_sid.operation)
	|| is_set(interface_strict_spf_sid_n_flag_clear.operation)
	|| is_set(interface_strict_spf_sid_php_off.operation)
	|| is_set(interface_tunnel_flags.operation)
	|| is_set(interfaceis_madj.operation)
	|| is_set(ip_mtu.operation)
	|| is_set(is_loopback_stub_network.operation)
	|| is_set(maximum_packet_size.operation)
	|| is_set(network_lsa_flush_timer.operation)
	|| is_set(network_type.operation)
	|| is_set(next_hello_time.operation)
	|| is_set(next_hello_time_ms.operation)
	|| is_set(ospf_interface_state.operation)
	|| is_set(passive_interface.operation)
	|| is_set(prefix_suppress_primary_addresses.operation)
	|| is_set(prefix_suppress_secondary_addresses.operation)
	|| is_set(registered_for_link_down_fast_detection.operation)
	|| is_set(srlg.operation)
	|| is_set(transmission_delay.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(ttl_security_hop_count.operation)
	|| is_set(wait_interval.operation)
	|| (active_interface !=  nullptr && active_interface->has_operation())
	|| (interface_bfd_information !=  nullptr && interface_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_designated_router.is_set || is_set(backup_designated_router.operation)) leaf_name_data.push_back(backup_designated_router.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.operation)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.operation)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (cfg_cost_fallback.is_set || is_set(cfg_cost_fallback.operation)) leaf_name_data.push_back(cfg_cost_fallback.get_name_leafdata());
    if (configured_demand_circuit.is_set || is_set(configured_demand_circuit.operation)) leaf_name_data.push_back(configured_demand_circuit.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.operation)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (configured_ldp_sync_igp_shortcuts.is_set || is_set(configured_ldp_sync_igp_shortcuts.operation)) leaf_name_data.push_back(configured_ldp_sync_igp_shortcuts.get_name_leafdata());
    if (cost_fallback_active.is_set || is_set(cost_fallback_active.operation)) leaf_name_data.push_back(cost_fallback_active.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (designated_router.is_set || is_set(designated_router.operation)) leaf_name_data.push_back(designated_router.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.operation)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.operation)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (fast_detect_hold_down_time.is_set || is_set(fast_detect_hold_down_time.operation)) leaf_name_data.push_back(fast_detect_hold_down_time.get_name_leafdata());
    if (fast_detect_hold_down_time_remaining.is_set || is_set(fast_detect_hold_down_time_remaining.operation)) leaf_name_data.push_back(fast_detect_hold_down_time_remaining.get_name_leafdata());
    if (fast_reroute_topology_independent_lfa.is_set || is_set(fast_reroute_topology_independent_lfa.operation)) leaf_name_data.push_back(fast_reroute_topology_independent_lfa.get_name_leafdata());
    if (fast_reroute_type.is_set || is_set(fast_reroute_type.operation)) leaf_name_data.push_back(fast_reroute_type.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_interval_ms.is_set || is_set(hello_interval_ms.operation)) leaf_name_data.push_back(hello_interval_ms.get_name_leafdata());
    if (interface_ack_list_count.is_set || is_set(interface_ack_list_count.operation)) leaf_name_data.push_back(interface_ack_list_count.get_name_leafdata());
    if (interface_ack_list_high_watermark.is_set || is_set(interface_ack_list_high_watermark.operation)) leaf_name_data.push_back(interface_ack_list_high_watermark.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (interface_cost_fallback.is_set || is_set(interface_cost_fallback.operation)) leaf_name_data.push_back(interface_cost_fallback.get_name_leafdata());
    if (interface_dc_bitless_lsa_count.is_set || is_set(interface_dc_bitless_lsa_count.operation)) leaf_name_data.push_back(interface_dc_bitless_lsa_count.get_name_leafdata());
    if (interface_demand_circuit.is_set || is_set(interface_demand_circuit.operation)) leaf_name_data.push_back(interface_demand_circuit.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.operation)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_last_nsf.is_set || is_set(interface_last_nsf.operation)) leaf_name_data.push_back(interface_last_nsf.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.operation)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (interface_line_state.is_set || is_set(interface_line_state.operation)) leaf_name_data.push_back(interface_line_state.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_lsa_filter.is_set || is_set(interface_lsa_filter.operation)) leaf_name_data.push_back(interface_lsa_filter.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.operation)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.operation)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_nsf.is_set || is_set(interface_nsf.operation)) leaf_name_data.push_back(interface_nsf.get_name_leafdata());
    if (interface_nsf_enabled.is_set || is_set(interface_nsf_enabled.operation)) leaf_name_data.push_back(interface_nsf_enabled.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.operation)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (interface_retransmission_interrval.is_set || is_set(interface_retransmission_interrval.operation)) leaf_name_data.push_back(interface_retransmission_interrval.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.operation)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (interface_sid.is_set || is_set(interface_sid.operation)) leaf_name_data.push_back(interface_sid.get_name_leafdata());
    if (interface_sid_n_flag_clear.is_set || is_set(interface_sid_n_flag_clear.operation)) leaf_name_data.push_back(interface_sid_n_flag_clear.get_name_leafdata());
    if (interface_sid_php_off.is_set || is_set(interface_sid_php_off.operation)) leaf_name_data.push_back(interface_sid_php_off.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (interface_strict_spf_sid.is_set || is_set(interface_strict_spf_sid.operation)) leaf_name_data.push_back(interface_strict_spf_sid.get_name_leafdata());
    if (interface_strict_spf_sid_n_flag_clear.is_set || is_set(interface_strict_spf_sid_n_flag_clear.operation)) leaf_name_data.push_back(interface_strict_spf_sid_n_flag_clear.get_name_leafdata());
    if (interface_strict_spf_sid_php_off.is_set || is_set(interface_strict_spf_sid_php_off.operation)) leaf_name_data.push_back(interface_strict_spf_sid_php_off.get_name_leafdata());
    if (interface_tunnel_flags.is_set || is_set(interface_tunnel_flags.operation)) leaf_name_data.push_back(interface_tunnel_flags.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.operation)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ip_mtu.is_set || is_set(ip_mtu.operation)) leaf_name_data.push_back(ip_mtu.get_name_leafdata());
    if (is_loopback_stub_network.is_set || is_set(is_loopback_stub_network.operation)) leaf_name_data.push_back(is_loopback_stub_network.get_name_leafdata());
    if (maximum_packet_size.is_set || is_set(maximum_packet_size.operation)) leaf_name_data.push_back(maximum_packet_size.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.operation)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.operation)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (next_hello_time_ms.is_set || is_set(next_hello_time_ms.operation)) leaf_name_data.push_back(next_hello_time_ms.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (prefix_suppress_primary_addresses.is_set || is_set(prefix_suppress_primary_addresses.operation)) leaf_name_data.push_back(prefix_suppress_primary_addresses.get_name_leafdata());
    if (prefix_suppress_secondary_addresses.is_set || is_set(prefix_suppress_secondary_addresses.operation)) leaf_name_data.push_back(prefix_suppress_secondary_addresses.get_name_leafdata());
    if (registered_for_link_down_fast_detection.is_set || is_set(registered_for_link_down_fast_detection.operation)) leaf_name_data.push_back(registered_for_link_down_fast_detection.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.operation)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (ttl_security_hop_count.is_set || is_set(ttl_security_hop_count.operation)) leaf_name_data.push_back(ttl_security_hop_count.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.operation)) leaf_name_data.push_back(wait_interval.get_name_leafdata());

    auto srlg_name_datas = srlg.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_name_datas.begin(), srlg_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-interface")
    {
        if(active_interface == nullptr)
        {
            active_interface = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface>();
        }
        return active_interface;
    }

    if(child_yang_name == "interface-bfd-information")
    {
        if(interface_bfd_information == nullptr)
        {
            interface_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation>();
        }
        return interface_bfd_information;
    }

    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-neighbor")
    {
        for(auto const & c : interface_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        for(auto const & c : ipfrr_tiebreakers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_interface != nullptr)
    {
        children["active-interface"] = active_interface;
    }

    if(interface_bfd_information != nullptr)
    {
        children["interface-bfd-information"] = interface_bfd_information;
    }

    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipfrr_tiebreakers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "backup-designated-router")
    {
        backup_designated_router = value;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
    }
    if(value_path == "cfg-cost-fallback")
    {
        cfg_cost_fallback = value;
    }
    if(value_path == "configured-demand-circuit")
    {
        configured_demand_circuit = value;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
    }
    if(value_path == "configured-ldp-sync-igp-shortcuts")
    {
        configured_ldp_sync_igp_shortcuts = value;
    }
    if(value_path == "cost-fallback-active")
    {
        cost_fallback_active = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "designated-router")
    {
        designated_router = value;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
    }
    if(value_path == "fast-detect-hold-down-time")
    {
        fast_detect_hold_down_time = value;
    }
    if(value_path == "fast-detect-hold-down-time-remaining")
    {
        fast_detect_hold_down_time_remaining = value;
    }
    if(value_path == "fast-reroute-topology-independent-lfa")
    {
        fast_reroute_topology_independent_lfa = value;
    }
    if(value_path == "fast-reroute-type")
    {
        fast_reroute_type = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hello-interval-ms")
    {
        hello_interval_ms = value;
    }
    if(value_path == "interface-ack-list-count")
    {
        interface_ack_list_count = value;
    }
    if(value_path == "interface-ack-list-high-watermark")
    {
        interface_ack_list_high_watermark = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "interface-cost-fallback")
    {
        interface_cost_fallback = value;
    }
    if(value_path == "interface-dc-bitless-lsa-count")
    {
        interface_dc_bitless_lsa_count = value;
    }
    if(value_path == "interface-demand-circuit")
    {
        interface_demand_circuit = value;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
    }
    if(value_path == "interface-last-nsf")
    {
        interface_last_nsf = value;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
    }
    if(value_path == "interface-line-state")
    {
        interface_line_state = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-lsa-filter")
    {
        interface_lsa_filter = value;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-nsf")
    {
        interface_nsf = value;
    }
    if(value_path == "interface-nsf-enabled")
    {
        interface_nsf_enabled = value;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
    }
    if(value_path == "interface-retransmission-interrval")
    {
        interface_retransmission_interrval = value;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
    }
    if(value_path == "interface-sid")
    {
        interface_sid = value;
    }
    if(value_path == "interface-sid-n-flag-clear")
    {
        interface_sid_n_flag_clear = value;
    }
    if(value_path == "interface-sid-php-off")
    {
        interface_sid_php_off = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "interface-strict-spf-sid")
    {
        interface_strict_spf_sid = value;
    }
    if(value_path == "interface-strict-spf-sid-n-flag-clear")
    {
        interface_strict_spf_sid_n_flag_clear = value;
    }
    if(value_path == "interface-strict-spf-sid-php-off")
    {
        interface_strict_spf_sid_php_off = value;
    }
    if(value_path == "interface-tunnel-flags")
    {
        interface_tunnel_flags = value;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
    }
    if(value_path == "ip-mtu")
    {
        ip_mtu = value;
    }
    if(value_path == "is-loopback-stub-network")
    {
        is_loopback_stub_network = value;
    }
    if(value_path == "maximum-packet-size")
    {
        maximum_packet_size = value;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
    }
    if(value_path == "next-hello-time-ms")
    {
        next_hello_time_ms = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "prefix-suppress-primary-addresses")
    {
        prefix_suppress_primary_addresses = value;
    }
    if(value_path == "prefix-suppress-secondary-addresses")
    {
        prefix_suppress_secondary_addresses = value;
    }
    if(value_path == "registered-for-link-down-fast-detection")
    {
        registered_for_link_down_fast_detection = value;
    }
    if(value_path == "srlg")
    {
        srlg.append(value);
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "ttl-security-hop-count")
    {
        ttl_security_hop_count = value;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::InterfaceBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "interface-bfd-information"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::~InterfaceBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| detection_multiplier.is_set
	|| interval.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::ActiveInterface()
    :
    flood_scan_length{YType::uint32, "flood-scan-length"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    interface_authentication_type{YType::enumeration, "interface-authentication-type"},
    interface_flood_length{YType::uint32, "interface-flood-length"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    keychain_id{YType::uint64, "keychain-id"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    md_keys{YType::uint16, "md-keys"},
    old_md5_key_neighbor_count{YType::uint32, "old-md5-key-neighbor-count"},
    suppress_hello_count{YType::uint16, "suppress-hello-count"},
    wait_time{YType::uint32, "wait-time"},
    youngest_md_key{YType::boolean, "youngest-md-key"},
    youngest_md_key_id{YType::uint16, "youngest-md-key-id"}
{
    yang_name = "active-interface"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_data() const
{
    for (auto const & leaf : md_keys.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return flood_scan_length.is_set
	|| interface_area_flood_index.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| interface_authentication_type.is_set
	|| interface_flood_length.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_neighbor_count.is_set
	|| keychain_id.is_set
	|| last_flood_time.is_set
	|| maximum_flood_length.is_set
	|| maximum_flood_time.is_set
	|| old_md5_key_neighbor_count.is_set
	|| suppress_hello_count.is_set
	|| wait_time.is_set
	|| youngest_md_key.is_set
	|| youngest_md_key_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::has_operation() const
{
    for (auto const & leaf : md_keys.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(flood_scan_length.operation)
	|| is_set(interface_area_flood_index.operation)
	|| is_set(interface_area_next_flood.operation)
	|| is_set(interface_area_next_flood_index.operation)
	|| is_set(interface_as_flood_index.operation)
	|| is_set(interface_as_next_flood.operation)
	|| is_set(interface_as_next_flood_index.operation)
	|| is_set(interface_authentication_type.operation)
	|| is_set(interface_flood_length.operation)
	|| is_set(interface_flood_pacing_timer.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(keychain_id.operation)
	|| is_set(last_flood_time.operation)
	|| is_set(maximum_flood_length.operation)
	|| is_set(maximum_flood_time.operation)
	|| is_set(md_keys.operation)
	|| is_set(old_md5_key_neighbor_count.operation)
	|| is_set(suppress_hello_count.operation)
	|| is_set(wait_time.operation)
	|| is_set(youngest_md_key.operation)
	|| is_set(youngest_md_key_id.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveInterface' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood_scan_length.is_set || is_set(flood_scan_length.operation)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.operation)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.operation)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.operation)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.operation)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.operation)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.operation)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (interface_authentication_type.is_set || is_set(interface_authentication_type.operation)) leaf_name_data.push_back(interface_authentication_type.get_name_leafdata());
    if (interface_flood_length.is_set || is_set(interface_flood_length.operation)) leaf_name_data.push_back(interface_flood_length.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.operation)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (keychain_id.is_set || is_set(keychain_id.operation)) leaf_name_data.push_back(keychain_id.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.operation)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.operation)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.operation)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (old_md5_key_neighbor_count.is_set || is_set(old_md5_key_neighbor_count.operation)) leaf_name_data.push_back(old_md5_key_neighbor_count.get_name_leafdata());
    if (suppress_hello_count.is_set || is_set(suppress_hello_count.operation)) leaf_name_data.push_back(suppress_hello_count.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (youngest_md_key.is_set || is_set(youngest_md_key.operation)) leaf_name_data.push_back(youngest_md_key.get_name_leafdata());
    if (youngest_md_key_id.is_set || is_set(youngest_md_key_id.operation)) leaf_name_data.push_back(youngest_md_key_id.get_name_leafdata());

    auto md_keys_name_datas = md_keys.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), md_keys_name_datas.begin(), md_keys_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
    }
    if(value_path == "interface-authentication-type")
    {
        interface_authentication_type = value;
    }
    if(value_path == "interface-flood-length")
    {
        interface_flood_length = value;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "keychain-id")
    {
        keychain_id = value;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
    }
    if(value_path == "md-keys")
    {
        md_keys.append(value);
    }
    if(value_path == "old-md5-key-neighbor-count")
    {
        old_md5_key_neighbor_count = value;
    }
    if(value_path == "suppress-hello-count")
    {
        suppress_hello_count = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
    if(value_path == "youngest-md-key")
    {
        youngest_md_key = value;
    }
    if(value_path == "youngest-md-key-id")
    {
        youngest_md_key_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    neighbor_bdr{YType::boolean, "neighbor-bdr"},
    neighbor_dr{YType::boolean, "neighbor-dr"},
    suppress_hello{YType::boolean, "suppress-hello"}
{
    yang_name = "interface-neighbor"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| neighbor_bdr.is_set
	|| neighbor_dr.is_set
	|| suppress_hello.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_neighbor_cost.operation)
	|| is_set(interface_neighbor_id.operation)
	|| is_set(neighbor_bdr.operation)
	|| is_set(neighbor_dr.operation)
	|| is_set(suppress_hello.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceNeighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.operation)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.operation)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (neighbor_bdr.is_set || is_set(neighbor_bdr.operation)) leaf_name_data.push_back(neighbor_bdr.get_name_leafdata());
    if (neighbor_dr.is_set || is_set(neighbor_dr.operation)) leaf_name_data.push_back(neighbor_dr.get_name_leafdata());
    if (suppress_hello.is_set || is_set(suppress_hello.operation)) leaf_name_data.push_back(suppress_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
    }
    if(value_path == "neighbor-bdr")
    {
        neighbor_bdr = value;
    }
    if(value_path == "neighbor-dr")
    {
        neighbor_dr = value;
    }
    if(value_path == "suppress-hello")
    {
        suppress_hello = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-madj"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_adj_neighbor_count.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(madj_area_id.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMadj' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.operation)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.operation)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_index{YType::uint32, "tiebreaker-index"},
    tiebreaker_type{YType::enumeration, "tiebreaker-type"}
{
    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "interface";
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_index.is_set
	|| tiebreaker_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::has_operation() const
{
    return is_set(operation)
	|| is_set(tiebreaker_index.operation)
	|| is_set(tiebreaker_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrTiebreakers' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_index.is_set || is_set(tiebreaker_index.operation)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());
    if (tiebreaker_type.is_set || is_set(tiebreaker_type.operation)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
    }
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Database()
    :
    database_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas>())
	,database_summaries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries>())
	,database_summary_as(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs>())
	,lsa_summaries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries>())
	,lsas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas>())
{
    database_areas->parent = this;

    database_summaries->parent = this;

    database_summary_as->parent = this;

    lsa_summaries->parent = this;

    lsas->parent = this;

    yang_name = "database"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::~Database()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::has_data() const
{
    return (database_areas !=  nullptr && database_areas->has_data())
	|| (database_summaries !=  nullptr && database_summaries->has_data())
	|| (database_summary_as !=  nullptr && database_summary_as->has_data())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data())
	|| (lsas !=  nullptr && lsas->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::has_operation() const
{
    return is_set(operation)
	|| (database_areas !=  nullptr && database_areas->has_operation())
	|| (database_summaries !=  nullptr && database_summaries->has_operation())
	|| (database_summary_as !=  nullptr && database_summary_as->has_operation())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation())
	|| (lsas !=  nullptr && lsas->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Database' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-areas")
    {
        if(database_areas == nullptr)
        {
            database_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas>();
        }
        return database_areas;
    }

    if(child_yang_name == "database-summaries")
    {
        if(database_summaries == nullptr)
        {
            database_summaries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries>();
        }
        return database_summaries;
    }

    if(child_yang_name == "database-summary-as")
    {
        if(database_summary_as == nullptr)
        {
            database_summary_as = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs>();
        }
        return database_summary_as;
    }

    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries>();
        }
        return lsa_summaries;
    }

    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas>();
        }
        return lsas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_areas != nullptr)
    {
        children["database-areas"] = database_areas;
    }

    if(database_summaries != nullptr)
    {
        children["database-summaries"] = database_summaries;
    }

    if(database_summary_as != nullptr)
    {
        children["database-summary-as"] = database_summary_as;
    }

    if(lsa_summaries != nullptr)
    {
        children["lsa-summaries"] = lsa_summaries;
    }

    if(lsas != nullptr)
    {
        children["lsas"] = lsas;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseAreas()
{
    yang_name = "database-areas"; yang_parent_name = "database";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::~DatabaseAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::has_data() const
{
    for (std::size_t index=0; index<database_area.size(); index++)
    {
        if(database_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::has_operation() const
{
    for (std::size_t index=0; index<database_area.size(); index++)
    {
        if(database_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-area")
    {
        for(auto const & c : database_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea>();
        c->parent = this;
        database_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : database_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::DatabaseArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    lsa_summaries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>())
	,lsas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas>())
{
    lsa_summaries->parent = this;

    lsas->parent = this;

    yang_name = "database-area"; yang_parent_name = "database-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::~DatabaseArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::has_data() const
{
    return area_id.is_set
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data())
	|| (lsas !=  nullptr && lsas->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation())
	|| (lsas !=  nullptr && lsas->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>();
        }
        return lsa_summaries;
    }

    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas>();
        }
        return lsas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_summaries != nullptr)
    {
        children["lsa-summaries"] = lsa_summaries;
    }

    if(lsas != nullptr)
    {
        children["lsas"] = lsas;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsas()
{
    yang_name = "lsas"; yang_parent_name = "database-area";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_detail_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>())
	,lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>())
{
    lsa_detail_data->parent = this;

    lsa_header->parent = this;

    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(dn_age_lsa.operation)
	|| is_set(ls_type.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsid.operation)
	|| is_set(nsf.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.operation)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.operation)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsid")
    {
        lsid = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    ase_origin{YType::uint16, "ase-origin"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    in_sync{YType::uint8, "in-sync"},
    length{YType::uint16, "length"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    nssa_translation{YType::boolean, "nssa-translation"},
    routing_bit{YType::boolean, "routing-bit"},
    sum_origin{YType::uint16, "sum-origin"},
    tos_capable{YType::boolean, "tos-capable"}
    	,
    lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_last_updated_time->parent = this;

    lsa_throttle_timer->parent = this;

    lsadb_base_time_stamp->parent = this;

    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_data() const
{
    return advertising_router_reachable.is_set
	|| ase_origin.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| in_sync.is_set
	|| length.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_prefix_priority.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| new_lsa_prefix_priority.is_set
	|| nssa_translation.is_set
	|| routing_bit.is_set
	|| sum_origin.is_set
	|| tos_capable.is_set
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router_reachable.operation)
	|| is_set(ase_origin.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(dn_bit.operation)
	|| is_set(in_sync.operation)
	|| is_set(length.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_prefix_priority.operation)
	|| is_set(lsa_rate_limit_due_time.operation)
	|| is_set(lsadb_base_clock.operation)
	|| is_set(new_lsa_prefix_priority.operation)
	|| is_set(nssa_translation.operation)
	|| is_set(routing_bit.operation)
	|| is_set(sum_origin.operation)
	|| is_set(tos_capable.operation)
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetailData' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.operation)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.operation)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.operation)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.operation)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.operation)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.operation)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.operation)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.operation)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.operation)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.operation)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.operation)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (tos_capable.is_set || is_set(tos_capable.operation)) leaf_name_data.push_back(tos_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
    }
    if(value_path == "tos-capable")
    {
        tos_capable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    second_table_index{YType::uint8, "second-table-index"},
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"}
{
    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return last_inst_minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| minute_table_index.is_set
	|| second_table_index.is_set
	|| timer_location.is_set
	|| timer_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(last_inst_minute_table_index.operation)
	|| is_set(last_inst_second_table_index.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(second_table_index.operation)
	|| is_set(timer_location.operation)
	|| is_set(timer_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaThrottleTimer' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.operation)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.operation)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (timer_location.is_set || is_set(timer_location.operation)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.operation)) leaf_name_data.push_back(timer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
    if(value_path == "timer-location")
    {
        timer_location = value;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaLastUpdatedTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsadbBaseTimeStamp' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    acknowledgement{YType::boolean, "acknowledgement"},
    flood_pending{YType::boolean, "flood-pending"},
    free_time{YType::uint32, "free-time"},
    maximum_age{YType::boolean, "maximum-age"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    no_delete{YType::boolean, "no-delete"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    partial_spf{YType::boolean, "partial-spf"},
    rate_limit{YType::boolean, "rate-limit"},
    routing_table{YType::boolean, "routing-table"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"}
{
    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return acknowledgement.is_set
	|| flood_pending.is_set
	|| free_time.is_set
	|| maximum_age.is_set
	|| neighbor_exchange.is_set
	|| no_delete.is_set
	|| nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| partial_spf.is_set
	|| rate_limit.is_set
	|| routing_table.is_set
	|| sum_orig_pending.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement.operation)
	|| is_set(flood_pending.operation)
	|| is_set(free_time.operation)
	|| is_set(maximum_age.operation)
	|| is_set(neighbor_exchange.operation)
	|| is_set(no_delete.operation)
	|| is_set(nsr_ack_pending.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(partial_spf.operation)
	|| is_set(rate_limit.operation)
	|| is_set(routing_table.operation)
	|| is_set(sum_orig_pending.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NotDelete' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.operation)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.operation)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.operation)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.operation)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.operation)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.operation)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.operation)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.operation)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.operation)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
    }
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    external_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,router_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
{
    external_lsa_type->parent = this;

    network_lsa_type->parent = this;

    opaque_el_lsa_type->parent = this;

    opaque_ep_lsa_type->parent = this;

    opaque_grace_lsa->parent = this;

    opaque_link_lsa_type->parent = this;

    opaque_mpls_te_lsa_type->parent = this;

    opaque_router_info_lsa_type->parent = this;

    router_lsa_type->parent = this;

    summary_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_lsa_type.operation)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInternalData' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.operation)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    internal_lsa{YType::boolean, "internal-lsa"},
    router_abr{YType::boolean, "router-abr"},
    router_asbr{YType::boolean, "router-asbr"}
{
    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return internal_lsa.is_set
	|| router_abr.is_set
	|| router_asbr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(internal_lsa.operation)
	|| is_set(router_abr.operation)
	|| is_set(router_asbr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa.is_set || is_set(internal_lsa.operation)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.operation)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (router_asbr.is_set || is_set(router_asbr.operation)) leaf_name_data.push_back(router_asbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-link")
    {
        for(auto const & c : internal_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : internal_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
    }
    if(value_path == "router-asbr")
    {
        router_asbr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_data.operation)
	|| is_set(link_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{
    yang_name = "link-tos"; yang_parent_name = "link";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(operation)
	|| is_set(router_tos.operation)
	|| is_set(tos_cost.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTos' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.operation)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "internal-link"; yang_parent_name = "router-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_data.operation)
	|| is_set(link_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InternalLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{
    yang_name = "link-tos"; yang_parent_name = "internal-link";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(operation)
	|| is_set(router_tos.operation)
	|| is_set(tos_cost.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTos' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.operation)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"},
    network_prefix_length{YType::uint32, "network-prefix-length"}
{
    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_router.operation)
	|| is_set(network_prefix_length.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.operation)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    auto neighbor_router_name_datas = neighbor_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_router_name_datas.begin(), neighbor_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"},
    summary_lsa_metric{YType::uint32, "summary-lsa-metric"},
    summary_prefix_length{YType::uint32, "summary-prefix-length"}
{
    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (auto const & leaf : summary_lsa_metric.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return internal_sum_lsa.is_set
	|| summary_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (auto const & leaf : summary_lsa_metric.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(internal_sum_lsa.operation)
	|| is_set(summary_lsa_metric.operation)
	|| is_set(summary_prefix_length.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.operation)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());
    if (summary_prefix_length.is_set || is_set(summary_prefix_length.operation)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());

    auto summary_lsa_metric_name_datas = summary_lsa_metric.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), summary_lsa_metric_name_datas.begin(), summary_lsa_metric_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
    }
    if(value_path == "summary-lsa-metric")
    {
        summary_lsa_metric.append(value);
    }
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{
    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(external_prefix_length.operation)
	|| is_set(internal_external_lsa.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.operation)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.operation)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        for(auto const & c : external_tos_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_tos_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tag{YType::uint32, "external-tag"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"}
{
    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tag.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(external_metric.operation)
	|| is_set(external_metric_type.operation)
	|| is_set(external_tag.operation)
	|| is_set(external_tos.operation)
	|| is_set(forwarding_address.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalTosMetric' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.operation)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.operation)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.operation)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{
    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueLinkLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.operation)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{
    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueMplsTeLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{
    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mpls_dste_link.operation)
	|| is_set(mpls_router_id.operation)
	|| is_set(tlv_data.operation)
	|| is_set(tlv_length.operation)
	|| is_set(tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.operation)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.operation)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.operation)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.operation)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.operation)) leaf_name_data.push_back(tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{
    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_tlv_length.operation)
	|| is_set(sub_tlv_type.operation)
	|| is_set(sub_tlv_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeLinkSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.operation)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.operation)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.operation)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| is_set(ip_address.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueGraceLsa' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.operation)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.operation)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"},
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"}
{
    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_ri_interface_name.is_set
	|| opaque_rilsa_scope.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(opaque_ri_interface_name.operation)
	|| is_set(opaque_rilsa_scope.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueRouterInfoLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.operation)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());
    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.operation)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        for(auto const & c : opaque_ritlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : opaque_ritlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
    }
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    pcedtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
{
    pcedtlv->parent = this;

    rtr_cap_tlv->parent = this;

    sr_algo_tlv->parent = this;

    sr_range_tlv->parent = this;

    unknown_tlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(operation)
	|| is_set(ritlv_internal_type.operation)
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueRitlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.operation)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(ri_gen_tlv_length.operation)
	|| is_set(ri_gen_tlv_type.operation)
	|| is_set(ri_genvalue.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.operation)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.operation)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.operation)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"}
{
    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_additional_info.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_tlv_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(rtr_cap_additional_info.operation)
	|| is_set(rtr_cap_all_bits.operation)
	|| is_set(rtr_cap_area_te.operation)
	|| is_set(rtr_cap_graceful_restart.operation)
	|| is_set(rtr_cap_graceful_restart_helper.operation)
	|| is_set(rtr_cap_p2plan.operation)
	|| is_set(rtr_cap_stub_rtr.operation)
	|| is_set(rtr_cap_te_exp.operation)
	|| is_set(rtr_cap_tlv_length.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtrCapTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.operation)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.operation)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.operation)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.operation)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.operation)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.operation)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.operation)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.operation)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.operation)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
    }
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;

    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(operation)
	|| is_set(pcedtlv_length.operation)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcedtlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.operation)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    ipv4pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
	,pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
{
    ipv4pce_addr->parent = this;

    ipv6pce_addr->parent = this;

    pce_addr_unknown_tlv->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(pce_addr_type.operation)
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcedAddr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.operation)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{
    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(ri_gen_tlv_length.operation)
	|| is_set(ri_gen_tlv_type.operation)
	|| is_set(ri_genvalue.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PceAddrUnknownTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.operation)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.operation)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.operation)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{
    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(pceipv4_addr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PceAddr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.operation)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{
    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(pceipv6_addr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PceAddr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.operation)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"},
    lbit{YType::boolean, "lbit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"}
{
    yang_name = "pced-scope"; yang_parent_name = "pcedtlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    return all_scope_info_bits.is_set
	|| lbit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(operation)
	|| is_set(all_scope_info_bits.operation)
	|| is_set(lbit.operation)
	|| is_set(pref_l.operation)
	|| is_set(pref_r.operation)
	|| is_set(pref_s.operation)
	|| is_set(pref_y.operation)
	|| is_set(rbit.operation)
	|| is_set(rd_bit.operation)
	|| is_set(sbit.operation)
	|| is_set(sd_bit.operation)
	|| is_set(ybit.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcedScope' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.operation)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());
    if (lbit.is_set || is_set(lbit.operation)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.operation)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.operation)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.operation)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.operation)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.operation)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.operation)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.operation)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.operation)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.operation)) leaf_name_data.push_back(ybit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
    }
    if(value_path == "lbit")
    {
        lbit = value;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
    }
    if(value_path == "rbit")
    {
        rbit = value;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
    }
    if(value_path == "sbit")
    {
        sbit = value;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
    }
    if(value_path == "ybit")
    {
        ybit = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_length{YType::uint16, "sr-algo-length"},
    sr_algo_value{YType::str, "sr-algo-value"}
{
    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    return sr_algo_length.is_set
	|| sr_algo_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sr_algo_length.operation)
	|| is_set(sr_algo_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrAlgoTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_algo_length.is_set || is_set(sr_algo_length.operation)) leaf_name_data.push_back(sr_algo_length.get_name_leafdata());
    if (sr_algo_value.is_set || is_set(sr_algo_value.operation)) leaf_name_data.push_back(sr_algo_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-algo-length")
    {
        sr_algo_length = value;
    }
    if(value_path == "sr-algo-value")
    {
        sr_algo_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
    	,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sr_range_length.operation)
	|| is_set(sr_range_size.operation)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrRangeTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.operation)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.operation)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sidtlv != nullptr)
    {
        children["sidtlv"] = sidtlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{
    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sr_sid_length.operation)
	|| is_set(sr_sid_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sidtlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.operation)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.operation)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
{
    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueEpLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{
    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mpls_dste_link.operation)
	|| is_set(mpls_router_id.operation)
	|| is_set(tlv_data.operation)
	|| is_set(tlv_length.operation)
	|| is_set(tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.operation)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.operation)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.operation)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.operation)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.operation)) leaf_name_data.push_back(tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{
    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_tlv_length.operation)
	|| is_set(sub_tlv_type.operation)
	|| is_set(sub_tlv_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeLinkSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.operation)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.operation)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.operation)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
{
    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueElLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{
    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mpls_dste_link.operation)
	|| is_set(mpls_router_id.operation)
	|| is_set(tlv_data.operation)
	|| is_set(tlv_length.operation)
	|| is_set(tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.operation)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.operation)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.operation)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.operation)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.operation)) leaf_name_data.push_back(tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{
    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_tlv_length.operation)
	|| is_set(sub_tlv_type.operation)
	|| is_set(sub_tlv_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeLinkSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.operation)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.operation)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.operation)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummaries()
{
    yang_name = "lsa-summaries"; yang_parent_name = "database-area";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_data() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.size(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummaries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        for(auto const & c : lsa_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary>();
        c->parent = this;
        lsa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaSummary()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    external_tag{YType::uint32, "external-tag"},
    interface_name{YType::str, "interface-name"},
    link_count{YType::uint16, "link-count"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| external_tag.is_set
	|| interface_name.is_set
	|| link_count.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(external_tag.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_count.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.operation)) leaf_name_data.push_back(link_count.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-count")
    {
        link_count = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(dn_age_lsa.operation)
	|| is_set(ls_type.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsid.operation)
	|| is_set(nsf.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.operation)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.operation)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsid")
    {
        lsid = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummaries()
{
    yang_name = "database-summaries"; yang_parent_name = "database";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::~DatabaseSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_data() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_operation() const
{
    for (std::size_t index=0; index<database_summary.size(); index++)
    {
        if(database_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summaries";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummaries' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        for(auto const & c : database_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary>();
        c->parent = this;
        database_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : database_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::DatabaseSummary()
    :
    area_id{YType::int32, "area-id"},
    dbase_sum_area_id_string{YType::str, "dbase-sum-area-id-string"}
{
    yang_name = "database-summary"; yang_parent_name = "database-summaries";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dbase_sum_area_id_string.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_lsa_counter.size(); index++)
    {
        if(area_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(dbase_sum_area_id_string.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dbase_sum_area_id_string.is_set || is_set(dbase_sum_area_id_string.operation)) leaf_name_data.push_back(dbase_sum_area_id_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-lsa-counter")
    {
        for(auto const & c : area_lsa_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter>();
        c->parent = this;
        area_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_lsa_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::AreaLsaCounter()
    :
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"},
    lsa_type{YType::enumeration, "lsa-type"}
{
    yang_name = "area-lsa-counter"; yang_parent_name = "database-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::~AreaLsaCounter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_data() const
{
    return lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set
	|| lsa_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_count.operation)
	|| is_set(lsa_delete_count.operation)
	|| is_set(lsa_maxage_count.operation)
	|| is_set(lsa_self_count.operation)
	|| is_set(lsa_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-lsa-counter";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaLsaCounter' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_count.is_set || is_set(lsa_count.operation)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.operation)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.operation)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.operation)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-count")
    {
        lsa_count = value;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::DatabaseSummaryAs()
{
    yang_name = "database-summary-as"; yang_parent_name = "database";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::~DatabaseSummaryAs()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_data() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_operation() const
{
    for (std::size_t index=0; index<as_lsa_counter.size(); index++)
    {
        if(as_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-as";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummaryAs' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-lsa-counter")
    {
        for(auto const & c : as_lsa_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter>();
        c->parent = this;
        as_lsa_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_lsa_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::AsLsaCounter()
    :
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"},
    lsa_type{YType::enumeration, "lsa-type"}
{
    yang_name = "as-lsa-counter"; yang_parent_name = "database-summary-as";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::~AsLsaCounter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_data() const
{
    return lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set
	|| lsa_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_count.operation)
	|| is_set(lsa_delete_count.operation)
	|| is_set(lsa_maxage_count.operation)
	|| is_set(lsa_self_count.operation)
	|| is_set(lsa_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-lsa-counter";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsLsaCounter' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_count.is_set || is_set(lsa_count.operation)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.operation)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.operation)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.operation)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-count")
    {
        lsa_count = value;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsas()
{
    yang_name = "lsas"; yang_parent_name = "database";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::str, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_detail_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData>())
	,lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader>())
	,lsa_internal_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData>())
{
    lsa_detail_data->parent = this;

    lsa_header->parent = this;

    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_detail_data != nullptr)
    {
        children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_internal_data != nullptr)
    {
        children["lsa-internal-data"] = lsa_internal_data;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    ls_type{YType::enumeration, "ls-type"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsid{YType::str, "lsid"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| dn_age_lsa.is_set
	|| ls_type.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsid.is_set
	|| nsf.is_set
	|| sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(dn_age_lsa.operation)
	|| is_set(ls_type.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsid.operation)
	|| is_set(nsf.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.operation)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.operation)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsid")
    {
        lsid = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    ase_origin{YType::uint16, "ase-origin"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    in_sync{YType::uint8, "in-sync"},
    length{YType::uint16, "length"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    nssa_translation{YType::boolean, "nssa-translation"},
    routing_bit{YType::boolean, "routing-bit"},
    sum_origin{YType::uint16, "sum-origin"},
    tos_capable{YType::boolean, "tos-capable"}
    	,
    lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
	,lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
	,lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
	,not_delete(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_last_updated_time->parent = this;

    lsa_throttle_timer->parent = this;

    lsadb_base_time_stamp->parent = this;

    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_data() const
{
    return advertising_router_reachable.is_set
	|| ase_origin.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| in_sync.is_set
	|| length.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_prefix_priority.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| new_lsa_prefix_priority.is_set
	|| nssa_translation.is_set
	|| routing_bit.is_set
	|| sum_origin.is_set
	|| tos_capable.is_set
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router_reachable.operation)
	|| is_set(ase_origin.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(dn_bit.operation)
	|| is_set(in_sync.operation)
	|| is_set(length.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_prefix_priority.operation)
	|| is_set(lsa_rate_limit_due_time.operation)
	|| is_set(lsadb_base_clock.operation)
	|| is_set(new_lsa_prefix_priority.operation)
	|| is_set(nssa_translation.operation)
	|| is_set(routing_bit.operation)
	|| is_set(sum_origin.operation)
	|| is_set(tos_capable.operation)
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetailData' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.operation)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.operation)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.operation)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.operation)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.operation)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.operation)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.operation)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.operation)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.operation)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.operation)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.operation)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (tos_capable.is_set || is_set(tos_capable.operation)) leaf_name_data.push_back(tos_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_last_updated_time != nullptr)
    {
        children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsa_throttle_timer != nullptr)
    {
        children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        children["not-delete"] = not_delete;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
    }
    if(value_path == "tos-capable")
    {
        tos_capable = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    second_table_index{YType::uint8, "second-table-index"},
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"}
{
    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    return last_inst_minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| minute_table_index.is_set
	|| second_table_index.is_set
	|| timer_location.is_set
	|| timer_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(last_inst_minute_table_index.operation)
	|| is_set(last_inst_second_table_index.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(second_table_index.operation)
	|| is_set(timer_location.operation)
	|| is_set(timer_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaThrottleTimer' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.operation)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.operation)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (timer_location.is_set || is_set(timer_location.operation)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.operation)) leaf_name_data.push_back(timer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
    if(value_path == "timer-location")
    {
        timer_location = value;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaLastUpdatedTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsadbBaseTimeStamp' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    acknowledgement{YType::boolean, "acknowledgement"},
    flood_pending{YType::boolean, "flood-pending"},
    free_time{YType::uint32, "free-time"},
    maximum_age{YType::boolean, "maximum-age"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    no_delete{YType::boolean, "no-delete"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    partial_spf{YType::boolean, "partial-spf"},
    rate_limit{YType::boolean, "rate-limit"},
    routing_table{YType::boolean, "routing-table"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"}
{
    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    return acknowledgement.is_set
	|| flood_pending.is_set
	|| free_time.is_set
	|| maximum_age.is_set
	|| neighbor_exchange.is_set
	|| no_delete.is_set
	|| nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| partial_spf.is_set
	|| rate_limit.is_set
	|| routing_table.is_set
	|| sum_orig_pending.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement.operation)
	|| is_set(flood_pending.operation)
	|| is_set(free_time.operation)
	|| is_set(maximum_age.operation)
	|| is_set(neighbor_exchange.operation)
	|| is_set(no_delete.operation)
	|| is_set(nsr_ack_pending.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(partial_spf.operation)
	|| is_set(rate_limit.operation)
	|| is_set(routing_table.operation)
	|| is_set(sum_orig_pending.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NotDelete' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.operation)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.operation)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.operation)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.operation)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.operation)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.operation)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.operation)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.operation)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.operation)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
    }
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
    	,
    external_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
	,network_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
	,opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
	,opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
	,opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
	,opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
	,opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
	,opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
	,router_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>())
	,summary_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
{
    external_lsa_type->parent = this;

    network_lsa_type->parent = this;

    opaque_el_lsa_type->parent = this;

    opaque_ep_lsa_type->parent = this;

    opaque_grace_lsa->parent = this;

    opaque_link_lsa_type->parent = this;

    opaque_mpls_te_lsa_type->parent = this;

    opaque_router_info_lsa_type->parent = this;

    router_lsa_type->parent = this;

    summary_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_data() const
{
    return internal_lsa_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_lsa_type.operation)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInternalData' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.operation)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_lsa_type != nullptr)
    {
        children["external-lsa-type"] = external_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        children["network-lsa-type"] = network_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(router_lsa_type != nullptr)
    {
        children["router-lsa-type"] = router_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        children["summary-lsa-type"] = summary_lsa_type;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    internal_lsa{YType::boolean, "internal-lsa"},
    router_abr{YType::boolean, "router-abr"},
    router_asbr{YType::boolean, "router-asbr"}
{
    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return internal_lsa.is_set
	|| router_abr.is_set
	|| router_asbr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<internal_link.size(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(internal_lsa.operation)
	|| is_set(router_abr.operation)
	|| is_set(router_asbr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa.is_set || is_set(internal_lsa.operation)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.operation)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (router_asbr.is_set || is_set(router_asbr.operation)) leaf_name_data.push_back(router_asbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-link")
    {
        for(auto const & c : internal_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        c->parent = this;
        internal_link.push_back(c);
        return c;
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : internal_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
    }
    if(value_path == "router-asbr")
    {
        router_asbr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_data.operation)
	|| is_set(link_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{
    yang_name = "link-tos"; yang_parent_name = "link";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(operation)
	|| is_set(router_tos.operation)
	|| is_set(tos_cost.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTos' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.operation)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_data{YType::str, "link-data"},
    link_id{YType::str, "link-id"},
    link_metric{YType::uint16, "link-metric"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "internal-link"; yang_parent_name = "router-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_data.is_set
	|| link_id.is_set
	|| link_metric.is_set
	|| link_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.size(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(link_data.operation)
	|| is_set(link_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InternalLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_data.is_set || is_set(link_data.operation)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        for(auto const & c : link_tos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        c->parent = this;
        link_tos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_tos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-data")
    {
        link_data = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{
    yang_name = "link-tos"; yang_parent_name = "internal-link";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(operation)
	|| is_set(router_tos.operation)
	|| is_set(tos_cost.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkTos' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.operation)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"},
    network_prefix_length{YType::uint32, "network-prefix-length"}
{
    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_router.operation)
	|| is_set(network_prefix_length.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.operation)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    auto neighbor_router_name_datas = neighbor_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_router_name_datas.begin(), neighbor_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"},
    summary_lsa_metric{YType::uint32, "summary-lsa-metric"},
    summary_prefix_length{YType::uint32, "summary-prefix-length"}
{
    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    for (auto const & leaf : summary_lsa_metric.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return internal_sum_lsa.is_set
	|| summary_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (auto const & leaf : summary_lsa_metric.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(internal_sum_lsa.operation)
	|| is_set(summary_lsa_metric.operation)
	|| is_set(summary_prefix_length.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.operation)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());
    if (summary_prefix_length.is_set || is_set(summary_prefix_length.operation)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());

    auto summary_lsa_metric_name_datas = summary_lsa_metric.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), summary_lsa_metric_name_datas.begin(), summary_lsa_metric_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
    }
    if(value_path == "summary-lsa-metric")
    {
        summary_lsa_metric.append(value);
    }
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
{
    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.size(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(external_prefix_length.operation)
	|| is_set(internal_external_lsa.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.operation)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.operation)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        for(auto const & c : external_tos_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        c->parent = this;
        external_tos_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_tos_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tag{YType::uint32, "external-tag"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"}
{
    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tag.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(external_metric.operation)
	|| is_set(external_metric_type.operation)
	|| is_set(external_tag.operation)
	|| is_set(external_tos.operation)
	|| is_set(forwarding_address.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalTosMetric' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.operation)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.operation)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.operation)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{
    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(opaque_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueLinkLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.operation)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
{
    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueMplsTeLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    mpls_router_id{YType::uint32, "mpls-router-id"},
    tlv_data{YType::str, "tlv-data"},
    tlv_length{YType::uint16, "tlv-length"},
    tlv_type{YType::uint16, "tlv-type"}
{
    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return mpls_dste_link.is_set
	|| mpls_router_id.is_set
	|| tlv_data.is_set
	|| tlv_length.is_set
	|| tlv_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.size(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mpls_dste_link.operation)
	|| is_set(mpls_router_id.operation)
	|| is_set(tlv_data.operation)
	|| is_set(tlv_length.operation)
	|| is_set(tlv_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_dste_link.is_set || is_set(mpls_dste_link.operation)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.operation)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.operation)) leaf_name_data.push_back(tlv_data.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.operation)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (tlv_type.is_set || is_set(tlv_type.operation)) leaf_name_data.push_back(tlv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        for(auto const & c : te_link_sub_tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        c->parent = this;
        te_link_sub_tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_link_sub_tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
    }
    if(value_path == "tlv-type")
    {
        tlv_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{
    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    return sub_tlv_length.is_set
	|| sub_tlv_type.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_tlv_length.operation)
	|| is_set(sub_tlv_type.operation)
	|| is_set(sub_tlv_value.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeLinkSubTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_length.is_set || is_set(sub_tlv_length.operation)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_type.is_set || is_set(sub_tlv_type.operation)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.operation)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
    }
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| is_set(ip_address.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueGraceLsa' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.operation)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.operation)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"},
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"}
{
    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_ri_interface_name.is_set
	|| opaque_rilsa_scope.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.size(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(opaque_ri_interface_name.operation)
	|| is_set(opaque_rilsa_scope.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueRouterInfoLsaType' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.operation)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());
    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.operation)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        for(auto const & c : opaque_ritlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        c->parent = this;
        opaque_ritlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : opaque_ritlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
    }
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
    	,
    pcedtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
	,rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
	,sr_algo_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
	,sr_range_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
	,unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
{
    pcedtlv->parent = this;

    rtr_cap_tlv->parent = this;

    sr_algo_tlv->parent = this;

    sr_range_tlv->parent = this;

    unknown_tlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    return ritlv_internal_type.is_set
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(operation)
	|| is_set(ritlv_internal_type.operation)
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpaqueRitlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.operation)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pcedtlv != nullptr)
    {
        children["pcedtlv"] = pcedtlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        children["sr-range-tlv"] = sr_range_tlv;
    }

    if(unknown_tlv != nullptr)
    {
        children["unknown-tlv"] = unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{
    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(ri_gen_tlv_length.operation)
	|| is_set(ri_gen_tlv_type.operation)
	|| is_set(ri_genvalue.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.operation)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.operation)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.operation)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"}
{
    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    return rtr_cap_additional_info.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_tlv_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(rtr_cap_additional_info.operation)
	|| is_set(rtr_cap_all_bits.operation)
	|| is_set(rtr_cap_area_te.operation)
	|| is_set(rtr_cap_graceful_restart.operation)
	|| is_set(rtr_cap_graceful_restart_helper.operation)
	|| is_set(rtr_cap_p2plan.operation)
	|| is_set(rtr_cap_stub_rtr.operation)
	|| is_set(rtr_cap_te_exp.operation)
	|| is_set(rtr_cap_tlv_length.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtrCapTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.operation)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.operation)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.operation)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.operation)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.operation)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.operation)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.operation)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.operation)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.operation)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
    }
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
    	,
    pced_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
	,pced_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;

    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(operation)
	|| is_set(pcedtlv_length.operation)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcedtlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.operation)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pced_addr != nullptr)
    {
        children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        children["pced-scope"] = pced_scope;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
    	,
    ipv4pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>())
	,ipv6pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>())
	,pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
{
    ipv4pce_addr->parent = this;

    ipv6pce_addr->parent = this;

    pce_addr_unknown_tlv->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    return pce_addr_type.is_set
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(pce_addr_type.operation)
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation())
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PcedAddr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.operation)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr>();
        }
        return ipv6pce_addr;
    }

    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4pce_addr != nullptr)
    {
        children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        children["ipv6pce-addr"] = ipv6pce_addr;
    }

    if(pce_addr_unknown_tlv != nullptr)
    {
        children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_genvalue{YType::str, "ri-genvalue"}
{
    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    return ri_gen_tlv_length.is_set
	|| ri_gen_tlv_type.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(ri_gen_tlv_length.operation)
	|| is_set(ri_gen_tlv_type.operation)
	|| is_set(ri_genvalue.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PceAddrUnknownTlv' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.operation)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.operation)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.operation)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
    }
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::Ipv4PceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{
    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::~Ipv4PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_data() const
{
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(pceipv4_addr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PceAddr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.operation)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::Ipv6PceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{
    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr";
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::~Ipv6PceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_data() const
{
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(pceipv6_addr.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PceAddr' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.operation)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
    }
}


}
}

