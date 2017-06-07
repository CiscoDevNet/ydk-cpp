
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_evpn_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_evpn_oper {

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::Mac()
    :
    esi_port_key{YType::uint16, "esi-port-key"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    internal_label{YType::uint32, "internal-label"},
    ip_address{YType::str, "ip-address"},
    ip_address_xr{YType::str, "ip-address-xr"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    is_static{YType::boolean, "is-static"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_encap_type{YType::uint8, "local-encap-type"},
    local_ethernet_segment_identifier{YType::uint8, "local-ethernet-segment-identifier"},
    local_label{YType::uint32, "local-label"},
    local_seq_id{YType::uint32, "local-seq-id"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    num_paths{YType::uint32, "num-paths"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    remote_ethernet_segment_identifier{YType::uint8, "remote-ethernet-segment-identifier"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    resolved{YType::boolean, "resolved"},
    soo_nexthop{YType::str, "soo-nexthop"}
{
    yang_name = "mac"; yang_parent_name = "macs";
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::~Mac()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_data() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return esi_port_key.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| internal_label.is_set
	|| ip_address.is_set
	|| ip_address_xr.is_set
	|| is_local_mac.is_set
	|| is_remote_mac.is_set
	|| is_static.is_set
	|| learned_bridge_port_name.is_set
	|| local_encap_type.is_set
	|| local_label.is_set
	|| local_seq_id.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| mac_flush_received.is_set
	|| mac_flush_requested.is_set
	|| num_paths.is_set
	|| remote_encap_type.is_set
	|| remote_seq_id.is_set
	|| resolved.is_set
	|| soo_nexthop.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(esi_port_key.operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(evi.operation)
	|| is_set(internal_label.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_xr.operation)
	|| is_set(is_local_mac.operation)
	|| is_set(is_remote_mac.operation)
	|| is_set(is_static.operation)
	|| is_set(learned_bridge_port_name.operation)
	|| is_set(local_encap_type.operation)
	|| is_set(local_ethernet_segment_identifier.operation)
	|| is_set(local_label.operation)
	|| is_set(local_seq_id.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_address_xr.operation)
	|| is_set(mac_flush_received.operation)
	|| is_set(mac_flush_requested.operation)
	|| is_set(num_paths.operation)
	|| is_set(remote_encap_type.operation)
	|| is_set(remote_ethernet_segment_identifier.operation)
	|| is_set(remote_seq_id.operation)
	|| is_set(resolved.operation)
	|| is_set(soo_nexthop.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_port_key.is_set || is_set(esi_port_key.operation)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.operation)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.operation)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.operation)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (is_static.is_set || is_set(is_static.operation)) leaf_name_data.push_back(is_static.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.operation)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.operation)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.operation)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.operation)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.operation)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.operation)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.operation)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.operation)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.operation)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.operation)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.operation)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());

    auto local_ethernet_segment_identifier_name_datas = local_ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_ethernet_segment_identifier_name_datas.begin(), local_ethernet_segment_identifier_name_datas.end());
    auto remote_ethernet_segment_identifier_name_datas = remote_ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_ethernet_segment_identifier_name_datas.begin(), remote_ethernet_segment_identifier_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_buffer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac = value;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac = value;
    }
    if(value_path == "is-static")
    {
        is_static = value;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
    }
    if(value_path == "local-ethernet-segment-identifier")
    {
        local_ethernet_segment_identifier.append(value);
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
    }
    if(value_path == "remote-ethernet-segment-identifier")
    {
        remote_ethernet_segment_identifier.append(value);
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
    }
    if(value_path == "resolved")
    {
        resolved = value;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "path-buffer"; yang_parent_name = "mac";
}

Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::~PathBuffer()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/macs/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Standby::EthernetSegments::EthernetSegments()
{
    yang_name = "ethernet-segments"; yang_parent_name = "standby";
}

Evpn::Standby::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Standby::EthernetSegments::has_data() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::EthernetSegments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        for(auto const & c : ethernet_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment>();
        c->parent = this;
        ethernet_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ethernet_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EthernetSegments::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    elected_d_fs{YType::uint32, "elected-d-fs"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::uint32, "ethernet-segment-state"},
    force_single_home{YType::boolean, "force-single-home"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    if_handle{YType::str, "if-handle"},
    interface_name{YType::str, "interface-name"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    main_port_mac{YType::str, "main-port-mac"},
    main_port_role{YType::enumeration, "main-port-role"},
    mp_protected{YType::boolean, "mp-protected"},
    not_config_d_fs{YType::uint32, "not-config-d-fs"},
    not_elected_d_fs{YType::uint32, "not-elected-d-fs"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    primary_service{YType::uint32, "primary-service"},
    primary_services_input{YType::str, "primary-services-input"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    secondary_service{YType::uint32, "secondary-service"},
    secondary_services_input{YType::str, "secondary-services-input"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    service_carving_result{YType::uint32, "service-carving-result"},
    service_carving_type{YType::enumeration, "service-carving-type"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"}
{
    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments";
}

Evpn::Standby::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : primary_service.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : secondary_service.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_carving_result.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return elected_d_fs.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| force_single_home.is_set
	|| forwarder_ports.is_set
	|| if_handle.is_set
	|| interface_name.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| local_split_horizon_group_label.is_set
	|| mac_flushing_mode_config.is_set
	|| main_port_mac.is_set
	|| main_port_role.is_set
	|| mp_protected.is_set
	|| not_config_d_fs.is_set
	|| not_elected_d_fs.is_set
	|| num_up_p_ws.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| primary_services_input.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| secondary_services_input.is_set
	|| service_carving_mode.is_set
	|| service_carving_type.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : primary_service.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : secondary_service.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_carving_result.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(elected_d_fs.operation)
	|| is_set(es_bgp_gates.operation)
	|| is_set(es_l2fib_gates.operation)
	|| is_set(esi1.operation)
	|| is_set(esi2.operation)
	|| is_set(esi3.operation)
	|| is_set(esi4.operation)
	|| is_set(esi5.operation)
	|| is_set(esi_type.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(ethernet_segment_name.operation)
	|| is_set(ethernet_segment_state.operation)
	|| is_set(force_single_home.operation)
	|| is_set(forwarder_ports.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface_name.operation)
	|| is_set(load_balance_mode_config.operation)
	|| is_set(load_balance_mode_is_default.operation)
	|| is_set(load_balance_mode_oper.operation)
	|| is_set(local_split_horizon_group_label.operation)
	|| is_set(mac_flushing_mode_config.operation)
	|| is_set(main_port_mac.operation)
	|| is_set(main_port_role.operation)
	|| is_set(mp_protected.operation)
	|| is_set(not_config_d_fs.operation)
	|| is_set(not_elected_d_fs.operation)
	|| is_set(num_up_p_ws.operation)
	|| is_set(peering_timer.operation)
	|| is_set(peering_timer_left.operation)
	|| is_set(primary_service.operation)
	|| is_set(primary_services_input.operation)
	|| is_set(recovery_timer.operation)
	|| is_set(recovery_timer_left.operation)
	|| is_set(route_target.operation)
	|| is_set(rt_origin.operation)
	|| is_set(secondary_service.operation)
	|| is_set(secondary_services_input.operation)
	|| is_set(service_carving_mode.operation)
	|| is_set(service_carving_result.operation)
	|| is_set(service_carving_type.operation)
	|| is_set(source_mac_oper.operation)
	|| is_set(source_mac_origin.operation);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::EthernetSegments::EthernetSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elected_d_fs.is_set || is_set(elected_d_fs.operation)) leaf_name_data.push_back(elected_d_fs.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.operation)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.operation)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.operation)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.operation)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.operation)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.operation)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.operation)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.operation)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.operation)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.operation)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.operation)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.operation)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.operation)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.operation)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.operation)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.operation)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.operation)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.operation)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.operation)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.operation)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (not_config_d_fs.is_set || is_set(not_config_d_fs.operation)) leaf_name_data.push_back(not_config_d_fs.get_name_leafdata());
    if (not_elected_d_fs.is_set || is_set(not_elected_d_fs.operation)) leaf_name_data.push_back(not_elected_d_fs.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.operation)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.operation)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.operation)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.operation)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.operation)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.operation)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.operation)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.operation)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.operation)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (service_carving_type.is_set || is_set(service_carving_type.operation)) leaf_name_data.push_back(service_carving_type.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.operation)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.operation)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());

    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());
    auto primary_service_name_datas = primary_service.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), primary_service_name_datas.begin(), primary_service_name_datas.end());
    auto secondary_service_name_datas = secondary_service.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_service_name_datas.begin(), secondary_service_name_datas.end());
    auto service_carving_result_name_datas = service_carving_result.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_carving_result_name_datas.begin(), service_carving_result_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        for(auto const & c : remote_split_horizon_group_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        c->parent = this;
        remote_split_horizon_group_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_split_horizon_group_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elected-d-fs")
    {
        elected_d_fs = value;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
    }
    if(value_path == "esi-type")
    {
        esi_type = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
    }
    if(value_path == "not-config-d-fs")
    {
        not_config_d_fs = value;
    }
    if(value_path == "not-elected-d-fs")
    {
        not_elected_d_fs = value;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
    }
    if(value_path == "primary-service")
    {
        primary_service.append(value);
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
    }
    if(value_path == "secondary-service")
    {
        secondary_service.append(value);
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
    }
    if(value_path == "service-carving-result")
    {
        service_carving_result.append(value);
    }
    if(value_path == "service-carving-type")
    {
        service_carving_type = value;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
    }
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "ethernet-segment";
}

Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    return next_hop.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{
    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment";
}

Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    return label.is_set
	|| next_hop.is_set;
}

bool Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(next_hop.operation);
}

std::string Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ethernet-segments/ethernet-segment/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Evpn::Standby::AcIds::AcIds()
{
    yang_name = "ac-ids"; yang_parent_name = "standby";
}

Evpn::Standby::AcIds::~AcIds()
{
}

bool Evpn::Standby::AcIds::has_data() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::AcIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-id")
    {
        for(auto const & c : ac_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::Standby::AcIds::AcId>();
        c->parent = this;
        ac_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::AcIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::Standby::AcIds::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::AcIds::AcId::AcId()
    :
    ac_id{YType::int32, "ac-id"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"}
{
    yang_name = "ac-id"; yang_parent_name = "ac-ids";
}

Evpn::Standby::AcIds::AcId::~AcId()
{
}

bool Evpn::Standby::AcIds::AcId::has_data() const
{
    return ac_id.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set;
}

bool Evpn::Standby::AcIds::AcId::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(neighbor.operation);
}

std::string Evpn::Standby::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";

    return path_buffer.str();

}

const EntityPath Evpn::Standby::AcIds::AcId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/ac-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::Standby::AcIds::AcId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::Standby::AcIds::AcId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
}


}
}

