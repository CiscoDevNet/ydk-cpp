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


                YLeaf member_interface; //type: string
                YLeaf name; //type: string
                YLeaf operational_status; //type: OperationalStateEnum
                YLeaf loopback_mode; //type: LoopbackStatusEnum
                YLeaf local_mode; //type: ModeEnum
                YLeaf miswired; //type: boolean
                YLeaf local_mwd_key; //type: uint32
                YLeaf local_function_unidirectional; //type: boolean
                YLeaf local_function_loopback; //type: boolean
                YLeaf local_function_event; //type: boolean
                YLeaf local_functionvariable; //type: boolean
                YLeaf local_revision; //type: uint32
                YLeaf local_mtu; //type: uint32
                YLeaf local_operational; //type: boolean
                YLeaf local_evaluating; //type: boolean
                YLeaf remote_mode; //type: ModeEnum
                YLeaf remote_unidirectional; //type: boolean
                YLeaf remote_loopback; //type: boolean
                YLeaf remote_event; //type: boolean
                YLeaf remote_variable; //type: boolean
                YLeaf remote_mtu; //type: uint32
                YLeaf remote_mac_address; //type: string
                YLeaf remote_vendor_oui; //type: string
                YLeaf remote_revision; //type: uint16
                YLeaf remote_vendor_info; //type: uint32
                YLeaf remote_mwd_key; //type: uint32
                YLeaf operational_status_valid; //type: boolean
                YLeaf loopback_mode_valid; //type: boolean
                YLeaf local_mode_valid; //type: boolean
                YLeaf miswired_valid; //type: boolean
                YLeaf local_mwd_key_valid; //type: boolean
                YLeaf local_function_unidirectional_valid; //type: boolean
                YLeaf local_function_loopback_valid; //type: boolean
                YLeaf local_function_event_valid; //type: boolean
                YLeaf local_functionvariable_valid; //type: boolean
                YLeaf local_revisionvalid; //type: boolean
                YLeaf local_mtu_valid; //type: boolean
                YLeaf remote_mode_valid; //type: boolean
                YLeaf remote_unidirectional_valid; //type: boolean
                YLeaf remote_loopback_valid; //type: boolean
                YLeaf remote_event_valid; //type: boolean
                YLeaf remote_variable_valid; //type: boolean
                YLeaf remote_mtu_valid; //type: boolean
                YLeaf remote_mac_address_valid; //type: boolean
                YLeaf remote_vendor_oui_valid; //type: boolean
                YLeaf remote_revisionvalid; //type: boolean
                YLeaf remote_vendor_info_valid; //type: boolean
                YLeaf remote_mwd_key_valid; //type: boolean
                YLeaf received_at_risk_notification_timestamp; //type: uint64
                YLeaf received_at_risk_notification_time_remaining; //type: uint16



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


                YLeaf member_interface; //type: string
                YLeaf protocol_code; //type: ProtocolStateEnum
                YLeaf rx_fault; //type: boolean
                YLeaf local_mwd_key; //type: uint32
                YLeaf remote_mwd_key_present; //type: boolean
                YLeaf remote_mwd_key; //type: uint32

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


                    YLeaf pfi_reason; //type: string
                    YLeaf pfi_error_code; //type: uint32
                    YLeaf platform_reason; //type: string
                    YLeaf platform_error_code; //type: uint32
                    YLeaf spio_reason; //type: string
                    YLeaf spio_error_code; //type: uint32
                    YLeaf epi_reason; //type: string
                    YLeaf epi_error_code; //type: uint32
                    YLeaf caps_add_reason; //type: string
                    YLeaf caps_add_error_code; //type: uint32



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


                    YLeaf link_fault_received; //type: boolean
                    YLeaf discovery_timed_out; //type: boolean
                    YLeaf capabilities_conflict; //type: boolean
                    YLeaf wiring_conflict; //type: boolean
                    YLeaf session_down; //type: boolean



            }; // EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers


                std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::EfdTriggers> efd_triggers;
                std::unique_ptr<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam::InterfaceStateInterfaces::InterfaceStateInterface::Errors> errors;


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


                YLeaf member_interface; //type: string
                YLeaf fast_hello_interval_enabled; //type: boolean
                YLeaf link_monitor_enabled; //type: boolean
                YLeaf remote_loopback_enabled; //type: boolean
                YLeaf mib_retrieval_enabled; //type: boolean
                YLeaf udlf_enabled; //type: boolean
                YLeaf mode; //type: ModeEnum
                YLeaf connection_timeout; //type: uint8
                YLeaf symbol_period_window; //type: uint32
                YLeaf symbol_period_threshold_low; //type: uint64
                YLeaf symbol_period_threshold_high; //type: uint64
                YLeaf frame_window; //type: uint32
                YLeaf frame_threshold_low; //type: uint32
                YLeaf frame_threshold_high; //type: uint32
                YLeaf frame_period_window; //type: uint32
                YLeaf frame_period_threshold_low; //type: uint32
                YLeaf frame_period_threshold_high; //type: uint32
                YLeaf frame_seconds_window; //type: uint32
                YLeaf frame_seconds_threshold_low; //type: uint32
                YLeaf frame_seconds_threshold_high; //type: uint32
                YLeaf high_threshold_action; //type: ActionEnum
                YLeaf link_fault_action; //type: ActionEnum
                YLeaf dying_gasp_action; //type: ActionEnum
                YLeaf critical_event_action; //type: ActionEnum
                YLeaf discovery_timeout_action; //type: ActionEnum
                YLeaf capabilities_conflict_action; //type: ActionEnum
                YLeaf wiring_conflict_action; //type: ActionEnum
                YLeaf session_up_action; //type: ActionEnum
                YLeaf session_down_action; //type: ActionEnum
                YLeaf remote_loopback_action; //type: ActionEnum
                YLeaf require_remote_mode; //type: ModeEnum
                YLeaf require_remote_mib_retrieval; //type: boolean
                YLeaf require_loopback; //type: boolean
                YLeaf require_link_monitoring; //type: boolean
                YLeaf fast_hello_interval_enabled_overridden; //type: boolean
                YLeaf link_monitoring_enabled_overridden; //type: boolean
                YLeaf remote_loopback_enabled_overridden; //type: boolean
                YLeaf mib_retrieval_enabled_overridden; //type: boolean
                YLeaf udlf_enabled_overridden; //type: boolean
                YLeaf mode_overridden; //type: boolean
                YLeaf connection_timeout_overridden; //type: boolean
                YLeaf symbol_period_window_overridden; //type: boolean
                YLeaf symbol_period_threshold_low_overridden; //type: boolean
                YLeaf symbol_period_threshold_high_overridden; //type: boolean
                YLeaf frame_window_overridden; //type: boolean
                YLeaf frame_threshold_low_overridden; //type: boolean
                YLeaf frame_threshold_high_overridden; //type: boolean
                YLeaf frame_period_window_overridden; //type: boolean
                YLeaf frame_period_threshold_low_overridden; //type: boolean
                YLeaf frame_period_threshold_high_overridden; //type: boolean
                YLeaf frame_seconds_window_overridden; //type: boolean
                YLeaf frame_seconds_threshold_low_overridden; //type: boolean
                YLeaf frame_seconds_threshold_high_overridden; //type: boolean
                YLeaf high_threshold_action_overridden; //type: boolean
                YLeaf link_fault_action_overridden; //type: boolean
                YLeaf dying_gasp_action_overridden; //type: boolean
                YLeaf critical_event_action_overridden; //type: boolean
                YLeaf discovery_timeout_action_overridden; //type: boolean
                YLeaf capabilities_conflict_action_overridden; //type: boolean
                YLeaf wiring_conflict_action_overridden; //type: boolean
                YLeaf session_down_action_overridden; //type: boolean
                YLeaf session_up_action_overridden; //type: boolean
                YLeaf remote_loopback_action_overridden; //type: boolean
                YLeaf require_mode_overridden; //type: boolean
                YLeaf require_mib_retrieval_overridden; //type: boolean
                YLeaf require_loopback_overridden; //type: boolean
                YLeaf require_link_monitoring_overridden; //type: boolean



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


                YLeaf node_name; //type: string

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


                    YLeaf interfaces; //type: uint32
                    YLeaf port_down; //type: uint32
                    YLeaf passive_wait; //type: uint32
                    YLeaf active_send; //type: uint32
                    YLeaf evaluating; //type: uint32
                    YLeaf local_accept; //type: uint32
                    YLeaf local_reject; //type: uint32
                    YLeaf remote_reject; //type: uint32
                    YLeaf operational; //type: uint32
                    YLeaf loopback_mode; //type: uint32
                    YLeaf miswired_connections; //type: uint32
                    YLeaf events; //type: uint64
                    YLeaf local_events; //type: uint64
                    YLeaf local_symbol_period; //type: uint64
                    YLeaf local_frame; //type: uint64
                    YLeaf local_frame_period; //type: uint64
                    YLeaf local_frame_seconds; //type: uint64
                    YLeaf remote_events; //type: uint64
                    YLeaf remote_symbol_period; //type: uint64
                    YLeaf remote_frame; //type: uint64
                    YLeaf remote_frame_period; //type: uint64
                    YLeaf remote_frame_seconds; //type: uint64



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


                YLeaf member_interface; //type: string

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


                        YLeaf event_log_entry_index; //type: string
                        YLeaf index_; //type: uint32
                        YLeaf handle; //type: string
                        YLeaf oui; //type: string
                        YLeaf timestamp; //type: uint64
                        YLeaf type; //type: LogEnum
                        YLeaf location; //type: LogLocationEnum
                        YLeaf event_total; //type: uint32
                        YLeaf action_taken; //type: ActionEnum
                        YLeaf window; //type: uint64
                        YLeaf threshold; //type: uint64
                        YLeaf local_high_threshold; //type: uint64
                        YLeaf value_; //type: uint64
                        YLeaf running_total; //type: uint64
                        YLeaf window_config_units; //type: uint64
                        YLeaf threshold_config_units; //type: uint64
                        YLeaf local_high_threshold_config_units; //type: uint64
                        YLeaf value_config_units; //type: uint64



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


                YLeaf member_interface; //type: string
                YLeaf information_tx; //type: uint32
                YLeaf information_rx; //type: uint32
                YLeaf unique_event_notification_tx; //type: uint32
                YLeaf unique_event_notification_rx; //type: uint32
                YLeaf duplicate_event_notification_tx; //type: uint32
                YLeaf duplicate_event_notification_rx; //type: uint32
                YLeaf loopback_control_tx; //type: uint32
                YLeaf loopback_control_rx; //type: uint32
                YLeaf variable_request_tx; //type: uint32
                YLeaf variable_request_rx; //type: uint32
                YLeaf variable_response_tx; //type: uint32
                YLeaf variable_response_rx; //type: uint32
                YLeaf org_specific_tx; //type: uint32
                YLeaf org_specific_rx; //type: uint32
                YLeaf unsupported_codes_tx; //type: uint32
                YLeaf unsupported_codes_rx; //type: uint32
                YLeaf frames_lost_due_to_oam; //type: uint32
                YLeaf fixed_frames_rx; //type: uint32
                YLeaf local_error_symbol_period_records; //type: uint32
                YLeaf local_error_frame_records; //type: uint32
                YLeaf local_error_frame_period_records; //type: uint32
                YLeaf local_error_frame_second_records; //type: uint32
                YLeaf remote_error_symbol_period_records; //type: uint32
                YLeaf remote_error_frame_records; //type: uint32
                YLeaf remote_error_frame_period_records; //type: uint32
                YLeaf remote_error_frame_second_records; //type: uint32



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
        static const Enum::YLeaf log_type_symbol_event;
        static const Enum::YLeaf log_type_period_event;
        static const Enum::YLeaf log_type_frame_event;
        static const Enum::YLeaf log_type_secs_event;
        static const Enum::YLeaf log_type_link_fault;
        static const Enum::YLeaf log_type_dying_gasp;
        static const Enum::YLeaf log_type_critical_event;

};

class LogLocationEnum : public Enum
{
    public:
        static const Enum::YLeaf log_location_local;
        static const Enum::YLeaf log_location_remote;

};

class LoopbackStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf initiating;
        static const Enum::YLeaf master_loopback;
        static const Enum::YLeaf terminating;
        static const Enum::YLeaf local_loopback;
        static const Enum::YLeaf unknown;

};

class OperationalStateEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf link_fault;
        static const Enum::YLeaf passive_wait;
        static const Enum::YLeaf active_send_local;
        static const Enum::YLeaf send_local_and_remote;
        static const Enum::YLeaf send_local_and_remote_ok;
        static const Enum::YLeaf peering_locally_rejected;
        static const Enum::YLeaf peering_remotely_rejected;
        static const Enum::YLeaf operational;
        static const Enum::YLeaf operational_half_duplex;

};

class ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf passive;
        static const Enum::YLeaf active;
        static const Enum::YLeaf dont_care;

};

class ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf no_action;
        static const Enum::YLeaf disable_interface;
        static const Enum::YLeaf log;
        static const Enum::YLeaf efd;

};

class ProtocolStateEnum : public Enum
{
    public:
        static const Enum::YLeaf protocol_state_inactive;
        static const Enum::YLeaf protocol_state_fault;
        static const Enum::YLeaf protocol_state_active_send_local;
        static const Enum::YLeaf protocol_state_passive_wait;
        static const Enum::YLeaf protocol_state_send_local_remote;
        static const Enum::YLeaf protocol_state_send_local_remote_ok;
        static const Enum::YLeaf protocol_state_send_any;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LINK_OAM_OPER_ */

