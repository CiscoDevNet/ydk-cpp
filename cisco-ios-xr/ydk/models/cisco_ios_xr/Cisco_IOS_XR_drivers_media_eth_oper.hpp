#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_drivers_media_eth_oper {

class EthernetInterface : public Entity
{
    public:
        EthernetInterface();
        ~EthernetInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Statistics; //type: EthernetInterface::Statistics
        class Interfaces; //type: EthernetInterface::Interfaces
        class Berts; //type: EthernetInterface::Berts

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts> berts;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics> statistics;
        
}; // EthernetInterface


class EthernetInterface::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statistic; //type: EthernetInterface::Statistics::Statistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics::Statistic> > statistic;
        
}; // EthernetInterface::Statistics


class EthernetInterface::Statistics::Statistic : public Entity
{
    public:
        Statistic();
        ~Statistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf received_total_bytes; //type: uint64
        YLeaf received_good_bytes; //type: uint64
        YLeaf received_total_frames; //type: uint64
        YLeaf received8021q_frames; //type: uint64
        YLeaf received_pause_frames; //type: uint64
        YLeaf received_unknown_opcodes; //type: uint64
        YLeaf received_total64_octet_frames; //type: uint64
        YLeaf received_total_octet_frames_from65_to127; //type: uint64
        YLeaf received_total_octet_frames_from128_to255; //type: uint64
        YLeaf received_total_octet_frames_from256_to511; //type: uint64
        YLeaf received_total_octet_frames_from512_to1023; //type: uint64
        YLeaf received_total_octet_frames_from1024_to1518; //type: uint64
        YLeaf received_total_octet_frames_from1519_to_max; //type: uint64
        YLeaf received_good_frames; //type: uint64
        YLeaf received_unicast_frames; //type: uint64
        YLeaf received_multicast_frames; //type: uint64
        YLeaf received_broadcast_frames; //type: uint64
        YLeaf number_of_buffer_overrun_packets_dropped; //type: uint64
        YLeaf number_of_aborted_packets_dropped; //type: uint64
        YLeaf numberof_invalid_vlan_id_packets_dropped; //type: uint64
        YLeaf invalid_dest_mac_drop_packets; //type: uint64
        YLeaf invalid_encap_drop_packets; //type: uint64
        YLeaf number_of_miscellaneous_packets_dropped; //type: uint64
        YLeaf dropped_giant_packets_greaterthan_mru; //type: uint64
        YLeaf dropped_ether_stats_undersize_pkts; //type: uint64
        YLeaf dropped_jabbers_packets_greaterthan_mru; //type: uint64
        YLeaf dropped_ether_stats_fragments; //type: uint64
        YLeaf dropped_packets_with_crc_align_errors; //type: uint64
        YLeaf ether_stats_collisions; //type: uint64
        YLeaf symbol_errors; //type: uint64
        YLeaf dropped_miscellaneous_error_packets; //type: uint64
        YLeaf rfc2819_ether_stats_oversized_pkts; //type: uint64
        YLeaf rfc2819_ether_stats_jabbers; //type: uint64
        YLeaf rfc2819_ether_stats_crc_align_errors; //type: uint64
        YLeaf rfc3635dot3_stats_alignment_errors; //type: uint64
        YLeaf total_bytes_transmitted; //type: uint64
        YLeaf total_good_bytes_transmitted; //type: uint64
        YLeaf total_frames_transmitted; //type: uint64
        YLeaf transmitted8021q_frames; //type: uint64
        YLeaf transmitted_total_pause_frames; //type: uint64
        YLeaf transmitted_total64_octet_frames; //type: uint64
        YLeaf transmitted_total_octet_frames_from65_to127; //type: uint64
        YLeaf transmitted_total_octet_frames_from128_to255; //type: uint64
        YLeaf transmitted_total_octet_frames_from256_to511; //type: uint64
        YLeaf transmitted_total_octet_frames_from512_to1023; //type: uint64
        YLeaf transmitted_total_octet_frames_from1024_to1518; //type: uint64
        YLeaf transmitted_total_octet_frames_from1518_to_max; //type: uint64
        YLeaf transmitted_good_frames; //type: uint64
        YLeaf transmitted_unicast_frames; //type: uint64
        YLeaf transmitted_multicast_frames; //type: uint64
        YLeaf transmitted_broadcast_frames; //type: uint64
        YLeaf buffer_underrun_packet_drops; //type: uint64
        YLeaf aborted_packet_drops; //type: uint64
        YLeaf uncounted_dropped_frames; //type: uint64
        YLeaf miscellaneous_output_errors; //type: uint64

}; // EthernetInterface::Statistics::Statistic


class EthernetInterface::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: EthernetInterface::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface> > interface;
        
}; // EthernetInterface::Interfaces


class EthernetInterface::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf admin_state; //type: EthernetPortEnableEnum
        YLeaf oper_state_up; //type: boolean
        class PhyInfo; //type: EthernetInterface::Interfaces::Interface::PhyInfo
        class Layer1Info; //type: EthernetInterface::Interfaces::Interface::Layer1Info
        class MacInfo; //type: EthernetInterface::Interfaces::Interface::MacInfo
        class TransportInfo; //type: EthernetInterface::Interfaces::Interface::TransportInfo

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info> layer1_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo> mac_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo> phy_info;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::TransportInfo> transport_info;
        
}; // EthernetInterface::Interfaces::Interface


class EthernetInterface::Interfaces::Interface::PhyInfo : public Entity
{
    public:
        PhyInfo();
        ~PhyInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf media_type; //type: EthernetMediaEnum
        YLeaf phy_present; //type: EtherPhyPresentEnum
        YLeaf loopback; //type: EthernetLoopbackEnum
        class PhyDetails; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails
        class FecDetails; //type: EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails> fec_details;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails> phy_details;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails : public Entity
{
    public:
        PhyDetails();
        ~PhyDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vendor; //type: string
        YLeaf vendor_part_number; //type: string
        YLeaf vendor_serial_number; //type: string
        YLeaf transceiver_temperature; //type: int32
        YLeaf transceiver_voltage; //type: int32
        YLeaf transceiver_tx_power; //type: int32
        YLeaf transceiver_rx_power; //type: int32
        YLeaf transceiver_tx_bias; //type: int32
        YLeaf optics_wavelength; //type: uint32
        class LaneFieldValidity; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity
        class DigOptMonAlarmThresholds; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds
        class DigOptMonAlarms; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms
        class Lane; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds> dig_opt_mon_alarm_thresholds;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms> dig_opt_mon_alarms;
        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane> > lane;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity> lane_field_validity;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity : public Entity
{
    public:
        LaneFieldValidity();
        ~LaneFieldValidity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wavelength_valid; //type: int32
        YLeaf transmit_power_valid; //type: int32
        YLeaf receive_power_valid; //type: int32
        YLeaf laser_bias_valid; //type: int32

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds : public Entity
{
    public:
        DigOptMonAlarmThresholds();
        ~DigOptMonAlarmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transceiver_temperature_alarm_high; //type: int32
        YLeaf transceiver_temperature_warning_high; //type: int32
        YLeaf transceiver_temperature_warning_low; //type: int32
        YLeaf transceiver_temperature_alarm_low; //type: int32
        YLeaf transceiver_voltage_alarm_high; //type: uint32
        YLeaf transceiver_voltage_warning_high; //type: uint32
        YLeaf transceiver_voltage_warning_low; //type: uint32
        YLeaf transceiver_voltage_alarm_low; //type: uint32
        YLeaf laser_bias_alarm_high; //type: uint32
        YLeaf laser_bias_warning_high; //type: uint32
        YLeaf laser_bias_warning_low; //type: uint32
        YLeaf laser_bias_alarm_low; //type: uint32
        YLeaf optical_transmit_power_alarm_high; //type: uint32
        YLeaf optical_transmit_power_warning_high; //type: uint32
        YLeaf optical_transmit_power_warning_low; //type: uint32
        YLeaf optical_transmit_power_alarm_low; //type: uint32
        YLeaf optical_receive_power_alarm_high; //type: uint32
        YLeaf optical_receive_power_warning_high; //type: uint32
        YLeaf optical_receive_power_warning_low; //type: uint32
        YLeaf optical_receive_power_alarm_low; //type: uint32
        class FieldValidity; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity> field_validity;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity : public Entity
{
    public:
        FieldValidity();
        ~FieldValidity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf temperature_valid; //type: int32
        YLeaf voltage_valid; //type: int32
        YLeaf laser_bias_valid; //type: int32
        YLeaf transmit_power_valid; //type: int32
        YLeaf receive_power_valid; //type: int32

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms : public Entity
{
    public:
        DigOptMonAlarms();
        ~DigOptMonAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transceiver_temperature; //type: EtherDomAlarmEnum
        YLeaf transceiver_voltage; //type: EtherDomAlarmEnum
        YLeaf transmit_laser_power; //type: EtherDomAlarmEnum
        YLeaf received_laser_power; //type: EtherDomAlarmEnum
        YLeaf laser_bias_current; //type: EtherDomAlarmEnum

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane : public Entity
{
    public:
        Lane();
        ~Lane();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf center_wavelength; //type: uint32
        YLeaf transmit_laser_power; //type: int32
        YLeaf received_laser_power; //type: int32
        YLeaf laser_bias_current; //type: uint32
        YLeaf lane_id; //type: uint32
        class DigOptMonAlarm; //type: EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm> dig_opt_mon_alarm;
        
}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane


class EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm : public Entity
{
    public:
        DigOptMonAlarm();
        ~DigOptMonAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_laser_power; //type: EtherDomAlarmEnum
        YLeaf received_laser_power; //type: EtherDomAlarmEnum
        YLeaf laser_bias_current; //type: EtherDomAlarmEnum

}; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm


class EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails : public Entity
{
    public:
        FecDetails();
        ~FecDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fec; //type: EthernetFecEnum
        YLeaf corrected_codeword_count; //type: uint64
        YLeaf uncorrected_codeword_count; //type: uint64

}; // EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails


class EthernetInterface::Interfaces::Interface::Layer1Info : public Entity
{
    public:
        Layer1Info();
        ~Layer1Info();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_state; //type: EtherLinkStateEnum
        YLeaf led_state; //type: EtherLedStateEnum
        YLeaf speed; //type: EthernetSpeedEnum
        YLeaf duplex; //type: EthernetDuplexEnum
        YLeaf flowcontrol; //type: EtherFlowcontrolEnum
        YLeaf ipg; //type: EthernetIpgEnum
        YLeaf laser_squelch_enabled; //type: boolean
        YLeaf bandwidth_utilization; //type: uint32
        YLeaf bandwidth; //type: uint64
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


class EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg : public Entity
{
    public:
        Autoneg();
        ~Autoneg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf autoneg_enabled; //type: int32
        YLeaf mask; //type: uint32
        YLeaf speed; //type: EthernetSpeedEnum
        YLeaf duplex; //type: EthernetDuplexEnum
        YLeaf flowcontrol; //type: EtherFlowcontrolEnum
        YLeaf config_override; //type: int32
        YLeaf fec; //type: EthernetFecEnum

}; // EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg


class EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms : public Entity
{
    public:
        CurrentAlarms();
        ~CurrentAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_loss_of_signal_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf pcs_loss_of_block_lock_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf local_fault_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf remote_fault_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf sd_ber_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf sf_ber_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf loss_of_synchronization_data_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf hi_ber_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf squelch_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf rx_opd_alarm; //type: EthCtrlrAlarmStateEnum

}; // EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms


class EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms : public Entity
{
    public:
        PreviousAlarms();
        ~PreviousAlarms();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_loss_of_signal_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf pcs_loss_of_block_lock_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf local_fault_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf remote_fault_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf sd_ber_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf sf_ber_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf loss_of_synchronization_data_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf hi_ber_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf squelch_alarm; //type: EthCtrlrAlarmStateEnum
        YLeaf rx_opd_alarm; //type: EthCtrlrAlarmStateEnum

}; // EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms


class EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts : public Entity
{
    public:
        ErrorCounts();
        ~ErrorCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_header_errors; //type: uint64
        YLeaf pcsbip_errors; //type: uint64

}; // EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts


class EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring : public Entity
{
    public:
        BerMonitoring();
        ~BerMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf supported; //type: int32
        class Settings; //type: EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings> settings;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring


class EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings : public Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signal_degrade_threshold; //type: uint32
        YLeaf signal_degrade_alarm; //type: int32
        YLeaf signal_fail_threshold; //type: uint32
        YLeaf signal_fail_alarm; //type: int32
        YLeaf signal_remote_fault; //type: int32

}; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings


class EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring : public Entity
{
    public:
        OpdMonitoring();
        ~OpdMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf supported; //type: int32
        class Settings; //type: EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings> settings;
        
}; // EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring


class EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings : public Entity
{
    public:
        Settings();
        ~Settings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received_optical_power_degrade_threshold_set; //type: int32
        YLeaf received_optical_power_degrade_threshold; //type: int32

}; // EthernetInterface::Interfaces::Interface::Layer1Info::OpdMonitoring::Settings


class EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo : public Entity
{
    public:
        PfcInfo();
        ~PfcInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority_flowcontrol; //type: EtherPfcEnum
        YLeaf priority_enabled_bitmap; //type: uint8
        YLeafList rx_frame; //type: list of  uint64
        YLeafList tx_frame; //type: list of  uint64

}; // EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo


class EthernetInterface::Interfaces::Interface::MacInfo : public Entity
{
    public:
        MacInfo();
        ~MacInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: uint32
        YLeaf mru; //type: uint32
        YLeaf burned_in_mac_address; //type: string
        YLeaf operational_mac_address; //type: string
        class UnicastMacFilters; //type: EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters
        class MulticastMacFilters; //type: EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters> multicast_mac_filters;
        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters> unicast_mac_filters;
        
}; // EthernetInterface::Interfaces::Interface::MacInfo


class EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters : public Entity
{
    public:
        UnicastMacFilters();
        ~UnicastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList unicast_mac_address; //type: list of  string

}; // EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters


class EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters : public Entity
{
    public:
        MulticastMacFilters();
        ~MulticastMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_promiscuous; //type: boolean
        class MulticastMacAddress; //type: EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress> > multicast_mac_address;
        
}; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters


class EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress : public Entity
{
    public:
        MulticastMacAddress();
        ~MulticastMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf mask; //type: string

}; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress


class EthernetInterface::Interfaces::Interface::TransportInfo : public Entity
{
    public:
        TransportInfo();
        ~TransportInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maintenance_mode_enabled; //type: boolean
        YLeaf ains_status; //type: EtherAinsStatusEnum
        YLeaf total_duration; //type: uint32
        YLeaf remaining_duration; //type: uint32

}; // EthernetInterface::Interfaces::Interface::TransportInfo


class EthernetInterface::Berts : public Entity
{
    public:
        Berts();
        ~Berts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bert; //type: EthernetInterface::Berts::Bert

        std::vector<std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert> > bert;
        
}; // EthernetInterface::Berts


class EthernetInterface::Berts::Bert : public Entity
{
    public:
        Bert();
        ~Bert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf time_left; //type: uint32
        YLeaf port_bert_interval; //type: uint32
        class BertStatus; //type: EthernetInterface::Berts::Bert::BertStatus

        std::shared_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert::BertStatus> bert_status;
        
}; // EthernetInterface::Berts::Bert


class EthernetInterface::Berts::Bert::BertStatus : public Entity
{
    public:
        BertStatus();
        ~BertStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bert_state_enabled; //type: boolean
        YLeaf data_availability; //type: uint32
        YLeaf receive_count; //type: uint64
        YLeaf transmit_count; //type: uint64
        YLeaf receive_errors; //type: uint64
        YLeaf error_type; //type: EthernetBertErrCntEnum
        YLeaf test_pattern; //type: EthernetBertPatternEnum
        YLeaf device_under_test; //type: EthernetDevEnum
        YLeaf interface_device; //type: EthernetDevIfEnum

}; // EthernetInterface::Berts::Bert::BertStatus

class EtherLinkStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_undefined;
        static const Enum::YLeaf unknown_state;
        static const Enum::YLeaf available;
        static const Enum::YLeaf not_available;
        static const Enum::YLeaf remote_fault;
        static const Enum::YLeaf invalid_signal;
        static const Enum::YLeaf remote_jabber;
        static const Enum::YLeaf link_loss;
        static const Enum::YLeaf remote_test;
        static const Enum::YLeaf offline;
        static const Enum::YLeaf auto_neg_error;
        static const Enum::YLeaf pmd_link_fault;
        static const Enum::YLeaf frame_loss;
        static const Enum::YLeaf signal_loss;
        static const Enum::YLeaf link_fault;
        static const Enum::YLeaf excessive_ber;
        static const Enum::YLeaf dxs_link_fault;
        static const Enum::YLeaf pxs_link_fault;
        static const Enum::YLeaf security;
        static const Enum::YLeaf phy_not_present;
        static const Enum::YLeaf no_optic_license;
        static const Enum::YLeaf unsupported_module;
        static const Enum::YLeaf dwdm_laser_shut;
        static const Enum::YLeaf wanphy_laser_shut;
        static const Enum::YLeaf incompatible_config;
        static const Enum::YLeaf system_error;
        static const Enum::YLeaf wan_framing_error;
        static const Enum::YLeaf otn_framing_error;

};

class EthernetBertPatternEnum : public Enum
{
    public:
        static const Enum::YLeaf no_test_pattern;
        static const Enum::YLeaf high_frequency;
        static const Enum::YLeaf low_frequency;
        static const Enum::YLeaf mixed_frequency;
        static const Enum::YLeaf continuous_random;
        static const Enum::YLeaf continuous_jitter;
        static const Enum::YLeaf long_continuous_random;
        static const Enum::YLeaf short_continuous_random;
        static const Enum::YLeaf pseudorandom_seed_a;
        static const Enum::YLeaf pseudorandom_seed_b;
        static const Enum::YLeaf prbs31;
        static const Enum::YLeaf square_wave;
        static const Enum::YLeaf pseudorandom;
        static const Enum::YLeaf ethernet_bert_pattern_types;

};

class EthernetPortEnableEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf rx_enabled;
        static const Enum::YLeaf tx_enabled;
        static const Enum::YLeaf enabled;

};

class EthCtrlrAlarmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf alarm_not_supported;
        static const Enum::YLeaf alarm_set;
        static const Enum::YLeaf alarm_not_set;

};

class EthernetDevEnum : public Enum
{
    public:
        static const Enum::YLeaf no_device;
        static const Enum::YLeaf pma_pmd;
        static const Enum::YLeaf wis;
        static const Enum::YLeaf pcs;
        static const Enum::YLeaf phy_xs;
        static const Enum::YLeaf dte_xs;
        static const Enum::YLeaf ethernet_num_dev;

};

class EtherPhyPresentEnum : public Enum
{
    public:
        static const Enum::YLeaf phy_not_present;
        static const Enum::YLeaf phy_present;
        static const Enum::YLeaf no_information;

};

class EthernetDevIfEnum : public Enum
{
    public:
        static const Enum::YLeaf no_interface;
        static const Enum::YLeaf xgmii;
        static const Enum::YLeaf xaui;
        static const Enum::YLeaf ethernet_num_dev_if;

};

class EtherFlowcontrolEnum : public Enum
{
    public:
        static const Enum::YLeaf no_flowcontrol;
        static const Enum::YLeaf egress;
        static const Enum::YLeaf ingress;
        static const Enum::YLeaf bidirectional;

};

class EtherDomAlarmEnum : public Enum
{
    public:
        static const Enum::YLeaf no_information;
        static const Enum::YLeaf alarm_high;
        static const Enum::YLeaf warning_high;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf warning_low;
        static const Enum::YLeaf alarm_low;

};

class EtherPfcEnum : public Enum
{
    public:
        static const Enum::YLeaf no_pfc;
        static const Enum::YLeaf on;

};

class EthernetBertErrCntEnum : public Enum
{
    public:
        static const Enum::YLeaf no_count_type;
        static const Enum::YLeaf bit_error_count;
        static const Enum::YLeaf frame_error_count;
        static const Enum::YLeaf block_error_count;
        static const Enum::YLeaf ethernet_bert_err_cnt_types;

};

class EthernetDuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet_duplex_invalid;
        static const Enum::YLeaf half_duplex;
        static const Enum::YLeaf full_duplex;

};

class EthernetIpgEnum : public Enum
{
    public:
        static const Enum::YLeaf standard;
        static const Enum::YLeaf non_standard;

};

class EthernetSpeedEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet_speed_invalid;
        static const Enum::YLeaf ten_mbps;
        static const Enum::YLeaf hundred_mbps;
        static const Enum::YLeaf one_gbps;
        static const Enum::YLeaf ten_gbps;
        static const Enum::YLeaf twenty_five_gbps;
        static const Enum::YLeaf forty_gbps;
        static const Enum::YLeaf fifty_gbps;
        static const Enum::YLeaf hundred_gbps;
        static const Enum::YLeaf ethernet_speed_types_count;

};

class EtherLedStateEnum : public Enum
{
    public:
        static const Enum::YLeaf led_state_unknown;
        static const Enum::YLeaf led_off;
        static const Enum::YLeaf green_on;
        static const Enum::YLeaf green_flashing;
        static const Enum::YLeaf yellow_on;
        static const Enum::YLeaf yellow_flashing;
        static const Enum::YLeaf red_on;
        static const Enum::YLeaf red_flashing;

};

class EthernetFecEnum : public Enum
{
    public:
        static const Enum::YLeaf not_configured;
        static const Enum::YLeaf standard;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf base_r;

};

class EthernetMediaEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet_other;
        static const Enum::YLeaf ethernet_unknown;
        static const Enum::YLeaf ethernet_aui;
        static const Enum::YLeaf ethernet_10base5;
        static const Enum::YLeaf ethernet_foirl;
        static const Enum::YLeaf ethernet_10base2;
        static const Enum::YLeaf ethernet_10broad36;
        static const Enum::YLeaf ethernet_10base;
        static const Enum::YLeaf ethernet_10base_thd;
        static const Enum::YLeaf ethernet_10base_tfd;
        static const Enum::YLeaf ethernet_10base_fp;
        static const Enum::YLeaf ethernet_10base_fb;
        static const Enum::YLeaf ethernet_10base_fl;
        static const Enum::YLeaf ethernet_10base_flhd;
        static const Enum::YLeaf ethernet_10base_flfd;
        static const Enum::YLeaf ethernet_100base_t4;
        static const Enum::YLeaf ethernet_100base_tx;
        static const Enum::YLeaf ethernet_100base_txhd;
        static const Enum::YLeaf ethernet_100base_txfd;
        static const Enum::YLeaf ethernet_100base_fx;
        static const Enum::YLeaf ethernet_100base_fxhd;
        static const Enum::YLeaf ethernet_100base_fxfd;
        static const Enum::YLeaf ethernet_100base_ex;
        static const Enum::YLeaf ethernet_100base_exhd;
        static const Enum::YLeaf ethernet_100base_exfd;
        static const Enum::YLeaf ethernet_100base_t2;
        static const Enum::YLeaf ethernet_100base_t2hd;
        static const Enum::YLeaf ethernet_100base_t2fd;
        static const Enum::YLeaf ethernet_1000base_x;
        static const Enum::YLeaf ethernet_1000base_xhd;
        static const Enum::YLeaf ethernet_1000base_xfd;
        static const Enum::YLeaf ethernet_1000base_lx;
        static const Enum::YLeaf ethernet_1000base_lxhd;
        static const Enum::YLeaf ethernet_1000base_lxfd;
        static const Enum::YLeaf ethernet_1000base_sx;
        static const Enum::YLeaf ethernet_1000base_sxhd;
        static const Enum::YLeaf ethernet_1000base_sxfd;
        static const Enum::YLeaf ethernet_1000base_cx;
        static const Enum::YLeaf ethernet_1000base_cxhd;
        static const Enum::YLeaf ethernet_1000base_cxfd;
        static const Enum::YLeaf ethernet_1000base;
        static const Enum::YLeaf ethernet_1000base_thd;
        static const Enum::YLeaf ethernet_1000base_tfd;
        static const Enum::YLeaf ethernet_10gbase_x;
        static const Enum::YLeaf ethernet_10gbase_lx4;
        static const Enum::YLeaf ethernet_10gbase_r;
        static const Enum::YLeaf ethernet_10gbase_er;
        static const Enum::YLeaf ethernet_10gbase_lr;
        static const Enum::YLeaf ethernet_10gbase_sr;
        static const Enum::YLeaf ethernet_10gbase_w;
        static const Enum::YLeaf ethernet_10gbase_ew;
        static const Enum::YLeaf ethernet_10gbase_lw;
        static const Enum::YLeaf ethernet_10gbase_sw;
        static const Enum::YLeaf ethernet_1000base_zx;
        static const Enum::YLeaf ethernet_1000base_cwdm;
        static const Enum::YLeaf ethernet_1000base_cwdm_1470;
        static const Enum::YLeaf ethernet_1000base_cwdm_1490;
        static const Enum::YLeaf ethernet_1000base_cwdm_1510;
        static const Enum::YLeaf ethernet_1000base_cwdm_1530;
        static const Enum::YLeaf ethernet_1000base_cwdm_1550;
        static const Enum::YLeaf ethernet_1000base_cwdm_1570;
        static const Enum::YLeaf ethernet_1000base_cwdm_1590;
        static const Enum::YLeaf ethernet_1000base_cwdm_1610;
        static const Enum::YLeaf ethernet_10gbase_zr;
        static const Enum::YLeaf ethernet_10gbase_dwdm;
        static const Enum::YLeaf ethernet_100gbase_lr4;
        static const Enum::YLeaf ethernet_1000base_dwdm;
        static const Enum::YLeaf ethernet_1000base_dwdm_1533;
        static const Enum::YLeaf ethernet_1000base_dwdm_1537;
        static const Enum::YLeaf ethernet_1000base_dwdm_1541;
        static const Enum::YLeaf ethernet_1000base_dwdm_1545;
        static const Enum::YLeaf ethernet_1000base_dwdm_1549;
        static const Enum::YLeaf ethernet_1000base_dwdm_1553;
        static const Enum::YLeaf ethernet_1000base_dwdm_1557;
        static const Enum::YLeaf ethernet_1000base_dwdm_1561;
        static const Enum::YLeaf ethernet_40gbase_lr4;
        static const Enum::YLeaf ethernet_40gbase_er4;
        static const Enum::YLeaf ethernet_100gbase_er4;
        static const Enum::YLeaf ethernet_1000base_ex;
        static const Enum::YLeaf ethernet_1000base_bx10_d;
        static const Enum::YLeaf ethernet_1000base_bx10_u;
        static const Enum::YLeaf ethernet_1000base_dwdm_1561_42;
        static const Enum::YLeaf ethernet_1000base_dwdm_1560_61;
        static const Enum::YLeaf ethernet_1000base_dwdm_1559_79;
        static const Enum::YLeaf ethernet_1000base_dwdm_1558_98;
        static const Enum::YLeaf ethernet_1000base_dwdm_1558_17;
        static const Enum::YLeaf ethernet_1000base_dwdm_1557_36;
        static const Enum::YLeaf ethernet_1000base_dwdm_1556_55;
        static const Enum::YLeaf ethernet_1000base_dwdm_1555_75;
        static const Enum::YLeaf ethernet_1000base_dwdm_1554_94;
        static const Enum::YLeaf ethernet_1000base_dwdm_1554_13;
        static const Enum::YLeaf ethernet_1000base_dwdm_1553_33;
        static const Enum::YLeaf ethernet_1000base_dwdm_1552_52;
        static const Enum::YLeaf ethernet_1000base_dwdm_1551_72;
        static const Enum::YLeaf ethernet_1000base_dwdm_1550_92;
        static const Enum::YLeaf ethernet_1000base_dwdm_1550_12;
        static const Enum::YLeaf ethernet_1000base_dwdm_1549_32;
        static const Enum::YLeaf ethernet_1000base_dwdm_1548_51;
        static const Enum::YLeaf ethernet_1000base_dwdm_1547_72;
        static const Enum::YLeaf ethernet_1000base_dwdm_1546_92;
        static const Enum::YLeaf ethernet_1000base_dwdm_1546_12;
        static const Enum::YLeaf ethernet_1000base_dwdm_1545_32;
        static const Enum::YLeaf ethernet_1000base_dwdm_1544_53;
        static const Enum::YLeaf ethernet_1000base_dwdm_1543_73;
        static const Enum::YLeaf ethernet_1000base_dwdm_1542_94;
        static const Enum::YLeaf ethernet_1000base_dwdm_1542_14;
        static const Enum::YLeaf ethernet_1000base_dwdm_1541_35;
        static const Enum::YLeaf ethernet_1000base_dwdm_1540_56;
        static const Enum::YLeaf ethernet_1000base_dwdm_1539_77;
        static const Enum::YLeaf ethernet_1000base_dwdm_1538_98;
        static const Enum::YLeaf ethernet_1000base_dwdm_1538_19;
        static const Enum::YLeaf ethernet_1000base_dwdm_1537_40;
        static const Enum::YLeaf ethernet_1000base_dwdm_1536_61;
        static const Enum::YLeaf ethernet_1000base_dwdm_1535_82;
        static const Enum::YLeaf ethernet_1000base_dwdm_1535_04;
        static const Enum::YLeaf ethernet_1000base_dwdm_1534_25;
        static const Enum::YLeaf ethernet_1000base_dwdm_1533_47;
        static const Enum::YLeaf ethernet_1000base_dwdm_1532_68;
        static const Enum::YLeaf ethernet_1000base_dwdm_1531_90;
        static const Enum::YLeaf ethernet_1000base_dwdm_1531_12;
        static const Enum::YLeaf ethernet_1000base_dwdm_1530_33;
        static const Enum::YLeaf ethernet_1000base_dwdm_tunable;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1561_42;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1560_61;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1559_79;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1558_98;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1558_17;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1557_36;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1556_55;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1555_75;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1554_94;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1554_13;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1553_33;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1552_52;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1551_72;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1550_92;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1550_12;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1549_32;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1548_51;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1547_72;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1546_92;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1546_12;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1545_32;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1544_53;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1543_73;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1542_94;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1542_14;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1541_35;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1540_56;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1539_77;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1538_98;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1538_19;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1537_40;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1536_61;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1535_82;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1535_04;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1534_25;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1533_47;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1532_68;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1531_90;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1531_12;
        static const Enum::YLeaf ethernet_10gbase_dwdm_1530_33;
        static const Enum::YLeaf ethernet_10gbase_dwdm_tunable;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1561_42;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1560_61;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1559_79;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1558_98;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1558_17;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1557_36;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1556_55;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1555_75;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1554_94;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1554_13;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1553_33;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1552_52;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1551_72;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1550_92;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1550_12;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1549_32;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1548_51;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1547_72;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1546_92;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1546_12;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1545_32;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1544_53;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1543_73;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1542_94;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1542_14;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1541_35;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1540_56;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1539_77;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1538_98;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1538_19;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1537_40;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1536_61;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1535_82;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1535_04;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1534_25;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1533_47;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1532_68;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1531_90;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1531_12;
        static const Enum::YLeaf ethernet_40gbase_dwdm_1530_33;
        static const Enum::YLeaf ethernet_40gbase_dwdm_tunable;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1561_42;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1560_61;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1559_79;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1558_98;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1558_17;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1557_36;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1556_55;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1555_75;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1554_94;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1554_13;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1553_33;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1552_52;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1551_72;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1550_92;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1550_12;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1549_32;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1548_51;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1547_72;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1546_92;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1546_12;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1545_32;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1544_53;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1543_73;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1542_94;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1542_14;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1541_35;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1540_56;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1539_77;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1538_98;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1538_19;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1537_40;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1536_61;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1535_82;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1535_04;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1534_25;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1533_47;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1532_68;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1531_90;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1531_12;
        static const Enum::YLeaf ethernet_100gbase_dwdm_1530_33;
        static const Enum::YLeaf ethernet_100gbase_dwdm_tunable;
        static const Enum::YLeaf ethernet_40gbase_kr4;
        static const Enum::YLeaf ethernet_40gbase_cr4;
        static const Enum::YLeaf ethernet_40gbase_sr4;
        static const Enum::YLeaf ethernet_40gbase_fr;
        static const Enum::YLeaf ethernet_100gbase_cr10;
        static const Enum::YLeaf ethernet_100gbase_sr10;
        static const Enum::YLeaf ethernet_40gbase_csr4;
        static const Enum::YLeaf ethernet_10gbase_cwdm;
        static const Enum::YLeaf ethernet_10gbase_cwdm_tunable;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1470;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1490;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1510;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1530;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1550;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1570;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1590;
        static const Enum::YLeaf ethernet_10gbase_cwdm_1610;
        static const Enum::YLeaf ethernet_40gbase_cwdm;
        static const Enum::YLeaf ethernet_40gbase_cwdm_tunable;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1470;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1490;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1510;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1530;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1550;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1570;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1590;
        static const Enum::YLeaf ethernet_40gbase_cwdm_1610;
        static const Enum::YLeaf ethernet_100gbase_cwdm;
        static const Enum::YLeaf ethernet_100gbase_cwdm_tunable;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1470;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1490;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1510;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1530;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1550;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1570;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1590;
        static const Enum::YLeaf ethernet_100gbase_cwdm_1610;
        static const Enum::YLeaf ethernet_40gbase_elpb;
        static const Enum::YLeaf ethernet_100gbase_elpb;
        static const Enum::YLeaf ethernet_100gbase_lr10;
        static const Enum::YLeaf ethernet_40gbase;
        static const Enum::YLeaf ethernet_100gbase_kp4;
        static const Enum::YLeaf ethernet_100gbase_kr4;
        static const Enum::YLeaf ethernet_10gbase_lrm;
        static const Enum::YLeaf ethernet_10gbase_cx4;
        static const Enum::YLeaf ethernet_10gbase;
        static const Enum::YLeaf ethernet_10gbase_kx4;
        static const Enum::YLeaf ethernet_10gbase_kr;
        static const Enum::YLeaf ethernet_10gbase_pr;
        static const Enum::YLeaf ethernet_100base_lx;
        static const Enum::YLeaf ethernet_100base_zx;
        static const Enum::YLeaf ethernet_1000base_bx_d;
        static const Enum::YLeaf ethernet_1000base_bx_u;
        static const Enum::YLeaf ethernet_1000base_bx20_d;
        static const Enum::YLeaf ethernet_1000base_bx20_u;
        static const Enum::YLeaf ethernet_1000base_bx40_d;
        static const Enum::YLeaf ethernet_1000base_bx40_da;
        static const Enum::YLeaf ethernet_1000base_bx40_u;
        static const Enum::YLeaf ethernet_1000base_bx80_d;
        static const Enum::YLeaf ethernet_1000base_bx80_u;
        static const Enum::YLeaf ethernet_1000base_bx120_d;
        static const Enum::YLeaf ethernet_1000base_bx120_u;
        static const Enum::YLeaf ethernet_10gbase_bx_d;
        static const Enum::YLeaf ethernet_10gbase_bx_u;
        static const Enum::YLeaf ethernet_10gbase_bx10_d;
        static const Enum::YLeaf ethernet_10gbase_bx10_u;
        static const Enum::YLeaf ethernet_10gbase_bx20_d;
        static const Enum::YLeaf ethernet_10gbase_bx20_u;
        static const Enum::YLeaf ethernet_10gbase_bx40_d;
        static const Enum::YLeaf ethernet_10gbase_bx40_u;
        static const Enum::YLeaf ethernet_10gbase_bx80_d;
        static const Enum::YLeaf ethernet_10gbase_bx80_u;
        static const Enum::YLeaf ethernet_10gbase_bx120_d;
        static const Enum::YLeaf ethernet_10gbase_bx120_u;
        static const Enum::YLeaf ethernet_1000base_dr_lx;
        static const Enum::YLeaf ethernet_100gbase_er4l;
        static const Enum::YLeaf ethernet_100gbase_sr4;
        static const Enum::YLeaf ethernet_40gbase_sr_bd;
        static const Enum::YLeaf ethernet_25gbase_cr;
        static const Enum::YLeaf ethernet_25gbase_cr_s;
        static const Enum::YLeaf ethernet_25gbase_kr;
        static const Enum::YLeaf ethernet_25gbase_kr_s;
        static const Enum::YLeaf ethernet_25gbase_r;
        static const Enum::YLeaf ethernet_25gbase_sr;
        static const Enum::YLeaf ethernet_25gbase_dwdm;
        static const Enum::YLeaf ethernet_25gbase_dwdm_tunable;
        static const Enum::YLeaf ethernet_25gbase_cwdm;
        static const Enum::YLeaf ethernet_25gbase_cwdm_tunable;
        static const Enum::YLeaf ethernet_100gbase_psm4;
        static const Enum::YLeaf ethernet_100gbase_er10;
        static const Enum::YLeaf ethernet_100gbase_er10l;
        static const Enum::YLeaf ethernet_100gbase_acc;
        static const Enum::YLeaf ethernet_100gbase_aoc;
        static const Enum::YLeaf ethernet_100gbase_cwdm4;
        static const Enum::YLeaf ethernet_40gbase_psm4;
        static const Enum::YLeaf ethernet_100gbase_cr4;
        static const Enum::YLeaf ethernet_100gbase_act_loop;
        static const Enum::YLeaf ethernet_100gbase_pas_loop;
        static const Enum::YLeaf ethernet_base_max;

};

class EtherAinsStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ains_soak_status_none;
        static const Enum::YLeaf ains_soak_status_pending;
        static const Enum::YLeaf ains_soak_status_running;

};

class EthernetLoopbackEnum : public Enum
{
    public:
        static const Enum::YLeaf no_loopback;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf line;
        static const Enum::YLeaf external;

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_ */

