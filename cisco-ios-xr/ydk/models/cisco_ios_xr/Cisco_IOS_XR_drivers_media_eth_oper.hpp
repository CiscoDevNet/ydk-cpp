#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_media_eth_oper {

class EthernetInterface : public ydk::Entity
{
    public:
        EthernetInterface();
        ~EthernetInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Statistics; //type: EthernetInterface::Statistics
        class Interfaces; //type: EthernetInterface::Interfaces
        class Berts; //type: EthernetInterface::Berts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts> berts;
        
}; // EthernetInterface


class EthernetInterface::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Statistic; //type: EthernetInterface::Statistics::Statistic

        ydk::YList statistic;
        
}; // EthernetInterface::Statistics


class EthernetInterface::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf received_total_bytes; //type: uint64
        ydk::YLeaf received_good_bytes; //type: uint64
        ydk::YLeaf received_total_frames; //type: uint64
        ydk::YLeaf received8021q_frames; //type: uint64
        ydk::YLeaf received_pause_frames; //type: uint64
        ydk::YLeaf received_unknown_opcodes; //type: uint64
        ydk::YLeaf received_total64_octet_frames; //type: uint64
        ydk::YLeaf received_total_octet_frames_from65_to127; //type: uint64
        ydk::YLeaf received_total_octet_frames_from128_to255; //type: uint64
        ydk::YLeaf received_total_octet_frames_from256_to511; //type: uint64
        ydk::YLeaf received_total_octet_frames_from512_to1023; //type: uint64
        ydk::YLeaf received_total_octet_frames_from1024_to1518; //type: uint64
        ydk::YLeaf received_total_octet_frames_from1519_to_max; //type: uint64
        ydk::YLeaf received_good_frames; //type: uint64
        ydk::YLeaf received_unicast_frames; //type: uint64
        ydk::YLeaf received_multicast_frames; //type: uint64
        ydk::YLeaf received_broadcast_frames; //type: uint64
        ydk::YLeaf number_of_buffer_overrun_packets_dropped; //type: uint64
        ydk::YLeaf number_of_aborted_packets_dropped; //type: uint64
        ydk::YLeaf numberof_invalid_vlan_id_packets_dropped; //type: uint64
        ydk::YLeaf invalid_dest_mac_drop_packets; //type: uint64
        ydk::YLeaf invalid_encap_drop_packets; //type: uint64
        ydk::YLeaf number_of_miscellaneous_packets_dropped; //type: uint64
        ydk::YLeaf dropped_giant_packets_greaterthan_mru; //type: uint64
        ydk::YLeaf dropped_ether_stats_undersize_pkts; //type: uint64
        ydk::YLeaf dropped_jabbers_packets_greaterthan_mru; //type: uint64
        ydk::YLeaf dropped_ether_stats_fragments; //type: uint64
        ydk::YLeaf dropped_packets_with_crc_align_errors; //type: uint64
        ydk::YLeaf ether_stats_collisions; //type: uint64
        ydk::YLeaf symbol_errors; //type: uint64
        ydk::YLeaf dropped_miscellaneous_error_packets; //type: uint64
        ydk::YLeaf rfc2819_ether_stats_oversized_pkts; //type: uint64
        ydk::YLeaf rfc2819_ether_stats_jabbers; //type: uint64
        ydk::YLeaf rfc2819_ether_stats_crc_align_errors; //type: uint64
        ydk::YLeaf rfc3635dot3_stats_alignment_errors; //type: uint64
        ydk::YLeaf total_bytes_transmitted; //type: uint64
        ydk::YLeaf total_good_bytes_transmitted; //type: uint64
        ydk::YLeaf total_frames_transmitted; //type: uint64
        ydk::YLeaf transmitted8021q_frames; //type: uint64
        ydk::YLeaf transmitted_total_pause_frames; //type: uint64
        ydk::YLeaf transmitted_total64_octet_frames; //type: uint64
        ydk::YLeaf transmitted_total_octet_frames_from65_to127; //type: uint64
        ydk::YLeaf transmitted_total_octet_frames_from128_to255; //type: uint64
        ydk::YLeaf transmitted_total_octet_frames_from256_to511; //type: uint64
        ydk::YLeaf transmitted_total_octet_frames_from512_to1023; //type: uint64
        ydk::YLeaf transmitted_total_octet_frames_from1024_to1518; //type: uint64
        ydk::YLeaf transmitted_total_octet_frames_from1518_to_max; //type: uint64
        ydk::YLeaf transmitted_good_frames; //type: uint64
        ydk::YLeaf transmitted_unicast_frames; //type: uint64
        ydk::YLeaf transmitted_multicast_frames; //type: uint64
        ydk::YLeaf transmitted_broadcast_frames; //type: uint64
        ydk::YLeaf buffer_underrun_packet_drops; //type: uint64
        ydk::YLeaf aborted_packet_drops; //type: uint64
        ydk::YLeaf uncounted_dropped_frames; //type: uint64
        ydk::YLeaf miscellaneous_output_errors; //type: uint64

}; // EthernetInterface::Statistics::Statistic


class EthernetInterface::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: EthernetInterface::Interfaces::Interface

        ydk::YList interface;
        
}; // EthernetInterface::Interfaces


class EthernetInterface::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf admin_state; //type: EthernetPortEnable
        ydk::YLeaf oper_state_up; //type: boolean
        class PhyInfo; //type: EthernetInterface::Interfaces::Interface::PhyInfo
        class Layer1Info; //type: EthernetInterface::Interfaces::Interface::Layer1Info
        class MacInfo; //type: EthernetInterface::Interfaces::Interface::MacInfo
        class TransportInfo; //type: EthernetInterface::Interfaces::Interface::TransportInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo> phy_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info> layer1_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo> mac_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::TransportInfo> transport_info;
        
}; // EthernetInterface::Interfaces::Interface


class EthernetInterface::Interfaces::Interface::PhyInfo : public ydk::Entity
{
    public:
        PhyInfo();
        ~PhyInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf media_type; //type: EthernetMedia
        ydk::YLeaf phy_present; //type: EtherPhyPresent
        ydk::YLeaf loopback; //type: EthernetLoopback
        ydk::YLeaf holdoff_time; //type: uint32
        class PhyDetails; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails
        class FecDetails; //type: EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails
        class ExtendedLoopback; //type: EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails> phy_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails> fec_details;
        ydk::YList extended_loopback;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails : public ydk::Entity
{
    public:
        PhyDetails();
        ~PhyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf vendor_part_number; //type: string
        ydk::YLeaf vendor_serial_number; //type: string
        ydk::YLeaf transceiver_temperature; //type: int32
        ydk::YLeaf transceiver_voltage; //type: int32
        ydk::YLeaf transceiver_tx_power; //type: int32
        ydk::YLeaf transceiver_rx_power; //type: int32
        ydk::YLeaf transceiver_tx_bias; //type: int32
        ydk::YLeaf optics_wavelength; //type: uint32
        ydk::YLeaf optics_type; //type: string
        ydk::YLeaf revision_number; //type: string
        class LaneFieldValidity; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity
        class DigOptMonAlarmThresholds; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds
        class DigOptMonAlarms; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms
        class Lane; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity> lane_field_validity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds> dig_opt_mon_alarm_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms> dig_opt_mon_alarms;
        ydk::YList lane;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity : public ydk::Entity
{
    public:
        LaneFieldValidity();
        ~LaneFieldValidity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wavelength_valid; //type: int32
        ydk::YLeaf transmit_power_valid; //type: int32
        ydk::YLeaf receive_power_valid; //type: int32
        ydk::YLeaf laser_bias_valid; //type: int32

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds : public ydk::Entity
{
    public:
        DigOptMonAlarmThresholds();
        ~DigOptMonAlarmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transceiver_temperature_alarm_high; //type: int32
        ydk::YLeaf transceiver_temperature_warning_high; //type: int32
        ydk::YLeaf transceiver_temperature_warning_low; //type: int32
        ydk::YLeaf transceiver_temperature_alarm_low; //type: int32
        ydk::YLeaf transceiver_voltage_alarm_high; //type: uint32
        ydk::YLeaf transceiver_voltage_warning_high; //type: uint32
        ydk::YLeaf transceiver_voltage_warning_low; //type: uint32
        ydk::YLeaf transceiver_voltage_alarm_low; //type: uint32
        ydk::YLeaf laser_bias_alarm_high; //type: uint32
        ydk::YLeaf laser_bias_warning_high; //type: uint32
        ydk::YLeaf laser_bias_warning_low; //type: uint32
        ydk::YLeaf laser_bias_alarm_low; //type: uint32
        ydk::YLeaf optical_transmit_power_alarm_high; //type: uint32
        ydk::YLeaf optical_transmit_power_warning_high; //type: uint32
        ydk::YLeaf optical_transmit_power_warning_low; //type: uint32
        ydk::YLeaf optical_transmit_power_alarm_low; //type: uint32
        ydk::YLeaf optical_receive_power_alarm_high; //type: uint32
        ydk::YLeaf optical_receive_power_warning_high; //type: uint32
        ydk::YLeaf optical_receive_power_warning_low; //type: uint32
        ydk::YLeaf optical_receive_power_alarm_low; //type: uint32
        class FieldValidity; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity> field_validity;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity : public ydk::Entity
{
    public:
        FieldValidity();
        ~FieldValidity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf temperature_valid; //type: int32
        ydk::YLeaf voltage_valid; //type: int32
        ydk::YLeaf laser_bias_valid; //type: int32
        ydk::YLeaf transmit_power_valid; //type: int32
        ydk::YLeaf receive_power_valid; //type: int32

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms : public ydk::Entity
{
    public:
        DigOptMonAlarms();
        ~DigOptMonAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transceiver_temperature; //type: EtherDomAlarm
        ydk::YLeaf transceiver_voltage; //type: EtherDomAlarm
        ydk::YLeaf transmit_laser_power; //type: EtherDomAlarm
        ydk::YLeaf received_laser_power; //type: EtherDomAlarm
        ydk::YLeaf laser_bias_current; //type: EtherDomAlarm

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane : public ydk::Entity
{
    public:
        Lane();
        ~Lane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf center_wavelength; //type: uint32
        ydk::YLeaf transmit_laser_power; //type: int32
        ydk::YLeaf received_laser_power; //type: int32
        ydk::YLeaf laser_bias_current; //type: uint32
        ydk::YLeaf lane_id; //type: uint32
        class DigOptMonAlarm; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm> dig_opt_mon_alarm;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm : public ydk::Entity
{
    public:
        DigOptMonAlarm();
        ~DigOptMonAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_laser_power; //type: EtherDomAlarm
        ydk::YLeaf received_laser_power; //type: EtherDomAlarm
        ydk::YLeaf laser_bias_current; //type: EtherDomAlarm

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm


class EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails : public ydk::Entity
{
    public:
        FecDetails();
        ~FecDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec; //type: EthernetFec
        ydk::YLeaf corrected_codeword_count; //type: uint64
        ydk::YLeaf uncorrected_codeword_count; //type: uint64

}; // EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails


class EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback : public ydk::Entity
{
    public:
        ExtendedLoopback();
        ~ExtendedLoopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint32
        ydk::YLeaf loopback; //type: EthernetLoopback

}; // EthernetInterface::Interfaces::Interface::PhyInfo::ExtendedLoopback


class EthernetInterface::Interfaces::Interface::Layer1Info : public ydk::Entity
{
    public:
        Layer1Info();
        ~Layer1Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_state; //type: EtherLinkState
        ydk::YLeaf led_state; //type: EtherLedState
        ydk::YLeaf speed; //type: EthernetSpeed
        ydk::YLeaf duplex; //type: EthernetDuplex
        ydk::YLeaf flowcontrol; //type: EtherFlowcontrol
        ydk::YLeaf ipg; //type: EthernetIpg
        ydk::YLeaf laser_squelch_enabled; //type: boolean
        ydk::YLeaf bandwidth_utilization; //type: uint32
        ydk::YLeaf bandwidth; //type: uint64
        class Autoneg; //type: EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg
        class CurrentAlarms; //type: EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms
        class PreviousAlarms; //type: EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms
        class ErrorCounts; //type: EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts
        class BerMonitoring; //type: EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring
        class OpdMonitoring; //type: EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring
        class PfcInfo; //type: EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg> autoneg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms> current_alarms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms> previous_alarms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts> error_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring> ber_monitoring;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring> opd_monitoring;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo> pfc_info;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info


class EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg : public ydk::Entity
{
    public:
        Autoneg();
        ~Autoneg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autoneg_enabled; //type: int32
        ydk::YLeaf mask; //type: uint32
        ydk::YLeaf speed; //type: EthernetSpeed
        ydk::YLeaf duplex; //type: EthernetDuplex
        ydk::YLeaf flowcontrol; //type: EtherFlowcontrol
        ydk::YLeaf config_override; //type: int32
        ydk::YLeaf fec; //type: EthernetFec

}; // EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg


class EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms : public ydk::Entity
{
    public:
        CurrentAlarms();
        ~CurrentAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_loss_of_signal_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf pcs_loss_of_block_lock_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf local_fault_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf remote_fault_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf sd_ber_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf sf_ber_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf loss_of_synchronization_data_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf hi_ber_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf squelch_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf rx_opd_alarm; //type: EthCtrlrAlarmState

}; // EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms


class EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms : public ydk::Entity
{
    public:
        PreviousAlarms();
        ~PreviousAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_loss_of_signal_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf pcs_loss_of_block_lock_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf local_fault_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf remote_fault_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf sd_ber_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf sf_ber_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf loss_of_synchronization_data_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf hi_ber_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf squelch_alarm; //type: EthCtrlrAlarmState
        ydk::YLeaf rx_opd_alarm; //type: EthCtrlrAlarmState

}; // EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms


class EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts : public ydk::Entity
{
    public:
        ErrorCounts();
        ~ErrorCounts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_header_errors; //type: uint64
        ydk::YLeaf pcsbip_errors; //type: uint64

}; // EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts


class EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring : public ydk::Entity
{
    public:
        BerMonitoring();
        ~BerMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: int32
        class Settings; //type: EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings
        class State; //type: EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings> settings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State> state;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring


class EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings : public ydk::Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_degrade_threshold; //type: uint32
        ydk::YLeaf signal_degrade_alarm; //type: int32
        ydk::YLeaf signal_fail_threshold; //type: uint32
        ydk::YLeaf signal_fail_alarm; //type: int32
        ydk::YLeaf signal_remote_fault; //type: int32

}; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings


class EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sd_current_ber; //type: uint32
        ydk::YLeaf sf_current_ber; //type: uint32

}; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::State


class EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring : public ydk::Entity
{
    public:
        OpdMonitoring();
        ~OpdMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: int32
        class Settings; //type: EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings> settings;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring


class EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings : public ydk::Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received_optical_power_degrade_threshold_set; //type: int32
        ydk::YLeaf received_optical_power_degrade_threshold; //type: int32

}; // EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings


class EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo : public ydk::Entity
{
    public:
        PfcInfo();
        ~PfcInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_flowcontrol; //type: EtherPfc
        ydk::YLeaf priority_enabled_bitmap; //type: uint8
        ydk::YLeafList rx_frame; //type: list of  uint64
        ydk::YLeafList tx_frame; //type: list of  uint64

}; // EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo


class EthernetInterface::Interfaces::Interface::MacInfo : public ydk::Entity
{
    public:
        MacInfo();
        ~MacInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf mru; //type: uint32
        ydk::YLeaf burned_in_mac_address; //type: string
        ydk::YLeaf operational_mac_address; //type: string
        class UnicastMacFilters; //type: EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters
        class MulticastMacFilters; //type: EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters> unicast_mac_filters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters> multicast_mac_filters;
        
}; // EthernetInterface::Interfaces::Interface::MacInfo


class EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters : public ydk::Entity
{
    public:
        UnicastMacFilters();
        ~UnicastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList unicast_mac_address; //type: list of  string

}; // EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters


class EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters : public ydk::Entity
{
    public:
        MulticastMacFilters();
        ~MulticastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_promiscuous; //type: boolean
        class MulticastMacAddress; //type: EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress

        ydk::YList multicast_mac_address;
        
}; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters


class EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress : public ydk::Entity
{
    public:
        MulticastMacAddress();
        ~MulticastMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mask; //type: string

}; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress


class EthernetInterface::Interfaces::Interface::TransportInfo : public ydk::Entity
{
    public:
        TransportInfo();
        ~TransportInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maintenance_mode_enabled; //type: boolean
        ydk::YLeaf ains_status; //type: EtherAinsStatus
        ydk::YLeaf total_duration; //type: uint32
        ydk::YLeaf remaining_duration; //type: uint32

}; // EthernetInterface::Interfaces::Interface::TransportInfo


class EthernetInterface::Berts : public ydk::Entity
{
    public:
        Berts();
        ~Berts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bert; //type: EthernetInterface::Berts::Bert

        ydk::YList bert;
        
}; // EthernetInterface::Berts


class EthernetInterface::Berts::Bert : public ydk::Entity
{
    public:
        Bert();
        ~Bert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf time_left; //type: uint32
        ydk::YLeaf port_bert_interval; //type: uint32
        class BertStatus; //type: EthernetInterface::Berts::Bert::BertStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert::BertStatus> bert_status;
        
}; // EthernetInterface::Berts::Bert


class EthernetInterface::Berts::Bert::BertStatus : public ydk::Entity
{
    public:
        BertStatus();
        ~BertStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bert_state_enabled; //type: boolean
        ydk::YLeaf data_availability; //type: uint32
        ydk::YLeaf receive_count; //type: uint64
        ydk::YLeaf transmit_count; //type: uint64
        ydk::YLeaf receive_errors; //type: uint64
        ydk::YLeaf error_type; //type: EthernetBertErrCnt
        ydk::YLeaf test_pattern; //type: EthernetBertPattern
        ydk::YLeaf device_under_test; //type: EthernetDev
        ydk::YLeaf interface_device; //type: EthernetDevIf

}; // EthernetInterface::Berts::Bert::BertStatus

class EtherLinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_undefined;
        static const ydk::Enum::YLeaf unknown_state;
        static const ydk::Enum::YLeaf available;
        static const ydk::Enum::YLeaf not_available;
        static const ydk::Enum::YLeaf remote_fault;
        static const ydk::Enum::YLeaf invalid_signal;
        static const ydk::Enum::YLeaf remote_jabber;
        static const ydk::Enum::YLeaf link_loss;
        static const ydk::Enum::YLeaf remote_test;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf auto_neg_error;
        static const ydk::Enum::YLeaf pmd_link_fault;
        static const ydk::Enum::YLeaf frame_loss;
        static const ydk::Enum::YLeaf signal_loss;
        static const ydk::Enum::YLeaf link_fault;
        static const ydk::Enum::YLeaf excessive_ber;
        static const ydk::Enum::YLeaf dxs_link_fault;
        static const ydk::Enum::YLeaf pxs_link_fault;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf phy_not_present;
        static const ydk::Enum::YLeaf no_optic_license;
        static const ydk::Enum::YLeaf unsupported_module;
        static const ydk::Enum::YLeaf dwdm_laser_shut;
        static const ydk::Enum::YLeaf wanphy_laser_shut;
        static const ydk::Enum::YLeaf incompatible_config;
        static const ydk::Enum::YLeaf system_error;
        static const ydk::Enum::YLeaf wan_framing_error;
        static const ydk::Enum::YLeaf otn_framing_error;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "state-undefined") return 0;
            if (name == "unknown-state") return 1;
            if (name == "available") return 2;
            if (name == "not-available") return 3;
            if (name == "remote-fault") return 4;
            if (name == "invalid-signal") return 5;
            if (name == "remote-jabber") return 6;
            if (name == "link-loss") return 7;
            if (name == "remote-test") return 8;
            if (name == "offline") return 9;
            if (name == "auto-neg-error") return 10;
            if (name == "pmd-link-fault") return 11;
            if (name == "frame-loss") return 12;
            if (name == "signal-loss") return 13;
            if (name == "link-fault") return 14;
            if (name == "excessive-ber") return 15;
            if (name == "dxs-link-fault") return 16;
            if (name == "pxs-link-fault") return 17;
            if (name == "security") return 18;
            if (name == "phy-not-present") return 19;
            if (name == "no-optic-license") return 20;
            if (name == "unsupported-module") return 21;
            if (name == "dwdm-laser-shut") return 22;
            if (name == "wanphy-laser-shut") return 23;
            if (name == "incompatible-config") return 24;
            if (name == "system-error") return 25;
            if (name == "wan-framing-error") return 26;
            if (name == "otn-framing-error") return 27;
            if (name == "shutdown") return 28;
            return -1;
        }
};

class EthernetBertPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_test_pattern;
        static const ydk::Enum::YLeaf high_frequency;
        static const ydk::Enum::YLeaf low_frequency;
        static const ydk::Enum::YLeaf mixed_frequency;
        static const ydk::Enum::YLeaf continuous_random;
        static const ydk::Enum::YLeaf continuous_jitter;
        static const ydk::Enum::YLeaf long_continuous_random;
        static const ydk::Enum::YLeaf short_continuous_random;
        static const ydk::Enum::YLeaf pseudorandom_seed_a;
        static const ydk::Enum::YLeaf pseudorandom_seed_b;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf square_wave;
        static const ydk::Enum::YLeaf pseudorandom;
        static const ydk::Enum::YLeaf ethernet_bert_pattern_types;

        static int get_enum_value(const std::string & name) {
            if (name == "no-test-pattern") return 0;
            if (name == "high-frequency") return 1;
            if (name == "low-frequency") return 2;
            if (name == "mixed-frequency") return 3;
            if (name == "continuous-random") return 4;
            if (name == "continuous-jitter") return 5;
            if (name == "long-continuous-random") return 6;
            if (name == "short-continuous-random") return 7;
            if (name == "pseudorandom-seed-a") return 8;
            if (name == "pseudorandom-seed-b") return 9;
            if (name == "prbs31") return 10;
            if (name == "square-wave") return 11;
            if (name == "pseudorandom") return 12;
            if (name == "ethernet-bert-pattern-types") return 13;
            return -1;
        }
};

class EthernetPortEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf rx_enabled;
        static const ydk::Enum::YLeaf tx_enabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "rx-enabled") return 1;
            if (name == "tx-enabled") return 2;
            if (name == "enabled") return 3;
            return -1;
        }
};

class EthCtrlrAlarmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alarm_not_supported;
        static const ydk::Enum::YLeaf alarm_set;
        static const ydk::Enum::YLeaf alarm_not_set;

        static int get_enum_value(const std::string & name) {
            if (name == "alarm-not-supported") return 0;
            if (name == "alarm-set") return 1;
            if (name == "alarm-not-set") return 2;
            return -1;
        }
};

class EthernetDev : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_device;
        static const ydk::Enum::YLeaf pma_pmd;
        static const ydk::Enum::YLeaf wis;
        static const ydk::Enum::YLeaf pcs;
        static const ydk::Enum::YLeaf phy_xs;
        static const ydk::Enum::YLeaf dte_xs;
        static const ydk::Enum::YLeaf ethernet_num_dev;

        static int get_enum_value(const std::string & name) {
            if (name == "no-device") return 0;
            if (name == "pma-pmd") return 1;
            if (name == "wis") return 2;
            if (name == "pcs") return 3;
            if (name == "phy-xs") return 4;
            if (name == "dte-xs") return 5;
            if (name == "ethernet-num-dev") return 6;
            return -1;
        }
};

class EtherPhyPresent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf phy_not_present;
        static const ydk::Enum::YLeaf phy_present;
        static const ydk::Enum::YLeaf no_information;

        static int get_enum_value(const std::string & name) {
            if (name == "phy-not-present") return 0;
            if (name == "phy-present") return 1;
            if (name == "no-information") return 2;
            return -1;
        }
};

class EthernetDevIf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_interface;
        static const ydk::Enum::YLeaf xgmii;
        static const ydk::Enum::YLeaf xaui;
        static const ydk::Enum::YLeaf ethernet_num_dev_if;

        static int get_enum_value(const std::string & name) {
            if (name == "no-interface") return 0;
            if (name == "xgmii") return 1;
            if (name == "xaui") return 2;
            if (name == "ethernet-num-dev-if") return 3;
            return -1;
        }
};

class EtherFlowcontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_flowcontrol;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf bidirectional;

        static int get_enum_value(const std::string & name) {
            if (name == "no-flowcontrol") return 0;
            if (name == "egress") return 1;
            if (name == "ingress") return 2;
            if (name == "bidirectional") return 3;
            return -1;
        }
};

class EtherDomAlarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_information;
        static const ydk::Enum::YLeaf alarm_high;
        static const ydk::Enum::YLeaf warning_high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf warning_low;
        static const ydk::Enum::YLeaf alarm_low;

        static int get_enum_value(const std::string & name) {
            if (name == "no-information") return 0;
            if (name == "alarm-high") return 1;
            if (name == "warning-high") return 2;
            if (name == "normal") return 3;
            if (name == "warning-low") return 4;
            if (name == "alarm-low") return 5;
            return -1;
        }
};

class EtherPfc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_pfc;
        static const ydk::Enum::YLeaf on;

        static int get_enum_value(const std::string & name) {
            if (name == "no-pfc") return 0;
            if (name == "on") return 1;
            return -1;
        }
};

class EthernetBertErrCnt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_count_type;
        static const ydk::Enum::YLeaf bit_error_count;
        static const ydk::Enum::YLeaf frame_error_count;
        static const ydk::Enum::YLeaf block_error_count;
        static const ydk::Enum::YLeaf ethernet_bert_err_cnt_types;

        static int get_enum_value(const std::string & name) {
            if (name == "no-count-type") return 0;
            if (name == "bit-error-count") return 1;
            if (name == "frame-error-count") return 2;
            if (name == "block-error-count") return 3;
            if (name == "ethernet-bert-err-cnt-types") return 4;
            return -1;
        }
};

class EthernetDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet_duplex_invalid;
        static const ydk::Enum::YLeaf half_duplex;
        static const ydk::Enum::YLeaf full_duplex;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet-duplex-invalid") return 0;
            if (name == "half-duplex") return 1;
            if (name == "full-duplex") return 2;
            return -1;
        }
};

class EthernetIpg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf non_standard;

        static int get_enum_value(const std::string & name) {
            if (name == "standard") return 0;
            if (name == "non-standard") return 1;
            return -1;
        }
};

class EthernetSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet_speed_invalid;
        static const ydk::Enum::YLeaf ten_mbps;
        static const ydk::Enum::YLeaf hundred_mbps;
        static const ydk::Enum::YLeaf one_gbps;
        static const ydk::Enum::YLeaf ten_gbps;
        static const ydk::Enum::YLeaf twenty_five_gbps;
        static const ydk::Enum::YLeaf forty_gbps;
        static const ydk::Enum::YLeaf fifty_gbps;
        static const ydk::Enum::YLeaf hundred_gbps;
        static const ydk::Enum::YLeaf two_hundred_gbps;
        static const ydk::Enum::YLeaf four_hundred_gbps;
        static const ydk::Enum::YLeaf ethernet_speed_types_count;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet-speed-invalid") return 0;
            if (name == "ten-mbps") return 1;
            if (name == "hundred-mbps") return 2;
            if (name == "one-gbps") return 3;
            if (name == "ten-gbps") return 4;
            if (name == "twenty-five-gbps") return 5;
            if (name == "forty-gbps") return 6;
            if (name == "fifty-gbps") return 7;
            if (name == "hundred-gbps") return 8;
            if (name == "two-hundred-gbps") return 9;
            if (name == "four-hundred-gbps") return 10;
            if (name == "ethernet-speed-types-count") return 11;
            return -1;
        }
};

class EtherLedState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf led_state_unknown;
        static const ydk::Enum::YLeaf led_off;
        static const ydk::Enum::YLeaf green_on;
        static const ydk::Enum::YLeaf green_flashing;
        static const ydk::Enum::YLeaf yellow_on;
        static const ydk::Enum::YLeaf yellow_flashing;
        static const ydk::Enum::YLeaf red_on;
        static const ydk::Enum::YLeaf red_flashing;

        static int get_enum_value(const std::string & name) {
            if (name == "led-state-unknown") return 0;
            if (name == "led-off") return 1;
            if (name == "green-on") return 2;
            if (name == "green-flashing") return 3;
            if (name == "yellow-on") return 4;
            if (name == "yellow-flashing") return 5;
            if (name == "red-on") return 6;
            if (name == "red-flashing") return 7;
            return -1;
        }
};

class EthernetFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf base_r;

        static int get_enum_value(const std::string & name) {
            if (name == "not-configured") return 0;
            if (name == "standard") return 1;
            if (name == "disabled") return 2;
            if (name == "base-r") return 3;
            return -1;
        }
};

class EthernetMedia : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet_other;
        static const ydk::Enum::YLeaf ethernet_unknown;
        static const ydk::Enum::YLeaf ethernet_aui;
        static const ydk::Enum::YLeaf ethernet_10base5;
        static const ydk::Enum::YLeaf ethernet_foirl;
        static const ydk::Enum::YLeaf ethernet_10base2;
        static const ydk::Enum::YLeaf ethernet_10broad36;
        static const ydk::Enum::YLeaf ethernet_10base;
        static const ydk::Enum::YLeaf ethernet_10base_thd;
        static const ydk::Enum::YLeaf ethernet_10base_tfd;
        static const ydk::Enum::YLeaf ethernet_10base_fp;
        static const ydk::Enum::YLeaf ethernet_10base_fb;
        static const ydk::Enum::YLeaf ethernet_10base_fl;
        static const ydk::Enum::YLeaf ethernet_10base_flhd;
        static const ydk::Enum::YLeaf ethernet_10base_flfd;
        static const ydk::Enum::YLeaf ethernet_100base_t4;
        static const ydk::Enum::YLeaf ethernet_100base_tx;
        static const ydk::Enum::YLeaf ethernet_100base_txhd;
        static const ydk::Enum::YLeaf ethernet_100base_txfd;
        static const ydk::Enum::YLeaf ethernet_100base_fx;
        static const ydk::Enum::YLeaf ethernet_100base_fxhd;
        static const ydk::Enum::YLeaf ethernet_100base_fxfd;
        static const ydk::Enum::YLeaf ethernet_100base_ex;
        static const ydk::Enum::YLeaf ethernet_100base_exhd;
        static const ydk::Enum::YLeaf ethernet_100base_exfd;
        static const ydk::Enum::YLeaf ethernet_100base_t2;
        static const ydk::Enum::YLeaf ethernet_100base_t2hd;
        static const ydk::Enum::YLeaf ethernet_100base_t2fd;
        static const ydk::Enum::YLeaf ethernet_1000base_x;
        static const ydk::Enum::YLeaf ethernet_1000base_xhd;
        static const ydk::Enum::YLeaf ethernet_1000base_xfd;
        static const ydk::Enum::YLeaf ethernet_1000base_lx;
        static const ydk::Enum::YLeaf ethernet_1000base_lxhd;
        static const ydk::Enum::YLeaf ethernet_1000base_lxfd;
        static const ydk::Enum::YLeaf ethernet_1000base_sx;
        static const ydk::Enum::YLeaf ethernet_1000base_sxhd;
        static const ydk::Enum::YLeaf ethernet_1000base_sxfd;
        static const ydk::Enum::YLeaf ethernet_1000base_cx;
        static const ydk::Enum::YLeaf ethernet_1000base_cxhd;
        static const ydk::Enum::YLeaf ethernet_1000base_cxfd;
        static const ydk::Enum::YLeaf ethernet_1000base;
        static const ydk::Enum::YLeaf ethernet_1000base_thd;
        static const ydk::Enum::YLeaf ethernet_1000base_tfd;
        static const ydk::Enum::YLeaf ethernet_10gbase_x;
        static const ydk::Enum::YLeaf ethernet_10gbase_lx4;
        static const ydk::Enum::YLeaf ethernet_10gbase_r;
        static const ydk::Enum::YLeaf ethernet_10gbase_er;
        static const ydk::Enum::YLeaf ethernet_10gbase_lr;
        static const ydk::Enum::YLeaf ethernet_10gbase_sr;
        static const ydk::Enum::YLeaf ethernet_10gbase_w;
        static const ydk::Enum::YLeaf ethernet_10gbase_ew;
        static const ydk::Enum::YLeaf ethernet_10gbase_lw;
        static const ydk::Enum::YLeaf ethernet_10gbase_sw;
        static const ydk::Enum::YLeaf ethernet_1000base_zx;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1470;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1490;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1510;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1530;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1550;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1570;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1590;
        static const ydk::Enum::YLeaf ethernet_1000base_cwdm_1610;
        static const ydk::Enum::YLeaf ethernet_10gbase_zr;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm;
        static const ydk::Enum::YLeaf ethernet_100gbase_lr4;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1533;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1537;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1541;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1545;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1549;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1553;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1557;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1561;
        static const ydk::Enum::YLeaf ethernet_40gbase_lr4;
        static const ydk::Enum::YLeaf ethernet_40gbase_er4;
        static const ydk::Enum::YLeaf ethernet_100gbase_er4;
        static const ydk::Enum::YLeaf ethernet_1000base_ex;
        static const ydk::Enum::YLeaf ethernet_1000base_bx10_d;
        static const ydk::Enum::YLeaf ethernet_1000base_bx10_u;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1561_42;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1560_61;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1559_79;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1558_98;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1558_17;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1557_36;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1556_55;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1555_75;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1554_94;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1554_13;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1553_33;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1552_52;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1551_72;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1550_92;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1550_12;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1549_32;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1548_51;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1547_72;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1546_92;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1546_12;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1545_32;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1544_53;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1543_73;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1542_94;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1542_14;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1541_35;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1540_56;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1539_77;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1538_98;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1538_19;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1537_40;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1536_61;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1535_82;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1535_04;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1534_25;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1533_47;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1532_68;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1531_90;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1531_12;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_1530_33;
        static const ydk::Enum::YLeaf ethernet_1000base_dwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1561_42;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1560_61;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1559_79;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1558_98;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1558_17;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1557_36;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1556_55;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1555_75;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1554_94;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1554_13;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1553_33;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1552_52;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1551_72;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1550_92;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1550_12;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1549_32;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1548_51;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1547_72;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1546_92;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1546_12;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1545_32;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1544_53;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1543_73;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1542_94;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1542_14;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1541_35;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1540_56;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1539_77;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1538_98;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1538_19;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1537_40;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1536_61;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1535_82;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1535_04;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1534_25;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1533_47;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1532_68;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1531_90;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1531_12;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_1530_33;
        static const ydk::Enum::YLeaf ethernet_10gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1561_42;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1560_61;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1559_79;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1558_98;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1558_17;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1557_36;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1556_55;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1555_75;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1554_94;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1554_13;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1553_33;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1552_52;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1551_72;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1550_92;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1550_12;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1549_32;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1548_51;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1547_72;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1546_92;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1546_12;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1545_32;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1544_53;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1543_73;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1542_94;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1542_14;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1541_35;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1540_56;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1539_77;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1538_98;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1538_19;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1537_40;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1536_61;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1535_82;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1535_04;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1534_25;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1533_47;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1532_68;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1531_90;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1531_12;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_1530_33;
        static const ydk::Enum::YLeaf ethernet_40gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1561_42;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1560_61;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1559_79;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1558_98;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1558_17;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1557_36;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1556_55;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1555_75;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1554_94;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1554_13;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1553_33;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1552_52;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1551_72;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1550_92;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1550_12;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1549_32;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1548_51;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1547_72;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1546_92;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1546_12;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1545_32;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1544_53;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1543_73;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1542_94;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1542_14;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1541_35;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1540_56;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1539_77;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1538_98;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1538_19;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1537_40;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1536_61;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1535_82;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1535_04;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1534_25;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1533_47;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1532_68;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1531_90;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1531_12;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_1530_33;
        static const ydk::Enum::YLeaf ethernet_100gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_40gbase_kr4;
        static const ydk::Enum::YLeaf ethernet_40gbase_cr4;
        static const ydk::Enum::YLeaf ethernet_40gbase_sr4;
        static const ydk::Enum::YLeaf ethernet_40gbase_fr;
        static const ydk::Enum::YLeaf ethernet_100gbase_cr10;
        static const ydk::Enum::YLeaf ethernet_100gbase_sr10;
        static const ydk::Enum::YLeaf ethernet_40gbase_csr4;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1470;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1490;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1510;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1530;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1550;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1570;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1590;
        static const ydk::Enum::YLeaf ethernet_10gbase_cwdm_1610;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1470;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1490;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1510;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1530;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1550;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1570;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1590;
        static const ydk::Enum::YLeaf ethernet_40gbase_cwdm_1610;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1470;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1490;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1510;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1530;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1550;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1570;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1590;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm_1610;
        static const ydk::Enum::YLeaf ethernet_40gbase_elpb;
        static const ydk::Enum::YLeaf ethernet_100gbase_elpb;
        static const ydk::Enum::YLeaf ethernet_100gbase_lr10;
        static const ydk::Enum::YLeaf ethernet_40gbase;
        static const ydk::Enum::YLeaf ethernet_100gbase_kp4;
        static const ydk::Enum::YLeaf ethernet_100gbase_kr4;
        static const ydk::Enum::YLeaf ethernet_10gbase_lrm;
        static const ydk::Enum::YLeaf ethernet_10gbase_cx4;
        static const ydk::Enum::YLeaf ethernet_10gbase;
        static const ydk::Enum::YLeaf ethernet_10gbase_kx4;
        static const ydk::Enum::YLeaf ethernet_10gbase_kr;
        static const ydk::Enum::YLeaf ethernet_10gbase_pr;
        static const ydk::Enum::YLeaf ethernet_100base_lx;
        static const ydk::Enum::YLeaf ethernet_100base_zx;
        static const ydk::Enum::YLeaf ethernet_1000base_bx_d;
        static const ydk::Enum::YLeaf ethernet_1000base_bx_u;
        static const ydk::Enum::YLeaf ethernet_1000base_bx20_d;
        static const ydk::Enum::YLeaf ethernet_1000base_bx20_u;
        static const ydk::Enum::YLeaf ethernet_1000base_bx40_d;
        static const ydk::Enum::YLeaf ethernet_1000base_bx40_da;
        static const ydk::Enum::YLeaf ethernet_1000base_bx40_u;
        static const ydk::Enum::YLeaf ethernet_1000base_bx80_d;
        static const ydk::Enum::YLeaf ethernet_1000base_bx80_u;
        static const ydk::Enum::YLeaf ethernet_1000base_bx120_d;
        static const ydk::Enum::YLeaf ethernet_1000base_bx120_u;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx_d;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx_u;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx10_d;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx10_u;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx20_d;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx20_u;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx40_d;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx40_u;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx80_d;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx80_u;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx120_d;
        static const ydk::Enum::YLeaf ethernet_10gbase_bx120_u;
        static const ydk::Enum::YLeaf ethernet_1000base_dr_lx;
        static const ydk::Enum::YLeaf ethernet_100gbase_er4l;
        static const ydk::Enum::YLeaf ethernet_100gbase_sr4;
        static const ydk::Enum::YLeaf ethernet_40gbase_sr_bd;
        static const ydk::Enum::YLeaf ethernet_25gbase_cr;
        static const ydk::Enum::YLeaf ethernet_25gbase_cr_s;
        static const ydk::Enum::YLeaf ethernet_25gbase_kr;
        static const ydk::Enum::YLeaf ethernet_25gbase_kr_s;
        static const ydk::Enum::YLeaf ethernet_25gbase_r;
        static const ydk::Enum::YLeaf ethernet_25gbase_sr;
        static const ydk::Enum::YLeaf ethernet_25gbase_dwdm;
        static const ydk::Enum::YLeaf ethernet_25gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_25gbase_cwdm;
        static const ydk::Enum::YLeaf ethernet_25gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf ethernet_100gbase_psm4;
        static const ydk::Enum::YLeaf ethernet_100gbase_er10;
        static const ydk::Enum::YLeaf ethernet_100gbase_er10l;
        static const ydk::Enum::YLeaf ethernet_100gbase_acc;
        static const ydk::Enum::YLeaf ethernet_100gbase_aoc;
        static const ydk::Enum::YLeaf ethernet_100gbase_cwdm4;
        static const ydk::Enum::YLeaf ethernet_40gbase_psm4;
        static const ydk::Enum::YLeaf ethernet_100gbase_cr4;
        static const ydk::Enum::YLeaf ethernet_100gbase_act_loop;
        static const ydk::Enum::YLeaf ethernet_100gbase_pas_loop;
        static const ydk::Enum::YLeaf ethernet_50gbase_cr2;
        static const ydk::Enum::YLeaf ethernet_50gbase_sr2;
        static const ydk::Enum::YLeaf ethernet_50gbase_psm2;
        static const ydk::Enum::YLeaf ethernet_200gbase_cr4;
        static const ydk::Enum::YLeaf ethernet_400gbase_fr4;
        static const ydk::Enum::YLeaf ethernet_400gbase_dr4;
        static const ydk::Enum::YLeaf ethernet_400gbase_cr4;
        static const ydk::Enum::YLeaf ethernet_10gbase_cu1m;
        static const ydk::Enum::YLeaf ethernet_10gbase_cu1_5m;
        static const ydk::Enum::YLeaf ethernet_10gbase_cu2m;
        static const ydk::Enum::YLeaf ethernet_10gbase_cu2_5m;
        static const ydk::Enum::YLeaf ethernet_10gbase_cu3m;
        static const ydk::Enum::YLeaf ethernet_10gbase_cu5m;
        static const ydk::Enum::YLeaf ethernet_10gbase_acu7m;
        static const ydk::Enum::YLeaf ethernet_10gbase_acu10m;
        static const ydk::Enum::YLeaf ethernet_10gbase_aoc1m;
        static const ydk::Enum::YLeaf ethernet_10gbase_aoc2m;
        static const ydk::Enum::YLeaf ethernet_10gbase_aoc3m;
        static const ydk::Enum::YLeaf ethernet_10gbase_aoc5m;
        static const ydk::Enum::YLeaf ethernet_10gbase_aoc7m;
        static const ydk::Enum::YLeaf ethernet_10gbase_aoc10m;
        static const ydk::Enum::YLeaf ethernet_40gbase_aoc;
        static const ydk::Enum::YLeaf ethernet_4x10g_base_lr;
        static const ydk::Enum::YLeaf ethernet_40gbase_acu1m;
        static const ydk::Enum::YLeaf ethernet_40gbase_acu3m;
        static const ydk::Enum::YLeaf ethernet_40gbase_acu5m;
        static const ydk::Enum::YLeaf ethernet_40gbase_acu7m;
        static const ydk::Enum::YLeaf ethernet_40gbase_acu10m;
        static const ydk::Enum::YLeaf ethernet_25gbase_cu1m;
        static const ydk::Enum::YLeaf ethernet_25gbase_cu2m;
        static const ydk::Enum::YLeaf ethernet_25gbase_cu3m;
        static const ydk::Enum::YLeaf ethernet_25gbase_cu5m;
        static const ydk::Enum::YLeaf ethernet_100gbase_sm_sr;
        static const ydk::Enum::YLeaf ethernet_100gbase_sr_bd;
        static const ydk::Enum::YLeaf ethernet_100gbase_fr;
        static const ydk::Enum::YLeaf ethernet_base_max;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet-other") return 0;
            if (name == "ethernet-unknown") return 1;
            if (name == "ethernet-aui") return 2;
            if (name == "ethernet-10base5") return 3;
            if (name == "ethernet-foirl") return 4;
            if (name == "ethernet-10base2") return 5;
            if (name == "ethernet-10broad36") return 6;
            if (name == "ethernet-10base") return 7;
            if (name == "ethernet-10base-thd") return 8;
            if (name == "ethernet-10base-tfd") return 9;
            if (name == "ethernet-10base-fp") return 10;
            if (name == "ethernet-10base-fb") return 11;
            if (name == "ethernet-10base-fl") return 12;
            if (name == "ethernet-10base-flhd") return 13;
            if (name == "ethernet-10base-flfd") return 14;
            if (name == "ethernet-100base-t4") return 15;
            if (name == "ethernet-100base-tx") return 16;
            if (name == "ethernet-100base-txhd") return 17;
            if (name == "ethernet-100base-txfd") return 18;
            if (name == "ethernet-100base-fx") return 19;
            if (name == "ethernet-100base-fxhd") return 20;
            if (name == "ethernet-100base-fxfd") return 21;
            if (name == "ethernet-100base-ex") return 22;
            if (name == "ethernet-100base-exhd") return 23;
            if (name == "ethernet-100base-exfd") return 24;
            if (name == "ethernet-100base-t2") return 25;
            if (name == "ethernet-100base-t2hd") return 26;
            if (name == "ethernet-100base-t2fd") return 27;
            if (name == "ethernet-1000base-x") return 28;
            if (name == "ethernet-1000base-xhd") return 29;
            if (name == "ethernet-1000base-xfd") return 30;
            if (name == "ethernet-1000base-lx") return 31;
            if (name == "ethernet-1000base-lxhd") return 32;
            if (name == "ethernet-1000base-lxfd") return 33;
            if (name == "ethernet-1000base-sx") return 34;
            if (name == "ethernet-1000base-sxhd") return 35;
            if (name == "ethernet-1000base-sxfd") return 36;
            if (name == "ethernet-1000base-cx") return 37;
            if (name == "ethernet-1000base-cxhd") return 38;
            if (name == "ethernet-1000base-cxfd") return 39;
            if (name == "ethernet-1000base") return 40;
            if (name == "ethernet-1000base-thd") return 41;
            if (name == "ethernet-1000base-tfd") return 42;
            if (name == "ethernet-10gbase-x") return 43;
            if (name == "ethernet-10gbase-lx4") return 44;
            if (name == "ethernet-10gbase-r") return 45;
            if (name == "ethernet-10gbase-er") return 46;
            if (name == "ethernet-10gbase-lr") return 47;
            if (name == "ethernet-10gbase-sr") return 48;
            if (name == "ethernet-10gbase-w") return 49;
            if (name == "ethernet-10gbase-ew") return 50;
            if (name == "ethernet-10gbase-lw") return 51;
            if (name == "ethernet-10gbase-sw") return 52;
            if (name == "ethernet-1000base-zx") return 53;
            if (name == "ethernet-1000base-cwdm") return 54;
            if (name == "ethernet-1000base-cwdm-1470") return 55;
            if (name == "ethernet-1000base-cwdm-1490") return 56;
            if (name == "ethernet-1000base-cwdm-1510") return 57;
            if (name == "ethernet-1000base-cwdm-1530") return 58;
            if (name == "ethernet-1000base-cwdm-1550") return 59;
            if (name == "ethernet-1000base-cwdm-1570") return 60;
            if (name == "ethernet-1000base-cwdm-1590") return 61;
            if (name == "ethernet-1000base-cwdm-1610") return 62;
            if (name == "ethernet-10gbase-zr") return 63;
            if (name == "ethernet-10gbase-dwdm") return 64;
            if (name == "ethernet-100gbase-lr4") return 65;
            if (name == "ethernet-1000base-dwdm") return 66;
            if (name == "ethernet-1000base-dwdm-1533") return 67;
            if (name == "ethernet-1000base-dwdm-1537") return 68;
            if (name == "ethernet-1000base-dwdm-1541") return 69;
            if (name == "ethernet-1000base-dwdm-1545") return 70;
            if (name == "ethernet-1000base-dwdm-1549") return 71;
            if (name == "ethernet-1000base-dwdm-1553") return 72;
            if (name == "ethernet-1000base-dwdm-1557") return 73;
            if (name == "ethernet-1000base-dwdm-1561") return 74;
            if (name == "ethernet-40gbase-lr4") return 75;
            if (name == "ethernet-40gbase-er4") return 76;
            if (name == "ethernet-100gbase-er4") return 77;
            if (name == "ethernet-1000base-ex") return 78;
            if (name == "ethernet-1000base-bx10-d") return 79;
            if (name == "ethernet-1000base-bx10-u") return 80;
            if (name == "ethernet-1000base-dwdm-1561-42") return 81;
            if (name == "ethernet-1000base-dwdm-1560-61") return 82;
            if (name == "ethernet-1000base-dwdm-1559-79") return 83;
            if (name == "ethernet-1000base-dwdm-1558-98") return 84;
            if (name == "ethernet-1000base-dwdm-1558-17") return 85;
            if (name == "ethernet-1000base-dwdm-1557-36") return 86;
            if (name == "ethernet-1000base-dwdm-1556-55") return 87;
            if (name == "ethernet-1000base-dwdm-1555-75") return 88;
            if (name == "ethernet-1000base-dwdm-1554-94") return 89;
            if (name == "ethernet-1000base-dwdm-1554-13") return 90;
            if (name == "ethernet-1000base-dwdm-1553-33") return 91;
            if (name == "ethernet-1000base-dwdm-1552-52") return 92;
            if (name == "ethernet-1000base-dwdm-1551-72") return 93;
            if (name == "ethernet-1000base-dwdm-1550-92") return 94;
            if (name == "ethernet-1000base-dwdm-1550-12") return 95;
            if (name == "ethernet-1000base-dwdm-1549-32") return 96;
            if (name == "ethernet-1000base-dwdm-1548-51") return 97;
            if (name == "ethernet-1000base-dwdm-1547-72") return 98;
            if (name == "ethernet-1000base-dwdm-1546-92") return 99;
            if (name == "ethernet-1000base-dwdm-1546-12") return 100;
            if (name == "ethernet-1000base-dwdm-1545-32") return 101;
            if (name == "ethernet-1000base-dwdm-1544-53") return 102;
            if (name == "ethernet-1000base-dwdm-1543-73") return 103;
            if (name == "ethernet-1000base-dwdm-1542-94") return 104;
            if (name == "ethernet-1000base-dwdm-1542-14") return 105;
            if (name == "ethernet-1000base-dwdm-1541-35") return 106;
            if (name == "ethernet-1000base-dwdm-1540-56") return 107;
            if (name == "ethernet-1000base-dwdm-1539-77") return 108;
            if (name == "ethernet-1000base-dwdm-1538-98") return 109;
            if (name == "ethernet-1000base-dwdm-1538-19") return 110;
            if (name == "ethernet-1000base-dwdm-1537-40") return 111;
            if (name == "ethernet-1000base-dwdm-1536-61") return 112;
            if (name == "ethernet-1000base-dwdm-1535-82") return 113;
            if (name == "ethernet-1000base-dwdm-1535-04") return 114;
            if (name == "ethernet-1000base-dwdm-1534-25") return 115;
            if (name == "ethernet-1000base-dwdm-1533-47") return 116;
            if (name == "ethernet-1000base-dwdm-1532-68") return 117;
            if (name == "ethernet-1000base-dwdm-1531-90") return 118;
            if (name == "ethernet-1000base-dwdm-1531-12") return 119;
            if (name == "ethernet-1000base-dwdm-1530-33") return 120;
            if (name == "ethernet-1000base-dwdm-tunable") return 121;
            if (name == "ethernet-10gbase-dwdm-1561-42") return 122;
            if (name == "ethernet-10gbase-dwdm-1560-61") return 123;
            if (name == "ethernet-10gbase-dwdm-1559-79") return 124;
            if (name == "ethernet-10gbase-dwdm-1558-98") return 125;
            if (name == "ethernet-10gbase-dwdm-1558-17") return 126;
            if (name == "ethernet-10gbase-dwdm-1557-36") return 127;
            if (name == "ethernet-10gbase-dwdm-1556-55") return 128;
            if (name == "ethernet-10gbase-dwdm-1555-75") return 129;
            if (name == "ethernet-10gbase-dwdm-1554-94") return 130;
            if (name == "ethernet-10gbase-dwdm-1554-13") return 131;
            if (name == "ethernet-10gbase-dwdm-1553-33") return 132;
            if (name == "ethernet-10gbase-dwdm-1552-52") return 133;
            if (name == "ethernet-10gbase-dwdm-1551-72") return 134;
            if (name == "ethernet-10gbase-dwdm-1550-92") return 135;
            if (name == "ethernet-10gbase-dwdm-1550-12") return 136;
            if (name == "ethernet-10gbase-dwdm-1549-32") return 137;
            if (name == "ethernet-10gbase-dwdm-1548-51") return 138;
            if (name == "ethernet-10gbase-dwdm-1547-72") return 139;
            if (name == "ethernet-10gbase-dwdm-1546-92") return 140;
            if (name == "ethernet-10gbase-dwdm-1546-12") return 141;
            if (name == "ethernet-10gbase-dwdm-1545-32") return 142;
            if (name == "ethernet-10gbase-dwdm-1544-53") return 143;
            if (name == "ethernet-10gbase-dwdm-1543-73") return 144;
            if (name == "ethernet-10gbase-dwdm-1542-94") return 145;
            if (name == "ethernet-10gbase-dwdm-1542-14") return 146;
            if (name == "ethernet-10gbase-dwdm-1541-35") return 147;
            if (name == "ethernet-10gbase-dwdm-1540-56") return 148;
            if (name == "ethernet-10gbase-dwdm-1539-77") return 149;
            if (name == "ethernet-10gbase-dwdm-1538-98") return 150;
            if (name == "ethernet-10gbase-dwdm-1538-19") return 151;
            if (name == "ethernet-10gbase-dwdm-1537-40") return 152;
            if (name == "ethernet-10gbase-dwdm-1536-61") return 153;
            if (name == "ethernet-10gbase-dwdm-1535-82") return 154;
            if (name == "ethernet-10gbase-dwdm-1535-04") return 155;
            if (name == "ethernet-10gbase-dwdm-1534-25") return 156;
            if (name == "ethernet-10gbase-dwdm-1533-47") return 157;
            if (name == "ethernet-10gbase-dwdm-1532-68") return 158;
            if (name == "ethernet-10gbase-dwdm-1531-90") return 159;
            if (name == "ethernet-10gbase-dwdm-1531-12") return 160;
            if (name == "ethernet-10gbase-dwdm-1530-33") return 161;
            if (name == "ethernet-10gbase-dwdm-tunable") return 162;
            if (name == "ethernet-40gbase-dwdm-1561-42") return 163;
            if (name == "ethernet-40gbase-dwdm-1560-61") return 164;
            if (name == "ethernet-40gbase-dwdm-1559-79") return 165;
            if (name == "ethernet-40gbase-dwdm-1558-98") return 166;
            if (name == "ethernet-40gbase-dwdm-1558-17") return 167;
            if (name == "ethernet-40gbase-dwdm-1557-36") return 168;
            if (name == "ethernet-40gbase-dwdm-1556-55") return 169;
            if (name == "ethernet-40gbase-dwdm-1555-75") return 170;
            if (name == "ethernet-40gbase-dwdm-1554-94") return 171;
            if (name == "ethernet-40gbase-dwdm-1554-13") return 172;
            if (name == "ethernet-40gbase-dwdm-1553-33") return 173;
            if (name == "ethernet-40gbase-dwdm-1552-52") return 174;
            if (name == "ethernet-40gbase-dwdm-1551-72") return 175;
            if (name == "ethernet-40gbase-dwdm-1550-92") return 176;
            if (name == "ethernet-40gbase-dwdm-1550-12") return 177;
            if (name == "ethernet-40gbase-dwdm-1549-32") return 178;
            if (name == "ethernet-40gbase-dwdm-1548-51") return 179;
            if (name == "ethernet-40gbase-dwdm-1547-72") return 180;
            if (name == "ethernet-40gbase-dwdm-1546-92") return 181;
            if (name == "ethernet-40gbase-dwdm-1546-12") return 182;
            if (name == "ethernet-40gbase-dwdm-1545-32") return 183;
            if (name == "ethernet-40gbase-dwdm-1544-53") return 184;
            if (name == "ethernet-40gbase-dwdm-1543-73") return 185;
            if (name == "ethernet-40gbase-dwdm-1542-94") return 186;
            if (name == "ethernet-40gbase-dwdm-1542-14") return 187;
            if (name == "ethernet-40gbase-dwdm-1541-35") return 188;
            if (name == "ethernet-40gbase-dwdm-1540-56") return 189;
            if (name == "ethernet-40gbase-dwdm-1539-77") return 190;
            if (name == "ethernet-40gbase-dwdm-1538-98") return 191;
            if (name == "ethernet-40gbase-dwdm-1538-19") return 192;
            if (name == "ethernet-40gbase-dwdm-1537-40") return 193;
            if (name == "ethernet-40gbase-dwdm-1536-61") return 194;
            if (name == "ethernet-40gbase-dwdm-1535-82") return 195;
            if (name == "ethernet-40gbase-dwdm-1535-04") return 196;
            if (name == "ethernet-40gbase-dwdm-1534-25") return 197;
            if (name == "ethernet-40gbase-dwdm-1533-47") return 198;
            if (name == "ethernet-40gbase-dwdm-1532-68") return 199;
            if (name == "ethernet-40gbase-dwdm-1531-90") return 200;
            if (name == "ethernet-40gbase-dwdm-1531-12") return 201;
            if (name == "ethernet-40gbase-dwdm-1530-33") return 202;
            if (name == "ethernet-40gbase-dwdm-tunable") return 203;
            if (name == "ethernet-100gbase-dwdm-1561-42") return 204;
            if (name == "ethernet-100gbase-dwdm-1560-61") return 205;
            if (name == "ethernet-100gbase-dwdm-1559-79") return 206;
            if (name == "ethernet-100gbase-dwdm-1558-98") return 207;
            if (name == "ethernet-100gbase-dwdm-1558-17") return 208;
            if (name == "ethernet-100gbase-dwdm-1557-36") return 209;
            if (name == "ethernet-100gbase-dwdm-1556-55") return 210;
            if (name == "ethernet-100gbase-dwdm-1555-75") return 211;
            if (name == "ethernet-100gbase-dwdm-1554-94") return 212;
            if (name == "ethernet-100gbase-dwdm-1554-13") return 213;
            if (name == "ethernet-100gbase-dwdm-1553-33") return 214;
            if (name == "ethernet-100gbase-dwdm-1552-52") return 215;
            if (name == "ethernet-100gbase-dwdm-1551-72") return 216;
            if (name == "ethernet-100gbase-dwdm-1550-92") return 217;
            if (name == "ethernet-100gbase-dwdm-1550-12") return 218;
            if (name == "ethernet-100gbase-dwdm-1549-32") return 219;
            if (name == "ethernet-100gbase-dwdm-1548-51") return 220;
            if (name == "ethernet-100gbase-dwdm-1547-72") return 221;
            if (name == "ethernet-100gbase-dwdm-1546-92") return 222;
            if (name == "ethernet-100gbase-dwdm-1546-12") return 223;
            if (name == "ethernet-100gbase-dwdm-1545-32") return 224;
            if (name == "ethernet-100gbase-dwdm-1544-53") return 225;
            if (name == "ethernet-100gbase-dwdm-1543-73") return 226;
            if (name == "ethernet-100gbase-dwdm-1542-94") return 227;
            if (name == "ethernet-100gbase-dwdm-1542-14") return 228;
            if (name == "ethernet-100gbase-dwdm-1541-35") return 229;
            if (name == "ethernet-100gbase-dwdm-1540-56") return 230;
            if (name == "ethernet-100gbase-dwdm-1539-77") return 231;
            if (name == "ethernet-100gbase-dwdm-1538-98") return 232;
            if (name == "ethernet-100gbase-dwdm-1538-19") return 233;
            if (name == "ethernet-100gbase-dwdm-1537-40") return 234;
            if (name == "ethernet-100gbase-dwdm-1536-61") return 235;
            if (name == "ethernet-100gbase-dwdm-1535-82") return 236;
            if (name == "ethernet-100gbase-dwdm-1535-04") return 237;
            if (name == "ethernet-100gbase-dwdm-1534-25") return 238;
            if (name == "ethernet-100gbase-dwdm-1533-47") return 239;
            if (name == "ethernet-100gbase-dwdm-1532-68") return 240;
            if (name == "ethernet-100gbase-dwdm-1531-90") return 241;
            if (name == "ethernet-100gbase-dwdm-1531-12") return 242;
            if (name == "ethernet-100gbase-dwdm-1530-33") return 243;
            if (name == "ethernet-100gbase-dwdm-tunable") return 244;
            if (name == "ethernet-40gbase-kr4") return 245;
            if (name == "ethernet-40gbase-cr4") return 246;
            if (name == "ethernet-40gbase-sr4") return 247;
            if (name == "ethernet-40gbase-fr") return 248;
            if (name == "ethernet-100gbase-cr10") return 249;
            if (name == "ethernet-100gbase-sr10") return 250;
            if (name == "ethernet-40gbase-csr4") return 251;
            if (name == "ethernet-10gbase-cwdm") return 252;
            if (name == "ethernet-10gbase-cwdm-tunable") return 253;
            if (name == "ethernet-10gbase-cwdm-1470") return 254;
            if (name == "ethernet-10gbase-cwdm-1490") return 255;
            if (name == "ethernet-10gbase-cwdm-1510") return 256;
            if (name == "ethernet-10gbase-cwdm-1530") return 257;
            if (name == "ethernet-10gbase-cwdm-1550") return 258;
            if (name == "ethernet-10gbase-cwdm-1570") return 259;
            if (name == "ethernet-10gbase-cwdm-1590") return 260;
            if (name == "ethernet-10gbase-cwdm-1610") return 261;
            if (name == "ethernet-40gbase-cwdm") return 262;
            if (name == "ethernet-40gbase-cwdm-tunable") return 263;
            if (name == "ethernet-40gbase-cwdm-1470") return 264;
            if (name == "ethernet-40gbase-cwdm-1490") return 265;
            if (name == "ethernet-40gbase-cwdm-1510") return 266;
            if (name == "ethernet-40gbase-cwdm-1530") return 267;
            if (name == "ethernet-40gbase-cwdm-1550") return 268;
            if (name == "ethernet-40gbase-cwdm-1570") return 269;
            if (name == "ethernet-40gbase-cwdm-1590") return 270;
            if (name == "ethernet-40gbase-cwdm-1610") return 271;
            if (name == "ethernet-100gbase-cwdm") return 272;
            if (name == "ethernet-100gbase-cwdm-tunable") return 273;
            if (name == "ethernet-100gbase-cwdm-1470") return 274;
            if (name == "ethernet-100gbase-cwdm-1490") return 275;
            if (name == "ethernet-100gbase-cwdm-1510") return 276;
            if (name == "ethernet-100gbase-cwdm-1530") return 277;
            if (name == "ethernet-100gbase-cwdm-1550") return 278;
            if (name == "ethernet-100gbase-cwdm-1570") return 279;
            if (name == "ethernet-100gbase-cwdm-1590") return 280;
            if (name == "ethernet-100gbase-cwdm-1610") return 281;
            if (name == "ethernet-40gbase-elpb") return 282;
            if (name == "ethernet-100gbase-elpb") return 283;
            if (name == "ethernet-100gbase-lr10") return 284;
            if (name == "ethernet-40gbase") return 285;
            if (name == "ethernet-100gbase-kp4") return 286;
            if (name == "ethernet-100gbase-kr4") return 287;
            if (name == "ethernet-10gbase-lrm") return 288;
            if (name == "ethernet-10gbase-cx4") return 289;
            if (name == "ethernet-10gbase") return 290;
            if (name == "ethernet-10gbase-kx4") return 291;
            if (name == "ethernet-10gbase-kr") return 292;
            if (name == "ethernet-10gbase-pr") return 293;
            if (name == "ethernet-100base-lx") return 294;
            if (name == "ethernet-100base-zx") return 295;
            if (name == "ethernet-1000base-bx-d") return 296;
            if (name == "ethernet-1000base-bx-u") return 297;
            if (name == "ethernet-1000base-bx20-d") return 298;
            if (name == "ethernet-1000base-bx20-u") return 299;
            if (name == "ethernet-1000base-bx40-d") return 300;
            if (name == "ethernet-1000base-bx40-da") return 301;
            if (name == "ethernet-1000base-bx40-u") return 302;
            if (name == "ethernet-1000base-bx80-d") return 303;
            if (name == "ethernet-1000base-bx80-u") return 304;
            if (name == "ethernet-1000base-bx120-d") return 305;
            if (name == "ethernet-1000base-bx120-u") return 306;
            if (name == "ethernet-10gbase-bx-d") return 307;
            if (name == "ethernet-10gbase-bx-u") return 308;
            if (name == "ethernet-10gbase-bx10-d") return 309;
            if (name == "ethernet-10gbase-bx10-u") return 310;
            if (name == "ethernet-10gbase-bx20-d") return 311;
            if (name == "ethernet-10gbase-bx20-u") return 312;
            if (name == "ethernet-10gbase-bx40-d") return 313;
            if (name == "ethernet-10gbase-bx40-u") return 314;
            if (name == "ethernet-10gbase-bx80-d") return 315;
            if (name == "ethernet-10gbase-bx80-u") return 316;
            if (name == "ethernet-10gbase-bx120-d") return 317;
            if (name == "ethernet-10gbase-bx120-u") return 318;
            if (name == "ethernet-1000base-dr-lx") return 319;
            if (name == "ethernet-100gbase-er4l") return 320;
            if (name == "ethernet-100gbase-sr4") return 321;
            if (name == "ethernet-40gbase-sr-bd") return 322;
            if (name == "ethernet-25gbase-cr") return 323;
            if (name == "ethernet-25gbase-cr-s") return 324;
            if (name == "ethernet-25gbase-kr") return 325;
            if (name == "ethernet-25gbase-kr-s") return 326;
            if (name == "ethernet-25gbase-r") return 327;
            if (name == "ethernet-25gbase-sr") return 328;
            if (name == "ethernet-25gbase-dwdm") return 329;
            if (name == "ethernet-25gbase-dwdm-tunable") return 330;
            if (name == "ethernet-25gbase-cwdm") return 331;
            if (name == "ethernet-25gbase-cwdm-tunable") return 332;
            if (name == "ethernet-100gbase-psm4") return 333;
            if (name == "ethernet-100gbase-er10") return 334;
            if (name == "ethernet-100gbase-er10l") return 335;
            if (name == "ethernet-100gbase-acc") return 336;
            if (name == "ethernet-100gbase-aoc") return 337;
            if (name == "ethernet-100gbase-cwdm4") return 338;
            if (name == "ethernet-40gbase-psm4") return 339;
            if (name == "ethernet-100gbase-cr4") return 340;
            if (name == "ethernet-100gbase-act-loop") return 341;
            if (name == "ethernet-100gbase-pas-loop") return 342;
            if (name == "ethernet-50gbase-cr2") return 343;
            if (name == "ethernet-50gbase-sr2") return 344;
            if (name == "ethernet-50gbase-psm2") return 345;
            if (name == "ethernet-200gbase-cr4") return 346;
            if (name == "ethernet-400gbase-fr4") return 347;
            if (name == "ethernet-400gbase-dr4") return 348;
            if (name == "ethernet-400gbase-cr4") return 349;
            if (name == "ethernet-10gbase-cu1m") return 350;
            if (name == "ethernet-10gbase-cu1-5m") return 351;
            if (name == "ethernet-10gbase-cu2m") return 352;
            if (name == "ethernet-10gbase-cu2-5m") return 353;
            if (name == "ethernet-10gbase-cu3m") return 354;
            if (name == "ethernet-10gbase-cu5m") return 355;
            if (name == "ethernet-10gbase-acu7m") return 356;
            if (name == "ethernet-10gbase-acu10m") return 357;
            if (name == "ethernet-10gbase-aoc1m") return 358;
            if (name == "ethernet-10gbase-aoc2m") return 359;
            if (name == "ethernet-10gbase-aoc3m") return 360;
            if (name == "ethernet-10gbase-aoc5m") return 361;
            if (name == "ethernet-10gbase-aoc7m") return 362;
            if (name == "ethernet-10gbase-aoc10m") return 363;
            if (name == "ethernet-40gbase-aoc") return 364;
            if (name == "ethernet-4x10g-base-lr") return 365;
            if (name == "ethernet-40gbase-acu1m") return 366;
            if (name == "ethernet-40gbase-acu3m") return 367;
            if (name == "ethernet-40gbase-acu5m") return 368;
            if (name == "ethernet-40gbase-acu7m") return 369;
            if (name == "ethernet-40gbase-acu10m") return 370;
            if (name == "ethernet-25gbase-cu1m") return 371;
            if (name == "ethernet-25gbase-cu2m") return 372;
            if (name == "ethernet-25gbase-cu3m") return 373;
            if (name == "ethernet-25gbase-cu5m") return 374;
            if (name == "ethernet-100gbase-sm-sr") return 375;
            if (name == "ethernet-100gbase-sr-bd") return 376;
            if (name == "ethernet-100gbase-fr") return 377;
            if (name == "ethernet-base-max") return 378;
            return -1;
        }
};

class EtherAinsStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ains_soak_status_none;
        static const ydk::Enum::YLeaf ains_soak_status_pending;
        static const ydk::Enum::YLeaf ains_soak_status_running;

        static int get_enum_value(const std::string & name) {
            if (name == "ains-soak-status-none") return 0;
            if (name == "ains-soak-status-pending") return 1;
            if (name == "ains-soak-status-running") return 2;
            return -1;
        }
};

class EthernetLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_loopback;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "no-loopback") return 0;
            if (name == "internal") return 1;
            if (name == "line") return 2;
            if (name == "external") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_ */

