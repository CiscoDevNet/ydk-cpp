#ifndef _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_
#define _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_link_oam_oper {

class EtherLinkOam : public Entity
{
    public:
        EtherLinkOam();
        ~EtherLinkOam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class DiscoveryInfoInterfaces : public Entity
    {
        public:
            DiscoveryInfoInterfaces();
            ~DiscoveryInfoInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DiscoveryInfoInterface : public Entity
        {
            public:
                DiscoveryInfoInterface();
                ~DiscoveryInfoInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value member_interface; //type: string
                Value name; //type: string
                Value operational_status; //type: OperationalStateEnum
                Value loopback_mode; //type: LoopbackStatusEnum
                Value local_mode; //type: ModeEnum
                Value miswired; //type: boolean
                Value local_mwd_key; //type: uint32
                Value local_function_unidirectional; //type: boolean
                Value local_function_loopback; //type: boolean
                Value local_function_event; //type: boolean
                Value local_functionvariable; //type: boolean
                Value local_revision; //type: uint32
                Value local_mtu; //type: uint32
                Value local_operational; //type: boolean
                Value local_evaluating; //type: boolean
                Value remote_mode; //type: ModeEnum
                Value remote_unidirectional; //type: boolean
                Value remote_loopback; //type: boolean
                Value remote_event; //type: boolean
                Value remote_variable; //type: boolean
                Value remote_mtu; //type: uint32
                Value remote_mac_address; //type: string
                Value remote_vendor_oui; //type: string
                Value remote_revision; //type: uint16
                Value remote_vendor_info; //type: uint32
                Value remote_mwd_key; //type: uint32
                Value operational_status_valid; //type: boolean
                Value loopback_mode_valid; //type: boolean
                Value local_mode_valid; //type: boolean
                Value miswired_valid; //type: boolean
                Value local_mwd_key_valid; //type: boolean
                Value local_function_unidirectional_valid; //type: boolean
                Value local_function_loopback_valid; //type: boolean
                Value local_function_event_valid; //type: boolean
                Value local_functionvariable_valid; //type: boolean
                Value local_revisionvalid; //type: boolean
                Value local_mtu_valid; //type: boolean
                Value remote_mode_valid; //type: boolean
                Value remote_unidirectional_valid; //type: boolean
                Value remote_loopback_valid; //type: boolean
                Value remote_event_valid; //type: boolean
                Value remote_variable_valid; //type: boolean
                Value remote_mtu_valid; //type: boolean
                Value remote_mac_address_valid; //type: boolean
                Value remote_vendor_oui_valid; //type: boolean
                Value remote_revisionvalid; //type: boolean
                Value remote_vendor_info_valid; //type: boolean
                Value remote_mwd_key_valid; //type: boolean
                Value received_at_risk_notification_timestamp; //type: uint64
                Value received_at_risk_notification_time_remaining; //type: uint16


                class ModeEnum;
                class LoopbackStatusEnum;
                class OperationalStateEnum;
                class ModeEnum;


        }; // EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::DiscoveryInfoInterfaces::DiscoveryInfoInterface> > discovery_info_interface;


    }; // EtherLinkOam::DiscoveryInfoInterfaces


    class InterfaceStateInterfaces : public Entity
    {
        public:
            InterfaceStateInterfaces();
            ~InterfaceStateInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceStateInterface : public Entity
        {
            public:
                InterfaceStateInterface();
                ~InterfaceStateInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value member_interface; //type: string
                Value protocol_code; //type: ProtocolStateEnum
                Value rx_fault; //type: boolean
                Value local_mwd_key; //type: uint32
                Value remote_mwd_key_present; //type: boolean
                Value remote_mwd_key; //type: uint32


            class Errors : public Entity
            {
                public:
                    Errors();
                    ~Errors();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value pfi_reason; //type: string
                    Value pfi_error_code; //type: uint32
                    Value platform_reason; //type: string
                    Value platform_error_code; //type: uint32
                    Value spio_reason; //type: string
                    Value spio_error_code; //type: uint32
                    Value epi_reason; //type: string
                    Value epi_error_code; //type: uint32
                    Value caps_add_reason; //type: string
                    Value caps_add_error_code; //type: uint32




            }; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors


            class EfdTriggers : public Entity
            {
                public:
                    EfdTriggers();
                    ~EfdTriggers();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value link_fault_received; //type: boolean
                    Value discovery_timed_out; //type: boolean
                    Value capabilities_conflict; //type: boolean
                    Value wiring_conflict; //type: boolean
                    Value session_down; //type: boolean




            }; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers


                std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers> efd_triggers;
                std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors> errors;
                class ProtocolStateEnum;


        }; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface> > interface_state_interface;


    }; // EtherLinkOam::InterfaceStateInterfaces


    class RunningConfigInterfaces : public Entity
    {
        public:
            RunningConfigInterfaces();
            ~RunningConfigInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RunningConfigInterface : public Entity
        {
            public:
                RunningConfigInterface();
                ~RunningConfigInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value member_interface; //type: string
                Value fast_hello_interval_enabled; //type: boolean
                Value link_monitor_enabled; //type: boolean
                Value remote_loopback_enabled; //type: boolean
                Value mib_retrieval_enabled; //type: boolean
                Value udlf_enabled; //type: boolean
                Value mode; //type: ModeEnum
                Value connection_timeout; //type: uint8
                Value symbol_period_window; //type: uint32
                Value symbol_period_threshold_low; //type: uint64
                Value symbol_period_threshold_high; //type: uint64
                Value frame_window; //type: uint32
                Value frame_threshold_low; //type: uint32
                Value frame_threshold_high; //type: uint32
                Value frame_period_window; //type: uint32
                Value frame_period_threshold_low; //type: uint32
                Value frame_period_threshold_high; //type: uint32
                Value frame_seconds_window; //type: uint32
                Value frame_seconds_threshold_low; //type: uint32
                Value frame_seconds_threshold_high; //type: uint32
                Value high_threshold_action; //type: ActionEnum
                Value link_fault_action; //type: ActionEnum
                Value dying_gasp_action; //type: ActionEnum
                Value critical_event_action; //type: ActionEnum
                Value discovery_timeout_action; //type: ActionEnum
                Value capabilities_conflict_action; //type: ActionEnum
                Value wiring_conflict_action; //type: ActionEnum
                Value session_up_action; //type: ActionEnum
                Value session_down_action; //type: ActionEnum
                Value remote_loopback_action; //type: ActionEnum
                Value require_remote_mode; //type: ModeEnum
                Value require_remote_mib_retrieval; //type: boolean
                Value require_loopback; //type: boolean
                Value require_link_monitoring; //type: boolean
                Value fast_hello_interval_enabled_overridden; //type: boolean
                Value link_monitoring_enabled_overridden; //type: boolean
                Value remote_loopback_enabled_overridden; //type: boolean
                Value mib_retrieval_enabled_overridden; //type: boolean
                Value udlf_enabled_overridden; //type: boolean
                Value mode_overridden; //type: boolean
                Value connection_timeout_overridden; //type: boolean
                Value symbol_period_window_overridden; //type: boolean
                Value symbol_period_threshold_low_overridden; //type: boolean
                Value symbol_period_threshold_high_overridden; //type: boolean
                Value frame_window_overridden; //type: boolean
                Value frame_threshold_low_overridden; //type: boolean
                Value frame_threshold_high_overridden; //type: boolean
                Value frame_period_window_overridden; //type: boolean
                Value frame_period_threshold_low_overridden; //type: boolean
                Value frame_period_threshold_high_overridden; //type: boolean
                Value frame_seconds_window_overridden; //type: boolean
                Value frame_seconds_threshold_low_overridden; //type: boolean
                Value frame_seconds_threshold_high_overridden; //type: boolean
                Value high_threshold_action_overridden; //type: boolean
                Value link_fault_action_overridden; //type: boolean
                Value dying_gasp_action_overridden; //type: boolean
                Value critical_event_action_overridden; //type: boolean
                Value discovery_timeout_action_overridden; //type: boolean
                Value capabilities_conflict_action_overridden; //type: boolean
                Value wiring_conflict_action_overridden; //type: boolean
                Value session_down_action_overridden; //type: boolean
                Value session_up_action_overridden; //type: boolean
                Value remote_loopback_action_overridden; //type: boolean
                Value require_mode_overridden; //type: boolean
                Value require_mib_retrieval_overridden; //type: boolean
                Value require_loopback_overridden; //type: boolean
                Value require_link_monitoring_overridden; //type: boolean


                class ActionEnum;
                class ActionEnum;
                class ActionEnum;
                class ActionEnum;
                class ActionEnum;
                class ActionEnum;
                class ModeEnum;
                class ActionEnum;
                class ModeEnum;
                class ActionEnum;
                class ActionEnum;
                class ActionEnum;


        }; // EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::RunningConfigInterfaces::RunningConfigInterface> > running_config_interface;


    }; // EtherLinkOam::RunningConfigInterfaces


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class Summary : public Entity
            {
                public:
                    Summary();
                    ~Summary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interfaces; //type: uint32
                    Value port_down; //type: uint32
                    Value passive_wait; //type: uint32
                    Value active_send; //type: uint32
                    Value evaluating; //type: uint32
                    Value local_accept; //type: uint32
                    Value local_reject; //type: uint32
                    Value remote_reject; //type: uint32
                    Value operational; //type: uint32
                    Value loopback_mode; //type: uint32
                    Value miswired_connections; //type: uint32
                    Value events; //type: uint64
                    Value local_events; //type: uint64
                    Value local_symbol_period; //type: uint64
                    Value local_frame; //type: uint64
                    Value local_frame_period; //type: uint64
                    Value local_frame_seconds; //type: uint64
                    Value remote_events; //type: uint64
                    Value remote_symbol_period; //type: uint64
                    Value remote_frame; //type: uint64
                    Value remote_frame_period; //type: uint64
                    Value remote_frame_seconds; //type: uint64




            }; // EtherLinkOam::Nodes::Node::Summary


                std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::Nodes::Node::Summary> summary;


        }; // EtherLinkOam::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::Nodes::Node> > node;


    }; // EtherLinkOam::Nodes


    class EventLogEntryInterfaces : public Entity
    {
        public:
            EventLogEntryInterfaces();
            ~EventLogEntryInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EventLogEntryInterface : public Entity
        {
            public:
                EventLogEntryInterface();
                ~EventLogEntryInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value member_interface; //type: string


            class EventLogEntryIndexes : public Entity
            {
                public:
                    EventLogEntryIndexes();
                    ~EventLogEntryIndexes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class EventLogEntryIndex : public Entity
                {
                    public:
                        EventLogEntryIndex();
                        ~EventLogEntryIndex();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value event_log_entry_index; //type: string
                        Value index_; //type: uint32
                        Value handle; //type: string
                        Value oui; //type: string
                        Value timestamp; //type: uint64
                        Value type; //type: LogEnum
                        Value location; //type: LogLocationEnum
                        Value event_total; //type: uint32
                        Value action_taken; //type: ActionEnum
                        Value window; //type: uint64
                        Value threshold; //type: uint64
                        Value local_high_threshold; //type: uint64
                        Value value_; //type: uint64
                        Value running_total; //type: uint64
                        Value window_config_units; //type: uint64
                        Value threshold_config_units; //type: uint64
                        Value local_high_threshold_config_units; //type: uint64
                        Value value_config_units; //type: uint64


                        class ActionEnum;
                        class LogLocationEnum;
                        class LogEnum;


                }; // EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes::EventLogEntryIndex> > event_log_entry_index;


            }; // EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes


                std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface::EventLogEntryIndexes> event_log_entry_indexes;


        }; // EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces::EventLogEntryInterface> > event_log_entry_interface;


    }; // EtherLinkOam::EventLogEntryInterfaces


    class StatsInterfaces : public Entity
    {
        public:
            StatsInterfaces();
            ~StatsInterfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class StatsInterface : public Entity
        {
            public:
                StatsInterface();
                ~StatsInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value member_interface; //type: string
                Value information_tx; //type: uint32
                Value information_rx; //type: uint32
                Value unique_event_notification_tx; //type: uint32
                Value unique_event_notification_rx; //type: uint32
                Value duplicate_event_notification_tx; //type: uint32
                Value duplicate_event_notification_rx; //type: uint32
                Value loopback_control_tx; //type: uint32
                Value loopback_control_rx; //type: uint32
                Value variable_request_tx; //type: uint32
                Value variable_request_rx; //type: uint32
                Value variable_response_tx; //type: uint32
                Value variable_response_rx; //type: uint32
                Value org_specific_tx; //type: uint32
                Value org_specific_rx; //type: uint32
                Value unsupported_codes_tx; //type: uint32
                Value unsupported_codes_rx; //type: uint32
                Value frames_lost_due_to_oam; //type: uint32
                Value fixed_frames_rx; //type: uint32
                Value local_error_symbol_period_records; //type: uint32
                Value local_error_frame_records; //type: uint32
                Value local_error_frame_period_records; //type: uint32
                Value local_error_frame_second_records; //type: uint32
                Value remote_error_symbol_period_records; //type: uint32
                Value remote_error_frame_records; //type: uint32
                Value remote_error_frame_period_records; //type: uint32
                Value remote_error_frame_second_records; //type: uint32




        }; // EtherLinkOam::StatsInterfaces::StatsInterface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::StatsInterfaces::StatsInterface> > stats_interface;


    }; // EtherLinkOam::StatsInterfaces


        std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::DiscoveryInfoInterfaces> discovery_info_interfaces;
        std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::EventLogEntryInterfaces> event_log_entry_interfaces;
        std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces> interface_state_interfaces;
        std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::Nodes> nodes;
        std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::RunningConfigInterfaces> running_config_interfaces;
        std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::StatsInterfaces> stats_interfaces;


}; // EtherLinkOam


class LogEnum : public Enum
{
    public:
        static const Enum::Value log_type_symbol_event;
        static const Enum::Value log_type_period_event;
        static const Enum::Value log_type_frame_event;
        static const Enum::Value log_type_secs_event;
        static const Enum::Value log_type_link_fault;
        static const Enum::Value log_type_dying_gasp;
        static const Enum::Value log_type_critical_event;

};

class LogLocationEnum : public Enum
{
    public:
        static const Enum::Value log_location_local;
        static const Enum::Value log_location_remote;

};

class LoopbackStatusEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value initiating;
        static const Enum::Value master_loopback;
        static const Enum::Value terminating;
        static const Enum::Value local_loopback;
        static const Enum::Value unknown;

};

class OperationalStateEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value link_fault;
        static const Enum::Value passive_wait;
        static const Enum::Value active_send_local;
        static const Enum::Value send_local_and_remote;
        static const Enum::Value send_local_and_remote_ok;
        static const Enum::Value peering_locally_rejected;
        static const Enum::Value peering_remotely_rejected;
        static const Enum::Value operational;
        static const Enum::Value operational_half_duplex;

};

class ModeEnum : public Enum
{
    public:
        static const Enum::Value passive;
        static const Enum::Value active;
        static const Enum::Value dont_care;

};

class ActionEnum : public Enum
{
    public:
        static const Enum::Value no_action;
        static const Enum::Value disable_interface;
        static const Enum::Value log;
        static const Enum::Value efd;

};

class ProtocolStateEnum : public Enum
{
    public:
        static const Enum::Value protocol_state_inactive;
        static const Enum::Value protocol_state_fault;
        static const Enum::Value protocol_state_active_send_local;
        static const Enum::Value protocol_state_passive_wait;
        static const Enum::Value protocol_state_send_local_remote;
        static const Enum::Value protocol_state_send_local_remote_ok;
        static const Enum::Value protocol_state_send_any;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_ */

