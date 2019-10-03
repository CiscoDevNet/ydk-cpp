#ifndef _CISCO_IOS_XR_IPV4_VRRP_OPER_
#define _CISCO_IOS_XR_IPV4_VRRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_vrrp_oper {

class Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

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

        class Summary; //type: Vrrp::Summary
        class Ipv6; //type: Vrrp::Ipv6
        class Ipv4; //type: Vrrp::Ipv4
        class MgoSessions; //type: Vrrp::MgoSessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::MgoSessions> mgo_sessions;
        
}; // Vrrp


class Vrrp::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf ipv4_sessions_master_owner; //type: uint32
        ydk::YLeaf ipv4_sessions_master; //type: uint32
        ydk::YLeaf ipv4_sessions_backup; //type: uint32
        ydk::YLeaf ipv4_sessions_init; //type: uint32
        ydk::YLeaf ipv4_slaves_master; //type: uint32
        ydk::YLeaf ipv4_slaves_backup; //type: uint32
        ydk::YLeaf ipv4_slaves_init; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_master_owner_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_master_owner_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_master_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_master_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_backup_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_backup_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_init_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_init_down; //type: uint32
        ydk::YLeaf ipv6_sessions_master_owner; //type: uint32
        ydk::YLeaf ipv6_sessions_master; //type: uint32
        ydk::YLeaf ipv6_sessions_backup; //type: uint32
        ydk::YLeaf ipv6_sessions_init; //type: uint32
        ydk::YLeaf ipv6_slaves_master; //type: uint32
        ydk::YLeaf ipv6_slaves_backup; //type: uint32
        ydk::YLeaf ipv6_slaves_init; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_master_owner_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_master_owner_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_master_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_master_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_backup_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_backup_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_init_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_init_down; //type: uint32
        ydk::YLeaf interfaces_ipv4_state_up; //type: uint32
        ydk::YLeaf interfaces_ipv4_state_down; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv4_state_up; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv4_state_down; //type: uint32
        ydk::YLeaf interfaces_ipv6_state_up; //type: uint32
        ydk::YLeaf interfaces_ipv6_state_down; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv6_state_up; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv6_state_down; //type: uint32
        ydk::YLeaf tracked_objects_state_up; //type: uint32
        ydk::YLeaf tracked_objects_state_down; //type: uint32
        ydk::YLeaf bfd_sessions_up; //type: uint32
        ydk::YLeaf bfd_sessions_down; //type: uint32
        ydk::YLeaf bfd_session_inactive; //type: uint32
        ydk::YLeaf ipv6bfd_sessions_up; //type: uint32
        ydk::YLeaf ipv6bfd_sessions_down; //type: uint32
        ydk::YLeaf ipv6bfd_session_inactive; //type: uint32

}; // Vrrp::Summary


class Vrrp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class TrackItems; //type: Vrrp::Ipv6::TrackItems
        class VirtualRouters; //type: Vrrp::Ipv6::VirtualRouters
        class Interfaces; //type: Vrrp::Ipv6::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::TrackItems> track_items;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters> virtual_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::Interfaces> interfaces;
        
}; // Vrrp::Ipv6


class Vrrp::Ipv6::TrackItems : public ydk::Entity
{
    public:
        TrackItems();
        ~TrackItems();

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

        class TrackItem; //type: Vrrp::Ipv6::TrackItems::TrackItem

        ydk::YList track_item;
        
}; // Vrrp::Ipv6::TrackItems


class Vrrp::Ipv6::TrackItems::TrackItem : public ydk::Entity
{
    public:
        TrackItem();
        ~TrackItem();

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
        ydk::YLeaf virtual_router_id; //type: uint32
        ydk::YLeaf tracked_interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf virtual_router_id_xr; //type: uint32
        ydk::YLeaf tracked_item_type; //type: uint16
        ydk::YLeaf tracked_item_index; //type: string
        ydk::YLeaf state; //type: uint8
        ydk::YLeaf priority; //type: uint8

}; // Vrrp::Ipv6::TrackItems::TrackItem


class Vrrp::Ipv6::VirtualRouters : public ydk::Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

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

        class VirtualRouter; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter

        ydk::YList virtual_router;
        
}; // Vrrp::Ipv6::VirtualRouters


class Vrrp::Ipv6::VirtualRouters::VirtualRouter : public ydk::Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

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
        ydk::YLeaf virtual_router_id; //type: uint32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf virtual_router_id_xr; //type: uint32
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf address_family; //type: VrrpBAf
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf slaves; //type: uint32
        ydk::YLeaf is_slave; //type: boolean
        ydk::YLeaf followed_session_name; //type: string
        ydk::YLeaf secondary_address_count; //type: uint8
        ydk::YLeaf operational_address_count; //type: uint8
        ydk::YLeaf primary_virtual_ip; //type: string
        ydk::YLeaf configured_down_address_count; //type: uint8
        ydk::YLeaf virtual_linklocal_ipv6_address; //type: string
        ydk::YLeaf primary_state; //type: VrrpVipState
        ydk::YLeaf master_ip_address; //type: string
        ydk::YLeaf master_ipv6_address; //type: string
        ydk::YLeaf master_priority; //type: uint8
        ydk::YLeaf vrrp_state; //type: VrrpBagProtocolState
        ydk::YLeaf authentication_type; //type: VrrpProtAuth
        ydk::YLeaf authentication_string; //type: string
        ydk::YLeaf configured_advertize_time; //type: uint32
        ydk::YLeaf oper_advertize_time; //type: uint32
        ydk::YLeaf min_delay_time; //type: uint32
        ydk::YLeaf reload_delay_time; //type: uint32
        ydk::YLeaf delay_timer_flag; //type: boolean
        ydk::YLeaf delay_timer_secs; //type: uint32
        ydk::YLeaf delay_timer_msecs; //type: uint32
        ydk::YLeaf authentication_flag; //type: boolean
        ydk::YLeaf force_timer_flag; //type: boolean
        ydk::YLeaf preempt_flag; //type: boolean
        ydk::YLeaf ip_address_owner_flag; //type: boolean
        ydk::YLeaf is_accept_mode; //type: boolean
        ydk::YLeaf preempt_delay_time; //type: uint16
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf operational_priority; //type: uint8
        ydk::YLeaf priority_decrement; //type: uint32
        ydk::YLeaf tracked_interface_count; //type: uint32
        ydk::YLeaf tracked_interface_up_count; //type: uint32
        ydk::YLeaf tracked_item_count; //type: uint32
        ydk::YLeaf tracked_item_up_count; //type: uint32
        ydk::YLeaf time_in_current_state; //type: uint32
        ydk::YLeaf state_change_count; //type: uint32
        ydk::YLeaf time_vrouter_up; //type: uint32
        ydk::YLeaf master_count; //type: uint32
        ydk::YLeaf adverts_received_count; //type: uint32
        ydk::YLeaf advert_interval_error_count; //type: uint32
        ydk::YLeaf adverts_sent_count; //type: uint32
        ydk::YLeaf authentication_fail_count; //type: uint32
        ydk::YLeaf ttl_error_count; //type: uint32
        ydk::YLeaf priority_zero_received_count; //type: uint32
        ydk::YLeaf priority_zero_sent_count; //type: uint32
        ydk::YLeaf invalid_packet_count; //type: uint32
        ydk::YLeaf address_list_error_count; //type: uint32
        ydk::YLeaf invalid_auth_type_count; //type: uint32
        ydk::YLeaf auth_type_mismatch_count; //type: uint32
        ydk::YLeaf pkt_length_errors_count; //type: uint32
        ydk::YLeaf time_stats_discontinuity; //type: uint32
        ydk::YLeaf bfd_session_state; //type: VrrpBfdSessionState
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_cfg_remote_ip; //type: string
        ydk::YLeaf bfd_configured_remote_ipv6_address; //type: string
        ydk::YLeaf state_from_checkpoint; //type: boolean
        ydk::YLeaf interface_ipv4_address; //type: string
        ydk::YLeaf interface_ipv6_address; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf virtual_mac_address_state; //type: VrrpVmacState
        ydk::YLeafList operational_address; //type: list of  string
        ydk::YLeafList ipv4_configured_down_address; //type: list of  string
        class ResignSentTime; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime
        class ResignReceivedTime; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime
        class Ipv6OperationalAddress; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress
        class Ipv6ConfiguredDownAddress; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress
        class TrackItemInfo; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::TrackItemInfo
        class StateChangeHistory; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime> resign_sent_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime> resign_received_time;
        ydk::YList ipv6_operational_address;
        ydk::YList ipv6_configured_down_address;
        ydk::YList track_item_info;
        ydk::YList state_change_history;
        
}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime : public ydk::Entity
{
    public:
        ResignSentTime();
        ~ResignSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignSentTime


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime : public ydk::Entity
{
    public:
        ResignReceivedTime();
        ~ResignReceivedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::ResignReceivedTime


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress : public ydk::Entity
{
    public:
        Ipv6OperationalAddress();
        ~Ipv6OperationalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6OperationalAddress


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress : public ydk::Entity
{
    public:
        Ipv6ConfiguredDownAddress();
        ~Ipv6ConfiguredDownAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::TrackItemInfo : public ydk::Entity
{
    public:
        TrackItemInfo();
        ~TrackItemInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf virtual_router_id_xr; //type: uint32
        ydk::YLeaf tracked_item_type; //type: uint16
        ydk::YLeaf tracked_item_index; //type: string
        ydk::YLeaf state; //type: uint8
        ydk::YLeaf priority; //type: uint8

}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::TrackItemInfo


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory : public ydk::Entity
{
    public:
        StateChangeHistory();
        ~StateChangeHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf old_state; //type: VrrpBagProtocolState
        ydk::YLeaf new_state; //type: VrrpBagProtocolState
        ydk::YLeaf reason; //type: VrrpStateChangeReason
        class Time; //type: Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time> time;
        
}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory


class Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Vrrp::Ipv6::VirtualRouters::VirtualRouter::StateChangeHistory::Time


class Vrrp::Ipv6::Interfaces : public ydk::Entity
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

        class Interface; //type: Vrrp::Ipv6::Interfaces::Interface

        ydk::YList interface;
        
}; // Vrrp::Ipv6::Interfaces


class Vrrp::Ipv6::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf invalid_checksum_count; //type: uint32
        ydk::YLeaf invalid_version_count; //type: uint32
        ydk::YLeaf invalid_vrid_count; //type: uint32
        ydk::YLeaf invalid_packet_length_count; //type: uint32

}; // Vrrp::Ipv6::Interfaces::Interface


class Vrrp::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class Interfaces; //type: Vrrp::Ipv4::Interfaces
        class TrackItems; //type: Vrrp::Ipv4::TrackItems
        class VirtualRouters; //type: Vrrp::Ipv4::VirtualRouters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::TrackItems> track_items;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters> virtual_routers;
        
}; // Vrrp::Ipv4


class Vrrp::Ipv4::Interfaces : public ydk::Entity
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

        class Interface; //type: Vrrp::Ipv4::Interfaces::Interface

        ydk::YList interface;
        
}; // Vrrp::Ipv4::Interfaces


class Vrrp::Ipv4::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf interface; //type: string
        ydk::YLeaf invalid_checksum_count; //type: uint32
        ydk::YLeaf invalid_version_count; //type: uint32
        ydk::YLeaf invalid_vrid_count; //type: uint32
        ydk::YLeaf invalid_packet_length_count; //type: uint32

}; // Vrrp::Ipv4::Interfaces::Interface


class Vrrp::Ipv4::TrackItems : public ydk::Entity
{
    public:
        TrackItems();
        ~TrackItems();

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

        class TrackItem; //type: Vrrp::Ipv4::TrackItems::TrackItem

        ydk::YList track_item;
        
}; // Vrrp::Ipv4::TrackItems


class Vrrp::Ipv4::TrackItems::TrackItem : public ydk::Entity
{
    public:
        TrackItem();
        ~TrackItem();

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
        ydk::YLeaf virtual_router_id; //type: uint32
        ydk::YLeaf tracked_interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf virtual_router_id_xr; //type: uint32
        ydk::YLeaf tracked_item_type; //type: uint16
        ydk::YLeaf tracked_item_index; //type: string
        ydk::YLeaf state; //type: uint8
        ydk::YLeaf priority; //type: uint8

}; // Vrrp::Ipv4::TrackItems::TrackItem


class Vrrp::Ipv4::VirtualRouters : public ydk::Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

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

        class VirtualRouter; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter

        ydk::YList virtual_router;
        
}; // Vrrp::Ipv4::VirtualRouters


class Vrrp::Ipv4::VirtualRouters::VirtualRouter : public ydk::Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

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
        ydk::YLeaf virtual_router_id; //type: uint32
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf virtual_router_id_xr; //type: uint32
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf address_family; //type: VrrpBAf
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf slaves; //type: uint32
        ydk::YLeaf is_slave; //type: boolean
        ydk::YLeaf followed_session_name; //type: string
        ydk::YLeaf secondary_address_count; //type: uint8
        ydk::YLeaf operational_address_count; //type: uint8
        ydk::YLeaf primary_virtual_ip; //type: string
        ydk::YLeaf configured_down_address_count; //type: uint8
        ydk::YLeaf virtual_linklocal_ipv6_address; //type: string
        ydk::YLeaf primary_state; //type: VrrpVipState
        ydk::YLeaf master_ip_address; //type: string
        ydk::YLeaf master_ipv6_address; //type: string
        ydk::YLeaf master_priority; //type: uint8
        ydk::YLeaf vrrp_state; //type: VrrpBagProtocolState
        ydk::YLeaf authentication_type; //type: VrrpProtAuth
        ydk::YLeaf authentication_string; //type: string
        ydk::YLeaf configured_advertize_time; //type: uint32
        ydk::YLeaf oper_advertize_time; //type: uint32
        ydk::YLeaf min_delay_time; //type: uint32
        ydk::YLeaf reload_delay_time; //type: uint32
        ydk::YLeaf delay_timer_flag; //type: boolean
        ydk::YLeaf delay_timer_secs; //type: uint32
        ydk::YLeaf delay_timer_msecs; //type: uint32
        ydk::YLeaf authentication_flag; //type: boolean
        ydk::YLeaf force_timer_flag; //type: boolean
        ydk::YLeaf preempt_flag; //type: boolean
        ydk::YLeaf ip_address_owner_flag; //type: boolean
        ydk::YLeaf is_accept_mode; //type: boolean
        ydk::YLeaf preempt_delay_time; //type: uint16
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf operational_priority; //type: uint8
        ydk::YLeaf priority_decrement; //type: uint32
        ydk::YLeaf tracked_interface_count; //type: uint32
        ydk::YLeaf tracked_interface_up_count; //type: uint32
        ydk::YLeaf tracked_item_count; //type: uint32
        ydk::YLeaf tracked_item_up_count; //type: uint32
        ydk::YLeaf time_in_current_state; //type: uint32
        ydk::YLeaf state_change_count; //type: uint32
        ydk::YLeaf time_vrouter_up; //type: uint32
        ydk::YLeaf master_count; //type: uint32
        ydk::YLeaf adverts_received_count; //type: uint32
        ydk::YLeaf advert_interval_error_count; //type: uint32
        ydk::YLeaf adverts_sent_count; //type: uint32
        ydk::YLeaf authentication_fail_count; //type: uint32
        ydk::YLeaf ttl_error_count; //type: uint32
        ydk::YLeaf priority_zero_received_count; //type: uint32
        ydk::YLeaf priority_zero_sent_count; //type: uint32
        ydk::YLeaf invalid_packet_count; //type: uint32
        ydk::YLeaf address_list_error_count; //type: uint32
        ydk::YLeaf invalid_auth_type_count; //type: uint32
        ydk::YLeaf auth_type_mismatch_count; //type: uint32
        ydk::YLeaf pkt_length_errors_count; //type: uint32
        ydk::YLeaf time_stats_discontinuity; //type: uint32
        ydk::YLeaf bfd_session_state; //type: VrrpBfdSessionState
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf bfd_cfg_remote_ip; //type: string
        ydk::YLeaf bfd_configured_remote_ipv6_address; //type: string
        ydk::YLeaf state_from_checkpoint; //type: boolean
        ydk::YLeaf interface_ipv4_address; //type: string
        ydk::YLeaf interface_ipv6_address; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf virtual_mac_address_state; //type: VrrpVmacState
        ydk::YLeafList operational_address; //type: list of  string
        ydk::YLeafList ipv4_configured_down_address; //type: list of  string
        class ResignSentTime; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime
        class ResignReceivedTime; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime
        class Ipv6OperationalAddress; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress
        class Ipv6ConfiguredDownAddress; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress
        class TrackItemInfo; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::TrackItemInfo
        class StateChangeHistory; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime> resign_sent_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime> resign_received_time;
        ydk::YList ipv6_operational_address;
        ydk::YList ipv6_configured_down_address;
        ydk::YList track_item_info;
        ydk::YList state_change_history;
        
}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime : public ydk::Entity
{
    public:
        ResignSentTime();
        ~ResignSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignSentTime


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime : public ydk::Entity
{
    public:
        ResignReceivedTime();
        ~ResignReceivedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::ResignReceivedTime


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress : public ydk::Entity
{
    public:
        Ipv6OperationalAddress();
        ~Ipv6OperationalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6OperationalAddress


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress : public ydk::Entity
{
    public:
        Ipv6ConfiguredDownAddress();
        ~Ipv6ConfiguredDownAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string

}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::Ipv6ConfiguredDownAddress


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::TrackItemInfo : public ydk::Entity
{
    public:
        TrackItemInfo();
        ~TrackItemInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf virtual_router_id_xr; //type: uint32
        ydk::YLeaf tracked_item_type; //type: uint16
        ydk::YLeaf tracked_item_index; //type: string
        ydk::YLeaf state; //type: uint8
        ydk::YLeaf priority; //type: uint8

}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::TrackItemInfo


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory : public ydk::Entity
{
    public:
        StateChangeHistory();
        ~StateChangeHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf old_state; //type: VrrpBagProtocolState
        ydk::YLeaf new_state; //type: VrrpBagProtocolState
        ydk::YLeaf reason; //type: VrrpStateChangeReason
        class Time; //type: Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time> time;
        
}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory


class Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Vrrp::Ipv4::VirtualRouters::VirtualRouter::StateChangeHistory::Time


class Vrrp::MgoSessions : public ydk::Entity
{
    public:
        MgoSessions();
        ~MgoSessions();

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

        class MgoSession; //type: Vrrp::MgoSessions::MgoSession

        ydk::YList mgo_session;
        
}; // Vrrp::MgoSessions


class Vrrp::MgoSessions::MgoSession : public ydk::Entity
{
    public:
        MgoSession();
        ~MgoSession();

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

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf primary_session_name; //type: string
        ydk::YLeaf primary_session_interface; //type: string
        ydk::YLeaf primary_af_name; //type: VrrpBAf
        ydk::YLeaf primary_session_number; //type: uint32
        ydk::YLeaf primary_session_state; //type: VrrpBagProtocolState
        class Slave; //type: Vrrp::MgoSessions::MgoSession::Slave

        ydk::YList slave;
        
}; // Vrrp::MgoSessions::MgoSession


class Vrrp::MgoSessions::MgoSession::Slave : public ydk::Entity
{
    public:
        Slave();
        ~Slave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slave_interface; //type: string
        ydk::YLeaf slave_virtual_router_id; //type: uint32

}; // Vrrp::MgoSessions::MgoSession::Slave

class VrrpStateChangeReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_change_bfd_down;
        static const ydk::Enum::YLeaf state_change_virtual_ip_configured;
        static const ydk::Enum::YLeaf state_change_interface_ip;
        static const ydk::Enum::YLeaf state_change_delay_timer;
        static const ydk::Enum::YLeaf state_change_startup;
        static const ydk::Enum::YLeaf state_change_interface_up;
        static const ydk::Enum::YLeaf state_change_interface_down;
        static const ydk::Enum::YLeaf state_change_master_down_timer;
        static const ydk::Enum::YLeaf state_change_higher_priority_master;
        static const ydk::Enum::YLeaf state_change_fhrp_admin;
        static const ydk::Enum::YLeaf state_change_mgo_parent;
        static const ydk::Enum::YLeaf state_change_chkpt_update;
        static const ydk::Enum::YLeaf state_change_issu_resync;

        static int get_enum_value(const std::string & name) {
            if (name == "state-change-bfd-down") return 0;
            if (name == "state-change-virtual-ip-configured") return 1;
            if (name == "state-change-interface-ip") return 2;
            if (name == "state-change-delay-timer") return 3;
            if (name == "state-change-startup") return 4;
            if (name == "state-change-interface-up") return 5;
            if (name == "state-change-interface-down") return 6;
            if (name == "state-change-master-down-timer") return 7;
            if (name == "state-change-higher-priority-master") return 8;
            if (name == "state-change-fhrp-admin") return 9;
            if (name == "state-change-mgo-parent") return 10;
            if (name == "state-change-chkpt-update") return 11;
            if (name == "state-change-issu-resync") return 12;
            return -1;
        }
};

class VrrpVmacState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stored;
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf reserving;

        static int get_enum_value(const std::string & name) {
            if (name == "stored") return 0;
            if (name == "reserved") return 1;
            if (name == "active") return 2;
            if (name == "reserving") return 3;
            return -1;
        }
};

class VrrpBAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address_family_ipv4;
        static const ydk::Enum::YLeaf address_family_ipv6;
        static const ydk::Enum::YLeaf vrrp_baf_count;

        static int get_enum_value(const std::string & name) {
            if (name == "address-family-ipv4") return 0;
            if (name == "address-family-ipv6") return 1;
            if (name == "vrrp-baf-count") return 2;
            return -1;
        }
};

class VrrpVipState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf virtual_ip_state_down;
        static const ydk::Enum::YLeaf virtual_ip_state_up;

        static int get_enum_value(const std::string & name) {
            if (name == "virtual-ip-state-down") return 0;
            if (name == "virtual-ip-state-up") return 1;
            return -1;
        }
};

class VrrpProtAuth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authentication_none;
        static const ydk::Enum::YLeaf authentication_text;
        static const ydk::Enum::YLeaf authentication_ip;

        static int get_enum_value(const std::string & name) {
            if (name == "authentication-none") return 0;
            if (name == "authentication-text") return 1;
            if (name == "authentication-ip") return 2;
            return -1;
        }
};

class VrrpBfdSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_state_none;
        static const ydk::Enum::YLeaf bfd_state_inactive;
        static const ydk::Enum::YLeaf bfd_state_up;
        static const ydk::Enum::YLeaf bfd_state_down;

        static int get_enum_value(const std::string & name) {
            if (name == "bfd-state-none") return 0;
            if (name == "bfd-state-inactive") return 1;
            if (name == "bfd-state-up") return 2;
            if (name == "bfd-state-down") return 3;
            return -1;
        }
};

class VrrpBagProtocolState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_initial;
        static const ydk::Enum::YLeaf state_backup;
        static const ydk::Enum::YLeaf state_master;

        static int get_enum_value(const std::string & name) {
            if (name == "state-initial") return 1;
            if (name == "state-backup") return 2;
            if (name == "state-master") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_VRRP_OPER_ */

