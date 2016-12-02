
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_drivers_media_eth_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_drivers_media_eth_oper {

EthernetInterface::Statistics::Statistic::Statistic()
    :
    	interface_name{YType::str, "interface-name"},
	 aborted_packet_drops{YType::uint64, "aborted-packet-drops"},
	 buffer_underrun_packet_drops{YType::uint64, "buffer-underrun-packet-drops"},
	 dropped_ether_stats_fragments{YType::uint64, "dropped-ether-stats-fragments"},
	 dropped_ether_stats_undersize_pkts{YType::uint64, "dropped-ether-stats-undersize-pkts"},
	 dropped_giant_packets_greaterthan_mru{YType::uint64, "dropped-giant-packets-greaterthan-mru"},
	 dropped_jabbers_packets_greaterthan_mru{YType::uint64, "dropped-jabbers-packets-greaterthan-mru"},
	 dropped_miscellaneous_error_packets{YType::uint64, "dropped-miscellaneous-error-packets"},
	 dropped_packets_with_crc_align_errors{YType::uint64, "dropped-packets-with-crc-align-errors"},
	 ether_stats_collisions{YType::uint64, "ether-stats-collisions"},
	 invalid_dest_mac_drop_packets{YType::uint64, "invalid-dest-mac-drop-packets"},
	 invalid_encap_drop_packets{YType::uint64, "invalid-encap-drop-packets"},
	 miscellaneous_output_errors{YType::uint64, "miscellaneous-output-errors"},
	 number_of_aborted_packets_dropped{YType::uint64, "number-of-aborted-packets-dropped"},
	 number_of_buffer_overrun_packets_dropped{YType::uint64, "number-of-buffer-overrun-packets-dropped"},
	 number_of_miscellaneous_packets_dropped{YType::uint64, "number-of-miscellaneous-packets-dropped"},
	 numberof_invalid_vlan_id_packets_dropped{YType::uint64, "numberof-invalid-vlan-id-packets-dropped"},
	 received8021q_frames{YType::uint64, "received8021q-frames"},
	 received_broadcast_frames{YType::uint64, "received-broadcast-frames"},
	 received_good_bytes{YType::uint64, "received-good-bytes"},
	 received_good_frames{YType::uint64, "received-good-frames"},
	 received_multicast_frames{YType::uint64, "received-multicast-frames"},
	 received_pause_frames{YType::uint64, "received-pause-frames"},
	 received_total64_octet_frames{YType::uint64, "received-total64-octet-frames"},
	 received_total_bytes{YType::uint64, "received-total-bytes"},
	 received_total_frames{YType::uint64, "received-total-frames"},
	 received_total_octet_frames_from1024_to1518{YType::uint64, "received-total-octet-frames-from1024-to1518"},
	 received_total_octet_frames_from128_to255{YType::uint64, "received-total-octet-frames-from128-to255"},
	 received_total_octet_frames_from1519_to_max{YType::uint64, "received-total-octet-frames-from1519-to-max"},
	 received_total_octet_frames_from256_to511{YType::uint64, "received-total-octet-frames-from256-to511"},
	 received_total_octet_frames_from512_to1023{YType::uint64, "received-total-octet-frames-from512-to1023"},
	 received_total_octet_frames_from65_to127{YType::uint64, "received-total-octet-frames-from65-to127"},
	 received_unicast_frames{YType::uint64, "received-unicast-frames"},
	 received_unknown_opcodes{YType::uint64, "received-unknown-opcodes"},
	 rfc2819_ether_stats_crc_align_errors{YType::uint64, "rfc2819-ether-stats-crc-align-errors"},
	 rfc2819_ether_stats_jabbers{YType::uint64, "rfc2819-ether-stats-jabbers"},
	 rfc2819_ether_stats_oversized_pkts{YType::uint64, "rfc2819-ether-stats-oversized-pkts"},
	 rfc3635dot3_stats_alignment_errors{YType::uint64, "rfc3635dot3-stats-alignment-errors"},
	 symbol_errors{YType::uint64, "symbol-errors"},
	 total_bytes_transmitted{YType::uint64, "total-bytes-transmitted"},
	 total_frames_transmitted{YType::uint64, "total-frames-transmitted"},
	 total_good_bytes_transmitted{YType::uint64, "total-good-bytes-transmitted"},
	 transmitted8021q_frames{YType::uint64, "transmitted8021q-frames"},
	 transmitted_broadcast_frames{YType::uint64, "transmitted-broadcast-frames"},
	 transmitted_good_frames{YType::uint64, "transmitted-good-frames"},
	 transmitted_multicast_frames{YType::uint64, "transmitted-multicast-frames"},
	 transmitted_total64_octet_frames{YType::uint64, "transmitted-total64-octet-frames"},
	 transmitted_total_octet_frames_from1024_to1518{YType::uint64, "transmitted-total-octet-frames-from1024-to1518"},
	 transmitted_total_octet_frames_from128_to255{YType::uint64, "transmitted-total-octet-frames-from128-to255"},
	 transmitted_total_octet_frames_from1518_to_max{YType::uint64, "transmitted-total-octet-frames-from1518-to-max"},
	 transmitted_total_octet_frames_from256_to511{YType::uint64, "transmitted-total-octet-frames-from256-to511"},
	 transmitted_total_octet_frames_from512_to1023{YType::uint64, "transmitted-total-octet-frames-from512-to1023"},
	 transmitted_total_octet_frames_from65_to127{YType::uint64, "transmitted-total-octet-frames-from65-to127"},
	 transmitted_total_pause_frames{YType::uint64, "transmitted-total-pause-frames"},
	 transmitted_unicast_frames{YType::uint64, "transmitted-unicast-frames"},
	 uncounted_dropped_frames{YType::uint64, "uncounted-dropped-frames"}
{
    yang_name = "statistic"; yang_parent_name = "statistics";
}

EthernetInterface::Statistics::Statistic::~Statistic()
{
}

bool EthernetInterface::Statistics::Statistic::has_data() const
{
    return interface_name.is_set
	|| aborted_packet_drops.is_set
	|| buffer_underrun_packet_drops.is_set
	|| dropped_ether_stats_fragments.is_set
	|| dropped_ether_stats_undersize_pkts.is_set
	|| dropped_giant_packets_greaterthan_mru.is_set
	|| dropped_jabbers_packets_greaterthan_mru.is_set
	|| dropped_miscellaneous_error_packets.is_set
	|| dropped_packets_with_crc_align_errors.is_set
	|| ether_stats_collisions.is_set
	|| invalid_dest_mac_drop_packets.is_set
	|| invalid_encap_drop_packets.is_set
	|| miscellaneous_output_errors.is_set
	|| number_of_aborted_packets_dropped.is_set
	|| number_of_buffer_overrun_packets_dropped.is_set
	|| number_of_miscellaneous_packets_dropped.is_set
	|| numberof_invalid_vlan_id_packets_dropped.is_set
	|| received8021q_frames.is_set
	|| received_broadcast_frames.is_set
	|| received_good_bytes.is_set
	|| received_good_frames.is_set
	|| received_multicast_frames.is_set
	|| received_pause_frames.is_set
	|| received_total64_octet_frames.is_set
	|| received_total_bytes.is_set
	|| received_total_frames.is_set
	|| received_total_octet_frames_from1024_to1518.is_set
	|| received_total_octet_frames_from128_to255.is_set
	|| received_total_octet_frames_from1519_to_max.is_set
	|| received_total_octet_frames_from256_to511.is_set
	|| received_total_octet_frames_from512_to1023.is_set
	|| received_total_octet_frames_from65_to127.is_set
	|| received_unicast_frames.is_set
	|| received_unknown_opcodes.is_set
	|| rfc2819_ether_stats_crc_align_errors.is_set
	|| rfc2819_ether_stats_jabbers.is_set
	|| rfc2819_ether_stats_oversized_pkts.is_set
	|| rfc3635dot3_stats_alignment_errors.is_set
	|| symbol_errors.is_set
	|| total_bytes_transmitted.is_set
	|| total_frames_transmitted.is_set
	|| total_good_bytes_transmitted.is_set
	|| transmitted8021q_frames.is_set
	|| transmitted_broadcast_frames.is_set
	|| transmitted_good_frames.is_set
	|| transmitted_multicast_frames.is_set
	|| transmitted_total64_octet_frames.is_set
	|| transmitted_total_octet_frames_from1024_to1518.is_set
	|| transmitted_total_octet_frames_from128_to255.is_set
	|| transmitted_total_octet_frames_from1518_to_max.is_set
	|| transmitted_total_octet_frames_from256_to511.is_set
	|| transmitted_total_octet_frames_from512_to1023.is_set
	|| transmitted_total_octet_frames_from65_to127.is_set
	|| transmitted_total_pause_frames.is_set
	|| transmitted_unicast_frames.is_set
	|| uncounted_dropped_frames.is_set;
}

bool EthernetInterface::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(aborted_packet_drops.operation)
	|| is_set(buffer_underrun_packet_drops.operation)
	|| is_set(dropped_ether_stats_fragments.operation)
	|| is_set(dropped_ether_stats_undersize_pkts.operation)
	|| is_set(dropped_giant_packets_greaterthan_mru.operation)
	|| is_set(dropped_jabbers_packets_greaterthan_mru.operation)
	|| is_set(dropped_miscellaneous_error_packets.operation)
	|| is_set(dropped_packets_with_crc_align_errors.operation)
	|| is_set(ether_stats_collisions.operation)
	|| is_set(invalid_dest_mac_drop_packets.operation)
	|| is_set(invalid_encap_drop_packets.operation)
	|| is_set(miscellaneous_output_errors.operation)
	|| is_set(number_of_aborted_packets_dropped.operation)
	|| is_set(number_of_buffer_overrun_packets_dropped.operation)
	|| is_set(number_of_miscellaneous_packets_dropped.operation)
	|| is_set(numberof_invalid_vlan_id_packets_dropped.operation)
	|| is_set(received8021q_frames.operation)
	|| is_set(received_broadcast_frames.operation)
	|| is_set(received_good_bytes.operation)
	|| is_set(received_good_frames.operation)
	|| is_set(received_multicast_frames.operation)
	|| is_set(received_pause_frames.operation)
	|| is_set(received_total64_octet_frames.operation)
	|| is_set(received_total_bytes.operation)
	|| is_set(received_total_frames.operation)
	|| is_set(received_total_octet_frames_from1024_to1518.operation)
	|| is_set(received_total_octet_frames_from128_to255.operation)
	|| is_set(received_total_octet_frames_from1519_to_max.operation)
	|| is_set(received_total_octet_frames_from256_to511.operation)
	|| is_set(received_total_octet_frames_from512_to1023.operation)
	|| is_set(received_total_octet_frames_from65_to127.operation)
	|| is_set(received_unicast_frames.operation)
	|| is_set(received_unknown_opcodes.operation)
	|| is_set(rfc2819_ether_stats_crc_align_errors.operation)
	|| is_set(rfc2819_ether_stats_jabbers.operation)
	|| is_set(rfc2819_ether_stats_oversized_pkts.operation)
	|| is_set(rfc3635dot3_stats_alignment_errors.operation)
	|| is_set(symbol_errors.operation)
	|| is_set(total_bytes_transmitted.operation)
	|| is_set(total_frames_transmitted.operation)
	|| is_set(total_good_bytes_transmitted.operation)
	|| is_set(transmitted8021q_frames.operation)
	|| is_set(transmitted_broadcast_frames.operation)
	|| is_set(transmitted_good_frames.operation)
	|| is_set(transmitted_multicast_frames.operation)
	|| is_set(transmitted_total64_octet_frames.operation)
	|| is_set(transmitted_total_octet_frames_from1024_to1518.operation)
	|| is_set(transmitted_total_octet_frames_from128_to255.operation)
	|| is_set(transmitted_total_octet_frames_from1518_to_max.operation)
	|| is_set(transmitted_total_octet_frames_from256_to511.operation)
	|| is_set(transmitted_total_octet_frames_from512_to1023.operation)
	|| is_set(transmitted_total_octet_frames_from65_to127.operation)
	|| is_set(transmitted_total_pause_frames.operation)
	|| is_set(transmitted_unicast_frames.operation)
	|| is_set(uncounted_dropped_frames.operation);
}

std::string EthernetInterface::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetInterface::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/statistics/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (aborted_packet_drops.is_set || is_set(aborted_packet_drops.operation)) leaf_name_data.push_back(aborted_packet_drops.get_name_leafdata());
    if (buffer_underrun_packet_drops.is_set || is_set(buffer_underrun_packet_drops.operation)) leaf_name_data.push_back(buffer_underrun_packet_drops.get_name_leafdata());
    if (dropped_ether_stats_fragments.is_set || is_set(dropped_ether_stats_fragments.operation)) leaf_name_data.push_back(dropped_ether_stats_fragments.get_name_leafdata());
    if (dropped_ether_stats_undersize_pkts.is_set || is_set(dropped_ether_stats_undersize_pkts.operation)) leaf_name_data.push_back(dropped_ether_stats_undersize_pkts.get_name_leafdata());
    if (dropped_giant_packets_greaterthan_mru.is_set || is_set(dropped_giant_packets_greaterthan_mru.operation)) leaf_name_data.push_back(dropped_giant_packets_greaterthan_mru.get_name_leafdata());
    if (dropped_jabbers_packets_greaterthan_mru.is_set || is_set(dropped_jabbers_packets_greaterthan_mru.operation)) leaf_name_data.push_back(dropped_jabbers_packets_greaterthan_mru.get_name_leafdata());
    if (dropped_miscellaneous_error_packets.is_set || is_set(dropped_miscellaneous_error_packets.operation)) leaf_name_data.push_back(dropped_miscellaneous_error_packets.get_name_leafdata());
    if (dropped_packets_with_crc_align_errors.is_set || is_set(dropped_packets_with_crc_align_errors.operation)) leaf_name_data.push_back(dropped_packets_with_crc_align_errors.get_name_leafdata());
    if (ether_stats_collisions.is_set || is_set(ether_stats_collisions.operation)) leaf_name_data.push_back(ether_stats_collisions.get_name_leafdata());
    if (invalid_dest_mac_drop_packets.is_set || is_set(invalid_dest_mac_drop_packets.operation)) leaf_name_data.push_back(invalid_dest_mac_drop_packets.get_name_leafdata());
    if (invalid_encap_drop_packets.is_set || is_set(invalid_encap_drop_packets.operation)) leaf_name_data.push_back(invalid_encap_drop_packets.get_name_leafdata());
    if (miscellaneous_output_errors.is_set || is_set(miscellaneous_output_errors.operation)) leaf_name_data.push_back(miscellaneous_output_errors.get_name_leafdata());
    if (number_of_aborted_packets_dropped.is_set || is_set(number_of_aborted_packets_dropped.operation)) leaf_name_data.push_back(number_of_aborted_packets_dropped.get_name_leafdata());
    if (number_of_buffer_overrun_packets_dropped.is_set || is_set(number_of_buffer_overrun_packets_dropped.operation)) leaf_name_data.push_back(number_of_buffer_overrun_packets_dropped.get_name_leafdata());
    if (number_of_miscellaneous_packets_dropped.is_set || is_set(number_of_miscellaneous_packets_dropped.operation)) leaf_name_data.push_back(number_of_miscellaneous_packets_dropped.get_name_leafdata());
    if (numberof_invalid_vlan_id_packets_dropped.is_set || is_set(numberof_invalid_vlan_id_packets_dropped.operation)) leaf_name_data.push_back(numberof_invalid_vlan_id_packets_dropped.get_name_leafdata());
    if (received8021q_frames.is_set || is_set(received8021q_frames.operation)) leaf_name_data.push_back(received8021q_frames.get_name_leafdata());
    if (received_broadcast_frames.is_set || is_set(received_broadcast_frames.operation)) leaf_name_data.push_back(received_broadcast_frames.get_name_leafdata());
    if (received_good_bytes.is_set || is_set(received_good_bytes.operation)) leaf_name_data.push_back(received_good_bytes.get_name_leafdata());
    if (received_good_frames.is_set || is_set(received_good_frames.operation)) leaf_name_data.push_back(received_good_frames.get_name_leafdata());
    if (received_multicast_frames.is_set || is_set(received_multicast_frames.operation)) leaf_name_data.push_back(received_multicast_frames.get_name_leafdata());
    if (received_pause_frames.is_set || is_set(received_pause_frames.operation)) leaf_name_data.push_back(received_pause_frames.get_name_leafdata());
    if (received_total64_octet_frames.is_set || is_set(received_total64_octet_frames.operation)) leaf_name_data.push_back(received_total64_octet_frames.get_name_leafdata());
    if (received_total_bytes.is_set || is_set(received_total_bytes.operation)) leaf_name_data.push_back(received_total_bytes.get_name_leafdata());
    if (received_total_frames.is_set || is_set(received_total_frames.operation)) leaf_name_data.push_back(received_total_frames.get_name_leafdata());
    if (received_total_octet_frames_from1024_to1518.is_set || is_set(received_total_octet_frames_from1024_to1518.operation)) leaf_name_data.push_back(received_total_octet_frames_from1024_to1518.get_name_leafdata());
    if (received_total_octet_frames_from128_to255.is_set || is_set(received_total_octet_frames_from128_to255.operation)) leaf_name_data.push_back(received_total_octet_frames_from128_to255.get_name_leafdata());
    if (received_total_octet_frames_from1519_to_max.is_set || is_set(received_total_octet_frames_from1519_to_max.operation)) leaf_name_data.push_back(received_total_octet_frames_from1519_to_max.get_name_leafdata());
    if (received_total_octet_frames_from256_to511.is_set || is_set(received_total_octet_frames_from256_to511.operation)) leaf_name_data.push_back(received_total_octet_frames_from256_to511.get_name_leafdata());
    if (received_total_octet_frames_from512_to1023.is_set || is_set(received_total_octet_frames_from512_to1023.operation)) leaf_name_data.push_back(received_total_octet_frames_from512_to1023.get_name_leafdata());
    if (received_total_octet_frames_from65_to127.is_set || is_set(received_total_octet_frames_from65_to127.operation)) leaf_name_data.push_back(received_total_octet_frames_from65_to127.get_name_leafdata());
    if (received_unicast_frames.is_set || is_set(received_unicast_frames.operation)) leaf_name_data.push_back(received_unicast_frames.get_name_leafdata());
    if (received_unknown_opcodes.is_set || is_set(received_unknown_opcodes.operation)) leaf_name_data.push_back(received_unknown_opcodes.get_name_leafdata());
    if (rfc2819_ether_stats_crc_align_errors.is_set || is_set(rfc2819_ether_stats_crc_align_errors.operation)) leaf_name_data.push_back(rfc2819_ether_stats_crc_align_errors.get_name_leafdata());
    if (rfc2819_ether_stats_jabbers.is_set || is_set(rfc2819_ether_stats_jabbers.operation)) leaf_name_data.push_back(rfc2819_ether_stats_jabbers.get_name_leafdata());
    if (rfc2819_ether_stats_oversized_pkts.is_set || is_set(rfc2819_ether_stats_oversized_pkts.operation)) leaf_name_data.push_back(rfc2819_ether_stats_oversized_pkts.get_name_leafdata());
    if (rfc3635dot3_stats_alignment_errors.is_set || is_set(rfc3635dot3_stats_alignment_errors.operation)) leaf_name_data.push_back(rfc3635dot3_stats_alignment_errors.get_name_leafdata());
    if (symbol_errors.is_set || is_set(symbol_errors.operation)) leaf_name_data.push_back(symbol_errors.get_name_leafdata());
    if (total_bytes_transmitted.is_set || is_set(total_bytes_transmitted.operation)) leaf_name_data.push_back(total_bytes_transmitted.get_name_leafdata());
    if (total_frames_transmitted.is_set || is_set(total_frames_transmitted.operation)) leaf_name_data.push_back(total_frames_transmitted.get_name_leafdata());
    if (total_good_bytes_transmitted.is_set || is_set(total_good_bytes_transmitted.operation)) leaf_name_data.push_back(total_good_bytes_transmitted.get_name_leafdata());
    if (transmitted8021q_frames.is_set || is_set(transmitted8021q_frames.operation)) leaf_name_data.push_back(transmitted8021q_frames.get_name_leafdata());
    if (transmitted_broadcast_frames.is_set || is_set(transmitted_broadcast_frames.operation)) leaf_name_data.push_back(transmitted_broadcast_frames.get_name_leafdata());
    if (transmitted_good_frames.is_set || is_set(transmitted_good_frames.operation)) leaf_name_data.push_back(transmitted_good_frames.get_name_leafdata());
    if (transmitted_multicast_frames.is_set || is_set(transmitted_multicast_frames.operation)) leaf_name_data.push_back(transmitted_multicast_frames.get_name_leafdata());
    if (transmitted_total64_octet_frames.is_set || is_set(transmitted_total64_octet_frames.operation)) leaf_name_data.push_back(transmitted_total64_octet_frames.get_name_leafdata());
    if (transmitted_total_octet_frames_from1024_to1518.is_set || is_set(transmitted_total_octet_frames_from1024_to1518.operation)) leaf_name_data.push_back(transmitted_total_octet_frames_from1024_to1518.get_name_leafdata());
    if (transmitted_total_octet_frames_from128_to255.is_set || is_set(transmitted_total_octet_frames_from128_to255.operation)) leaf_name_data.push_back(transmitted_total_octet_frames_from128_to255.get_name_leafdata());
    if (transmitted_total_octet_frames_from1518_to_max.is_set || is_set(transmitted_total_octet_frames_from1518_to_max.operation)) leaf_name_data.push_back(transmitted_total_octet_frames_from1518_to_max.get_name_leafdata());
    if (transmitted_total_octet_frames_from256_to511.is_set || is_set(transmitted_total_octet_frames_from256_to511.operation)) leaf_name_data.push_back(transmitted_total_octet_frames_from256_to511.get_name_leafdata());
    if (transmitted_total_octet_frames_from512_to1023.is_set || is_set(transmitted_total_octet_frames_from512_to1023.operation)) leaf_name_data.push_back(transmitted_total_octet_frames_from512_to1023.get_name_leafdata());
    if (transmitted_total_octet_frames_from65_to127.is_set || is_set(transmitted_total_octet_frames_from65_to127.operation)) leaf_name_data.push_back(transmitted_total_octet_frames_from65_to127.get_name_leafdata());
    if (transmitted_total_pause_frames.is_set || is_set(transmitted_total_pause_frames.operation)) leaf_name_data.push_back(transmitted_total_pause_frames.get_name_leafdata());
    if (transmitted_unicast_frames.is_set || is_set(transmitted_unicast_frames.operation)) leaf_name_data.push_back(transmitted_unicast_frames.get_name_leafdata());
    if (uncounted_dropped_frames.is_set || is_set(uncounted_dropped_frames.operation)) leaf_name_data.push_back(uncounted_dropped_frames.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Statistics::Statistic::get_children()
{
    return children;
}

void EthernetInterface::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "aborted-packet-drops")
    {
        aborted_packet_drops = value;
    }
    if(value_path == "buffer-underrun-packet-drops")
    {
        buffer_underrun_packet_drops = value;
    }
    if(value_path == "dropped-ether-stats-fragments")
    {
        dropped_ether_stats_fragments = value;
    }
    if(value_path == "dropped-ether-stats-undersize-pkts")
    {
        dropped_ether_stats_undersize_pkts = value;
    }
    if(value_path == "dropped-giant-packets-greaterthan-mru")
    {
        dropped_giant_packets_greaterthan_mru = value;
    }
    if(value_path == "dropped-jabbers-packets-greaterthan-mru")
    {
        dropped_jabbers_packets_greaterthan_mru = value;
    }
    if(value_path == "dropped-miscellaneous-error-packets")
    {
        dropped_miscellaneous_error_packets = value;
    }
    if(value_path == "dropped-packets-with-crc-align-errors")
    {
        dropped_packets_with_crc_align_errors = value;
    }
    if(value_path == "ether-stats-collisions")
    {
        ether_stats_collisions = value;
    }
    if(value_path == "invalid-dest-mac-drop-packets")
    {
        invalid_dest_mac_drop_packets = value;
    }
    if(value_path == "invalid-encap-drop-packets")
    {
        invalid_encap_drop_packets = value;
    }
    if(value_path == "miscellaneous-output-errors")
    {
        miscellaneous_output_errors = value;
    }
    if(value_path == "number-of-aborted-packets-dropped")
    {
        number_of_aborted_packets_dropped = value;
    }
    if(value_path == "number-of-buffer-overrun-packets-dropped")
    {
        number_of_buffer_overrun_packets_dropped = value;
    }
    if(value_path == "number-of-miscellaneous-packets-dropped")
    {
        number_of_miscellaneous_packets_dropped = value;
    }
    if(value_path == "numberof-invalid-vlan-id-packets-dropped")
    {
        numberof_invalid_vlan_id_packets_dropped = value;
    }
    if(value_path == "received8021q-frames")
    {
        received8021q_frames = value;
    }
    if(value_path == "received-broadcast-frames")
    {
        received_broadcast_frames = value;
    }
    if(value_path == "received-good-bytes")
    {
        received_good_bytes = value;
    }
    if(value_path == "received-good-frames")
    {
        received_good_frames = value;
    }
    if(value_path == "received-multicast-frames")
    {
        received_multicast_frames = value;
    }
    if(value_path == "received-pause-frames")
    {
        received_pause_frames = value;
    }
    if(value_path == "received-total64-octet-frames")
    {
        received_total64_octet_frames = value;
    }
    if(value_path == "received-total-bytes")
    {
        received_total_bytes = value;
    }
    if(value_path == "received-total-frames")
    {
        received_total_frames = value;
    }
    if(value_path == "received-total-octet-frames-from1024-to1518")
    {
        received_total_octet_frames_from1024_to1518 = value;
    }
    if(value_path == "received-total-octet-frames-from128-to255")
    {
        received_total_octet_frames_from128_to255 = value;
    }
    if(value_path == "received-total-octet-frames-from1519-to-max")
    {
        received_total_octet_frames_from1519_to_max = value;
    }
    if(value_path == "received-total-octet-frames-from256-to511")
    {
        received_total_octet_frames_from256_to511 = value;
    }
    if(value_path == "received-total-octet-frames-from512-to1023")
    {
        received_total_octet_frames_from512_to1023 = value;
    }
    if(value_path == "received-total-octet-frames-from65-to127")
    {
        received_total_octet_frames_from65_to127 = value;
    }
    if(value_path == "received-unicast-frames")
    {
        received_unicast_frames = value;
    }
    if(value_path == "received-unknown-opcodes")
    {
        received_unknown_opcodes = value;
    }
    if(value_path == "rfc2819-ether-stats-crc-align-errors")
    {
        rfc2819_ether_stats_crc_align_errors = value;
    }
    if(value_path == "rfc2819-ether-stats-jabbers")
    {
        rfc2819_ether_stats_jabbers = value;
    }
    if(value_path == "rfc2819-ether-stats-oversized-pkts")
    {
        rfc2819_ether_stats_oversized_pkts = value;
    }
    if(value_path == "rfc3635dot3-stats-alignment-errors")
    {
        rfc3635dot3_stats_alignment_errors = value;
    }
    if(value_path == "symbol-errors")
    {
        symbol_errors = value;
    }
    if(value_path == "total-bytes-transmitted")
    {
        total_bytes_transmitted = value;
    }
    if(value_path == "total-frames-transmitted")
    {
        total_frames_transmitted = value;
    }
    if(value_path == "total-good-bytes-transmitted")
    {
        total_good_bytes_transmitted = value;
    }
    if(value_path == "transmitted8021q-frames")
    {
        transmitted8021q_frames = value;
    }
    if(value_path == "transmitted-broadcast-frames")
    {
        transmitted_broadcast_frames = value;
    }
    if(value_path == "transmitted-good-frames")
    {
        transmitted_good_frames = value;
    }
    if(value_path == "transmitted-multicast-frames")
    {
        transmitted_multicast_frames = value;
    }
    if(value_path == "transmitted-total64-octet-frames")
    {
        transmitted_total64_octet_frames = value;
    }
    if(value_path == "transmitted-total-octet-frames-from1024-to1518")
    {
        transmitted_total_octet_frames_from1024_to1518 = value;
    }
    if(value_path == "transmitted-total-octet-frames-from128-to255")
    {
        transmitted_total_octet_frames_from128_to255 = value;
    }
    if(value_path == "transmitted-total-octet-frames-from1518-to-max")
    {
        transmitted_total_octet_frames_from1518_to_max = value;
    }
    if(value_path == "transmitted-total-octet-frames-from256-to511")
    {
        transmitted_total_octet_frames_from256_to511 = value;
    }
    if(value_path == "transmitted-total-octet-frames-from512-to1023")
    {
        transmitted_total_octet_frames_from512_to1023 = value;
    }
    if(value_path == "transmitted-total-octet-frames-from65-to127")
    {
        transmitted_total_octet_frames_from65_to127 = value;
    }
    if(value_path == "transmitted-total-pause-frames")
    {
        transmitted_total_pause_frames = value;
    }
    if(value_path == "transmitted-unicast-frames")
    {
        transmitted_unicast_frames = value;
    }
    if(value_path == "uncounted-dropped-frames")
    {
        uncounted_dropped_frames = value;
    }
}

EthernetInterface::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "ethernet-interface";
}

EthernetInterface::Statistics::~Statistics()
{
}

bool EthernetInterface::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetInterface::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EthernetInterface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath EthernetInterface::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetInterface::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Statistics::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetInterface::Statistics::set_value(const std::string & value_path, std::string value)
{
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::LaneFieldValidity()
    :
    	laser_bias_valid{YType::int32, "laser-bias-valid"},
	 receive_power_valid{YType::int32, "receive-power-valid"},
	 transmit_power_valid{YType::int32, "transmit-power-valid"},
	 wavelength_valid{YType::int32, "wavelength-valid"}
{
    yang_name = "lane-field-validity"; yang_parent_name = "phy-details";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::~LaneFieldValidity()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::has_data() const
{
    return laser_bias_valid.is_set
	|| receive_power_valid.is_set
	|| transmit_power_valid.is_set
	|| wavelength_valid.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::has_operation() const
{
    return is_set(operation)
	|| is_set(laser_bias_valid.operation)
	|| is_set(receive_power_valid.operation)
	|| is_set(transmit_power_valid.operation)
	|| is_set(wavelength_valid.operation);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-field-validity";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laser_bias_valid.is_set || is_set(laser_bias_valid.operation)) leaf_name_data.push_back(laser_bias_valid.get_name_leafdata());
    if (receive_power_valid.is_set || is_set(receive_power_valid.operation)) leaf_name_data.push_back(receive_power_valid.get_name_leafdata());
    if (transmit_power_valid.is_set || is_set(transmit_power_valid.operation)) leaf_name_data.push_back(transmit_power_valid.get_name_leafdata());
    if (wavelength_valid.is_set || is_set(wavelength_valid.operation)) leaf_name_data.push_back(wavelength_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "laser-bias-valid")
    {
        laser_bias_valid = value;
    }
    if(value_path == "receive-power-valid")
    {
        receive_power_valid = value;
    }
    if(value_path == "transmit-power-valid")
    {
        transmit_power_valid = value;
    }
    if(value_path == "wavelength-valid")
    {
        wavelength_valid = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::FieldValidity()
    :
    	laser_bias_valid{YType::int32, "laser-bias-valid"},
	 receive_power_valid{YType::int32, "receive-power-valid"},
	 temperature_valid{YType::int32, "temperature-valid"},
	 transmit_power_valid{YType::int32, "transmit-power-valid"},
	 voltage_valid{YType::int32, "voltage-valid"}
{
    yang_name = "field-validity"; yang_parent_name = "dig-opt-mon-alarm-thresholds";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::~FieldValidity()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::has_data() const
{
    return laser_bias_valid.is_set
	|| receive_power_valid.is_set
	|| temperature_valid.is_set
	|| transmit_power_valid.is_set
	|| voltage_valid.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::has_operation() const
{
    return is_set(operation)
	|| is_set(laser_bias_valid.operation)
	|| is_set(receive_power_valid.operation)
	|| is_set(temperature_valid.operation)
	|| is_set(transmit_power_valid.operation)
	|| is_set(voltage_valid.operation);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "field-validity";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laser_bias_valid.is_set || is_set(laser_bias_valid.operation)) leaf_name_data.push_back(laser_bias_valid.get_name_leafdata());
    if (receive_power_valid.is_set || is_set(receive_power_valid.operation)) leaf_name_data.push_back(receive_power_valid.get_name_leafdata());
    if (temperature_valid.is_set || is_set(temperature_valid.operation)) leaf_name_data.push_back(temperature_valid.get_name_leafdata());
    if (transmit_power_valid.is_set || is_set(transmit_power_valid.operation)) leaf_name_data.push_back(transmit_power_valid.get_name_leafdata());
    if (voltage_valid.is_set || is_set(voltage_valid.operation)) leaf_name_data.push_back(voltage_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "laser-bias-valid")
    {
        laser_bias_valid = value;
    }
    if(value_path == "receive-power-valid")
    {
        receive_power_valid = value;
    }
    if(value_path == "temperature-valid")
    {
        temperature_valid = value;
    }
    if(value_path == "transmit-power-valid")
    {
        transmit_power_valid = value;
    }
    if(value_path == "voltage-valid")
    {
        voltage_valid = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::DigOptMonAlarmThresholds()
    :
    	laser_bias_alarm_high{YType::uint32, "laser-bias-alarm-high"},
	 laser_bias_alarm_low{YType::uint32, "laser-bias-alarm-low"},
	 laser_bias_warning_high{YType::uint32, "laser-bias-warning-high"},
	 laser_bias_warning_low{YType::uint32, "laser-bias-warning-low"},
	 optical_receive_power_alarm_high{YType::uint32, "optical-receive-power-alarm-high"},
	 optical_receive_power_alarm_low{YType::uint32, "optical-receive-power-alarm-low"},
	 optical_receive_power_warning_high{YType::uint32, "optical-receive-power-warning-high"},
	 optical_receive_power_warning_low{YType::uint32, "optical-receive-power-warning-low"},
	 optical_transmit_power_alarm_high{YType::uint32, "optical-transmit-power-alarm-high"},
	 optical_transmit_power_alarm_low{YType::uint32, "optical-transmit-power-alarm-low"},
	 optical_transmit_power_warning_high{YType::uint32, "optical-transmit-power-warning-high"},
	 optical_transmit_power_warning_low{YType::uint32, "optical-transmit-power-warning-low"},
	 transceiver_temperature_alarm_high{YType::int32, "transceiver-temperature-alarm-high"},
	 transceiver_temperature_alarm_low{YType::int32, "transceiver-temperature-alarm-low"},
	 transceiver_temperature_warning_high{YType::int32, "transceiver-temperature-warning-high"},
	 transceiver_temperature_warning_low{YType::int32, "transceiver-temperature-warning-low"},
	 transceiver_voltage_alarm_high{YType::uint32, "transceiver-voltage-alarm-high"},
	 transceiver_voltage_alarm_low{YType::uint32, "transceiver-voltage-alarm-low"},
	 transceiver_voltage_warning_high{YType::uint32, "transceiver-voltage-warning-high"},
	 transceiver_voltage_warning_low{YType::uint32, "transceiver-voltage-warning-low"}
    	,
    field_validity(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity>())
{
    field_validity->parent = this;
    children["field-validity"] = field_validity.get();

    yang_name = "dig-opt-mon-alarm-thresholds"; yang_parent_name = "phy-details";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::~DigOptMonAlarmThresholds()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::has_data() const
{
    return laser_bias_alarm_high.is_set
	|| laser_bias_alarm_low.is_set
	|| laser_bias_warning_high.is_set
	|| laser_bias_warning_low.is_set
	|| optical_receive_power_alarm_high.is_set
	|| optical_receive_power_alarm_low.is_set
	|| optical_receive_power_warning_high.is_set
	|| optical_receive_power_warning_low.is_set
	|| optical_transmit_power_alarm_high.is_set
	|| optical_transmit_power_alarm_low.is_set
	|| optical_transmit_power_warning_high.is_set
	|| optical_transmit_power_warning_low.is_set
	|| transceiver_temperature_alarm_high.is_set
	|| transceiver_temperature_alarm_low.is_set
	|| transceiver_temperature_warning_high.is_set
	|| transceiver_temperature_warning_low.is_set
	|| transceiver_voltage_alarm_high.is_set
	|| transceiver_voltage_alarm_low.is_set
	|| transceiver_voltage_warning_high.is_set
	|| transceiver_voltage_warning_low.is_set
	|| (field_validity !=  nullptr && field_validity->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::has_operation() const
{
    return is_set(operation)
	|| is_set(laser_bias_alarm_high.operation)
	|| is_set(laser_bias_alarm_low.operation)
	|| is_set(laser_bias_warning_high.operation)
	|| is_set(laser_bias_warning_low.operation)
	|| is_set(optical_receive_power_alarm_high.operation)
	|| is_set(optical_receive_power_alarm_low.operation)
	|| is_set(optical_receive_power_warning_high.operation)
	|| is_set(optical_receive_power_warning_low.operation)
	|| is_set(optical_transmit_power_alarm_high.operation)
	|| is_set(optical_transmit_power_alarm_low.operation)
	|| is_set(optical_transmit_power_warning_high.operation)
	|| is_set(optical_transmit_power_warning_low.operation)
	|| is_set(transceiver_temperature_alarm_high.operation)
	|| is_set(transceiver_temperature_alarm_low.operation)
	|| is_set(transceiver_temperature_warning_high.operation)
	|| is_set(transceiver_temperature_warning_low.operation)
	|| is_set(transceiver_voltage_alarm_high.operation)
	|| is_set(transceiver_voltage_alarm_low.operation)
	|| is_set(transceiver_voltage_warning_high.operation)
	|| is_set(transceiver_voltage_warning_low.operation)
	|| (field_validity !=  nullptr && is_set(field_validity->operation));
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dig-opt-mon-alarm-thresholds";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laser_bias_alarm_high.is_set || is_set(laser_bias_alarm_high.operation)) leaf_name_data.push_back(laser_bias_alarm_high.get_name_leafdata());
    if (laser_bias_alarm_low.is_set || is_set(laser_bias_alarm_low.operation)) leaf_name_data.push_back(laser_bias_alarm_low.get_name_leafdata());
    if (laser_bias_warning_high.is_set || is_set(laser_bias_warning_high.operation)) leaf_name_data.push_back(laser_bias_warning_high.get_name_leafdata());
    if (laser_bias_warning_low.is_set || is_set(laser_bias_warning_low.operation)) leaf_name_data.push_back(laser_bias_warning_low.get_name_leafdata());
    if (optical_receive_power_alarm_high.is_set || is_set(optical_receive_power_alarm_high.operation)) leaf_name_data.push_back(optical_receive_power_alarm_high.get_name_leafdata());
    if (optical_receive_power_alarm_low.is_set || is_set(optical_receive_power_alarm_low.operation)) leaf_name_data.push_back(optical_receive_power_alarm_low.get_name_leafdata());
    if (optical_receive_power_warning_high.is_set || is_set(optical_receive_power_warning_high.operation)) leaf_name_data.push_back(optical_receive_power_warning_high.get_name_leafdata());
    if (optical_receive_power_warning_low.is_set || is_set(optical_receive_power_warning_low.operation)) leaf_name_data.push_back(optical_receive_power_warning_low.get_name_leafdata());
    if (optical_transmit_power_alarm_high.is_set || is_set(optical_transmit_power_alarm_high.operation)) leaf_name_data.push_back(optical_transmit_power_alarm_high.get_name_leafdata());
    if (optical_transmit_power_alarm_low.is_set || is_set(optical_transmit_power_alarm_low.operation)) leaf_name_data.push_back(optical_transmit_power_alarm_low.get_name_leafdata());
    if (optical_transmit_power_warning_high.is_set || is_set(optical_transmit_power_warning_high.operation)) leaf_name_data.push_back(optical_transmit_power_warning_high.get_name_leafdata());
    if (optical_transmit_power_warning_low.is_set || is_set(optical_transmit_power_warning_low.operation)) leaf_name_data.push_back(optical_transmit_power_warning_low.get_name_leafdata());
    if (transceiver_temperature_alarm_high.is_set || is_set(transceiver_temperature_alarm_high.operation)) leaf_name_data.push_back(transceiver_temperature_alarm_high.get_name_leafdata());
    if (transceiver_temperature_alarm_low.is_set || is_set(transceiver_temperature_alarm_low.operation)) leaf_name_data.push_back(transceiver_temperature_alarm_low.get_name_leafdata());
    if (transceiver_temperature_warning_high.is_set || is_set(transceiver_temperature_warning_high.operation)) leaf_name_data.push_back(transceiver_temperature_warning_high.get_name_leafdata());
    if (transceiver_temperature_warning_low.is_set || is_set(transceiver_temperature_warning_low.operation)) leaf_name_data.push_back(transceiver_temperature_warning_low.get_name_leafdata());
    if (transceiver_voltage_alarm_high.is_set || is_set(transceiver_voltage_alarm_high.operation)) leaf_name_data.push_back(transceiver_voltage_alarm_high.get_name_leafdata());
    if (transceiver_voltage_alarm_low.is_set || is_set(transceiver_voltage_alarm_low.operation)) leaf_name_data.push_back(transceiver_voltage_alarm_low.get_name_leafdata());
    if (transceiver_voltage_warning_high.is_set || is_set(transceiver_voltage_warning_high.operation)) leaf_name_data.push_back(transceiver_voltage_warning_high.get_name_leafdata());
    if (transceiver_voltage_warning_low.is_set || is_set(transceiver_voltage_warning_low.operation)) leaf_name_data.push_back(transceiver_voltage_warning_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "field-validity")
    {
        if(field_validity != nullptr)
        {
            children["field-validity"] = field_validity.get();
        }
        else
        {
            field_validity = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity>();
            field_validity->parent = this;
            children["field-validity"] = field_validity.get();
        }
        return children.at("field-validity");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::get_children()
{
    if(children.find("field-validity") == children.end())
    {
        if(field_validity != nullptr)
        {
            children["field-validity"] = field_validity.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "laser-bias-alarm-high")
    {
        laser_bias_alarm_high = value;
    }
    if(value_path == "laser-bias-alarm-low")
    {
        laser_bias_alarm_low = value;
    }
    if(value_path == "laser-bias-warning-high")
    {
        laser_bias_warning_high = value;
    }
    if(value_path == "laser-bias-warning-low")
    {
        laser_bias_warning_low = value;
    }
    if(value_path == "optical-receive-power-alarm-high")
    {
        optical_receive_power_alarm_high = value;
    }
    if(value_path == "optical-receive-power-alarm-low")
    {
        optical_receive_power_alarm_low = value;
    }
    if(value_path == "optical-receive-power-warning-high")
    {
        optical_receive_power_warning_high = value;
    }
    if(value_path == "optical-receive-power-warning-low")
    {
        optical_receive_power_warning_low = value;
    }
    if(value_path == "optical-transmit-power-alarm-high")
    {
        optical_transmit_power_alarm_high = value;
    }
    if(value_path == "optical-transmit-power-alarm-low")
    {
        optical_transmit_power_alarm_low = value;
    }
    if(value_path == "optical-transmit-power-warning-high")
    {
        optical_transmit_power_warning_high = value;
    }
    if(value_path == "optical-transmit-power-warning-low")
    {
        optical_transmit_power_warning_low = value;
    }
    if(value_path == "transceiver-temperature-alarm-high")
    {
        transceiver_temperature_alarm_high = value;
    }
    if(value_path == "transceiver-temperature-alarm-low")
    {
        transceiver_temperature_alarm_low = value;
    }
    if(value_path == "transceiver-temperature-warning-high")
    {
        transceiver_temperature_warning_high = value;
    }
    if(value_path == "transceiver-temperature-warning-low")
    {
        transceiver_temperature_warning_low = value;
    }
    if(value_path == "transceiver-voltage-alarm-high")
    {
        transceiver_voltage_alarm_high = value;
    }
    if(value_path == "transceiver-voltage-alarm-low")
    {
        transceiver_voltage_alarm_low = value;
    }
    if(value_path == "transceiver-voltage-warning-high")
    {
        transceiver_voltage_warning_high = value;
    }
    if(value_path == "transceiver-voltage-warning-low")
    {
        transceiver_voltage_warning_low = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::DigOptMonAlarms()
    :
    	laser_bias_current{YType::enumeration, "laser-bias-current"},
	 received_laser_power{YType::enumeration, "received-laser-power"},
	 transceiver_temperature{YType::enumeration, "transceiver-temperature"},
	 transceiver_voltage{YType::enumeration, "transceiver-voltage"},
	 transmit_laser_power{YType::enumeration, "transmit-laser-power"}
{
    yang_name = "dig-opt-mon-alarms"; yang_parent_name = "phy-details";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::~DigOptMonAlarms()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::has_data() const
{
    return laser_bias_current.is_set
	|| received_laser_power.is_set
	|| transceiver_temperature.is_set
	|| transceiver_voltage.is_set
	|| transmit_laser_power.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::has_operation() const
{
    return is_set(operation)
	|| is_set(laser_bias_current.operation)
	|| is_set(received_laser_power.operation)
	|| is_set(transceiver_temperature.operation)
	|| is_set(transceiver_voltage.operation)
	|| is_set(transmit_laser_power.operation);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dig-opt-mon-alarms";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laser_bias_current.is_set || is_set(laser_bias_current.operation)) leaf_name_data.push_back(laser_bias_current.get_name_leafdata());
    if (received_laser_power.is_set || is_set(received_laser_power.operation)) leaf_name_data.push_back(received_laser_power.get_name_leafdata());
    if (transceiver_temperature.is_set || is_set(transceiver_temperature.operation)) leaf_name_data.push_back(transceiver_temperature.get_name_leafdata());
    if (transceiver_voltage.is_set || is_set(transceiver_voltage.operation)) leaf_name_data.push_back(transceiver_voltage.get_name_leafdata());
    if (transmit_laser_power.is_set || is_set(transmit_laser_power.operation)) leaf_name_data.push_back(transmit_laser_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "laser-bias-current")
    {
        laser_bias_current = value;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power = value;
    }
    if(value_path == "transceiver-temperature")
    {
        transceiver_temperature = value;
    }
    if(value_path == "transceiver-voltage")
    {
        transceiver_voltage = value;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::DigOptMonAlarm()
    :
    	laser_bias_current{YType::enumeration, "laser-bias-current"},
	 received_laser_power{YType::enumeration, "received-laser-power"},
	 transmit_laser_power{YType::enumeration, "transmit-laser-power"}
{
    yang_name = "dig-opt-mon-alarm"; yang_parent_name = "lane";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::~DigOptMonAlarm()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::has_data() const
{
    return laser_bias_current.is_set
	|| received_laser_power.is_set
	|| transmit_laser_power.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::has_operation() const
{
    return is_set(operation)
	|| is_set(laser_bias_current.operation)
	|| is_set(received_laser_power.operation)
	|| is_set(transmit_laser_power.operation);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dig-opt-mon-alarm";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laser_bias_current.is_set || is_set(laser_bias_current.operation)) leaf_name_data.push_back(laser_bias_current.get_name_leafdata());
    if (received_laser_power.is_set || is_set(received_laser_power.operation)) leaf_name_data.push_back(received_laser_power.get_name_leafdata());
    if (transmit_laser_power.is_set || is_set(transmit_laser_power.operation)) leaf_name_data.push_back(transmit_laser_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "laser-bias-current")
    {
        laser_bias_current = value;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power = value;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::Lane()
    :
    	center_wavelength{YType::uint32, "center-wavelength"},
	 laser_bias_current{YType::uint32, "laser-bias-current"},
	 received_laser_power{YType::int32, "received-laser-power"},
	 transmit_laser_power{YType::int32, "transmit-laser-power"}
    	,
    dig_opt_mon_alarm(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm>())
{
    dig_opt_mon_alarm->parent = this;
    children["dig-opt-mon-alarm"] = dig_opt_mon_alarm.get();

    yang_name = "lane"; yang_parent_name = "phy-details";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::~Lane()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::has_data() const
{
    return center_wavelength.is_set
	|| laser_bias_current.is_set
	|| received_laser_power.is_set
	|| transmit_laser_power.is_set
	|| (dig_opt_mon_alarm !=  nullptr && dig_opt_mon_alarm->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::has_operation() const
{
    return is_set(operation)
	|| is_set(center_wavelength.operation)
	|| is_set(laser_bias_current.operation)
	|| is_set(received_laser_power.operation)
	|| is_set(transmit_laser_power.operation)
	|| (dig_opt_mon_alarm !=  nullptr && is_set(dig_opt_mon_alarm->operation));
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (center_wavelength.is_set || is_set(center_wavelength.operation)) leaf_name_data.push_back(center_wavelength.get_name_leafdata());
    if (laser_bias_current.is_set || is_set(laser_bias_current.operation)) leaf_name_data.push_back(laser_bias_current.get_name_leafdata());
    if (received_laser_power.is_set || is_set(received_laser_power.operation)) leaf_name_data.push_back(received_laser_power.get_name_leafdata());
    if (transmit_laser_power.is_set || is_set(transmit_laser_power.operation)) leaf_name_data.push_back(transmit_laser_power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dig-opt-mon-alarm")
    {
        if(dig_opt_mon_alarm != nullptr)
        {
            children["dig-opt-mon-alarm"] = dig_opt_mon_alarm.get();
        }
        else
        {
            dig_opt_mon_alarm = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm>();
            dig_opt_mon_alarm->parent = this;
            children["dig-opt-mon-alarm"] = dig_opt_mon_alarm.get();
        }
        return children.at("dig-opt-mon-alarm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::get_children()
{
    if(children.find("dig-opt-mon-alarm") == children.end())
    {
        if(dig_opt_mon_alarm != nullptr)
        {
            children["dig-opt-mon-alarm"] = dig_opt_mon_alarm.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "center-wavelength")
    {
        center_wavelength = value;
    }
    if(value_path == "laser-bias-current")
    {
        laser_bias_current = value;
    }
    if(value_path == "received-laser-power")
    {
        received_laser_power = value;
    }
    if(value_path == "transmit-laser-power")
    {
        transmit_laser_power = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::PhyDetails()
    :
    	optics_wavelength{YType::uint32, "optics-wavelength"},
	 transceiver_rx_power{YType::int32, "transceiver-rx-power"},
	 transceiver_temperature{YType::int32, "transceiver-temperature"},
	 transceiver_tx_bias{YType::int32, "transceiver-tx-bias"},
	 transceiver_tx_power{YType::int32, "transceiver-tx-power"},
	 transceiver_voltage{YType::int32, "transceiver-voltage"},
	 vendor{YType::str, "vendor"},
	 vendor_part_number{YType::str, "vendor-part-number"},
	 vendor_serial_number{YType::str, "vendor-serial-number"}
    	,
    dig_opt_mon_alarm_thresholds(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds>())
	,dig_opt_mon_alarms(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms>())
	,lane_field_validity(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity>())
{
    dig_opt_mon_alarm_thresholds->parent = this;
    children["dig-opt-mon-alarm-thresholds"] = dig_opt_mon_alarm_thresholds.get();

    dig_opt_mon_alarms->parent = this;
    children["dig-opt-mon-alarms"] = dig_opt_mon_alarms.get();

    lane_field_validity->parent = this;
    children["lane-field-validity"] = lane_field_validity.get();

    yang_name = "phy-details"; yang_parent_name = "phy-info";
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::~PhyDetails()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::has_data() const
{
    for (std::size_t index=0; index<lane.size(); index++)
    {
        if(lane[index]->has_data())
            return true;
    }
    return optics_wavelength.is_set
	|| transceiver_rx_power.is_set
	|| transceiver_temperature.is_set
	|| transceiver_tx_bias.is_set
	|| transceiver_tx_power.is_set
	|| transceiver_voltage.is_set
	|| vendor.is_set
	|| vendor_part_number.is_set
	|| vendor_serial_number.is_set
	|| (dig_opt_mon_alarm_thresholds !=  nullptr && dig_opt_mon_alarm_thresholds->has_data())
	|| (dig_opt_mon_alarms !=  nullptr && dig_opt_mon_alarms->has_data())
	|| (lane_field_validity !=  nullptr && lane_field_validity->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::has_operation() const
{
    for (std::size_t index=0; index<lane.size(); index++)
    {
        if(lane[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(optics_wavelength.operation)
	|| is_set(transceiver_rx_power.operation)
	|| is_set(transceiver_temperature.operation)
	|| is_set(transceiver_tx_bias.operation)
	|| is_set(transceiver_tx_power.operation)
	|| is_set(transceiver_voltage.operation)
	|| is_set(vendor.operation)
	|| is_set(vendor_part_number.operation)
	|| is_set(vendor_serial_number.operation)
	|| (dig_opt_mon_alarm_thresholds !=  nullptr && is_set(dig_opt_mon_alarm_thresholds->operation))
	|| (dig_opt_mon_alarms !=  nullptr && is_set(dig_opt_mon_alarms->operation))
	|| (lane_field_validity !=  nullptr && is_set(lane_field_validity->operation));
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phy-details";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_wavelength.is_set || is_set(optics_wavelength.operation)) leaf_name_data.push_back(optics_wavelength.get_name_leafdata());
    if (transceiver_rx_power.is_set || is_set(transceiver_rx_power.operation)) leaf_name_data.push_back(transceiver_rx_power.get_name_leafdata());
    if (transceiver_temperature.is_set || is_set(transceiver_temperature.operation)) leaf_name_data.push_back(transceiver_temperature.get_name_leafdata());
    if (transceiver_tx_bias.is_set || is_set(transceiver_tx_bias.operation)) leaf_name_data.push_back(transceiver_tx_bias.get_name_leafdata());
    if (transceiver_tx_power.is_set || is_set(transceiver_tx_power.operation)) leaf_name_data.push_back(transceiver_tx_power.get_name_leafdata());
    if (transceiver_voltage.is_set || is_set(transceiver_voltage.operation)) leaf_name_data.push_back(transceiver_voltage.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.operation)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (vendor_part_number.is_set || is_set(vendor_part_number.operation)) leaf_name_data.push_back(vendor_part_number.get_name_leafdata());
    if (vendor_serial_number.is_set || is_set(vendor_serial_number.operation)) leaf_name_data.push_back(vendor_serial_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dig-opt-mon-alarm-thresholds")
    {
        if(dig_opt_mon_alarm_thresholds != nullptr)
        {
            children["dig-opt-mon-alarm-thresholds"] = dig_opt_mon_alarm_thresholds.get();
        }
        else
        {
            dig_opt_mon_alarm_thresholds = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds>();
            dig_opt_mon_alarm_thresholds->parent = this;
            children["dig-opt-mon-alarm-thresholds"] = dig_opt_mon_alarm_thresholds.get();
        }
        return children.at("dig-opt-mon-alarm-thresholds");
    }

    if(child_yang_name == "dig-opt-mon-alarms")
    {
        if(dig_opt_mon_alarms != nullptr)
        {
            children["dig-opt-mon-alarms"] = dig_opt_mon_alarms.get();
        }
        else
        {
            dig_opt_mon_alarms = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms>();
            dig_opt_mon_alarms->parent = this;
            children["dig-opt-mon-alarms"] = dig_opt_mon_alarms.get();
        }
        return children.at("dig-opt-mon-alarms");
    }

    if(child_yang_name == "lane")
    {
        for(auto const & c : lane)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane>();
        c->parent = this;
        lane.push_back(std::move(c));
        children[segment_path] = lane.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "lane-field-validity")
    {
        if(lane_field_validity != nullptr)
        {
            children["lane-field-validity"] = lane_field_validity.get();
        }
        else
        {
            lane_field_validity = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity>();
            lane_field_validity->parent = this;
            children["lane-field-validity"] = lane_field_validity.get();
        }
        return children.at("lane-field-validity");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::get_children()
{
    if(children.find("dig-opt-mon-alarm-thresholds") == children.end())
    {
        if(dig_opt_mon_alarm_thresholds != nullptr)
        {
            children["dig-opt-mon-alarm-thresholds"] = dig_opt_mon_alarm_thresholds.get();
        }
    }

    if(children.find("dig-opt-mon-alarms") == children.end())
    {
        if(dig_opt_mon_alarms != nullptr)
        {
            children["dig-opt-mon-alarms"] = dig_opt_mon_alarms.get();
        }
    }

    for (auto const & c : lane)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("lane-field-validity") == children.end())
    {
        if(lane_field_validity != nullptr)
        {
            children["lane-field-validity"] = lane_field_validity.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-wavelength")
    {
        optics_wavelength = value;
    }
    if(value_path == "transceiver-rx-power")
    {
        transceiver_rx_power = value;
    }
    if(value_path == "transceiver-temperature")
    {
        transceiver_temperature = value;
    }
    if(value_path == "transceiver-tx-bias")
    {
        transceiver_tx_bias = value;
    }
    if(value_path == "transceiver-tx-power")
    {
        transceiver_tx_power = value;
    }
    if(value_path == "transceiver-voltage")
    {
        transceiver_voltage = value;
    }
    if(value_path == "vendor")
    {
        vendor = value;
    }
    if(value_path == "vendor-part-number")
    {
        vendor_part_number = value;
    }
    if(value_path == "vendor-serial-number")
    {
        vendor_serial_number = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::FecDetails()
    :
    	corrected_codeword_count{YType::uint64, "corrected-codeword-count"},
	 fec{YType::enumeration, "fec"},
	 uncorrected_codeword_count{YType::uint64, "uncorrected-codeword-count"}
{
    yang_name = "fec-details"; yang_parent_name = "phy-info";
}

EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::~FecDetails()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::has_data() const
{
    return corrected_codeword_count.is_set
	|| fec.is_set
	|| uncorrected_codeword_count.is_set;
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(corrected_codeword_count.operation)
	|| is_set(fec.operation)
	|| is_set(uncorrected_codeword_count.operation);
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-details";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (corrected_codeword_count.is_set || is_set(corrected_codeword_count.operation)) leaf_name_data.push_back(corrected_codeword_count.get_name_leafdata());
    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (uncorrected_codeword_count.is_set || is_set(uncorrected_codeword_count.operation)) leaf_name_data.push_back(uncorrected_codeword_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "corrected-codeword-count")
    {
        corrected_codeword_count = value;
    }
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "uncorrected-codeword-count")
    {
        uncorrected_codeword_count = value;
    }
}

EthernetInterface::Interfaces::Interface::PhyInfo::PhyInfo()
    :
    	loopback{YType::enumeration, "loopback"},
	 media_type{YType::enumeration, "media-type"},
	 phy_present{YType::enumeration, "phy-present"}
    	,
    fec_details(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails>())
	,phy_details(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails>())
{
    fec_details->parent = this;
    children["fec-details"] = fec_details.get();

    phy_details->parent = this;
    children["phy-details"] = phy_details.get();

    yang_name = "phy-info"; yang_parent_name = "interface";
}

EthernetInterface::Interfaces::Interface::PhyInfo::~PhyInfo()
{
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::has_data() const
{
    return loopback.is_set
	|| media_type.is_set
	|| phy_present.is_set
	|| (fec_details !=  nullptr && fec_details->has_data())
	|| (phy_details !=  nullptr && phy_details->has_data());
}

bool EthernetInterface::Interfaces::Interface::PhyInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(loopback.operation)
	|| is_set(media_type.operation)
	|| is_set(phy_present.operation)
	|| (fec_details !=  nullptr && is_set(fec_details->operation))
	|| (phy_details !=  nullptr && is_set(phy_details->operation));
}

std::string EthernetInterface::Interfaces::Interface::PhyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phy-info";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::PhyInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (phy_present.is_set || is_set(phy_present.operation)) leaf_name_data.push_back(phy_present.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::PhyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-details")
    {
        if(fec_details != nullptr)
        {
            children["fec-details"] = fec_details.get();
        }
        else
        {
            fec_details = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails>();
            fec_details->parent = this;
            children["fec-details"] = fec_details.get();
        }
        return children.at("fec-details");
    }

    if(child_yang_name == "phy-details")
    {
        if(phy_details != nullptr)
        {
            children["phy-details"] = phy_details.get();
        }
        else
        {
            phy_details = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails>();
            phy_details->parent = this;
            children["phy-details"] = phy_details.get();
        }
        return children.at("phy-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::PhyInfo::get_children()
{
    if(children.find("fec-details") == children.end())
    {
        if(fec_details != nullptr)
        {
            children["fec-details"] = fec_details.get();
        }
    }

    if(children.find("phy-details") == children.end())
    {
        if(phy_details != nullptr)
        {
            children["phy-details"] = phy_details.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::PhyInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "phy-present")
    {
        phy_present = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::Autoneg()
    :
    	autoneg_enabled{YType::int32, "autoneg-enabled"},
	 config_override{YType::int32, "config-override"},
	 duplex{YType::enumeration, "duplex"},
	 fec{YType::enumeration, "fec"},
	 flowcontrol{YType::enumeration, "flowcontrol"},
	 mask{YType::uint32, "mask"},
	 speed{YType::enumeration, "speed"}
{
    yang_name = "autoneg"; yang_parent_name = "layer1-info";
}

EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::~Autoneg()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::has_data() const
{
    return autoneg_enabled.is_set
	|| config_override.is_set
	|| duplex.is_set
	|| fec.is_set
	|| flowcontrol.is_set
	|| mask.is_set
	|| speed.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::has_operation() const
{
    return is_set(operation)
	|| is_set(autoneg_enabled.operation)
	|| is_set(config_override.operation)
	|| is_set(duplex.operation)
	|| is_set(fec.operation)
	|| is_set(flowcontrol.operation)
	|| is_set(mask.operation)
	|| is_set(speed.operation);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoneg";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autoneg_enabled.is_set || is_set(autoneg_enabled.operation)) leaf_name_data.push_back(autoneg_enabled.get_name_leafdata());
    if (config_override.is_set || is_set(config_override.operation)) leaf_name_data.push_back(config_override.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (flowcontrol.is_set || is_set(flowcontrol.operation)) leaf_name_data.push_back(flowcontrol.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autoneg-enabled")
    {
        autoneg_enabled = value;
    }
    if(value_path == "config-override")
    {
        config_override = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "flowcontrol")
    {
        flowcontrol = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::CurrentAlarms()
    :
    	hi_ber_alarm{YType::enumeration, "hi-ber-alarm"},
	 local_fault_alarm{YType::enumeration, "local-fault-alarm"},
	 loss_of_synchronization_data_alarm{YType::enumeration, "loss-of-synchronization-data-alarm"},
	 pcs_loss_of_block_lock_alarm{YType::enumeration, "pcs-loss-of-block-lock-alarm"},
	 received_loss_of_signal_alarm{YType::enumeration, "received-loss-of-signal-alarm"},
	 remote_fault_alarm{YType::enumeration, "remote-fault-alarm"},
	 sd_ber_alarm{YType::enumeration, "sd-ber-alarm"},
	 sf_ber_alarm{YType::enumeration, "sf-ber-alarm"},
	 squelch_alarm{YType::enumeration, "squelch-alarm"}
{
    yang_name = "current-alarms"; yang_parent_name = "layer1-info";
}

EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::~CurrentAlarms()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::has_data() const
{
    return hi_ber_alarm.is_set
	|| local_fault_alarm.is_set
	|| loss_of_synchronization_data_alarm.is_set
	|| pcs_loss_of_block_lock_alarm.is_set
	|| received_loss_of_signal_alarm.is_set
	|| remote_fault_alarm.is_set
	|| sd_ber_alarm.is_set
	|| sf_ber_alarm.is_set
	|| squelch_alarm.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::has_operation() const
{
    return is_set(operation)
	|| is_set(hi_ber_alarm.operation)
	|| is_set(local_fault_alarm.operation)
	|| is_set(loss_of_synchronization_data_alarm.operation)
	|| is_set(pcs_loss_of_block_lock_alarm.operation)
	|| is_set(received_loss_of_signal_alarm.operation)
	|| is_set(remote_fault_alarm.operation)
	|| is_set(sd_ber_alarm.operation)
	|| is_set(sf_ber_alarm.operation)
	|| is_set(squelch_alarm.operation);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-alarms";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hi_ber_alarm.is_set || is_set(hi_ber_alarm.operation)) leaf_name_data.push_back(hi_ber_alarm.get_name_leafdata());
    if (local_fault_alarm.is_set || is_set(local_fault_alarm.operation)) leaf_name_data.push_back(local_fault_alarm.get_name_leafdata());
    if (loss_of_synchronization_data_alarm.is_set || is_set(loss_of_synchronization_data_alarm.operation)) leaf_name_data.push_back(loss_of_synchronization_data_alarm.get_name_leafdata());
    if (pcs_loss_of_block_lock_alarm.is_set || is_set(pcs_loss_of_block_lock_alarm.operation)) leaf_name_data.push_back(pcs_loss_of_block_lock_alarm.get_name_leafdata());
    if (received_loss_of_signal_alarm.is_set || is_set(received_loss_of_signal_alarm.operation)) leaf_name_data.push_back(received_loss_of_signal_alarm.get_name_leafdata());
    if (remote_fault_alarm.is_set || is_set(remote_fault_alarm.operation)) leaf_name_data.push_back(remote_fault_alarm.get_name_leafdata());
    if (sd_ber_alarm.is_set || is_set(sd_ber_alarm.operation)) leaf_name_data.push_back(sd_ber_alarm.get_name_leafdata());
    if (sf_ber_alarm.is_set || is_set(sf_ber_alarm.operation)) leaf_name_data.push_back(sf_ber_alarm.get_name_leafdata());
    if (squelch_alarm.is_set || is_set(squelch_alarm.operation)) leaf_name_data.push_back(squelch_alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hi-ber-alarm")
    {
        hi_ber_alarm = value;
    }
    if(value_path == "local-fault-alarm")
    {
        local_fault_alarm = value;
    }
    if(value_path == "loss-of-synchronization-data-alarm")
    {
        loss_of_synchronization_data_alarm = value;
    }
    if(value_path == "pcs-loss-of-block-lock-alarm")
    {
        pcs_loss_of_block_lock_alarm = value;
    }
    if(value_path == "received-loss-of-signal-alarm")
    {
        received_loss_of_signal_alarm = value;
    }
    if(value_path == "remote-fault-alarm")
    {
        remote_fault_alarm = value;
    }
    if(value_path == "sd-ber-alarm")
    {
        sd_ber_alarm = value;
    }
    if(value_path == "sf-ber-alarm")
    {
        sf_ber_alarm = value;
    }
    if(value_path == "squelch-alarm")
    {
        squelch_alarm = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::PreviousAlarms()
    :
    	hi_ber_alarm{YType::enumeration, "hi-ber-alarm"},
	 local_fault_alarm{YType::enumeration, "local-fault-alarm"},
	 loss_of_synchronization_data_alarm{YType::enumeration, "loss-of-synchronization-data-alarm"},
	 pcs_loss_of_block_lock_alarm{YType::enumeration, "pcs-loss-of-block-lock-alarm"},
	 received_loss_of_signal_alarm{YType::enumeration, "received-loss-of-signal-alarm"},
	 remote_fault_alarm{YType::enumeration, "remote-fault-alarm"},
	 sd_ber_alarm{YType::enumeration, "sd-ber-alarm"},
	 sf_ber_alarm{YType::enumeration, "sf-ber-alarm"},
	 squelch_alarm{YType::enumeration, "squelch-alarm"}
{
    yang_name = "previous-alarms"; yang_parent_name = "layer1-info";
}

EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::~PreviousAlarms()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::has_data() const
{
    return hi_ber_alarm.is_set
	|| local_fault_alarm.is_set
	|| loss_of_synchronization_data_alarm.is_set
	|| pcs_loss_of_block_lock_alarm.is_set
	|| received_loss_of_signal_alarm.is_set
	|| remote_fault_alarm.is_set
	|| sd_ber_alarm.is_set
	|| sf_ber_alarm.is_set
	|| squelch_alarm.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::has_operation() const
{
    return is_set(operation)
	|| is_set(hi_ber_alarm.operation)
	|| is_set(local_fault_alarm.operation)
	|| is_set(loss_of_synchronization_data_alarm.operation)
	|| is_set(pcs_loss_of_block_lock_alarm.operation)
	|| is_set(received_loss_of_signal_alarm.operation)
	|| is_set(remote_fault_alarm.operation)
	|| is_set(sd_ber_alarm.operation)
	|| is_set(sf_ber_alarm.operation)
	|| is_set(squelch_alarm.operation);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-alarms";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hi_ber_alarm.is_set || is_set(hi_ber_alarm.operation)) leaf_name_data.push_back(hi_ber_alarm.get_name_leafdata());
    if (local_fault_alarm.is_set || is_set(local_fault_alarm.operation)) leaf_name_data.push_back(local_fault_alarm.get_name_leafdata());
    if (loss_of_synchronization_data_alarm.is_set || is_set(loss_of_synchronization_data_alarm.operation)) leaf_name_data.push_back(loss_of_synchronization_data_alarm.get_name_leafdata());
    if (pcs_loss_of_block_lock_alarm.is_set || is_set(pcs_loss_of_block_lock_alarm.operation)) leaf_name_data.push_back(pcs_loss_of_block_lock_alarm.get_name_leafdata());
    if (received_loss_of_signal_alarm.is_set || is_set(received_loss_of_signal_alarm.operation)) leaf_name_data.push_back(received_loss_of_signal_alarm.get_name_leafdata());
    if (remote_fault_alarm.is_set || is_set(remote_fault_alarm.operation)) leaf_name_data.push_back(remote_fault_alarm.get_name_leafdata());
    if (sd_ber_alarm.is_set || is_set(sd_ber_alarm.operation)) leaf_name_data.push_back(sd_ber_alarm.get_name_leafdata());
    if (sf_ber_alarm.is_set || is_set(sf_ber_alarm.operation)) leaf_name_data.push_back(sf_ber_alarm.get_name_leafdata());
    if (squelch_alarm.is_set || is_set(squelch_alarm.operation)) leaf_name_data.push_back(squelch_alarm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hi-ber-alarm")
    {
        hi_ber_alarm = value;
    }
    if(value_path == "local-fault-alarm")
    {
        local_fault_alarm = value;
    }
    if(value_path == "loss-of-synchronization-data-alarm")
    {
        loss_of_synchronization_data_alarm = value;
    }
    if(value_path == "pcs-loss-of-block-lock-alarm")
    {
        pcs_loss_of_block_lock_alarm = value;
    }
    if(value_path == "received-loss-of-signal-alarm")
    {
        received_loss_of_signal_alarm = value;
    }
    if(value_path == "remote-fault-alarm")
    {
        remote_fault_alarm = value;
    }
    if(value_path == "sd-ber-alarm")
    {
        sd_ber_alarm = value;
    }
    if(value_path == "sf-ber-alarm")
    {
        sf_ber_alarm = value;
    }
    if(value_path == "squelch-alarm")
    {
        squelch_alarm = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::ErrorCounts()
    :
    	pcsbip_errors{YType::uint64, "pcsbip-errors"},
	 sync_header_errors{YType::uint64, "sync-header-errors"}
{
    yang_name = "error-counts"; yang_parent_name = "layer1-info";
}

EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::~ErrorCounts()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::has_data() const
{
    return pcsbip_errors.is_set
	|| sync_header_errors.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(pcsbip_errors.operation)
	|| is_set(sync_header_errors.operation);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-counts";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcsbip_errors.is_set || is_set(pcsbip_errors.operation)) leaf_name_data.push_back(pcsbip_errors.get_name_leafdata());
    if (sync_header_errors.is_set || is_set(sync_header_errors.operation)) leaf_name_data.push_back(sync_header_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcsbip-errors")
    {
        pcsbip_errors = value;
    }
    if(value_path == "sync-header-errors")
    {
        sync_header_errors = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::Settings()
    :
    	signal_degrade_alarm{YType::int32, "signal-degrade-alarm"},
	 signal_degrade_threshold{YType::uint32, "signal-degrade-threshold"},
	 signal_fail_alarm{YType::int32, "signal-fail-alarm"},
	 signal_fail_threshold{YType::uint32, "signal-fail-threshold"},
	 signal_remote_fault{YType::int32, "signal-remote-fault"}
{
    yang_name = "settings"; yang_parent_name = "ber-monitoring";
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::~Settings()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::has_data() const
{
    return signal_degrade_alarm.is_set
	|| signal_degrade_threshold.is_set
	|| signal_fail_alarm.is_set
	|| signal_fail_threshold.is_set
	|| signal_remote_fault.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::has_operation() const
{
    return is_set(operation)
	|| is_set(signal_degrade_alarm.operation)
	|| is_set(signal_degrade_threshold.operation)
	|| is_set(signal_fail_alarm.operation)
	|| is_set(signal_fail_threshold.operation)
	|| is_set(signal_remote_fault.operation);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "settings";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_degrade_alarm.is_set || is_set(signal_degrade_alarm.operation)) leaf_name_data.push_back(signal_degrade_alarm.get_name_leafdata());
    if (signal_degrade_threshold.is_set || is_set(signal_degrade_threshold.operation)) leaf_name_data.push_back(signal_degrade_threshold.get_name_leafdata());
    if (signal_fail_alarm.is_set || is_set(signal_fail_alarm.operation)) leaf_name_data.push_back(signal_fail_alarm.get_name_leafdata());
    if (signal_fail_threshold.is_set || is_set(signal_fail_threshold.operation)) leaf_name_data.push_back(signal_fail_threshold.get_name_leafdata());
    if (signal_remote_fault.is_set || is_set(signal_remote_fault.operation)) leaf_name_data.push_back(signal_remote_fault.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "signal-degrade-alarm")
    {
        signal_degrade_alarm = value;
    }
    if(value_path == "signal-degrade-threshold")
    {
        signal_degrade_threshold = value;
    }
    if(value_path == "signal-fail-alarm")
    {
        signal_fail_alarm = value;
    }
    if(value_path == "signal-fail-threshold")
    {
        signal_fail_threshold = value;
    }
    if(value_path == "signal-remote-fault")
    {
        signal_remote_fault = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::BerMonitoring()
    :
    	supported{YType::int32, "supported"}
    	,
    settings(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings>())
{
    settings->parent = this;
    children["settings"] = settings.get();

    yang_name = "ber-monitoring"; yang_parent_name = "layer1-info";
}

EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::~BerMonitoring()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::has_data() const
{
    return supported.is_set
	|| (settings !=  nullptr && settings->has_data());
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation)
	|| (settings !=  nullptr && is_set(settings->operation));
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ber-monitoring";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "settings")
    {
        if(settings != nullptr)
        {
            children["settings"] = settings.get();
        }
        else
        {
            settings = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings>();
            settings->parent = this;
            children["settings"] = settings.get();
        }
        return children.at("settings");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::get_children()
{
    if(children.find("settings") == children.end())
    {
        if(settings != nullptr)
        {
            children["settings"] = settings.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
}

EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::PfcInfo()
    :
    	priority_enabled_bitmap{YType::uint8, "priority-enabled-bitmap"},
	 priority_flowcontrol{YType::enumeration, "priority-flowcontrol"},
	 rx_frame{YType::uint64, "rx-frame"},
	 tx_frame{YType::uint64, "tx-frame"}
{
    yang_name = "pfc-info"; yang_parent_name = "layer1-info";
}

EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::~PfcInfo()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::has_data() const
{
    for (auto const & leaf : rx_frame.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tx_frame.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return priority_enabled_bitmap.is_set
	|| priority_flowcontrol.is_set;
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::has_operation() const
{
    for (auto const & leaf : rx_frame.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tx_frame.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(priority_enabled_bitmap.operation)
	|| is_set(priority_flowcontrol.operation);
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-info";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_enabled_bitmap.is_set || is_set(priority_enabled_bitmap.operation)) leaf_name_data.push_back(priority_enabled_bitmap.get_name_leafdata());
    if (priority_flowcontrol.is_set || is_set(priority_flowcontrol.operation)) leaf_name_data.push_back(priority_flowcontrol.get_name_leafdata());

    auto rx_frame_name_datas = rx_frame.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rx_frame_name_datas.begin(), rx_frame_name_datas.end());
    auto tx_frame_name_datas = tx_frame.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tx_frame_name_datas.begin(), tx_frame_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-enabled-bitmap")
    {
        priority_enabled_bitmap = value;
    }
    if(value_path == "priority-flowcontrol")
    {
        priority_flowcontrol = value;
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

EthernetInterface::Interfaces::Interface::Layer1Info::Layer1Info()
    :
    	bandwidth{YType::uint64, "bandwidth"},
	 bandwidth_utilization{YType::uint32, "bandwidth-utilization"},
	 duplex{YType::enumeration, "duplex"},
	 flowcontrol{YType::enumeration, "flowcontrol"},
	 ipg{YType::enumeration, "ipg"},
	 laser_squelch_enabled{YType::boolean, "laser-squelch-enabled"},
	 led_state{YType::enumeration, "led-state"},
	 link_state{YType::enumeration, "link-state"},
	 speed{YType::enumeration, "speed"}
    	,
    autoneg(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg>())
	,ber_monitoring(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring>())
	,current_alarms(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms>())
	,error_counts(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts>())
	,pfc_info(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo>())
	,previous_alarms(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms>())
{
    autoneg->parent = this;
    children["autoneg"] = autoneg.get();

    ber_monitoring->parent = this;
    children["ber-monitoring"] = ber_monitoring.get();

    current_alarms->parent = this;
    children["current-alarms"] = current_alarms.get();

    error_counts->parent = this;
    children["error-counts"] = error_counts.get();

    pfc_info->parent = this;
    children["pfc-info"] = pfc_info.get();

    previous_alarms->parent = this;
    children["previous-alarms"] = previous_alarms.get();

    yang_name = "layer1-info"; yang_parent_name = "interface";
}

EthernetInterface::Interfaces::Interface::Layer1Info::~Layer1Info()
{
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::has_data() const
{
    return bandwidth.is_set
	|| bandwidth_utilization.is_set
	|| duplex.is_set
	|| flowcontrol.is_set
	|| ipg.is_set
	|| laser_squelch_enabled.is_set
	|| led_state.is_set
	|| link_state.is_set
	|| speed.is_set
	|| (autoneg !=  nullptr && autoneg->has_data())
	|| (ber_monitoring !=  nullptr && ber_monitoring->has_data())
	|| (current_alarms !=  nullptr && current_alarms->has_data())
	|| (error_counts !=  nullptr && error_counts->has_data())
	|| (pfc_info !=  nullptr && pfc_info->has_data())
	|| (previous_alarms !=  nullptr && previous_alarms->has_data());
}

bool EthernetInterface::Interfaces::Interface::Layer1Info::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_utilization.operation)
	|| is_set(duplex.operation)
	|| is_set(flowcontrol.operation)
	|| is_set(ipg.operation)
	|| is_set(laser_squelch_enabled.operation)
	|| is_set(led_state.operation)
	|| is_set(link_state.operation)
	|| is_set(speed.operation)
	|| (autoneg !=  nullptr && is_set(autoneg->operation))
	|| (ber_monitoring !=  nullptr && is_set(ber_monitoring->operation))
	|| (current_alarms !=  nullptr && is_set(current_alarms->operation))
	|| (error_counts !=  nullptr && is_set(error_counts->operation))
	|| (pfc_info !=  nullptr && is_set(pfc_info->operation))
	|| (previous_alarms !=  nullptr && is_set(previous_alarms->operation));
}

std::string EthernetInterface::Interfaces::Interface::Layer1Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer1-info";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::Layer1Info::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_utilization.is_set || is_set(bandwidth_utilization.operation)) leaf_name_data.push_back(bandwidth_utilization.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (flowcontrol.is_set || is_set(flowcontrol.operation)) leaf_name_data.push_back(flowcontrol.get_name_leafdata());
    if (ipg.is_set || is_set(ipg.operation)) leaf_name_data.push_back(ipg.get_name_leafdata());
    if (laser_squelch_enabled.is_set || is_set(laser_squelch_enabled.operation)) leaf_name_data.push_back(laser_squelch_enabled.get_name_leafdata());
    if (led_state.is_set || is_set(led_state.operation)) leaf_name_data.push_back(led_state.get_name_leafdata());
    if (link_state.is_set || is_set(link_state.operation)) leaf_name_data.push_back(link_state.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::Layer1Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "autoneg")
    {
        if(autoneg != nullptr)
        {
            children["autoneg"] = autoneg.get();
        }
        else
        {
            autoneg = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg>();
            autoneg->parent = this;
            children["autoneg"] = autoneg.get();
        }
        return children.at("autoneg");
    }

    if(child_yang_name == "ber-monitoring")
    {
        if(ber_monitoring != nullptr)
        {
            children["ber-monitoring"] = ber_monitoring.get();
        }
        else
        {
            ber_monitoring = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring>();
            ber_monitoring->parent = this;
            children["ber-monitoring"] = ber_monitoring.get();
        }
        return children.at("ber-monitoring");
    }

    if(child_yang_name == "current-alarms")
    {
        if(current_alarms != nullptr)
        {
            children["current-alarms"] = current_alarms.get();
        }
        else
        {
            current_alarms = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms>();
            current_alarms->parent = this;
            children["current-alarms"] = current_alarms.get();
        }
        return children.at("current-alarms");
    }

    if(child_yang_name == "error-counts")
    {
        if(error_counts != nullptr)
        {
            children["error-counts"] = error_counts.get();
        }
        else
        {
            error_counts = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts>();
            error_counts->parent = this;
            children["error-counts"] = error_counts.get();
        }
        return children.at("error-counts");
    }

    if(child_yang_name == "pfc-info")
    {
        if(pfc_info != nullptr)
        {
            children["pfc-info"] = pfc_info.get();
        }
        else
        {
            pfc_info = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo>();
            pfc_info->parent = this;
            children["pfc-info"] = pfc_info.get();
        }
        return children.at("pfc-info");
    }

    if(child_yang_name == "previous-alarms")
    {
        if(previous_alarms != nullptr)
        {
            children["previous-alarms"] = previous_alarms.get();
        }
        else
        {
            previous_alarms = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms>();
            previous_alarms->parent = this;
            children["previous-alarms"] = previous_alarms.get();
        }
        return children.at("previous-alarms");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::Layer1Info::get_children()
{
    if(children.find("autoneg") == children.end())
    {
        if(autoneg != nullptr)
        {
            children["autoneg"] = autoneg.get();
        }
    }

    if(children.find("ber-monitoring") == children.end())
    {
        if(ber_monitoring != nullptr)
        {
            children["ber-monitoring"] = ber_monitoring.get();
        }
    }

    if(children.find("current-alarms") == children.end())
    {
        if(current_alarms != nullptr)
        {
            children["current-alarms"] = current_alarms.get();
        }
    }

    if(children.find("error-counts") == children.end())
    {
        if(error_counts != nullptr)
        {
            children["error-counts"] = error_counts.get();
        }
    }

    if(children.find("pfc-info") == children.end())
    {
        if(pfc_info != nullptr)
        {
            children["pfc-info"] = pfc_info.get();
        }
    }

    if(children.find("previous-alarms") == children.end())
    {
        if(previous_alarms != nullptr)
        {
            children["previous-alarms"] = previous_alarms.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::Layer1Info::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-utilization")
    {
        bandwidth_utilization = value;
    }
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "flowcontrol")
    {
        flowcontrol = value;
    }
    if(value_path == "ipg")
    {
        ipg = value;
    }
    if(value_path == "laser-squelch-enabled")
    {
        laser_squelch_enabled = value;
    }
    if(value_path == "led-state")
    {
        led_state = value;
    }
    if(value_path == "link-state")
    {
        link_state = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
}

EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::UnicastMacFilters()
    :
    	unicast_mac_address{YType::str, "unicast-mac-address"}
{
    yang_name = "unicast-mac-filters"; yang_parent_name = "mac-info";
}

EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::~UnicastMacFilters()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::has_data() const
{
    for (auto const & leaf : unicast_mac_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::has_operation() const
{
    for (auto const & leaf : unicast_mac_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-mac-filters";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto unicast_mac_address_name_datas = unicast_mac_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), unicast_mac_address_name_datas.begin(), unicast_mac_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast-mac-address")
    {
        unicast_mac_address.append(value);
    }
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::MulticastMacAddress()
    :
    	mac_address{YType::str, "mac-address"},
	 mask{YType::str, "mask"}
{
    yang_name = "multicast-mac-address"; yang_parent_name = "multicast-mac-filters";
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::~MulticastMacAddress()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::has_data() const
{
    return mac_address.is_set
	|| mask.is_set;
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(mask.operation);
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-mac-address";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacFilters()
    :
    	multicast_promiscuous{YType::boolean, "multicast-promiscuous"}
{
    yang_name = "multicast-mac-filters"; yang_parent_name = "mac-info";
}

EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::~MulticastMacFilters()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::has_data() const
{
    for (std::size_t index=0; index<multicast_mac_address.size(); index++)
    {
        if(multicast_mac_address[index]->has_data())
            return true;
    }
    return multicast_promiscuous.is_set;
}

bool EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::has_operation() const
{
    for (std::size_t index=0; index<multicast_mac_address.size(); index++)
    {
        if(multicast_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(multicast_promiscuous.operation);
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-mac-filters";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_promiscuous.is_set || is_set(multicast_promiscuous.operation)) leaf_name_data.push_back(multicast_promiscuous.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-mac-address")
    {
        for(auto const & c : multicast_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress>();
        c->parent = this;
        multicast_mac_address.push_back(std::move(c));
        children[segment_path] = multicast_mac_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::get_children()
{
    for (auto const & c : multicast_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-promiscuous")
    {
        multicast_promiscuous = value;
    }
}

EthernetInterface::Interfaces::Interface::MacInfo::MacInfo()
    :
    	burned_in_mac_address{YType::str, "burned-in-mac-address"},
	 mru{YType::uint32, "mru"},
	 mtu{YType::uint32, "mtu"},
	 operational_mac_address{YType::str, "operational-mac-address"}
    	,
    multicast_mac_filters(std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters>())
	,unicast_mac_filters(std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters>())
{
    multicast_mac_filters->parent = this;
    children["multicast-mac-filters"] = multicast_mac_filters.get();

    unicast_mac_filters->parent = this;
    children["unicast-mac-filters"] = unicast_mac_filters.get();

    yang_name = "mac-info"; yang_parent_name = "interface";
}

EthernetInterface::Interfaces::Interface::MacInfo::~MacInfo()
{
}

bool EthernetInterface::Interfaces::Interface::MacInfo::has_data() const
{
    return burned_in_mac_address.is_set
	|| mru.is_set
	|| mtu.is_set
	|| operational_mac_address.is_set
	|| (multicast_mac_filters !=  nullptr && multicast_mac_filters->has_data())
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_data());
}

bool EthernetInterface::Interfaces::Interface::MacInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(burned_in_mac_address.operation)
	|| is_set(mru.operation)
	|| is_set(mtu.operation)
	|| is_set(operational_mac_address.operation)
	|| (multicast_mac_filters !=  nullptr && is_set(multicast_mac_filters->operation))
	|| (unicast_mac_filters !=  nullptr && is_set(unicast_mac_filters->operation));
}

std::string EthernetInterface::Interfaces::Interface::MacInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-info";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::MacInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burned_in_mac_address.is_set || is_set(burned_in_mac_address.operation)) leaf_name_data.push_back(burned_in_mac_address.get_name_leafdata());
    if (mru.is_set || is_set(mru.operation)) leaf_name_data.push_back(mru.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operational_mac_address.is_set || is_set(operational_mac_address.operation)) leaf_name_data.push_back(operational_mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::MacInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-mac-filters")
    {
        if(multicast_mac_filters != nullptr)
        {
            children["multicast-mac-filters"] = multicast_mac_filters.get();
        }
        else
        {
            multicast_mac_filters = std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters>();
            multicast_mac_filters->parent = this;
            children["multicast-mac-filters"] = multicast_mac_filters.get();
        }
        return children.at("multicast-mac-filters");
    }

    if(child_yang_name == "unicast-mac-filters")
    {
        if(unicast_mac_filters != nullptr)
        {
            children["unicast-mac-filters"] = unicast_mac_filters.get();
        }
        else
        {
            unicast_mac_filters = std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters>();
            unicast_mac_filters->parent = this;
            children["unicast-mac-filters"] = unicast_mac_filters.get();
        }
        return children.at("unicast-mac-filters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::MacInfo::get_children()
{
    if(children.find("multicast-mac-filters") == children.end())
    {
        if(multicast_mac_filters != nullptr)
        {
            children["multicast-mac-filters"] = multicast_mac_filters.get();
        }
    }

    if(children.find("unicast-mac-filters") == children.end())
    {
        if(unicast_mac_filters != nullptr)
        {
            children["unicast-mac-filters"] = unicast_mac_filters.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::MacInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burned-in-mac-address")
    {
        burned_in_mac_address = value;
    }
    if(value_path == "mru")
    {
        mru = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "operational-mac-address")
    {
        operational_mac_address = value;
    }
}

EthernetInterface::Interfaces::Interface::TransportInfo::TransportInfo()
    :
    	ains_status{YType::enumeration, "ains-status"},
	 maintenance_mode_enabled{YType::boolean, "maintenance-mode-enabled"},
	 remaining_duration{YType::uint32, "remaining-duration"},
	 total_duration{YType::uint32, "total-duration"}
{
    yang_name = "transport-info"; yang_parent_name = "interface";
}

EthernetInterface::Interfaces::Interface::TransportInfo::~TransportInfo()
{
}

bool EthernetInterface::Interfaces::Interface::TransportInfo::has_data() const
{
    return ains_status.is_set
	|| maintenance_mode_enabled.is_set
	|| remaining_duration.is_set
	|| total_duration.is_set;
}

bool EthernetInterface::Interfaces::Interface::TransportInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(ains_status.operation)
	|| is_set(maintenance_mode_enabled.operation)
	|| is_set(remaining_duration.operation)
	|| is_set(total_duration.operation);
}

std::string EthernetInterface::Interfaces::Interface::TransportInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-info";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::TransportInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ains_status.is_set || is_set(ains_status.operation)) leaf_name_data.push_back(ains_status.get_name_leafdata());
    if (maintenance_mode_enabled.is_set || is_set(maintenance_mode_enabled.operation)) leaf_name_data.push_back(maintenance_mode_enabled.get_name_leafdata());
    if (remaining_duration.is_set || is_set(remaining_duration.operation)) leaf_name_data.push_back(remaining_duration.get_name_leafdata());
    if (total_duration.is_set || is_set(total_duration.operation)) leaf_name_data.push_back(total_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::TransportInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::TransportInfo::get_children()
{
    return children;
}

void EthernetInterface::Interfaces::Interface::TransportInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ains-status")
    {
        ains_status = value;
    }
    if(value_path == "maintenance-mode-enabled")
    {
        maintenance_mode_enabled = value;
    }
    if(value_path == "remaining-duration")
    {
        remaining_duration = value;
    }
    if(value_path == "total-duration")
    {
        total_duration = value;
    }
}

EthernetInterface::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 admin_state{YType::enumeration, "admin-state"},
	 oper_state_up{YType::boolean, "oper-state-up"}
    	,
    layer1_info(std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info>())
	,mac_info(std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo>())
	,phy_info(std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo>())
	,transport_info(std::make_unique<EthernetInterface::Interfaces::Interface::TransportInfo>())
{
    layer1_info->parent = this;
    children["layer1-info"] = layer1_info.get();

    mac_info->parent = this;
    children["mac-info"] = mac_info.get();

    phy_info->parent = this;
    children["phy-info"] = phy_info.get();

    transport_info->parent = this;
    children["transport-info"] = transport_info.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

EthernetInterface::Interfaces::Interface::~Interface()
{
}

bool EthernetInterface::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| admin_state.is_set
	|| oper_state_up.is_set
	|| (layer1_info !=  nullptr && layer1_info->has_data())
	|| (mac_info !=  nullptr && mac_info->has_data())
	|| (phy_info !=  nullptr && phy_info->has_data())
	|| (transport_info !=  nullptr && transport_info->has_data());
}

bool EthernetInterface::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(admin_state.operation)
	|| is_set(oper_state_up.operation)
	|| (layer1_info !=  nullptr && is_set(layer1_info->operation))
	|| (mac_info !=  nullptr && is_set(mac_info->operation))
	|| (phy_info !=  nullptr && is_set(phy_info->operation))
	|| (transport_info !=  nullptr && is_set(transport_info->operation));
}

std::string EthernetInterface::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state_up.is_set || is_set(oper_state_up.operation)) leaf_name_data.push_back(oper_state_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "layer1-info")
    {
        if(layer1_info != nullptr)
        {
            children["layer1-info"] = layer1_info.get();
        }
        else
        {
            layer1_info = std::make_unique<EthernetInterface::Interfaces::Interface::Layer1Info>();
            layer1_info->parent = this;
            children["layer1-info"] = layer1_info.get();
        }
        return children.at("layer1-info");
    }

    if(child_yang_name == "mac-info")
    {
        if(mac_info != nullptr)
        {
            children["mac-info"] = mac_info.get();
        }
        else
        {
            mac_info = std::make_unique<EthernetInterface::Interfaces::Interface::MacInfo>();
            mac_info->parent = this;
            children["mac-info"] = mac_info.get();
        }
        return children.at("mac-info");
    }

    if(child_yang_name == "phy-info")
    {
        if(phy_info != nullptr)
        {
            children["phy-info"] = phy_info.get();
        }
        else
        {
            phy_info = std::make_unique<EthernetInterface::Interfaces::Interface::PhyInfo>();
            phy_info->parent = this;
            children["phy-info"] = phy_info.get();
        }
        return children.at("phy-info");
    }

    if(child_yang_name == "transport-info")
    {
        if(transport_info != nullptr)
        {
            children["transport-info"] = transport_info.get();
        }
        else
        {
            transport_info = std::make_unique<EthernetInterface::Interfaces::Interface::TransportInfo>();
            transport_info->parent = this;
            children["transport-info"] = transport_info.get();
        }
        return children.at("transport-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::Interface::get_children()
{
    if(children.find("layer1-info") == children.end())
    {
        if(layer1_info != nullptr)
        {
            children["layer1-info"] = layer1_info.get();
        }
    }

    if(children.find("mac-info") == children.end())
    {
        if(mac_info != nullptr)
        {
            children["mac-info"] = mac_info.get();
        }
    }

    if(children.find("phy-info") == children.end())
    {
        if(phy_info != nullptr)
        {
            children["phy-info"] = phy_info.get();
        }
    }

    if(children.find("transport-info") == children.end())
    {
        if(transport_info != nullptr)
        {
            children["transport-info"] = transport_info.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "oper-state-up")
    {
        oper_state_up = value;
    }
}

EthernetInterface::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ethernet-interface";
}

EthernetInterface::Interfaces::~Interfaces()
{
}

bool EthernetInterface::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetInterface::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EthernetInterface::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath EthernetInterface::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetInterface::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetInterface::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

EthernetInterface::Berts::Bert::BertStatus::BertStatus()
    :
    	bert_state_enabled{YType::boolean, "bert-state-enabled"},
	 data_availability{YType::uint32, "data-availability"},
	 device_under_test{YType::enumeration, "device-under-test"},
	 error_type{YType::enumeration, "error-type"},
	 interface_device{YType::enumeration, "interface-device"},
	 receive_count{YType::uint64, "receive-count"},
	 receive_errors{YType::uint64, "receive-errors"},
	 test_pattern{YType::enumeration, "test-pattern"},
	 transmit_count{YType::uint64, "transmit-count"}
{
    yang_name = "bert-status"; yang_parent_name = "bert";
}

EthernetInterface::Berts::Bert::BertStatus::~BertStatus()
{
}

bool EthernetInterface::Berts::Bert::BertStatus::has_data() const
{
    return bert_state_enabled.is_set
	|| data_availability.is_set
	|| device_under_test.is_set
	|| error_type.is_set
	|| interface_device.is_set
	|| receive_count.is_set
	|| receive_errors.is_set
	|| test_pattern.is_set
	|| transmit_count.is_set;
}

bool EthernetInterface::Berts::Bert::BertStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(bert_state_enabled.operation)
	|| is_set(data_availability.operation)
	|| is_set(device_under_test.operation)
	|| is_set(error_type.operation)
	|| is_set(interface_device.operation)
	|| is_set(receive_count.operation)
	|| is_set(receive_errors.operation)
	|| is_set(test_pattern.operation)
	|| is_set(transmit_count.operation);
}

std::string EthernetInterface::Berts::Bert::BertStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bert-status";

    return path_buffer.str();

}

EntityPath EthernetInterface::Berts::Bert::BertStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bert_state_enabled.is_set || is_set(bert_state_enabled.operation)) leaf_name_data.push_back(bert_state_enabled.get_name_leafdata());
    if (data_availability.is_set || is_set(data_availability.operation)) leaf_name_data.push_back(data_availability.get_name_leafdata());
    if (device_under_test.is_set || is_set(device_under_test.operation)) leaf_name_data.push_back(device_under_test.get_name_leafdata());
    if (error_type.is_set || is_set(error_type.operation)) leaf_name_data.push_back(error_type.get_name_leafdata());
    if (interface_device.is_set || is_set(interface_device.operation)) leaf_name_data.push_back(interface_device.get_name_leafdata());
    if (receive_count.is_set || is_set(receive_count.operation)) leaf_name_data.push_back(receive_count.get_name_leafdata());
    if (receive_errors.is_set || is_set(receive_errors.operation)) leaf_name_data.push_back(receive_errors.get_name_leafdata());
    if (test_pattern.is_set || is_set(test_pattern.operation)) leaf_name_data.push_back(test_pattern.get_name_leafdata());
    if (transmit_count.is_set || is_set(transmit_count.operation)) leaf_name_data.push_back(transmit_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Berts::Bert::BertStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetInterface::Berts::Bert::BertStatus::get_children()
{
    return children;
}

void EthernetInterface::Berts::Bert::BertStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bert-state-enabled")
    {
        bert_state_enabled = value;
    }
    if(value_path == "data-availability")
    {
        data_availability = value;
    }
    if(value_path == "device-under-test")
    {
        device_under_test = value;
    }
    if(value_path == "error-type")
    {
        error_type = value;
    }
    if(value_path == "interface-device")
    {
        interface_device = value;
    }
    if(value_path == "receive-count")
    {
        receive_count = value;
    }
    if(value_path == "receive-errors")
    {
        receive_errors = value;
    }
    if(value_path == "test-pattern")
    {
        test_pattern = value;
    }
    if(value_path == "transmit-count")
    {
        transmit_count = value;
    }
}

EthernetInterface::Berts::Bert::Bert()
    :
    	interface_name{YType::str, "interface-name"},
	 port_bert_interval{YType::uint32, "port-bert-interval"},
	 time_left{YType::uint32, "time-left"}
    	,
    bert_status(std::make_unique<EthernetInterface::Berts::Bert::BertStatus>())
{
    bert_status->parent = this;
    children["bert-status"] = bert_status.get();

    yang_name = "bert"; yang_parent_name = "berts";
}

EthernetInterface::Berts::Bert::~Bert()
{
}

bool EthernetInterface::Berts::Bert::has_data() const
{
    return interface_name.is_set
	|| port_bert_interval.is_set
	|| time_left.is_set
	|| (bert_status !=  nullptr && bert_status->has_data());
}

bool EthernetInterface::Berts::Bert::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(port_bert_interval.operation)
	|| is_set(time_left.operation)
	|| (bert_status !=  nullptr && is_set(bert_status->operation));
}

std::string EthernetInterface::Berts::Bert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bert" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetInterface::Berts::Bert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/berts/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (port_bert_interval.is_set || is_set(port_bert_interval.operation)) leaf_name_data.push_back(port_bert_interval.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.operation)) leaf_name_data.push_back(time_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Berts::Bert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bert-status")
    {
        if(bert_status != nullptr)
        {
            children["bert-status"] = bert_status.get();
        }
        else
        {
            bert_status = std::make_unique<EthernetInterface::Berts::Bert::BertStatus>();
            bert_status->parent = this;
            children["bert-status"] = bert_status.get();
        }
        return children.at("bert-status");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Berts::Bert::get_children()
{
    if(children.find("bert-status") == children.end())
    {
        if(bert_status != nullptr)
        {
            children["bert-status"] = bert_status.get();
        }
    }

    return children;
}

void EthernetInterface::Berts::Bert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "port-bert-interval")
    {
        port_bert_interval = value;
    }
    if(value_path == "time-left")
    {
        time_left = value;
    }
}

EthernetInterface::Berts::Berts()
{
    yang_name = "berts"; yang_parent_name = "ethernet-interface";
}

EthernetInterface::Berts::~Berts()
{
}

bool EthernetInterface::Berts::has_data() const
{
    for (std::size_t index=0; index<bert.size(); index++)
    {
        if(bert[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetInterface::Berts::has_operation() const
{
    for (std::size_t index=0; index<bert.size(); index++)
    {
        if(bert[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EthernetInterface::Berts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "berts";

    return path_buffer.str();

}

EntityPath EthernetInterface::Berts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::Berts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bert")
    {
        for(auto const & c : bert)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetInterface::Berts::Bert>();
        c->parent = this;
        bert.push_back(std::move(c));
        children[segment_path] = bert.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::Berts::get_children()
{
    for (auto const & c : bert)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetInterface::Berts::set_value(const std::string & value_path, std::string value)
{
}

EthernetInterface::EthernetInterface()
    :
    berts(std::make_unique<EthernetInterface::Berts>())
	,interfaces(std::make_unique<EthernetInterface::Interfaces>())
	,statistics(std::make_unique<EthernetInterface::Statistics>())
{
    berts->parent = this;
    children["berts"] = berts.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "ethernet-interface"; yang_parent_name = "Cisco-IOS-XR-drivers-media-eth-oper";
}

EthernetInterface::~EthernetInterface()
{
}

bool EthernetInterface::has_data() const
{
    return (berts !=  nullptr && berts->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool EthernetInterface::has_operation() const
{
    return is_set(operation)
	|| (berts !=  nullptr && is_set(berts->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (statistics !=  nullptr && is_set(statistics->operation));
}

std::string EthernetInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface";

    return path_buffer.str();

}

EntityPath EthernetInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "berts")
    {
        if(berts != nullptr)
        {
            children["berts"] = berts.get();
        }
        else
        {
            berts = std::make_unique<EthernetInterface::Berts>();
            berts->parent = this;
            children["berts"] = berts.get();
        }
        return children.at("berts");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<EthernetInterface::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<EthernetInterface::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetInterface::get_children()
{
    if(children.find("berts") == children.end())
    {
        if(berts != nullptr)
        {
            children["berts"] = berts.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void EthernetInterface::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> EthernetInterface::clone_ptr()
{
    return std::make_unique<EthernetInterface>();
}

const Enum::Value EtherLinkStateEnum::state_undefined {0, "state-undefined"};
const Enum::Value EtherLinkStateEnum::unknown_state {1, "unknown-state"};
const Enum::Value EtherLinkStateEnum::available {2, "available"};
const Enum::Value EtherLinkStateEnum::not_available {3, "not-available"};
const Enum::Value EtherLinkStateEnum::remote_fault {4, "remote-fault"};
const Enum::Value EtherLinkStateEnum::invalid_signal {5, "invalid-signal"};
const Enum::Value EtherLinkStateEnum::remote_jabber {6, "remote-jabber"};
const Enum::Value EtherLinkStateEnum::link_loss {7, "link-loss"};
const Enum::Value EtherLinkStateEnum::remote_test {8, "remote-test"};
const Enum::Value EtherLinkStateEnum::offline {9, "offline"};
const Enum::Value EtherLinkStateEnum::auto_neg_error {10, "auto-neg-error"};
const Enum::Value EtherLinkStateEnum::pmd_link_fault {11, "pmd-link-fault"};
const Enum::Value EtherLinkStateEnum::frame_loss {12, "frame-loss"};
const Enum::Value EtherLinkStateEnum::signal_loss {13, "signal-loss"};
const Enum::Value EtherLinkStateEnum::link_fault {14, "link-fault"};
const Enum::Value EtherLinkStateEnum::excessive_ber {15, "excessive-ber"};
const Enum::Value EtherLinkStateEnum::dxs_link_fault {16, "dxs-link-fault"};
const Enum::Value EtherLinkStateEnum::pxs_link_fault {17, "pxs-link-fault"};
const Enum::Value EtherLinkStateEnum::security {18, "security"};
const Enum::Value EtherLinkStateEnum::phy_not_present {19, "phy-not-present"};
const Enum::Value EtherLinkStateEnum::no_optic_license {20, "no-optic-license"};
const Enum::Value EtherLinkStateEnum::unsupported_module {21, "unsupported-module"};
const Enum::Value EtherLinkStateEnum::dwdm_laser_shut {22, "dwdm-laser-shut"};
const Enum::Value EtherLinkStateEnum::wanphy_laser_shut {23, "wanphy-laser-shut"};
const Enum::Value EtherLinkStateEnum::incompatible_config {24, "incompatible-config"};
const Enum::Value EtherLinkStateEnum::system_error {25, "system-error"};
const Enum::Value EtherLinkStateEnum::wan_framing_error {26, "wan-framing-error"};
const Enum::Value EtherLinkStateEnum::otn_framing_error {27, "otn-framing-error"};

const Enum::Value EthernetBertPatternEnum::no_test_pattern {0, "no-test-pattern"};
const Enum::Value EthernetBertPatternEnum::high_frequency {1, "high-frequency"};
const Enum::Value EthernetBertPatternEnum::low_frequency {2, "low-frequency"};
const Enum::Value EthernetBertPatternEnum::mixed_frequency {3, "mixed-frequency"};
const Enum::Value EthernetBertPatternEnum::continuous_random {4, "continuous-random"};
const Enum::Value EthernetBertPatternEnum::continuous_jitter {5, "continuous-jitter"};
const Enum::Value EthernetBertPatternEnum::long_continuous_random {6, "long-continuous-random"};
const Enum::Value EthernetBertPatternEnum::short_continuous_random {7, "short-continuous-random"};
const Enum::Value EthernetBertPatternEnum::pseudorandom_seed_a {8, "pseudorandom-seed-a"};
const Enum::Value EthernetBertPatternEnum::pseudorandom_seed_b {9, "pseudorandom-seed-b"};
const Enum::Value EthernetBertPatternEnum::prbs31 {10, "prbs31"};
const Enum::Value EthernetBertPatternEnum::square_wave {11, "square-wave"};
const Enum::Value EthernetBertPatternEnum::pseudorandom {12, "pseudorandom"};
const Enum::Value EthernetBertPatternEnum::ethernet_bert_pattern_types {13, "ethernet-bert-pattern-types"};

const Enum::Value EthernetPortEnableEnum::disabled {0, "disabled"};
const Enum::Value EthernetPortEnableEnum::rx_enabled {1, "rx-enabled"};
const Enum::Value EthernetPortEnableEnum::tx_enabled {2, "tx-enabled"};
const Enum::Value EthernetPortEnableEnum::enabled {3, "enabled"};

const Enum::Value EthCtrlrAlarmStateEnum::alarm_not_supported {0, "alarm-not-supported"};
const Enum::Value EthCtrlrAlarmStateEnum::alarm_set {1, "alarm-set"};
const Enum::Value EthCtrlrAlarmStateEnum::alarm_not_set {2, "alarm-not-set"};

const Enum::Value EthernetDevEnum::no_device {0, "no-device"};
const Enum::Value EthernetDevEnum::pma_pmd {1, "pma-pmd"};
const Enum::Value EthernetDevEnum::wis {2, "wis"};
const Enum::Value EthernetDevEnum::pcs {3, "pcs"};
const Enum::Value EthernetDevEnum::phy_xs {4, "phy-xs"};
const Enum::Value EthernetDevEnum::dte_xs {5, "dte-xs"};
const Enum::Value EthernetDevEnum::ethernet_num_dev {6, "ethernet-num-dev"};

const Enum::Value EtherPhyPresentEnum::phy_not_present {0, "phy-not-present"};
const Enum::Value EtherPhyPresentEnum::phy_present {1, "phy-present"};
const Enum::Value EtherPhyPresentEnum::no_information {2, "no-information"};

const Enum::Value EthernetDevIfEnum::no_interface {0, "no-interface"};
const Enum::Value EthernetDevIfEnum::xgmii {1, "xgmii"};
const Enum::Value EthernetDevIfEnum::xaui {2, "xaui"};
const Enum::Value EthernetDevIfEnum::ethernet_num_dev_if {3, "ethernet-num-dev-if"};

const Enum::Value EtherFlowcontrolEnum::no_flowcontrol {0, "no-flowcontrol"};
const Enum::Value EtherFlowcontrolEnum::egress {1, "egress"};
const Enum::Value EtherFlowcontrolEnum::ingress {2, "ingress"};
const Enum::Value EtherFlowcontrolEnum::bidirectional {3, "bidirectional"};

const Enum::Value EtherDomAlarmEnum::no_information {0, "no-information"};
const Enum::Value EtherDomAlarmEnum::alarm_high {1, "alarm-high"};
const Enum::Value EtherDomAlarmEnum::warning_high {2, "warning-high"};
const Enum::Value EtherDomAlarmEnum::normal {3, "normal"};
const Enum::Value EtherDomAlarmEnum::warning_low {4, "warning-low"};
const Enum::Value EtherDomAlarmEnum::alarm_low {5, "alarm-low"};

const Enum::Value EtherPfcEnum::no_pfc {0, "no-pfc"};
const Enum::Value EtherPfcEnum::on {1, "on"};

const Enum::Value EthernetBertErrCntEnum::no_count_type {0, "no-count-type"};
const Enum::Value EthernetBertErrCntEnum::bit_error_count {1, "bit-error-count"};
const Enum::Value EthernetBertErrCntEnum::frame_error_count {2, "frame-error-count"};
const Enum::Value EthernetBertErrCntEnum::block_error_count {3, "block-error-count"};
const Enum::Value EthernetBertErrCntEnum::ethernet_bert_err_cnt_types {4, "ethernet-bert-err-cnt-types"};

const Enum::Value EthernetDuplexEnum::ethernet_duplex_invalid {0, "ethernet-duplex-invalid"};
const Enum::Value EthernetDuplexEnum::half_duplex {1, "half-duplex"};
const Enum::Value EthernetDuplexEnum::full_duplex {2, "full-duplex"};

const Enum::Value EthernetIpgEnum::standard {0, "standard"};
const Enum::Value EthernetIpgEnum::non_standard {1, "non-standard"};

const Enum::Value EthernetSpeedEnum::ethernet_speed_invalid {0, "ethernet-speed-invalid"};
const Enum::Value EthernetSpeedEnum::ten_mbps {1, "ten-mbps"};
const Enum::Value EthernetSpeedEnum::hundred_mbps {2, "hundred-mbps"};
const Enum::Value EthernetSpeedEnum::one_gbps {3, "one-gbps"};
const Enum::Value EthernetSpeedEnum::ten_gbps {4, "ten-gbps"};
const Enum::Value EthernetSpeedEnum::twenty_five_gbps {5, "twenty-five-gbps"};
const Enum::Value EthernetSpeedEnum::forty_gbps {6, "forty-gbps"};
const Enum::Value EthernetSpeedEnum::fifty_gbps {7, "fifty-gbps"};
const Enum::Value EthernetSpeedEnum::hundred_gbps {8, "hundred-gbps"};
const Enum::Value EthernetSpeedEnum::ethernet_speed_types_count {9, "ethernet-speed-types-count"};

const Enum::Value EtherLedStateEnum::led_state_unknown {0, "led-state-unknown"};
const Enum::Value EtherLedStateEnum::led_off {1, "led-off"};
const Enum::Value EtherLedStateEnum::green_on {2, "green-on"};
const Enum::Value EtherLedStateEnum::green_flashing {3, "green-flashing"};
const Enum::Value EtherLedStateEnum::yellow_on {4, "yellow-on"};
const Enum::Value EtherLedStateEnum::yellow_flashing {5, "yellow-flashing"};
const Enum::Value EtherLedStateEnum::red_on {6, "red-on"};
const Enum::Value EtherLedStateEnum::red_flashing {7, "red-flashing"};

const Enum::Value EthernetFecEnum::not_configured {0, "not-configured"};
const Enum::Value EthernetFecEnum::standard {1, "standard"};
const Enum::Value EthernetFecEnum::disabled {2, "disabled"};
const Enum::Value EthernetFecEnum::base_r {3, "base-r"};

const Enum::Value EthernetMediaEnum::ethernet_other {0, "ethernet-other"};
const Enum::Value EthernetMediaEnum::ethernet_unknown {1, "ethernet-unknown"};
const Enum::Value EthernetMediaEnum::ethernet_aui {2, "ethernet-aui"};
const Enum::Value EthernetMediaEnum::ethernet_10base5 {3, "ethernet-10base5"};
const Enum::Value EthernetMediaEnum::ethernet_foirl {4, "ethernet-foirl"};
const Enum::Value EthernetMediaEnum::ethernet_10base2 {5, "ethernet-10base2"};
const Enum::Value EthernetMediaEnum::ethernet_10broad36 {6, "ethernet-10broad36"};
const Enum::Value EthernetMediaEnum::ethernet_10base {7, "ethernet-10base"};
const Enum::Value EthernetMediaEnum::ethernet_10base_thd {8, "ethernet-10base-thd"};
const Enum::Value EthernetMediaEnum::ethernet_10base_tfd {9, "ethernet-10base-tfd"};
const Enum::Value EthernetMediaEnum::ethernet_10base_fp {10, "ethernet-10base-fp"};
const Enum::Value EthernetMediaEnum::ethernet_10base_fb {11, "ethernet-10base-fb"};
const Enum::Value EthernetMediaEnum::ethernet_10base_fl {12, "ethernet-10base-fl"};
const Enum::Value EthernetMediaEnum::ethernet_10base_flhd {13, "ethernet-10base-flhd"};
const Enum::Value EthernetMediaEnum::ethernet_10base_flfd {14, "ethernet-10base-flfd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_t4 {15, "ethernet-100base-t4"};
const Enum::Value EthernetMediaEnum::ethernet_100base_tx {16, "ethernet-100base-tx"};
const Enum::Value EthernetMediaEnum::ethernet_100base_txhd {17, "ethernet-100base-txhd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_txfd {18, "ethernet-100base-txfd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_fx {19, "ethernet-100base-fx"};
const Enum::Value EthernetMediaEnum::ethernet_100base_fxhd {20, "ethernet-100base-fxhd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_fxfd {21, "ethernet-100base-fxfd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_ex {22, "ethernet-100base-ex"};
const Enum::Value EthernetMediaEnum::ethernet_100base_exhd {23, "ethernet-100base-exhd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_exfd {24, "ethernet-100base-exfd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_t2 {25, "ethernet-100base-t2"};
const Enum::Value EthernetMediaEnum::ethernet_100base_t2hd {26, "ethernet-100base-t2hd"};
const Enum::Value EthernetMediaEnum::ethernet_100base_t2fd {27, "ethernet-100base-t2fd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_x {28, "ethernet-1000base-x"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_xhd {29, "ethernet-1000base-xhd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_xfd {30, "ethernet-1000base-xfd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_lx {31, "ethernet-1000base-lx"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_lxhd {32, "ethernet-1000base-lxhd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_lxfd {33, "ethernet-1000base-lxfd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_sx {34, "ethernet-1000base-sx"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_sxhd {35, "ethernet-1000base-sxhd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_sxfd {36, "ethernet-1000base-sxfd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cx {37, "ethernet-1000base-cx"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cxhd {38, "ethernet-1000base-cxhd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cxfd {39, "ethernet-1000base-cxfd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base {40, "ethernet-1000base"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_thd {41, "ethernet-1000base-thd"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_tfd {42, "ethernet-1000base-tfd"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_x {43, "ethernet-10gbase-x"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_lx4 {44, "ethernet-10gbase-lx4"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_r {45, "ethernet-10gbase-r"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_er {46, "ethernet-10gbase-er"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_lr {47, "ethernet-10gbase-lr"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_sr {48, "ethernet-10gbase-sr"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_w {49, "ethernet-10gbase-w"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_ew {50, "ethernet-10gbase-ew"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_lw {51, "ethernet-10gbase-lw"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_sw {52, "ethernet-10gbase-sw"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_zx {53, "ethernet-1000base-zx"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm {54, "ethernet-1000base-cwdm"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1470 {55, "ethernet-1000base-cwdm-1470"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1490 {56, "ethernet-1000base-cwdm-1490"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1510 {57, "ethernet-1000base-cwdm-1510"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1530 {58, "ethernet-1000base-cwdm-1530"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1550 {59, "ethernet-1000base-cwdm-1550"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1570 {60, "ethernet-1000base-cwdm-1570"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1590 {61, "ethernet-1000base-cwdm-1590"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_cwdm_1610 {62, "ethernet-1000base-cwdm-1610"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_zr {63, "ethernet-10gbase-zr"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm {64, "ethernet-10gbase-dwdm"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_lr4 {65, "ethernet-100gbase-lr4"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm {66, "ethernet-1000base-dwdm"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1533 {67, "ethernet-1000base-dwdm-1533"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1537 {68, "ethernet-1000base-dwdm-1537"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1541 {69, "ethernet-1000base-dwdm-1541"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1545 {70, "ethernet-1000base-dwdm-1545"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1549 {71, "ethernet-1000base-dwdm-1549"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1553 {72, "ethernet-1000base-dwdm-1553"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1557 {73, "ethernet-1000base-dwdm-1557"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1561 {74, "ethernet-1000base-dwdm-1561"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_lr4 {75, "ethernet-40gbase-lr4"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_er4 {76, "ethernet-40gbase-er4"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_er4 {77, "ethernet-100gbase-er4"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_ex {78, "ethernet-1000base-ex"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx10_d {79, "ethernet-1000base-bx10-d"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx10_u {80, "ethernet-1000base-bx10-u"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1561_42 {81, "ethernet-1000base-dwdm-1561-42"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1560_61 {82, "ethernet-1000base-dwdm-1560-61"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1559_79 {83, "ethernet-1000base-dwdm-1559-79"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1558_98 {84, "ethernet-1000base-dwdm-1558-98"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1558_17 {85, "ethernet-1000base-dwdm-1558-17"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1557_36 {86, "ethernet-1000base-dwdm-1557-36"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1556_55 {87, "ethernet-1000base-dwdm-1556-55"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1555_75 {88, "ethernet-1000base-dwdm-1555-75"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1554_94 {89, "ethernet-1000base-dwdm-1554-94"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1554_13 {90, "ethernet-1000base-dwdm-1554-13"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1553_33 {91, "ethernet-1000base-dwdm-1553-33"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1552_52 {92, "ethernet-1000base-dwdm-1552-52"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1551_72 {93, "ethernet-1000base-dwdm-1551-72"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1550_92 {94, "ethernet-1000base-dwdm-1550-92"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1550_12 {95, "ethernet-1000base-dwdm-1550-12"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1549_32 {96, "ethernet-1000base-dwdm-1549-32"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1548_51 {97, "ethernet-1000base-dwdm-1548-51"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1547_72 {98, "ethernet-1000base-dwdm-1547-72"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1546_92 {99, "ethernet-1000base-dwdm-1546-92"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1546_12 {100, "ethernet-1000base-dwdm-1546-12"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1545_32 {101, "ethernet-1000base-dwdm-1545-32"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1544_53 {102, "ethernet-1000base-dwdm-1544-53"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1543_73 {103, "ethernet-1000base-dwdm-1543-73"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1542_94 {104, "ethernet-1000base-dwdm-1542-94"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1542_14 {105, "ethernet-1000base-dwdm-1542-14"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1541_35 {106, "ethernet-1000base-dwdm-1541-35"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1540_56 {107, "ethernet-1000base-dwdm-1540-56"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1539_77 {108, "ethernet-1000base-dwdm-1539-77"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1538_98 {109, "ethernet-1000base-dwdm-1538-98"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1538_19 {110, "ethernet-1000base-dwdm-1538-19"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1537_40 {111, "ethernet-1000base-dwdm-1537-40"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1536_61 {112, "ethernet-1000base-dwdm-1536-61"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1535_82 {113, "ethernet-1000base-dwdm-1535-82"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1535_04 {114, "ethernet-1000base-dwdm-1535-04"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1534_25 {115, "ethernet-1000base-dwdm-1534-25"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1533_47 {116, "ethernet-1000base-dwdm-1533-47"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1532_68 {117, "ethernet-1000base-dwdm-1532-68"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1531_90 {118, "ethernet-1000base-dwdm-1531-90"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1531_12 {119, "ethernet-1000base-dwdm-1531-12"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_1530_33 {120, "ethernet-1000base-dwdm-1530-33"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dwdm_tunable {121, "ethernet-1000base-dwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1561_42 {122, "ethernet-10gbase-dwdm-1561-42"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1560_61 {123, "ethernet-10gbase-dwdm-1560-61"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1559_79 {124, "ethernet-10gbase-dwdm-1559-79"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1558_98 {125, "ethernet-10gbase-dwdm-1558-98"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1558_17 {126, "ethernet-10gbase-dwdm-1558-17"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1557_36 {127, "ethernet-10gbase-dwdm-1557-36"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1556_55 {128, "ethernet-10gbase-dwdm-1556-55"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1555_75 {129, "ethernet-10gbase-dwdm-1555-75"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1554_94 {130, "ethernet-10gbase-dwdm-1554-94"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1554_13 {131, "ethernet-10gbase-dwdm-1554-13"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1553_33 {132, "ethernet-10gbase-dwdm-1553-33"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1552_52 {133, "ethernet-10gbase-dwdm-1552-52"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1551_72 {134, "ethernet-10gbase-dwdm-1551-72"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1550_92 {135, "ethernet-10gbase-dwdm-1550-92"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1550_12 {136, "ethernet-10gbase-dwdm-1550-12"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1549_32 {137, "ethernet-10gbase-dwdm-1549-32"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1548_51 {138, "ethernet-10gbase-dwdm-1548-51"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1547_72 {139, "ethernet-10gbase-dwdm-1547-72"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1546_92 {140, "ethernet-10gbase-dwdm-1546-92"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1546_12 {141, "ethernet-10gbase-dwdm-1546-12"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1545_32 {142, "ethernet-10gbase-dwdm-1545-32"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1544_53 {143, "ethernet-10gbase-dwdm-1544-53"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1543_73 {144, "ethernet-10gbase-dwdm-1543-73"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1542_94 {145, "ethernet-10gbase-dwdm-1542-94"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1542_14 {146, "ethernet-10gbase-dwdm-1542-14"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1541_35 {147, "ethernet-10gbase-dwdm-1541-35"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1540_56 {148, "ethernet-10gbase-dwdm-1540-56"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1539_77 {149, "ethernet-10gbase-dwdm-1539-77"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1538_98 {150, "ethernet-10gbase-dwdm-1538-98"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1538_19 {151, "ethernet-10gbase-dwdm-1538-19"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1537_40 {152, "ethernet-10gbase-dwdm-1537-40"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1536_61 {153, "ethernet-10gbase-dwdm-1536-61"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1535_82 {154, "ethernet-10gbase-dwdm-1535-82"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1535_04 {155, "ethernet-10gbase-dwdm-1535-04"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1534_25 {156, "ethernet-10gbase-dwdm-1534-25"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1533_47 {157, "ethernet-10gbase-dwdm-1533-47"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1532_68 {158, "ethernet-10gbase-dwdm-1532-68"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1531_90 {159, "ethernet-10gbase-dwdm-1531-90"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1531_12 {160, "ethernet-10gbase-dwdm-1531-12"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_1530_33 {161, "ethernet-10gbase-dwdm-1530-33"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_dwdm_tunable {162, "ethernet-10gbase-dwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1561_42 {163, "ethernet-40gbase-dwdm-1561-42"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1560_61 {164, "ethernet-40gbase-dwdm-1560-61"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1559_79 {165, "ethernet-40gbase-dwdm-1559-79"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1558_98 {166, "ethernet-40gbase-dwdm-1558-98"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1558_17 {167, "ethernet-40gbase-dwdm-1558-17"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1557_36 {168, "ethernet-40gbase-dwdm-1557-36"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1556_55 {169, "ethernet-40gbase-dwdm-1556-55"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1555_75 {170, "ethernet-40gbase-dwdm-1555-75"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1554_94 {171, "ethernet-40gbase-dwdm-1554-94"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1554_13 {172, "ethernet-40gbase-dwdm-1554-13"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1553_33 {173, "ethernet-40gbase-dwdm-1553-33"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1552_52 {174, "ethernet-40gbase-dwdm-1552-52"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1551_72 {175, "ethernet-40gbase-dwdm-1551-72"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1550_92 {176, "ethernet-40gbase-dwdm-1550-92"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1550_12 {177, "ethernet-40gbase-dwdm-1550-12"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1549_32 {178, "ethernet-40gbase-dwdm-1549-32"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1548_51 {179, "ethernet-40gbase-dwdm-1548-51"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1547_72 {180, "ethernet-40gbase-dwdm-1547-72"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1546_92 {181, "ethernet-40gbase-dwdm-1546-92"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1546_12 {182, "ethernet-40gbase-dwdm-1546-12"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1545_32 {183, "ethernet-40gbase-dwdm-1545-32"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1544_53 {184, "ethernet-40gbase-dwdm-1544-53"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1543_73 {185, "ethernet-40gbase-dwdm-1543-73"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1542_94 {186, "ethernet-40gbase-dwdm-1542-94"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1542_14 {187, "ethernet-40gbase-dwdm-1542-14"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1541_35 {188, "ethernet-40gbase-dwdm-1541-35"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1540_56 {189, "ethernet-40gbase-dwdm-1540-56"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1539_77 {190, "ethernet-40gbase-dwdm-1539-77"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1538_98 {191, "ethernet-40gbase-dwdm-1538-98"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1538_19 {192, "ethernet-40gbase-dwdm-1538-19"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1537_40 {193, "ethernet-40gbase-dwdm-1537-40"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1536_61 {194, "ethernet-40gbase-dwdm-1536-61"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1535_82 {195, "ethernet-40gbase-dwdm-1535-82"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1535_04 {196, "ethernet-40gbase-dwdm-1535-04"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1534_25 {197, "ethernet-40gbase-dwdm-1534-25"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1533_47 {198, "ethernet-40gbase-dwdm-1533-47"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1532_68 {199, "ethernet-40gbase-dwdm-1532-68"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1531_90 {200, "ethernet-40gbase-dwdm-1531-90"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1531_12 {201, "ethernet-40gbase-dwdm-1531-12"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_1530_33 {202, "ethernet-40gbase-dwdm-1530-33"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_dwdm_tunable {203, "ethernet-40gbase-dwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1561_42 {204, "ethernet-100gbase-dwdm-1561-42"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1560_61 {205, "ethernet-100gbase-dwdm-1560-61"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1559_79 {206, "ethernet-100gbase-dwdm-1559-79"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1558_98 {207, "ethernet-100gbase-dwdm-1558-98"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1558_17 {208, "ethernet-100gbase-dwdm-1558-17"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1557_36 {209, "ethernet-100gbase-dwdm-1557-36"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1556_55 {210, "ethernet-100gbase-dwdm-1556-55"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1555_75 {211, "ethernet-100gbase-dwdm-1555-75"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1554_94 {212, "ethernet-100gbase-dwdm-1554-94"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1554_13 {213, "ethernet-100gbase-dwdm-1554-13"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1553_33 {214, "ethernet-100gbase-dwdm-1553-33"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1552_52 {215, "ethernet-100gbase-dwdm-1552-52"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1551_72 {216, "ethernet-100gbase-dwdm-1551-72"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1550_92 {217, "ethernet-100gbase-dwdm-1550-92"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1550_12 {218, "ethernet-100gbase-dwdm-1550-12"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1549_32 {219, "ethernet-100gbase-dwdm-1549-32"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1548_51 {220, "ethernet-100gbase-dwdm-1548-51"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1547_72 {221, "ethernet-100gbase-dwdm-1547-72"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1546_92 {222, "ethernet-100gbase-dwdm-1546-92"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1546_12 {223, "ethernet-100gbase-dwdm-1546-12"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1545_32 {224, "ethernet-100gbase-dwdm-1545-32"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1544_53 {225, "ethernet-100gbase-dwdm-1544-53"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1543_73 {226, "ethernet-100gbase-dwdm-1543-73"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1542_94 {227, "ethernet-100gbase-dwdm-1542-94"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1542_14 {228, "ethernet-100gbase-dwdm-1542-14"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1541_35 {229, "ethernet-100gbase-dwdm-1541-35"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1540_56 {230, "ethernet-100gbase-dwdm-1540-56"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1539_77 {231, "ethernet-100gbase-dwdm-1539-77"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1538_98 {232, "ethernet-100gbase-dwdm-1538-98"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1538_19 {233, "ethernet-100gbase-dwdm-1538-19"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1537_40 {234, "ethernet-100gbase-dwdm-1537-40"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1536_61 {235, "ethernet-100gbase-dwdm-1536-61"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1535_82 {236, "ethernet-100gbase-dwdm-1535-82"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1535_04 {237, "ethernet-100gbase-dwdm-1535-04"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1534_25 {238, "ethernet-100gbase-dwdm-1534-25"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1533_47 {239, "ethernet-100gbase-dwdm-1533-47"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1532_68 {240, "ethernet-100gbase-dwdm-1532-68"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1531_90 {241, "ethernet-100gbase-dwdm-1531-90"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1531_12 {242, "ethernet-100gbase-dwdm-1531-12"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_1530_33 {243, "ethernet-100gbase-dwdm-1530-33"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_dwdm_tunable {244, "ethernet-100gbase-dwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_kr4 {245, "ethernet-40gbase-kr4"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cr4 {246, "ethernet-40gbase-cr4"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_sr4 {247, "ethernet-40gbase-sr4"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_fr {248, "ethernet-40gbase-fr"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cr10 {249, "ethernet-100gbase-cr10"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_sr10 {250, "ethernet-100gbase-sr10"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_csr4 {251, "ethernet-40gbase-csr4"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm {252, "ethernet-10gbase-cwdm"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_tunable {253, "ethernet-10gbase-cwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1470 {254, "ethernet-10gbase-cwdm-1470"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1490 {255, "ethernet-10gbase-cwdm-1490"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1510 {256, "ethernet-10gbase-cwdm-1510"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1530 {257, "ethernet-10gbase-cwdm-1530"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1550 {258, "ethernet-10gbase-cwdm-1550"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1570 {259, "ethernet-10gbase-cwdm-1570"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1590 {260, "ethernet-10gbase-cwdm-1590"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cwdm_1610 {261, "ethernet-10gbase-cwdm-1610"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm {262, "ethernet-40gbase-cwdm"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_tunable {263, "ethernet-40gbase-cwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1470 {264, "ethernet-40gbase-cwdm-1470"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1490 {265, "ethernet-40gbase-cwdm-1490"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1510 {266, "ethernet-40gbase-cwdm-1510"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1530 {267, "ethernet-40gbase-cwdm-1530"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1550 {268, "ethernet-40gbase-cwdm-1550"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1570 {269, "ethernet-40gbase-cwdm-1570"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1590 {270, "ethernet-40gbase-cwdm-1590"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_cwdm_1610 {271, "ethernet-40gbase-cwdm-1610"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm {272, "ethernet-100gbase-cwdm"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_tunable {273, "ethernet-100gbase-cwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1470 {274, "ethernet-100gbase-cwdm-1470"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1490 {275, "ethernet-100gbase-cwdm-1490"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1510 {276, "ethernet-100gbase-cwdm-1510"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1530 {277, "ethernet-100gbase-cwdm-1530"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1550 {278, "ethernet-100gbase-cwdm-1550"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1570 {279, "ethernet-100gbase-cwdm-1570"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1590 {280, "ethernet-100gbase-cwdm-1590"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm_1610 {281, "ethernet-100gbase-cwdm-1610"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_elpb {282, "ethernet-40gbase-elpb"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_elpb {283, "ethernet-100gbase-elpb"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_lr10 {284, "ethernet-100gbase-lr10"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase {285, "ethernet-40gbase"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_kp4 {286, "ethernet-100gbase-kp4"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_kr4 {287, "ethernet-100gbase-kr4"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_lrm {288, "ethernet-10gbase-lrm"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_cx4 {289, "ethernet-10gbase-cx4"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase {290, "ethernet-10gbase"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_kx4 {291, "ethernet-10gbase-kx4"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_kr {292, "ethernet-10gbase-kr"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_pr {293, "ethernet-10gbase-pr"};
const Enum::Value EthernetMediaEnum::ethernet_100base_lx {294, "ethernet-100base-lx"};
const Enum::Value EthernetMediaEnum::ethernet_100base_zx {295, "ethernet-100base-zx"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx_d {296, "ethernet-1000base-bx-d"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx_u {297, "ethernet-1000base-bx-u"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx20_d {298, "ethernet-1000base-bx20-d"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx20_u {299, "ethernet-1000base-bx20-u"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx40_d {300, "ethernet-1000base-bx40-d"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx40_da {301, "ethernet-1000base-bx40-da"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx40_u {302, "ethernet-1000base-bx40-u"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx80_d {303, "ethernet-1000base-bx80-d"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx80_u {304, "ethernet-1000base-bx80-u"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx120_d {305, "ethernet-1000base-bx120-d"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_bx120_u {306, "ethernet-1000base-bx120-u"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx_d {307, "ethernet-10gbase-bx-d"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx_u {308, "ethernet-10gbase-bx-u"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx10_d {309, "ethernet-10gbase-bx10-d"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx10_u {310, "ethernet-10gbase-bx10-u"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx20_d {311, "ethernet-10gbase-bx20-d"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx20_u {312, "ethernet-10gbase-bx20-u"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx40_d {313, "ethernet-10gbase-bx40-d"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx40_u {314, "ethernet-10gbase-bx40-u"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx80_d {315, "ethernet-10gbase-bx80-d"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx80_u {316, "ethernet-10gbase-bx80-u"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx120_d {317, "ethernet-10gbase-bx120-d"};
const Enum::Value EthernetMediaEnum::ethernet_10gbase_bx120_u {318, "ethernet-10gbase-bx120-u"};
const Enum::Value EthernetMediaEnum::ethernet_1000base_dr_lx {319, "ethernet-1000base-dr-lx"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_er4l {320, "ethernet-100gbase-er4l"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_sr4 {321, "ethernet-100gbase-sr4"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_sr_bd {322, "ethernet-40gbase-sr-bd"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_cr {323, "ethernet-25gbase-cr"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_cr_s {324, "ethernet-25gbase-cr-s"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_kr {325, "ethernet-25gbase-kr"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_kr_s {326, "ethernet-25gbase-kr-s"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_r {327, "ethernet-25gbase-r"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_sr {328, "ethernet-25gbase-sr"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_dwdm {329, "ethernet-25gbase-dwdm"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_dwdm_tunable {330, "ethernet-25gbase-dwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_cwdm {331, "ethernet-25gbase-cwdm"};
const Enum::Value EthernetMediaEnum::ethernet_25gbase_cwdm_tunable {332, "ethernet-25gbase-cwdm-tunable"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_psm4 {333, "ethernet-100gbase-psm4"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_er10 {334, "ethernet-100gbase-er10"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_er10l {335, "ethernet-100gbase-er10l"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_acc {336, "ethernet-100gbase-acc"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_aoc {337, "ethernet-100gbase-aoc"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cwdm4 {338, "ethernet-100gbase-cwdm4"};
const Enum::Value EthernetMediaEnum::ethernet_40gbase_psm4 {339, "ethernet-40gbase-psm4"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_cr4 {340, "ethernet-100gbase-cr4"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_act_loop {341, "ethernet-100gbase-act-loop"};
const Enum::Value EthernetMediaEnum::ethernet_100gbase_pas_loop {342, "ethernet-100gbase-pas-loop"};
const Enum::Value EthernetMediaEnum::ethernet_base_max {343, "ethernet-base-max"};

const Enum::Value EtherAinsStatusEnum::ains_soak_status_none {0, "ains-soak-status-none"};
const Enum::Value EtherAinsStatusEnum::ains_soak_status_pending {1, "ains-soak-status-pending"};
const Enum::Value EtherAinsStatusEnum::ains_soak_status_running {2, "ains-soak-status-running"};

const Enum::Value EthernetLoopbackEnum::no_loopback {0, "no-loopback"};
const Enum::Value EthernetLoopbackEnum::internal {1, "internal"};
const Enum::Value EthernetLoopbackEnum::line {2, "line"};
const Enum::Value EthernetLoopbackEnum::external {3, "external"};


}
}

