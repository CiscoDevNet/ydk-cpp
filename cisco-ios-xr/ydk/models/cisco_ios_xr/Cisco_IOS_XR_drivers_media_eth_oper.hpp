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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts> berts;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics> statistics;
        
}; // EthernetInterface


class EthernetInterface::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statistic; //type: EthernetInterface::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics::Statistic> > statistic;
        
}; // EthernetInterface::Statistics


class EthernetInterface::Statistics::Statistic : public ydk::Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: EthernetInterface::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface> > interface;
        
}; // EthernetInterface::Interfaces


class EthernetInterface::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf admin_state; //type: EthernetPortEnable
        ydk::YLeaf oper_state_up; //type: boolean
        class PhyInfo; //type: EthernetInterface::Interfaces::Interface::PhyInfo
        class Layer1Info; //type: EthernetInterface::Interfaces::Interface::Layer1Info
        class MacInfo; //type: EthernetInterface::Interfaces::Interface::MacInfo
        class TransportInfo; //type: EthernetInterface::Interfaces::Interface::TransportInfo

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info> layer1_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo> mac_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo> phy_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::TransportInfo> transport_info;
        
}; // EthernetInterface::Interfaces::Interface


class EthernetInterface::Interfaces::Interface::PhyInfo : public ydk::Entity
{
    public:
        PhyInfo();
        ~PhyInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf media_type; //type: EthernetMedia
        ydk::YLeaf phy_present; //type: EtherPhyPresent
        ydk::YLeaf loopback; //type: EthernetLoopback
        class PhyDetails; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails
        class FecDetails; //type: EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails> fec_details;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails> phy_details;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails : public ydk::Entity
{
    public:
        PhyDetails();
        ~PhyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds> dig_opt_mon_alarm_thresholds;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms> dig_opt_mon_alarms;
        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane> > lane;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity> lane_field_validity;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity : public ydk::Entity
{
    public:
        LaneFieldValidity();
        ~LaneFieldValidity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity> field_validity;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity : public ydk::Entity
{
    public:
        FieldValidity();
        ~FieldValidity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm> dig_opt_mon_alarm;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm : public ydk::Entity
{
    public:
        DigOptMonAlarm();
        ~DigOptMonAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class EthernetInterface::Interfaces::Interface::Layer1Info : public ydk::Entity
{
    public:
        Layer1Info();
        ~Layer1Info();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg> autoneg;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring> ber_monitoring;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms> current_alarms;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts> error_counts;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring> opd_monitoring;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo> pfc_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms> previous_alarms;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info


class EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg : public ydk::Entity
{
    public:
        Autoneg();
        ~Autoneg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: int32
        class Settings; //type: EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings> settings;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring


class EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings : public ydk::Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring : public ydk::Entity
{
    public:
        OpdMonitoring();
        ~OpdMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: int32
        class Settings; //type: EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings> settings;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring


class EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings : public ydk::Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters> multicast_mac_filters;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters> unicast_mac_filters;
        
}; // EthernetInterface::Interfaces::Interface::MacInfo


class EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters : public ydk::Entity
{
    public:
        UnicastMacFilters();
        ~UnicastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast_promiscuous; //type: boolean
        class MulticastMacAddress; //type: EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress> > multicast_mac_address;
        
}; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters


class EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress : public ydk::Entity
{
    public:
        MulticastMacAddress();
        ~MulticastMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bert; //type: EthernetInterface::Berts::Bert

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert> > bert;
        
}; // EthernetInterface::Berts


class EthernetInterface::Berts::Bert : public ydk::Entity
{
    public:
        Bert();
        ~Bert();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf time_left; //type: uint32
        ydk::YLeaf port_bert_interval; //type: uint32
        class BertStatus; //type: EthernetInterface::Berts::Bert::BertStatus

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert::BertStatus> bert_status;
        
}; // EthernetInterface::Berts::Bert


class EthernetInterface::Berts::Bert::BertStatus : public ydk::Entity
{
    public:
        BertStatus();
        ~BertStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

class EthernetDevIf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_interface;
        static const ydk::Enum::YLeaf xgmii;
        static const ydk::Enum::YLeaf xaui;
        static const ydk::Enum::YLeaf ethernet_num_dev_if;

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
        static const ydk::Enum::YLeaf ethernet_speed_types_count;

};

class EthernetBertErrCnt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_count_type;
        static const ydk::Enum::YLeaf bit_error_count;
        static const ydk::Enum::YLeaf frame_error_count;
        static const ydk::Enum::YLeaf block_error_count;
        static const ydk::Enum::YLeaf ethernet_bert_err_cnt_types;

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

};

class EthernetDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet_duplex_invalid;
        static const ydk::Enum::YLeaf half_duplex;
        static const ydk::Enum::YLeaf full_duplex;

};

class EtherFlowcontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_flowcontrol;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf bidirectional;

};

class EtherAinsStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ains_soak_status_none;
        static const ydk::Enum::YLeaf ains_soak_status_pending;
        static const ydk::Enum::YLeaf ains_soak_status_running;

};

class EthernetLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_loopback;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf external;

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
        static const ydk::Enum::YLeaf ethernet_base_max;

};

class EtherPfc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_pfc;
        static const ydk::Enum::YLeaf on;

};

class EthernetFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf base_r;

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

};

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

};

class EthernetIpg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf non_standard;

};

class EthCtrlrAlarmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alarm_not_supported;
        static const ydk::Enum::YLeaf alarm_set;
        static const ydk::Enum::YLeaf alarm_not_set;

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

};

class EtherPhyPresent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf phy_not_present;
        static const ydk::Enum::YLeaf phy_present;
        static const ydk::Enum::YLeaf no_information;

};

class EthernetPortEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf rx_enabled;
        static const ydk::Enum::YLeaf tx_enabled;
        static const ydk::Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_ */

