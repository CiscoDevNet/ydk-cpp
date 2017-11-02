#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_34_
#define _CISCO_IOS_XR_MPLS_TE_OPER_34_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_33.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit : public ydk::Entity
{
    public:
        ReservationStatistics32Bit();
        ~ReservationStatistics32Bit();

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

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks : public ydk::Entity
{
    public:
        StatsticsLinks();
        ~StatsticsLinks();

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

        class StatsticsLink; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink> > statstics_link;
        
}; // MplsLcacStandby::Statistics::StatsticsLinks


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink : public ydk::Entity
{
    public:
        StatsticsLink();
        ~StatsticsLink();

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
        ydk::YLeaf link_address; //type: string
        class IncomingPathStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics
        class IncomingReservationStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics
        class OutgoingPathStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics
        class OutgoingReservationStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics
        class IncomingPathStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit
        class IncomingReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit
        class OutgoingPathStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit
        class OutgoingReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics> incoming_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics> incoming_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics> outgoing_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics> outgoing_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit> incoming_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit> incoming_reservation_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit> outgoing_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit> outgoing_reservation_statistics32_bit;
        
}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics : public ydk::Entity
{
    public:
        IncomingPathStatistics();
        ~IncomingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics : public ydk::Entity
{
    public:
        IncomingReservationStatistics();
        ~IncomingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics : public ydk::Entity
{
    public:
        OutgoingPathStatistics();
        ~OutgoingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics : public ydk::Entity
{
    public:
        OutgoingReservationStatistics();
        ~OutgoingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit : public ydk::Entity
{
    public:
        IncomingPathStatistics32Bit();
        ~IncomingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit : public ydk::Entity
{
    public:
        IncomingReservationStatistics32Bit();
        ~IncomingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit : public ydk::Entity
{
    public:
        OutgoingPathStatistics32Bit();
        ~OutgoingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit : public ydk::Entity
{
    public:
        OutgoingReservationStatistics32Bit();
        ~OutgoingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit


class MplsLcacStandby::BandwidthAllocation : public ydk::Entity
{
    public:
        BandwidthAllocation();
        ~BandwidthAllocation();

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

        class Global; //type: MplsLcacStandby::BandwidthAllocation::Global
        class BandwidthAllocationLinks; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks> bandwidth_allocation_links;
        
}; // MplsLcacStandby::BandwidthAllocation


class MplsLcacStandby::BandwidthAllocation::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf bandwidth_hold_time; //type: uint16

}; // MplsLcacStandby::BandwidthAllocation::Global


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks : public ydk::Entity
{
    public:
        BandwidthAllocationLinks();
        ~BandwidthAllocationLinks();

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

        class BandwidthAllocationLink; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink> > bandwidth_allocation_link;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink : public ydk::Entity
{
    public:
        BandwidthAllocationLink();
        ~BandwidthAllocationLink();

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
        ydk::YLeaf total_bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf flooding_up_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_up_thresholds_are_global; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_global; //type: boolean
        class LinkCommon; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon
        class UpstreamBandwidth; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth
        class DownstreamBandwidth; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth
        class FloodingUpThreshold; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold
        class FloodingDownThreshold; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon> link_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth> upstream_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth> downstream_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold> > flooding_up_threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold> > flooding_down_threshold;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon : public ydk::Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf is_unnumbered; //type: boolean
        ydk::YLeaf has_protection; //type: boolean
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf working_priority; //type: uint32
        ydk::YLeaf resource_provider; //type: ResourceProvider
        ydk::YLeaf is_resource_provider_installed; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint64
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf inbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf outbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf igp_neighbors; //type: uint16
        class LinkFlags; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas> > flooded_areas;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags : public ydk::Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_te_on; //type: boolean
        ydk::YLeaf signaling_agent; //type: SignalingAgentEnum
        ydk::YLeaf is_admin_up; //type: boolean

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint8
        ydk::YLeaf switching_capability; //type: uint8
        ydk::YLeaf encoding; //type: uint8

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas : public ydk::Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flooded_area; //type: string

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth : public ydk::Entity
{
    public:
        UpstreamBandwidth();
        ~UpstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth : public ydk::Entity
{
    public:
        DownstreamBandwidth();
        ~DownstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold : public ydk::Entity
{
    public:
        FloodingUpThreshold();
        ~FloodingUpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold : public ydk::Entity
{
    public:
        FloodingDownThreshold();
        ~FloodingDownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold


class MplsLcacStandby::Gmpls : public ydk::Entity
{
    public:
        Gmpls();
        ~Gmpls();

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

        class Nni; //type: MplsLcacStandby::Gmpls::Nni
        class Uni; //type: MplsLcacStandby::Gmpls::Uni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls::Nni> nni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls::Uni> uni;
        
}; // MplsLcacStandby::Gmpls


class MplsLcacStandby::Gmpls::Nni : public ydk::Entity
{
    public:
        Nni();
        ~Nni();

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


}; // MplsLcacStandby::Gmpls::Nni


class MplsLcacStandby::Gmpls::Uni : public ydk::Entity
{
    public:
        Uni();
        ~Uni();

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


}; // MplsLcacStandby::Gmpls::Uni


class MplsLcacStandby::BfdNeighbors : public ydk::Entity
{
    public:
        BfdNeighbors();
        ~BfdNeighbors();

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

        class BfdNeighbor; //type: MplsLcacStandby::BfdNeighbors::BfdNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors::BfdNeighbor> > bfd_neighbor;
        
}; // MplsLcacStandby::BfdNeighbors


class MplsLcacStandby::BfdNeighbors::BfdNeighbor : public ydk::Entity
{
    public:
        BfdNeighbor();
        ~BfdNeighbor();

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
        class Neighbor; //type: MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor> > neighbor;
        
}; // MplsLcacStandby::BfdNeighbors::BfdNeighbor


class MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_bfd_up; //type: boolean

}; // MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor


class MplsLcacStandby::BandwidthAccount : public ydk::Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

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

        class BandwidthAccountLinks; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks> bandwidth_account_links;
        
}; // MplsLcacStandby::BandwidthAccount


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks : public ydk::Entity
{
    public:
        BandwidthAccountLinks();
        ~BandwidthAccountLinks();

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

        class BandwidthAccountLink; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink> > bandwidth_account_link;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink : public ydk::Entity
{
    public:
        BandwidthAccountLink();
        ~BandwidthAccountLink();

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
        ydk::YLeaf link_id; //type: string
        class CommonInfo; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo
        class RsvpTeSampleHistory; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory
        class SrSampleHistory; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo> common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory> rsvp_te_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory> sr_sample_history;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf collection_type; //type: BandwidthAccountingCollection
        ydk::YLeaf sample_time_remaining_timestamp_nanosec; //type: uint64
        ydk::YLeaf last_sample_collection_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_sample_collection_nanosec; //type: uint64
        ydk::YLeaf application_time_remaining_nanosec; //type: uint64
        ydk::YLeaf last_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf effective_maximum_reservable_bandwidth; //type: uint64
        class RsvpTeBandwidthUtilization; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
{
    public:
        RsvpTeBandwidthUtilization();
        ~RsvpTeBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_link_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization : public ydk::Entity
{
    public:
        SrBandwidthUtilization();
        ~SrBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory : public ydk::Entity
{
    public:
        RsvpTeSampleHistory();
        ~RsvpTeSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTeActiveIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
{
    public:
        RsvpTeActiveIntervalSample();
        ~RsvpTeActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf total_packet_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf rsvp_te_packet_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
{
    public:
        RsvpTePreviousIntervalSample();
        ~RsvpTePreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf total_packet_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf rsvp_te_packet_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory : public ydk::Entity
{
    public:
        SrSampleHistory();
        ~SrSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrActiveIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample : public ydk::Entity
{
    public:
        SrActiveIntervalSample();
        ~SrActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf sr_rate; //type: uint64
        ydk::YLeaf sr_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample : public ydk::Entity
{
    public:
        SrPreviousIntervalSample();
        ~SrPreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_nanosec; //type: uint64
        ydk::YLeaf sr_rate; //type: uint64
        ydk::YLeaf sr_packet_rate; //type: uint64

}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample


class MplsLcacStandby::LinkSummary : public ydk::Entity
{
    public:
        LinkSummary();
        ~LinkSummary();

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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf maximum_links; //type: uint16
        ydk::YLeaf is_flooding_enabled; //type: boolean
        class BandwidthAccountSummary; //type: MplsLcacStandby::LinkSummary::BandwidthAccountSummary
        class AreasSummary; //type: MplsLcacStandby::LinkSummary::AreasSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary::BandwidthAccountSummary> bandwidth_account_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary::AreasSummary> > areas_summary;
        
}; // MplsLcacStandby::LinkSummary


class MplsLcacStandby::LinkSummary::BandwidthAccountSummary : public ydk::Entity
{
    public:
        BandwidthAccountSummary();
        ~BandwidthAccountSummary();

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

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_time_remaining; //type: uint32
        ydk::YLeaf application_interval; //type: uint32
        ydk::YLeaf application_time_remaining; //type: uint32

}; // MplsLcacStandby::LinkSummary::BandwidthAccountSummary


class MplsLcacStandby::LinkSummary::AreasSummary : public ydk::Entity
{
    public:
        AreasSummary();
        ~AreasSummary();

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

        ydk::YLeaf area_id; //type: string
        ydk::YLeaf protocol; //type: IgpProtocol
        ydk::YLeaf is_flooded; //type: boolean
        ydk::YLeaf is_periodic_flooding_on; //type: boolean
        ydk::YLeaf periodic_flooding_interval; //type: uint16
        ydk::YLeaf links_flooded; //type: uint16
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf local_node_router_id; //type: string
        ydk::YLeaf igp_neighbors; //type: uint16

}; // MplsLcacStandby::LinkSummary::AreasSummary


class MplsLcacStandby::LinkInformation : public ydk::Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

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

        class Global; //type: MplsLcacStandby::LinkInformation::Global
        class Links; //type: MplsLcacStandby::LinkInformation::Links

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links> links;
        
}; // MplsLcacStandby::LinkInformation


class MplsLcacStandby::LinkInformation::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf maximum_links; //type: uint16

}; // MplsLcacStandby::LinkInformation::Global


class MplsLcacStandby::LinkInformation::Links : public ydk::Entity
{
    public:
        Links();
        ~Links();

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

        class Link; //type: MplsLcacStandby::LinkInformation::Links::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link> > link;
        
}; // MplsLcacStandby::LinkInformation::Links


class MplsLcacStandby::LinkInformation::Links::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

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
        ydk::YLeaf reason_not_flooded; //type: string
        ydk::YLeaf maximum_reservation_bandwidth_rdm; //type: uint64
        ydk::YLeaf reservable_pool0_bandwidth_rdm; //type: uint64
        ydk::YLeaf reservable_pool1_bandwidth_rdm; //type: uint64
        ydk::YLeaf maximum_reservation_bandwidth_mam; //type: uint64
        ydk::YLeaf reservable_pool0_bandwidth_mam; //type: uint64
        ydk::YLeaf reservable_pool1_bandwidth_mam; //type: uint64
        ydk::YLeaf link_attributes; //type: uint32
        ydk::YLeaf is_attribute_incomplete; //type: boolean
        ydk::YLeaf is_name_based_attribute; //type: boolean
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf is_te_metric_valid; //type: boolean
        class LinkCommon; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon
        class BandwidthAccount; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount
        class HwOor; //type: MplsLcacStandby::LinkInformation::Links::Link::HwOor
        class LinkExtendedAttribute; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute
        class LinkForwadRefValue; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue
        class AffinityMap; //type: MplsLcacStandby::LinkInformation::Links::Link::AffinityMap
        class Areas; //type: MplsLcacStandby::LinkInformation::Links::Link::Areas
        class Lockout; //type: MplsLcacStandby::LinkInformation::Links::Link::Lockout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon> link_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::HwOor> hw_oor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute> > link_extended_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue> > link_forwad_ref_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::AffinityMap> > affinity_map;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::Areas> > areas;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::Lockout> > lockout;
        
}; // MplsLcacStandby::LinkInformation::Links::Link


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon : public ydk::Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf is_unnumbered; //type: boolean
        ydk::YLeaf has_protection; //type: boolean
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf working_priority; //type: uint32
        ydk::YLeaf resource_provider; //type: ResourceProvider
        ydk::YLeaf is_resource_provider_installed; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint64
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf inbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf outbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf igp_neighbors; //type: uint16
        class LinkFlags; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas> > flooded_areas;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags : public ydk::Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_te_on; //type: boolean
        ydk::YLeaf signaling_agent; //type: SignalingAgentEnum
        ydk::YLeaf is_admin_up; //type: boolean

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint8
        ydk::YLeaf switching_capability; //type: uint8
        ydk::YLeaf encoding; //type: uint8

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas : public ydk::Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flooded_area; //type: string

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount : public ydk::Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthAccountCommonInfo; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo
        class RsvpTeBandwidthSampleHistory; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory
        class SrBandwidthSampleHistory; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo> bandwidth_account_common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory> rsvp_te_bandwidth_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory> sr_bandwidth_sample_history;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo : public ydk::Entity
{
    public:
        BandwidthAccountCommonInfo();
        ~BandwidthAccountCommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf collection_type; //type: BandwidthAccountingCollection
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_time_remaining; //type: uint32
        ydk::YLeaf last_sample_collection_timestamp; //type: uint32
        ydk::YLeaf next_sample_collection; //type: uint32
        ydk::YLeaf application_interval; //type: uint32
        ydk::YLeaf application_time_remaining; //type: uint32
        ydk::YLeaf last_application_timestamp; //type: uint32
        ydk::YLeaf next_application; //type: uint32
        ydk::YLeaf adjustment_factor; //type: uint32
        ydk::YLeaf max_reservable_bandwidth_threshold_are_default; //type: boolean
        ydk::YLeaf up_threshold_max_reservable_bandwidth; //type: uint8
        ydk::YLeaf down_threshold_max_reservable_bandwidth; //type: uint8
        class RsvpTeBandwidthUtilization; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
{
    public:
        RsvpTeBandwidthUtilization();
        ~RsvpTeBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_link_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization : public ydk::Entity
{
    public:
        SrBandwidthUtilization();
        ~SrBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf sr_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory : public ydk::Entity
{
    public:
        RsvpTeBandwidthSampleHistory();
        ~RsvpTeBandwidthSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTeActiveIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
{
    public:
        RsvpTeActiveIntervalSample();
        ~RsvpTeActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
{
    public:
        RsvpTePreviousIntervalSample();
        ~RsvpTePreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf total_rate; //type: uint64
        ydk::YLeaf rsvp_te_rate; //type: uint64
        ydk::YLeaf non_rsvp_te_rate; //type: uint64

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory : public ydk::Entity
{
    public:
        SrBandwidthSampleHistory();
        ~SrBandwidthSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrActiveIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample : public ydk::Entity
{
    public:
        SrActiveIntervalSample();
        ~SrActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf sr_rate; //type: uint64

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample : public ydk::Entity
{
    public:
        SrPreviousIntervalSample();
        ~SrPreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: uint32
        ydk::YLeaf sr_rate; //type: uint64

}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::HwOor : public ydk::Entity
{
    public:
        HwOor();
        ~HwOor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf hw_oor_timestamp; //type: uint32
        ydk::YLeaf hw_o_or_green_recovery_time; //type: uint32
        class HwOOrLinkStatistic; //type: MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic> > hw_o_or_link_statistic;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::HwOor


class MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic : public ydk::Entity
{
    public:
        HwOOrLinkStatistic();
        ~HwOOrLinkStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hw_oor_state; //type: HwOorState
        ydk::YLeaf transitions; //type: uint32
        ydk::YLeaf node_protection_disable_number; //type: uint32
        ydk::YLeaf rejected_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_ls_ps_number; //type: uint32
        ydk::YLeaf accepted_reopt_ls_ps_number; //type: uint32
        ydk::YLeaf rejected_reopt_ls_ps_number; //type: uint32

}; // MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic


class MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute : public ydk::Entity
{
    public:
        LinkExtendedAttribute();
        ~LinkExtendedAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkExtendedAttribute


class MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue : public ydk::Entity
{
    public:
        LinkForwadRefValue();
        ~LinkForwadRefValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsLcacStandby::LinkInformation::Links::Link::LinkForwadRefValue


class MplsLcacStandby::LinkInformation::Links::Link::AffinityMap : public ydk::Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_name; //type: string
        ydk::YLeaf affinity_value; //type: uint32
        ydk::YLeaf affinity_bit_position; //type: uint8
        ydk::YLeaf affinity_table_id; //type: TeAffinityTable
        class AffinityExtendedValue; //type: MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue> > affinity_extended_value;
        
}; // MplsLcacStandby::LinkInformation::Links::Link::AffinityMap


class MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue : public ydk::Entity
{
    public:
        AffinityExtendedValue();
        ~AffinityExtendedValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue


class MplsLcacStandby::LinkInformation::Links::Link::Areas : public ydk::Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: string
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_neighbor_up; //type: boolean
        ydk::YLeaf igp_metric; //type: uint32

}; // MplsLcacStandby::LinkInformation::Links::Link::Areas


class MplsLcacStandby::LinkInformation::Links::Link::Lockout : public ydk::Entity
{
    public:
        Lockout();
        ~Lockout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_lockout; //type: boolean
        ydk::YLeaf lockout_on_timestamp; //type: uint32
        ydk::YLeaf lockout_off_timestamp; //type: uint32

}; // MplsLcacStandby::LinkInformation::Links::Link::Lockout


class MplsLcacStandby::AdmissionControl : public ydk::Entity
{
    public:
        AdmissionControl();
        ~AdmissionControl();

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

        class Global; //type: MplsLcacStandby::AdmissionControl::Global
        class AdmittedTunnels; //type: MplsLcacStandby::AdmissionControl::AdmittedTunnels
        class LinkInterfaces; //type: MplsLcacStandby::AdmissionControl::LinkInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::AdmittedTunnels> admitted_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::LinkInterfaces> link_interfaces;
        
}; // MplsLcacStandby::AdmissionControl


class MplsLcacStandby::AdmissionControl::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf total_p2mp_tunnels; //type: uint32
        ydk::YLeaf selected_tunnels; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum

}; // MplsLcacStandby::AdmissionControl::Global


class MplsLcacStandby::AdmissionControl::AdmittedTunnels : public ydk::Entity
{
    public:
        AdmittedTunnels();
        ~AdmittedTunnels();

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

        class AdmittedTunnel; //type: MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel> > admitted_tunnel;
        
}; // MplsLcacStandby::AdmissionControl::AdmittedTunnels


class MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel : public ydk::Entity
{
    public:
        AdmittedTunnel();
        ~AdmittedTunnel();

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
        ydk::YLeaf destination_port; //type: int32
        ydk::YLeaf source_port; //type: int32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf extended_tunnel_id; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf ctype; //type: Ctype
        ydk::YLeaf p2mp_id; //type: int32
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf bandwidth_state; //type: BandwidthStateEnum
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf up_link_name; //type: string
        ydk::YLeaf down_link_name; //type: string
        ydk::YLeaf tunnel_state; //type: TunnelStateEnum
        ydk::YLeaf bandwidth; //type: uint64
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf outgoing_label; //type: uint32
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf is_rerouted; //type: boolean

}; // MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel


class MplsLcacStandby::AdmissionControl::LinkInterfaces : public ydk::Entity
{
    public:
        LinkInterfaces();
        ~LinkInterfaces();

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

        class LinkInterface; //type: MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface> > link_interface;
        
}; // MplsLcacStandby::AdmissionControl::LinkInterfaces


class MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface : public ydk::Entity
{
    public:
        LinkInterface();
        ~LinkInterface();

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
        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf total_p2mp_tunnels; //type: uint32
        ydk::YLeaf selected_tunnels; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum

}; // MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface


class MplsLcacStandby::SoftPreemptionGlobalInfo : public ydk::Entity
{
    public:
        SoftPreemptionGlobalInfo();
        ~SoftPreemptionGlobalInfo();

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

        ydk::YLeaf is_configured; //type: boolean
        ydk::YLeaf is_timeout_interval_configured; //type: boolean
        ydk::YLeaf timeout_interval; //type: uint32

}; // MplsLcacStandby::SoftPreemptionGlobalInfo


class MplsLcacStandby::SoftPreemptions : public ydk::Entity
{
    public:
        SoftPreemptions();
        ~SoftPreemptions();

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

        class SoftPreemption; //type: MplsLcacStandby::SoftPreemptions::SoftPreemption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions::SoftPreemption> > soft_preemption;
        
}; // MplsLcacStandby::SoftPreemptions


class MplsLcacStandby::SoftPreemptions::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

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
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf total_soft_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf total_soft_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf current_soft_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf current_soft_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf release_soft_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf release_soft_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf current_over_subscribed_bandwidth_bc0; //type: uint64
        ydk::YLeaf current_over_subscribed_bandwidth_bc1; //type: uint64
        class CurrentSoftPreemptionLsp; //type: MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp> > current_soft_preemption_lsp;
        
}; // MplsLcacStandby::SoftPreemptions::SoftPreemption


class MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp : public ydk::Entity
{
    public:
        CurrentSoftPreemptionLsp();
        ~CurrentSoftPreemptionLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf bandwidth_type; //type: uint8
        ydk::YLeaf soft_preempted; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16
        ydk::YLeaf bandwidth_preempted; //type: boolean
        ydk::YLeaf soft_preempted_fr_rrewrite; //type: boolean

}; // MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

class MplsLcac : public ydk::Entity
{
    public:
        MplsLcac();
        ~MplsLcac();

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

        class Neighbors; //type: MplsLcac::Neighbors
        class PreemptionEvents; //type: MplsLcac::PreemptionEvents
        class Advertisements; //type: MplsLcac::Advertisements
        class Statistics; //type: MplsLcac::Statistics
        class BandwidthAllocation; //type: MplsLcac::BandwidthAllocation
        class Gmpls; //type: MplsLcac::Gmpls
        class BfdNeighbors; //type: MplsLcac::BfdNeighbors
        class BandwidthAccount; //type: MplsLcac::BandwidthAccount
        class LinkSummary; //type: MplsLcac::LinkSummary
        class LinkInformation; //type: MplsLcac::LinkInformation
        class AdmissionControl; //type: MplsLcac::AdmissionControl
        class SoftPreemptionGlobalInfo; //type: MplsLcac::SoftPreemptionGlobalInfo
        class SoftPreemptions; //type: MplsLcac::SoftPreemptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents> preemption_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements> advertisements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation> bandwidth_allocation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls> gmpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors> bfd_neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary> link_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation> link_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl> admission_control;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptionGlobalInfo> soft_preemption_global_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions> soft_preemptions;
        
}; // MplsLcac


class MplsLcac::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: MplsLcac::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors::Neighbor> > neighbor;
        
}; // MplsLcac::Neighbors


class MplsLcac::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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
        class Neighbor_; //type: MplsLcac::Neighbors::Neighbor::Neighbor_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors::Neighbor::Neighbor_> > neighbor;
        
}; // MplsLcac::Neighbors::Neighbor


class MplsLcac::Neighbors::Neighbor::Neighbor_ : public ydk::Entity
{
    public:
        Neighbor_();
        ~Neighbor_();

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
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf area_id; //type: string
        ydk::YLeaf neighbor_address; //type: string

}; // MplsLcac::Neighbors::Neighbor::Neighbor_


class MplsLcac::PreemptionEvents : public ydk::Entity
{
    public:
        PreemptionEvents();
        ~PreemptionEvents();

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

        class PreemptionEvent; //type: MplsLcac::PreemptionEvents::PreemptionEvent

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents::PreemptionEvent> > preemption_event;
        
}; // MplsLcac::PreemptionEvents


class MplsLcac::PreemptionEvents::PreemptionEvent : public ydk::Entity
{
    public:
        PreemptionEvent();
        ~PreemptionEvent();

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

        ydk::YLeaf event_index; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf bandwidth_type; //type: uint8
        ydk::YLeaf old_bandwidth_bc0; //type: uint64
        ydk::YLeaf old_bandwidth_bc1; //type: uint64
        ydk::YLeaf new_bandwidth_bc0; //type: uint64
        ydk::YLeaf new_bandwidth_bc1; //type: uint64
        ydk::YLeaf bandwidth_overshoot0; //type: uint64
        ydk::YLeaf bandwidth_overshoot1; //type: uint64
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf event_time; //type: uint32
        ydk::YLeaf ls_ps; //type: uint16
        ydk::YLeaf soft_preempted_ls_ps; //type: uint16
        ydk::YLeaf soft_preempted_ls_ps_fr_rrewrite; //type: uint16
        ydk::YLeaf hard_preempted_ls_ps; //type: uint16
        ydk::YLeaf total_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf total_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf softly_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf softly_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf soft_preempted_fr_rrewrite_bandwidth_bc0; //type: uint64
        ydk::YLeaf soft_preempted_fr_rrewrite_bandwidth_bc1; //type: uint64
        ydk::YLeaf hard_preempted_bandwidth_bc0; //type: uint64
        ydk::YLeaf hard_preempted_bandwidth_bc1; //type: uint64
        ydk::YLeaf tunnels; //type: uint16
        ydk::YLeaf soft_preempted_tunnels; //type: uint16
        ydk::YLeaf soft_preempted_tunnels_fr_rrewrite; //type: uint16
        ydk::YLeaf hard_preempted_tunnels; //type: uint16
        class Lsp; //type: MplsLcac::PreemptionEvents::PreemptionEvent::Lsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents::PreemptionEvent::Lsp> > lsp;
        
}; // MplsLcac::PreemptionEvents::PreemptionEvent


class MplsLcac::PreemptionEvents::PreemptionEvent::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf requested_bandwidth; //type: uint64
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf bandwidth_type; //type: uint8
        ydk::YLeaf soft_preempted; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16
        ydk::YLeaf bandwidth_preempted; //type: boolean
        ydk::YLeaf soft_preempted_fr_rrewrite; //type: boolean

}; // MplsLcac::PreemptionEvents::PreemptionEvent::Lsp


class MplsLcac::Advertisements : public ydk::Entity
{
    public:
        Advertisements();
        ~Advertisements();

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

        ydk::YLeaf flooding_status_message; //type: string
        ydk::YLeaf last_flooding_time; //type: uint32
        ydk::YLeaf last_flooding_trigger; //type: FloodingTrigger
        ydk::YLeaf next_flooding_time; //type: uint32
        ydk::YLeaf ds_te_mode; //type: RrrDsteMigrationMode
        class AdvertizedAreas; //type: MplsLcac::Advertisements::AdvertizedAreas

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas> > advertized_areas;
        
}; // MplsLcac::Advertisements


class MplsLcac::Advertisements::AdvertizedAreas : public ydk::Entity
{
    public:
        AdvertizedAreas();
        ~AdvertizedAreas();

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

        ydk::YLeaf igp_area_id; //type: string
        ydk::YLeaf protocol; //type: IgpProtocol
        ydk::YLeaf system_id; //type: string
        ydk::YLeaf router_id; //type: string
        class FloodedLink; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink> > flooded_link;
        
}; // MplsLcac::Advertisements::AdvertizedAreas


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink : public ydk::Entity
{
    public:
        FloodedLink();
        ~FloodedLink();

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

        ydk::YLeaf link_id; //type: uint16
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf subnet_type; //type: IgpSubnet
        ydk::YLeaf outgoing_interface_id; //type: uint32
        ydk::YLeaf is_designated_router; //type: boolean
        ydk::YLeaf designated_router_igp_id; //type: string
        ydk::YLeaf neighbor_igp_id; //type: string
        ydk::YLeaf igp_neighbor_address; //type: string
        ydk::YLeaf incoming_interface_id; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf uni_link_delay; //type: uint32
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint32
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf link_maximum_reservable_bandwidth; //type: uint32
        ydk::YLeaf reservable_pool0_bandwidth; //type: uint32
        ydk::YLeaf reservable_pool1_bandwidth; //type: uint32
        ydk::YLeaf is_receiving_reservable_bandwidth_enabled; //type: boolean
        ydk::YLeaf receiving_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_transmitting_reservable_bandwidth_enabled; //type: boolean
        ydk::YLeaf transmitting_direction; //type: LinkDirectionEnum
        ydk::YLeaf affinity_attribute_flags; //type: uint32
        class OduLinkCapabilities; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities
        class ExtendedAffinityAttributeFlag; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag
        class SharedRiskLinkGroup; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup
        class ReceivingReservableBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth
        class TransmittingReservableBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag> > extended_affinity_attribute_flag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth> > receiving_reservable_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth> > transmitting_reservable_bandwidth;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities : public ydk::Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

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

        class MaxLspBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth
        class OduCapability; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth> > max_lsp_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability> > odu_capability;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth : public ydk::Entity
{
    public:
        MaxLspBandwidth();
        ~MaxLspBandwidth();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability : public ydk::Entity
{
    public:
        OduCapability();
        ~OduCapability();

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

        ydk::YLeaf signal_type; //type: TeOduLevel
        ydk::YLeaf stage1; //type: TeOduLevel
        ydk::YLeaf stage2; //type: TeOduLevel
        ydk::YLeaf stage3; //type: TeOduLevel
        ydk::YLeaf stage4; //type: TeOduLevel
        ydk::YLeaf terminable; //type: boolean
        ydk::YLeaf switchable; //type: boolean
        ydk::YLeaf tsg1p25; //type: boolean
        ydk::YLeaf tsg2p5; //type: boolean
        ydk::YLeaf vcat_capable; //type: boolean
        ydk::YLeaf lcas_capable; //type: boolean
        class BandwidthInfo; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public ydk::Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

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

        ydk::YLeaf type; //type: TeOduCapability
        class Fixed; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;
        
}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public ydk::Entity
{
    public:
        Fixed();
        ~Fixed();

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

        ydk::YLeaf maximum_od_us; //type: uint8
        ydk::YLeaf unreserved_od_us; //type: uint8

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public ydk::Entity
{
    public:
        Flex();
        ~Flex();

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

        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf unreserved_bandwidth; //type: uint32
        ydk::YLeaf max_lsp_bandwidth; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag : public ydk::Entity
{
    public:
        ExtendedAffinityAttributeFlag();
        ~ExtendedAffinityAttributeFlag();

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

        ydk::YLeaf entry; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

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

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth : public ydk::Entity
{
    public:
        ReceivingReservableBandwidth();
        ~ReceivingReservableBandwidth();

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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf pool0_bandwidth; //type: uint32
        ydk::YLeaf pool1_bandwidth; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth : public ydk::Entity
{
    public:
        TransmittingReservableBandwidth();
        ~TransmittingReservableBandwidth();

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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf pool0_bandwidth; //type: uint32
        ydk::YLeaf pool1_bandwidth; //type: uint32

}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth


class MplsLcac::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Summary; //type: MplsLcac::Statistics::Summary
        class StatsticsLinks; //type: MplsLcac::Statistics::StatsticsLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks> statstics_links;
        
}; // MplsLcac::Statistics


class MplsLcac::Statistics::Summary : public ydk::Entity
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

        ydk::YLeaf is_role_standby; //type: boolean
        class PathStatistics; //type: MplsLcac::Statistics::Summary::PathStatistics
        class ReservationStatistics; //type: MplsLcac::Statistics::Summary::ReservationStatistics
        class PathStatistics32Bit; //type: MplsLcac::Statistics::Summary::PathStatistics32Bit
        class ReservationStatistics32Bit; //type: MplsLcac::Statistics::Summary::ReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::PathStatistics> path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::ReservationStatistics> reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::PathStatistics32Bit> path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::ReservationStatistics32Bit> reservation_statistics32_bit;
        
}; // MplsLcac::Statistics::Summary


class MplsLcac::Statistics::Summary::PathStatistics : public ydk::Entity
{
    public:
        PathStatistics();
        ~PathStatistics();

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

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::Summary::PathStatistics


class MplsLcac::Statistics::Summary::ReservationStatistics : public ydk::Entity
{
    public:
        ReservationStatistics();
        ~ReservationStatistics();

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

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::Summary::ReservationStatistics


class MplsLcac::Statistics::Summary::PathStatistics32Bit : public ydk::Entity
{
    public:
        PathStatistics32Bit();
        ~PathStatistics32Bit();

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

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::Summary::PathStatistics32Bit


class MplsLcac::Statistics::Summary::ReservationStatistics32Bit : public ydk::Entity
{
    public:
        ReservationStatistics32Bit();
        ~ReservationStatistics32Bit();

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

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::Summary::ReservationStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks : public ydk::Entity
{
    public:
        StatsticsLinks();
        ~StatsticsLinks();

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

        class StatsticsLink; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink> > statstics_link;
        
}; // MplsLcac::Statistics::StatsticsLinks


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink : public ydk::Entity
{
    public:
        StatsticsLink();
        ~StatsticsLink();

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
        ydk::YLeaf link_address; //type: string
        class IncomingPathStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics
        class IncomingReservationStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics
        class OutgoingPathStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics
        class OutgoingReservationStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics
        class IncomingPathStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit
        class IncomingReservationStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit
        class OutgoingPathStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit
        class OutgoingReservationStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics> incoming_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics> incoming_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics> outgoing_path_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics> outgoing_reservation_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit> incoming_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit> incoming_reservation_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit> outgoing_path_statistics32_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit> outgoing_reservation_statistics32_bit;
        
}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics : public ydk::Entity
{
    public:
        IncomingPathStatistics();
        ~IncomingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics : public ydk::Entity
{
    public:
        IncomingReservationStatistics();
        ~IncomingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics : public ydk::Entity
{
    public:
        OutgoingPathStatistics();
        ~OutgoingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics : public ydk::Entity
{
    public:
        OutgoingReservationStatistics();
        ~OutgoingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint16
        ydk::YLeaf setup_errors; //type: uint16
        ydk::YLeaf setup_admits; //type: uint16
        ydk::YLeaf setup_rejects; //type: uint16
        ydk::YLeaf tear_requests; //type: uint16
        ydk::YLeaf tear_errors; //type: uint16
        ydk::YLeaf tear_preempts; //type: uint16

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit : public ydk::Entity
{
    public:
        IncomingPathStatistics32Bit();
        ~IncomingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit : public ydk::Entity
{
    public:
        IncomingReservationStatistics32Bit();
        ~IncomingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit : public ydk::Entity
{
    public:
        OutgoingPathStatistics32Bit();
        ~OutgoingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit : public ydk::Entity
{
    public:
        OutgoingReservationStatistics32Bit();
        ~OutgoingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_requests; //type: uint32
        ydk::YLeaf setup_errors; //type: uint32
        ydk::YLeaf setup_admits; //type: uint32
        ydk::YLeaf setup_rejects; //type: uint32
        ydk::YLeaf tear_requests; //type: uint32
        ydk::YLeaf tear_errors; //type: uint32
        ydk::YLeaf tear_preempts; //type: uint32

}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit


class MplsLcac::BandwidthAllocation : public ydk::Entity
{
    public:
        BandwidthAllocation();
        ~BandwidthAllocation();

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

        class Global; //type: MplsLcac::BandwidthAllocation::Global
        class BandwidthAllocationLinks; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks> bandwidth_allocation_links;
        
}; // MplsLcac::BandwidthAllocation


class MplsLcac::BandwidthAllocation::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf is_role_standby; //type: boolean
        ydk::YLeaf links; //type: uint16
        ydk::YLeaf bandwidth_hold_time; //type: uint16

}; // MplsLcac::BandwidthAllocation::Global


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks : public ydk::Entity
{
    public:
        BandwidthAllocationLinks();
        ~BandwidthAllocationLinks();

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

        class BandwidthAllocationLink; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink> > bandwidth_allocation_link;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink : public ydk::Entity
{
    public:
        BandwidthAllocationLink();
        ~BandwidthAllocationLink();

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
        ydk::YLeaf total_bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_descriptors; //type: uint16
        ydk::YLeaf bandwidth_pool; //type: BandwidthTypeEnum
        ydk::YLeaf flooding_up_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_default; //type: boolean
        ydk::YLeaf flooding_up_thresholds_are_global; //type: boolean
        ydk::YLeaf flooding_down_thresholds_are_global; //type: boolean
        class LinkCommon; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon
        class UpstreamBandwidth; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth
        class DownstreamBandwidth; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth
        class FloodingUpThreshold; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold
        class FloodingDownThreshold; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon> link_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth> upstream_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth> downstream_bandwidth;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold> > flooding_up_threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold> > flooding_down_threshold;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon : public ydk::Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf is_unnumbered; //type: boolean
        ydk::YLeaf has_protection; //type: boolean
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf working_priority; //type: uint32
        ydk::YLeaf resource_provider; //type: ResourceProvider
        ydk::YLeaf is_resource_provider_installed; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        ydk::YLeaf physical_bandwidth; //type: uint64
        ydk::YLeaf bcm_id; //type: uint16
        ydk::YLeaf maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        ydk::YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        ydk::YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        ydk::YLeaf inbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf outbound_admission_method; //type: AdmissionPolicy
        ydk::YLeaf igp_neighbors; //type: uint16
        class LinkFlags; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas> > flooded_areas;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags : public ydk::Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_mpls_te_on; //type: boolean
        ydk::YLeaf signaling_agent; //type: SignalingAgentEnum
        ydk::YLeaf is_admin_up; //type: boolean

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf shared_risk_group; //type: uint32
        ydk::YLeaf srlg_name; //type: string

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint8
        ydk::YLeaf switching_capability; //type: uint8
        ydk::YLeaf encoding; //type: uint8

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas : public ydk::Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flooded_area; //type: string

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth : public ydk::Entity
{
    public:
        UpstreamBandwidth();
        ~UpstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth : public ydk::Entity
{
    public:
        DownstreamBandwidth();
        ~DownstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_direction; //type: LinkDirectionEnum
        ydk::YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        ydk::YLeaf bandwidth_units; //type: BandwidthUnitEnum
        class BandwidthPool0; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1> > bandwidth_pool1;
        
}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0 : public ydk::Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1 : public ydk::Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf held_amount; //type: uint32
        ydk::YLeaf total_held_amount; //type: uint32
        ydk::YLeaf locked_amount; //type: uint32
        ydk::YLeaf total_locked_amount; //type: uint32

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold : public ydk::Entity
{
    public:
        FloodingUpThreshold();
        ~FloodingUpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold : public ydk::Entity
{
    public:
        FloodingDownThreshold();
        ~FloodingDownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold


class MplsLcac::Gmpls : public ydk::Entity
{
    public:
        Gmpls();
        ~Gmpls();

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

        class Nni; //type: MplsLcac::Gmpls::Nni
        class Uni; //type: MplsLcac::Gmpls::Uni

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls::Nni> nni;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls::Uni> uni;
        
}; // MplsLcac::Gmpls


class MplsLcac::Gmpls::Nni : public ydk::Entity
{
    public:
        Nni();
        ~Nni();

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


}; // MplsLcac::Gmpls::Nni


class MplsLcac::Gmpls::Uni : public ydk::Entity
{
    public:
        Uni();
        ~Uni();

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


}; // MplsLcac::Gmpls::Uni


class MplsLcac::BfdNeighbors : public ydk::Entity
{
    public:
        BfdNeighbors();
        ~BfdNeighbors();

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

        class BfdNeighbor; //type: MplsLcac::BfdNeighbors::BfdNeighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors::BfdNeighbor> > bfd_neighbor;
        
}; // MplsLcac::BfdNeighbors


class MplsLcac::BfdNeighbors::BfdNeighbor : public ydk::Entity
{
    public:
        BfdNeighbor();
        ~BfdNeighbor();

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
        class Neighbor; //type: MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor> > neighbor;
        
}; // MplsLcac::BfdNeighbors::BfdNeighbor


class MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf is_bfd_up; //type: boolean

}; // MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor


class MplsLcac::BandwidthAccount : public ydk::Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

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

        class BandwidthAccountLinks; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks> bandwidth_account_links;
        
}; // MplsLcac::BandwidthAccount


class MplsLcac::BandwidthAccount::BandwidthAccountLinks : public ydk::Entity
{
    public:
        BandwidthAccountLinks();
        ~BandwidthAccountLinks();

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

        class BandwidthAccountLink; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink> > bandwidth_account_link;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink : public ydk::Entity
{
    public:
        BandwidthAccountLink();
        ~BandwidthAccountLink();

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
        ydk::YLeaf link_id; //type: string
        class CommonInfo; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo
        class RsvpTeSampleHistory; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory
        class SrSampleHistory; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo> common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory> rsvp_te_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory> sr_sample_history;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo : public ydk::Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_bandwidth_account_enabled; //type: boolean
        ydk::YLeaf application_enforced; //type: boolean
        ydk::YLeaf collection_type; //type: BandwidthAccountingCollection
        ydk::YLeaf sample_time_remaining_timestamp_nanosec; //type: uint64
        ydk::YLeaf last_sample_collection_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_sample_collection_nanosec; //type: uint64
        ydk::YLeaf application_time_remaining_nanosec; //type: uint64
        ydk::YLeaf last_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf next_application_timestamp_nanosec; //type: uint64
        ydk::YLeaf effective_maximum_reservable_bandwidth; //type: uint64
        class RsvpTeBandwidthUtilization; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
{
    public:
        RsvpTeBandwidthUtilization();
        ~RsvpTeBandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_link_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_adjusted_bandwidth_utilization; //type: uint64
        ydk::YLeaf rsvp_te_enforced_bandwidth_utilization; //type: uint64

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_34_ */

