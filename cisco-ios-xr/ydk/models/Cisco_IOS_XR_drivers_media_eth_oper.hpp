#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_drivers_media_eth_oper {

class EthernetInterface : public Entity
{
    public:
        EthernetInterface();
        ~EthernetInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Statistics : public Entity
    {
        public:
            Statistics();
            ~Statistics();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Statistic : public Entity
        {
            public:
                Statistic();
                ~Statistic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value received_total_bytes; //type: uint64
                Value received_good_bytes; //type: uint64
                Value received_total_frames; //type: uint64
                Value received8021q_frames; //type: uint64
                Value received_pause_frames; //type: uint64
                Value received_unknown_opcodes; //type: uint64
                Value received_total64_octet_frames; //type: uint64
                Value received_total_octet_frames_from65_to127; //type: uint64
                Value received_total_octet_frames_from128_to255; //type: uint64
                Value received_total_octet_frames_from256_to511; //type: uint64
                Value received_total_octet_frames_from512_to1023; //type: uint64
                Value received_total_octet_frames_from1024_to1518; //type: uint64
                Value received_total_octet_frames_from1519_to_max; //type: uint64
                Value received_good_frames; //type: uint64
                Value received_unicast_frames; //type: uint64
                Value received_multicast_frames; //type: uint64
                Value received_broadcast_frames; //type: uint64
                Value number_of_buffer_overrun_packets_dropped; //type: uint64
                Value number_of_aborted_packets_dropped; //type: uint64
                Value numberof_invalid_vlan_id_packets_dropped; //type: uint64
                Value invalid_dest_mac_drop_packets; //type: uint64
                Value invalid_encap_drop_packets; //type: uint64
                Value number_of_miscellaneous_packets_dropped; //type: uint64
                Value dropped_giant_packets_greaterthan_mru; //type: uint64
                Value dropped_ether_stats_undersize_pkts; //type: uint64
                Value dropped_jabbers_packets_greaterthan_mru; //type: uint64
                Value dropped_ether_stats_fragments; //type: uint64
                Value dropped_packets_with_crc_align_errors; //type: uint64
                Value ether_stats_collisions; //type: uint64
                Value symbol_errors; //type: uint64
                Value dropped_miscellaneous_error_packets; //type: uint64
                Value rfc2819_ether_stats_oversized_pkts; //type: uint64
                Value rfc2819_ether_stats_jabbers; //type: uint64
                Value rfc2819_ether_stats_crc_align_errors; //type: uint64
                Value rfc3635dot3_stats_alignment_errors; //type: uint64
                Value total_bytes_transmitted; //type: uint64
                Value total_good_bytes_transmitted; //type: uint64
                Value total_frames_transmitted; //type: uint64
                Value transmitted8021q_frames; //type: uint64
                Value transmitted_total_pause_frames; //type: uint64
                Value transmitted_total64_octet_frames; //type: uint64
                Value transmitted_total_octet_frames_from65_to127; //type: uint64
                Value transmitted_total_octet_frames_from128_to255; //type: uint64
                Value transmitted_total_octet_frames_from256_to511; //type: uint64
                Value transmitted_total_octet_frames_from512_to1023; //type: uint64
                Value transmitted_total_octet_frames_from1024_to1518; //type: uint64
                Value transmitted_total_octet_frames_from1518_to_max; //type: uint64
                Value transmitted_good_frames; //type: uint64
                Value transmitted_unicast_frames; //type: uint64
                Value transmitted_multicast_frames; //type: uint64
                Value transmitted_broadcast_frames; //type: uint64
                Value buffer_underrun_packet_drops; //type: uint64
                Value aborted_packet_drops; //type: uint64
                Value uncounted_dropped_frames; //type: uint64
                Value miscellaneous_output_errors; //type: uint64




        }; // EthernetInterface::Statistics::Statistic


            std::vector<std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics::Statistic> > statistic;


    }; // EthernetInterface::Statistics


    class Interfaces : public Entity
    {
        public:
            Interfaces();
            ~Interfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value admin_state; //type: EthernetPortEnableEnum
                Value oper_state_up; //type: boolean


            class PhyInfo : public Entity
            {
                public:
                    PhyInfo();
                    ~PhyInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value media_type; //type: EthernetMediaEnum
                    Value phy_present; //type: EtherPhyPresentEnum
                    Value loopback; //type: EthernetLoopbackEnum


                class PhyDetails : public Entity
                {
                    public:
                        PhyDetails();
                        ~PhyDetails();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vendor; //type: string
                        Value vendor_part_number; //type: string
                        Value vendor_serial_number; //type: string
                        Value transceiver_temperature; //type: int32
                        Value transceiver_voltage; //type: int32
                        Value transceiver_tx_power; //type: int32
                        Value transceiver_rx_power; //type: int32
                        Value transceiver_tx_bias; //type: int32
                        Value optics_wavelength; //type: uint32


                    class LaneFieldValidity : public Entity
                    {
                        public:
                            LaneFieldValidity();
                            ~LaneFieldValidity();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value wavelength_valid; //type: int32
                            Value transmit_power_valid; //type: int32
                            Value receive_power_valid; //type: int32
                            Value laser_bias_valid; //type: int32




                    }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity


                    class DigOptMonAlarmThresholds : public Entity
                    {
                        public:
                            DigOptMonAlarmThresholds();
                            ~DigOptMonAlarmThresholds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value transceiver_temperature_alarm_high; //type: int32
                            Value transceiver_temperature_warning_high; //type: int32
                            Value transceiver_temperature_warning_low; //type: int32
                            Value transceiver_temperature_alarm_low; //type: int32
                            Value transceiver_voltage_alarm_high; //type: uint32
                            Value transceiver_voltage_warning_high; //type: uint32
                            Value transceiver_voltage_warning_low; //type: uint32
                            Value transceiver_voltage_alarm_low; //type: uint32
                            Value laser_bias_alarm_high; //type: uint32
                            Value laser_bias_warning_high; //type: uint32
                            Value laser_bias_warning_low; //type: uint32
                            Value laser_bias_alarm_low; //type: uint32
                            Value optical_transmit_power_alarm_high; //type: uint32
                            Value optical_transmit_power_warning_high; //type: uint32
                            Value optical_transmit_power_warning_low; //type: uint32
                            Value optical_transmit_power_alarm_low; //type: uint32
                            Value optical_receive_power_alarm_high; //type: uint32
                            Value optical_receive_power_warning_high; //type: uint32
                            Value optical_receive_power_warning_low; //type: uint32
                            Value optical_receive_power_alarm_low; //type: uint32


                        class FieldValidity : public Entity
                        {
                            public:
                                FieldValidity();
                                ~FieldValidity();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value temperature_valid; //type: int32
                                Value voltage_valid; //type: int32
                                Value laser_bias_valid; //type: int32
                                Value transmit_power_valid; //type: int32
                                Value receive_power_valid; //type: int32




                        }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity


                            std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds::FieldValidity> field_validity;


                    }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds


                    class DigOptMonAlarms : public Entity
                    {
                        public:
                            DigOptMonAlarms();
                            ~DigOptMonAlarms();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value transceiver_temperature; //type: EtherDomAlarmEnum
                            Value transceiver_voltage; //type: EtherDomAlarmEnum
                            Value transmit_laser_power; //type: EtherDomAlarmEnum
                            Value received_laser_power; //type: EtherDomAlarmEnum
                            Value laser_bias_current; //type: EtherDomAlarmEnum


                            class EtherDomAlarmEnum;
                            class EtherDomAlarmEnum;
                            class EtherDomAlarmEnum;
                            class EtherDomAlarmEnum;
                            class EtherDomAlarmEnum;


                    }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms


                    class Lane : public Entity
                    {
                        public:
                            Lane();
                            ~Lane();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value center_wavelength; //type: uint32
                            Value transmit_laser_power; //type: int32
                            Value received_laser_power; //type: int32
                            Value laser_bias_current; //type: uint32


                        class DigOptMonAlarm : public Entity
                        {
                            public:
                                DigOptMonAlarm();
                                ~DigOptMonAlarm();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value transmit_laser_power; //type: EtherDomAlarmEnum
                                Value received_laser_power; //type: EtherDomAlarmEnum
                                Value laser_bias_current; //type: EtherDomAlarmEnum


                                class EtherDomAlarmEnum;
                                class EtherDomAlarmEnum;
                                class EtherDomAlarmEnum;


                        }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm


                            std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane::DigOptMonAlarm> dig_opt_mon_alarm;


                    }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane


                        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarmThresholds> dig_opt_mon_alarm_thresholds;
                        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::DigOptMonAlarms> dig_opt_mon_alarms;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::Lane> > lane;
                        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails::LaneFieldValidity> lane_field_validity;


                }; // EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails


                class FecDetails : public Entity
                {
                    public:
                        FecDetails();
                        ~FecDetails();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value fec; //type: EthernetFecEnum
                        Value corrected_codeword_count; //type: uint64
                        Value uncorrected_codeword_count; //type: uint64


                        class EthernetFecEnum;


                }; // EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails


                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::FecDetails> fec_details;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo::PhyDetails> phy_details;
                    class EthernetLoopbackEnum;
                    class EthernetMediaEnum;
                    class EtherPhyPresentEnum;


            }; // EthernetInterface::Interfaces::Interface::PhyInfo


            class Layer1Info : public Entity
            {
                public:
                    Layer1Info();
                    ~Layer1Info();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value link_state; //type: EtherLinkStateEnum
                    Value led_state; //type: EtherLedStateEnum
                    Value speed; //type: EthernetSpeedEnum
                    Value duplex; //type: EthernetDuplexEnum
                    Value flowcontrol; //type: EtherFlowcontrolEnum
                    Value ipg; //type: EthernetIpgEnum
                    Value laser_squelch_enabled; //type: boolean
                    Value bandwidth_utilization; //type: uint32
                    Value bandwidth; //type: uint64


                class Autoneg : public Entity
                {
                    public:
                        Autoneg();
                        ~Autoneg();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value autoneg_enabled; //type: int32
                        Value mask; //type: uint32
                        Value speed; //type: EthernetSpeedEnum
                        Value duplex; //type: EthernetDuplexEnum
                        Value flowcontrol; //type: EtherFlowcontrolEnum
                        Value config_override; //type: int32
                        Value fec; //type: EthernetFecEnum


                        class EthernetDuplexEnum;
                        class EthernetFecEnum;
                        class EtherFlowcontrolEnum;
                        class EthernetSpeedEnum;


                }; // EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg


                class CurrentAlarms : public Entity
                {
                    public:
                        CurrentAlarms();
                        ~CurrentAlarms();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value received_loss_of_signal_alarm; //type: EthCtrlrAlarmStateEnum
                        Value pcs_loss_of_block_lock_alarm; //type: EthCtrlrAlarmStateEnum
                        Value local_fault_alarm; //type: EthCtrlrAlarmStateEnum
                        Value remote_fault_alarm; //type: EthCtrlrAlarmStateEnum
                        Value sd_ber_alarm; //type: EthCtrlrAlarmStateEnum
                        Value sf_ber_alarm; //type: EthCtrlrAlarmStateEnum
                        Value loss_of_synchronization_data_alarm; //type: EthCtrlrAlarmStateEnum
                        Value hi_ber_alarm; //type: EthCtrlrAlarmStateEnum
                        Value squelch_alarm; //type: EthCtrlrAlarmStateEnum


                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;


                }; // EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms


                class PreviousAlarms : public Entity
                {
                    public:
                        PreviousAlarms();
                        ~PreviousAlarms();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value received_loss_of_signal_alarm; //type: EthCtrlrAlarmStateEnum
                        Value pcs_loss_of_block_lock_alarm; //type: EthCtrlrAlarmStateEnum
                        Value local_fault_alarm; //type: EthCtrlrAlarmStateEnum
                        Value remote_fault_alarm; //type: EthCtrlrAlarmStateEnum
                        Value sd_ber_alarm; //type: EthCtrlrAlarmStateEnum
                        Value sf_ber_alarm; //type: EthCtrlrAlarmStateEnum
                        Value loss_of_synchronization_data_alarm; //type: EthCtrlrAlarmStateEnum
                        Value hi_ber_alarm; //type: EthCtrlrAlarmStateEnum
                        Value squelch_alarm; //type: EthCtrlrAlarmStateEnum


                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;
                        class EthCtrlrAlarmStateEnum;


                }; // EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms


                class ErrorCounts : public Entity
                {
                    public:
                        ErrorCounts();
                        ~ErrorCounts();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sync_header_errors; //type: uint64
                        Value pcsbip_errors; //type: uint64




                }; // EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts


                class BerMonitoring : public Entity
                {
                    public:
                        BerMonitoring();
                        ~BerMonitoring();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value supported; //type: int32


                    class Settings : public Entity
                    {
                        public:
                            Settings();
                            ~Settings();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value signal_degrade_threshold; //type: uint32
                            Value signal_degrade_alarm; //type: int32
                            Value signal_fail_threshold; //type: uint32
                            Value signal_fail_alarm; //type: int32
                            Value signal_remote_fault; //type: int32




                    }; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings


                        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring::Settings> settings;


                }; // EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring


                class PfcInfo : public Entity
                {
                    public:
                        PfcInfo();
                        ~PfcInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value priority_flowcontrol; //type: EtherPfcEnum
                        Value priority_enabled_bitmap; //type: uint8
                        ValueList rx_frame; //type: list of  uint64
                        ValueList tx_frame; //type: list of  uint64


                        class EtherPfcEnum;


                }; // EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo


                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::Autoneg> autoneg;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::BerMonitoring> ber_monitoring;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::CurrentAlarms> current_alarms;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::ErrorCounts> error_counts;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::PfcInfo> pfc_info;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info::PreviousAlarms> previous_alarms;
                    class EthernetDuplexEnum;
                    class EtherFlowcontrolEnum;
                    class EthernetIpgEnum;
                    class EtherLedStateEnum;
                    class EtherLinkStateEnum;
                    class EthernetSpeedEnum;


            }; // EthernetInterface::Interfaces::Interface::Layer1Info


            class MacInfo : public Entity
            {
                public:
                    MacInfo();
                    ~MacInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value mtu; //type: uint32
                    Value mru; //type: uint32
                    Value burned_in_mac_address; //type: string
                    Value operational_mac_address; //type: string


                class UnicastMacFilters : public Entity
                {
                    public:
                        UnicastMacFilters();
                        ~UnicastMacFilters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        ValueList unicast_mac_address; //type: list of  string




                }; // EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters


                class MulticastMacFilters : public Entity
                {
                    public:
                        MulticastMacFilters();
                        ~MulticastMacFilters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value multicast_promiscuous; //type: boolean


                    class MulticastMacAddress : public Entity
                    {
                        public:
                            MulticastMacAddress();
                            ~MulticastMacAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mac_address; //type: string
                            Value mask; //type: string




                    }; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters::MulticastMacAddress> > multicast_mac_address;


                }; // EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters


                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::MulticastMacFilters> multicast_mac_filters;
                    std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo::UnicastMacFilters> unicast_mac_filters;


            }; // EthernetInterface::Interfaces::Interface::MacInfo


            class TransportInfo : public Entity
            {
                public:
                    TransportInfo();
                    ~TransportInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value maintenance_mode_enabled; //type: boolean
                    Value ains_status; //type: EtherAinsStatusEnum
                    Value total_duration; //type: uint32
                    Value remaining_duration; //type: uint32


                    class EtherAinsStatusEnum;


            }; // EthernetInterface::Interfaces::Interface::TransportInfo


                std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::Layer1Info> layer1_info;
                std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::MacInfo> mac_info;
                std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::PhyInfo> phy_info;
                std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface::TransportInfo> transport_info;
                class EthernetPortEnableEnum;


        }; // EthernetInterface::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces::Interface> > interface;


    }; // EthernetInterface::Interfaces


    class Berts : public Entity
    {
        public:
            Berts();
            ~Berts();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Bert : public Entity
        {
            public:
                Bert();
                ~Bert();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value time_left; //type: uint32
                Value port_bert_interval; //type: uint32


            class BertStatus : public Entity
            {
                public:
                    BertStatus();
                    ~BertStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bert_state_enabled; //type: boolean
                    Value data_availability; //type: uint32
                    Value receive_count; //type: uint64
                    Value transmit_count; //type: uint64
                    Value receive_errors; //type: uint64
                    Value error_type; //type: EthernetBertErrCntEnum
                    Value test_pattern; //type: EthernetBertPatternEnum
                    Value device_under_test; //type: EthernetDevEnum
                    Value interface_device; //type: EthernetDevIfEnum


                    class EthernetDevEnum;
                    class EthernetBertErrCntEnum;
                    class EthernetDevIfEnum;
                    class EthernetBertPatternEnum;


            }; // EthernetInterface::Berts::Bert::BertStatus


                std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert::BertStatus> bert_status;


        }; // EthernetInterface::Berts::Bert


            std::vector<std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts::Bert> > bert;


    }; // EthernetInterface::Berts


        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Berts> berts;
        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface::Statistics> statistics;


}; // EthernetInterface


class EtherLinkStateEnum : public Enum
{
    public:
        static const Enum::Value state_undefined;
        static const Enum::Value unknown_state;
        static const Enum::Value available;
        static const Enum::Value not_available;
        static const Enum::Value remote_fault;
        static const Enum::Value invalid_signal;
        static const Enum::Value remote_jabber;
        static const Enum::Value link_loss;
        static const Enum::Value remote_test;
        static const Enum::Value offline;
        static const Enum::Value auto_neg_error;
        static const Enum::Value pmd_link_fault;
        static const Enum::Value frame_loss;
        static const Enum::Value signal_loss;
        static const Enum::Value link_fault;
        static const Enum::Value excessive_ber;
        static const Enum::Value dxs_link_fault;
        static const Enum::Value pxs_link_fault;
        static const Enum::Value security;
        static const Enum::Value phy_not_present;
        static const Enum::Value no_optic_license;
        static const Enum::Value unsupported_module;
        static const Enum::Value dwdm_laser_shut;
        static const Enum::Value wanphy_laser_shut;
        static const Enum::Value incompatible_config;
        static const Enum::Value system_error;
        static const Enum::Value wan_framing_error;
        static const Enum::Value otn_framing_error;

};

class EthernetBertPatternEnum : public Enum
{
    public:
        static const Enum::Value no_test_pattern;
        static const Enum::Value high_frequency;
        static const Enum::Value low_frequency;
        static const Enum::Value mixed_frequency;
        static const Enum::Value continuous_random;
        static const Enum::Value continuous_jitter;
        static const Enum::Value long_continuous_random;
        static const Enum::Value short_continuous_random;
        static const Enum::Value pseudorandom_seed_a;
        static const Enum::Value pseudorandom_seed_b;
        static const Enum::Value prbs31;
        static const Enum::Value square_wave;
        static const Enum::Value pseudorandom;
        static const Enum::Value ethernet_bert_pattern_types;

};

class EthernetPortEnableEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value rx_enabled;
        static const Enum::Value tx_enabled;
        static const Enum::Value enabled;

};

class EthCtrlrAlarmStateEnum : public Enum
{
    public:
        static const Enum::Value alarm_not_supported;
        static const Enum::Value alarm_set;
        static const Enum::Value alarm_not_set;

};

class EthernetDevEnum : public Enum
{
    public:
        static const Enum::Value no_device;
        static const Enum::Value pma_pmd;
        static const Enum::Value wis;
        static const Enum::Value pcs;
        static const Enum::Value phy_xs;
        static const Enum::Value dte_xs;
        static const Enum::Value ethernet_num_dev;

};

class EtherPhyPresentEnum : public Enum
{
    public:
        static const Enum::Value phy_not_present;
        static const Enum::Value phy_present;
        static const Enum::Value no_information;

};

class EthernetDevIfEnum : public Enum
{
    public:
        static const Enum::Value no_interface;
        static const Enum::Value xgmii;
        static const Enum::Value xaui;
        static const Enum::Value ethernet_num_dev_if;

};

class EtherFlowcontrolEnum : public Enum
{
    public:
        static const Enum::Value no_flowcontrol;
        static const Enum::Value egress;
        static const Enum::Value ingress;
        static const Enum::Value bidirectional;

};

class EtherDomAlarmEnum : public Enum
{
    public:
        static const Enum::Value no_information;
        static const Enum::Value alarm_high;
        static const Enum::Value warning_high;
        static const Enum::Value normal;
        static const Enum::Value warning_low;
        static const Enum::Value alarm_low;

};

class EtherPfcEnum : public Enum
{
    public:
        static const Enum::Value no_pfc;
        static const Enum::Value on;

};

class EthernetBertErrCntEnum : public Enum
{
    public:
        static const Enum::Value no_count_type;
        static const Enum::Value bit_error_count;
        static const Enum::Value frame_error_count;
        static const Enum::Value block_error_count;
        static const Enum::Value ethernet_bert_err_cnt_types;

};

class EthernetDuplexEnum : public Enum
{
    public:
        static const Enum::Value ethernet_duplex_invalid;
        static const Enum::Value half_duplex;
        static const Enum::Value full_duplex;

};

class EthernetIpgEnum : public Enum
{
    public:
        static const Enum::Value standard;
        static const Enum::Value non_standard;

};

class EthernetSpeedEnum : public Enum
{
    public:
        static const Enum::Value ethernet_speed_invalid;
        static const Enum::Value ten_mbps;
        static const Enum::Value hundred_mbps;
        static const Enum::Value one_gbps;
        static const Enum::Value ten_gbps;
        static const Enum::Value twenty_five_gbps;
        static const Enum::Value forty_gbps;
        static const Enum::Value fifty_gbps;
        static const Enum::Value hundred_gbps;
        static const Enum::Value ethernet_speed_types_count;

};

class EtherLedStateEnum : public Enum
{
    public:
        static const Enum::Value led_state_unknown;
        static const Enum::Value led_off;
        static const Enum::Value green_on;
        static const Enum::Value green_flashing;
        static const Enum::Value yellow_on;
        static const Enum::Value yellow_flashing;
        static const Enum::Value red_on;
        static const Enum::Value red_flashing;

};

class EthernetFecEnum : public Enum
{
    public:
        static const Enum::Value not_configured;
        static const Enum::Value standard;
        static const Enum::Value disabled;
        static const Enum::Value base_r;

};

class EthernetMediaEnum : public Enum
{
    public:
        static const Enum::Value ethernet_other;
        static const Enum::Value ethernet_unknown;
        static const Enum::Value ethernet_aui;
        static const Enum::Value ethernet_10base5;
        static const Enum::Value ethernet_foirl;
        static const Enum::Value ethernet_10base2;
        static const Enum::Value ethernet_10broad36;
        static const Enum::Value ethernet_10base;
        static const Enum::Value ethernet_10base_thd;
        static const Enum::Value ethernet_10base_tfd;
        static const Enum::Value ethernet_10base_fp;
        static const Enum::Value ethernet_10base_fb;
        static const Enum::Value ethernet_10base_fl;
        static const Enum::Value ethernet_10base_flhd;
        static const Enum::Value ethernet_10base_flfd;
        static const Enum::Value ethernet_100base_t4;
        static const Enum::Value ethernet_100base_tx;
        static const Enum::Value ethernet_100base_txhd;
        static const Enum::Value ethernet_100base_txfd;
        static const Enum::Value ethernet_100base_fx;
        static const Enum::Value ethernet_100base_fxhd;
        static const Enum::Value ethernet_100base_fxfd;
        static const Enum::Value ethernet_100base_ex;
        static const Enum::Value ethernet_100base_exhd;
        static const Enum::Value ethernet_100base_exfd;
        static const Enum::Value ethernet_100base_t2;
        static const Enum::Value ethernet_100base_t2hd;
        static const Enum::Value ethernet_100base_t2fd;
        static const Enum::Value ethernet_1000base_x;
        static const Enum::Value ethernet_1000base_xhd;
        static const Enum::Value ethernet_1000base_xfd;
        static const Enum::Value ethernet_1000base_lx;
        static const Enum::Value ethernet_1000base_lxhd;
        static const Enum::Value ethernet_1000base_lxfd;
        static const Enum::Value ethernet_1000base_sx;
        static const Enum::Value ethernet_1000base_sxhd;
        static const Enum::Value ethernet_1000base_sxfd;
        static const Enum::Value ethernet_1000base_cx;
        static const Enum::Value ethernet_1000base_cxhd;
        static const Enum::Value ethernet_1000base_cxfd;
        static const Enum::Value ethernet_1000base;
        static const Enum::Value ethernet_1000base_thd;
        static const Enum::Value ethernet_1000base_tfd;
        static const Enum::Value ethernet_10gbase_x;
        static const Enum::Value ethernet_10gbase_lx4;
        static const Enum::Value ethernet_10gbase_r;
        static const Enum::Value ethernet_10gbase_er;
        static const Enum::Value ethernet_10gbase_lr;
        static const Enum::Value ethernet_10gbase_sr;
        static const Enum::Value ethernet_10gbase_w;
        static const Enum::Value ethernet_10gbase_ew;
        static const Enum::Value ethernet_10gbase_lw;
        static const Enum::Value ethernet_10gbase_sw;
        static const Enum::Value ethernet_1000base_zx;
        static const Enum::Value ethernet_1000base_cwdm;
        static const Enum::Value ethernet_1000base_cwdm_1470;
        static const Enum::Value ethernet_1000base_cwdm_1490;
        static const Enum::Value ethernet_1000base_cwdm_1510;
        static const Enum::Value ethernet_1000base_cwdm_1530;
        static const Enum::Value ethernet_1000base_cwdm_1550;
        static const Enum::Value ethernet_1000base_cwdm_1570;
        static const Enum::Value ethernet_1000base_cwdm_1590;
        static const Enum::Value ethernet_1000base_cwdm_1610;
        static const Enum::Value ethernet_10gbase_zr;
        static const Enum::Value ethernet_10gbase_dwdm;
        static const Enum::Value ethernet_100gbase_lr4;
        static const Enum::Value ethernet_1000base_dwdm;
        static const Enum::Value ethernet_1000base_dwdm_1533;
        static const Enum::Value ethernet_1000base_dwdm_1537;
        static const Enum::Value ethernet_1000base_dwdm_1541;
        static const Enum::Value ethernet_1000base_dwdm_1545;
        static const Enum::Value ethernet_1000base_dwdm_1549;
        static const Enum::Value ethernet_1000base_dwdm_1553;
        static const Enum::Value ethernet_1000base_dwdm_1557;
        static const Enum::Value ethernet_1000base_dwdm_1561;
        static const Enum::Value ethernet_40gbase_lr4;
        static const Enum::Value ethernet_40gbase_er4;
        static const Enum::Value ethernet_100gbase_er4;
        static const Enum::Value ethernet_1000base_ex;
        static const Enum::Value ethernet_1000base_bx10_d;
        static const Enum::Value ethernet_1000base_bx10_u;
        static const Enum::Value ethernet_1000base_dwdm_1561_42;
        static const Enum::Value ethernet_1000base_dwdm_1560_61;
        static const Enum::Value ethernet_1000base_dwdm_1559_79;
        static const Enum::Value ethernet_1000base_dwdm_1558_98;
        static const Enum::Value ethernet_1000base_dwdm_1558_17;
        static const Enum::Value ethernet_1000base_dwdm_1557_36;
        static const Enum::Value ethernet_1000base_dwdm_1556_55;
        static const Enum::Value ethernet_1000base_dwdm_1555_75;
        static const Enum::Value ethernet_1000base_dwdm_1554_94;
        static const Enum::Value ethernet_1000base_dwdm_1554_13;
        static const Enum::Value ethernet_1000base_dwdm_1553_33;
        static const Enum::Value ethernet_1000base_dwdm_1552_52;
        static const Enum::Value ethernet_1000base_dwdm_1551_72;
        static const Enum::Value ethernet_1000base_dwdm_1550_92;
        static const Enum::Value ethernet_1000base_dwdm_1550_12;
        static const Enum::Value ethernet_1000base_dwdm_1549_32;
        static const Enum::Value ethernet_1000base_dwdm_1548_51;
        static const Enum::Value ethernet_1000base_dwdm_1547_72;
        static const Enum::Value ethernet_1000base_dwdm_1546_92;
        static const Enum::Value ethernet_1000base_dwdm_1546_12;
        static const Enum::Value ethernet_1000base_dwdm_1545_32;
        static const Enum::Value ethernet_1000base_dwdm_1544_53;
        static const Enum::Value ethernet_1000base_dwdm_1543_73;
        static const Enum::Value ethernet_1000base_dwdm_1542_94;
        static const Enum::Value ethernet_1000base_dwdm_1542_14;
        static const Enum::Value ethernet_1000base_dwdm_1541_35;
        static const Enum::Value ethernet_1000base_dwdm_1540_56;
        static const Enum::Value ethernet_1000base_dwdm_1539_77;
        static const Enum::Value ethernet_1000base_dwdm_1538_98;
        static const Enum::Value ethernet_1000base_dwdm_1538_19;
        static const Enum::Value ethernet_1000base_dwdm_1537_40;
        static const Enum::Value ethernet_1000base_dwdm_1536_61;
        static const Enum::Value ethernet_1000base_dwdm_1535_82;
        static const Enum::Value ethernet_1000base_dwdm_1535_04;
        static const Enum::Value ethernet_1000base_dwdm_1534_25;
        static const Enum::Value ethernet_1000base_dwdm_1533_47;
        static const Enum::Value ethernet_1000base_dwdm_1532_68;
        static const Enum::Value ethernet_1000base_dwdm_1531_90;
        static const Enum::Value ethernet_1000base_dwdm_1531_12;
        static const Enum::Value ethernet_1000base_dwdm_1530_33;
        static const Enum::Value ethernet_1000base_dwdm_tunable;
        static const Enum::Value ethernet_10gbase_dwdm_1561_42;
        static const Enum::Value ethernet_10gbase_dwdm_1560_61;
        static const Enum::Value ethernet_10gbase_dwdm_1559_79;
        static const Enum::Value ethernet_10gbase_dwdm_1558_98;
        static const Enum::Value ethernet_10gbase_dwdm_1558_17;
        static const Enum::Value ethernet_10gbase_dwdm_1557_36;
        static const Enum::Value ethernet_10gbase_dwdm_1556_55;
        static const Enum::Value ethernet_10gbase_dwdm_1555_75;
        static const Enum::Value ethernet_10gbase_dwdm_1554_94;
        static const Enum::Value ethernet_10gbase_dwdm_1554_13;
        static const Enum::Value ethernet_10gbase_dwdm_1553_33;
        static const Enum::Value ethernet_10gbase_dwdm_1552_52;
        static const Enum::Value ethernet_10gbase_dwdm_1551_72;
        static const Enum::Value ethernet_10gbase_dwdm_1550_92;
        static const Enum::Value ethernet_10gbase_dwdm_1550_12;
        static const Enum::Value ethernet_10gbase_dwdm_1549_32;
        static const Enum::Value ethernet_10gbase_dwdm_1548_51;
        static const Enum::Value ethernet_10gbase_dwdm_1547_72;
        static const Enum::Value ethernet_10gbase_dwdm_1546_92;
        static const Enum::Value ethernet_10gbase_dwdm_1546_12;
        static const Enum::Value ethernet_10gbase_dwdm_1545_32;
        static const Enum::Value ethernet_10gbase_dwdm_1544_53;
        static const Enum::Value ethernet_10gbase_dwdm_1543_73;
        static const Enum::Value ethernet_10gbase_dwdm_1542_94;
        static const Enum::Value ethernet_10gbase_dwdm_1542_14;
        static const Enum::Value ethernet_10gbase_dwdm_1541_35;
        static const Enum::Value ethernet_10gbase_dwdm_1540_56;
        static const Enum::Value ethernet_10gbase_dwdm_1539_77;
        static const Enum::Value ethernet_10gbase_dwdm_1538_98;
        static const Enum::Value ethernet_10gbase_dwdm_1538_19;
        static const Enum::Value ethernet_10gbase_dwdm_1537_40;
        static const Enum::Value ethernet_10gbase_dwdm_1536_61;
        static const Enum::Value ethernet_10gbase_dwdm_1535_82;
        static const Enum::Value ethernet_10gbase_dwdm_1535_04;
        static const Enum::Value ethernet_10gbase_dwdm_1534_25;
        static const Enum::Value ethernet_10gbase_dwdm_1533_47;
        static const Enum::Value ethernet_10gbase_dwdm_1532_68;
        static const Enum::Value ethernet_10gbase_dwdm_1531_90;
        static const Enum::Value ethernet_10gbase_dwdm_1531_12;
        static const Enum::Value ethernet_10gbase_dwdm_1530_33;
        static const Enum::Value ethernet_10gbase_dwdm_tunable;
        static const Enum::Value ethernet_40gbase_dwdm_1561_42;
        static const Enum::Value ethernet_40gbase_dwdm_1560_61;
        static const Enum::Value ethernet_40gbase_dwdm_1559_79;
        static const Enum::Value ethernet_40gbase_dwdm_1558_98;
        static const Enum::Value ethernet_40gbase_dwdm_1558_17;
        static const Enum::Value ethernet_40gbase_dwdm_1557_36;
        static const Enum::Value ethernet_40gbase_dwdm_1556_55;
        static const Enum::Value ethernet_40gbase_dwdm_1555_75;
        static const Enum::Value ethernet_40gbase_dwdm_1554_94;
        static const Enum::Value ethernet_40gbase_dwdm_1554_13;
        static const Enum::Value ethernet_40gbase_dwdm_1553_33;
        static const Enum::Value ethernet_40gbase_dwdm_1552_52;
        static const Enum::Value ethernet_40gbase_dwdm_1551_72;
        static const Enum::Value ethernet_40gbase_dwdm_1550_92;
        static const Enum::Value ethernet_40gbase_dwdm_1550_12;
        static const Enum::Value ethernet_40gbase_dwdm_1549_32;
        static const Enum::Value ethernet_40gbase_dwdm_1548_51;
        static const Enum::Value ethernet_40gbase_dwdm_1547_72;
        static const Enum::Value ethernet_40gbase_dwdm_1546_92;
        static const Enum::Value ethernet_40gbase_dwdm_1546_12;
        static const Enum::Value ethernet_40gbase_dwdm_1545_32;
        static const Enum::Value ethernet_40gbase_dwdm_1544_53;
        static const Enum::Value ethernet_40gbase_dwdm_1543_73;
        static const Enum::Value ethernet_40gbase_dwdm_1542_94;
        static const Enum::Value ethernet_40gbase_dwdm_1542_14;
        static const Enum::Value ethernet_40gbase_dwdm_1541_35;
        static const Enum::Value ethernet_40gbase_dwdm_1540_56;
        static const Enum::Value ethernet_40gbase_dwdm_1539_77;
        static const Enum::Value ethernet_40gbase_dwdm_1538_98;
        static const Enum::Value ethernet_40gbase_dwdm_1538_19;
        static const Enum::Value ethernet_40gbase_dwdm_1537_40;
        static const Enum::Value ethernet_40gbase_dwdm_1536_61;
        static const Enum::Value ethernet_40gbase_dwdm_1535_82;
        static const Enum::Value ethernet_40gbase_dwdm_1535_04;
        static const Enum::Value ethernet_40gbase_dwdm_1534_25;
        static const Enum::Value ethernet_40gbase_dwdm_1533_47;
        static const Enum::Value ethernet_40gbase_dwdm_1532_68;
        static const Enum::Value ethernet_40gbase_dwdm_1531_90;
        static const Enum::Value ethernet_40gbase_dwdm_1531_12;
        static const Enum::Value ethernet_40gbase_dwdm_1530_33;
        static const Enum::Value ethernet_40gbase_dwdm_tunable;
        static const Enum::Value ethernet_100gbase_dwdm_1561_42;
        static const Enum::Value ethernet_100gbase_dwdm_1560_61;
        static const Enum::Value ethernet_100gbase_dwdm_1559_79;
        static const Enum::Value ethernet_100gbase_dwdm_1558_98;
        static const Enum::Value ethernet_100gbase_dwdm_1558_17;
        static const Enum::Value ethernet_100gbase_dwdm_1557_36;
        static const Enum::Value ethernet_100gbase_dwdm_1556_55;
        static const Enum::Value ethernet_100gbase_dwdm_1555_75;
        static const Enum::Value ethernet_100gbase_dwdm_1554_94;
        static const Enum::Value ethernet_100gbase_dwdm_1554_13;
        static const Enum::Value ethernet_100gbase_dwdm_1553_33;
        static const Enum::Value ethernet_100gbase_dwdm_1552_52;
        static const Enum::Value ethernet_100gbase_dwdm_1551_72;
        static const Enum::Value ethernet_100gbase_dwdm_1550_92;
        static const Enum::Value ethernet_100gbase_dwdm_1550_12;
        static const Enum::Value ethernet_100gbase_dwdm_1549_32;
        static const Enum::Value ethernet_100gbase_dwdm_1548_51;
        static const Enum::Value ethernet_100gbase_dwdm_1547_72;
        static const Enum::Value ethernet_100gbase_dwdm_1546_92;
        static const Enum::Value ethernet_100gbase_dwdm_1546_12;
        static const Enum::Value ethernet_100gbase_dwdm_1545_32;
        static const Enum::Value ethernet_100gbase_dwdm_1544_53;
        static const Enum::Value ethernet_100gbase_dwdm_1543_73;
        static const Enum::Value ethernet_100gbase_dwdm_1542_94;
        static const Enum::Value ethernet_100gbase_dwdm_1542_14;
        static const Enum::Value ethernet_100gbase_dwdm_1541_35;
        static const Enum::Value ethernet_100gbase_dwdm_1540_56;
        static const Enum::Value ethernet_100gbase_dwdm_1539_77;
        static const Enum::Value ethernet_100gbase_dwdm_1538_98;
        static const Enum::Value ethernet_100gbase_dwdm_1538_19;
        static const Enum::Value ethernet_100gbase_dwdm_1537_40;
        static const Enum::Value ethernet_100gbase_dwdm_1536_61;
        static const Enum::Value ethernet_100gbase_dwdm_1535_82;
        static const Enum::Value ethernet_100gbase_dwdm_1535_04;
        static const Enum::Value ethernet_100gbase_dwdm_1534_25;
        static const Enum::Value ethernet_100gbase_dwdm_1533_47;
        static const Enum::Value ethernet_100gbase_dwdm_1532_68;
        static const Enum::Value ethernet_100gbase_dwdm_1531_90;
        static const Enum::Value ethernet_100gbase_dwdm_1531_12;
        static const Enum::Value ethernet_100gbase_dwdm_1530_33;
        static const Enum::Value ethernet_100gbase_dwdm_tunable;
        static const Enum::Value ethernet_40gbase_kr4;
        static const Enum::Value ethernet_40gbase_cr4;
        static const Enum::Value ethernet_40gbase_sr4;
        static const Enum::Value ethernet_40gbase_fr;
        static const Enum::Value ethernet_100gbase_cr10;
        static const Enum::Value ethernet_100gbase_sr10;
        static const Enum::Value ethernet_40gbase_csr4;
        static const Enum::Value ethernet_10gbase_cwdm;
        static const Enum::Value ethernet_10gbase_cwdm_tunable;
        static const Enum::Value ethernet_10gbase_cwdm_1470;
        static const Enum::Value ethernet_10gbase_cwdm_1490;
        static const Enum::Value ethernet_10gbase_cwdm_1510;
        static const Enum::Value ethernet_10gbase_cwdm_1530;
        static const Enum::Value ethernet_10gbase_cwdm_1550;
        static const Enum::Value ethernet_10gbase_cwdm_1570;
        static const Enum::Value ethernet_10gbase_cwdm_1590;
        static const Enum::Value ethernet_10gbase_cwdm_1610;
        static const Enum::Value ethernet_40gbase_cwdm;
        static const Enum::Value ethernet_40gbase_cwdm_tunable;
        static const Enum::Value ethernet_40gbase_cwdm_1470;
        static const Enum::Value ethernet_40gbase_cwdm_1490;
        static const Enum::Value ethernet_40gbase_cwdm_1510;
        static const Enum::Value ethernet_40gbase_cwdm_1530;
        static const Enum::Value ethernet_40gbase_cwdm_1550;
        static const Enum::Value ethernet_40gbase_cwdm_1570;
        static const Enum::Value ethernet_40gbase_cwdm_1590;
        static const Enum::Value ethernet_40gbase_cwdm_1610;
        static const Enum::Value ethernet_100gbase_cwdm;
        static const Enum::Value ethernet_100gbase_cwdm_tunable;
        static const Enum::Value ethernet_100gbase_cwdm_1470;
        static const Enum::Value ethernet_100gbase_cwdm_1490;
        static const Enum::Value ethernet_100gbase_cwdm_1510;
        static const Enum::Value ethernet_100gbase_cwdm_1530;
        static const Enum::Value ethernet_100gbase_cwdm_1550;
        static const Enum::Value ethernet_100gbase_cwdm_1570;
        static const Enum::Value ethernet_100gbase_cwdm_1590;
        static const Enum::Value ethernet_100gbase_cwdm_1610;
        static const Enum::Value ethernet_40gbase_elpb;
        static const Enum::Value ethernet_100gbase_elpb;
        static const Enum::Value ethernet_100gbase_lr10;
        static const Enum::Value ethernet_40gbase;
        static const Enum::Value ethernet_100gbase_kp4;
        static const Enum::Value ethernet_100gbase_kr4;
        static const Enum::Value ethernet_10gbase_lrm;
        static const Enum::Value ethernet_10gbase_cx4;
        static const Enum::Value ethernet_10gbase;
        static const Enum::Value ethernet_10gbase_kx4;
        static const Enum::Value ethernet_10gbase_kr;
        static const Enum::Value ethernet_10gbase_pr;
        static const Enum::Value ethernet_100base_lx;
        static const Enum::Value ethernet_100base_zx;
        static const Enum::Value ethernet_1000base_bx_d;
        static const Enum::Value ethernet_1000base_bx_u;
        static const Enum::Value ethernet_1000base_bx20_d;
        static const Enum::Value ethernet_1000base_bx20_u;
        static const Enum::Value ethernet_1000base_bx40_d;
        static const Enum::Value ethernet_1000base_bx40_da;
        static const Enum::Value ethernet_1000base_bx40_u;
        static const Enum::Value ethernet_1000base_bx80_d;
        static const Enum::Value ethernet_1000base_bx80_u;
        static const Enum::Value ethernet_1000base_bx120_d;
        static const Enum::Value ethernet_1000base_bx120_u;
        static const Enum::Value ethernet_10gbase_bx_d;
        static const Enum::Value ethernet_10gbase_bx_u;
        static const Enum::Value ethernet_10gbase_bx10_d;
        static const Enum::Value ethernet_10gbase_bx10_u;
        static const Enum::Value ethernet_10gbase_bx20_d;
        static const Enum::Value ethernet_10gbase_bx20_u;
        static const Enum::Value ethernet_10gbase_bx40_d;
        static const Enum::Value ethernet_10gbase_bx40_u;
        static const Enum::Value ethernet_10gbase_bx80_d;
        static const Enum::Value ethernet_10gbase_bx80_u;
        static const Enum::Value ethernet_10gbase_bx120_d;
        static const Enum::Value ethernet_10gbase_bx120_u;
        static const Enum::Value ethernet_1000base_dr_lx;
        static const Enum::Value ethernet_100gbase_er4l;
        static const Enum::Value ethernet_100gbase_sr4;
        static const Enum::Value ethernet_40gbase_sr_bd;
        static const Enum::Value ethernet_25gbase_cr;
        static const Enum::Value ethernet_25gbase_cr_s;
        static const Enum::Value ethernet_25gbase_kr;
        static const Enum::Value ethernet_25gbase_kr_s;
        static const Enum::Value ethernet_25gbase_r;
        static const Enum::Value ethernet_25gbase_sr;
        static const Enum::Value ethernet_25gbase_dwdm;
        static const Enum::Value ethernet_25gbase_dwdm_tunable;
        static const Enum::Value ethernet_25gbase_cwdm;
        static const Enum::Value ethernet_25gbase_cwdm_tunable;
        static const Enum::Value ethernet_100gbase_psm4;
        static const Enum::Value ethernet_100gbase_er10;
        static const Enum::Value ethernet_100gbase_er10l;
        static const Enum::Value ethernet_100gbase_acc;
        static const Enum::Value ethernet_100gbase_aoc;
        static const Enum::Value ethernet_100gbase_cwdm4;
        static const Enum::Value ethernet_40gbase_psm4;
        static const Enum::Value ethernet_100gbase_cr4;
        static const Enum::Value ethernet_100gbase_act_loop;
        static const Enum::Value ethernet_100gbase_pas_loop;
        static const Enum::Value ethernet_base_max;

};

class EtherAinsStatusEnum : public Enum
{
    public:
        static const Enum::Value ains_soak_status_none;
        static const Enum::Value ains_soak_status_pending;
        static const Enum::Value ains_soak_status_running;

};

class EthernetLoopbackEnum : public Enum
{
    public:
        static const Enum::Value no_loopback;
        static const Enum::Value internal;
        static const Enum::Value line;
        static const Enum::Value external;

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_OPER_ */

