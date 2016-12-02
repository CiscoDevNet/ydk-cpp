#ifndef _CISCO_IOS_XR_IPV4_VRRP_OPER_
#define _CISCO_IOS_XR_IPV4_VRRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_vrrp_oper {

class Vrrp : public Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
            Value ipv4_sessions_master_owner; //type: uint32
            Value ipv4_sessions_master; //type: uint32
            Value ipv4_sessions_backup; //type: uint32
            Value ipv4_sessions_init; //type: uint32
            Value ipv4_slaves_master; //type: uint32
            Value ipv4_slaves_backup; //type: uint32
            Value ipv4_slaves_init; //type: uint32
            Value ipv4_virtual_ip_addresses_master_owner_up; //type: uint32
            Value ipv4_virtual_ip_addresses_master_owner_down; //type: uint32
            Value ipv4_virtual_ip_addresses_master_up; //type: uint32
            Value ipv4_virtual_ip_addresses_master_down; //type: uint32
            Value ipv4_virtual_ip_addresses_backup_up; //type: uint32
            Value ipv4_virtual_ip_addresses_backup_down; //type: uint32
            Value ipv4_virtual_ip_addresses_init_up; //type: uint32
            Value ipv4_virtual_ip_addresses_init_down; //type: uint32
            Value ipv6_sessions_master_owner; //type: uint32
            Value ipv6_sessions_master; //type: uint32
            Value ipv6_sessions_backup; //type: uint32
            Value ipv6_sessions_init; //type: uint32
            Value ipv6_slaves_master; //type: uint32
            Value ipv6_slaves_backup; //type: uint32
            Value ipv6_slaves_init; //type: uint32
            Value ipv6_virtual_ip_addresses_master_owner_up; //type: uint32
            Value ipv6_virtual_ip_addresses_master_owner_down; //type: uint32
            Value ipv6_virtual_ip_addresses_master_up; //type: uint32
            Value ipv6_virtual_ip_addresses_master_down; //type: uint32
            Value ipv6_virtual_ip_addresses_backup_up; //type: uint32
            Value ipv6_virtual_ip_addresses_backup_down; //type: uint32
            Value ipv6_virtual_ip_addresses_init_up; //type: uint32
            Value ipv6_virtual_ip_addresses_init_down; //type: uint32
            Value interfaces_ipv4_state_up; //type: uint32
            Value interfaces_ipv4_state_down; //type: uint32
            Value tracked_interfaces_ipv4_state_up; //type: uint32
            Value tracked_interfaces_ipv4_state_down; //type: uint32
            Value interfaces_ipv6_state_up; //type: uint32
            Value interfaces_ipv6_state_down; //type: uint32
            Value tracked_interfaces_ipv6_state_up; //type: uint32
            Value tracked_interfaces_ipv6_state_down; //type: uint32
            Value tracked_objects_state_up; //type: uint32
            Value tracked_objects_state_down; //type: uint32
            Value bfd_sessions_up; //type: uint32
            Value bfd_sessions_down; //type: uint32
            Value bfd_session_inactive; //type: uint32
            Value ipv6bfd_sessions_up; //type: uint32
            Value ipv6bfd_sessions_down; //type: uint32
            Value ipv6bfd_session_inactive; //type: uint32




    }; // Vrrp::Summary


    class Ipv6 : public Entity
    {
        public:
            Ipv6();
            ~Ipv6();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class TrackItems : public Entity
        {
            public:
                TrackItems();
                ~TrackItems();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class TrackItem : public Entity
            {
                public:
                    TrackItem();
                    ~TrackItem();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value virtual_router_id; //type: int32
                    Value tracked_interface_name; //type: string
                    Value interface; //type: string
                    Value virtual_router_id_xr; //type: uint32
                    Value tracked_item_type; //type: uint16
                    Value tracked_item_index; //type: string
                    Value state; //type: uint8
                    Value priority; //type: uint8




            }; // Vrrp::Ipv6::TrackItems::TrackItem


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::TrackItems::TrackItem> > track_item;


        }; // Vrrp::Ipv6::TrackItems


        class VirtualRouters : public Entity
        {
            public:
                VirtualRouters();
                ~VirtualRouters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class VirtualRouter : public Entity
            {
                public:
                    VirtualRouter();
                    ~VirtualRouter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value virtual_router_id; //type: int32
                    Value interface_name_xr; //type: string
                    Value virtual_router_id_xr; //type: uint32
                    Value version; //type: uint8
                    Value address_family; //type: VrrpBAfEnum
                    Value session_name; //type: string
                    Value slaves; //type: uint32
                    Value is_slave; //type: boolean
                    Value followed_session_name; //type: string
                    Value secondary_address_count; //type: uint8
                    Value operational_address_count; //type: uint8
                    Value primary_virtual_ip; //type: string
                    Value configured_down_address_count; //type: uint8
                    Value virtual_linklocal_ipv6_address; //type: string
                    Value primary_state; //type: VrrpVipStateEnum
                    Value master_ip_address; //type: string
                    Value master_ipv6_address; //type: string
                    Value master_priority; //type: uint8
                    Value vrrp_state; //type: VrrpBagProtocolStateEnum
                    Value authentication_type; //type: VrrpProtAuthEnum
                    Value configured_advertize_time; //type: uint32
                    Value oper_advertize_time; //type: uint32
                    Value min_delay_time; //type: uint32
                    Value reload_delay_time; //type: uint32
                    Value delay_timer_flag; //type: boolean
                    Value delay_timer_secs; //type: uint32
                    Value delay_timer_msecs; //type: uint32
                    Value authentication_flag; //type: boolean
                    Value force_timer_flag; //type: boolean
                    Value preempt_flag; //type: boolean
                    Value ip_address_owner_flag; //type: boolean
                    Value is_accept_mode; //type: boolean
                    Value preempt_delay_time; //type: uint16
                    Value configured_priority; //type: uint8
                    Value operational_priority; //type: uint8
                    Value priority_decrement; //type: uint32
                    Value tracked_interface_count; //type: uint32
                    Value tracked_interface_up_count; //type: uint32
                    Value tracked_item_count; //type: uint32
                    Value tracked_item_up_count; //type: uint32
                    Value time_in_current_state; //type: uint32
                    Value state_change_count; //type: uint32
                    Value time_vrouter_up; //type: uint32
                    Value master_count; //type: uint32
                    Value adverts_received_count; //type: uint32
                    Value advert_interval_error_count; //type: uint32
                    Value adverts_sent_count; //type: uint32
                    Value authentication_fail_count; //type: uint32
                    Value ttl_error_count; //type: uint32
                    Value priority_zero_received_count; //type: uint32
                    Value priority_zero_sent_count; //type: uint32
                    Value invalid_packet_count; //type: uint32
                    Value address_list_error_count; //type: uint32
                    Value invalid_auth_type_count; //type: uint32
                    Value auth_type_mismatch_count; //type: uint32
                    Value pkt_length_errors_count; //type: uint32
                    Value time_stats_discontinuity; //type: uint32
                    Value bfd_session_state; //type: VrrpBfdSessionStateEnum
                    Value bfd_interval; //type: uint32
                    Value bfd_multiplier; //type: uint32
                    Value bfd_cfg_remote_ip; //type: string
                    Value bfd_configured_remote_ipv6_address; //type: string
                    Value state_from_checkpoint; //type: boolean
                    Value interface_ipv4_address; //type: string
                    Value interface_ipv6_address; //type: string
                    Value virtual_mac_address; //type: string
                    Value virtual_mac_address_state; //type: VrrpVmacStateEnum
                    ValueList operational_address; //type: list of  string
                    ValueList ipv4_configured_down_address; //type: list of  string
                    ValueList authentication_string; //type: list of  uint8


                class ResignSentTime : public Entity
                {
                    public:
                        ResignSentTime();
                        ~ResignSentTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: uint32
                        Value nanoseconds; //type: uint32




                }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime


                class ResignReceivedTime : public Entity
                {
                    public:
                        ResignReceivedTime();
                        ~ResignReceivedTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: uint32
                        Value nanoseconds; //type: uint32




                }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime


                class Ipv6OperationalAddress : public Entity
                {
                    public:
                        Ipv6OperationalAddress();
                        ~Ipv6OperationalAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv6_address; //type: string




                }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress


                class Ipv6ConfiguredDownAddress : public Entity
                {
                    public:
                        Ipv6ConfiguredDownAddress();
                        ~Ipv6ConfiguredDownAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv6_address; //type: string




                }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress


                class StateChangeHistory : public Entity
                {
                    public:
                        StateChangeHistory();
                        ~StateChangeHistory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value old_state; //type: VrrpBagProtocolStateEnum
                        Value new_state; //type: VrrpBagProtocolStateEnum
                        Value reason; //type: VrrpStateChangeReasonEnum


                    class Time : public Entity
                    {
                        public:
                            Time();
                            ~Time();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nanoseconds; //type: uint32




                    }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time


                        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time> time;
                        class VrrpBagProtocolStateEnum;
                        class VrrpBagProtocolStateEnum;
                        class VrrpStateChangeReasonEnum;


                }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress> > ipv6_configured_down_address;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress> > ipv6_operational_address;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime> resign_received_time;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime> resign_sent_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory> > state_change_history;
                    class VrrpBAfEnum;
                    class VrrpProtAuthEnum;
                    class VrrpBfdSessionStateEnum;
                    class VrrpVipStateEnum;
                    class VrrpVmacStateEnum;
                    class VrrpBagProtocolStateEnum;


            }; // Vrrp::Ipv6::VirtualRouters::VirtualRouter


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter> > virtual_router;


        }; // Vrrp::Ipv6::VirtualRouters


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
                    Value interface; //type: string
                    Value invalid_checksum_count; //type: uint32
                    Value invalid_version_count; //type: uint32
                    Value invalid_vrid_count; //type: uint32
                    Value invalid_packet_length_count; //type: uint32




            }; // Vrrp::Ipv6::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::Interfaces::Interface> > interface;


        }; // Vrrp::Ipv6::Interfaces


            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::TrackItems> track_items;
            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters> virtual_routers;


    }; // Vrrp::Ipv6


    class Ipv4 : public Entity
    {
        public:
            Ipv4();
            ~Ipv4();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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
                    Value interface; //type: string
                    Value invalid_checksum_count; //type: uint32
                    Value invalid_version_count; //type: uint32
                    Value invalid_vrid_count; //type: uint32
                    Value invalid_packet_length_count; //type: uint32




            }; // Vrrp::Ipv4::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::Interfaces::Interface> > interface;


        }; // Vrrp::Ipv4::Interfaces


        class TrackItems : public Entity
        {
            public:
                TrackItems();
                ~TrackItems();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class TrackItem : public Entity
            {
                public:
                    TrackItem();
                    ~TrackItem();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value virtual_router_id; //type: int32
                    Value tracked_interface_name; //type: string
                    Value interface; //type: string
                    Value virtual_router_id_xr; //type: uint32
                    Value tracked_item_type; //type: uint16
                    Value tracked_item_index; //type: string
                    Value state; //type: uint8
                    Value priority; //type: uint8




            }; // Vrrp::Ipv4::TrackItems::TrackItem


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::TrackItems::TrackItem> > track_item;


        }; // Vrrp::Ipv4::TrackItems


        class VirtualRouters : public Entity
        {
            public:
                VirtualRouters();
                ~VirtualRouters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class VirtualRouter : public Entity
            {
                public:
                    VirtualRouter();
                    ~VirtualRouter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value virtual_router_id; //type: int32
                    Value interface_name_xr; //type: string
                    Value virtual_router_id_xr; //type: uint32
                    Value version; //type: uint8
                    Value address_family; //type: VrrpBAfEnum
                    Value session_name; //type: string
                    Value slaves; //type: uint32
                    Value is_slave; //type: boolean
                    Value followed_session_name; //type: string
                    Value secondary_address_count; //type: uint8
                    Value operational_address_count; //type: uint8
                    Value primary_virtual_ip; //type: string
                    Value configured_down_address_count; //type: uint8
                    Value virtual_linklocal_ipv6_address; //type: string
                    Value primary_state; //type: VrrpVipStateEnum
                    Value master_ip_address; //type: string
                    Value master_ipv6_address; //type: string
                    Value master_priority; //type: uint8
                    Value vrrp_state; //type: VrrpBagProtocolStateEnum
                    Value authentication_type; //type: VrrpProtAuthEnum
                    Value configured_advertize_time; //type: uint32
                    Value oper_advertize_time; //type: uint32
                    Value min_delay_time; //type: uint32
                    Value reload_delay_time; //type: uint32
                    Value delay_timer_flag; //type: boolean
                    Value delay_timer_secs; //type: uint32
                    Value delay_timer_msecs; //type: uint32
                    Value authentication_flag; //type: boolean
                    Value force_timer_flag; //type: boolean
                    Value preempt_flag; //type: boolean
                    Value ip_address_owner_flag; //type: boolean
                    Value is_accept_mode; //type: boolean
                    Value preempt_delay_time; //type: uint16
                    Value configured_priority; //type: uint8
                    Value operational_priority; //type: uint8
                    Value priority_decrement; //type: uint32
                    Value tracked_interface_count; //type: uint32
                    Value tracked_interface_up_count; //type: uint32
                    Value tracked_item_count; //type: uint32
                    Value tracked_item_up_count; //type: uint32
                    Value time_in_current_state; //type: uint32
                    Value state_change_count; //type: uint32
                    Value time_vrouter_up; //type: uint32
                    Value master_count; //type: uint32
                    Value adverts_received_count; //type: uint32
                    Value advert_interval_error_count; //type: uint32
                    Value adverts_sent_count; //type: uint32
                    Value authentication_fail_count; //type: uint32
                    Value ttl_error_count; //type: uint32
                    Value priority_zero_received_count; //type: uint32
                    Value priority_zero_sent_count; //type: uint32
                    Value invalid_packet_count; //type: uint32
                    Value address_list_error_count; //type: uint32
                    Value invalid_auth_type_count; //type: uint32
                    Value auth_type_mismatch_count; //type: uint32
                    Value pkt_length_errors_count; //type: uint32
                    Value time_stats_discontinuity; //type: uint32
                    Value bfd_session_state; //type: VrrpBfdSessionStateEnum
                    Value bfd_interval; //type: uint32
                    Value bfd_multiplier; //type: uint32
                    Value bfd_cfg_remote_ip; //type: string
                    Value bfd_configured_remote_ipv6_address; //type: string
                    Value state_from_checkpoint; //type: boolean
                    Value interface_ipv4_address; //type: string
                    Value interface_ipv6_address; //type: string
                    Value virtual_mac_address; //type: string
                    Value virtual_mac_address_state; //type: VrrpVmacStateEnum
                    ValueList operational_address; //type: list of  string
                    ValueList ipv4_configured_down_address; //type: list of  string
                    ValueList authentication_string; //type: list of  uint8


                class ResignSentTime : public Entity
                {
                    public:
                        ResignSentTime();
                        ~ResignSentTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: uint32
                        Value nanoseconds; //type: uint32




                }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime


                class ResignReceivedTime : public Entity
                {
                    public:
                        ResignReceivedTime();
                        ~ResignReceivedTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: uint32
                        Value nanoseconds; //type: uint32




                }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime


                class Ipv6OperationalAddress : public Entity
                {
                    public:
                        Ipv6OperationalAddress();
                        ~Ipv6OperationalAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv6_address; //type: string




                }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress


                class Ipv6ConfiguredDownAddress : public Entity
                {
                    public:
                        Ipv6ConfiguredDownAddress();
                        ~Ipv6ConfiguredDownAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv6_address; //type: string




                }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress


                class StateChangeHistory : public Entity
                {
                    public:
                        StateChangeHistory();
                        ~StateChangeHistory();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value old_state; //type: VrrpBagProtocolStateEnum
                        Value new_state; //type: VrrpBagProtocolStateEnum
                        Value reason; //type: VrrpStateChangeReasonEnum


                    class Time : public Entity
                    {
                        public:
                            Time();
                            ~Time();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32
                            Value nanoseconds; //type: uint32




                    }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time


                        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time> time;
                        class VrrpBagProtocolStateEnum;
                        class VrrpBagProtocolStateEnum;
                        class VrrpStateChangeReasonEnum;


                }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress> > ipv6_configured_down_address;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress> > ipv6_operational_address;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime> resign_received_time;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime> resign_sent_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory> > state_change_history;
                    class VrrpBAfEnum;
                    class VrrpProtAuthEnum;
                    class VrrpBfdSessionStateEnum;
                    class VrrpVipStateEnum;
                    class VrrpVmacStateEnum;
                    class VrrpBagProtocolStateEnum;


            }; // Vrrp::Ipv4::VirtualRouters::VirtualRouter


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter> > virtual_router;


        }; // Vrrp::Ipv4::VirtualRouters


            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::Interfaces> interfaces;
            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::TrackItems> track_items;
            std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters> virtual_routers;


    }; // Vrrp::Ipv4


    class MgoSessions : public Entity
    {
        public:
            MgoSessions();
            ~MgoSessions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class MgoSession : public Entity
        {
            public:
                MgoSession();
                ~MgoSession();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value session_name; //type: string
                Value primary_session_name; //type: string
                Value primary_session_interface; //type: string
                Value primary_af_name; //type: VrrpBAfEnum
                Value primary_session_number; //type: uint32
                Value primary_session_state; //type: VrrpBagProtocolStateEnum


            class Slave : public Entity
            {
                public:
                    Slave();
                    ~Slave();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value slave_interface; //type: string
                    Value slave_virtual_router_id; //type: uint32




            }; // Vrrp::MgoSessions::MgoSession::Slave


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions::MgoSession::Slave> > slave;
                class VrrpBAfEnum;
                class VrrpBagProtocolStateEnum;


        }; // Vrrp::MgoSessions::MgoSession


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions::MgoSession> > mgo_session;


    }; // Vrrp::MgoSessions


        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4> ipv4;
        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6> ipv6;
        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions> mgo_sessions;
        std::unique_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Summary> summary;


}; // Vrrp


class VrrpStateChangeReasonEnum : public Enum
{
    public:
        static const Enum::Value state_change_bfd_down;
        static const Enum::Value state_change_virtual_ip_configured;
        static const Enum::Value state_change_interface_ip;
        static const Enum::Value state_change_delay_timer;
        static const Enum::Value state_change_startup;
        static const Enum::Value state_change_interface_up;
        static const Enum::Value state_change_interface_down;
        static const Enum::Value state_change_master_down_timer;
        static const Enum::Value state_change_higher_priority_master;
        static const Enum::Value state_change_fhrp_admin;
        static const Enum::Value state_change_mgo_parent;
        static const Enum::Value state_change_chkpt_update;
        static const Enum::Value state_change_issu_resync;

};

class VrrpVmacStateEnum : public Enum
{
    public:
        static const Enum::Value stored;
        static const Enum::Value reserved;
        static const Enum::Value active;
        static const Enum::Value reserving;

};

class VrrpBAfEnum : public Enum
{
    public:
        static const Enum::Value address_family_ipv4;
        static const Enum::Value address_family_ipv6;
        static const Enum::Value vrrp_baf_count;

};

class VrrpVipStateEnum : public Enum
{
    public:
        static const Enum::Value virtual_ip_state_down;
        static const Enum::Value virtual_ip_state_up;

};

class VrrpProtAuthEnum : public Enum
{
    public:
        static const Enum::Value authentication_none;
        static const Enum::Value authentication_text;
        static const Enum::Value authentication_ip;

};

class VrrpBfdSessionStateEnum : public Enum
{
    public:
        static const Enum::Value bfd_state_none;
        static const Enum::Value bfd_state_inactive;
        static const Enum::Value bfd_state_up;
        static const Enum::Value bfd_state_down;

};

class VrrpBagProtocolStateEnum : public Enum
{
    public:
        static const Enum::Value state_initial;
        static const Enum::Value state_backup;
        static const Enum::Value state_master;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_VRRP_OPER_ */

