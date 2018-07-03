
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_drivers_media_eth_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_media_eth_oper {

EthernetInterface::EthernetInterface()
    :
    statistics(std::make_shared<EthernetInterface::Statistics>())
    , interfaces(std::make_shared<EthernetInterface::Interfaces>())
    , berts(std::make_shared<EthernetInterface::Berts>())
{
    statistics->parent = this;
    interfaces->parent = this;
    berts->parent = this;

    yang_name = "ethernet-interface"; yang_parent_name = "Cisco-IOS-XR-drivers-media-eth-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

EthernetInterface::~EthernetInterface()
{
}

bool EthernetInterface::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (berts !=  nullptr && berts->has_data());
}

bool EthernetInterface::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (berts !=  nullptr && berts->has_operation());
}

std::string EthernetInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<EthernetInterface::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<EthernetInterface::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "berts")
    {
        if(berts == nullptr)
        {
            berts = std::make_shared<EthernetInterface::Berts>();
        }
        return berts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(berts != nullptr)
    {
        children["berts"] = berts;
    }

    return children;
}

void EthernetInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EthernetInterface::clone_ptr() const
{
    return std::make_shared<EthernetInterface>();
}

std::string EthernetInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string EthernetInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function EthernetInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EthernetInterface::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool EthernetInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "interfaces" || name == "berts")
        return true;
    return false;
}

EthernetInterface::Statistics::Statistics()
    :
    statistic(this, {"interface_name"})
{

    yang_name = "statistics"; yang_parent_name = "ethernet-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetInterface::Statistics::~Statistics()
{
}

bool EthernetInterface::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetInterface::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetInterface::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetInterface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto c = std::make_shared<EthernetInterface::Statistics::Statistic>();
        c->parent = this;
        statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetInterface::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetInterface::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetInterface::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic")
        return true;
    return false;
}

EthernetInterface::Statistics::Statistic::Statistic()
    :
    interface_name{YType::str, "interface-name"},
    received_total_bytes{YType::uint64, "received-total-bytes"},
    received_good_bytes{YType::uint64, "received-good-bytes"},
    received_total_frames{YType::uint64, "received-total-frames"},
    received8021q_frames{YType::uint64, "received8021q-frames"},
    received_pause_frames{YType::uint64, "received-pause-frames"},
    received_unknown_opcodes{YType::uint64, "received-unknown-opcodes"},
    received_total64_octet_frames{YType::uint64, "received-total64-octet-frames"},
    received_total_octet_frames_from65_to127{YType::uint64, "received-total-octet-frames-from65-to127"},
    received_total_octet_frames_from128_to255{YType::uint64, "received-total-octet-frames-from128-to255"},
    received_total_octet_frames_from256_to511{YType::uint64, "received-total-octet-frames-from256-to511"},
    received_total_octet_frames_from512_to1023{YType::uint64, "received-total-octet-frames-from512-to1023"},
    received_total_octet_frames_from1024_to1518{YType::uint64, "received-total-octet-frames-from1024-to1518"},
    received_total_octet_frames_from1519_to_max{YType::uint64, "received-total-octet-frames-from1519-to-max"},
    received_good_frames{YType::uint64, "received-good-frames"},
    received_unicast_frames{YType::uint64, "received-unicast-frames"},
    received_multicast_frames{YType::uint64, "received-multicast-frames"},
    received_broadcast_frames{YType::uint64, "received-broadcast-frames"},
    number_of_buffer_overrun_packets_dropped{YType::uint64, "number-of-buffer-overrun-packets-dropped"},
    number_of_aborted_packets_dropped{YType::uint64, "number-of-aborted-packets-dropped"},
    numberof_invalid_vlan_id_packets_dropped{YType::uint64, "numberof-invalid-vlan-id-packets-dropped"},
    invalid_dest_mac_drop_packets{YType::uint64, "invalid-dest-mac-drop-packets"},
    invalid_encap_drop_packets{YType::uint64, "invalid-encap-drop-packets"},
    number_of_miscellaneous_packets_dropped{YType::uint64, "number-of-miscellaneous-packets-dropped"},
    dropped_giant_packets_greaterthan_mru{YType::uint64, "dropped-giant-packets-greaterthan-mru"},
    dropped_ether_stats_undersize_pkts{YType::uint64, "dropped-ether-stats-undersize-pkts"},
    dropped_jabbers_packets_greaterthan_mru{YType::uint64, "dropped-jabbers-packets-greaterthan-mru"},
    dropped_ether_stats_fragments{YType::uint64, "dropped-ether-stats-fragments"},
    dropped_packets_with_crc_align_errors{YType::uint64, "dropped-packets-with-crc-align-errors"},
    ether_stats_collisions{YType::uint64, "ether-stats-collisions"},
    symbol_errors{YType::uint64, "symbol-errors"},
    dropped_miscellaneous_error_packets{YType::uint64, "dropped-miscellaneous-error-packets"},
    rfc2819_ether_stats_oversized_pkts{YType::uint64, "rfc2819-ether-stats-oversized-pkts"},
    rfc2819_ether_stats_jabbers{YType::uint64, "rfc2819-ether-stats-jabbers"},
    rfc2819_ether_stats_crc_align_errors{YType::uint64, "rfc2819-ether-stats-crc-align-errors"},
    rfc3635dot3_stats_alignment_errors{YType::uint64, "rfc3635dot3-stats-alignment-errors"},
    total_bytes_transmitted{YType::uint64, "total-bytes-transmitted"},
    total_good_bytes_transmitted{YType::uint64, "total-good-bytes-transmitted"},
    total_frames_transmitted{YType::uint64, "total-frames-transmitted"},
    transmitted8021q_frames{YType::uint64, "transmitted8021q-frames"},
    transmitted_total_pause_frames{YType::uint64, "transmitted-total-pause-frames"},
    transmitted_total64_octet_frames{YType::uint64, "transmitted-total64-octet-frames"},
    transmitted_total_octet_frames_from65_to127{YType::uint64, "transmitted-total-octet-frames-from65-to127"},
    transmitted_total_octet_frames_from128_to255{YType::uint64, "transmitted-total-octet-frames-from128-to255"},
    transmitted_total_octet_frames_from256_to511{YType::uint64, "transmitted-total-octet-frames-from256-to511"},
    transmitted_total_octet_frames_from512_to1023{YType::uint64, "transmitted-total-octet-frames-from512-to1023"},
    transmitted_total_octet_frames_from1024_to1518{YType::uint64, "transmitted-total-octet-frames-from1024-to1518"},
    transmitted_total_octet_frames_from1518_to_max{YType::uint64, "transmitted-total-octet-frames-from1518-to-max"},
    transmitted_good_frames{YType::uint64, "transmitted-good-frames"},
    transmitted_unicast_frames{YType::uint64, "transmitted-unicast-frames"},
    transmitted_multicast_frames{YType::uint64, "transmitted-multicast-frames"},
    transmitted_broadcast_frames{YType::uint64, "transmitted-broadcast-frames"},
    buffer_underrun_packet_drops{YType::uint64, "buffer-underrun-packet-drops"},
    aborted_packet_drops{YType::uint64, "aborted-packet-drops"},
    uncounted_dropped_frames{YType::uint64, "uncounted-dropped-frames"},
    miscellaneous_output_errors{YType::uint64, "miscellaneous-output-errors"}
{

    yang_name = "statistic"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetInterface::Statistics::Statistic::~Statistic()
{
}

bool EthernetInterface::Statistics::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| received_total_bytes.is_set
	|| received_good_bytes.is_set
	|| received_total_frames.is_set
	|| received8021q_frames.is_set
	|| received_pause_frames.is_set
	|| received_unknown_opcodes.is_set
	|| received_total64_octet_frames.is_set
	|| received_total_octet_frames_from65_to127.is_set
	|| received_total_octet_frames_from128_to255.is_set
	|| received_total_octet_frames_from256_to511.is_set
	|| received_total_octet_frames_from512_to1023.is_set
	|| received_total_octet_frames_from1024_to1518.is_set
	|| received_total_octet_frames_from1519_to_max.is_set
	|| received_good_frames.is_set
	|| received_unicast_frames.is_set
	|| received_multicast_frames.is_set
	|| received_broadcast_frames.is_set
	|| number_of_buffer_overrun_packets_dropped.is_set
	|| number_of_aborted_packets_dropped.is_set
	|| numberof_invalid_vlan_id_packets_dropped.is_set
	|| invalid_dest_mac_drop_packets.is_set
	|| invalid_encap_drop_packets.is_set
	|| number_of_miscellaneous_packets_dropped.is_set
	|| dropped_giant_packets_greaterthan_mru.is_set
	|| dropped_ether_stats_undersize_pkts.is_set
	|| dropped_jabbers_packets_greaterthan_mru.is_set
	|| dropped_ether_stats_fragments.is_set
	|| dropped_packets_with_crc_align_errors.is_set
	|| ether_stats_collisions.is_set
	|| symbol_errors.is_set
	|| dropped_miscellaneous_error_packets.is_set
	|| rfc2819_ether_stats_oversized_pkts.is_set
	|| rfc2819_ether_stats_jabbers.is_set
	|| rfc2819_ether_stats_crc_align_errors.is_set
	|| rfc3635dot3_stats_alignment_errors.is_set
	|| total_bytes_transmitted.is_set
	|| total_good_bytes_transmitted.is_set
	|| total_frames_transmitted.is_set
	|| transmitted8021q_frames.is_set
	|| transmitted_total_pause_frames.is_set
	|| transmitted_total64_octet_frames.is_set
	|| transmitted_total_octet_frames_from65_to127.is_set
	|| transmitted_total_octet_frames_from128_to255.is_set
	|| transmitted_total_octet_frames_from256_to511.is_set
	|| transmitted_total_octet_frames_from512_to1023.is_set
	|| transmitted_total_octet_frames_from1024_to1518.is_set
	|| transmitted_total_octet_frames_from1518_to_max.is_set
	|| transmitted_good_frames.is_set
	|| transmitted_unicast_frames.is_set
	|| transmitted_multicast_frames.is_set
	|| transmitted_broadcast_frames.is_set
	|| buffer_underrun_packet_drops.is_set
	|| aborted_packet_drops.is_set
	|| uncounted_dropped_frames.is_set
	|| miscellaneous_output_errors.is_set;
}

bool EthernetInterface::Statistics::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(received_total_bytes.yfilter)
	|| ydk::is_set(received_good_bytes.yfilter)
	|| ydk::is_set(received_total_frames.yfilter)
	|| ydk::is_set(received8021q_frames.yfilter)
	|| ydk::is_set(received_pause_frames.yfilter)
	|| ydk::is_set(received_unknown_opcodes.yfilter)
	|| ydk::is_set(received_total64_octet_frames.yfilter)
	|| ydk::is_set(received_total_octet_frames_from65_to127.yfilter)
	|| ydk::is_set(received_total_octet_frames_from128_to255.yfilter)
	|| ydk::is_set(received_total_octet_frames_from256_to511.yfilter)
	|| ydk::is_set(received_total_octet_frames_from512_to1023.yfilter)
	|| ydk::is_set(received_total_octet_frames_from1024_to1518.yfilter)
	|| ydk::is_set(received_total_octet_frames_from1519_to_max.yfilter)
	|| ydk::is_set(received_good_frames.yfilter)
	|| ydk::is_set(received_unicast_frames.yfilter)
	|| ydk::is_set(received_multicast_frames.yfilter)
	|| ydk::is_set(received_broadcast_frames.yfilter)
	|| ydk::is_set(number_of_buffer_overrun_packets_dropped.yfilter)
	|| ydk::is_set(number_of_aborted_packets_dropped.yfilter)
	|| ydk::is_set(numberof_invalid_vlan_id_packets_dropped.yfilter)
	|| ydk::is_set(invalid_dest_mac_drop_packets.yfilter)
	|| ydk::is_set(invalid_encap_drop_packets.yfilter)
	|| ydk::is_set(number_of_miscellaneous_packets_dropped.yfilter)
	|| ydk::is_set(dropped_giant_packets_greaterthan_mru.yfilter)
	|| ydk::is_set(dropped_ether_stats_undersize_pkts.yfilter)
	|| ydk::is_set(dropped_jabbers_packets_greaterthan_mru.yfilter)
	|| ydk::is_set(dropped_ether_stats_fragments.yfilter)
	|| ydk::is_set(dropped_packets_with_crc_align_errors.yfilter)
	|| ydk::is_set(ether_stats_collisions.yfilter)
	|| ydk::is_set(symbol_errors.yfilter)
	|| ydk::is_set(dropped_miscellaneous_error_packets.yfilter)
	|| ydk::is_set(rfc2819_ether_stats_oversized_pkts.yfilter)
	|| ydk::is_set(rfc2819_ether_stats_jabbers.yfilter)
	|| ydk::is_set(rfc2819_ether_stats_crc_align_errors.yfilter)
	|| ydk::is_set(rfc3635dot3_stats_alignment_errors.yfilter)
	|| ydk::is_set(total_bytes_transmitted.yfilter)
	|| ydk::is_set(total_good_bytes_transmitted.yfilter)
	|| ydk::is_set(total_frames_transmitted.yfilter)
	|| ydk::is_set(transmitted8021q_frames.yfilter)
	|| ydk::is_set(transmitted_total_pause_frames.yfilter)
	|| ydk::is_set(transmitted_total64_octet_frames.yfilter)
	|| ydk::is_set(transmitted_total_octet_frames_from65_to127.yfilter)
	|| ydk::is_set(transmitted_total_octet_frames_from128_to255.yfilter)
	|| ydk::is_set(transmitted_total_octet_frames_from256_to511.yfilter)
	|| ydk::is_set(transmitted_total_octet_frames_from512_to1023.yfilter)
	|| ydk::is_set(transmitted_total_octet_frames_from1024_to1518.yfilter)
	|| ydk::is_set(transmitted_total_octet_frames_from1518_to_max.yfilter)
	|| ydk::is_set(transmitted_good_frames.yfilter)
	|| ydk::is_set(transmitted_unicast_frames.yfilter)
	|| ydk::is_set(transmitted_multicast_frames.yfilter)
	|| ydk::is_set(transmitted_broadcast_frames.yfilter)
	|| ydk::is_set(buffer_underrun_packet_drops.yfilter)
	|| ydk::is_set(aborted_packet_drops.yfilter)
	|| ydk::is_set(uncounted_dropped_frames.yfilter)
	|| ydk::is_set(miscellaneous_output_errors.yfilter);
}

std::string EthernetInterface::Statistics::Statistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetInterface::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Statistics::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (received_total_bytes.is_set || is_set(received_total_bytes.yfilter)) leaf_name_data.push_back(received_total_bytes.get_name_leafdata());
    if (received_good_bytes.is_set || is_set(received_good_bytes.yfilter)) leaf_name_data.push_back(received_good_bytes.get_name_leafdata());
    if (received_total_frames.is_set || is_set(received_total_frames.yfilter)) leaf_name_data.push_back(received_total_frames.get_name_leafdata());
    if (received8021q_frames.is_set || is_set(received8021q_frames.yfilter)) leaf_name_data.push_back(received8021q_frames.get_name_leafdata());
    if (received_pause_frames.is_set || is_set(received_pause_frames.yfilter)) leaf_name_data.push_back(received_pause_frames.get_name_leafdata());
    if (received_unknown_opcodes.is_set || is_set(received_unknown_opcodes.yfilter)) leaf_name_data.push_back(received_unknown_opcodes.get_name_leafdata());
    if (received_total64_octet_frames.is_set || is_set(received_total64_octet_frames.yfilter)) leaf_name_data.push_back(received_total64_octet_frames.get_name_leafdata());
    if (received_total_octet_frames_from65_to127.is_set || is_set(received_total_octet_frames_from65_to127.yfilter)) leaf_name_data.push_back(received_total_octet_frames_from65_to127.get_name_leafdata());
    if (received_total_octet_frames_from128_to255.is_set || is_set(received_total_octet_frames_from128_to255.yfilter)) leaf_name_data.push_back(received_total_octet_frames_from128_to255.get_name_leafdata());
    if (received_total_octet_frames_from256_to511.is_set || is_set(received_total_octet_frames_from256_to511.yfilter)) leaf_name_data.push_back(received_total_octet_frames_from256_to511.get_name_leafdata());
    if (received_total_octet_frames_from512_to1023.is_set || is_set(received_total_octet_frames_from512_to1023.yfilter)) leaf_name_data.push_back(received_total_octet_frames_from512_to1023.get_name_leafdata());
    if (received_total_octet_frames_from1024_to1518.is_set || is_set(received_total_octet_frames_from1024_to1518.yfilter)) leaf_name_data.push_back(received_total_octet_frames_from1024_to1518.get_name_leafdata());
    if (received_total_octet_frames_from1519_to_max.is_set || is_set(received_total_octet_frames_from1519_to_max.yfilter)) leaf_name_data.push_back(received_total_octet_frames_from1519_to_max.get_name_leafdata());
    if (received_good_frames.is_set || is_set(received_good_frames.yfilter)) leaf_name_data.push_back(received_good_frames.get_name_leafdata());
    if (received_unicast_frames.is_set || is_set(received_unicast_frames.yfilter)) leaf_name_data.push_back(received_unicast_frames.get_name_leafdata());
    if (received_multicast_frames.is_set || is_set(received_multicast_frames.yfilter)) leaf_name_data.push_back(received_multicast_frames.get_name_leafdata());
    if (received_broadcast_frames.is_set || is_set(received_broadcast_frames.yfilter)) leaf_name_data.push_back(received_broadcast_frames.get_name_leafdata());
    if (number_of_buffer_overrun_packets_dropped.is_set || is_set(number_of_buffer_overrun_packets_dropped.yfilter)) leaf_name_data.push_back(number_of_buffer_overrun_packets_dropped.get_name_leafdata());
    if (number_of_aborted_packets_dropped.is_set || is_set(number_of_aborted_packets_dropped.yfilter)) leaf_name_data.push_back(number_of_aborted_packets_dropped.get_name_leafdata());
    if (numberof_invalid_vlan_id_packets_dropped.is_set || is_set(numberof_invalid_vlan_id_packets_dropped.yfilter)) leaf_name_data.push_back(numberof_invalid_vlan_id_packets_dropped.get_name_leafdata());
    if (invalid_dest_mac_drop_packets.is_set || is_set(invalid_dest_mac_drop_packets.yfilter)) leaf_name_data.push_back(invalid_dest_mac_drop_packets.get_name_leafdata());
    if (invalid_encap_drop_packets.is_set || is_set(invalid_encap_drop_packets.yfilter)) leaf_name_data.push_back(invalid_encap_drop_packets.get_name_leafdata());
    if (number_of_miscellaneous_packets_dropped.is_set || is_set(number_of_miscellaneous_packets_dropped.yfilter)) leaf_name_data.push_back(number_of_miscellaneous_packets_dropped.get_name_leafdata());
    if (dropped_giant_packets_greaterthan_mru.is_set || is_set(dropped_giant_packets_greaterthan_mru.yfilter)) leaf_name_data.push_back(dropped_giant_packets_greaterthan_mru.get_name_leafdata());
    if (dropped_ether_stats_undersize_pkts.is_set || is_set(dropped_ether_stats_undersize_pkts.yfilter)) leaf_name_data.push_back(dropped_ether_stats_undersize_pkts.get_name_leafdata());
    if (dropped_jabbers_packets_greaterthan_mru.is_set || is_set(dropped_jabbers_packets_greaterthan_mru.yfilter)) leaf_name_data.push_back(dropped_jabbers_packets_greaterthan_mru.get_name_leafdata());
    if (dropped_ether_stats_fragments.is_set || is_set(dropped_ether_stats_fragments.yfilter)) leaf_name_data.push_back(dropped_ether_stats_fragments.get_name_leafdata());
    if (dropped_packets_with_crc_align_errors.is_set || is_set(dropped_packets_with_crc_align_errors.yfilter)) leaf_name_data.push_back(dropped_packets_with_crc_align_errors.get_name_leafdata());
    if (ether_stats_collisions.is_set || is_set(ether_stats_collisions.yfilter)) leaf_name_data.push_back(ether_stats_collisions.get_name_leafdata());
    if (symbol_errors.is_set || is_set(symbol_errors.yfilter)) leaf_name_data.push_back(symbol_errors.get_name_leafdata());
    if (dropped_miscellaneous_error_packets.is_set || is_set(dropped_miscellaneous_error_packets.yfilter)) leaf_name_data.push_back(dropped_miscellaneous_error_packets.get_name_leafdata());
    if (rfc2819_ether_stats_oversized_pkts.is_set || is_set(rfc2819_ether_stats_oversized_pkts.yfilter)) leaf_name_data.push_back(rfc2819_ether_stats_oversized_pkts.get_name_leafdata());
    if (rfc2819_ether_stats_jabbers.is_set || is_set(rfc2819_ether_stats_jabbers.yfilter)) leaf_name_data.push_back(rfc2819_ether_stats_jabbers.get_name_leafdata());
    if (rfc2819_ether_stats_crc_align_errors.is_set || is_set(rfc2819_ether_stats_crc_align_errors.yfilter)) leaf_name_data.push_back(rfc2819_ether_stats_crc_align_errors.get_name_leafdata());
    if (rfc3635dot3_stats_alignment_errors.is_set || is_set(rfc3635dot3_stats_alignment_errors.yfilter)) leaf_name_data.push_back(rfc3635dot3_stats_alignment_errors.get_name_leafdata());
    if (total_bytes_transmitted.is_set || is_set(total_bytes_transmitted.yfilter)) leaf_name_data.push_back(total_bytes_transmitted.get_name_leafdata());
    if (total_good_bytes_transmitted.is_set || is_set(total_good_bytes_transmitted.yfilter)) leaf_name_data.push_back(total_good_bytes_transmitted.get_name_leafdata());
    if (total_frames_transmitted.is_set || is_set(total_frames_transmitted.yfilter)) leaf_name_data.push_back(total_frames_transmitted.get_name_leafdata());
    if (transmitted8021q_frames.is_set || is_set(transmitted8021q_frames.yfilter)) leaf_name_data.push_back(transmitted8021q_frames.get_name_leafdata());
    if (transmitted_total_pause_frames.is_set || is_set(transmitted_total_pause_frames.yfilter)) leaf_name_data.push_back(transmitted_total_pause_frames.get_name_leafdata());
    if (transmitted_total64_octet_frames.is_set || is_set(transmitted_total64_octet_frames.yfilter)) leaf_name_data.push_back(transmitted_total64_octet_frames.get_name_leafdata());
    if (transmitted_total_octet_frames_from65_to127.is_set || is_set(transmitted_total_octet_frames_from65_to127.yfilter)) leaf_name_data.push_back(transmitted_total_octet_frames_from65_to127.get_name_leafdata());
    if (transmitted_total_octet_frames_from128_to255.is_set || is_set(transmitted_total_octet_frames_from128_to255.yfilter)) leaf_name_data.push_back(transmitted_total_octet_frames_from128_to255.get_name_leafdata());
    if (transmitted_total_octet_frames_from256_to511.is_set || is_set(transmitted_total_octet_frames_from256_to511.yfilter)) leaf_name_data.push_back(transmitted_total_octet_frames_from256_to511.get_name_leafdata());
    if (transmitted_total_octet_frames_from512_to1023.is_set || is_set(transmitted_total_octet_frames_from512_to1023.yfilter)) leaf_name_data.push_back(transmitted_total_octet_frames_from512_to1023.get_name_leafdata());
    if (transmitted_total_octet_frames_from1024_to1518.is_set || is_set(transmitted_total_octet_frames_from1024_to1518.yfilter)) leaf_name_data.push_back(transmitted_total_octet_frames_from1024_to1518.get_name_leafdata());
    if (transmitted_total_octet_frames_from1518_to_max.is_set || is_set(transmitted_total_octet_frames_from1518_to_max.yfilter)) leaf_name_data.push_back(transmitted_total_octet_frames_from1518_to_max.get_name_leafdata());
    if (transmitted_good_frames.is_set || is_set(transmitted_good_frames.yfilter)) leaf_name_data.push_back(transmitted_good_frames.get_name_leafdata());
    if (transmitted_unicast_frames.is_set || is_set(transmitted_unicast_frames.yfilter)) leaf_name_data.push_back(transmitted_unicast_frames.get_name_leafdata());
    if (transmitted_multicast_frames.is_set || is_set(transmitted_multicast_frames.yfilter)) leaf_name_data.push_back(transmitted_multicast_frames.get_name_leafdata());
    if (transmitted_broadcast_frames.is_set || is_set(transmitted_broadcast_frames.yfilter)) leaf_name_data.push_back(transmitted_broadcast_frames.get_name_leafdata());
    if (buffer_underrun_packet_drops.is_set || is_set(buffer_underrun_packet_drops.yfilter)) leaf_name_data.push_back(buffer_underrun_packet_drops.get_name_leafdata());
    if (aborted_packet_drops.is_set || is_set(aborted_packet_drops.yfilter)) leaf_name_data.push_back(aborted_packet_drops.get_name_leafdata());
    if (uncounted_dropped_frames.is_set || is_set(uncounted_dropped_frames.yfilter)) leaf_name_data.push_back(uncounted_dropped_frames.get_name_leafdata());
    if (miscellaneous_output_errors.is_set || is_set(miscellaneous_output_errors.yfilter)) leaf_name_data.push_back(miscellaneous_output_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Statistics::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Statistics::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-bytes")
    {
        received_total_bytes = value;
        received_total_bytes.value_namespace = name_space;
        received_total_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-good-bytes")
    {
        received_good_bytes = value;
        received_good_bytes.value_namespace = name_space;
        received_good_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-frames")
    {
        received_total_frames = value;
        received_total_frames.value_namespace = name_space;
        received_total_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received8021q-frames")
    {
        received8021q_frames = value;
        received8021q_frames.value_namespace = name_space;
        received8021q_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-pause-frames")
    {
        received_pause_frames = value;
        received_pause_frames.value_namespace = name_space;
        received_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unknown-opcodes")
    {
        received_unknown_opcodes = value;
        received_unknown_opcodes.value_namespace = name_space;
        received_unknown_opcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total64-octet-frames")
    {
        received_total64_octet_frames = value;
        received_total64_octet_frames.value_namespace = name_space;
        received_total64_octet_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-octet-frames-from65-to127")
    {
        received_total_octet_frames_from65_to127 = value;
        received_total_octet_frames_from65_to127.value_namespace = name_space;
        received_total_octet_frames_from65_to127.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-octet-frames-from128-to255")
    {
        received_total_octet_frames_from128_to255 = value;
        received_total_octet_frames_from128_to255.value_namespace = name_space;
        received_total_octet_frames_from128_to255.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-octet-frames-from256-to511")
    {
        received_total_octet_frames_from256_to511 = value;
        received_total_octet_frames_from256_to511.value_namespace = name_space;
        received_total_octet_frames_from256_to511.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-octet-frames-from512-to1023")
    {
        received_total_octet_frames_from512_to1023 = value;
        received_total_octet_frames_from512_to1023.value_namespace = name_space;
        received_total_octet_frames_from512_to1023.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-octet-frames-from1024-to1518")
    {
        received_total_octet_frames_from1024_to1518 = value;
        received_total_octet_frames_from1024_to1518.value_namespace = name_space;
        received_total_octet_frames_from1024_to1518.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-total-octet-frames-from1519-to-max")
    {
        received_total_octet_frames_from1519_to_max = value;
        received_total_octet_frames_from1519_to_max.value_namespace = name_space;
        received_total_octet_frames_from1519_to_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-good-frames")
    {
        received_good_frames = value;
        received_good_frames.value_namespace = name_space;
        received_good_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unicast-frames")
    {
        received_unicast_frames = value;
        received_unicast_frames.value_namespace = name_space;
        received_unicast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-multicast-frames")
    {
        received_multicast_frames = value;
        received_multicast_frames.value_namespace = name_space;
        received_multicast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-broadcast-frames")
    {
        received_broadcast_frames = value;
        received_broadcast_frames.value_namespace = name_space;
        received_broadcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffer-overrun-packets-dropped")
    {
        number_of_buffer_overrun_packets_dropped = value;
        number_of_buffer_overrun_packets_dropped.value_namespace = name_space;
        number_of_buffer_overrun_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-aborted-packets-dropped")
    {
        number_of_aborted_packets_dropped = value;
        number_of_aborted_packets_dropped.value_namespace = name_space;
        number_of_aborted_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numberof-invalid-vlan-id-packets-dropped")
    {
        numberof_invalid_vlan_id_packets_dropped = value;
        numberof_invalid_vlan_id_packets_dropped.value_namespace = name_space;
        numberof_invalid_vlan_id_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-dest-mac-drop-packets")
    {
        invalid_dest_mac_drop_packets = value;
        invalid_dest_mac_drop_packets.value_namespace = name_space;
        invalid_dest_mac_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-encap-drop-packets")
    {
        invalid_encap_drop_packets = value;
        invalid_encap_drop_packets.value_namespace = name_space;
        invalid_encap_drop_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-miscellaneous-packets-dropped")
    {
        number_of_miscellaneous_packets_dropped = value;
        number_of_miscellaneous_packets_dropped.value_namespace = name_space;
        number_of_miscellaneous_packets_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-giant-packets-greaterthan-mru")
    {
        dropped_giant_packets_greaterthan_mru = value;
        dropped_giant_packets_greaterthan_mru.value_namespace = name_space;
        dropped_giant_packets_greaterthan_mru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-ether-stats-undersize-pkts")
    {
        dropped_ether_stats_undersize_pkts = value;
        dropped_ether_stats_undersize_pkts.value_namespace = name_space;
        dropped_ether_stats_undersize_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-jabbers-packets-greaterthan-mru")
    {
        dropped_jabbers_packets_greaterthan_mru = value;
        dropped_jabbers_packets_greaterthan_mru.value_namespace = name_space;
        dropped_jabbers_packets_greaterthan_mru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-ether-stats-fragments")
    {
        dropped_ether_stats_fragments = value;
        dropped_ether_stats_fragments.value_namespace = name_space;
        dropped_ether_stats_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets-with-crc-align-errors")
    {
        dropped_packets_with_crc_align_errors = value;
        dropped_packets_with_crc_align_errors.value_namespace = name_space;
        dropped_packets_with_crc_align_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-stats-collisions")
    {
        ether_stats_collisions = value;
        ether_stats_collisions.value_namespace = name_space;
        ether_stats_collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbol-errors")
    {
        symbol_errors = value;
        symbol_errors.value_namespace = name_space;
        symbol_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-miscellaneous-error-packets")
    {
        dropped_miscellaneous_error_packets = value;
        dropped_miscellaneous_error_packets.value_namespace = name_space;
        dropped_miscellaneous_error_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc2819-ether-stats-oversized-pkts")
    {
        rfc2819_ether_stats_oversized_pkts = value;
        rfc2819_ether_stats_oversized_pkts.value_namespace = name_space;
        rfc2819_ether_stats_oversized_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc2819-ether-stats-jabbers")
    {
        rfc2819_ether_stats_jabbers = value;
        rfc2819_ether_stats_jabbers.value_namespace = name_space;
        rfc2819_ether_stats_jabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc2819-ether-stats-crc-align-errors")
    {
        rfc2819_ether_stats_crc_align_errors = value;
        rfc2819_ether_stats_crc_align_errors.value_namespace = name_space;
        rfc2819_ether_stats_crc_align_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc3635dot3-stats-alignment-errors")
    {
        rfc3635dot3_stats_alignment_errors = value;
        rfc3635dot3_stats_alignment_errors.value_namespace = name_space;
        rfc3635dot3_stats_alignment_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bytes-transmitted")
    {
        total_bytes_transmitted = value;
        total_bytes_transmitted.value_namespace = name_space;
        total_bytes_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-good-bytes-transmitted")
    {
        total_good_bytes_transmitted = value;
        total_good_bytes_transmitted.value_namespace = name_space;
        total_good_bytes_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-frames-transmitted")
    {
        total_frames_transmitted = value;
        total_frames_transmitted.value_namespace = name_space;
        total_frames_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted8021q-frames")
    {
        transmitted8021q_frames = value;
        transmitted8021q_frames.value_namespace = name_space;
        transmitted8021q_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-pause-frames")
    {
        transmitted_total_pause_frames = value;
        transmitted_total_pause_frames.value_namespace = name_space;
        transmitted_total_pause_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total64-octet-frames")
    {
        transmitted_total64_octet_frames = value;
        transmitted_total64_octet_frames.value_namespace = name_space;
        transmitted_total64_octet_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-octet-frames-from65-to127")
    {
        transmitted_total_octet_frames_from65_to127 = value;
        transmitted_total_octet_frames_from65_to127.value_namespace = name_space;
        transmitted_total_octet_frames_from65_to127.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-octet-frames-from128-to255")
    {
        transmitted_total_octet_frames_from128_to255 = value;
        transmitted_total_octet_frames_from128_to255.value_namespace = name_space;
        transmitted_total_octet_frames_from128_to255.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-octet-frames-from256-to511")
    {
        transmitted_total_octet_frames_from256_to511 = value;
        transmitted_total_octet_frames_from256_to511.value_namespace = name_space;
        transmitted_total_octet_frames_from256_to511.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-octet-frames-from512-to1023")
    {
        transmitted_total_octet_frames_from512_to1023 = value;
        transmitted_total_octet_frames_from512_to1023.value_namespace = name_space;
        transmitted_total_octet_frames_from512_to1023.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-octet-frames-from1024-to1518")
    {
        transmitted_total_octet_frames_from1024_to1518 = value;
        transmitted_total_octet_frames_from1024_to1518.value_namespace = name_space;
        transmitted_total_octet_frames_from1024_to1518.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-total-octet-frames-from1518-to-max")
    {
        transmitted_total_octet_frames_from1518_to_max = value;
        transmitted_total_octet_frames_from1518_to_max.value_namespace = name_space;
        transmitted_total_octet_frames_from1518_to_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-good-frames")
    {
        transmitted_good_frames = value;
        transmitted_good_frames.value_namespace = name_space;
        transmitted_good_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-unicast-frames")
    {
        transmitted_unicast_frames = value;
        transmitted_unicast_frames.value_namespace = name_space;
        transmitted_unicast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-multicast-frames")
    {
        transmitted_multicast_frames = value;
        transmitted_multicast_frames.value_namespace = name_space;
        transmitted_multicast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-broadcast-frames")
    {
        transmitted_broadcast_frames = value;
        transmitted_broadcast_frames.value_namespace = name_space;
        transmitted_broadcast_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer-underrun-packet-drops")
    {
        buffer_underrun_packet_drops = value;
        buffer_underrun_packet_drops.value_namespace = name_space;
        buffer_underrun_packet_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aborted-packet-drops")
    {
        aborted_packet_drops = value;
        aborted_packet_drops.value_namespace = name_space;
        aborted_packet_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncounted-dropped-frames")
    {
        uncounted_dropped_frames = value;
        uncounted_dropped_frames.value_namespace = name_space;
        uncounted_dropped_frames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miscellaneous-output-errors")
    {
        miscellaneous_output_errors = value;
        miscellaneous_output_errors.value_namespace = name_space;
        miscellaneous_output_errors.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Statistics::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "received-total-bytes")
    {
        received_total_bytes.yfilter = yfilter;
    }
    if(value_path == "received-good-bytes")
    {
        received_good_bytes.yfilter = yfilter;
    }
    if(value_path == "received-total-frames")
    {
        received_total_frames.yfilter = yfilter;
    }
    if(value_path == "received8021q-frames")
    {
        received8021q_frames.yfilter = yfilter;
    }
    if(value_path == "received-pause-frames")
    {
        received_pause_frames.yfilter = yfilter;
    }
    if(value_path == "received-unknown-opcodes")
    {
        received_unknown_opcodes.yfilter = yfilter;
    }
    if(value_path == "received-total64-octet-frames")
    {
        received_total64_octet_frames.yfilter = yfilter;
    }
    if(value_path == "received-total-octet-frames-from65-to127")
    {
        received_total_octet_frames_from65_to127.yfilter = yfilter;
    }
    if(value_path == "received-total-octet-frames-from128-to255")
    {
        received_total_octet_frames_from128_to255.yfilter = yfilter;
    }
    if(value_path == "received-total-octet-frames-from256-to511")
    {
        received_total_octet_frames_from256_to511.yfilter = yfilter;
    }
    if(value_path == "received-total-octet-frames-from512-to1023")
    {
        received_total_octet_frames_from512_to1023.yfilter = yfilter;
    }
    if(value_path == "received-total-octet-frames-from1024-to1518")
    {
        received_total_octet_frames_from1024_to1518.yfilter = yfilter;
    }
    if(value_path == "received-total-octet-frames-from1519-to-max")
    {
        received_total_octet_frames_from1519_to_max.yfilter = yfilter;
    }
    if(value_path == "received-good-frames")
    {
        received_good_frames.yfilter = yfilter;
    }
    if(value_path == "received-unicast-frames")
    {
        received_unicast_frames.yfilter = yfilter;
    }
    if(value_path == "received-multicast-frames")
    {
        received_multicast_frames.yfilter = yfilter;
    }
    if(value_path == "received-broadcast-frames")
    {
        received_broadcast_frames.yfilter = yfilter;
    }
    if(value_path == "number-of-buffer-overrun-packets-dropped")
    {
        number_of_buffer_overrun_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "number-of-aborted-packets-dropped")
    {
        number_of_aborted_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "numberof-invalid-vlan-id-packets-dropped")
    {
        numberof_invalid_vlan_id_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "invalid-dest-mac-drop-packets")
    {
        invalid_dest_mac_drop_packets.yfilter = yfilter;
    }
    if(value_path == "invalid-encap-drop-packets")
    {
        invalid_encap_drop_packets.yfilter = yfilter;
    }
    if(value_path == "number-of-miscellaneous-packets-dropped")
    {
        number_of_miscellaneous_packets_dropped.yfilter = yfilter;
    }
    if(value_path == "dropped-giant-packets-greaterthan-mru")
    {
        dropped_giant_packets_greaterthan_mru.yfilter = yfilter;
    }
    if(value_path == "dropped-ether-stats-undersize-pkts")
    {
        dropped_ether_stats_undersize_pkts.yfilter = yfilter;
    }
    if(value_path == "dropped-jabbers-packets-greaterthan-mru")
    {
        dropped_jabbers_packets_greaterthan_mru.yfilter = yfilter;
    }
    if(value_path == "dropped-ether-stats-fragments")
    {
        dropped_ether_stats_fragments.yfilter = yfilter;
    }
    if(value_path == "dropped-packets-with-crc-align-errors")
    {
        dropped_packets_with_crc_align_errors.yfilter = yfilter;
    }
    if(value_path == "ether-stats-collisions")
    {
        ether_stats_collisions.yfilter = yfilter;
    }
    if(value_path == "symbol-errors")
    {
        symbol_errors.yfilter = yfilter;
    }
    if(value_path == "dropped-miscellaneous-error-packets")
    {
        dropped_miscellaneous_error_packets.yfilter = yfilter;
    }
    if(value_path == "rfc2819-ether-stats-oversized-pkts")
    {
        rfc2819_ether_stats_oversized_pkts.yfilter = yfilter;
    }
    if(value_path == "rfc2819-ether-stats-jabbers")
    {
        rfc2819_ether_stats_jabbers.yfilter = yfilter;
    }
    if(value_path == "rfc2819-ether-stats-crc-align-errors")
    {
        rfc2819_ether_stats_crc_align_errors.yfilter = yfilter;
    }
    if(value_path == "rfc3635dot3-stats-alignment-errors")
    {
        rfc3635dot3_stats_alignment_errors.yfilter = yfilter;
    }
    if(value_path == "total-bytes-transmitted")
    {
        total_bytes_transmitted.yfilter = yfilter;
    }
    if(value_path == "total-good-bytes-transmitted")
    {
        total_good_bytes_transmitted.yfilter = yfilter;
    }
    if(value_path == "total-frames-transmitted")
    {
        total_frames_transmitted.yfilter = yfilter;
    }
    if(value_path == "transmitted8021q-frames")
    {
        transmitted8021q_frames.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-pause-frames")
    {
        transmitted_total_pause_frames.yfilter = yfilter;
    }
    if(value_path == "transmitted-total64-octet-frames")
    {
        transmitted_total64_octet_frames.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-octet-frames-from65-to127")
    {
        transmitted_total_octet_frames_from65_to127.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-octet-frames-from128-to255")
    {
        transmitted_total_octet_frames_from128_to255.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-octet-frames-from256-to511")
    {
        transmitted_total_octet_frames_from256_to511.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-octet-frames-from512-to1023")
    {
        transmitted_total_octet_frames_from512_to1023.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-octet-frames-from1024-to1518")
    {
        transmitted_total_octet_frames_from1024_to1518.yfilter = yfilter;
    }
    if(value_path == "transmitted-total-octet-frames-from1518-to-max")
    {
        transmitted_total_octet_frames_from1518_to_max.yfilter = yfilter;
    }
    if(value_path == "transmitted-good-frames")
    {
        transmitted_good_frames.yfilter = yfilter;
    }
    if(value_path == "transmitted-unicast-frames")
    {
        transmitted_unicast_frames.yfilter = yfilter;
    }
    if(value_path == "transmitted-multicast-frames")
    {
        transmitted_multicast_frames.yfilter = yfilter;
    }
    if(value_path == "transmitted-broadcast-frames")
    {
        transmitted_broadcast_frames.yfilter = yfilter;
    }
    if(value_path == "buffer-underrun-packet-drops")
    {
        buffer_underrun_packet_drops.yfilter = yfilter;
    }
    if(value_path == "aborted-packet-drops")
    {
        aborted_packet_drops.yfilter = yfilter;
    }
    if(value_path == "uncounted-dropped-frames")
    {
        uncounted_dropped_frames.yfilter = yfilter;
    }
    if(value_path == "miscellaneous-output-errors")
    {
        miscellaneous_output_errors.yfilter = yfilter;
    }
}

bool EthernetInterface::Statistics::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "received-total-bytes" || name == "received-good-bytes" || name == "received-total-frames" || name == "received8021q-frames" || name == "received-pause-frames" || name == "received-unknown-opcodes" || name == "received-total64-octet-frames" || name == "received-total-octet-frames-from65-to127" || name == "received-total-octet-frames-from128-to255" || name == "received-total-octet-frames-from256-to511" || name == "received-total-octet-frames-from512-to1023" || name == "received-total-octet-frames-from1024-to1518" || name == "received-total-octet-frames-from1519-to-max" || name == "received-good-frames" || name == "received-unicast-frames" || name == "received-multicast-frames" || name == "received-broadcast-frames" || name == "number-of-buffer-overrun-packets-dropped" || name == "number-of-aborted-packets-dropped" || name == "numberof-invalid-vlan-id-packets-dropped" || name == "invalid-dest-mac-drop-packets" || name == "invalid-encap-drop-packets" || name == "number-of-miscellaneous-packets-dropped" || name == "dropped-giant-packets-greaterthan-mru" || name == "dropped-ether-stats-undersize-pkts" || name == "dropped-jabbers-packets-greaterthan-mru" || name == "dropped-ether-stats-fragments" || name == "dropped-packets-with-crc-align-errors" || name == "ether-stats-collisions" || name == "symbol-errors" || name == "dropped-miscellaneous-error-packets" || name == "rfc2819-ether-stats-oversized-pkts" || name == "rfc2819-ether-stats-jabbers" || name == "rfc2819-ether-stats-crc-align-errors" || name == "rfc3635dot3-stats-alignment-errors" || name == "total-bytes-transmitted" || name == "total-good-bytes-transmitted" || name == "total-frames-transmitted" || name == "transmitted8021q-frames" || name == "transmitted-total-pause-frames" || name == "transmitted-total64-octet-frames" || name == "transmitted-total-octet-frames-from65-to127" || name == "transmitted-total-octet-frames-from128-to255" || name == "transmitted-total-octet-frames-from256-to511" || name == "transmitted-total-octet-frames-from512-to1023" || name == "transmitted-total-octet-frames-from1024-to1518" || name == "transmitted-total-octet-frames-from1518-to-max" || name == "transmitted-good-frames" || name == "transmitted-unicast-frames" || name == "transmitted-multicast-frames" || name == "transmitted-broadcast-frames" || name == "buffer-underrun-packet-drops" || name == "aborted-packet-drops" || name == "uncounted-dropped-frames" || name == "miscellaneous-output-errors")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "ethernet-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetInterface::Interfaces::~Interfaces()
{
}

bool EthernetInterface::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetInterface::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetInterface::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetInterface::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<EthernetInterface::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetInterface::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetInterface::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetInterface::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    admin_state{YType::enumeration, "admin-state"},
    oper_state_up{YType::boolean, "oper-state-up"}
        ,
    phy_info(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo>())
    , layer1_info(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info>())
    , mac_info(std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo>())
    , transport_info(std::make_shared<EthernetInterface::Interfaces::Interface::TransportInfo>())
{
    phy_info->parent = this;
    layer1_info->parent = this;
    mac_info->parent = this;
    transport_info->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetInterface::Interfaces::Interface::~Interface()
{
}

bool EthernetInterface::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| admin_state.is_set
	|| oper_state_up.is_set
	|| (phy_info !=  nullptr && phy_info->has_data())
	|| (layer1_info !=  nullptr && layer1_info->has_data())
	|| (mac_info !=  nullptr && mac_info->has_data())
	|| (transport_info !=  nullptr && transport_info->has_data());
}

bool EthernetInterface::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state_up.yfilter)
	|| (phy_info !=  nullptr && phy_info->has_operation())
	|| (layer1_info !=  nullptr && layer1_info->has_operation())
	|| (mac_info !=  nullptr && mac_info->has_operation())
	|| (transport_info !=  nullptr && transport_info->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetInterface::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state_up.is_set || is_set(oper_state_up.yfilter)) leaf_name_data.push_back(oper_state_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "phy-info")
    {
        if(phy_info == nullptr)
        {
            phy_info = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo>();
        }
        return phy_info;
    }

    if(child_yang_name == "layer1-info")
    {
        if(layer1_info == nullptr)
        {
            layer1_info = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info>();
        }
        return layer1_info;
    }

    if(child_yang_name == "mac-info")
    {
        if(mac_info == nullptr)
        {
            mac_info = std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo>();
        }
        return mac_info;
    }

    if(child_yang_name == "transport-info")
    {
        if(transport_info == nullptr)
        {
            transport_info = std::make_shared<EthernetInterface::Interfaces::Interface::TransportInfo>();
        }
        return transport_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(phy_info != nullptr)
    {
        children["phy-info"] = phy_info;
    }

    if(layer1_info != nullptr)
    {
        children["layer1-info"] = layer1_info;
    }

    if(mac_info != nullptr)
    {
        children["mac-info"] = mac_info;
    }

    if(transport_info != nullptr)
    {
        children["transport-info"] = transport_info;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-state-up")
    {
        oper_state_up = value;
        oper_state_up.value_namespace = name_space;
        oper_state_up.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper-state-up")
    {
        oper_state_up.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phy-info" || name == "layer1-info" || name == "mac-info" || name == "transport-info" || name == "interface-name" || name == "admin-state" || name == "oper-state-up")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyInfo()
    :
    media_type{YType::enumeration, "media-type"},
    phy_present{YType::enumeration, "phy-present"},
    loopback{YType::enumeration, "loopback"}
        ,
    phy_details(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails>())
    , fec_details(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails>())
    , extended_loopback(this, {})
{
    phy_details->parent = this;
    fec_details->parent = this;

    yang_name = "phy-info"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::~PhyInfo()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_loopback.len(); index++)
    {
        if(extended_loopback[index]->has_data())
            return true;
    }
    return media_type.is_set
	|| phy_present.is_set
	|| loopback.is_set
	|| (phy_details !=  nullptr && phy_details->has_data())
	|| (fec_details !=  nullptr && fec_details->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::has_operation() const
{
    for (std::size_t index=0; index<extended_loopback.len(); index++)
    {
        if(extended_loopback[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(phy_present.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| (phy_details !=  nullptr && phy_details->has_operation())
	|| (fec_details !=  nullptr && fec_details->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phy-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (phy_present.is_set || is_set(phy_present.yfilter)) leaf_name_data.push_back(phy_present.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "phy-details")
    {
        if(phy_details == nullptr)
        {
            phy_details = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails>();
        }
        return phy_details;
    }

    if(child_yang_name == "fec-details")
    {
        if(fec_details == nullptr)
        {
            fec_details = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails>();
        }
        return fec_details;
    }

    if(child_yang_name == "extended-loopback")
    {
        auto c = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback>();
        c->parent = this;
        extended_loopback.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(phy_details != nullptr)
    {
        children["phy-details"] = phy_details;
    }

    if(fec_details != nullptr)
    {
        children["fec-details"] = fec_details;
    }

    count = 0;
    for (auto c : extended_loopback.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phy-present")
    {
        phy_present = value;
        phy_present.value_namespace = name_space;
        phy_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "phy-present")
    {
        phy_present.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phy-details" || name == "fec-details" || name == "extended-loopback" || name == "media-type" || name == "phy-present" || name == "loopback")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::PhyDetails()
    :
    vendor{YType::str, "vendor"},
    vendor_part_number{YType::str, "vendor-part-number"},
    vendor_serial_number{YType::str, "vendor-serial-number"},
    transceiver_temperature{YType::int32, "transceiver-temperature"},
    transceiver_voltage{YType::int32, "transceiver-voltage"},
    transceiver_tx_power{YType::int32, "transceiver-tx-power"},
    transceiver_rx_power{YType::int32, "transceiver-rx-power"},
    transceiver_tx_bias{YType::int32, "transceiver-tx-bias"},
    optics_wavelength{YType::uint32, "optics-wavelength"},
    optics_type{YType::str, "optics-type"},
    revision_number{YType::str, "revision-number"}
        ,
    lane_field_validity(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity>())
    , dig_opt_mon_alarm_thresholds(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds>())
    , dig_opt_mon_alarms(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms>())
    , lane(this, {})
{
    lane_field_validity->parent = this;
    dig_opt_mon_alarm_thresholds->parent = this;
    dig_opt_mon_alarms->parent = this;

    yang_name = "phy-details"; yang_parent_name = "phy-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::~PhyDetails()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lane.len(); index++)
    {
        if(lane[index]->has_data())
            return true;
    }
    return vendor.is_set
	|| vendor_part_number.is_set
	|| vendor_serial_number.is_set
	|| transceiver_temperature.is_set
	|| transceiver_voltage.is_set
	|| transceiver_tx_power.is_set
	|| transceiver_rx_power.is_set
	|| transceiver_tx_bias.is_set
	|| optics_wavelength.is_set
	|| optics_type.is_set
	|| revision_number.is_set
	|| (lane_field_validity !=  nullptr && lane_field_validity->has_data())
	|| (dig_opt_mon_alarm_thresholds !=  nullptr && dig_opt_mon_alarm_thresholds->has_data())
	|| (dig_opt_mon_alarms !=  nullptr && dig_opt_mon_alarms->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::has_operation() const
{
    for (std::size_t index=0; index<lane.len(); index++)
    {
        if(lane[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(vendor_part_number.yfilter)
	|| ydk::is_set(vendor_serial_number.yfilter)
	|| ydk::is_set(transceiver_temperature.yfilter)
	|| ydk::is_set(transceiver_voltage.yfilter)
	|| ydk::is_set(transceiver_tx_power.yfilter)
	|| ydk::is_set(transceiver_rx_power.yfilter)
	|| ydk::is_set(transceiver_tx_bias.yfilter)
	|| ydk::is_set(optics_wavelength.yfilter)
	|| ydk::is_set(optics_type.yfilter)
	|| ydk::is_set(revision_number.yfilter)
	|| (lane_field_validity !=  nullptr && lane_field_validity->has_operation())
	|| (dig_opt_mon_alarm_thresholds !=  nullptr && dig_opt_mon_alarm_thresholds->has_operation())
	|| (dig_opt_mon_alarms !=  nullptr && dig_opt_mon_alarms->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phy-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (vendor_part_number.is_set || is_set(vendor_part_number.yfilter)) leaf_name_data.push_back(vendor_part_number.get_name_leafdata());
    if (vendor_serial_number.is_set || is_set(vendor_serial_number.yfilter)) leaf_name_data.push_back(vendor_serial_number.get_name_leafdata());
    if (transceiver_temperature.is_set || is_set(transceiver_temperature.yfilter)) leaf_name_data.push_back(transceiver_temperature.get_name_leafdata());
    if (transceiver_voltage.is_set || is_set(transceiver_voltage.yfilter)) leaf_name_data.push_back(transceiver_voltage.get_name_leafdata());
    if (transceiver_tx_power.is_set || is_set(transceiver_tx_power.yfilter)) leaf_name_data.push_back(transceiver_tx_power.get_name_leafdata());
    if (transceiver_rx_power.is_set || is_set(transceiver_rx_power.yfilter)) leaf_name_data.push_back(transceiver_rx_power.get_name_leafdata());
    if (transceiver_tx_bias.is_set || is_set(transceiver_tx_bias.yfilter)) leaf_name_data.push_back(transceiver_tx_bias.get_name_leafdata());
    if (optics_wavelength.is_set || is_set(optics_wavelength.yfilter)) leaf_name_data.push_back(optics_wavelength.get_name_leafdata());
    if (optics_type.is_set || is_set(optics_type.yfilter)) leaf_name_data.push_back(optics_type.get_name_leafdata());
    if (revision_number.is_set || is_set(revision_number.yfilter)) leaf_name_data.push_back(revision_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lane-field-validity")
    {
        if(lane_field_validity == nullptr)
        {
            lane_field_validity = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity>();
        }
        return lane_field_validity;
    }

    if(child_yang_name == "dig-opt-mon-alarm-thresholds")
    {
        if(dig_opt_mon_alarm_thresholds == nullptr)
        {
            dig_opt_mon_alarm_thresholds = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds>();
        }
        return dig_opt_mon_alarm_thresholds;
    }

    if(child_yang_name == "dig-opt-mon-alarms")
    {
        if(dig_opt_mon_alarms == nullptr)
        {
            dig_opt_mon_alarms = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms>();
        }
        return dig_opt_mon_alarms;
    }

    if(child_yang_name == "lane")
    {
        auto c = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane>();
        c->parent = this;
        lane.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lane_field_validity != nullptr)
    {
        children["lane-field-validity"] = lane_field_validity;
    }

    if(dig_opt_mon_alarm_thresholds != nullptr)
    {
        children["dig-opt-mon-alarm-thresholds"] = dig_opt_mon_alarm_thresholds;
    }

    if(dig_opt_mon_alarms != nullptr)
    {
        children["dig-opt-mon-alarms"] = dig_opt_mon_alarms;
    }

    count = 0;
    for (auto c : lane.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-part-number")
    {
        vendor_part_number = value;
        vendor_part_number.value_namespace = name_space;
        vendor_part_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-serial-number")
    {
        vendor_serial_number = value;
        vendor_serial_number.value_namespace = name_space;
        vendor_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-temperature")
    {
        transceiver_temperature = value;
        transceiver_temperature.value_namespace = name_space;
        transceiver_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-voltage")
    {
        transceiver_voltage = value;
        transceiver_voltage.value_namespace = name_space;
        transceiver_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-tx-power")
    {
        transceiver_tx_power = value;
        transceiver_tx_power.value_namespace = name_space;
        transceiver_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-rx-power")
    {
        transceiver_rx_power = value;
        transceiver_rx_power.value_namespace = name_space;
        transceiver_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-tx-bias")
    {
        transceiver_tx_bias = value;
        transceiver_tx_bias.value_namespace = name_space;
        transceiver_tx_bias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-wavelength")
    {
        optics_wavelength = value;
        optics_wavelength.value_namespace = name_space;
        optics_wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optics-type")
    {
        optics_type = value;
        optics_type.value_namespace = name_space;
        optics_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision-number")
    {
        revision_number = value;
        revision_number.value_namespace = name_space;
        revision_number.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "vendor-part-number")
    {
        vendor_part_number.yfilter = yfilter;
    }
    if(value_path == "vendor-serial-number")
    {
        vendor_serial_number.yfilter = yfilter;
    }
    if(value_path == "transceiver-temperature")
    {
        transceiver_temperature.yfilter = yfilter;
    }
    if(value_path == "transceiver-voltage")
    {
        transceiver_voltage.yfilter = yfilter;
    }
    if(value_path == "transceiver-tx-power")
    {
        transceiver_tx_power.yfilter = yfilter;
    }
    if(value_path == "transceiver-rx-power")
    {
        transceiver_rx_power.yfilter = yfilter;
    }
    if(value_path == "transceiver-tx-bias")
    {
        transceiver_tx_bias.yfilter = yfilter;
    }
    if(value_path == "optics-wavelength")
    {
        optics_wavelength.yfilter = yfilter;
    }
    if(value_path == "optics-type")
    {
        optics_type.yfilter = yfilter;
    }
    if(value_path == "revision-number")
    {
        revision_number.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lane-field-validity" || name == "dig-opt-mon-alarm-thresholds" || name == "dig-opt-mon-alarms" || name == "lane" || name == "vendor" || name == "vendor-part-number" || name == "vendor-serial-number" || name == "transceiver-temperature" || name == "transceiver-voltage" || name == "transceiver-tx-power" || name == "transceiver-rx-power" || name == "transceiver-tx-bias" || name == "optics-wavelength" || name == "optics-type" || name == "revision-number")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::LaneFieldValidity()
    :
    wavelength_valid{YType::int32, "wavelength-valid"},
    transmit_power_valid{YType::int32, "transmit-power-valid"},
    receive_power_valid{YType::int32, "receive-power-valid"},
    laser_bias_valid{YType::int32, "laser-bias-valid"}
{

    yang_name = "lane-field-validity"; yang_parent_name = "phy-details"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::~LaneFieldValidity()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::has_data() const
{
    if (is_presence_container) return true;
    return wavelength_valid.is_set
	|| transmit_power_valid.is_set
	|| receive_power_valid.is_set
	|| laser_bias_valid.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wavelength_valid.yfilter)
	|| ydk::is_set(transmit_power_valid.yfilter)
	|| ydk::is_set(receive_power_valid.yfilter)
	|| ydk::is_set(laser_bias_valid.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-field-validity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wavelength_valid.is_set || is_set(wavelength_valid.yfilter)) leaf_name_data.push_back(wavelength_valid.get_name_leafdata());
    if (transmit_power_valid.is_set || is_set(transmit_power_valid.yfilter)) leaf_name_data.push_back(transmit_power_valid.get_name_leafdata());
    if (receive_power_valid.is_set || is_set(receive_power_valid.yfilter)) leaf_name_data.push_back(receive_power_valid.get_name_leafdata());
    if (laser_bias_valid.is_set || is_set(laser_bias_valid.yfilter)) leaf_name_data.push_back(laser_bias_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wavelength-valid")
    {
        wavelength_valid = value;
        wavelength_valid.value_namespace = name_space;
        wavelength_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power-valid")
    {
        transmit_power_valid = value;
        transmit_power_valid.value_namespace = name_space;
        transmit_power_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power-valid")
    {
        receive_power_valid = value;
        receive_power_valid.value_namespace = name_space;
        receive_power_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-valid")
    {
        laser_bias_valid = value;
        laser_bias_valid.value_namespace = name_space;
        laser_bias_valid.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wavelength-valid")
    {
        wavelength_valid.yfilter = yfilter;
    }
    if(value_path == "transmit-power-valid")
    {
        transmit_power_valid.yfilter = yfilter;
    }
    if(value_path == "receive-power-valid")
    {
        receive_power_valid.yfilter = yfilter;
    }
    if(value_path == "laser-bias-valid")
    {
        laser_bias_valid.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wavelength-valid" || name == "transmit-power-valid" || name == "receive-power-valid" || name == "laser-bias-valid")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::DigOptMonAlarmThresholds()
    :
    transceiver_temperature_alarm_high{YType::int32, "transceiver-temperature-alarm-high"},
    transceiver_temperature_warning_high{YType::int32, "transceiver-temperature-warning-high"},
    transceiver_temperature_warning_low{YType::int32, "transceiver-temperature-warning-low"},
    transceiver_temperature_alarm_low{YType::int32, "transceiver-temperature-alarm-low"},
    transceiver_voltage_alarm_high{YType::uint32, "transceiver-voltage-alarm-high"},
    transceiver_voltage_warning_high{YType::uint32, "transceiver-voltage-warning-high"},
    transceiver_voltage_warning_low{YType::uint32, "transceiver-voltage-warning-low"},
    transceiver_voltage_alarm_low{YType::uint32, "transceiver-voltage-alarm-low"},
    laser_bias_alarm_high{YType::uint32, "laser-bias-alarm-high"},
    laser_bias_warning_high{YType::uint32, "laser-bias-warning-high"},
    laser_bias_warning_low{YType::uint32, "laser-bias-warning-low"},
    laser_bias_alarm_low{YType::uint32, "laser-bias-alarm-low"},
    optical_transmit_power_alarm_high{YType::uint32, "optical-transmit-power-alarm-high"},
    optical_transmit_power_warning_high{YType::uint32, "optical-transmit-power-warning-high"},
    optical_transmit_power_warning_low{YType::uint32, "optical-transmit-power-warning-low"},
    optical_transmit_power_alarm_low{YType::uint32, "optical-transmit-power-alarm-low"},
    optical_receive_power_alarm_high{YType::uint32, "optical-receive-power-alarm-high"},
    optical_receive_power_warning_high{YType::uint32, "optical-receive-power-warning-high"},
    optical_receive_power_warning_low{YType::uint32, "optical-receive-power-warning-low"},
    optical_receive_power_alarm_low{YType::uint32, "optical-receive-power-alarm-low"}
        ,
    field_validity(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity>())
{
    field_validity->parent = this;

    yang_name = "dig-opt-mon-alarm-thresholds"; yang_parent_name = "phy-details"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::~DigOptMonAlarmThresholds()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::has_data() const
{
    if (is_presence_container) return true;
    return transceiver_temperature_alarm_high.is_set
	|| transceiver_temperature_warning_high.is_set
	|| transceiver_temperature_warning_low.is_set
	|| transceiver_temperature_alarm_low.is_set
	|| transceiver_voltage_alarm_high.is_set
	|| transceiver_voltage_warning_high.is_set
	|| transceiver_voltage_warning_low.is_set
	|| transceiver_voltage_alarm_low.is_set
	|| laser_bias_alarm_high.is_set
	|| laser_bias_warning_high.is_set
	|| laser_bias_warning_low.is_set
	|| laser_bias_alarm_low.is_set
	|| optical_transmit_power_alarm_high.is_set
	|| optical_transmit_power_warning_high.is_set
	|| optical_transmit_power_warning_low.is_set
	|| optical_transmit_power_alarm_low.is_set
	|| optical_receive_power_alarm_high.is_set
	|| optical_receive_power_warning_high.is_set
	|| optical_receive_power_warning_low.is_set
	|| optical_receive_power_alarm_low.is_set
	|| (field_validity !=  nullptr && field_validity->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transceiver_temperature_alarm_high.yfilter)
	|| ydk::is_set(transceiver_temperature_warning_high.yfilter)
	|| ydk::is_set(transceiver_temperature_warning_low.yfilter)
	|| ydk::is_set(transceiver_temperature_alarm_low.yfilter)
	|| ydk::is_set(transceiver_voltage_alarm_high.yfilter)
	|| ydk::is_set(transceiver_voltage_warning_high.yfilter)
	|| ydk::is_set(transceiver_voltage_warning_low.yfilter)
	|| ydk::is_set(transceiver_voltage_alarm_low.yfilter)
	|| ydk::is_set(laser_bias_alarm_high.yfilter)
	|| ydk::is_set(laser_bias_warning_high.yfilter)
	|| ydk::is_set(laser_bias_warning_low.yfilter)
	|| ydk::is_set(laser_bias_alarm_low.yfilter)
	|| ydk::is_set(optical_transmit_power_alarm_high.yfilter)
	|| ydk::is_set(optical_transmit_power_warning_high.yfilter)
	|| ydk::is_set(optical_transmit_power_warning_low.yfilter)
	|| ydk::is_set(optical_transmit_power_alarm_low.yfilter)
	|| ydk::is_set(optical_receive_power_alarm_high.yfilter)
	|| ydk::is_set(optical_receive_power_warning_high.yfilter)
	|| ydk::is_set(optical_receive_power_warning_low.yfilter)
	|| ydk::is_set(optical_receive_power_alarm_low.yfilter)
	|| (field_validity !=  nullptr && field_validity->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dig-opt-mon-alarm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transceiver_temperature_alarm_high.is_set || is_set(transceiver_temperature_alarm_high.yfilter)) leaf_name_data.push_back(transceiver_temperature_alarm_high.get_name_leafdata());
    if (transceiver_temperature_warning_high.is_set || is_set(transceiver_temperature_warning_high.yfilter)) leaf_name_data.push_back(transceiver_temperature_warning_high.get_name_leafdata());
    if (transceiver_temperature_warning_low.is_set || is_set(transceiver_temperature_warning_low.yfilter)) leaf_name_data.push_back(transceiver_temperature_warning_low.get_name_leafdata());
    if (transceiver_temperature_alarm_low.is_set || is_set(transceiver_temperature_alarm_low.yfilter)) leaf_name_data.push_back(transceiver_temperature_alarm_low.get_name_leafdata());
    if (transceiver_voltage_alarm_high.is_set || is_set(transceiver_voltage_alarm_high.yfilter)) leaf_name_data.push_back(transceiver_voltage_alarm_high.get_name_leafdata());
    if (transceiver_voltage_warning_high.is_set || is_set(transceiver_voltage_warning_high.yfilter)) leaf_name_data.push_back(transceiver_voltage_warning_high.get_name_leafdata());
    if (transceiver_voltage_warning_low.is_set || is_set(transceiver_voltage_warning_low.yfilter)) leaf_name_data.push_back(transceiver_voltage_warning_low.get_name_leafdata());
    if (transceiver_voltage_alarm_low.is_set || is_set(transceiver_voltage_alarm_low.yfilter)) leaf_name_data.push_back(transceiver_voltage_alarm_low.get_name_leafdata());
    if (laser_bias_alarm_high.is_set || is_set(laser_bias_alarm_high.yfilter)) leaf_name_data.push_back(laser_bias_alarm_high.get_name_leafdata());
    if (laser_bias_warning_high.is_set || is_set(laser_bias_warning_high.yfilter)) leaf_name_data.push_back(laser_bias_warning_high.get_name_leafdata());
    if (laser_bias_warning_low.is_set || is_set(laser_bias_warning_low.yfilter)) leaf_name_data.push_back(laser_bias_warning_low.get_name_leafdata());
    if (laser_bias_alarm_low.is_set || is_set(laser_bias_alarm_low.yfilter)) leaf_name_data.push_back(laser_bias_alarm_low.get_name_leafdata());
    if (optical_transmit_power_alarm_high.is_set || is_set(optical_transmit_power_alarm_high.yfilter)) leaf_name_data.push_back(optical_transmit_power_alarm_high.get_name_leafdata());
    if (optical_transmit_power_warning_high.is_set || is_set(optical_transmit_power_warning_high.yfilter)) leaf_name_data.push_back(optical_transmit_power_warning_high.get_name_leafdata());
    if (optical_transmit_power_warning_low.is_set || is_set(optical_transmit_power_warning_low.yfilter)) leaf_name_data.push_back(optical_transmit_power_warning_low.get_name_leafdata());
    if (optical_transmit_power_alarm_low.is_set || is_set(optical_transmit_power_alarm_low.yfilter)) leaf_name_data.push_back(optical_transmit_power_alarm_low.get_name_leafdata());
    if (optical_receive_power_alarm_high.is_set || is_set(optical_receive_power_alarm_high.yfilter)) leaf_name_data.push_back(optical_receive_power_alarm_high.get_name_leafdata());
    if (optical_receive_power_warning_high.is_set || is_set(optical_receive_power_warning_high.yfilter)) leaf_name_data.push_back(optical_receive_power_warning_high.get_name_leafdata());
    if (optical_receive_power_warning_low.is_set || is_set(optical_receive_power_warning_low.yfilter)) leaf_name_data.push_back(optical_receive_power_warning_low.get_name_leafdata());
    if (optical_receive_power_alarm_low.is_set || is_set(optical_receive_power_alarm_low.yfilter)) leaf_name_data.push_back(optical_receive_power_alarm_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "field-validity")
    {
        if(field_validity == nullptr)
        {
            field_validity = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity>();
        }
        return field_validity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(field_validity != nullptr)
    {
        children["field-validity"] = field_validity;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transceiver-temperature-alarm-high")
    {
        transceiver_temperature_alarm_high = value;
        transceiver_temperature_alarm_high.value_namespace = name_space;
        transceiver_temperature_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-temperature-warning-high")
    {
        transceiver_temperature_warning_high = value;
        transceiver_temperature_warning_high.value_namespace = name_space;
        transceiver_temperature_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-temperature-warning-low")
    {
        transceiver_temperature_warning_low = value;
        transceiver_temperature_warning_low.value_namespace = name_space;
        transceiver_temperature_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-temperature-alarm-low")
    {
        transceiver_temperature_alarm_low = value;
        transceiver_temperature_alarm_low.value_namespace = name_space;
        transceiver_temperature_alarm_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-voltage-alarm-high")
    {
        transceiver_voltage_alarm_high = value;
        transceiver_voltage_alarm_high.value_namespace = name_space;
        transceiver_voltage_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-voltage-warning-high")
    {
        transceiver_voltage_warning_high = value;
        transceiver_voltage_warning_high.value_namespace = name_space;
        transceiver_voltage_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-voltage-warning-low")
    {
        transceiver_voltage_warning_low = value;
        transceiver_voltage_warning_low.value_namespace = name_space;
        transceiver_voltage_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-voltage-alarm-low")
    {
        transceiver_voltage_alarm_low = value;
        transceiver_voltage_alarm_low.value_namespace = name_space;
        transceiver_voltage_alarm_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-alarm-high")
    {
        laser_bias_alarm_high = value;
        laser_bias_alarm_high.value_namespace = name_space;
        laser_bias_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-warning-high")
    {
        laser_bias_warning_high = value;
        laser_bias_warning_high.value_namespace = name_space;
        laser_bias_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-warning-low")
    {
        laser_bias_warning_low = value;
        laser_bias_warning_low.value_namespace = name_space;
        laser_bias_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-alarm-low")
    {
        laser_bias_alarm_low = value;
        laser_bias_alarm_low.value_namespace = name_space;
        laser_bias_alarm_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-transmit-power-alarm-high")
    {
        optical_transmit_power_alarm_high = value;
        optical_transmit_power_alarm_high.value_namespace = name_space;
        optical_transmit_power_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-transmit-power-warning-high")
    {
        optical_transmit_power_warning_high = value;
        optical_transmit_power_warning_high.value_namespace = name_space;
        optical_transmit_power_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-transmit-power-warning-low")
    {
        optical_transmit_power_warning_low = value;
        optical_transmit_power_warning_low.value_namespace = name_space;
        optical_transmit_power_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-transmit-power-alarm-low")
    {
        optical_transmit_power_alarm_low = value;
        optical_transmit_power_alarm_low.value_namespace = name_space;
        optical_transmit_power_alarm_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-receive-power-alarm-high")
    {
        optical_receive_power_alarm_high = value;
        optical_receive_power_alarm_high.value_namespace = name_space;
        optical_receive_power_alarm_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-receive-power-warning-high")
    {
        optical_receive_power_warning_high = value;
        optical_receive_power_warning_high.value_namespace = name_space;
        optical_receive_power_warning_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-receive-power-warning-low")
    {
        optical_receive_power_warning_low = value;
        optical_receive_power_warning_low.value_namespace = name_space;
        optical_receive_power_warning_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optical-receive-power-alarm-low")
    {
        optical_receive_power_alarm_low = value;
        optical_receive_power_alarm_low.value_namespace = name_space;
        optical_receive_power_alarm_low.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transceiver-temperature-alarm-high")
    {
        transceiver_temperature_alarm_high.yfilter = yfilter;
    }
    if(value_path == "transceiver-temperature-warning-high")
    {
        transceiver_temperature_warning_high.yfilter = yfilter;
    }
    if(value_path == "transceiver-temperature-warning-low")
    {
        transceiver_temperature_warning_low.yfilter = yfilter;
    }
    if(value_path == "transceiver-temperature-alarm-low")
    {
        transceiver_temperature_alarm_low.yfilter = yfilter;
    }
    if(value_path == "transceiver-voltage-alarm-high")
    {
        transceiver_voltage_alarm_high.yfilter = yfilter;
    }
    if(value_path == "transceiver-voltage-warning-high")
    {
        transceiver_voltage_warning_high.yfilter = yfilter;
    }
    if(value_path == "transceiver-voltage-warning-low")
    {
        transceiver_voltage_warning_low.yfilter = yfilter;
    }
    if(value_path == "transceiver-voltage-alarm-low")
    {
        transceiver_voltage_alarm_low.yfilter = yfilter;
    }
    if(value_path == "laser-bias-alarm-high")
    {
        laser_bias_alarm_high.yfilter = yfilter;
    }
    if(value_path == "laser-bias-warning-high")
    {
        laser_bias_warning_high.yfilter = yfilter;
    }
    if(value_path == "laser-bias-warning-low")
    {
        laser_bias_warning_low.yfilter = yfilter;
    }
    if(value_path == "laser-bias-alarm-low")
    {
        laser_bias_alarm_low.yfilter = yfilter;
    }
    if(value_path == "optical-transmit-power-alarm-high")
    {
        optical_transmit_power_alarm_high.yfilter = yfilter;
    }
    if(value_path == "optical-transmit-power-warning-high")
    {
        optical_transmit_power_warning_high.yfilter = yfilter;
    }
    if(value_path == "optical-transmit-power-warning-low")
    {
        optical_transmit_power_warning_low.yfilter = yfilter;
    }
    if(value_path == "optical-transmit-power-alarm-low")
    {
        optical_transmit_power_alarm_low.yfilter = yfilter;
    }
    if(value_path == "optical-receive-power-alarm-high")
    {
        optical_receive_power_alarm_high.yfilter = yfilter;
    }
    if(value_path == "optical-receive-power-warning-high")
    {
        optical_receive_power_warning_high.yfilter = yfilter;
    }
    if(value_path == "optical-receive-power-warning-low")
    {
        optical_receive_power_warning_low.yfilter = yfilter;
    }
    if(value_path == "optical-receive-power-alarm-low")
    {
        optical_receive_power_alarm_low.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-validity" || name == "transceiver-temperature-alarm-high" || name == "transceiver-temperature-warning-high" || name == "transceiver-temperature-warning-low" || name == "transceiver-temperature-alarm-low" || name == "transceiver-voltage-alarm-high" || name == "transceiver-voltage-warning-high" || name == "transceiver-voltage-warning-low" || name == "transceiver-voltage-alarm-low" || name == "laser-bias-alarm-high" || name == "laser-bias-warning-high" || name == "laser-bias-warning-low" || name == "laser-bias-alarm-low" || name == "optical-transmit-power-alarm-high" || name == "optical-transmit-power-warning-high" || name == "optical-transmit-power-warning-low" || name == "optical-transmit-power-alarm-low" || name == "optical-receive-power-alarm-high" || name == "optical-receive-power-warning-high" || name == "optical-receive-power-warning-low" || name == "optical-receive-power-alarm-low")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::FieldValidity()
    :
    temperature_valid{YType::int32, "temperature-valid"},
    voltage_valid{YType::int32, "voltage-valid"},
    laser_bias_valid{YType::int32, "laser-bias-valid"},
    transmit_power_valid{YType::int32, "transmit-power-valid"},
    receive_power_valid{YType::int32, "receive-power-valid"}
{

    yang_name = "field-validity"; yang_parent_name = "dig-opt-mon-alarm-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::~FieldValidity()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::has_data() const
{
    if (is_presence_container) return true;
    return temperature_valid.is_set
	|| voltage_valid.is_set
	|| laser_bias_valid.is_set
	|| transmit_power_valid.is_set
	|| receive_power_valid.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(temperature_valid.yfilter)
	|| ydk::is_set(voltage_valid.yfilter)
	|| ydk::is_set(laser_bias_valid.yfilter)
	|| ydk::is_set(transmit_power_valid.yfilter)
	|| ydk::is_set(receive_power_valid.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "field-validity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (temperature_valid.is_set || is_set(temperature_valid.yfilter)) leaf_name_data.push_back(temperature_valid.get_name_leafdata());
    if (voltage_valid.is_set || is_set(voltage_valid.yfilter)) leaf_name_data.push_back(voltage_valid.get_name_leafdata());
    if (laser_bias_valid.is_set || is_set(laser_bias_valid.yfilter)) leaf_name_data.push_back(laser_bias_valid.get_name_leafdata());
    if (transmit_power_valid.is_set || is_set(transmit_power_valid.yfilter)) leaf_name_data.push_back(transmit_power_valid.get_name_leafdata());
    if (receive_power_valid.is_set || is_set(receive_power_valid.yfilter)) leaf_name_data.push_back(receive_power_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "temperature-valid")
    {
        temperature_valid = value;
        temperature_valid.value_namespace = name_space;
        temperature_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voltage-valid")
    {
        voltage_valid = value;
        voltage_valid.value_namespace = name_space;
        voltage_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-valid")
    {
        laser_bias_valid = value;
        laser_bias_valid.value_namespace = name_space;
        laser_bias_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power-valid")
    {
        transmit_power_valid = value;
        transmit_power_valid.value_namespace = name_space;
        transmit_power_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-power-valid")
    {
        receive_power_valid = value;
        receive_power_valid.value_namespace = name_space;
        receive_power_valid.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "temperature-valid")
    {
        temperature_valid.yfilter = yfilter;
    }
    if(value_path == "voltage-valid")
    {
        voltage_valid.yfilter = yfilter;
    }
    if(value_path == "laser-bias-valid")
    {
        laser_bias_valid.yfilter = yfilter;
    }
    if(value_path == "transmit-power-valid")
    {
        transmit_power_valid.yfilter = yfilter;
    }
    if(value_path == "receive-power-valid")
    {
        receive_power_valid.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "temperature-valid" || name == "voltage-valid" || name == "laser-bias-valid" || name == "transmit-power-valid" || name == "receive-power-valid")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::DigOptMonAlarms()
    :
    transceiver_temperature{YType::enumeration, "transceiver-temperature"},
    transceiver_voltage{YType::enumeration, "transceiver-voltage"},
    transmit_laser_power{YType::enumeration, "transmit-laser-power"},
    received_laser_power{YType::enumeration, "received-laser-power"},
    laser_bias_current{YType::enumeration, "laser-bias-current"}
{

    yang_name = "dig-opt-mon-alarms"; yang_parent_name = "phy-details"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::~DigOptMonAlarms()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::has_data() const
{
    if (is_presence_container) return true;
    return transceiver_temperature.is_set
	|| transceiver_voltage.is_set
	|| transmit_laser_power.is_set
	|| received_laser_power.is_set
	|| laser_bias_current.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transceiver_temperature.yfilter)
	|| ydk::is_set(transceiver_voltage.yfilter)
	|| ydk::is_set(transmit_laser_power.yfilter)
	|| ydk::is_set(received_laser_power.yfilter)
	|| ydk::is_set(laser_bias_current.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dig-opt-mon-alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transceiver_temperature.is_set || is_set(transceiver_temperature.yfilter)) leaf_name_data.push_back(transceiver_temperature.get_name_leafdata());
    if (transceiver_voltage.is_set || is_set(transceiver_voltage.yfilter)) leaf_name_data.push_back(transceiver_voltage.get_name_leafdata());
    if (transmit_laser_power.is_set || is_set(transmit_laser_power.yfilter)) leaf_name_data.push_back(transmit_laser_power.get_name_leafdata());
    if (received_laser_power.is_set || is_set(received_laser_power.yfilter)) leaf_name_data.push_back(received_laser_power.get_name_leafdata());
    if (laser_bias_current.is_set || is_set(laser_bias_current.yfilter)) leaf_name_data.push_back(laser_bias_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transceiver-temperature")
    {
        transceiver_temperature = value;
        transceiver_temperature.value_namespace = name_space;
        transceiver_temperature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transceiver-voltage")
    {
        transceiver_voltage = value;
        transceiver_voltage.value_namespace = name_space;
        transceiver_voltage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power = value;
        transmit_laser_power.value_namespace = name_space;
        transmit_laser_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power = value;
        received_laser_power.value_namespace = name_space;
        received_laser_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current = value;
        laser_bias_current.value_namespace = name_space;
        laser_bias_current.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transceiver-temperature")
    {
        transceiver_temperature.yfilter = yfilter;
    }
    if(value_path == "transceiver-voltage")
    {
        transceiver_voltage.yfilter = yfilter;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power.yfilter = yfilter;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transceiver-temperature" || name == "transceiver-voltage" || name == "transmit-laser-power" || name == "received-laser-power" || name == "laser-bias-current")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::Lane()
    :
    center_wavelength{YType::uint32, "center-wavelength"},
    transmit_laser_power{YType::int32, "transmit-laser-power"},
    received_laser_power{YType::int32, "received-laser-power"},
    laser_bias_current{YType::uint32, "laser-bias-current"},
    lane_id{YType::uint32, "lane-id"}
        ,
    dig_opt_mon_alarm(std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm>())
{
    dig_opt_mon_alarm->parent = this;

    yang_name = "lane"; yang_parent_name = "phy-details"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::~Lane()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::has_data() const
{
    if (is_presence_container) return true;
    return center_wavelength.is_set
	|| transmit_laser_power.is_set
	|| received_laser_power.is_set
	|| laser_bias_current.is_set
	|| lane_id.is_set
	|| (dig_opt_mon_alarm !=  nullptr && dig_opt_mon_alarm->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(center_wavelength.yfilter)
	|| ydk::is_set(transmit_laser_power.yfilter)
	|| ydk::is_set(received_laser_power.yfilter)
	|| ydk::is_set(laser_bias_current.yfilter)
	|| ydk::is_set(lane_id.yfilter)
	|| (dig_opt_mon_alarm !=  nullptr && dig_opt_mon_alarm->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (center_wavelength.is_set || is_set(center_wavelength.yfilter)) leaf_name_data.push_back(center_wavelength.get_name_leafdata());
    if (transmit_laser_power.is_set || is_set(transmit_laser_power.yfilter)) leaf_name_data.push_back(transmit_laser_power.get_name_leafdata());
    if (received_laser_power.is_set || is_set(received_laser_power.yfilter)) leaf_name_data.push_back(received_laser_power.get_name_leafdata());
    if (laser_bias_current.is_set || is_set(laser_bias_current.yfilter)) leaf_name_data.push_back(laser_bias_current.get_name_leafdata());
    if (lane_id.is_set || is_set(lane_id.yfilter)) leaf_name_data.push_back(lane_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dig-opt-mon-alarm")
    {
        if(dig_opt_mon_alarm == nullptr)
        {
            dig_opt_mon_alarm = std::make_shared<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm>();
        }
        return dig_opt_mon_alarm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dig_opt_mon_alarm != nullptr)
    {
        children["dig-opt-mon-alarm"] = dig_opt_mon_alarm;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "center-wavelength")
    {
        center_wavelength = value;
        center_wavelength.value_namespace = name_space;
        center_wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power = value;
        transmit_laser_power.value_namespace = name_space;
        transmit_laser_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power = value;
        received_laser_power.value_namespace = name_space;
        received_laser_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current = value;
        laser_bias_current.value_namespace = name_space;
        laser_bias_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lane-id")
    {
        lane_id = value;
        lane_id.value_namespace = name_space;
        lane_id.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "center-wavelength")
    {
        center_wavelength.yfilter = yfilter;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power.yfilter = yfilter;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current.yfilter = yfilter;
    }
    if(value_path == "lane-id")
    {
        lane_id.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dig-opt-mon-alarm" || name == "center-wavelength" || name == "transmit-laser-power" || name == "received-laser-power" || name == "laser-bias-current" || name == "lane-id")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::DigOptMonAlarm()
    :
    transmit_laser_power{YType::enumeration, "transmit-laser-power"},
    received_laser_power{YType::enumeration, "received-laser-power"},
    laser_bias_current{YType::enumeration, "laser-bias-current"}
{

    yang_name = "dig-opt-mon-alarm"; yang_parent_name = "lane"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::~DigOptMonAlarm()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::has_data() const
{
    if (is_presence_container) return true;
    return transmit_laser_power.is_set
	|| received_laser_power.is_set
	|| laser_bias_current.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit_laser_power.yfilter)
	|| ydk::is_set(received_laser_power.yfilter)
	|| ydk::is_set(laser_bias_current.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dig-opt-mon-alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_laser_power.is_set || is_set(transmit_laser_power.yfilter)) leaf_name_data.push_back(transmit_laser_power.get_name_leafdata());
    if (received_laser_power.is_set || is_set(received_laser_power.yfilter)) leaf_name_data.push_back(received_laser_power.get_name_leafdata());
    if (laser_bias_current.is_set || is_set(laser_bias_current.yfilter)) leaf_name_data.push_back(laser_bias_current.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power = value;
        transmit_laser_power.value_namespace = name_space;
        transmit_laser_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power = value;
        received_laser_power.value_namespace = name_space;
        received_laser_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current = value;
        laser_bias_current.value_namespace = name_space;
        laser_bias_current.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power.yfilter = yfilter;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power.yfilter = yfilter;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit-laser-power" || name == "received-laser-power" || name == "laser-bias-current")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::FecDetails()
    :
    fec{YType::enumeration, "fec"},
    corrected_codeword_count{YType::uint64, "corrected-codeword-count"},
    uncorrected_codeword_count{YType::uint64, "uncorrected-codeword-count"}
{

    yang_name = "fec-details"; yang_parent_name = "phy-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::~FecDetails()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::has_data() const
{
    if (is_presence_container) return true;
    return fec.is_set
	|| corrected_codeword_count.is_set
	|| uncorrected_codeword_count.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec.yfilter)
	|| ydk::is_set(corrected_codeword_count.yfilter)
	|| ydk::is_set(uncorrected_codeword_count.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (corrected_codeword_count.is_set || is_set(corrected_codeword_count.yfilter)) leaf_name_data.push_back(corrected_codeword_count.get_name_leafdata());
    if (uncorrected_codeword_count.is_set || is_set(uncorrected_codeword_count.yfilter)) leaf_name_data.push_back(uncorrected_codeword_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "corrected-codeword-count")
    {
        corrected_codeword_count = value;
        corrected_codeword_count.value_namespace = name_space;
        corrected_codeword_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uncorrected-codeword-count")
    {
        uncorrected_codeword_count = value;
        uncorrected_codeword_count.value_namespace = name_space;
        uncorrected_codeword_count.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
    if(value_path == "corrected-codeword-count")
    {
        corrected_codeword_count.yfilter = yfilter;
    }
    if(value_path == "uncorrected-codeword-count")
    {
        uncorrected_codeword_count.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "corrected-codeword-count" || name == "uncorrected-codeword-count")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::ExtendedLoopback()
    :
    level{YType::uint32, "level"},
    loopback{YType::enumeration, "loopback"}
{

    yang_name = "extended-loopback"; yang_parent_name = "phy-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::~ExtendedLoopback()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| loopback.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-loopback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "loopback")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::Layer1Info()
    :
    link_state{YType::enumeration, "link-state"},
    led_state{YType::enumeration, "led-state"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    flowcontrol{YType::enumeration, "flowcontrol"},
    ipg{YType::enumeration, "ipg"},
    laser_squelch_enabled{YType::boolean, "laser-squelch-enabled"},
    bandwidth_utilization{YType::uint32, "bandwidth-utilization"},
    bandwidth{YType::uint64, "bandwidth"}
        ,
    autoneg(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg>())
    , current_alarms(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms>())
    , previous_alarms(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms>())
    , error_counts(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts>())
    , ber_monitoring(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring>())
    , opd_monitoring(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring>())
    , pfc_info(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo>())
{
    autoneg->parent = this;
    current_alarms->parent = this;
    previous_alarms->parent = this;
    error_counts->parent = this;
    ber_monitoring->parent = this;
    opd_monitoring->parent = this;
    pfc_info->parent = this;

    yang_name = "layer1-info"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::~Layer1Info()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::has_data() const
{
    if (is_presence_container) return true;
    return link_state.is_set
	|| led_state.is_set
	|| speed.is_set
	|| duplex.is_set
	|| flowcontrol.is_set
	|| ipg.is_set
	|| laser_squelch_enabled.is_set
	|| bandwidth_utilization.is_set
	|| bandwidth.is_set
	|| (autoneg !=  nullptr && autoneg->has_data())
	|| (current_alarms !=  nullptr && current_alarms->has_data())
	|| (previous_alarms !=  nullptr && previous_alarms->has_data())
	|| (error_counts !=  nullptr && error_counts->has_data())
	|| (ber_monitoring !=  nullptr && ber_monitoring->has_data())
	|| (opd_monitoring !=  nullptr && opd_monitoring->has_data())
	|| (pfc_info !=  nullptr && pfc_info->has_data());
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_state.yfilter)
	|| ydk::is_set(led_state.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(flowcontrol.yfilter)
	|| ydk::is_set(ipg.yfilter)
	|| ydk::is_set(laser_squelch_enabled.yfilter)
	|| ydk::is_set(bandwidth_utilization.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (autoneg !=  nullptr && autoneg->has_operation())
	|| (current_alarms !=  nullptr && current_alarms->has_operation())
	|| (previous_alarms !=  nullptr && previous_alarms->has_operation())
	|| (error_counts !=  nullptr && error_counts->has_operation())
	|| (ber_monitoring !=  nullptr && ber_monitoring->has_operation())
	|| (opd_monitoring !=  nullptr && opd_monitoring->has_operation())
	|| (pfc_info !=  nullptr && pfc_info->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer1-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_state.is_set || is_set(link_state.yfilter)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (led_state.is_set || is_set(led_state.yfilter)) leaf_name_data.push_back(led_state.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (flowcontrol.is_set || is_set(flowcontrol.yfilter)) leaf_name_data.push_back(flowcontrol.get_name_leafdata());
    if (ipg.is_set || is_set(ipg.yfilter)) leaf_name_data.push_back(ipg.get_name_leafdata());
    if (laser_squelch_enabled.is_set || is_set(laser_squelch_enabled.yfilter)) leaf_name_data.push_back(laser_squelch_enabled.get_name_leafdata());
    if (bandwidth_utilization.is_set || is_set(bandwidth_utilization.yfilter)) leaf_name_data.push_back(bandwidth_utilization.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoneg")
    {
        if(autoneg == nullptr)
        {
            autoneg = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg>();
        }
        return autoneg;
    }

    if(child_yang_name == "current-alarms")
    {
        if(current_alarms == nullptr)
        {
            current_alarms = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms>();
        }
        return current_alarms;
    }

    if(child_yang_name == "previous-alarms")
    {
        if(previous_alarms == nullptr)
        {
            previous_alarms = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms>();
        }
        return previous_alarms;
    }

    if(child_yang_name == "error-counts")
    {
        if(error_counts == nullptr)
        {
            error_counts = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts>();
        }
        return error_counts;
    }

    if(child_yang_name == "ber-monitoring")
    {
        if(ber_monitoring == nullptr)
        {
            ber_monitoring = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring>();
        }
        return ber_monitoring;
    }

    if(child_yang_name == "opd-monitoring")
    {
        if(opd_monitoring == nullptr)
        {
            opd_monitoring = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring>();
        }
        return opd_monitoring;
    }

    if(child_yang_name == "pfc-info")
    {
        if(pfc_info == nullptr)
        {
            pfc_info = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo>();
        }
        return pfc_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autoneg != nullptr)
    {
        children["autoneg"] = autoneg;
    }

    if(current_alarms != nullptr)
    {
        children["current-alarms"] = current_alarms;
    }

    if(previous_alarms != nullptr)
    {
        children["previous-alarms"] = previous_alarms;
    }

    if(error_counts != nullptr)
    {
        children["error-counts"] = error_counts;
    }

    if(ber_monitoring != nullptr)
    {
        children["ber-monitoring"] = ber_monitoring;
    }

    if(opd_monitoring != nullptr)
    {
        children["opd-monitoring"] = opd_monitoring;
    }

    if(pfc_info != nullptr)
    {
        children["pfc-info"] = pfc_info;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-state")
    {
        link_state = value;
        link_state.value_namespace = name_space;
        link_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "led-state")
    {
        led_state = value;
        led_state.value_namespace = name_space;
        led_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowcontrol")
    {
        flowcontrol = value;
        flowcontrol.value_namespace = name_space;
        flowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipg")
    {
        ipg = value;
        ipg.value_namespace = name_space;
        ipg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser-squelch-enabled")
    {
        laser_squelch_enabled = value;
        laser_squelch_enabled.value_namespace = name_space;
        laser_squelch_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-utilization")
    {
        bandwidth_utilization = value;
        bandwidth_utilization.value_namespace = name_space;
        bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-state")
    {
        link_state.yfilter = yfilter;
    }
    if(value_path == "led-state")
    {
        led_state.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "flowcontrol")
    {
        flowcontrol.yfilter = yfilter;
    }
    if(value_path == "ipg")
    {
        ipg.yfilter = yfilter;
    }
    if(value_path == "laser-squelch-enabled")
    {
        laser_squelch_enabled.yfilter = yfilter;
    }
    if(value_path == "bandwidth-utilization")
    {
        bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoneg" || name == "current-alarms" || name == "previous-alarms" || name == "error-counts" || name == "ber-monitoring" || name == "opd-monitoring" || name == "pfc-info" || name == "link-state" || name == "led-state" || name == "speed" || name == "duplex" || name == "flowcontrol" || name == "ipg" || name == "laser-squelch-enabled" || name == "bandwidth-utilization" || name == "bandwidth")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::Autoneg()
    :
    autoneg_enabled{YType::int32, "autoneg-enabled"},
    mask{YType::uint32, "mask"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    flowcontrol{YType::enumeration, "flowcontrol"},
    config_override{YType::int32, "config-override"},
    fec{YType::enumeration, "fec"}
{

    yang_name = "autoneg"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::~Autoneg()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::has_data() const
{
    if (is_presence_container) return true;
    return autoneg_enabled.is_set
	|| mask.is_set
	|| speed.is_set
	|| duplex.is_set
	|| flowcontrol.is_set
	|| config_override.is_set
	|| fec.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autoneg_enabled.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(flowcontrol.yfilter)
	|| ydk::is_set(config_override.yfilter)
	|| ydk::is_set(fec.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoneg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autoneg_enabled.is_set || is_set(autoneg_enabled.yfilter)) leaf_name_data.push_back(autoneg_enabled.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (flowcontrol.is_set || is_set(flowcontrol.yfilter)) leaf_name_data.push_back(flowcontrol.get_name_leafdata());
    if (config_override.is_set || is_set(config_override.yfilter)) leaf_name_data.push_back(config_override.get_name_leafdata());
    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autoneg-enabled")
    {
        autoneg_enabled = value;
        autoneg_enabled.value_namespace = name_space;
        autoneg_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowcontrol")
    {
        flowcontrol = value;
        flowcontrol.value_namespace = name_space;
        flowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-override")
    {
        config_override = value;
        config_override.value_namespace = name_space;
        config_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autoneg-enabled")
    {
        autoneg_enabled.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "flowcontrol")
    {
        flowcontrol.yfilter = yfilter;
    }
    if(value_path == "config-override")
    {
        config_override.yfilter = yfilter;
    }
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoneg-enabled" || name == "mask" || name == "speed" || name == "duplex" || name == "flowcontrol" || name == "config-override" || name == "fec")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::CurrentAlarms()
    :
    received_loss_of_signal_alarm{YType::enumeration, "received-loss-of-signal-alarm"},
    pcs_loss_of_block_lock_alarm{YType::enumeration, "pcs-loss-of-block-lock-alarm"},
    local_fault_alarm{YType::enumeration, "local-fault-alarm"},
    remote_fault_alarm{YType::enumeration, "remote-fault-alarm"},
    sd_ber_alarm{YType::enumeration, "sd-ber-alarm"},
    sf_ber_alarm{YType::enumeration, "sf-ber-alarm"},
    loss_of_synchronization_data_alarm{YType::enumeration, "loss-of-synchronization-data-alarm"},
    hi_ber_alarm{YType::enumeration, "hi-ber-alarm"},
    squelch_alarm{YType::enumeration, "squelch-alarm"},
    rx_opd_alarm{YType::enumeration, "rx-opd-alarm"}
{

    yang_name = "current-alarms"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::~CurrentAlarms()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::has_data() const
{
    if (is_presence_container) return true;
    return received_loss_of_signal_alarm.is_set
	|| pcs_loss_of_block_lock_alarm.is_set
	|| local_fault_alarm.is_set
	|| remote_fault_alarm.is_set
	|| sd_ber_alarm.is_set
	|| sf_ber_alarm.is_set
	|| loss_of_synchronization_data_alarm.is_set
	|| hi_ber_alarm.is_set
	|| squelch_alarm.is_set
	|| rx_opd_alarm.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_loss_of_signal_alarm.yfilter)
	|| ydk::is_set(pcs_loss_of_block_lock_alarm.yfilter)
	|| ydk::is_set(local_fault_alarm.yfilter)
	|| ydk::is_set(remote_fault_alarm.yfilter)
	|| ydk::is_set(sd_ber_alarm.yfilter)
	|| ydk::is_set(sf_ber_alarm.yfilter)
	|| ydk::is_set(loss_of_synchronization_data_alarm.yfilter)
	|| ydk::is_set(hi_ber_alarm.yfilter)
	|| ydk::is_set(squelch_alarm.yfilter)
	|| ydk::is_set(rx_opd_alarm.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_loss_of_signal_alarm.is_set || is_set(received_loss_of_signal_alarm.yfilter)) leaf_name_data.push_back(received_loss_of_signal_alarm.get_name_leafdata());
    if (pcs_loss_of_block_lock_alarm.is_set || is_set(pcs_loss_of_block_lock_alarm.yfilter)) leaf_name_data.push_back(pcs_loss_of_block_lock_alarm.get_name_leafdata());
    if (local_fault_alarm.is_set || is_set(local_fault_alarm.yfilter)) leaf_name_data.push_back(local_fault_alarm.get_name_leafdata());
    if (remote_fault_alarm.is_set || is_set(remote_fault_alarm.yfilter)) leaf_name_data.push_back(remote_fault_alarm.get_name_leafdata());
    if (sd_ber_alarm.is_set || is_set(sd_ber_alarm.yfilter)) leaf_name_data.push_back(sd_ber_alarm.get_name_leafdata());
    if (sf_ber_alarm.is_set || is_set(sf_ber_alarm.yfilter)) leaf_name_data.push_back(sf_ber_alarm.get_name_leafdata());
    if (loss_of_synchronization_data_alarm.is_set || is_set(loss_of_synchronization_data_alarm.yfilter)) leaf_name_data.push_back(loss_of_synchronization_data_alarm.get_name_leafdata());
    if (hi_ber_alarm.is_set || is_set(hi_ber_alarm.yfilter)) leaf_name_data.push_back(hi_ber_alarm.get_name_leafdata());
    if (squelch_alarm.is_set || is_set(squelch_alarm.yfilter)) leaf_name_data.push_back(squelch_alarm.get_name_leafdata());
    if (rx_opd_alarm.is_set || is_set(rx_opd_alarm.yfilter)) leaf_name_data.push_back(rx_opd_alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-loss-of-signal-alarm")
    {
        received_loss_of_signal_alarm = value;
        received_loss_of_signal_alarm.value_namespace = name_space;
        received_loss_of_signal_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcs-loss-of-block-lock-alarm")
    {
        pcs_loss_of_block_lock_alarm = value;
        pcs_loss_of_block_lock_alarm.value_namespace = name_space;
        pcs_loss_of_block_lock_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-fault-alarm")
    {
        local_fault_alarm = value;
        local_fault_alarm.value_namespace = name_space;
        local_fault_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-fault-alarm")
    {
        remote_fault_alarm = value;
        remote_fault_alarm.value_namespace = name_space;
        remote_fault_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-ber-alarm")
    {
        sd_ber_alarm = value;
        sd_ber_alarm.value_namespace = name_space;
        sd_ber_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf-ber-alarm")
    {
        sf_ber_alarm = value;
        sf_ber_alarm.value_namespace = name_space;
        sf_ber_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-of-synchronization-data-alarm")
    {
        loss_of_synchronization_data_alarm = value;
        loss_of_synchronization_data_alarm.value_namespace = name_space;
        loss_of_synchronization_data_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi-ber-alarm")
    {
        hi_ber_alarm = value;
        hi_ber_alarm.value_namespace = name_space;
        hi_ber_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelch-alarm")
    {
        squelch_alarm = value;
        squelch_alarm.value_namespace = name_space;
        squelch_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-opd-alarm")
    {
        rx_opd_alarm = value;
        rx_opd_alarm.value_namespace = name_space;
        rx_opd_alarm.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-loss-of-signal-alarm")
    {
        received_loss_of_signal_alarm.yfilter = yfilter;
    }
    if(value_path == "pcs-loss-of-block-lock-alarm")
    {
        pcs_loss_of_block_lock_alarm.yfilter = yfilter;
    }
    if(value_path == "local-fault-alarm")
    {
        local_fault_alarm.yfilter = yfilter;
    }
    if(value_path == "remote-fault-alarm")
    {
        remote_fault_alarm.yfilter = yfilter;
    }
    if(value_path == "sd-ber-alarm")
    {
        sd_ber_alarm.yfilter = yfilter;
    }
    if(value_path == "sf-ber-alarm")
    {
        sf_ber_alarm.yfilter = yfilter;
    }
    if(value_path == "loss-of-synchronization-data-alarm")
    {
        loss_of_synchronization_data_alarm.yfilter = yfilter;
    }
    if(value_path == "hi-ber-alarm")
    {
        hi_ber_alarm.yfilter = yfilter;
    }
    if(value_path == "squelch-alarm")
    {
        squelch_alarm.yfilter = yfilter;
    }
    if(value_path == "rx-opd-alarm")
    {
        rx_opd_alarm.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-loss-of-signal-alarm" || name == "pcs-loss-of-block-lock-alarm" || name == "local-fault-alarm" || name == "remote-fault-alarm" || name == "sd-ber-alarm" || name == "sf-ber-alarm" || name == "loss-of-synchronization-data-alarm" || name == "hi-ber-alarm" || name == "squelch-alarm" || name == "rx-opd-alarm")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::PreviousAlarms()
    :
    received_loss_of_signal_alarm{YType::enumeration, "received-loss-of-signal-alarm"},
    pcs_loss_of_block_lock_alarm{YType::enumeration, "pcs-loss-of-block-lock-alarm"},
    local_fault_alarm{YType::enumeration, "local-fault-alarm"},
    remote_fault_alarm{YType::enumeration, "remote-fault-alarm"},
    sd_ber_alarm{YType::enumeration, "sd-ber-alarm"},
    sf_ber_alarm{YType::enumeration, "sf-ber-alarm"},
    loss_of_synchronization_data_alarm{YType::enumeration, "loss-of-synchronization-data-alarm"},
    hi_ber_alarm{YType::enumeration, "hi-ber-alarm"},
    squelch_alarm{YType::enumeration, "squelch-alarm"},
    rx_opd_alarm{YType::enumeration, "rx-opd-alarm"}
{

    yang_name = "previous-alarms"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::~PreviousAlarms()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::has_data() const
{
    if (is_presence_container) return true;
    return received_loss_of_signal_alarm.is_set
	|| pcs_loss_of_block_lock_alarm.is_set
	|| local_fault_alarm.is_set
	|| remote_fault_alarm.is_set
	|| sd_ber_alarm.is_set
	|| sf_ber_alarm.is_set
	|| loss_of_synchronization_data_alarm.is_set
	|| hi_ber_alarm.is_set
	|| squelch_alarm.is_set
	|| rx_opd_alarm.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_loss_of_signal_alarm.yfilter)
	|| ydk::is_set(pcs_loss_of_block_lock_alarm.yfilter)
	|| ydk::is_set(local_fault_alarm.yfilter)
	|| ydk::is_set(remote_fault_alarm.yfilter)
	|| ydk::is_set(sd_ber_alarm.yfilter)
	|| ydk::is_set(sf_ber_alarm.yfilter)
	|| ydk::is_set(loss_of_synchronization_data_alarm.yfilter)
	|| ydk::is_set(hi_ber_alarm.yfilter)
	|| ydk::is_set(squelch_alarm.yfilter)
	|| ydk::is_set(rx_opd_alarm.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_loss_of_signal_alarm.is_set || is_set(received_loss_of_signal_alarm.yfilter)) leaf_name_data.push_back(received_loss_of_signal_alarm.get_name_leafdata());
    if (pcs_loss_of_block_lock_alarm.is_set || is_set(pcs_loss_of_block_lock_alarm.yfilter)) leaf_name_data.push_back(pcs_loss_of_block_lock_alarm.get_name_leafdata());
    if (local_fault_alarm.is_set || is_set(local_fault_alarm.yfilter)) leaf_name_data.push_back(local_fault_alarm.get_name_leafdata());
    if (remote_fault_alarm.is_set || is_set(remote_fault_alarm.yfilter)) leaf_name_data.push_back(remote_fault_alarm.get_name_leafdata());
    if (sd_ber_alarm.is_set || is_set(sd_ber_alarm.yfilter)) leaf_name_data.push_back(sd_ber_alarm.get_name_leafdata());
    if (sf_ber_alarm.is_set || is_set(sf_ber_alarm.yfilter)) leaf_name_data.push_back(sf_ber_alarm.get_name_leafdata());
    if (loss_of_synchronization_data_alarm.is_set || is_set(loss_of_synchronization_data_alarm.yfilter)) leaf_name_data.push_back(loss_of_synchronization_data_alarm.get_name_leafdata());
    if (hi_ber_alarm.is_set || is_set(hi_ber_alarm.yfilter)) leaf_name_data.push_back(hi_ber_alarm.get_name_leafdata());
    if (squelch_alarm.is_set || is_set(squelch_alarm.yfilter)) leaf_name_data.push_back(squelch_alarm.get_name_leafdata());
    if (rx_opd_alarm.is_set || is_set(rx_opd_alarm.yfilter)) leaf_name_data.push_back(rx_opd_alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-loss-of-signal-alarm")
    {
        received_loss_of_signal_alarm = value;
        received_loss_of_signal_alarm.value_namespace = name_space;
        received_loss_of_signal_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcs-loss-of-block-lock-alarm")
    {
        pcs_loss_of_block_lock_alarm = value;
        pcs_loss_of_block_lock_alarm.value_namespace = name_space;
        pcs_loss_of_block_lock_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-fault-alarm")
    {
        local_fault_alarm = value;
        local_fault_alarm.value_namespace = name_space;
        local_fault_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-fault-alarm")
    {
        remote_fault_alarm = value;
        remote_fault_alarm.value_namespace = name_space;
        remote_fault_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-ber-alarm")
    {
        sd_ber_alarm = value;
        sd_ber_alarm.value_namespace = name_space;
        sd_ber_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf-ber-alarm")
    {
        sf_ber_alarm = value;
        sf_ber_alarm.value_namespace = name_space;
        sf_ber_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-of-synchronization-data-alarm")
    {
        loss_of_synchronization_data_alarm = value;
        loss_of_synchronization_data_alarm.value_namespace = name_space;
        loss_of_synchronization_data_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hi-ber-alarm")
    {
        hi_ber_alarm = value;
        hi_ber_alarm.value_namespace = name_space;
        hi_ber_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "squelch-alarm")
    {
        squelch_alarm = value;
        squelch_alarm.value_namespace = name_space;
        squelch_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-opd-alarm")
    {
        rx_opd_alarm = value;
        rx_opd_alarm.value_namespace = name_space;
        rx_opd_alarm.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-loss-of-signal-alarm")
    {
        received_loss_of_signal_alarm.yfilter = yfilter;
    }
    if(value_path == "pcs-loss-of-block-lock-alarm")
    {
        pcs_loss_of_block_lock_alarm.yfilter = yfilter;
    }
    if(value_path == "local-fault-alarm")
    {
        local_fault_alarm.yfilter = yfilter;
    }
    if(value_path == "remote-fault-alarm")
    {
        remote_fault_alarm.yfilter = yfilter;
    }
    if(value_path == "sd-ber-alarm")
    {
        sd_ber_alarm.yfilter = yfilter;
    }
    if(value_path == "sf-ber-alarm")
    {
        sf_ber_alarm.yfilter = yfilter;
    }
    if(value_path == "loss-of-synchronization-data-alarm")
    {
        loss_of_synchronization_data_alarm.yfilter = yfilter;
    }
    if(value_path == "hi-ber-alarm")
    {
        hi_ber_alarm.yfilter = yfilter;
    }
    if(value_path == "squelch-alarm")
    {
        squelch_alarm.yfilter = yfilter;
    }
    if(value_path == "rx-opd-alarm")
    {
        rx_opd_alarm.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-loss-of-signal-alarm" || name == "pcs-loss-of-block-lock-alarm" || name == "local-fault-alarm" || name == "remote-fault-alarm" || name == "sd-ber-alarm" || name == "sf-ber-alarm" || name == "loss-of-synchronization-data-alarm" || name == "hi-ber-alarm" || name == "squelch-alarm" || name == "rx-opd-alarm")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::ErrorCounts()
    :
    sync_header_errors{YType::uint64, "sync-header-errors"},
    pcsbip_errors{YType::uint64, "pcsbip-errors"}
{

    yang_name = "error-counts"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::~ErrorCounts()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::has_data() const
{
    if (is_presence_container) return true;
    return sync_header_errors.is_set
	|| pcsbip_errors.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_header_errors.yfilter)
	|| ydk::is_set(pcsbip_errors.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_header_errors.is_set || is_set(sync_header_errors.yfilter)) leaf_name_data.push_back(sync_header_errors.get_name_leafdata());
    if (pcsbip_errors.is_set || is_set(pcsbip_errors.yfilter)) leaf_name_data.push_back(pcsbip_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-header-errors")
    {
        sync_header_errors = value;
        sync_header_errors.value_namespace = name_space;
        sync_header_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcsbip-errors")
    {
        pcsbip_errors = value;
        pcsbip_errors.value_namespace = name_space;
        pcsbip_errors.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-header-errors")
    {
        sync_header_errors.yfilter = yfilter;
    }
    if(value_path == "pcsbip-errors")
    {
        pcsbip_errors.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-header-errors" || name == "pcsbip-errors")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::BerMonitoring()
    :
    supported{YType::int32, "supported"}
        ,
    settings(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings>())
    , state(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State>())
{
    settings->parent = this;
    state->parent = this;

    yang_name = "ber-monitoring"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::~BerMonitoring()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::has_data() const
{
    if (is_presence_container) return true;
    return supported.is_set
	|| (settings !=  nullptr && settings->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| (settings !=  nullptr && settings->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ber-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "settings")
    {
        if(settings == nullptr)
        {
            settings = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings>();
        }
        return settings;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(settings != nullptr)
    {
        children["settings"] = settings;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "settings" || name == "state" || name == "supported")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::Settings()
    :
    signal_degrade_threshold{YType::uint32, "signal-degrade-threshold"},
    signal_degrade_alarm{YType::int32, "signal-degrade-alarm"},
    signal_fail_threshold{YType::uint32, "signal-fail-threshold"},
    signal_fail_alarm{YType::int32, "signal-fail-alarm"},
    signal_remote_fault{YType::int32, "signal-remote-fault"}
{

    yang_name = "settings"; yang_parent_name = "ber-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::~Settings()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::has_data() const
{
    if (is_presence_container) return true;
    return signal_degrade_threshold.is_set
	|| signal_degrade_alarm.is_set
	|| signal_fail_threshold.is_set
	|| signal_fail_alarm.is_set
	|| signal_remote_fault.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_degrade_threshold.yfilter)
	|| ydk::is_set(signal_degrade_alarm.yfilter)
	|| ydk::is_set(signal_fail_threshold.yfilter)
	|| ydk::is_set(signal_fail_alarm.yfilter)
	|| ydk::is_set(signal_remote_fault.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_degrade_threshold.is_set || is_set(signal_degrade_threshold.yfilter)) leaf_name_data.push_back(signal_degrade_threshold.get_name_leafdata());
    if (signal_degrade_alarm.is_set || is_set(signal_degrade_alarm.yfilter)) leaf_name_data.push_back(signal_degrade_alarm.get_name_leafdata());
    if (signal_fail_threshold.is_set || is_set(signal_fail_threshold.yfilter)) leaf_name_data.push_back(signal_fail_threshold.get_name_leafdata());
    if (signal_fail_alarm.is_set || is_set(signal_fail_alarm.yfilter)) leaf_name_data.push_back(signal_fail_alarm.get_name_leafdata());
    if (signal_remote_fault.is_set || is_set(signal_remote_fault.yfilter)) leaf_name_data.push_back(signal_remote_fault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold = value;
        signal_degrade_threshold.value_namespace = name_space;
        signal_degrade_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-degrade-alarm")
    {
        signal_degrade_alarm = value;
        signal_degrade_alarm.value_namespace = name_space;
        signal_degrade_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold = value;
        signal_fail_threshold.value_namespace = name_space;
        signal_fail_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-fail-alarm")
    {
        signal_fail_alarm = value;
        signal_fail_alarm.value_namespace = name_space;
        signal_fail_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault = value;
        signal_remote_fault.value_namespace = name_space;
        signal_remote_fault.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-degrade-alarm")
    {
        signal_degrade_alarm.yfilter = yfilter;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold.yfilter = yfilter;
    }
    if(value_path == "signal-fail-alarm")
    {
        signal_fail_alarm.yfilter = yfilter;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-degrade-threshold" || name == "signal-degrade-alarm" || name == "signal-fail-threshold" || name == "signal-fail-alarm" || name == "signal-remote-fault")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::State()
    :
    sd_current_ber{YType::uint32, "sd-current-ber"},
    sf_current_ber{YType::uint32, "sf-current-ber"}
{

    yang_name = "state"; yang_parent_name = "ber-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::~State()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::has_data() const
{
    if (is_presence_container) return true;
    return sd_current_ber.is_set
	|| sf_current_ber.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sd_current_ber.yfilter)
	|| ydk::is_set(sf_current_ber.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sd_current_ber.is_set || is_set(sd_current_ber.yfilter)) leaf_name_data.push_back(sd_current_ber.get_name_leafdata());
    if (sf_current_ber.is_set || is_set(sf_current_ber.yfilter)) leaf_name_data.push_back(sf_current_ber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sd-current-ber")
    {
        sd_current_ber = value;
        sd_current_ber.value_namespace = name_space;
        sd_current_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf-current-ber")
    {
        sf_current_ber = value;
        sf_current_ber.value_namespace = name_space;
        sf_current_ber.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sd-current-ber")
    {
        sd_current_ber.yfilter = yfilter;
    }
    if(value_path == "sf-current-ber")
    {
        sf_current_ber.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sd-current-ber" || name == "sf-current-ber")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::OpdMonitoring()
    :
    supported{YType::int32, "supported"}
        ,
    settings(std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings>())
{
    settings->parent = this;

    yang_name = "opd-monitoring"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::~OpdMonitoring()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::has_data() const
{
    if (is_presence_container) return true;
    return supported.is_set
	|| (settings !=  nullptr && settings->has_data());
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(supported.yfilter)
	|| (settings !=  nullptr && settings->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opd-monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.yfilter)) leaf_name_data.push_back(supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "settings")
    {
        if(settings == nullptr)
        {
            settings = std::make_shared<EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings>();
        }
        return settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(settings != nullptr)
    {
        children["settings"] = settings;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "supported")
    {
        supported = value;
        supported.value_namespace = name_space;
        supported.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "supported")
    {
        supported.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "settings" || name == "supported")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::Settings()
    :
    received_optical_power_degrade_threshold_set{YType::int32, "received-optical-power-degrade-threshold-set"},
    received_optical_power_degrade_threshold{YType::int32, "received-optical-power-degrade-threshold"}
{

    yang_name = "settings"; yang_parent_name = "opd-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::~Settings()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::has_data() const
{
    if (is_presence_container) return true;
    return received_optical_power_degrade_threshold_set.is_set
	|| received_optical_power_degrade_threshold.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_optical_power_degrade_threshold_set.yfilter)
	|| ydk::is_set(received_optical_power_degrade_threshold.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_optical_power_degrade_threshold_set.is_set || is_set(received_optical_power_degrade_threshold_set.yfilter)) leaf_name_data.push_back(received_optical_power_degrade_threshold_set.get_name_leafdata());
    if (received_optical_power_degrade_threshold.is_set || is_set(received_optical_power_degrade_threshold.yfilter)) leaf_name_data.push_back(received_optical_power_degrade_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-optical-power-degrade-threshold-set")
    {
        received_optical_power_degrade_threshold_set = value;
        received_optical_power_degrade_threshold_set.value_namespace = name_space;
        received_optical_power_degrade_threshold_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-optical-power-degrade-threshold")
    {
        received_optical_power_degrade_threshold = value;
        received_optical_power_degrade_threshold.value_namespace = name_space;
        received_optical_power_degrade_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-optical-power-degrade-threshold-set")
    {
        received_optical_power_degrade_threshold_set.yfilter = yfilter;
    }
    if(value_path == "received-optical-power-degrade-threshold")
    {
        received_optical_power_degrade_threshold.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-optical-power-degrade-threshold-set" || name == "received-optical-power-degrade-threshold")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::PfcInfo()
    :
    priority_flowcontrol{YType::enumeration, "priority-flowcontrol"},
    priority_enabled_bitmap{YType::uint8, "priority-enabled-bitmap"},
    rx_frame{YType::uint64, "rx-frame"},
    tx_frame{YType::uint64, "tx-frame"}
{

    yang_name = "pfc-info"; yang_parent_name = "layer1-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::~PfcInfo()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : rx_frame.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tx_frame.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return priority_flowcontrol.is_set
	|| priority_enabled_bitmap.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::has_operation() const
{
    for (auto const & leaf : rx_frame.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : tx_frame.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(priority_flowcontrol.yfilter)
	|| ydk::is_set(priority_enabled_bitmap.yfilter)
	|| ydk::is_set(rx_frame.yfilter)
	|| ydk::is_set(tx_frame.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_flowcontrol.is_set || is_set(priority_flowcontrol.yfilter)) leaf_name_data.push_back(priority_flowcontrol.get_name_leafdata());
    if (priority_enabled_bitmap.is_set || is_set(priority_enabled_bitmap.yfilter)) leaf_name_data.push_back(priority_enabled_bitmap.get_name_leafdata());

    auto rx_frame_name_datas = rx_frame.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rx_frame_name_datas.begin(), rx_frame_name_datas.end());
    auto tx_frame_name_datas = tx_frame.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tx_frame_name_datas.begin(), tx_frame_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-flowcontrol")
    {
        priority_flowcontrol = value;
        priority_flowcontrol.value_namespace = name_space;
        priority_flowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-enabled-bitmap")
    {
        priority_enabled_bitmap = value;
        priority_enabled_bitmap.value_namespace = name_space;
        priority_enabled_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-frame")
    {
        rx_frame.append(value);
    }
    if(value_path == "tx-frame")
    {
        tx_frame.append(value);
    }
}

void EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-flowcontrol")
    {
        priority_flowcontrol.yfilter = yfilter;
    }
    if(value_path == "priority-enabled-bitmap")
    {
        priority_enabled_bitmap.yfilter = yfilter;
    }
    if(value_path == "rx-frame")
    {
        rx_frame.yfilter = yfilter;
    }
    if(value_path == "tx-frame")
    {
        tx_frame.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-flowcontrol" || name == "priority-enabled-bitmap" || name == "rx-frame" || name == "tx-frame")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::MacInfo::MacInfo()
    :
    mtu{YType::uint32, "mtu"},
    mru{YType::uint32, "mru"},
    burned_in_mac_address{YType::str, "burned-in-mac-address"},
    operational_mac_address{YType::str, "operational-mac-address"}
        ,
    unicast_mac_filters(std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters>())
    , multicast_mac_filters(std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters>())
{
    unicast_mac_filters->parent = this;
    multicast_mac_filters->parent = this;

    yang_name = "mac-info"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::MacInfo::~MacInfo()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set
	|| mru.is_set
	|| burned_in_mac_address.is_set
	|| operational_mac_address.is_set
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_data())
	|| (multicast_mac_filters !=  nullptr && multicast_mac_filters->has_data());
}

bool EthernetInterface::Interfaces::Interface::MacInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mru.yfilter)
	|| ydk::is_set(burned_in_mac_address.yfilter)
	|| ydk::is_set(operational_mac_address.yfilter)
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_operation())
	|| (multicast_mac_filters !=  nullptr && multicast_mac_filters->has_operation());
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::MacInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mru.is_set || is_set(mru.yfilter)) leaf_name_data.push_back(mru.get_name_leafdata());
    if (burned_in_mac_address.is_set || is_set(burned_in_mac_address.yfilter)) leaf_name_data.push_back(burned_in_mac_address.get_name_leafdata());
    if (operational_mac_address.is_set || is_set(operational_mac_address.yfilter)) leaf_name_data.push_back(operational_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::MacInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast-mac-filters")
    {
        if(unicast_mac_filters == nullptr)
        {
            unicast_mac_filters = std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters>();
        }
        return unicast_mac_filters;
    }

    if(child_yang_name == "multicast-mac-filters")
    {
        if(multicast_mac_filters == nullptr)
        {
            multicast_mac_filters = std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters>();
        }
        return multicast_mac_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::MacInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unicast_mac_filters != nullptr)
    {
        children["unicast-mac-filters"] = unicast_mac_filters;
    }

    if(multicast_mac_filters != nullptr)
    {
        children["multicast-mac-filters"] = multicast_mac_filters;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mru")
    {
        mru = value;
        mru.value_namespace = name_space;
        mru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burned-in-mac-address")
    {
        burned_in_mac_address = value;
        burned_in_mac_address.value_namespace = name_space;
        burned_in_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-mac-address")
    {
        operational_mac_address = value;
        operational_mac_address.value_namespace = name_space;
        operational_mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::MacInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mru")
    {
        mru.yfilter = yfilter;
    }
    if(value_path == "burned-in-mac-address")
    {
        burned_in_mac_address.yfilter = yfilter;
    }
    if(value_path == "operational-mac-address")
    {
        operational_mac_address.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::MacInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast-mac-filters" || name == "multicast-mac-filters" || name == "mtu" || name == "mru" || name == "burned-in-mac-address" || name == "operational-mac-address")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::UnicastMacFilters()
    :
    unicast_mac_address{YType::str, "unicast-mac-address"}
{

    yang_name = "unicast-mac-filters"; yang_parent_name = "mac-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::~UnicastMacFilters()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : unicast_mac_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::has_operation() const
{
    for (auto const & leaf : unicast_mac_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unicast_mac_address.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-mac-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unicast_mac_address_name_datas = unicast_mac_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unicast_mac_address_name_datas.begin(), unicast_mac_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast-mac-address")
    {
        unicast_mac_address.append(value);
    }
}

void EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast-mac-address")
    {
        unicast_mac_address.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast-mac-address")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacFilters()
    :
    multicast_promiscuous{YType::boolean, "multicast-promiscuous"}
        ,
    multicast_mac_address(this, {})
{

    yang_name = "multicast-mac-filters"; yang_parent_name = "mac-info"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::~MulticastMacFilters()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<multicast_mac_address.len(); index++)
    {
        if(multicast_mac_address[index]->has_data())
            return true;
    }
    return multicast_promiscuous.is_set;
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::has_operation() const
{
    for (std::size_t index=0; index<multicast_mac_address.len(); index++)
    {
        if(multicast_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(multicast_promiscuous.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-mac-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_promiscuous.is_set || is_set(multicast_promiscuous.yfilter)) leaf_name_data.push_back(multicast_promiscuous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-mac-address")
    {
        auto c = std::make_shared<EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress>();
        c->parent = this;
        multicast_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : multicast_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-promiscuous")
    {
        multicast_promiscuous = value;
        multicast_promiscuous.value_namespace = name_space;
        multicast_promiscuous.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-promiscuous")
    {
        multicast_promiscuous.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-mac-address" || name == "multicast-promiscuous")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::MulticastMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mask{YType::str, "mask"}
{

    yang_name = "multicast-mac-address"; yang_parent_name = "multicast-mac-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::~MulticastMacAddress()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mask.is_set;
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mask")
        return true;
    return false;
}

EthernetInterface::Interfaces::Interface::TransportInfo::TransportInfo()
    :
    maintenance_mode_enabled{YType::boolean, "maintenance-mode-enabled"},
    ains_status{YType::enumeration, "ains-status"},
    total_duration{YType::uint32, "total-duration"},
    remaining_duration{YType::uint32, "remaining-duration"}
{

    yang_name = "transport-info"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Interfaces::Interface::TransportInfo::~TransportInfo()
{
}

bool EthernetInterface::Interfaces::Interface::TransportInfo::has_data() const
{
    if (is_presence_container) return true;
    return maintenance_mode_enabled.is_set
	|| ains_status.is_set
	|| total_duration.is_set
	|| remaining_duration.is_set;
}

bool EthernetInterface::Interfaces::Interface::TransportInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance_mode_enabled.yfilter)
	|| ydk::is_set(ains_status.yfilter)
	|| ydk::is_set(total_duration.yfilter)
	|| ydk::is_set(remaining_duration.yfilter);
}

std::string EthernetInterface::Interfaces::Interface::TransportInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Interfaces::Interface::TransportInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode_enabled.is_set || is_set(maintenance_mode_enabled.yfilter)) leaf_name_data.push_back(maintenance_mode_enabled.get_name_leafdata());
    if (ains_status.is_set || is_set(ains_status.yfilter)) leaf_name_data.push_back(ains_status.get_name_leafdata());
    if (total_duration.is_set || is_set(total_duration.yfilter)) leaf_name_data.push_back(total_duration.get_name_leafdata());
    if (remaining_duration.is_set || is_set(remaining_duration.yfilter)) leaf_name_data.push_back(remaining_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Interfaces::Interface::TransportInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Interfaces::Interface::TransportInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Interfaces::Interface::TransportInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance-mode-enabled")
    {
        maintenance_mode_enabled = value;
        maintenance_mode_enabled.value_namespace = name_space;
        maintenance_mode_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ains-status")
    {
        ains_status = value;
        ains_status.value_namespace = name_space;
        ains_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-duration")
    {
        total_duration = value;
        total_duration.value_namespace = name_space;
        total_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-duration")
    {
        remaining_duration = value;
        remaining_duration.value_namespace = name_space;
        remaining_duration.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Interfaces::Interface::TransportInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance-mode-enabled")
    {
        maintenance_mode_enabled.yfilter = yfilter;
    }
    if(value_path == "ains-status")
    {
        ains_status.yfilter = yfilter;
    }
    if(value_path == "total-duration")
    {
        total_duration.yfilter = yfilter;
    }
    if(value_path == "remaining-duration")
    {
        remaining_duration.yfilter = yfilter;
    }
}

bool EthernetInterface::Interfaces::Interface::TransportInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance-mode-enabled" || name == "ains-status" || name == "total-duration" || name == "remaining-duration")
        return true;
    return false;
}

EthernetInterface::Berts::Berts()
    :
    bert(this, {"interface_name"})
{

    yang_name = "berts"; yang_parent_name = "ethernet-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetInterface::Berts::~Berts()
{
}

bool EthernetInterface::Berts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bert.len(); index++)
    {
        if(bert[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetInterface::Berts::has_operation() const
{
    for (std::size_t index=0; index<bert.len(); index++)
    {
        if(bert[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EthernetInterface::Berts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetInterface::Berts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "berts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Berts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Berts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bert")
    {
        auto c = std::make_shared<EthernetInterface::Berts::Bert>();
        c->parent = this;
        bert.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Berts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bert.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void EthernetInterface::Berts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EthernetInterface::Berts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EthernetInterface::Berts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bert")
        return true;
    return false;
}

EthernetInterface::Berts::Bert::Bert()
    :
    interface_name{YType::str, "interface-name"},
    time_left{YType::uint32, "time-left"},
    port_bert_interval{YType::uint32, "port-bert-interval"}
        ,
    bert_status(std::make_shared<EthernetInterface::Berts::Bert::BertStatus>())
{
    bert_status->parent = this;

    yang_name = "bert"; yang_parent_name = "berts"; is_top_level_class = false; has_list_ancestor = false; 
}

EthernetInterface::Berts::Bert::~Bert()
{
}

bool EthernetInterface::Berts::Bert::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| time_left.is_set
	|| port_bert_interval.is_set
	|| (bert_status !=  nullptr && bert_status->has_data());
}

bool EthernetInterface::Berts::Bert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(time_left.yfilter)
	|| ydk::is_set(port_bert_interval.yfilter)
	|| (bert_status !=  nullptr && bert_status->has_operation());
}

std::string EthernetInterface::Berts::Bert::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/berts/" << get_segment_path();
    return path_buffer.str();
}

std::string EthernetInterface::Berts::Bert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bert";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Berts::Bert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.yfilter)) leaf_name_data.push_back(time_left.get_name_leafdata());
    if (port_bert_interval.is_set || is_set(port_bert_interval.yfilter)) leaf_name_data.push_back(port_bert_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Berts::Bert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bert-status")
    {
        if(bert_status == nullptr)
        {
            bert_status = std::make_shared<EthernetInterface::Berts::Bert::BertStatus>();
        }
        return bert_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Berts::Bert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bert_status != nullptr)
    {
        children["bert-status"] = bert_status;
    }

    return children;
}

void EthernetInterface::Berts::Bert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-left")
    {
        time_left = value;
        time_left.value_namespace = name_space;
        time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-bert-interval")
    {
        port_bert_interval = value;
        port_bert_interval.value_namespace = name_space;
        port_bert_interval.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Berts::Bert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "time-left")
    {
        time_left.yfilter = yfilter;
    }
    if(value_path == "port-bert-interval")
    {
        port_bert_interval.yfilter = yfilter;
    }
}

bool EthernetInterface::Berts::Bert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bert-status" || name == "interface-name" || name == "time-left" || name == "port-bert-interval")
        return true;
    return false;
}

EthernetInterface::Berts::Bert::BertStatus::BertStatus()
    :
    bert_state_enabled{YType::boolean, "bert-state-enabled"},
    data_availability{YType::uint32, "data-availability"},
    receive_count{YType::uint64, "receive-count"},
    transmit_count{YType::uint64, "transmit-count"},
    receive_errors{YType::uint64, "receive-errors"},
    error_type{YType::enumeration, "error-type"},
    test_pattern{YType::enumeration, "test-pattern"},
    device_under_test{YType::enumeration, "device-under-test"},
    interface_device{YType::enumeration, "interface-device"}
{

    yang_name = "bert-status"; yang_parent_name = "bert"; is_top_level_class = false; has_list_ancestor = true; 
}

EthernetInterface::Berts::Bert::BertStatus::~BertStatus()
{
}

bool EthernetInterface::Berts::Bert::BertStatus::has_data() const
{
    if (is_presence_container) return true;
    return bert_state_enabled.is_set
	|| data_availability.is_set
	|| receive_count.is_set
	|| transmit_count.is_set
	|| receive_errors.is_set
	|| error_type.is_set
	|| test_pattern.is_set
	|| device_under_test.is_set
	|| interface_device.is_set;
}

bool EthernetInterface::Berts::Bert::BertStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bert_state_enabled.yfilter)
	|| ydk::is_set(data_availability.yfilter)
	|| ydk::is_set(receive_count.yfilter)
	|| ydk::is_set(transmit_count.yfilter)
	|| ydk::is_set(receive_errors.yfilter)
	|| ydk::is_set(error_type.yfilter)
	|| ydk::is_set(test_pattern.yfilter)
	|| ydk::is_set(device_under_test.yfilter)
	|| ydk::is_set(interface_device.yfilter);
}

std::string EthernetInterface::Berts::Bert::BertStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bert-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EthernetInterface::Berts::Bert::BertStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bert_state_enabled.is_set || is_set(bert_state_enabled.yfilter)) leaf_name_data.push_back(bert_state_enabled.get_name_leafdata());
    if (data_availability.is_set || is_set(data_availability.yfilter)) leaf_name_data.push_back(data_availability.get_name_leafdata());
    if (receive_count.is_set || is_set(receive_count.yfilter)) leaf_name_data.push_back(receive_count.get_name_leafdata());
    if (transmit_count.is_set || is_set(transmit_count.yfilter)) leaf_name_data.push_back(transmit_count.get_name_leafdata());
    if (receive_errors.is_set || is_set(receive_errors.yfilter)) leaf_name_data.push_back(receive_errors.get_name_leafdata());
    if (error_type.is_set || is_set(error_type.yfilter)) leaf_name_data.push_back(error_type.get_name_leafdata());
    if (test_pattern.is_set || is_set(test_pattern.yfilter)) leaf_name_data.push_back(test_pattern.get_name_leafdata());
    if (device_under_test.is_set || is_set(device_under_test.yfilter)) leaf_name_data.push_back(device_under_test.get_name_leafdata());
    if (interface_device.is_set || is_set(interface_device.yfilter)) leaf_name_data.push_back(interface_device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EthernetInterface::Berts::Bert::BertStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EthernetInterface::Berts::Bert::BertStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void EthernetInterface::Berts::Bert::BertStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bert-state-enabled")
    {
        bert_state_enabled = value;
        bert_state_enabled.value_namespace = name_space;
        bert_state_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-availability")
    {
        data_availability = value;
        data_availability.value_namespace = name_space;
        data_availability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-count")
    {
        receive_count = value;
        receive_count.value_namespace = name_space;
        receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-count")
    {
        transmit_count = value;
        transmit_count.value_namespace = name_space;
        transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-errors")
    {
        receive_errors = value;
        receive_errors.value_namespace = name_space;
        receive_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-type")
    {
        error_type = value;
        error_type.value_namespace = name_space;
        error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-pattern")
    {
        test_pattern = value;
        test_pattern.value_namespace = name_space;
        test_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-under-test")
    {
        device_under_test = value;
        device_under_test.value_namespace = name_space;
        device_under_test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-device")
    {
        interface_device = value;
        interface_device.value_namespace = name_space;
        interface_device.value_namespace_prefix = name_space_prefix;
    }
}

void EthernetInterface::Berts::Bert::BertStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bert-state-enabled")
    {
        bert_state_enabled.yfilter = yfilter;
    }
    if(value_path == "data-availability")
    {
        data_availability.yfilter = yfilter;
    }
    if(value_path == "receive-count")
    {
        receive_count.yfilter = yfilter;
    }
    if(value_path == "transmit-count")
    {
        transmit_count.yfilter = yfilter;
    }
    if(value_path == "receive-errors")
    {
        receive_errors.yfilter = yfilter;
    }
    if(value_path == "error-type")
    {
        error_type.yfilter = yfilter;
    }
    if(value_path == "test-pattern")
    {
        test_pattern.yfilter = yfilter;
    }
    if(value_path == "device-under-test")
    {
        device_under_test.yfilter = yfilter;
    }
    if(value_path == "interface-device")
    {
        interface_device.yfilter = yfilter;
    }
}

bool EthernetInterface::Berts::Bert::BertStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bert-state-enabled" || name == "data-availability" || name == "receive-count" || name == "transmit-count" || name == "receive-errors" || name == "error-type" || name == "test-pattern" || name == "device-under-test" || name == "interface-device")
        return true;
    return false;
}

const Enum::YLeaf EtherLinkState::state_undefined {0, "state-undefined"};
const Enum::YLeaf EtherLinkState::unknown_state {1, "unknown-state"};
const Enum::YLeaf EtherLinkState::available {2, "available"};
const Enum::YLeaf EtherLinkState::not_available {3, "not-available"};
const Enum::YLeaf EtherLinkState::remote_fault {4, "remote-fault"};
const Enum::YLeaf EtherLinkState::invalid_signal {5, "invalid-signal"};
const Enum::YLeaf EtherLinkState::remote_jabber {6, "remote-jabber"};
const Enum::YLeaf EtherLinkState::link_loss {7, "link-loss"};
const Enum::YLeaf EtherLinkState::remote_test {8, "remote-test"};
const Enum::YLeaf EtherLinkState::offline {9, "offline"};
const Enum::YLeaf EtherLinkState::auto_neg_error {10, "auto-neg-error"};
const Enum::YLeaf EtherLinkState::pmd_link_fault {11, "pmd-link-fault"};
const Enum::YLeaf EtherLinkState::frame_loss {12, "frame-loss"};
const Enum::YLeaf EtherLinkState::signal_loss {13, "signal-loss"};
const Enum::YLeaf EtherLinkState::link_fault {14, "link-fault"};
const Enum::YLeaf EtherLinkState::excessive_ber {15, "excessive-ber"};
const Enum::YLeaf EtherLinkState::dxs_link_fault {16, "dxs-link-fault"};
const Enum::YLeaf EtherLinkState::pxs_link_fault {17, "pxs-link-fault"};
const Enum::YLeaf EtherLinkState::security {18, "security"};
const Enum::YLeaf EtherLinkState::phy_not_present {19, "phy-not-present"};
const Enum::YLeaf EtherLinkState::no_optic_license {20, "no-optic-license"};
const Enum::YLeaf EtherLinkState::unsupported_module {21, "unsupported-module"};
const Enum::YLeaf EtherLinkState::dwdm_laser_shut {22, "dwdm-laser-shut"};
const Enum::YLeaf EtherLinkState::wanphy_laser_shut {23, "wanphy-laser-shut"};
const Enum::YLeaf EtherLinkState::incompatible_config {24, "incompatible-config"};
const Enum::YLeaf EtherLinkState::system_error {25, "system-error"};
const Enum::YLeaf EtherLinkState::wan_framing_error {26, "wan-framing-error"};
const Enum::YLeaf EtherLinkState::otn_framing_error {27, "otn-framing-error"};

const Enum::YLeaf EthernetBertPattern::no_test_pattern {0, "no-test-pattern"};
const Enum::YLeaf EthernetBertPattern::high_frequency {1, "high-frequency"};
const Enum::YLeaf EthernetBertPattern::low_frequency {2, "low-frequency"};
const Enum::YLeaf EthernetBertPattern::mixed_frequency {3, "mixed-frequency"};
const Enum::YLeaf EthernetBertPattern::continuous_random {4, "continuous-random"};
const Enum::YLeaf EthernetBertPattern::continuous_jitter {5, "continuous-jitter"};
const Enum::YLeaf EthernetBertPattern::long_continuous_random {6, "long-continuous-random"};
const Enum::YLeaf EthernetBertPattern::short_continuous_random {7, "short-continuous-random"};
const Enum::YLeaf EthernetBertPattern::pseudorandom_seed_a {8, "pseudorandom-seed-a"};
const Enum::YLeaf EthernetBertPattern::pseudorandom_seed_b {9, "pseudorandom-seed-b"};
const Enum::YLeaf EthernetBertPattern::prbs31 {10, "prbs31"};
const Enum::YLeaf EthernetBertPattern::square_wave {11, "square-wave"};
const Enum::YLeaf EthernetBertPattern::pseudorandom {12, "pseudorandom"};
const Enum::YLeaf EthernetBertPattern::ethernet_bert_pattern_types {13, "ethernet-bert-pattern-types"};

const Enum::YLeaf EthernetPortEnable::disabled {0, "disabled"};
const Enum::YLeaf EthernetPortEnable::rx_enabled {1, "rx-enabled"};
const Enum::YLeaf EthernetPortEnable::tx_enabled {2, "tx-enabled"};
const Enum::YLeaf EthernetPortEnable::enabled {3, "enabled"};

const Enum::YLeaf EthCtrlrAlarmState::alarm_not_supported {0, "alarm-not-supported"};
const Enum::YLeaf EthCtrlrAlarmState::alarm_set {1, "alarm-set"};
const Enum::YLeaf EthCtrlrAlarmState::alarm_not_set {2, "alarm-not-set"};

const Enum::YLeaf EthernetDev::no_device {0, "no-device"};
const Enum::YLeaf EthernetDev::pma_pmd {1, "pma-pmd"};
const Enum::YLeaf EthernetDev::wis {2, "wis"};
const Enum::YLeaf EthernetDev::pcs {3, "pcs"};
const Enum::YLeaf EthernetDev::phy_xs {4, "phy-xs"};
const Enum::YLeaf EthernetDev::dte_xs {5, "dte-xs"};
const Enum::YLeaf EthernetDev::ethernet_num_dev {6, "ethernet-num-dev"};

const Enum::YLeaf EtherPhyPresent::phy_not_present {0, "phy-not-present"};
const Enum::YLeaf EtherPhyPresent::phy_present {1, "phy-present"};
const Enum::YLeaf EtherPhyPresent::no_information {2, "no-information"};

const Enum::YLeaf EthernetDevIf::no_interface {0, "no-interface"};
const Enum::YLeaf EthernetDevIf::xgmii {1, "xgmii"};
const Enum::YLeaf EthernetDevIf::xaui {2, "xaui"};
const Enum::YLeaf EthernetDevIf::ethernet_num_dev_if {3, "ethernet-num-dev-if"};

const Enum::YLeaf EtherFlowcontrol::no_flowcontrol {0, "no-flowcontrol"};
const Enum::YLeaf EtherFlowcontrol::egress {1, "egress"};
const Enum::YLeaf EtherFlowcontrol::ingress {2, "ingress"};
const Enum::YLeaf EtherFlowcontrol::bidirectional {3, "bidirectional"};

const Enum::YLeaf EtherDomAlarm::no_information {0, "no-information"};
const Enum::YLeaf EtherDomAlarm::alarm_high {1, "alarm-high"};
const Enum::YLeaf EtherDomAlarm::warning_high {2, "warning-high"};
const Enum::YLeaf EtherDomAlarm::normal {3, "normal"};
const Enum::YLeaf EtherDomAlarm::warning_low {4, "warning-low"};
const Enum::YLeaf EtherDomAlarm::alarm_low {5, "alarm-low"};

const Enum::YLeaf EtherPfc::no_pfc {0, "no-pfc"};
const Enum::YLeaf EtherPfc::on {1, "on"};

const Enum::YLeaf EthernetBertErrCnt::no_count_type {0, "no-count-type"};
const Enum::YLeaf EthernetBertErrCnt::bit_error_count {1, "bit-error-count"};
const Enum::YLeaf EthernetBertErrCnt::frame_error_count {2, "frame-error-count"};
const Enum::YLeaf EthernetBertErrCnt::block_error_count {3, "block-error-count"};
const Enum::YLeaf EthernetBertErrCnt::ethernet_bert_err_cnt_types {4, "ethernet-bert-err-cnt-types"};

const Enum::YLeaf EthernetDuplex::ethernet_duplex_invalid {0, "ethernet-duplex-invalid"};
const Enum::YLeaf EthernetDuplex::half_duplex {1, "half-duplex"};
const Enum::YLeaf EthernetDuplex::full_duplex {2, "full-duplex"};

const Enum::YLeaf EthernetIpg::standard {0, "standard"};
const Enum::YLeaf EthernetIpg::non_standard {1, "non-standard"};

const Enum::YLeaf EthernetSpeed::ethernet_speed_invalid {0, "ethernet-speed-invalid"};
const Enum::YLeaf EthernetSpeed::ten_mbps {1, "ten-mbps"};
const Enum::YLeaf EthernetSpeed::hundred_mbps {2, "hundred-mbps"};
const Enum::YLeaf EthernetSpeed::one_gbps {3, "one-gbps"};
const Enum::YLeaf EthernetSpeed::ten_gbps {4, "ten-gbps"};
const Enum::YLeaf EthernetSpeed::twenty_five_gbps {5, "twenty-five-gbps"};
const Enum::YLeaf EthernetSpeed::forty_gbps {6, "forty-gbps"};
const Enum::YLeaf EthernetSpeed::fifty_gbps {7, "fifty-gbps"};
const Enum::YLeaf EthernetSpeed::hundred_gbps {8, "hundred-gbps"};
const Enum::YLeaf EthernetSpeed::two_hundred_gbps {9, "two-hundred-gbps"};
const Enum::YLeaf EthernetSpeed::four_hundred_gbps {10, "four-hundred-gbps"};
const Enum::YLeaf EthernetSpeed::ethernet_speed_types_count {11, "ethernet-speed-types-count"};

const Enum::YLeaf EtherLedState::led_state_unknown {0, "led-state-unknown"};
const Enum::YLeaf EtherLedState::led_off {1, "led-off"};
const Enum::YLeaf EtherLedState::green_on {2, "green-on"};
const Enum::YLeaf EtherLedState::green_flashing {3, "green-flashing"};
const Enum::YLeaf EtherLedState::yellow_on {4, "yellow-on"};
const Enum::YLeaf EtherLedState::yellow_flashing {5, "yellow-flashing"};
const Enum::YLeaf EtherLedState::red_on {6, "red-on"};
const Enum::YLeaf EtherLedState::red_flashing {7, "red-flashing"};

const Enum::YLeaf EthernetFec::not_configured {0, "not-configured"};
const Enum::YLeaf EthernetFec::standard {1, "standard"};
const Enum::YLeaf EthernetFec::disabled {2, "disabled"};
const Enum::YLeaf EthernetFec::base_r {3, "base-r"};

const Enum::YLeaf EthernetMedia::ethernet_other {0, "ethernet-other"};
const Enum::YLeaf EthernetMedia::ethernet_unknown {1, "ethernet-unknown"};
const Enum::YLeaf EthernetMedia::ethernet_aui {2, "ethernet-aui"};
const Enum::YLeaf EthernetMedia::ethernet_10base5 {3, "ethernet-10base5"};
const Enum::YLeaf EthernetMedia::ethernet_foirl {4, "ethernet-foirl"};
const Enum::YLeaf EthernetMedia::ethernet_10base2 {5, "ethernet-10base2"};
const Enum::YLeaf EthernetMedia::ethernet_10broad36 {6, "ethernet-10broad36"};
const Enum::YLeaf EthernetMedia::ethernet_10base {7, "ethernet-10base"};
const Enum::YLeaf EthernetMedia::ethernet_10base_thd {8, "ethernet-10base-thd"};
const Enum::YLeaf EthernetMedia::ethernet_10base_tfd {9, "ethernet-10base-tfd"};
const Enum::YLeaf EthernetMedia::ethernet_10base_fp {10, "ethernet-10base-fp"};
const Enum::YLeaf EthernetMedia::ethernet_10base_fb {11, "ethernet-10base-fb"};
const Enum::YLeaf EthernetMedia::ethernet_10base_fl {12, "ethernet-10base-fl"};
const Enum::YLeaf EthernetMedia::ethernet_10base_flhd {13, "ethernet-10base-flhd"};
const Enum::YLeaf EthernetMedia::ethernet_10base_flfd {14, "ethernet-10base-flfd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_t4 {15, "ethernet-100base-t4"};
const Enum::YLeaf EthernetMedia::ethernet_100base_tx {16, "ethernet-100base-tx"};
const Enum::YLeaf EthernetMedia::ethernet_100base_txhd {17, "ethernet-100base-txhd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_txfd {18, "ethernet-100base-txfd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_fx {19, "ethernet-100base-fx"};
const Enum::YLeaf EthernetMedia::ethernet_100base_fxhd {20, "ethernet-100base-fxhd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_fxfd {21, "ethernet-100base-fxfd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_ex {22, "ethernet-100base-ex"};
const Enum::YLeaf EthernetMedia::ethernet_100base_exhd {23, "ethernet-100base-exhd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_exfd {24, "ethernet-100base-exfd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_t2 {25, "ethernet-100base-t2"};
const Enum::YLeaf EthernetMedia::ethernet_100base_t2hd {26, "ethernet-100base-t2hd"};
const Enum::YLeaf EthernetMedia::ethernet_100base_t2fd {27, "ethernet-100base-t2fd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_x {28, "ethernet-1000base-x"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_xhd {29, "ethernet-1000base-xhd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_xfd {30, "ethernet-1000base-xfd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_lx {31, "ethernet-1000base-lx"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_lxhd {32, "ethernet-1000base-lxhd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_lxfd {33, "ethernet-1000base-lxfd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_sx {34, "ethernet-1000base-sx"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_sxhd {35, "ethernet-1000base-sxhd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_sxfd {36, "ethernet-1000base-sxfd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cx {37, "ethernet-1000base-cx"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cxhd {38, "ethernet-1000base-cxhd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cxfd {39, "ethernet-1000base-cxfd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base {40, "ethernet-1000base"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_thd {41, "ethernet-1000base-thd"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_tfd {42, "ethernet-1000base-tfd"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_x {43, "ethernet-10gbase-x"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_lx4 {44, "ethernet-10gbase-lx4"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_r {45, "ethernet-10gbase-r"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_er {46, "ethernet-10gbase-er"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_lr {47, "ethernet-10gbase-lr"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_sr {48, "ethernet-10gbase-sr"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_w {49, "ethernet-10gbase-w"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_ew {50, "ethernet-10gbase-ew"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_lw {51, "ethernet-10gbase-lw"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_sw {52, "ethernet-10gbase-sw"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_zx {53, "ethernet-1000base-zx"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm {54, "ethernet-1000base-cwdm"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1470 {55, "ethernet-1000base-cwdm-1470"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1490 {56, "ethernet-1000base-cwdm-1490"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1510 {57, "ethernet-1000base-cwdm-1510"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1530 {58, "ethernet-1000base-cwdm-1530"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1550 {59, "ethernet-1000base-cwdm-1550"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1570 {60, "ethernet-1000base-cwdm-1570"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1590 {61, "ethernet-1000base-cwdm-1590"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_cwdm_1610 {62, "ethernet-1000base-cwdm-1610"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_zr {63, "ethernet-10gbase-zr"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm {64, "ethernet-10gbase-dwdm"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_lr4 {65, "ethernet-100gbase-lr4"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm {66, "ethernet-1000base-dwdm"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1533 {67, "ethernet-1000base-dwdm-1533"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1537 {68, "ethernet-1000base-dwdm-1537"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1541 {69, "ethernet-1000base-dwdm-1541"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1545 {70, "ethernet-1000base-dwdm-1545"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1549 {71, "ethernet-1000base-dwdm-1549"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1553 {72, "ethernet-1000base-dwdm-1553"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1557 {73, "ethernet-1000base-dwdm-1557"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1561 {74, "ethernet-1000base-dwdm-1561"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_lr4 {75, "ethernet-40gbase-lr4"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_er4 {76, "ethernet-40gbase-er4"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_er4 {77, "ethernet-100gbase-er4"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_ex {78, "ethernet-1000base-ex"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx10_d {79, "ethernet-1000base-bx10-d"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx10_u {80, "ethernet-1000base-bx10-u"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1561_42 {81, "ethernet-1000base-dwdm-1561-42"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1560_61 {82, "ethernet-1000base-dwdm-1560-61"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1559_79 {83, "ethernet-1000base-dwdm-1559-79"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1558_98 {84, "ethernet-1000base-dwdm-1558-98"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1558_17 {85, "ethernet-1000base-dwdm-1558-17"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1557_36 {86, "ethernet-1000base-dwdm-1557-36"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1556_55 {87, "ethernet-1000base-dwdm-1556-55"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1555_75 {88, "ethernet-1000base-dwdm-1555-75"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1554_94 {89, "ethernet-1000base-dwdm-1554-94"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1554_13 {90, "ethernet-1000base-dwdm-1554-13"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1553_33 {91, "ethernet-1000base-dwdm-1553-33"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1552_52 {92, "ethernet-1000base-dwdm-1552-52"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1551_72 {93, "ethernet-1000base-dwdm-1551-72"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1550_92 {94, "ethernet-1000base-dwdm-1550-92"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1550_12 {95, "ethernet-1000base-dwdm-1550-12"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1549_32 {96, "ethernet-1000base-dwdm-1549-32"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1548_51 {97, "ethernet-1000base-dwdm-1548-51"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1547_72 {98, "ethernet-1000base-dwdm-1547-72"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1546_92 {99, "ethernet-1000base-dwdm-1546-92"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1546_12 {100, "ethernet-1000base-dwdm-1546-12"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1545_32 {101, "ethernet-1000base-dwdm-1545-32"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1544_53 {102, "ethernet-1000base-dwdm-1544-53"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1543_73 {103, "ethernet-1000base-dwdm-1543-73"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1542_94 {104, "ethernet-1000base-dwdm-1542-94"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1542_14 {105, "ethernet-1000base-dwdm-1542-14"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1541_35 {106, "ethernet-1000base-dwdm-1541-35"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1540_56 {107, "ethernet-1000base-dwdm-1540-56"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1539_77 {108, "ethernet-1000base-dwdm-1539-77"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1538_98 {109, "ethernet-1000base-dwdm-1538-98"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1538_19 {110, "ethernet-1000base-dwdm-1538-19"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1537_40 {111, "ethernet-1000base-dwdm-1537-40"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1536_61 {112, "ethernet-1000base-dwdm-1536-61"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1535_82 {113, "ethernet-1000base-dwdm-1535-82"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1535_04 {114, "ethernet-1000base-dwdm-1535-04"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1534_25 {115, "ethernet-1000base-dwdm-1534-25"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1533_47 {116, "ethernet-1000base-dwdm-1533-47"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1532_68 {117, "ethernet-1000base-dwdm-1532-68"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1531_90 {118, "ethernet-1000base-dwdm-1531-90"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1531_12 {119, "ethernet-1000base-dwdm-1531-12"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_1530_33 {120, "ethernet-1000base-dwdm-1530-33"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dwdm_tunable {121, "ethernet-1000base-dwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1561_42 {122, "ethernet-10gbase-dwdm-1561-42"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1560_61 {123, "ethernet-10gbase-dwdm-1560-61"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1559_79 {124, "ethernet-10gbase-dwdm-1559-79"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1558_98 {125, "ethernet-10gbase-dwdm-1558-98"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1558_17 {126, "ethernet-10gbase-dwdm-1558-17"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1557_36 {127, "ethernet-10gbase-dwdm-1557-36"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1556_55 {128, "ethernet-10gbase-dwdm-1556-55"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1555_75 {129, "ethernet-10gbase-dwdm-1555-75"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1554_94 {130, "ethernet-10gbase-dwdm-1554-94"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1554_13 {131, "ethernet-10gbase-dwdm-1554-13"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1553_33 {132, "ethernet-10gbase-dwdm-1553-33"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1552_52 {133, "ethernet-10gbase-dwdm-1552-52"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1551_72 {134, "ethernet-10gbase-dwdm-1551-72"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1550_92 {135, "ethernet-10gbase-dwdm-1550-92"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1550_12 {136, "ethernet-10gbase-dwdm-1550-12"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1549_32 {137, "ethernet-10gbase-dwdm-1549-32"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1548_51 {138, "ethernet-10gbase-dwdm-1548-51"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1547_72 {139, "ethernet-10gbase-dwdm-1547-72"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1546_92 {140, "ethernet-10gbase-dwdm-1546-92"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1546_12 {141, "ethernet-10gbase-dwdm-1546-12"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1545_32 {142, "ethernet-10gbase-dwdm-1545-32"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1544_53 {143, "ethernet-10gbase-dwdm-1544-53"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1543_73 {144, "ethernet-10gbase-dwdm-1543-73"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1542_94 {145, "ethernet-10gbase-dwdm-1542-94"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1542_14 {146, "ethernet-10gbase-dwdm-1542-14"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1541_35 {147, "ethernet-10gbase-dwdm-1541-35"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1540_56 {148, "ethernet-10gbase-dwdm-1540-56"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1539_77 {149, "ethernet-10gbase-dwdm-1539-77"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1538_98 {150, "ethernet-10gbase-dwdm-1538-98"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1538_19 {151, "ethernet-10gbase-dwdm-1538-19"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1537_40 {152, "ethernet-10gbase-dwdm-1537-40"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1536_61 {153, "ethernet-10gbase-dwdm-1536-61"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1535_82 {154, "ethernet-10gbase-dwdm-1535-82"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1535_04 {155, "ethernet-10gbase-dwdm-1535-04"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1534_25 {156, "ethernet-10gbase-dwdm-1534-25"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1533_47 {157, "ethernet-10gbase-dwdm-1533-47"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1532_68 {158, "ethernet-10gbase-dwdm-1532-68"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1531_90 {159, "ethernet-10gbase-dwdm-1531-90"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1531_12 {160, "ethernet-10gbase-dwdm-1531-12"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_1530_33 {161, "ethernet-10gbase-dwdm-1530-33"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_dwdm_tunable {162, "ethernet-10gbase-dwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1561_42 {163, "ethernet-40gbase-dwdm-1561-42"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1560_61 {164, "ethernet-40gbase-dwdm-1560-61"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1559_79 {165, "ethernet-40gbase-dwdm-1559-79"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1558_98 {166, "ethernet-40gbase-dwdm-1558-98"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1558_17 {167, "ethernet-40gbase-dwdm-1558-17"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1557_36 {168, "ethernet-40gbase-dwdm-1557-36"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1556_55 {169, "ethernet-40gbase-dwdm-1556-55"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1555_75 {170, "ethernet-40gbase-dwdm-1555-75"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1554_94 {171, "ethernet-40gbase-dwdm-1554-94"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1554_13 {172, "ethernet-40gbase-dwdm-1554-13"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1553_33 {173, "ethernet-40gbase-dwdm-1553-33"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1552_52 {174, "ethernet-40gbase-dwdm-1552-52"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1551_72 {175, "ethernet-40gbase-dwdm-1551-72"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1550_92 {176, "ethernet-40gbase-dwdm-1550-92"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1550_12 {177, "ethernet-40gbase-dwdm-1550-12"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1549_32 {178, "ethernet-40gbase-dwdm-1549-32"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1548_51 {179, "ethernet-40gbase-dwdm-1548-51"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1547_72 {180, "ethernet-40gbase-dwdm-1547-72"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1546_92 {181, "ethernet-40gbase-dwdm-1546-92"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1546_12 {182, "ethernet-40gbase-dwdm-1546-12"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1545_32 {183, "ethernet-40gbase-dwdm-1545-32"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1544_53 {184, "ethernet-40gbase-dwdm-1544-53"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1543_73 {185, "ethernet-40gbase-dwdm-1543-73"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1542_94 {186, "ethernet-40gbase-dwdm-1542-94"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1542_14 {187, "ethernet-40gbase-dwdm-1542-14"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1541_35 {188, "ethernet-40gbase-dwdm-1541-35"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1540_56 {189, "ethernet-40gbase-dwdm-1540-56"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1539_77 {190, "ethernet-40gbase-dwdm-1539-77"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1538_98 {191, "ethernet-40gbase-dwdm-1538-98"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1538_19 {192, "ethernet-40gbase-dwdm-1538-19"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1537_40 {193, "ethernet-40gbase-dwdm-1537-40"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1536_61 {194, "ethernet-40gbase-dwdm-1536-61"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1535_82 {195, "ethernet-40gbase-dwdm-1535-82"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1535_04 {196, "ethernet-40gbase-dwdm-1535-04"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1534_25 {197, "ethernet-40gbase-dwdm-1534-25"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1533_47 {198, "ethernet-40gbase-dwdm-1533-47"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1532_68 {199, "ethernet-40gbase-dwdm-1532-68"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1531_90 {200, "ethernet-40gbase-dwdm-1531-90"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1531_12 {201, "ethernet-40gbase-dwdm-1531-12"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_1530_33 {202, "ethernet-40gbase-dwdm-1530-33"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_dwdm_tunable {203, "ethernet-40gbase-dwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1561_42 {204, "ethernet-100gbase-dwdm-1561-42"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1560_61 {205, "ethernet-100gbase-dwdm-1560-61"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1559_79 {206, "ethernet-100gbase-dwdm-1559-79"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1558_98 {207, "ethernet-100gbase-dwdm-1558-98"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1558_17 {208, "ethernet-100gbase-dwdm-1558-17"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1557_36 {209, "ethernet-100gbase-dwdm-1557-36"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1556_55 {210, "ethernet-100gbase-dwdm-1556-55"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1555_75 {211, "ethernet-100gbase-dwdm-1555-75"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1554_94 {212, "ethernet-100gbase-dwdm-1554-94"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1554_13 {213, "ethernet-100gbase-dwdm-1554-13"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1553_33 {214, "ethernet-100gbase-dwdm-1553-33"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1552_52 {215, "ethernet-100gbase-dwdm-1552-52"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1551_72 {216, "ethernet-100gbase-dwdm-1551-72"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1550_92 {217, "ethernet-100gbase-dwdm-1550-92"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1550_12 {218, "ethernet-100gbase-dwdm-1550-12"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1549_32 {219, "ethernet-100gbase-dwdm-1549-32"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1548_51 {220, "ethernet-100gbase-dwdm-1548-51"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1547_72 {221, "ethernet-100gbase-dwdm-1547-72"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1546_92 {222, "ethernet-100gbase-dwdm-1546-92"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1546_12 {223, "ethernet-100gbase-dwdm-1546-12"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1545_32 {224, "ethernet-100gbase-dwdm-1545-32"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1544_53 {225, "ethernet-100gbase-dwdm-1544-53"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1543_73 {226, "ethernet-100gbase-dwdm-1543-73"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1542_94 {227, "ethernet-100gbase-dwdm-1542-94"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1542_14 {228, "ethernet-100gbase-dwdm-1542-14"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1541_35 {229, "ethernet-100gbase-dwdm-1541-35"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1540_56 {230, "ethernet-100gbase-dwdm-1540-56"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1539_77 {231, "ethernet-100gbase-dwdm-1539-77"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1538_98 {232, "ethernet-100gbase-dwdm-1538-98"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1538_19 {233, "ethernet-100gbase-dwdm-1538-19"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1537_40 {234, "ethernet-100gbase-dwdm-1537-40"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1536_61 {235, "ethernet-100gbase-dwdm-1536-61"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1535_82 {236, "ethernet-100gbase-dwdm-1535-82"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1535_04 {237, "ethernet-100gbase-dwdm-1535-04"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1534_25 {238, "ethernet-100gbase-dwdm-1534-25"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1533_47 {239, "ethernet-100gbase-dwdm-1533-47"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1532_68 {240, "ethernet-100gbase-dwdm-1532-68"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1531_90 {241, "ethernet-100gbase-dwdm-1531-90"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1531_12 {242, "ethernet-100gbase-dwdm-1531-12"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_1530_33 {243, "ethernet-100gbase-dwdm-1530-33"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_dwdm_tunable {244, "ethernet-100gbase-dwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_kr4 {245, "ethernet-40gbase-kr4"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cr4 {246, "ethernet-40gbase-cr4"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_sr4 {247, "ethernet-40gbase-sr4"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_fr {248, "ethernet-40gbase-fr"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cr10 {249, "ethernet-100gbase-cr10"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_sr10 {250, "ethernet-100gbase-sr10"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_csr4 {251, "ethernet-40gbase-csr4"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm {252, "ethernet-10gbase-cwdm"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_tunable {253, "ethernet-10gbase-cwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1470 {254, "ethernet-10gbase-cwdm-1470"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1490 {255, "ethernet-10gbase-cwdm-1490"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1510 {256, "ethernet-10gbase-cwdm-1510"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1530 {257, "ethernet-10gbase-cwdm-1530"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1550 {258, "ethernet-10gbase-cwdm-1550"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1570 {259, "ethernet-10gbase-cwdm-1570"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1590 {260, "ethernet-10gbase-cwdm-1590"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cwdm_1610 {261, "ethernet-10gbase-cwdm-1610"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm {262, "ethernet-40gbase-cwdm"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_tunable {263, "ethernet-40gbase-cwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1470 {264, "ethernet-40gbase-cwdm-1470"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1490 {265, "ethernet-40gbase-cwdm-1490"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1510 {266, "ethernet-40gbase-cwdm-1510"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1530 {267, "ethernet-40gbase-cwdm-1530"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1550 {268, "ethernet-40gbase-cwdm-1550"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1570 {269, "ethernet-40gbase-cwdm-1570"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1590 {270, "ethernet-40gbase-cwdm-1590"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_cwdm_1610 {271, "ethernet-40gbase-cwdm-1610"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm {272, "ethernet-100gbase-cwdm"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_tunable {273, "ethernet-100gbase-cwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1470 {274, "ethernet-100gbase-cwdm-1470"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1490 {275, "ethernet-100gbase-cwdm-1490"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1510 {276, "ethernet-100gbase-cwdm-1510"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1530 {277, "ethernet-100gbase-cwdm-1530"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1550 {278, "ethernet-100gbase-cwdm-1550"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1570 {279, "ethernet-100gbase-cwdm-1570"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1590 {280, "ethernet-100gbase-cwdm-1590"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm_1610 {281, "ethernet-100gbase-cwdm-1610"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_elpb {282, "ethernet-40gbase-elpb"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_elpb {283, "ethernet-100gbase-elpb"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_lr10 {284, "ethernet-100gbase-lr10"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase {285, "ethernet-40gbase"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_kp4 {286, "ethernet-100gbase-kp4"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_kr4 {287, "ethernet-100gbase-kr4"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_lrm {288, "ethernet-10gbase-lrm"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cx4 {289, "ethernet-10gbase-cx4"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase {290, "ethernet-10gbase"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_kx4 {291, "ethernet-10gbase-kx4"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_kr {292, "ethernet-10gbase-kr"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_pr {293, "ethernet-10gbase-pr"};
const Enum::YLeaf EthernetMedia::ethernet_100base_lx {294, "ethernet-100base-lx"};
const Enum::YLeaf EthernetMedia::ethernet_100base_zx {295, "ethernet-100base-zx"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx_d {296, "ethernet-1000base-bx-d"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx_u {297, "ethernet-1000base-bx-u"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx20_d {298, "ethernet-1000base-bx20-d"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx20_u {299, "ethernet-1000base-bx20-u"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx40_d {300, "ethernet-1000base-bx40-d"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx40_da {301, "ethernet-1000base-bx40-da"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx40_u {302, "ethernet-1000base-bx40-u"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx80_d {303, "ethernet-1000base-bx80-d"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx80_u {304, "ethernet-1000base-bx80-u"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx120_d {305, "ethernet-1000base-bx120-d"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_bx120_u {306, "ethernet-1000base-bx120-u"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx_d {307, "ethernet-10gbase-bx-d"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx_u {308, "ethernet-10gbase-bx-u"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx10_d {309, "ethernet-10gbase-bx10-d"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx10_u {310, "ethernet-10gbase-bx10-u"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx20_d {311, "ethernet-10gbase-bx20-d"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx20_u {312, "ethernet-10gbase-bx20-u"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx40_d {313, "ethernet-10gbase-bx40-d"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx40_u {314, "ethernet-10gbase-bx40-u"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx80_d {315, "ethernet-10gbase-bx80-d"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx80_u {316, "ethernet-10gbase-bx80-u"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx120_d {317, "ethernet-10gbase-bx120-d"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_bx120_u {318, "ethernet-10gbase-bx120-u"};
const Enum::YLeaf EthernetMedia::ethernet_1000base_dr_lx {319, "ethernet-1000base-dr-lx"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_er4l {320, "ethernet-100gbase-er4l"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_sr4 {321, "ethernet-100gbase-sr4"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_sr_bd {322, "ethernet-40gbase-sr-bd"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_cr {323, "ethernet-25gbase-cr"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_cr_s {324, "ethernet-25gbase-cr-s"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_kr {325, "ethernet-25gbase-kr"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_kr_s {326, "ethernet-25gbase-kr-s"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_r {327, "ethernet-25gbase-r"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_sr {328, "ethernet-25gbase-sr"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_dwdm {329, "ethernet-25gbase-dwdm"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_dwdm_tunable {330, "ethernet-25gbase-dwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_cwdm {331, "ethernet-25gbase-cwdm"};
const Enum::YLeaf EthernetMedia::ethernet_25gbase_cwdm_tunable {332, "ethernet-25gbase-cwdm-tunable"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_psm4 {333, "ethernet-100gbase-psm4"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_er10 {334, "ethernet-100gbase-er10"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_er10l {335, "ethernet-100gbase-er10l"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_acc {336, "ethernet-100gbase-acc"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_aoc {337, "ethernet-100gbase-aoc"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cwdm4 {338, "ethernet-100gbase-cwdm4"};
const Enum::YLeaf EthernetMedia::ethernet_40gbase_psm4 {339, "ethernet-40gbase-psm4"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_cr4 {340, "ethernet-100gbase-cr4"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_act_loop {341, "ethernet-100gbase-act-loop"};
const Enum::YLeaf EthernetMedia::ethernet_100gbase_pas_loop {342, "ethernet-100gbase-pas-loop"};
const Enum::YLeaf EthernetMedia::ethernet_50gbase_cr2 {343, "ethernet-50gbase-cr2"};
const Enum::YLeaf EthernetMedia::ethernet_50gbase_sr2 {344, "ethernet-50gbase-sr2"};
const Enum::YLeaf EthernetMedia::ethernet_50gbase_psm2 {345, "ethernet-50gbase-psm2"};
const Enum::YLeaf EthernetMedia::ethernet_200gbase_cr4 {346, "ethernet-200gbase-cr4"};
const Enum::YLeaf EthernetMedia::ethernet_400gbase_fr4 {347, "ethernet-400gbase-fr4"};
const Enum::YLeaf EthernetMedia::ethernet_400gbase_dr4 {348, "ethernet-400gbase-dr4"};
const Enum::YLeaf EthernetMedia::ethernet_400gbase_cr4 {349, "ethernet-400gbase-cr4"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cu1m {350, "ethernet-10gbase-cu1m"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cu3m {351, "ethernet-10gbase-cu3m"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_cu5m {352, "ethernet-10gbase-cu5m"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_acu7m {353, "ethernet-10gbase-acu7m"};
const Enum::YLeaf EthernetMedia::ethernet_10gbase_acu10m {354, "ethernet-10gbase-acu10m"};
const Enum::YLeaf EthernetMedia::ethernet_base_max {355, "ethernet-base-max"};

const Enum::YLeaf EtherAinsStatus::ains_soak_status_none {0, "ains-soak-status-none"};
const Enum::YLeaf EtherAinsStatus::ains_soak_status_pending {1, "ains-soak-status-pending"};
const Enum::YLeaf EtherAinsStatus::ains_soak_status_running {2, "ains-soak-status-running"};

const Enum::YLeaf EthernetLoopback::no_loopback {0, "no-loopback"};
const Enum::YLeaf EthernetLoopback::internal {1, "internal"};
const Enum::YLeaf EthernetLoopback::line {2, "line"};
const Enum::YLeaf EthernetLoopback::external {3, "external"};


}
}

