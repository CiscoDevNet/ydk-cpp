#ifndef _CISCO_IOS_XR_IPV4_VRRP_OPER_
#define _CISCO_IOS_XR_IPV4_VRRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Summary; //type: Vrrp::Summary
        class Ipv6; //type: Vrrp::Ipv6
        class Ipv4; //type: Vrrp::Ipv4
        class MgoSessions; //type: Vrrp::MgoSessions

        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions> mgo_sessions;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Summary> summary;


}; // Vrrp


class Vrrp::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_sessions_master_owner; //type: uint32
        YLeaf ipv4_sessions_master; //type: uint32
        YLeaf ipv4_sessions_backup; //type: uint32
        YLeaf ipv4_sessions_init; //type: uint32
        YLeaf ipv4_slaves_master; //type: uint32
        YLeaf ipv4_slaves_backup; //type: uint32
        YLeaf ipv4_slaves_init; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_master_owner_up; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_master_owner_down; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_master_up; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_master_down; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_backup_up; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_backup_down; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_init_up; //type: uint32
        YLeaf ipv4_virtual_ip_addresses_init_down; //type: uint32
        YLeaf ipv6_sessions_master_owner; //type: uint32
        YLeaf ipv6_sessions_master; //type: uint32
        YLeaf ipv6_sessions_backup; //type: uint32
        YLeaf ipv6_sessions_init; //type: uint32
        YLeaf ipv6_slaves_master; //type: uint32
        YLeaf ipv6_slaves_backup; //type: uint32
        YLeaf ipv6_slaves_init; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_master_owner_up; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_master_owner_down; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_master_up; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_master_down; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_backup_up; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_backup_down; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_init_up; //type: uint32
        YLeaf ipv6_virtual_ip_addresses_init_down; //type: uint32
        YLeaf interfaces_ipv4_state_up; //type: uint32
        YLeaf interfaces_ipv4_state_down; //type: uint32
        YLeaf tracked_interfaces_ipv4_state_up; //type: uint32
        YLeaf tracked_interfaces_ipv4_state_down; //type: uint32
        YLeaf interfaces_ipv6_state_up; //type: uint32
        YLeaf interfaces_ipv6_state_down; //type: uint32
        YLeaf tracked_interfaces_ipv6_state_up; //type: uint32
        YLeaf tracked_interfaces_ipv6_state_down; //type: uint32
        YLeaf tracked_objects_state_up; //type: uint32
        YLeaf tracked_objects_state_down; //type: uint32
        YLeaf bfd_sessions_up; //type: uint32
        YLeaf bfd_sessions_down; //type: uint32
        YLeaf bfd_session_inactive; //type: uint32
        YLeaf ipv6bfd_sessions_up; //type: uint32
        YLeaf ipv6bfd_sessions_down; //type: uint32
        YLeaf ipv6bfd_session_inactive; //type: uint32



}; // Vrrp::Summary


class Vrrp::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackItems; //type: Vrrp::Ipv6::TrackItems
        class VirtualRouters; //type: Vrrp::Ipv6::VirtualRouters
        class Interfaces; //type: Vrrp::Ipv6::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::TrackItems> track_items;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters> virtual_routers;


}; // Vrrp::Ipv6


class Vrrp::Ipv6::TrackItems : public Entity
{
    public:
        TrackItems();
        ~TrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackItem; //type: Vrrp::Ipv6::TrackItems::TrackItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::TrackItems::TrackItem> > track_item;


}; // Vrrp::Ipv6::TrackItems


class Vrrp::Ipv6::TrackItems::TrackItem : public Entity
{
    public:
        TrackItem();
        ~TrackItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf virtual_router_id; //type: int32
        YLeaf tracked_interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf virtual_router_id_xr; //type: uint32
        YLeaf tracked_item_type; //type: uint16
        YLeaf tracked_item_index; //type: string
        YLeaf state; //type: uint8
        YLeaf priority; //type: uint8



}; // Vrrp::Ipv6::TrackItems::TrackItem


class Vrrp::Ipv6::VirtualRouters : public Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VirtualRouter; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter> > virtual_router;


}; // Vrrp::Ipv6::VirtualRouters


class Vrrp::Ipv6::VirtualRouters::VirtualRouter : public Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf virtual_router_id; //type: int32
        YLeaf interface_name_xr; //type: string
        YLeaf virtual_router_id_xr; //type: uint32
        YLeaf version; //type: uint8
        YLeaf address_family; //type: VrrpBAfEnum
        YLeaf session_name; //type: string
        YLeaf slaves; //type: uint32
        YLeaf is_slave; //type: boolean
        YLeaf followed_session_name; //type: string
        YLeaf secondary_address_count; //type: uint8
        YLeaf operational_address_count; //type: uint8
        YLeaf primary_virtual_ip; //type: string
        YLeaf configured_down_address_count; //type: uint8
        YLeaf virtual_linklocal_ipv6_address; //type: string
        YLeaf primary_state; //type: VrrpVipStateEnum
        YLeaf master_ip_address; //type: string
        YLeaf master_ipv6_address; //type: string
        YLeaf master_priority; //type: uint8
        YLeaf vrrp_state; //type: VrrpBagProtocolStateEnum
        YLeaf authentication_type; //type: VrrpProtAuthEnum
        YLeaf authentication_string; //type: string
        YLeaf configured_advertize_time; //type: uint32
        YLeaf oper_advertize_time; //type: uint32
        YLeaf min_delay_time; //type: uint32
        YLeaf reload_delay_time; //type: uint32
        YLeaf delay_timer_flag; //type: boolean
        YLeaf delay_timer_secs; //type: uint32
        YLeaf delay_timer_msecs; //type: uint32
        YLeaf authentication_flag; //type: boolean
        YLeaf force_timer_flag; //type: boolean
        YLeaf preempt_flag; //type: boolean
        YLeaf ip_address_owner_flag; //type: boolean
        YLeaf is_accept_mode; //type: boolean
        YLeaf preempt_delay_time; //type: uint16
        YLeaf configured_priority; //type: uint8
        YLeaf operational_priority; //type: uint8
        YLeaf priority_decrement; //type: uint32
        YLeaf tracked_interface_count; //type: uint32
        YLeaf tracked_interface_up_count; //type: uint32
        YLeaf tracked_item_count; //type: uint32
        YLeaf tracked_item_up_count; //type: uint32
        YLeaf time_in_current_state; //type: uint32
        YLeaf state_change_count; //type: uint32
        YLeaf time_vrouter_up; //type: uint32
        YLeaf master_count; //type: uint32
        YLeaf adverts_received_count; //type: uint32
        YLeaf advert_interval_error_count; //type: uint32
        YLeaf adverts_sent_count; //type: uint32
        YLeaf authentication_fail_count; //type: uint32
        YLeaf ttl_error_count; //type: uint32
        YLeaf priority_zero_received_count; //type: uint32
        YLeaf priority_zero_sent_count; //type: uint32
        YLeaf invalid_packet_count; //type: uint32
        YLeaf address_list_error_count; //type: uint32
        YLeaf invalid_auth_type_count; //type: uint32
        YLeaf auth_type_mismatch_count; //type: uint32
        YLeaf pkt_length_errors_count; //type: uint32
        YLeaf time_stats_discontinuity; //type: uint32
        YLeaf bfd_session_state; //type: VrrpBfdSessionStateEnum
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf bfd_cfg_remote_ip; //type: string
        YLeaf bfd_configured_remote_ipv6_address; //type: string
        YLeaf state_from_checkpoint; //type: boolean
        YLeaf interface_ipv4_address; //type: string
        YLeaf interface_ipv6_address; //type: string
        YLeaf virtual_mac_address; //type: string
        YLeaf virtual_mac_address_state; //type: VrrpVmacStateEnum
        YLeafList operational_address; //type: list of  string
        YLeafList ipv4_configured_down_address; //type: list of  string

        class ResignSentTime; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime
        class ResignReceivedTime; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime
        class Ipv6OperationalAddress; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress
        class Ipv6ConfiguredDownAddress; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress
        class StateChangeHistory; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress> > ipv6_configured_down_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress> > ipv6_operational_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime> resign_received_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime> resign_sent_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory> > state_change_history;


}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime : public Entity
{
    public:
        ResignSentTime();
        ~ResignSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime : public Entity
{
    public:
        ResignReceivedTime();
        ~ResignReceivedTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress : public Entity
{
    public:
        Ipv6OperationalAddress();
        ~Ipv6OperationalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress : public Entity
{
    public:
        Ipv6ConfiguredDownAddress();
        ~Ipv6ConfiguredDownAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory : public Entity
{
    public:
        StateChangeHistory();
        ~StateChangeHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf old_state; //type: VrrpBagProtocolStateEnum
        YLeaf new_state; //type: VrrpBagProtocolStateEnum
        YLeaf reason; //type: VrrpStateChangeReasonEnum

        class Time; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time

        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time> time;


}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time


class Vrrp::Ipv6::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Vrrp::Ipv6::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::Interfaces::Interface> > interface;


}; // Vrrp::Ipv6::Interfaces


class Vrrp::Ipv6::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf invalid_checksum_count; //type: uint32
        YLeaf invalid_version_count; //type: uint32
        YLeaf invalid_vrid_count; //type: uint32
        YLeaf invalid_packet_length_count; //type: uint32



}; // Vrrp::Ipv6::Interfaces::Interface


class Vrrp::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: Vrrp::Ipv4::Interfaces
        class TrackItems; //type: Vrrp::Ipv4::TrackItems
        class VirtualRouters; //type: Vrrp::Ipv4::VirtualRouters

        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::TrackItems> track_items;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters> virtual_routers;


}; // Vrrp::Ipv4


class Vrrp::Ipv4::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Vrrp::Ipv4::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::Interfaces::Interface> > interface;


}; // Vrrp::Ipv4::Interfaces


class Vrrp::Ipv4::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf invalid_checksum_count; //type: uint32
        YLeaf invalid_version_count; //type: uint32
        YLeaf invalid_vrid_count; //type: uint32
        YLeaf invalid_packet_length_count; //type: uint32



}; // Vrrp::Ipv4::Interfaces::Interface


class Vrrp::Ipv4::TrackItems : public Entity
{
    public:
        TrackItems();
        ~TrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackItem; //type: Vrrp::Ipv4::TrackItems::TrackItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::TrackItems::TrackItem> > track_item;


}; // Vrrp::Ipv4::TrackItems


class Vrrp::Ipv4::TrackItems::TrackItem : public Entity
{
    public:
        TrackItem();
        ~TrackItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf virtual_router_id; //type: int32
        YLeaf tracked_interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf virtual_router_id_xr; //type: uint32
        YLeaf tracked_item_type; //type: uint16
        YLeaf tracked_item_index; //type: string
        YLeaf state; //type: uint8
        YLeaf priority; //type: uint8



}; // Vrrp::Ipv4::TrackItems::TrackItem


class Vrrp::Ipv4::VirtualRouters : public Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VirtualRouter; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter> > virtual_router;


}; // Vrrp::Ipv4::VirtualRouters


class Vrrp::Ipv4::VirtualRouters::VirtualRouter : public Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf virtual_router_id; //type: int32
        YLeaf interface_name_xr; //type: string
        YLeaf virtual_router_id_xr; //type: uint32
        YLeaf version; //type: uint8
        YLeaf address_family; //type: VrrpBAfEnum
        YLeaf session_name; //type: string
        YLeaf slaves; //type: uint32
        YLeaf is_slave; //type: boolean
        YLeaf followed_session_name; //type: string
        YLeaf secondary_address_count; //type: uint8
        YLeaf operational_address_count; //type: uint8
        YLeaf primary_virtual_ip; //type: string
        YLeaf configured_down_address_count; //type: uint8
        YLeaf virtual_linklocal_ipv6_address; //type: string
        YLeaf primary_state; //type: VrrpVipStateEnum
        YLeaf master_ip_address; //type: string
        YLeaf master_ipv6_address; //type: string
        YLeaf master_priority; //type: uint8
        YLeaf vrrp_state; //type: VrrpBagProtocolStateEnum
        YLeaf authentication_type; //type: VrrpProtAuthEnum
        YLeaf authentication_string; //type: string
        YLeaf configured_advertize_time; //type: uint32
        YLeaf oper_advertize_time; //type: uint32
        YLeaf min_delay_time; //type: uint32
        YLeaf reload_delay_time; //type: uint32
        YLeaf delay_timer_flag; //type: boolean
        YLeaf delay_timer_secs; //type: uint32
        YLeaf delay_timer_msecs; //type: uint32
        YLeaf authentication_flag; //type: boolean
        YLeaf force_timer_flag; //type: boolean
        YLeaf preempt_flag; //type: boolean
        YLeaf ip_address_owner_flag; //type: boolean
        YLeaf is_accept_mode; //type: boolean
        YLeaf preempt_delay_time; //type: uint16
        YLeaf configured_priority; //type: uint8
        YLeaf operational_priority; //type: uint8
        YLeaf priority_decrement; //type: uint32
        YLeaf tracked_interface_count; //type: uint32
        YLeaf tracked_interface_up_count; //type: uint32
        YLeaf tracked_item_count; //type: uint32
        YLeaf tracked_item_up_count; //type: uint32
        YLeaf time_in_current_state; //type: uint32
        YLeaf state_change_count; //type: uint32
        YLeaf time_vrouter_up; //type: uint32
        YLeaf master_count; //type: uint32
        YLeaf adverts_received_count; //type: uint32
        YLeaf advert_interval_error_count; //type: uint32
        YLeaf adverts_sent_count; //type: uint32
        YLeaf authentication_fail_count; //type: uint32
        YLeaf ttl_error_count; //type: uint32
        YLeaf priority_zero_received_count; //type: uint32
        YLeaf priority_zero_sent_count; //type: uint32
        YLeaf invalid_packet_count; //type: uint32
        YLeaf address_list_error_count; //type: uint32
        YLeaf invalid_auth_type_count; //type: uint32
        YLeaf auth_type_mismatch_count; //type: uint32
        YLeaf pkt_length_errors_count; //type: uint32
        YLeaf time_stats_discontinuity; //type: uint32
        YLeaf bfd_session_state; //type: VrrpBfdSessionStateEnum
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf bfd_cfg_remote_ip; //type: string
        YLeaf bfd_configured_remote_ipv6_address; //type: string
        YLeaf state_from_checkpoint; //type: boolean
        YLeaf interface_ipv4_address; //type: string
        YLeaf interface_ipv6_address; //type: string
        YLeaf virtual_mac_address; //type: string
        YLeaf virtual_mac_address_state; //type: VrrpVmacStateEnum
        YLeafList operational_address; //type: list of  string
        YLeafList ipv4_configured_down_address; //type: list of  string

        class ResignSentTime; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime
        class ResignReceivedTime; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime
        class Ipv6OperationalAddress; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress
        class Ipv6ConfiguredDownAddress; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress
        class StateChangeHistory; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress> > ipv6_configured_down_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress> > ipv6_operational_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime> resign_received_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime> resign_sent_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory> > state_change_history;


}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime : public Entity
{
    public:
        ResignSentTime();
        ~ResignSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime : public Entity
{
    public:
        ResignReceivedTime();
        ~ResignReceivedTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress : public Entity
{
    public:
        Ipv6OperationalAddress();
        ~Ipv6OperationalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress : public Entity
{
    public:
        Ipv6ConfiguredDownAddress();
        ~Ipv6ConfiguredDownAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_address; //type: string



}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory : public Entity
{
    public:
        StateChangeHistory();
        ~StateChangeHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf old_state; //type: VrrpBagProtocolStateEnum
        YLeaf new_state; //type: VrrpBagProtocolStateEnum
        YLeaf reason; //type: VrrpStateChangeReasonEnum

        class Time; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time

        std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time> time;


}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time


class Vrrp::MgoSessions : public Entity
{
    public:
        MgoSessions();
        ~MgoSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MgoSession; //type: Vrrp::MgoSessions::MgoSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions::MgoSession> > mgo_session;


}; // Vrrp::MgoSessions


class Vrrp::MgoSessions::MgoSession : public Entity
{
    public:
        MgoSession();
        ~MgoSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_name; //type: string
        YLeaf primary_session_name; //type: string
        YLeaf primary_session_interface; //type: string
        YLeaf primary_af_name; //type: VrrpBAfEnum
        YLeaf primary_session_number; //type: uint32
        YLeaf primary_session_state; //type: VrrpBagProtocolStateEnum

        class Slave; //type: Vrrp::MgoSessions::MgoSession::Slave

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions::MgoSession::Slave> > slave;


}; // Vrrp::MgoSessions::MgoSession


class Vrrp::MgoSessions::MgoSession::Slave : public Entity
{
    public:
        Slave();
        ~Slave();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slave_interface; //type: string
        YLeaf slave_virtual_router_id; //type: uint32



}; // Vrrp::MgoSessions::MgoSession::Slave

class VrrpStateChangeReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf state_change_bfd_down;
        static const Enum::YLeaf state_change_virtual_ip_configured;
        static const Enum::YLeaf state_change_interface_ip;
        static const Enum::YLeaf state_change_delay_timer;
        static const Enum::YLeaf state_change_startup;
        static const Enum::YLeaf state_change_interface_up;
        static const Enum::YLeaf state_change_interface_down;
        static const Enum::YLeaf state_change_master_down_timer;
        static const Enum::YLeaf state_change_higher_priority_master;
        static const Enum::YLeaf state_change_fhrp_admin;
        static const Enum::YLeaf state_change_mgo_parent;
        static const Enum::YLeaf state_change_chkpt_update;
        static const Enum::YLeaf state_change_issu_resync;

};

class VrrpVmacStateEnum : public Enum
{
    public:
        static const Enum::YLeaf stored;
        static const Enum::YLeaf reserved;
        static const Enum::YLeaf active;
        static const Enum::YLeaf reserving;

};

class VrrpBAfEnum : public Enum
{
    public:
        static const Enum::YLeaf address_family_ipv4;
        static const Enum::YLeaf address_family_ipv6;
        static const Enum::YLeaf vrrp_baf_count;

};

class VrrpVipStateEnum : public Enum
{
    public:
        static const Enum::YLeaf virtual_ip_state_down;
        static const Enum::YLeaf virtual_ip_state_up;

};

class VrrpProtAuthEnum : public Enum
{
    public:
        static const Enum::YLeaf authentication_none;
        static const Enum::YLeaf authentication_text;
        static const Enum::YLeaf authentication_ip;

};

class VrrpBfdSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_state_none;
        static const Enum::YLeaf bfd_state_inactive;
        static const Enum::YLeaf bfd_state_up;
        static const Enum::YLeaf bfd_state_down;

};

class VrrpBagProtocolStateEnum : public Enum
{
    public:
        static const Enum::YLeaf state_initial;
        static const Enum::YLeaf state_backup;
        static const Enum::YLeaf state_master;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_VRRP_OPER_ */

