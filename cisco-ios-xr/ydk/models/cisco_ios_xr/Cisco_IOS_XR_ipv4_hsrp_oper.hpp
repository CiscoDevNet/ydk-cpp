#ifndef _CISCO_IOS_XR_IPV4_HSRP_OPER_
#define _CISCO_IOS_XR_IPV4_HSRP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_hsrp_oper {

class Hsrp : public ydk::Entity
{
    public:
        Hsrp();
        ~Hsrp();

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

        class Ipv4; //type: Hsrp::Ipv4
        class MgoSessions; //type: Hsrp::MgoSessions
        class Ipv6; //type: Hsrp::Ipv6
        class BfdSessions; //type: Hsrp::BfdSessions
        class Summary; //type: Hsrp::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::MgoSessions> mgo_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::BfdSessions> bfd_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Summary> summary;
        
}; // Hsrp


class Hsrp::Ipv4 : public ydk::Entity
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

        class Groups; //type: Hsrp::Ipv4::Groups
        class TrackedInterfaces; //type: Hsrp::Ipv4::TrackedInterfaces
        class Interfaces; //type: Hsrp::Ipv4::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Interfaces> interfaces;
        
}; // Hsrp::Ipv4


class Hsrp::Ipv4::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Hsrp::Ipv4::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group> > group;
        
}; // Hsrp::Ipv4::Groups


class Hsrp::Ipv4::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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
        ydk::YLeaf group_number; //type: int32
        ydk::YLeaf authentication_string; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf hsrp_group_number; //type: uint32
        ydk::YLeaf address_family; //type: HsrpBAf
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf slaves; //type: uint32
        ydk::YLeaf is_slave; //type: boolean
        ydk::YLeaf followed_session_name; //type: string
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf preempt_delay; //type: uint32
        ydk::YLeaf preempt_timer_secs; //type: uint32
        ydk::YLeaf hello_time; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf learned_hello_time; //type: uint32
        ydk::YLeaf learned_hold_time; //type: uint32
        ydk::YLeaf min_delay_time; //type: uint32
        ydk::YLeaf reload_delay_time; //type: uint32
        ydk::YLeaf virtual_ip_address; //type: string
        ydk::YLeaf virtual_linklocal_ipv6_address; //type: string
        ydk::YLeaf active_ip_address; //type: string
        ydk::YLeaf active_ipv6_address; //type: string
        ydk::YLeaf active_mac_address; //type: string
        ydk::YLeaf standby_ip_address; //type: string
        ydk::YLeaf standby_ipv6_address; //type: string
        ydk::YLeaf standby_mac_address; //type: string
        ydk::YLeaf hsrp_router_state; //type: StandbyGrpState
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf router_priority; //type: uint8
        ydk::YLeaf active_priority; //type: uint8
        ydk::YLeaf active_timer_flag; //type: boolean
        ydk::YLeaf active_timer_secs; //type: uint32
        ydk::YLeaf active_timer_msecs; //type: uint32
        ydk::YLeaf standby_timer_flag; //type: boolean
        ydk::YLeaf standby_timer_secs; //type: uint32
        ydk::YLeaf standby_timer_msecs; //type: uint32
        ydk::YLeaf hello_timer_flag; //type: boolean
        ydk::YLeaf hello_timer_secs; //type: uint32
        ydk::YLeaf hello_timer_msecs; //type: uint32
        ydk::YLeaf delay_timer_flag; //type: boolean
        ydk::YLeaf delay_timer_secs; //type: uint32
        ydk::YLeaf delay_timer_msecs; //type: uint32
        ydk::YLeaf current_state_timer_secs; //type: uint32
        ydk::YLeaf state_change_count; //type: uint32
        ydk::YLeaf tracked_interface_count; //type: uint32
        ydk::YLeaf tracked_interface_up_count; //type: uint32
        ydk::YLeaf preempt_enabled; //type: boolean
        ydk::YLeaf use_configured_timers; //type: boolean
        ydk::YLeaf use_configured_virtual_ip; //type: boolean
        ydk::YLeaf use_bia_configured; //type: boolean
        ydk::YLeaf configured_timers; //type: boolean
        ydk::YLeaf configured_mac_address; //type: boolean
        ydk::YLeaf redirects_disabled; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interface; //type: string
        ydk::YLeaf bfd_peer_ip_address; //type: string
        ydk::YLeaf bfd_peer_ipv6_address; //type: string
        ydk::YLeaf bfd_session_state; //type: HsrpBfdSessionState
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_mac_address_state; //type: HsrpVmacState
        ydk::YLeafList secondary_address; //type: list of  string
        class ResignSentTime; //type: Hsrp::Ipv4::Groups::Group::ResignSentTime
        class ResignReceivedTime; //type: Hsrp::Ipv4::Groups::Group::ResignReceivedTime
        class CoupSentTime; //type: Hsrp::Ipv4::Groups::Group::CoupSentTime
        class CoupReceivedTime; //type: Hsrp::Ipv4::Groups::Group::CoupReceivedTime
        class Statistics; //type: Hsrp::Ipv4::Groups::Group::Statistics
        class GlobalAddress; //type: Hsrp::Ipv4::Groups::Group::GlobalAddress
        class StateChangeHistory; //type: Hsrp::Ipv4::Groups::Group::StateChangeHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::ResignSentTime> resign_sent_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::ResignReceivedTime> resign_received_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::CoupSentTime> coup_sent_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::CoupReceivedTime> coup_received_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::GlobalAddress> > global_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::StateChangeHistory> > state_change_history;
        
}; // Hsrp::Ipv4::Groups::Group


class Hsrp::Ipv4::Groups::Group::ResignSentTime : public ydk::Entity
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

}; // Hsrp::Ipv4::Groups::Group::ResignSentTime


class Hsrp::Ipv4::Groups::Group::ResignReceivedTime : public ydk::Entity
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

}; // Hsrp::Ipv4::Groups::Group::ResignReceivedTime


class Hsrp::Ipv4::Groups::Group::CoupSentTime : public ydk::Entity
{
    public:
        CoupSentTime();
        ~CoupSentTime();

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

}; // Hsrp::Ipv4::Groups::Group::CoupSentTime


class Hsrp::Ipv4::Groups::Group::CoupReceivedTime : public ydk::Entity
{
    public:
        CoupReceivedTime();
        ~CoupReceivedTime();

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

}; // Hsrp::Ipv4::Groups::Group::CoupReceivedTime


class Hsrp::Ipv4::Groups::Group::Statistics : public ydk::Entity
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

        ydk::YLeaf active_transitions; //type: uint32
        ydk::YLeaf standby_transitions; //type: uint32
        ydk::YLeaf speak_transitions; //type: uint32
        ydk::YLeaf listen_transitions; //type: uint32
        ydk::YLeaf learn_transitions; //type: uint32
        ydk::YLeaf init_transitions; //type: uint32
        ydk::YLeaf hello_packets_sent; //type: uint32
        ydk::YLeaf resign_packets_sent; //type: uint32
        ydk::YLeaf coup_packets_sent; //type: uint32
        ydk::YLeaf hello_packets_received; //type: uint32
        ydk::YLeaf resign_packets_received; //type: uint32
        ydk::YLeaf coup_packets_received; //type: uint32
        ydk::YLeaf auth_fail_received; //type: uint32
        ydk::YLeaf invalid_timer_received; //type: uint32
        ydk::YLeaf mismatch_virtual_ip_address_received; //type: uint32

}; // Hsrp::Ipv4::Groups::Group::Statistics


class Hsrp::Ipv4::Groups::Group::GlobalAddress : public ydk::Entity
{
    public:
        GlobalAddress();
        ~GlobalAddress();

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

}; // Hsrp::Ipv4::Groups::Group::GlobalAddress


class Hsrp::Ipv4::Groups::Group::StateChangeHistory : public ydk::Entity
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

        ydk::YLeaf old_state; //type: StandbyGrpState
        ydk::YLeaf new_state; //type: StandbyGrpState
        ydk::YLeaf reason; //type: HsrpStateChangeReason
        class Time; //type: Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time> time;
        
}; // Hsrp::Ipv4::Groups::Group::StateChangeHistory


class Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time : public ydk::Entity
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

}; // Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time


class Hsrp::Ipv4::TrackedInterfaces : public ydk::Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

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

        class TrackedInterface; //type: Hsrp::Ipv4::TrackedInterfaces::TrackedInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::TrackedInterfaces::TrackedInterface> > tracked_interface;
        
}; // Hsrp::Ipv4::TrackedInterfaces


class Hsrp::Ipv4::TrackedInterfaces::TrackedInterface : public ydk::Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

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
        ydk::YLeaf group_number; //type: int32
        ydk::YLeaf tracked_interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf hsrp_group_number; //type: uint32
        ydk::YLeaf priority_decrement; //type: uint32
        ydk::YLeaf interface_up_flag; //type: boolean
        ydk::YLeaf tracked_interface_name_xr; //type: string
        ydk::YLeaf is_object; //type: boolean

}; // Hsrp::Ipv4::TrackedInterfaces::TrackedInterface


class Hsrp::Ipv4::Interfaces : public ydk::Entity
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

        class Interface; //type: Hsrp::Ipv4::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Interfaces::Interface> > interface;
        
}; // Hsrp::Ipv4::Interfaces


class Hsrp::Ipv4::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf use_bia_flag; //type: boolean
        class Statistics; //type: Hsrp::Ipv4::Interfaces::Interface::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv4::Interfaces::Interface::Statistics> statistics;
        
}; // Hsrp::Ipv4::Interfaces::Interface


class Hsrp::Ipv4::Interfaces::Interface::Statistics : public ydk::Entity
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

        ydk::YLeaf advert_packets_sent; //type: uint32
        ydk::YLeaf advert_packets_received; //type: uint32
        ydk::YLeaf long_packets_received; //type: uint32
        ydk::YLeaf short_packets_received; //type: uint32
        ydk::YLeaf invalid_version_received; //type: uint32
        ydk::YLeaf invalid_operation_code_received; //type: uint32
        ydk::YLeaf unknown_group_received; //type: uint32
        ydk::YLeaf inoperational_group_received; //type: uint32
        ydk::YLeaf conflict_source_ip_address_received; //type: uint32

}; // Hsrp::Ipv4::Interfaces::Interface::Statistics


class Hsrp::MgoSessions : public ydk::Entity
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

        class MgoSession; //type: Hsrp::MgoSessions::MgoSession

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::MgoSessions::MgoSession> > mgo_session;
        
}; // Hsrp::MgoSessions


class Hsrp::MgoSessions::MgoSession : public ydk::Entity
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
        ydk::YLeaf primary_af_name; //type: HsrpBAf
        ydk::YLeaf primary_session_number; //type: uint32
        ydk::YLeaf primary_session_state; //type: StandbyGrpState
        class Slave; //type: Hsrp::MgoSessions::MgoSession::Slave

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::MgoSessions::MgoSession::Slave> > slave;
        
}; // Hsrp::MgoSessions::MgoSession


class Hsrp::MgoSessions::MgoSession::Slave : public ydk::Entity
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

        ydk::YLeaf slave_group_interface; //type: string
        ydk::YLeaf slave_group_number; //type: uint32

}; // Hsrp::MgoSessions::MgoSession::Slave


class Hsrp::Ipv6 : public ydk::Entity
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

        class TrackedInterfaces; //type: Hsrp::Ipv6::TrackedInterfaces
        class Groups; //type: Hsrp::Ipv6::Groups
        class Interfaces; //type: Hsrp::Ipv6::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Interfaces> interfaces;
        
}; // Hsrp::Ipv6


class Hsrp::Ipv6::TrackedInterfaces : public ydk::Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

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

        class TrackedInterface; //type: Hsrp::Ipv6::TrackedInterfaces::TrackedInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::TrackedInterfaces::TrackedInterface> > tracked_interface;
        
}; // Hsrp::Ipv6::TrackedInterfaces


class Hsrp::Ipv6::TrackedInterfaces::TrackedInterface : public ydk::Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

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
        ydk::YLeaf group_number; //type: int32
        ydk::YLeaf tracked_interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf hsrp_group_number; //type: uint32
        ydk::YLeaf priority_decrement; //type: uint32
        ydk::YLeaf interface_up_flag; //type: boolean
        ydk::YLeaf tracked_interface_name_xr; //type: string
        ydk::YLeaf is_object; //type: boolean

}; // Hsrp::Ipv6::TrackedInterfaces::TrackedInterface


class Hsrp::Ipv6::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Hsrp::Ipv6::Groups::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group> > group;
        
}; // Hsrp::Ipv6::Groups


class Hsrp::Ipv6::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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
        ydk::YLeaf group_number; //type: int32
        ydk::YLeaf authentication_string; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf hsrp_group_number; //type: uint32
        ydk::YLeaf address_family; //type: HsrpBAf
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf slaves; //type: uint32
        ydk::YLeaf is_slave; //type: boolean
        ydk::YLeaf followed_session_name; //type: string
        ydk::YLeaf configured_priority; //type: uint8
        ydk::YLeaf preempt_delay; //type: uint32
        ydk::YLeaf preempt_timer_secs; //type: uint32
        ydk::YLeaf hello_time; //type: uint32
        ydk::YLeaf hold_time; //type: uint32
        ydk::YLeaf learned_hello_time; //type: uint32
        ydk::YLeaf learned_hold_time; //type: uint32
        ydk::YLeaf min_delay_time; //type: uint32
        ydk::YLeaf reload_delay_time; //type: uint32
        ydk::YLeaf virtual_ip_address; //type: string
        ydk::YLeaf virtual_linklocal_ipv6_address; //type: string
        ydk::YLeaf active_ip_address; //type: string
        ydk::YLeaf active_ipv6_address; //type: string
        ydk::YLeaf active_mac_address; //type: string
        ydk::YLeaf standby_ip_address; //type: string
        ydk::YLeaf standby_ipv6_address; //type: string
        ydk::YLeaf standby_mac_address; //type: string
        ydk::YLeaf hsrp_router_state; //type: StandbyGrpState
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf router_priority; //type: uint8
        ydk::YLeaf active_priority; //type: uint8
        ydk::YLeaf active_timer_flag; //type: boolean
        ydk::YLeaf active_timer_secs; //type: uint32
        ydk::YLeaf active_timer_msecs; //type: uint32
        ydk::YLeaf standby_timer_flag; //type: boolean
        ydk::YLeaf standby_timer_secs; //type: uint32
        ydk::YLeaf standby_timer_msecs; //type: uint32
        ydk::YLeaf hello_timer_flag; //type: boolean
        ydk::YLeaf hello_timer_secs; //type: uint32
        ydk::YLeaf hello_timer_msecs; //type: uint32
        ydk::YLeaf delay_timer_flag; //type: boolean
        ydk::YLeaf delay_timer_secs; //type: uint32
        ydk::YLeaf delay_timer_msecs; //type: uint32
        ydk::YLeaf current_state_timer_secs; //type: uint32
        ydk::YLeaf state_change_count; //type: uint32
        ydk::YLeaf tracked_interface_count; //type: uint32
        ydk::YLeaf tracked_interface_up_count; //type: uint32
        ydk::YLeaf preempt_enabled; //type: boolean
        ydk::YLeaf use_configured_timers; //type: boolean
        ydk::YLeaf use_configured_virtual_ip; //type: boolean
        ydk::YLeaf use_bia_configured; //type: boolean
        ydk::YLeaf configured_timers; //type: boolean
        ydk::YLeaf configured_mac_address; //type: boolean
        ydk::YLeaf redirects_disabled; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interface; //type: string
        ydk::YLeaf bfd_peer_ip_address; //type: string
        ydk::YLeaf bfd_peer_ipv6_address; //type: string
        ydk::YLeaf bfd_session_state; //type: HsrpBfdSessionState
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_mac_address_state; //type: HsrpVmacState
        ydk::YLeafList secondary_address; //type: list of  string
        class ResignSentTime; //type: Hsrp::Ipv6::Groups::Group::ResignSentTime
        class ResignReceivedTime; //type: Hsrp::Ipv6::Groups::Group::ResignReceivedTime
        class CoupSentTime; //type: Hsrp::Ipv6::Groups::Group::CoupSentTime
        class CoupReceivedTime; //type: Hsrp::Ipv6::Groups::Group::CoupReceivedTime
        class Statistics; //type: Hsrp::Ipv6::Groups::Group::Statistics
        class GlobalAddress; //type: Hsrp::Ipv6::Groups::Group::GlobalAddress
        class StateChangeHistory; //type: Hsrp::Ipv6::Groups::Group::StateChangeHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::ResignSentTime> resign_sent_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::ResignReceivedTime> resign_received_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::CoupSentTime> coup_sent_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::CoupReceivedTime> coup_received_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::GlobalAddress> > global_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::StateChangeHistory> > state_change_history;
        
}; // Hsrp::Ipv6::Groups::Group


class Hsrp::Ipv6::Groups::Group::ResignSentTime : public ydk::Entity
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

}; // Hsrp::Ipv6::Groups::Group::ResignSentTime


class Hsrp::Ipv6::Groups::Group::ResignReceivedTime : public ydk::Entity
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

}; // Hsrp::Ipv6::Groups::Group::ResignReceivedTime


class Hsrp::Ipv6::Groups::Group::CoupSentTime : public ydk::Entity
{
    public:
        CoupSentTime();
        ~CoupSentTime();

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

}; // Hsrp::Ipv6::Groups::Group::CoupSentTime


class Hsrp::Ipv6::Groups::Group::CoupReceivedTime : public ydk::Entity
{
    public:
        CoupReceivedTime();
        ~CoupReceivedTime();

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

}; // Hsrp::Ipv6::Groups::Group::CoupReceivedTime


class Hsrp::Ipv6::Groups::Group::Statistics : public ydk::Entity
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

        ydk::YLeaf active_transitions; //type: uint32
        ydk::YLeaf standby_transitions; //type: uint32
        ydk::YLeaf speak_transitions; //type: uint32
        ydk::YLeaf listen_transitions; //type: uint32
        ydk::YLeaf learn_transitions; //type: uint32
        ydk::YLeaf init_transitions; //type: uint32
        ydk::YLeaf hello_packets_sent; //type: uint32
        ydk::YLeaf resign_packets_sent; //type: uint32
        ydk::YLeaf coup_packets_sent; //type: uint32
        ydk::YLeaf hello_packets_received; //type: uint32
        ydk::YLeaf resign_packets_received; //type: uint32
        ydk::YLeaf coup_packets_received; //type: uint32
        ydk::YLeaf auth_fail_received; //type: uint32
        ydk::YLeaf invalid_timer_received; //type: uint32
        ydk::YLeaf mismatch_virtual_ip_address_received; //type: uint32

}; // Hsrp::Ipv6::Groups::Group::Statistics


class Hsrp::Ipv6::Groups::Group::GlobalAddress : public ydk::Entity
{
    public:
        GlobalAddress();
        ~GlobalAddress();

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

}; // Hsrp::Ipv6::Groups::Group::GlobalAddress


class Hsrp::Ipv6::Groups::Group::StateChangeHistory : public ydk::Entity
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

        ydk::YLeaf old_state; //type: StandbyGrpState
        ydk::YLeaf new_state; //type: StandbyGrpState
        ydk::YLeaf reason; //type: HsrpStateChangeReason
        class Time; //type: Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time> time;
        
}; // Hsrp::Ipv6::Groups::Group::StateChangeHistory


class Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time : public ydk::Entity
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

}; // Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time


class Hsrp::Ipv6::Interfaces : public ydk::Entity
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

        class Interface; //type: Hsrp::Ipv6::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Interfaces::Interface> > interface;
        
}; // Hsrp::Ipv6::Interfaces


class Hsrp::Ipv6::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf use_bia_flag; //type: boolean
        class Statistics; //type: Hsrp::Ipv6::Interfaces::Interface::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::Ipv6::Interfaces::Interface::Statistics> statistics;
        
}; // Hsrp::Ipv6::Interfaces::Interface


class Hsrp::Ipv6::Interfaces::Interface::Statistics : public ydk::Entity
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

        ydk::YLeaf advert_packets_sent; //type: uint32
        ydk::YLeaf advert_packets_received; //type: uint32
        ydk::YLeaf long_packets_received; //type: uint32
        ydk::YLeaf short_packets_received; //type: uint32
        ydk::YLeaf invalid_version_received; //type: uint32
        ydk::YLeaf invalid_operation_code_received; //type: uint32
        ydk::YLeaf unknown_group_received; //type: uint32
        ydk::YLeaf inoperational_group_received; //type: uint32
        ydk::YLeaf conflict_source_ip_address_received; //type: uint32

}; // Hsrp::Ipv6::Interfaces::Interface::Statistics


class Hsrp::BfdSessions : public ydk::Entity
{
    public:
        BfdSessions();
        ~BfdSessions();

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

        class BfdSession; //type: Hsrp::BfdSessions::BfdSession

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::BfdSessions::BfdSession> > bfd_session;
        
}; // Hsrp::BfdSessions


class Hsrp::BfdSessions::BfdSession : public ydk::Entity
{
    public:
        BfdSession();
        ~BfdSession();

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
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf bfd_interface_name; //type: string
        ydk::YLeaf session_address_family; //type: HsrpBAf
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_ipv6_address; //type: string
        ydk::YLeaf bfd_session_state; //type: HsrpBfdSessionState
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        class Group; //type: Hsrp::BfdSessions::BfdSession::Group

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp::BfdSessions::BfdSession::Group> > group;
        
}; // Hsrp::BfdSessions::BfdSession


class Hsrp::BfdSessions::BfdSession::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf hsrp_group_number; //type: uint32

}; // Hsrp::BfdSessions::BfdSession::Group


class Hsrp::Summary : public ydk::Entity
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

        ydk::YLeaf ipv4_sessions_active; //type: uint32
        ydk::YLeaf ipv4_sessions_standby; //type: uint32
        ydk::YLeaf ipv4_sessions_speak; //type: uint32
        ydk::YLeaf ipv4_sessions_listen; //type: uint32
        ydk::YLeaf ipv4_sessions_learn; //type: uint32
        ydk::YLeaf ipv4_sessions_init; //type: uint32
        ydk::YLeaf ipv4_slaves_active; //type: uint32
        ydk::YLeaf ipv4_slaves_standby; //type: uint32
        ydk::YLeaf ipv4_slaves_speak; //type: uint32
        ydk::YLeaf ipv4_slaves_listen; //type: uint32
        ydk::YLeaf ipv4_slaves_learn; //type: uint32
        ydk::YLeaf ipv4_slaves_init; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_active_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_active_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_standby_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_standby_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_speak_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_speak_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_listen_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_listen_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_learn_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_learn_down; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_init_up; //type: uint32
        ydk::YLeaf ipv4_virtual_ip_addresses_init_down; //type: uint32
        ydk::YLeaf ipv6_sessions_active; //type: uint32
        ydk::YLeaf ipv6_sessions_standby; //type: uint32
        ydk::YLeaf ipv6_sessions_speak; //type: uint32
        ydk::YLeaf ipv6_sessions_listen; //type: uint32
        ydk::YLeaf ipv6_sessions_learn; //type: uint32
        ydk::YLeaf ipv6_sessions_init; //type: uint32
        ydk::YLeaf ipv6_slaves_active; //type: uint32
        ydk::YLeaf ipv6_slaves_standby; //type: uint32
        ydk::YLeaf ipv6_slaves_speak; //type: uint32
        ydk::YLeaf ipv6_slaves_listen; //type: uint32
        ydk::YLeaf ipv6_slaves_learn; //type: uint32
        ydk::YLeaf ipv6_slaves_init; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_active_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_active_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_standby_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_standby_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_speak_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_speak_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_listen_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_listen_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_learn_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_learn_down; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_init_up; //type: uint32
        ydk::YLeaf ipv6_virtual_ip_addresses_init_down; //type: uint32
        ydk::YLeaf interfaces_ipv4_state_up; //type: uint32
        ydk::YLeaf interfaces_ipv4_state_down; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv4_state_up; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv4_state_down; //type: uint32
        ydk::YLeaf tracked_objects_up; //type: uint32
        ydk::YLeaf tracked_objects_down; //type: uint32
        ydk::YLeaf interfaces_ipv6_state_up; //type: uint32
        ydk::YLeaf interfaces_ipv6_state_down; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv6_state_up; //type: uint32
        ydk::YLeaf tracked_interfaces_ipv6_state_down; //type: uint32
        ydk::YLeaf bfd_sessions_up; //type: uint32
        ydk::YLeaf bfd_sessions_down; //type: uint32
        ydk::YLeaf bfd_session_inactive; //type: uint32

}; // Hsrp::Summary

class HsrpVmacState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stored;
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf reserving;

};

class HsrpStateChangeReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_change_bfd_down;
        static const ydk::Enum::YLeaf state_change_vip_learnt;
        static const ydk::Enum::YLeaf state_change_interface_ip;
        static const ydk::Enum::YLeaf state_change_delay_timer;
        static const ydk::Enum::YLeaf state_change_startup;
        static const ydk::Enum::YLeaf state_change_shutdown;
        static const ydk::Enum::YLeaf state_change_interface_up;
        static const ydk::Enum::YLeaf state_change_interface_down;
        static const ydk::Enum::YLeaf state_change_active_timer;
        static const ydk::Enum::YLeaf state_change_standby_timer;
        static const ydk::Enum::YLeaf state_change_resign;
        static const ydk::Enum::YLeaf state_change_coup;
        static const ydk::Enum::YLeaf state_change_higher_priority_speak;
        static const ydk::Enum::YLeaf state_change_higher_priority_standby;
        static const ydk::Enum::YLeaf state_change_lower_priority_standby;
        static const ydk::Enum::YLeaf state_change_higher_priority_active;
        static const ydk::Enum::YLeaf state_change_lower_priority_active;
        static const ydk::Enum::YLeaf state_change_virtual_ip_configured;
        static const ydk::Enum::YLeaf state_change_virtual_ip_lost;
        static const ydk::Enum::YLeaf state_change_recovered_from_checkpoint;
        static const ydk::Enum::YLeaf state_change_mac_update;
        static const ydk::Enum::YLeaf state_change_admin;
        static const ydk::Enum::YLeaf state_change_parent;
        static const ydk::Enum::YLeaf state_change_chkpt_update;
        static const ydk::Enum::YLeaf state_change_issu_resync;
        static const ydk::Enum::YLeaf state_change_reset_to_learn;
        static const ydk::Enum::YLeaf state_change_max;

};

class HsrpBfdSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_state_none;
        static const ydk::Enum::YLeaf bfd_state_inactive;
        static const ydk::Enum::YLeaf bfd_state_up;
        static const ydk::Enum::YLeaf bfd_state_down;

};

class StandbyGrpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf state_initial;
        static const ydk::Enum::YLeaf state_learn;
        static const ydk::Enum::YLeaf state_listen;
        static const ydk::Enum::YLeaf state_speak;
        static const ydk::Enum::YLeaf state_standby;
        static const ydk::Enum::YLeaf state_active;

};

class HsrpBAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf count;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_HSRP_OPER_ */

