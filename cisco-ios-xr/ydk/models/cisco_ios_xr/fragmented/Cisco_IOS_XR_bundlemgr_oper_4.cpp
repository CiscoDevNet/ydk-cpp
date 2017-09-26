
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

LacpBundles::Bundles::Bundle::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"},
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    lacp_enabled{YType::str, "lacp-enabled"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::Counters>())
	,link_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::LinkData>())
	,mac_address(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MacAddress>())
	,member_mux_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData>())
{
    counters->parent = this;
    link_data->parent = this;
    mac_address->parent = this;
    member_mux_data->parent = this;

    yang_name = "member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::Member::~Member()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::has_data() const
{
    return member_interface.is_set
	|| bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| lacp_enabled.is_set
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

bool LacpBundles::Bundles::Bundle::Members::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_interface.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(iccp_node.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lacp_enabled.yfilter)
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

std::string LacpBundles::Bundles::Bundle::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.yfilter)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.yfilter)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lacp_enabled.is_set || is_set(lacp_enabled.yfilter)) leaf_name_data.push_back(lacp_enabled.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.yfilter)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.yfilter)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.yfilter)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data == nullptr)
        {
            member_mux_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData>();
        }
        return member_mux_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::get_children() const
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

void LacpBundles::Bundles::Bundle::Members::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
        member_interface.value_namespace = name_space;
        member_interface.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "lacp-enabled")
    {
        lacp_enabled = value;
        lacp_enabled.value_namespace = name_space;
        lacp_enabled.value_namespace_prefix = name_space_prefix;
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

void LacpBundles::Bundles::Bundle::Members::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-interface")
    {
        member_interface.yfilter = yfilter;
    }
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
    if(value_path == "lacp-enabled")
    {
        lacp_enabled.yfilter = yfilter;
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

bool LacpBundles::Bundles::Bundle::Members::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "link-data" || name == "mac-address" || name == "member-mux-data" || name == "member-interface" || name == "bandwidth" || name == "iccp-node" || name == "interface-name" || name == "lacp-enabled" || name == "link-order-number" || name == "member-name" || name == "member-type" || name == "port-number" || name == "port-priority" || name == "underlying-link-id")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::Counters::Counters()
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

    yang_name = "counters"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::Member::Counters::~Counters()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_data() const
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

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_operation() const
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

std::string LacpBundles::Bundles::Bundle::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::Counters::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LacpBundles::Bundles::Bundle::Members::Member::Counters::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LacpBundles::Bundles::Bundle::Members::Member::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaulted" || name == "excess-lacpd-us-received" || name == "excess-marker-packets-received" || name == "expired" || name == "illegal-packets-received" || name == "lacpd-us-received" || name == "lacpd-us-transmitted" || name == "last-cleared-nsec" || name == "last-cleared-sec" || name == "marker-packets-received" || name == "marker-responses-transmitted")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::LinkData::LinkData()
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

    yang_name = "link-data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::Member::LinkData::~LinkData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_data() const
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

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_operation() const
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

std::string LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LacpBundles::Bundles::Bundle::Members::Member::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LacpBundles::Bundles::Bundle::Members::Member::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-operational-key" || name == "actor-port-id" || name == "actor-port-priority" || name == "actor-port-state" || name == "actor-system-mac-address" || name == "actor-system-priority" || name == "attached-aggregator-id" || name == "interface-handle" || name == "partner-operational-key" || name == "partner-port-id" || name == "partner-port-priority" || name == "partner-port-state" || name == "partner-system-mac-address" || name == "partner-system-priority" || name == "selected-aggregator-id")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::Member::MacAddress::~MacAddress()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_data() const
{
    return address.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void LacpBundles::Bundles::Bundle::Members::Member::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool LacpBundles::Bundles::Bundle::Members::Member::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;

    yang_name = "member-mux-data"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::~MemberMuxData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(member_mux_state_reason.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(mux_state_reason.yfilter)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.yfilter)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.yfilter)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data == nullptr)
        {
            member_mux_state_reason_data = std::make_shared<LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>();
        }
        return member_mux_state_reason_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_mux_state_reason_data != nullptr)
    {
        children["member-mux-state-reason-data"] = member_mux_state_reason_data;
    }

    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-mux-state-reason-data" || name == "error" || name == "member-mux-state-reason" || name == "member-state" || name == "mux-state" || name == "mux-state-reason")
        return true;
    return false;
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data"; is_top_level_class = false; has_list_ancestor = true;
}

LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_type.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.yfilter)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_filter(const std::string & value_path, YFilter yfilter)
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

bool LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-type" || name == "severity")
        return true;
    return false;
}

LacpData::LacpData()
    :
    global(std::make_shared<LacpData::Global>())
{
    global->parent = this;

    yang_name = "lacp-data"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper"; is_top_level_class = true; has_list_ancestor = false;
}

LacpData::~LacpData()
{
}

bool LacpData::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool LacpData::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string LacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<LacpData::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void LacpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LacpData::clone_ptr() const
{
    return std::make_shared<LacpData>();
}

std::string LacpData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpData::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpData::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LacpData::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LacpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

LacpData::Global::Global()
    :
    system_id(std::make_shared<LacpData::Global::SystemId>())
{
    system_id->parent = this;

    yang_name = "global"; yang_parent_name = "lacp-data"; is_top_level_class = false; has_list_ancestor = false;
}

LacpData::Global::~Global()
{
}

bool LacpData::Global::has_data() const
{
    return (system_id !=  nullptr && system_id->has_data());
}

bool LacpData::Global::has_operation() const
{
    return is_set(yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string LacpData::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpData::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpData::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LacpData::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<LacpData::Global::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpData::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void LacpData::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LacpData::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LacpData::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

LacpData::Global::SystemId::SystemId()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    system_mac_address{YType::str, "system-mac-address"},
    system_priority{YType::uint16, "system-priority"}
    	,
    system_id(std::make_shared<LacpData::Global::SystemId::SystemId_>())
{
    system_id->parent = this;

    yang_name = "system-id"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

LacpData::Global::SystemId::~SystemId()
{
}

bool LacpData::Global::SystemId::has_data() const
{
    return iccp_group_id.is_set
	|| system_mac_address.is_set
	|| system_priority.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool LacpData::Global::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(system_mac_address.yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string LacpData::Global::SystemId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/global/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpData::Global::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpData::Global::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (system_mac_address.is_set || is_set(system_mac_address.yfilter)) leaf_name_data.push_back(system_mac_address.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpData::Global::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<LacpData::Global::SystemId::SystemId_>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpData::Global::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void LacpData::Global::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address = value;
        system_mac_address.value_namespace = name_space;
        system_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void LacpData::Global::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool LacpData::Global::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-id" || name == "system-mac-address" || name == "system-priority")
        return true;
    return false;
}

LacpData::Global::SystemId::SystemId_::SystemId_()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<LacpData::Global::SystemId::SystemId_::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = false;
}

LacpData::Global::SystemId::SystemId_::~SystemId_()
{
}

bool LacpData::Global::SystemId::SystemId_::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool LacpData::Global::SystemId::SystemId_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string LacpData::Global::SystemId::SystemId_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/global/system-id/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpData::Global::SystemId::SystemId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpData::Global::SystemId::SystemId_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpData::Global::SystemId::SystemId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<LacpData::Global::SystemId::SystemId_::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpData::Global::SystemId::SystemId_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void LacpData::Global::SystemId::SystemId_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void LacpData::Global::SystemId::SystemId_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool LacpData::Global::SystemId::SystemId_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

LacpData::Global::SystemId::SystemId_::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = false;
}

LacpData::Global::SystemId::SystemId_::SystemMacAddr::~SystemMacAddr()
{
}

bool LacpData::Global::SystemId::SystemId_::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool LacpData::Global::SystemId::SystemId_::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/global/system-id/system-id/" << get_segment_path();
    return path_buffer.str();
}

std::string LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LacpData::Global::SystemId::SystemId_::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void LacpData::Global::SystemId::SystemId_::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool LacpData::Global::SystemId::SystemId_::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}


}
}

