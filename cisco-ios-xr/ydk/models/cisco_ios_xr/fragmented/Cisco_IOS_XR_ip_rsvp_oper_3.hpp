#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_3_
#define _CISCO_IOS_XR_IP_RSVP_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {


class RsvpStandby::ControllerDetaileds::ControllerDetailed : public ydk::Entity
{
    public:
        ControllerDetailed();
        ~ControllerDetailed();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf signalling_ip_tos; //type: uint8
        ydk::YLeaf integrity_send_password; //type: string
        ydk::YLeaf integrity_receive_password; //type: string
        ydk::YLeaf integrity_receive_password_optional; //type: uint8
        ydk::YLeaf refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf summary_refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf refresh_interval; //type: int32
        ydk::YLeaf out_of_band_refresh_interval; //type: uint32
        ydk::YLeaf summary_refresh_max_size; //type: uint32
        ydk::YLeaf bundle_message_max_size; //type: uint32
        ydk::YLeaf expiry_timer_state; //type: RsvpTimerState
        ydk::YLeaf expiry_states; //type: int32
        ydk::YLeaf expiry_interval; //type: int32
        ydk::YLeaf expiry_drops_tolerated; //type: int32
        ydk::YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        ydk::YLeaf ack_hold_time; //type: uint32
        ydk::YLeaf ack_max_size; //type: uint32
        ydk::YLeaf retransmit_time; //type: uint32
        ydk::YLeaf pacing_interval; //type: uint32
        ydk::YLeaf pacing_message_rate; //type: uint32
        ydk::YLeaf pacing_timer_state; //type: RsvpTimerState
        ydk::YLeaf pacing_messages; //type: int32
        class BandwidthInformation; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation
        class Flags; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags
        class NeighborArray; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray> > neighbor_array;
        
}; // RsvpStandby::ControllerDetaileds::ControllerDetailed


class RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation


class RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface


class RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_enabled; //type: boolean
        ydk::YLeaf is_refresh_reduction_enabled; //type: boolean
        ydk::YLeaf is_pacing_enabled; //type: boolean
        ydk::YLeaf is_refresh_enabled; //type: boolean
        ydk::YLeaf is_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_interface_down; //type: boolean
        ydk::YLeaf is_interface_created; //type: boolean
        ydk::YLeaf is_rel_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_backup_tunnel; //type: boolean
        ydk::YLeaf is_rsvp_configured; //type: boolean
        ydk::YLeaf is_non_default_vrf; //type: boolean
        ydk::YLeaf is_message_bundling_enabled; //type: boolean

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::Flags


class RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray : public ydk::Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf message_ids; //type: uint32
        ydk::YLeaf outgoing_states; //type: int32
        class ExpiryTime; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;
        
}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray


class RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime : public ydk::Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime


class RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId : public ydk::Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_id; //type: uint32

}; // RsvpStandby::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId


class RsvpStandby::ControllerSummaries : public ydk::Entity
{
    public:
        ControllerSummaries();
        ~ControllerSummaries();

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

        class ControllerSummary; //type: RsvpStandby::ControllerSummaries::ControllerSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary> > controller_summary;
        
}; // RsvpStandby::ControllerSummaries


class RsvpStandby::ControllerSummaries::ControllerSummary : public ydk::Entity
{
    public:
        ControllerSummary();
        ~ControllerSummary();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf paths_in; //type: uint32
        ydk::YLeaf paths_out; //type: uint32
        ydk::YLeaf reservations_in; //type: uint32
        ydk::YLeaf reservations_out; //type: uint32
        class BandwidthInformation; //type: RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::ControllerSummaries::ControllerSummary


class RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation


class RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // RsvpStandby::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface


class RsvpStandby::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        class InterfaceMessages; //type: RsvpStandby::Counters::InterfaceMessages
        class MessageSummary; //type: RsvpStandby::Counters::MessageSummary
        class PrefixFiltering; //type: RsvpStandby::Counters::PrefixFiltering
        class OutOfResource; //type: RsvpStandby::Counters::OutOfResource
        class InterfaceEvents; //type: RsvpStandby::Counters::InterfaceEvents
        class Nsr; //type: RsvpStandby::Counters::Nsr
        class Issu; //type: RsvpStandby::Counters::Issu
        class Database; //type: RsvpStandby::Counters::Database
        class EventSyncs; //type: RsvpStandby::Counters::EventSyncs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::EventSyncs> event_syncs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceEvents> interface_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages> interface_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Issu> issu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary> message_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource> out_of_resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering> prefix_filtering;
        
}; // RsvpStandby::Counters


class RsvpStandby::Counters::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

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

        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf incoming_paths; //type: uint32
        ydk::YLeaf outgoing_paths; //type: uint32
        ydk::YLeaf incoming_reservations; //type: uint32
        ydk::YLeaf outgoing_reservations; //type: uint32
        ydk::YLeaf interfaces; //type: uint32

}; // RsvpStandby::Counters::Database


class RsvpStandby::Counters::EventSyncs : public ydk::Entity
{
    public:
        EventSyncs();
        ~EventSyncs();

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

        class EventSync; //type: RsvpStandby::Counters::EventSyncs::EventSync

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::EventSyncs::EventSync> > event_sync;
        
}; // RsvpStandby::Counters::EventSyncs


class RsvpStandby::Counters::EventSyncs::EventSync : public ydk::Entity
{
    public:
        EventSync();
        ~EventSync();

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
        ydk::YLeaf expired_paths; //type: uint32
        ydk::YLeaf expired_reservations; //type: uint32
        ydk::YLeaf nac_ks; //type: uint32

}; // RsvpStandby::Counters::EventSyncs::EventSync


class RsvpStandby::Counters::InterfaceEvents : public ydk::Entity
{
    public:
        InterfaceEvents();
        ~InterfaceEvents();

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

        class InterfaceEvent; //type: RsvpStandby::Counters::InterfaceEvents::InterfaceEvent

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceEvents::InterfaceEvent> > interface_event;
        
}; // RsvpStandby::Counters::InterfaceEvents


class RsvpStandby::Counters::InterfaceEvents::InterfaceEvent : public ydk::Entity
{
    public:
        InterfaceEvent();
        ~InterfaceEvent();

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
        ydk::YLeaf expired_paths; //type: uint32
        ydk::YLeaf expired_reservations; //type: uint32
        ydk::YLeaf nac_ks; //type: uint32

}; // RsvpStandby::Counters::InterfaceEvents::InterfaceEvent


class RsvpStandby::Counters::InterfaceMessages : public ydk::Entity
{
    public:
        InterfaceMessages();
        ~InterfaceMessages();

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

        class InterfaceMessage; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage> > interface_message;
        
}; // RsvpStandby::Counters::InterfaceMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage : public ydk::Entity
{
    public:
        InterfaceMessage();
        ~InterfaceMessage();

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
        ydk::YLeaf retransmitted_messages; //type: uint32
        ydk::YLeaf out_of_order_messages; //type: uint32
        ydk::YLeaf rate_limited_messages; //type: uint32
        class ReceivedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages
        class TransmittedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages
        class BundleReceivedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages
        class BundleTransmittedMessages; //type: RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages> received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages> transmitted_messages;
        
}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages : public ydk::Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages : public ydk::Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages : public ydk::Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


class RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages : public ydk::Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


class RsvpStandby::Counters::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        ydk::YLeaf last_cleared_timestamp; //type: uint32
        ydk::YLeaf rsvp_process_role; //type: RsvpProcRole
        ydk::YLeaf last_idt_states; //type: uint32
        ydk::YLeaf total_states; //type: uint32
        ydk::YLeaf total_deletions; //type: uint32
        ydk::YLeaf total_nacks; //type: uint64
        ydk::YLeaf total_id_ts; //type: uint32

}; // RsvpStandby::Counters::Issu


class RsvpStandby::Counters::MessageSummary : public ydk::Entity
{
    public:
        MessageSummary();
        ~MessageSummary();

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

        ydk::YLeaf retransmitted_messages; //type: uint32
        ydk::YLeaf out_of_order_messages; //type: uint32
        ydk::YLeaf rate_limited_messages; //type: uint32
        class ReceivedMessages; //type: RsvpStandby::Counters::MessageSummary::ReceivedMessages
        class TransmittedMessages; //type: RsvpStandby::Counters::MessageSummary::TransmittedMessages
        class BundleReceivedMessages; //type: RsvpStandby::Counters::MessageSummary::BundleReceivedMessages
        class BundleTransmittedMessages; //type: RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::BundleReceivedMessages> bundle_received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages> bundle_transmitted_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::ReceivedMessages> received_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::TransmittedMessages> transmitted_messages;
        
}; // RsvpStandby::Counters::MessageSummary


class RsvpStandby::Counters::MessageSummary::BundleReceivedMessages : public ydk::Entity
{
    public:
        BundleReceivedMessages();
        ~BundleReceivedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::MessageSummary::BundleReceivedMessages


class RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages : public ydk::Entity
{
    public:
        BundleTransmittedMessages();
        ~BundleTransmittedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages


class RsvpStandby::Counters::MessageSummary::ReceivedMessages : public ydk::Entity
{
    public:
        ReceivedMessages();
        ~ReceivedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::MessageSummary::ReceivedMessages


class RsvpStandby::Counters::MessageSummary::TransmittedMessages : public ydk::Entity
{
    public:
        TransmittedMessages();
        ~TransmittedMessages();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf reservation; //type: uint32
        ydk::YLeaf path_error; //type: uint32
        ydk::YLeaf reservation_error; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf bundle; //type: uint32
        ydk::YLeaf ack; //type: uint32
        ydk::YLeaf srefresh; //type: uint32
        ydk::YLeaf hello; //type: uint32
        ydk::YLeaf challenge; //type: uint32
        ydk::YLeaf response; //type: uint32

}; // RsvpStandby::Counters::MessageSummary::TransmittedMessages


class RsvpStandby::Counters::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        ydk::YLeaf last_cleared_timestamp; //type: uint32
        ydk::YLeaf rsvp_process_role; //type: RsvpProcRole
        ydk::YLeaf last_idt_states; //type: uint32
        ydk::YLeaf total_states; //type: uint32
        ydk::YLeaf total_deletions; //type: uint32
        ydk::YLeaf total_nacks; //type: uint64
        ydk::YLeaf total_id_ts; //type: uint32

}; // RsvpStandby::Counters::Nsr


class RsvpStandby::Counters::OutOfResource : public ydk::Entity
{
    public:
        OutOfResource();
        ~OutOfResource();

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

        class Interfaces; //type: RsvpStandby::Counters::OutOfResource::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces> interfaces;
        
}; // RsvpStandby::Counters::OutOfResource


class RsvpStandby::Counters::OutOfResource::Interfaces : public ydk::Entity
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

        class Summary; //type: RsvpStandby::Counters::OutOfResource::Interfaces::Summary
        class Interfaces_; //type: RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Summary> summary;
        
}; // RsvpStandby::Counters::OutOfResource::Interfaces


class RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_ : public ydk::Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

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

        class Interface; //type: RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;
        
}; // RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_


class RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface : public ydk::Entity
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
        ydk::YLeaf dropped_path_messages; //type: uint32

}; // RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface


class RsvpStandby::Counters::OutOfResource::Interfaces::Summary : public ydk::Entity
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

        ydk::YLeaf dropped_path_messages; //type: uint32

}; // RsvpStandby::Counters::OutOfResource::Interfaces::Summary


class RsvpStandby::Counters::PrefixFiltering : public ydk::Entity
{
    public:
        PrefixFiltering();
        ~PrefixFiltering();

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

        class Accesses; //type: RsvpStandby::Counters::PrefixFiltering::Accesses
        class Interfaces; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses> accesses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces> interfaces;
        
}; // RsvpStandby::Counters::PrefixFiltering


class RsvpStandby::Counters::PrefixFiltering::Accesses : public ydk::Entity
{
    public:
        Accesses();
        ~Accesses();

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

        class Access; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access> > access;
        
}; // RsvpStandby::Counters::PrefixFiltering::Accesses


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf access_list_name; //type: string
        class Forwarded; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded
        class LocallyDestined; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined
        class Dropped; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped
        class Total; //type: RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped> dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded> forwarded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined> locally_destined;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total> total;
        
}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded : public ydk::Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined : public ydk::Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined


class RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total


class RsvpStandby::Counters::PrefixFiltering::Interfaces : public ydk::Entity
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

        class Summary; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary
        class Interfaces_; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary> summary;
        
}; // RsvpStandby::Counters::PrefixFiltering::Interfaces


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_ : public ydk::Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

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

        class Interface; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface> > interface;
        
}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface : public ydk::Entity
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
        class Forwarded; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded
        class LocallyDestined; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined
        class Dropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped
        class DefaultActionDropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped
        class DefaultActionProcessed; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed
        class Total; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;
        
}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped : public ydk::Entity
{
    public:
        DefaultActionDropped();
        ~DefaultActionDropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed : public ydk::Entity
{
    public:
        DefaultActionProcessed();
        ~DefaultActionProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded : public ydk::Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined : public ydk::Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary : public ydk::Entity
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

        class Forwarded; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded
        class LocallyDestined; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined
        class Dropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped
        class DefaultActionDropped; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped
        class DefaultActionProcessed; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed
        class Total; //type: RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped> dropped;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded> forwarded;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined> locally_destined;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total> total;
        
}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped : public ydk::Entity
{
    public:
        DefaultActionDropped();
        ~DefaultActionDropped();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed : public ydk::Entity
{
    public:
        DefaultActionProcessed();
        ~DefaultActionProcessed();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped : public ydk::Entity
{
    public:
        Dropped();
        ~Dropped();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded : public ydk::Entity
{
    public:
        Forwarded();
        ~Forwarded();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined : public ydk::Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined


class RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

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

        ydk::YLeaf path; //type: uint32
        ydk::YLeaf path_tear; //type: uint32
        ydk::YLeaf reservation_confirm; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total


class RsvpStandby::FrrSummary : public ydk::Entity
{
    public:
        FrrSummary();
        ~FrrSummary();

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

        class PathStates; //type: RsvpStandby::FrrSummary::PathStates
        class ReservationStates; //type: RsvpStandby::FrrSummary::ReservationStates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::PathStates> path_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::ReservationStates> reservation_states;
        
}; // RsvpStandby::FrrSummary


class RsvpStandby::FrrSummary::PathStates : public ydk::Entity
{
    public:
        PathStates();
        ~PathStates();

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

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf active_instances; //type: uint32
        ydk::YLeaf ready_instances; //type: uint32
        ydk::YLeaf active_wait_instances; //type: uint32

}; // RsvpStandby::FrrSummary::PathStates


class RsvpStandby::FrrSummary::ReservationStates : public ydk::Entity
{
    public:
        ReservationStates();
        ~ReservationStates();

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

        ydk::YLeaf total; //type: uint32
        ydk::YLeaf active_instances; //type: uint32
        ydk::YLeaf ready_instances; //type: uint32
        ydk::YLeaf active_wait_instances; //type: uint32

}; // RsvpStandby::FrrSummary::ReservationStates


class RsvpStandby::Frrs : public ydk::Entity
{
    public:
        Frrs();
        ~Frrs();

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

        class Frr; //type: RsvpStandby::Frrs::Frr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr> > frr;
        
}; // RsvpStandby::Frrs


class RsvpStandby::Frrs::Frr : public ydk::Entity
{
    public:
        Frr();
        ~Frr();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf path_status; //type: RsvpMgmtFrrStateEnum
        ydk::YLeaf reservation_status; //type: RsvpMgmtFrrStateEnum
        class Session; //type: RsvpStandby::Frrs::Frr::Session
        class S2LSubLsp; //type: RsvpStandby::Frrs::Frr::S2LSubLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session> session;
        
}; // RsvpStandby::Frrs::Frr


class RsvpStandby::Frrs::Frr::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::Frrs::Frr::S2LSubLsp


class RsvpStandby::Frrs::Frr::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::Frrs::Frr::Session


class RsvpStandby::Frrs::Frr::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::Frrs::Frr::Session::RsvpSession


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::GlobalNeighborBriefs : public ydk::Entity
{
    public:
        GlobalNeighborBriefs();
        ~GlobalNeighborBriefs();

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

        class GlobalNeighborBrief; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief> > global_neighbor_brief;
        
}; // RsvpStandby::GlobalNeighborBriefs


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief : public ydk::Entity
{
    public:
        GlobalNeighborBrief();
        ~GlobalNeighborBrief();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf node_address; //type: string
        ydk::YLeaf restart_state; //type: RsvpMgmtRestartState
        ydk::YLeafList local_node_address; //type: list of  string
        ydk::YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloState
        ydk::YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReason
        ydk::YLeafList lost_communication_total; //type: list of  uint16
        class GlobalNeighborFlags; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags
        class UpTime; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime
        class LostCommunicationTime; //type: RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime> > lost_communication_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime> > up_time;
        
}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags : public ydk::Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_application_ouni; //type: boolean
        ydk::YLeaf is_application_mpls; //type: boolean

}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime : public ydk::Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime


class RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime : public ydk::Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime


class RsvpStandby::GlobalNeighborDetails : public ydk::Entity
{
    public:
        GlobalNeighborDetails();
        ~GlobalNeighborDetails();

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

        class GlobalNeighborDetail; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail> > global_neighbor_detail;
        
}; // RsvpStandby::GlobalNeighborDetails


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail : public ydk::Entity
{
    public:
        GlobalNeighborDetail();
        ~GlobalNeighborDetail();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf node_address; //type: string
        ydk::YLeaf restart_state; //type: RsvpMgmtRestartState
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf is_restart_timer_running; //type: boolean
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf missed_hellos; //type: uint8
        ydk::YLeaf pending_states; //type: uint32
        ydk::YLeafList local_node_address; //type: list of  string
        ydk::YLeafList interface_neighbor; //type: list of  string
        ydk::YLeafList neighbor_hello_state; //type: list of  RsvpMgmtHelloState
        ydk::YLeafList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReason
        ydk::YLeafList lost_communication_total; //type: list of  uint16
        class GlobalNeighborFlags; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags
        class RestartTimeLeft; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft
        class RestartTimerExpiryTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime
        class RecoveryTimeLeft; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime
        class UpTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime
        class LostCommunicationTime; //type: RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags> global_neighbor_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime> > lost_communication_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime> recovery_timer_exp_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft> restart_time_left;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime> restart_timer_expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime> > up_time;
        
}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags : public ydk::Entity
{
    public:
        GlobalNeighborFlags();
        ~GlobalNeighborFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_application_ouni; //type: boolean
        ydk::YLeaf is_application_mpls; //type: boolean

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime : public ydk::Entity
{
    public:
        LostCommunicationTime();
        ~LostCommunicationTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft : public ydk::Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime : public ydk::Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft : public ydk::Entity
{
    public:
        RestartTimeLeft();
        ~RestartTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime : public ydk::Entity
{
    public:
        RestartTimerExpiryTime();
        ~RestartTimerExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime


class RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime : public ydk::Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime


class RsvpStandby::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        ydk::YLeaf is_gr_enabled; //type: boolean
        ydk::YLeaf global_neighbors; //type: uint32
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf is_recovery_timer_running; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf missed_hellos; //type: uint8
        ydk::YLeaf pending_states; //type: uint32
        class RecoveryTimeLeft; //type: RsvpStandby::GracefulRestart::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: RsvpStandby::GracefulRestart::RecoveryTimerExpTime
        class LocalNodeAddress; //type: RsvpStandby::GracefulRestart::LocalNodeAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::LocalNodeAddress> > local_node_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;
        
}; // RsvpStandby::GracefulRestart


class RsvpStandby::GracefulRestart::LocalNodeAddress : public ydk::Entity
{
    public:
        LocalNodeAddress();
        ~LocalNodeAddress();

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

        ydk::YLeaf local_node_ip_address; //type: string
        ydk::YLeaf application_type; //type: RsvpMgmtGrApp

}; // RsvpStandby::GracefulRestart::LocalNodeAddress


class RsvpStandby::GracefulRestart::RecoveryTimeLeft : public ydk::Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GracefulRestart::RecoveryTimeLeft


class RsvpStandby::GracefulRestart::RecoveryTimerExpTime : public ydk::Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

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

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::GracefulRestart::RecoveryTimerExpTime


class RsvpStandby::HelloInstanceBriefs : public ydk::Entity
{
    public:
        HelloInstanceBriefs();
        ~HelloInstanceBriefs();

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

        class HelloInstanceBrief; //type: RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;
        
}; // RsvpStandby::HelloInstanceBriefs


class RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief : public ydk::Entity
{
    public:
        HelloInstanceBrief();
        ~HelloInstanceBrief();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf neighbor_hello_state; //type: RsvpMgmtHelloState
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string
        ydk::YLeaf lost_communication_total; //type: uint16

}; // RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief


class RsvpStandby::HelloInstanceDetails : public ydk::Entity
{
    public:
        HelloInstanceDetails();
        ~HelloInstanceDetails();

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

        class HelloInstanceDetail; //type: RsvpStandby::HelloInstanceDetails::HelloInstanceDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail> > hello_instance_detail;
        
}; // RsvpStandby::HelloInstanceDetails


class RsvpStandby::HelloInstanceDetails::HelloInstanceDetail : public ydk::Entity
{
    public:
        HelloInstanceDetail();
        ~HelloInstanceDetail();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf hello_instance_owner; //type: RsvpMgmtHelloInstanceOwner
        ydk::YLeaf neighbor_hello_state; //type: RsvpMgmtHelloState
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf missed_acks_allowed; //type: uint32
        ydk::YLeaf source_instance; //type: uint32
        ydk::YLeaf destination_instance; //type: uint32
        ydk::YLeaf communication_lost_reason; //type: RsvpMgmtHelloDownReason
        ydk::YLeaf total_communication_lost; //type: uint16
        ydk::YLeaf communication_lost_hello_missed; //type: uint16
        ydk::YLeaf communication_lost_wrong_source_inst; //type: uint16
        ydk::YLeaf communication_lost_wrong_destination_inst; //type: uint16
        ydk::YLeaf communication_lost_interface_down; //type: uint16
        ydk::YLeaf communication_lost_neighbor_disabled_hello; //type: uint16
        ydk::YLeaf hello_messages_sent; //type: uint64
        ydk::YLeaf hello_messages_received; //type: uint64
        ydk::YLeaf hello_request_suppressed; //type: uint64
        class UpTime; //type: RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime
        class CommunicationLostTime; //type: RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime> communication_lost_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime> up_time;
        
}; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail


class RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime : public ydk::Entity
{
    public:
        CommunicationLostTime();
        ~CommunicationLostTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime


class RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime : public ydk::Entity
{
    public:
        UpTime();
        ~UpTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime


class RsvpStandby::HelloInterfaceInstanceBriefs : public ydk::Entity
{
    public:
        HelloInterfaceInstanceBriefs();
        ~HelloInterfaceInstanceBriefs();

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

        class HelloInterfaceInstanceBrief; //type: RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;
        
}; // RsvpStandby::HelloInterfaceInstanceBriefs


class RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief : public ydk::Entity
{
    public:
        HelloInterfaceInstanceBrief();
        ~HelloInterfaceInstanceBrief();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string

}; // RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


class RsvpStandby::HelloInterfaceInstanceDetails : public ydk::Entity
{
    public:
        HelloInterfaceInstanceDetails();
        ~HelloInterfaceInstanceDetails();

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

        class HelloInterfaceInstanceDetail; //type: RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;
        
}; // RsvpStandby::HelloInterfaceInstanceDetails


class RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail : public ydk::Entity
{
    public:
        HelloInterfaceInstanceDetail();
        ~HelloInterfaceInstanceDetail();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf hello_global_neighbor_id; //type: string
        ydk::YLeaf instance_type; //type: RsvpMgmtHelloInstance
        ydk::YLeaf hello_interface; //type: string
        ydk::YLeaf source_instance; //type: uint32
        ydk::YLeaf destination_instance; //type: uint32
        ydk::YLeaf hello_messages_sent; //type: uint64
        ydk::YLeaf hello_messages_received; //type: uint64
        class LastMessageSentTime; //type: RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;
        
}; // RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


class RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime : public ydk::Entity
{
    public:
        LastMessageSentTime();
        ~LastMessageSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


class RsvpStandby::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

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

        class InterfaceBrief; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // RsvpStandby::InterfaceBriefs


class RsvpStandby::InterfaceBriefs::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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
        ydk::YLeaf interface_name_xr; //type: string
        class BandwidthInformation; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::InterfaceBriefs::InterfaceBrief


class RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation


class RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


class RsvpStandby::InterfaceDetaileds : public ydk::Entity
{
    public:
        InterfaceDetaileds();
        ~InterfaceDetaileds();

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

        class InterfaceDetailed; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;
        
}; // RsvpStandby::InterfaceDetaileds


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed : public ydk::Entity
{
    public:
        InterfaceDetailed();
        ~InterfaceDetailed();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf signalling_ip_tos; //type: uint8
        ydk::YLeaf integrity_send_password; //type: string
        ydk::YLeaf integrity_receive_password; //type: string
        ydk::YLeaf integrity_receive_password_optional; //type: uint8
        ydk::YLeaf refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf summary_refresh_timer_state; //type: RsvpTimerState
        ydk::YLeaf refresh_interval; //type: int32
        ydk::YLeaf out_of_band_refresh_interval; //type: uint32
        ydk::YLeaf summary_refresh_max_size; //type: uint32
        ydk::YLeaf bundle_message_max_size; //type: uint32
        ydk::YLeaf expiry_timer_state; //type: RsvpTimerState
        ydk::YLeaf expiry_states; //type: int32
        ydk::YLeaf expiry_interval; //type: int32
        ydk::YLeaf expiry_drops_tolerated; //type: int32
        ydk::YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        ydk::YLeaf ack_hold_time; //type: uint32
        ydk::YLeaf ack_max_size; //type: uint32
        ydk::YLeaf retransmit_time; //type: uint32
        ydk::YLeaf pacing_interval; //type: uint32
        ydk::YLeaf pacing_message_rate; //type: uint32
        ydk::YLeaf pacing_timer_state; //type: RsvpTimerState
        ydk::YLeaf pacing_messages; //type: int32
        class BandwidthInformation; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation
        class Flags; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags
        class NeighborArray; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;
        
}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_enabled; //type: boolean
        ydk::YLeaf is_refresh_reduction_enabled; //type: boolean
        ydk::YLeaf is_pacing_enabled; //type: boolean
        ydk::YLeaf is_refresh_enabled; //type: boolean
        ydk::YLeaf is_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_interface_down; //type: boolean
        ydk::YLeaf is_interface_created; //type: boolean
        ydk::YLeaf is_rel_s_refresh_enabled; //type: boolean
        ydk::YLeaf is_backup_tunnel; //type: boolean
        ydk::YLeaf is_rsvp_configured; //type: boolean
        ydk::YLeaf is_non_default_vrf; //type: boolean
        ydk::YLeaf is_message_bundling_enabled; //type: boolean

}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray : public ydk::Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf message_ids; //type: uint32
        ydk::YLeaf outgoing_states; //type: int32
        class ExpiryTime; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;
        
}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime : public ydk::Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


class RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId : public ydk::Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_id; //type: uint32

}; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


class RsvpStandby::InterfaceNeighborBriefs : public ydk::Entity
{
    public:
        InterfaceNeighborBriefs();
        ~InterfaceNeighborBriefs();

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

        class InterfaceNeighborBrief; //type: RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;
        
}; // RsvpStandby::InterfaceNeighborBriefs


class RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief : public ydk::Entity
{
    public:
        InterfaceNeighborBrief();
        ~InterfaceNeighborBrief();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf node_address; //type: string
        class InterfaceNeighborListCompact; //type: RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;
        
}; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief


class RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact : public ydk::Entity
{
    public:
        InterfaceNeighborListCompact();
        ~InterfaceNeighborListCompact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_address; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string

}; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


class RsvpStandby::InterfaceNeighborDetails : public ydk::Entity
{
    public:
        InterfaceNeighborDetails();
        ~InterfaceNeighborDetails();

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

        class InterfaceNeighborDetail; //type: RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;
        
}; // RsvpStandby::InterfaceNeighborDetails


class RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail : public ydk::Entity
{
    public:
        InterfaceNeighborDetail();
        ~InterfaceNeighborDetail();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf node_address; //type: string
        class InterfaceNeighborListDetail; //type: RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;
        
}; // RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail


class RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail : public ydk::Entity
{
    public:
        InterfaceNeighborListDetail();
        ~InterfaceNeighborListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_address; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf is_rr_enabled; //type: boolean
        ydk::YLeaf neighbor_epoch; //type: uint32
        ydk::YLeaf out_of_order_messages; //type: uint32
        ydk::YLeaf retransmitted_messages; //type: uint32

}; // RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


class RsvpStandby::InterfaceSummaries : public ydk::Entity
{
    public:
        InterfaceSummaries();
        ~InterfaceSummaries();

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

        class InterfaceSummary; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary> > interface_summary;
        
}; // RsvpStandby::InterfaceSummaries


class RsvpStandby::InterfaceSummaries::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf paths_in; //type: uint32
        ydk::YLeaf paths_out; //type: uint32
        ydk::YLeaf reservations_in; //type: uint32
        ydk::YLeaf reservations_out; //type: uint32
        class BandwidthInformation; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::InterfaceSummaries::InterfaceSummary


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation : public ydk::Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_mode; //type: RsvpMgmtDsteModes
        class PreStandardDsteInterface; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_subpool_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_subpool_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface : public ydk::Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allocated_bit_rate; //type: uint64
        ydk::YLeaf max_flow_bandwidth; //type: uint64
        ydk::YLeaf max_bandwidth; //type: uint64
        ydk::YLeaf max_pool0_bandwidth; //type: uint64
        ydk::YLeaf max_pool1_bandwidth; //type: uint64
        ydk::YLeaf is_max_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        ydk::YLeaf is_max_bc1_bandwidth_absolute; //type: boolean

}; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


class RsvpStandby::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        class Status; //type: RsvpStandby::Nsr::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status> status;
        
}; // RsvpStandby::Nsr


class RsvpStandby::Nsr::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        ydk::YLeaf role; //type: RsvpProcRole
        class IdtStatus; //type: RsvpStandby::Nsr::Status::IdtStatus
        class PreviousIdtStatus; //type: RsvpStandby::Nsr::Status::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status::PreviousIdtStatus> previous_idt_status;
        
}; // RsvpStandby::Nsr::Status


class RsvpStandby::Nsr::Status::IdtStatus : public ydk::Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

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

        ydk::YLeaf sync_status; //type: RsvpSyncStatus
        ydk::YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // RsvpStandby::Nsr::Status::IdtStatus


class RsvpStandby::Nsr::Status::PreviousIdtStatus : public ydk::Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

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

        ydk::YLeaf sync_status; //type: RsvpSyncStatus
        ydk::YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReason
        ydk::YLeaf idt_start_time; //type: uint32
        ydk::YLeaf idt_end_time; //type: uint32
        ydk::YLeaf declare_time; //type: uint32
        ydk::YLeaf withdraw_time; //type: uint32

}; // RsvpStandby::Nsr::Status::PreviousIdtStatus


class RsvpStandby::OpenConfig : public ydk::Entity
{
    public:
        OpenConfig();
        ~OpenConfig();

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

        class GlobalCounters; //type: RsvpStandby::OpenConfig::GlobalCounters
        class InterfaceCounters; //type: RsvpStandby::OpenConfig::InterfaceCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::GlobalCounters> global_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters> interface_counters;
        
}; // RsvpStandby::OpenConfig


class RsvpStandby::OpenConfig::GlobalCounters : public ydk::Entity
{
    public:
        GlobalCounters();
        ~GlobalCounters();

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

        ydk::YLeaf path_timeouts; //type: uint64
        ydk::YLeaf reservation_timeouts; //type: uint64
        ydk::YLeaf rate_limited_messages; //type: uint64
        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // RsvpStandby::OpenConfig::GlobalCounters


class RsvpStandby::OpenConfig::InterfaceCounters : public ydk::Entity
{
    public:
        InterfaceCounters();
        ~InterfaceCounters();

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

        class InterfaceCounter; //type: RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter> > interface_counter;
        
}; // RsvpStandby::OpenConfig::InterfaceCounters


class RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter : public ydk::Entity
{
    public:
        InterfaceCounter();
        ~InterfaceCounter();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter


class RsvpStandby::PsbBriefs : public ydk::Entity
{
    public:
        PsbBriefs();
        ~PsbBriefs();

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

        class PsbBrief; //type: RsvpStandby::PsbBriefs::PsbBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief> > psb_brief;
        
}; // RsvpStandby::PsbBriefs


class RsvpStandby::PsbBriefs::PsbBrief : public ydk::Entity
{
    public:
        PsbBrief();
        ~PsbBrief();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf protocol; //type: int32
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf session_type; //type: RsvpSession
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: int32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf input_interface; //type: string
        class Session; //type: RsvpStandby::PsbBriefs::PsbBrief::Session
        class S2LSubLsp; //type: RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp
        class Template_; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_
        class SessionAttribute; //type: RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute
        class TrafficSpec; //type: RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec
        class GenericTrafficSpec; //type: RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute> session_attribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_> template_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec> traffic_spec;
        
}; // RsvpStandby::PsbBriefs::PsbBrief


class RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec : public ydk::Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

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

        ydk::YLeaf tspec_type; //type: RsvpMgmtTspec
        class G709OtnTspec; //type: RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec


class RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

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

        ydk::YLeaf traffic_signal_type; //type: uint8
        ydk::YLeaf traffic_nvc; //type: uint16
        ydk::YLeaf traffic_multiplier; //type: uint16
        ydk::YLeaf traffic_bit_rate; //type: uint64

}; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec


class RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

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

        ydk::YLeaf traffic_average_rate; //type: uint64
        ydk::YLeaf traffic_max_burst; //type: uint64
        ydk::YLeaf traffic_peak_rate; //type: uint64
        ydk::YLeaf traffic_min_unit; //type: uint32
        ydk::YLeaf traffic_max_unit; //type: uint32

}; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec


class RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp : public ydk::Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

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

        ydk::YLeaf s2l_destination_address; //type: string

}; // RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp


class RsvpStandby::PsbBriefs::PsbBrief::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class RsvpSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession> rsvp_session;
        
}; // RsvpStandby::PsbBriefs::PsbBrief::Session


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession : public ydk::Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

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

        ydk::YLeaf session_type; //type: RsvpMgmtSession
        class Ipv4; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf destination_port; //type: uint16

}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

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

        ydk::YLeaf p2mp_id; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_tunnel_id; //type: string

}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


class RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf extended_address; //type: string

}; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession


class RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute : public ydk::Entity
{
    public:
        SessionAttribute();
        ~SessionAttribute();

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

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf reservation_priority; //type: uint8
        class SessAttributeFlags; //type: RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags> sess_attribute_flags;
        
}; // RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute


class RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags : public ydk::Entity
{
    public:
        SessAttributeFlags();
        ~SessAttributeFlags();

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

        ydk::YLeaf is_local_protect; //type: boolean
        ydk::YLeaf is_node_protect; //type: boolean
        ydk::YLeaf is_bandwidth_protect; //type: boolean
        ydk::YLeaf is_record_labels; //type: boolean
        ydk::YLeaf is_shared_explicit_requested; //type: boolean

}; // RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags


class RsvpStandby::PsbBriefs::PsbBrief::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        class RsvpFilter; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter> rsvp_filter;
        
}; // RsvpStandby::PsbBriefs::PsbBrief::Template_


class RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter : public ydk::Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

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

        ydk::YLeaf filter_type; //type: RsvpMgmtFilter
        class UdpIpv4Session; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_3_ */

