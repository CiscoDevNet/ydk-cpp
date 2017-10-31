#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_35_
#define _CISCO_IOS_XR_MPLS_TE_OPER_35_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization : public ydk::Entity
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

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory : public ydk::Entity
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

        class RsvpTeActiveIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
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

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
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

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory : public ydk::Entity
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

        class SrActiveIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample : public ydk::Entity
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

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample : public ydk::Entity
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

}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample


class MplsLcac::LinkSummary : public ydk::Entity
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
        class BandwidthAccountSummary; //type: MplsLcac::LinkSummary::BandwidthAccountSummary
        class AreasSummary; //type: MplsLcac::LinkSummary::AreasSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary::BandwidthAccountSummary> bandwidth_account_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary::AreasSummary> > areas_summary;
        
}; // MplsLcac::LinkSummary


class MplsLcac::LinkSummary::BandwidthAccountSummary : public ydk::Entity
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

}; // MplsLcac::LinkSummary::BandwidthAccountSummary


class MplsLcac::LinkSummary::AreasSummary : public ydk::Entity
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

}; // MplsLcac::LinkSummary::AreasSummary


class MplsLcac::LinkInformation : public ydk::Entity
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

        class Global; //type: MplsLcac::LinkInformation::Global
        class Links; //type: MplsLcac::LinkInformation::Links

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links> links;
        
}; // MplsLcac::LinkInformation


class MplsLcac::LinkInformation::Global : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Global


class MplsLcac::LinkInformation::Links : public ydk::Entity
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

        class Link; //type: MplsLcac::LinkInformation::Links::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link> > link;
        
}; // MplsLcac::LinkInformation::Links


class MplsLcac::LinkInformation::Links::Link : public ydk::Entity
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
        class LinkCommon; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon
        class BandwidthAccount; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount
        class HwOor; //type: MplsLcac::LinkInformation::Links::Link::HwOor
        class LinkExtendedAttribute; //type: MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute
        class LinkForwadRefValue; //type: MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue
        class AffinityMap; //type: MplsLcac::LinkInformation::Links::Link::AffinityMap
        class Areas; //type: MplsLcac::LinkInformation::Links::Link::Areas
        class Lockout; //type: MplsLcac::LinkInformation::Links::Link::Lockout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon> link_common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount> bandwidth_account;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::HwOor> hw_oor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute> > link_extended_attribute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue> > link_forwad_ref_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::AffinityMap> > affinity_map;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::Areas> > areas;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::Lockout> > lockout;
        
}; // MplsLcac::LinkInformation::Links::Link


class MplsLcac::LinkInformation::Links::Link::LinkCommon : public ydk::Entity
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
        class LinkFlags; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas> > flooded_areas;
        
}; // MplsLcac::LinkInformation::Links::Link::LinkCommon


class MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags


class MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup


class MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount : public ydk::Entity
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

        class BandwidthAccountCommonInfo; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo
        class RsvpTeBandwidthSampleHistory; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory
        class SrBandwidthSampleHistory; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo> bandwidth_account_common_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory> rsvp_te_bandwidth_sample_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory> sr_bandwidth_sample_history;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo : public ydk::Entity
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
        class RsvpTeBandwidthUtilization; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization
        class SrBandwidthUtilization; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization> rsvp_te_bandwidth_utilization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization> sr_bandwidth_utilization;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory : public ydk::Entity
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

        class RsvpTeActiveIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample
        class RsvpTePreviousIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample> > rsvp_te_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample> > rsvp_te_previous_interval_sample;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory : public ydk::Entity
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

        class SrActiveIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample
        class SrPreviousIntervalSample; //type: MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample> > sr_active_interval_sample;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample> > sr_previous_interval_sample;
        
}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample


class MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample


class MplsLcac::LinkInformation::Links::Link::HwOor : public ydk::Entity
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
        class HwOOrLinkStatistic; //type: MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic> > hw_o_or_link_statistic;
        
}; // MplsLcac::LinkInformation::Links::Link::HwOor


class MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic


class MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute


class MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue


class MplsLcac::LinkInformation::Links::Link::AffinityMap : public ydk::Entity
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
        class AffinityExtendedValue; //type: MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue> > affinity_extended_value;
        
}; // MplsLcac::LinkInformation::Links::Link::AffinityMap


class MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue


class MplsLcac::LinkInformation::Links::Link::Areas : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::Areas


class MplsLcac::LinkInformation::Links::Link::Lockout : public ydk::Entity
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

}; // MplsLcac::LinkInformation::Links::Link::Lockout


class MplsLcac::AdmissionControl : public ydk::Entity
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

        class Global; //type: MplsLcac::AdmissionControl::Global
        class AdmittedTunnels; //type: MplsLcac::AdmissionControl::AdmittedTunnels
        class LinkInterfaces; //type: MplsLcac::AdmissionControl::LinkInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::AdmittedTunnels> admitted_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::LinkInterfaces> link_interfaces;
        
}; // MplsLcac::AdmissionControl


class MplsLcac::AdmissionControl::Global : public ydk::Entity
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

}; // MplsLcac::AdmissionControl::Global


class MplsLcac::AdmissionControl::AdmittedTunnels : public ydk::Entity
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

        class AdmittedTunnel; //type: MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel> > admitted_tunnel;
        
}; // MplsLcac::AdmissionControl::AdmittedTunnels


class MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel : public ydk::Entity
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

}; // MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel


class MplsLcac::AdmissionControl::LinkInterfaces : public ydk::Entity
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

        class LinkInterface; //type: MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface> > link_interface;
        
}; // MplsLcac::AdmissionControl::LinkInterfaces


class MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface : public ydk::Entity
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

}; // MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface


class MplsLcac::SoftPreemptionGlobalInfo : public ydk::Entity
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

}; // MplsLcac::SoftPreemptionGlobalInfo


class MplsLcac::SoftPreemptions : public ydk::Entity
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

        class SoftPreemption; //type: MplsLcac::SoftPreemptions::SoftPreemption

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions::SoftPreemption> > soft_preemption;
        
}; // MplsLcac::SoftPreemptions


class MplsLcac::SoftPreemptions::SoftPreemption : public ydk::Entity
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
        class CurrentSoftPreemptionLsp; //type: MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp> > current_soft_preemption_lsp;
        
}; // MplsLcac::SoftPreemptions::SoftPreemption


class MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp : public ydk::Entity
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

}; // MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

class MplsPce : public ydk::Entity
{
    public:
        MplsPce();
        ~MplsPce();

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

        class Lsps; //type: MplsPce::Lsps
        class Statistics; //type: MplsPce::Statistics
        class Peers; //type: MplsPce::Peers
        class Topology; //type: MplsPce::Topology
        class Tunnels; //type: MplsPce::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps> lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Tunnels> tunnels;
        
}; // MplsPce


class MplsPce::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

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
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Lsp; //type: MplsPce::Lsps::Lsp
        class Creator; //type: MplsPce::Lsps::Creator
        class Delegated; //type: MplsPce::Lsps::Delegated
        class Identifiers; //type: MplsPce::Lsps::Identifiers
        class Autoroute; //type: MplsPce::Lsps::Autoroute
        class Paths; //type: MplsPce::Lsps::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp> > lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Identifiers> identifiers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Autoroute> autoroute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths> > paths;
        
}; // MplsPce::Lsps


class MplsPce::Lsps::Lsp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Creator; //type: MplsPce::Lsps::Lsp::Creator
        class Delegated; //type: MplsPce::Lsps::Lsp::Delegated
        class Identifiers; //type: MplsPce::Lsps::Lsp::Identifiers
        class Autoroute; //type: MplsPce::Lsps::Lsp::Autoroute
        class Paths; //type: MplsPce::Lsps::Lsp::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Identifiers> identifiers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Autoroute> autoroute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths> > paths;
        
}; // MplsPce::Lsps::Lsp


class MplsPce::Lsps::Lsp::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Lsp::Creator


class MplsPce::Lsps::Lsp::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Lsp::Delegated


class MplsPce::Lsps::Lsp::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPce::Lsps::Lsp::Identifiers


class MplsPce::Lsps::Lsp::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPce::Lsps::Lsp::Autoroute


class MplsPce::Lsps::Lsp::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPce::Lsps::Lsp::Paths::Ero
        class Lspa; //type: MplsPce::Lsps::Lsp::Paths::Lspa
        class Rro; //type: MplsPce::Lsps::Lsp::Paths::Rro
        class Metric; //type: MplsPce::Lsps::Lsp::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Lspa> lspa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Rro> rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Metric> > metric;
        
}; // MplsPce::Lsps::Lsp::Paths


class MplsPce::Lsps::Lsp::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Lsp::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Ero::Subobject> > subobject;
        
}; // MplsPce::Lsps::Lsp::Paths::Ero


class MplsPce::Lsps::Lsp::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Lsp::Paths::Ero::Subobject


class MplsPce::Lsps::Lsp::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPce::Lsps::Lsp::Paths::Lspa


class MplsPce::Lsps::Lsp::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Lsp::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Lsp::Paths::Rro::Subobject> > subobject;
        
}; // MplsPce::Lsps::Lsp::Paths::Rro


class MplsPce::Lsps::Lsp::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Lsp::Paths::Rro::Subobject


class MplsPce::Lsps::Lsp::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPce::Lsps::Lsp::Paths::Metric


class MplsPce::Lsps::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

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

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Creator


class MplsPce::Lsps::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

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

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPce::Lsps::Delegated


class MplsPce::Lsps::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPce::Lsps::Identifiers


class MplsPce::Lsps::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPce::Lsps::Autoroute


class MplsPce::Lsps::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPce::Lsps::Paths::Ero
        class Lspa; //type: MplsPce::Lsps::Paths::Lspa
        class Rro; //type: MplsPce::Lsps::Paths::Rro
        class Metric; //type: MplsPce::Lsps::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Lspa> lspa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Rro> rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Metric> > metric;
        
}; // MplsPce::Lsps::Paths


class MplsPce::Lsps::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Ero::Subobject> > subobject;
        
}; // MplsPce::Lsps::Paths::Ero


class MplsPce::Lsps::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

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

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Paths::Ero::Subobject


class MplsPce::Lsps::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPce::Lsps::Paths::Lspa


class MplsPce::Lsps::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPce::Lsps::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Lsps::Paths::Rro::Subobject> > subobject;
        
}; // MplsPce::Lsps::Paths::Rro


class MplsPce::Lsps::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

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

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPce::Lsps::Paths::Rro::Subobject


class MplsPce::Lsps::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPce::Lsps::Paths::Metric


class MplsPce::Statistics : public ydk::Entity
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

        ydk::YLeaf neighbors; //type: uint32
        ydk::YLeaf tunnels; //type: uint32
        ydk::YLeaf pce_req_total; //type: uint32
        ydk::YLeaf pce_req_pending; //type: uint32
        ydk::YLeaf pce_req_timed_out; //type: uint32
        ydk::YLeaf max_file_descriptors; //type: uint32
        ydk::YLeaf current_file_descriptors; //type: uint32
        ydk::YLeaf current_pceq_length; //type: uint32
        ydk::YLeaf current_teq_length; //type: uint32
        ydk::YLeaf max_pceq_length; //type: uint32
        ydk::YLeaf max_teq_length; //type: uint32
        ydk::YLeafList maximum_in_queue_depth; //type: list of  uint32
        ydk::YLeafList average_in_queue_depth; //type: list of  uint32
        class IgpStatistics; //type: MplsPce::Statistics::IgpStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Statistics::IgpStatistics> igp_statistics;
        
}; // MplsPce::Statistics


class MplsPce::Statistics::IgpStatistics : public ydk::Entity
{
    public:
        IgpStatistics();
        ~IgpStatistics();

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

        ydk::YLeaf abr_lookup_min; //type: uint64
        ydk::YLeaf abr_lookup_max; //type: uint64
        ydk::YLeaf abr_lookup_avg; //type: uint64
        ydk::YLeaf abr_lookup_timeout; //type: uint64
        ydk::YLeaf abr_lookup_complete; //type: uint64

}; // MplsPce::Statistics::IgpStatistics


class MplsPce::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: MplsPce::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer> > peer;
        
}; // MplsPce::Peers


class MplsPce::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf error; //type: string
        ydk::YLeaf pce_state; //type: PceState
        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf triggered_sync_capability; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf delta_sync_capability; //type: boolean
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf candidate; //type: boolean
        ydk::YLeaf statically_configured; //type: boolean
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_keepalive; //type: uint32
        ydk::YLeaf negotated_dead_time; //type: uint32
        ydk::YLeaf pce_req_rx; //type: uint32
        ydk::YLeaf pce_req_tx; //type: uint32
        ydk::YLeaf pce_rep_rx; //type: uint32
        ydk::YLeaf pce_rep_tx; //type: uint32
        ydk::YLeaf pce_err_rx; //type: uint32
        ydk::YLeaf pce_err_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_rpt_rx; //type: uint32
        ydk::YLeaf pce_rpt_tx; //type: uint32
        ydk::YLeaf pce_upd_rx; //type: uint32
        ydk::YLeaf pce_upd_tx; //type: uint32
        ydk::YLeaf pce_init_rx; //type: uint32
        ydk::YLeaf pce_init_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf req_reply_min; //type: uint64
        ydk::YLeaf req_reply_max; //type: uint64
        ydk::YLeaf req_reply_avg; //type: uint64
        ydk::YLeaf request_timeouts; //type: uint64
        ydk::YLeaf local_sid; //type: uint8
        ydk::YLeaf remote_sid; //type: uint8
        ydk::YLeaf min_keepalive_interval; //type: uint8
        ydk::YLeaf max_dead_interval; //type: uint8
        class LastTxPceErr; //type: MplsPce::Peers::Peer::LastTxPceErr
        class LastRxPceErr; //type: MplsPce::Peers::Peer::LastRxPceErr
        class IgPs; //type: MplsPce::Peers::Peer::IgPs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::LastTxPceErr> last_tx_pce_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::LastRxPceErr> last_rx_pce_err;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Peers::Peer::IgPs> > ig_ps;
        
}; // MplsPce::Peers::Peer


class MplsPce::Peers::Peer::LastTxPceErr : public ydk::Entity
{
    public:
        LastTxPceErr();
        ~LastTxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPce::Peers::Peer::LastTxPceErr


class MplsPce::Peers::Peer::LastRxPceErr : public ydk::Entity
{
    public:
        LastRxPceErr();
        ~LastRxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPce::Peers::Peer::LastRxPceErr


class MplsPce::Peers::Peer::IgPs : public ydk::Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_id; //type: string

}; // MplsPce::Peers::Peer::IgPs


class MplsPce::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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

        class Global; //type: MplsPce::Topology::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology::Global> global;
        
}; // MplsPce::Topology


class MplsPce::Topology::Global : public ydk::Entity
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

        class Nodes; //type: MplsPce::Topology::Global::Nodes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Topology::Global::Nodes> > nodes;
        
}; // MplsPce::Topology::Global


class MplsPce::Topology::Global::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf igp_area_id; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf pce_cost; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf is_pce_border_node; //type: boolean

}; // MplsPce::Topology::Global::Nodes


class MplsPce::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32
        class Tunnel; //type: MplsPce::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPce::Tunnels::Tunnel> > tunnel;
        
}; // MplsPce::Tunnels


class MplsPce::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32

}; // MplsPce::Tunnels::Tunnel

class MplsPceStdby : public ydk::Entity
{
    public:
        MplsPceStdby();
        ~MplsPceStdby();

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

        class Lsps; //type: MplsPceStdby::Lsps
        class Statistics; //type: MplsPceStdby::Statistics
        class Peers; //type: MplsPceStdby::Peers
        class Topology; //type: MplsPceStdby::Topology
        class Tunnels; //type: MplsPceStdby::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps> lsps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology> topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Tunnels> tunnels;
        
}; // MplsPceStdby


class MplsPceStdby::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

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
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Lsp; //type: MplsPceStdby::Lsps::Lsp
        class Creator; //type: MplsPceStdby::Lsps::Creator
        class Delegated; //type: MplsPceStdby::Lsps::Delegated
        class Identifiers; //type: MplsPceStdby::Lsps::Identifiers
        class Autoroute; //type: MplsPceStdby::Lsps::Autoroute
        class Paths; //type: MplsPceStdby::Lsps::Paths

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp> > lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Identifiers> identifiers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Autoroute> autoroute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths> > paths;
        
}; // MplsPceStdby::Lsps


class MplsPceStdby::Lsps::Lsp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf symbolic_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf symbolic_name_xr; //type: string
        ydk::YLeaf session_internal_lsp_id; //type: uint32
        ydk::YLeaf stateful_request_parameter_id; //type: uint32
        ydk::YLeaf request_queue_size; //type: uint8
        ydk::YLeaf delegatable; //type: boolean
        ydk::YLeaf operational; //type: PceLspOperState
        ydk::YLeaf administrative; //type: boolean
        ydk::YLeaf cleanup_timer_exp; //type: int32
        ydk::YLeaf delegation_timer_exp; //type: int32
        ydk::YLeaf create; //type: boolean
        ydk::YLeaf state_timer_exp; //type: int32
        ydk::YLeaf lspo_is_used; //type: boolean
        ydk::YLeaf forward_class_id; //type: uint32
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf path_setup_type; //type: uint8
        ydk::YLeaf binding_sid; //type: uint32
        ydk::YLeafList backup_path; //type: list of  string
        class Creator; //type: MplsPceStdby::Lsps::Lsp::Creator
        class Delegated; //type: MplsPceStdby::Lsps::Lsp::Delegated
        class Identifiers; //type: MplsPceStdby::Lsps::Lsp::Identifiers
        class Autoroute; //type: MplsPceStdby::Lsps::Lsp::Autoroute
        class Paths; //type: MplsPceStdby::Lsps::Lsp::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Creator> creator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Delegated> delegated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Identifiers> identifiers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Autoroute> autoroute;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths> > paths;
        
}; // MplsPceStdby::Lsps::Lsp


class MplsPceStdby::Lsps::Lsp::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Creator


class MplsPceStdby::Lsps::Lsp::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Delegated


class MplsPceStdby::Lsps::Lsp::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPceStdby::Lsps::Lsp::Identifiers


class MplsPceStdby::Lsps::Lsp::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPceStdby::Lsps::Lsp::Autoroute


class MplsPceStdby::Lsps::Lsp::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPceStdby::Lsps::Lsp::Paths::Ero
        class Lspa; //type: MplsPceStdby::Lsps::Lsp::Paths::Lspa
        class Rro; //type: MplsPceStdby::Lsps::Lsp::Paths::Rro
        class Metric; //type: MplsPceStdby::Lsps::Lsp::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Lspa> lspa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Rro> rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Metric> > metric;
        
}; // MplsPceStdby::Lsps::Lsp::Paths


class MplsPceStdby::Lsps::Lsp::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Lsp::Paths::Ero


class MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Paths::Ero::Subobject


class MplsPceStdby::Lsps::Lsp::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPceStdby::Lsps::Lsp::Paths::Lspa


class MplsPceStdby::Lsps::Lsp::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Lsp::Paths::Rro


class MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Lsp::Paths::Rro::Subobject


class MplsPceStdby::Lsps::Lsp::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPceStdby::Lsps::Lsp::Paths::Metric


class MplsPceStdby::Lsps::Creator : public ydk::Entity
{
    public:
        Creator();
        ~Creator();

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

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Creator


class MplsPceStdby::Lsps::Delegated : public ydk::Entity
{
    public:
        Delegated();
        ~Delegated();

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

        ydk::YLeaf node_identifier; //type: string
        ydk::YLeaf address; //type: string

}; // MplsPceStdby::Lsps::Delegated


class MplsPceStdby::Lsps::Identifiers : public ydk::Entity
{
    public:
        Identifiers();
        ~Identifiers();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf sender; //type: string
        ydk::YLeaf te_lsp_id; //type: uint16
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32

}; // MplsPceStdby::Lsps::Identifiers


class MplsPceStdby::Lsps::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf announced; //type: boolean
        ydk::YLeaf metric_type; //type: PceLspAutorouteMetric
        ydk::YLeaf metric; //type: uint32
        ydk::YLeafList destination; //type: list of  string

}; // MplsPceStdby::Lsps::Autoroute


class MplsPceStdby::Lsps::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf is_bw_used; //type: boolean
        ydk::YLeaf reopt_bw; //type: uint32
        ydk::YLeaf is_reopt_bw_used; //type: boolean
        ydk::YLeaf applied_bw; //type: uint32
        ydk::YLeaf is_applied_bw_used; //type: boolean
        class Ero; //type: MplsPceStdby::Lsps::Paths::Ero
        class Lspa; //type: MplsPceStdby::Lsps::Paths::Lspa
        class Rro; //type: MplsPceStdby::Lsps::Paths::Rro
        class Metric; //type: MplsPceStdby::Lsps::Paths::Metric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Ero> ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Lspa> lspa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Rro> rro;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Metric> > metric;
        
}; // MplsPceStdby::Lsps::Paths


class MplsPceStdby::Lsps::Paths::Ero : public ydk::Entity
{
    public:
        Ero();
        ~Ero();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Paths::Ero::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Ero::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Paths::Ero


class MplsPceStdby::Lsps::Paths::Ero::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

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

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Paths::Ero::Subobject


class MplsPceStdby::Lsps::Paths::Lspa : public ydk::Entity
{
    public:
        Lspa();
        ~Lspa();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf exlude_any; //type: uint32
        ydk::YLeaf include_any; //type: uint32
        ydk::YLeaf include_all; //type: uint32
        ydk::YLeaf setup; //type: uint8
        ydk::YLeaf hold; //type: uint8
        ydk::YLeaf lbit; //type: boolean

}; // MplsPceStdby::Lsps::Paths::Lspa


class MplsPceStdby::Lsps::Paths::Rro : public ydk::Entity
{
    public:
        Rro();
        ~Rro();

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

        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf cost; //type: uint32
        ydk::YLeafList address; //type: list of  string
        class Subobject; //type: MplsPceStdby::Lsps::Paths::Rro::Subobject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Lsps::Paths::Rro::Subobject> > subobject;
        
}; // MplsPceStdby::Lsps::Paths::Rro


class MplsPceStdby::Lsps::Paths::Rro::Subobject : public ydk::Entity
{
    public:
        Subobject();
        ~Subobject();

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

        ydk::YLeaf subobj_type; //type: uint8
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_prefix_len; //type: uint32
        ydk::YLeaf strict; //type: boolean
        ydk::YLeaf global; //type: boolean
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf segment_id_type; //type: PceSrSid
        ydk::YLeaf only_valid_mpls_label; //type: boolean
        ydk::YLeaf complete_mpls_label_entry; //type: boolean
        ydk::YLeaf missing_segment_id; //type: boolean
        ydk::YLeaf missing_node_adjcency_id; //type: boolean
        ydk::YLeaf segment_id_exists; //type: boolean
        ydk::YLeaf segment_id_value; //type: uint32
        ydk::YLeaf node_adjacency_id_exists; //type: boolean
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // MplsPceStdby::Lsps::Paths::Rro::Subobject


class MplsPceStdby::Lsps::Paths::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

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

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // MplsPceStdby::Lsps::Paths::Metric


class MplsPceStdby::Statistics : public ydk::Entity
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

        ydk::YLeaf neighbors; //type: uint32
        ydk::YLeaf tunnels; //type: uint32
        ydk::YLeaf pce_req_total; //type: uint32
        ydk::YLeaf pce_req_pending; //type: uint32
        ydk::YLeaf pce_req_timed_out; //type: uint32
        ydk::YLeaf max_file_descriptors; //type: uint32
        ydk::YLeaf current_file_descriptors; //type: uint32
        ydk::YLeaf current_pceq_length; //type: uint32
        ydk::YLeaf current_teq_length; //type: uint32
        ydk::YLeaf max_pceq_length; //type: uint32
        ydk::YLeaf max_teq_length; //type: uint32
        ydk::YLeafList maximum_in_queue_depth; //type: list of  uint32
        ydk::YLeafList average_in_queue_depth; //type: list of  uint32
        class IgpStatistics; //type: MplsPceStdby::Statistics::IgpStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Statistics::IgpStatistics> igp_statistics;
        
}; // MplsPceStdby::Statistics


class MplsPceStdby::Statistics::IgpStatistics : public ydk::Entity
{
    public:
        IgpStatistics();
        ~IgpStatistics();

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

        ydk::YLeaf abr_lookup_min; //type: uint64
        ydk::YLeaf abr_lookup_max; //type: uint64
        ydk::YLeaf abr_lookup_avg; //type: uint64
        ydk::YLeaf abr_lookup_timeout; //type: uint64
        ydk::YLeaf abr_lookup_complete; //type: uint64

}; // MplsPceStdby::Statistics::IgpStatistics


class MplsPceStdby::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: MplsPceStdby::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer> > peer;
        
}; // MplsPceStdby::Peers


class MplsPceStdby::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf error; //type: string
        ydk::YLeaf pce_state; //type: PceState
        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf stateful; //type: boolean
        ydk::YLeaf capability_update; //type: boolean
        ydk::YLeaf capability_instantiate; //type: boolean
        ydk::YLeaf capability_segment_routing; //type: boolean
        ydk::YLeaf triggered_sync_capability; //type: boolean
        ydk::YLeaf capability_db_version; //type: boolean
        ydk::YLeaf delta_sync_capability; //type: boolean
        ydk::YLeaf pcep_up_time; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf candidate; //type: boolean
        ydk::YLeaf statically_configured; //type: boolean
        ydk::YLeaf md5_enabled; //type: boolean
        ydk::YLeaf keychain_enabled; //type: boolean
        ydk::YLeaf negotiated_keepalive; //type: uint32
        ydk::YLeaf negotated_dead_time; //type: uint32
        ydk::YLeaf pce_req_rx; //type: uint32
        ydk::YLeaf pce_req_tx; //type: uint32
        ydk::YLeaf pce_rep_rx; //type: uint32
        ydk::YLeaf pce_rep_tx; //type: uint32
        ydk::YLeaf pce_err_rx; //type: uint32
        ydk::YLeaf pce_err_tx; //type: uint32
        ydk::YLeaf pce_open_tx; //type: uint32
        ydk::YLeaf pce_open_rx; //type: uint32
        ydk::YLeaf pce_rpt_rx; //type: uint32
        ydk::YLeaf pce_rpt_tx; //type: uint32
        ydk::YLeaf pce_upd_rx; //type: uint32
        ydk::YLeaf pce_upd_tx; //type: uint32
        ydk::YLeaf pce_init_rx; //type: uint32
        ydk::YLeaf pce_init_tx; //type: uint32
        ydk::YLeaf pce_keepalive_tx; //type: uint64
        ydk::YLeaf pce_keepalive_rx; //type: uint64
        ydk::YLeaf req_reply_min; //type: uint64
        ydk::YLeaf req_reply_max; //type: uint64
        ydk::YLeaf req_reply_avg; //type: uint64
        ydk::YLeaf request_timeouts; //type: uint64
        ydk::YLeaf local_sid; //type: uint8
        ydk::YLeaf remote_sid; //type: uint8
        ydk::YLeaf min_keepalive_interval; //type: uint8
        ydk::YLeaf max_dead_interval; //type: uint8
        class LastTxPceErr; //type: MplsPceStdby::Peers::Peer::LastTxPceErr
        class LastRxPceErr; //type: MplsPceStdby::Peers::Peer::LastRxPceErr
        class IgPs; //type: MplsPceStdby::Peers::Peer::IgPs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::LastTxPceErr> last_tx_pce_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::LastRxPceErr> last_rx_pce_err;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Peers::Peer::IgPs> > ig_ps;
        
}; // MplsPceStdby::Peers::Peer


class MplsPceStdby::Peers::Peer::LastTxPceErr : public ydk::Entity
{
    public:
        LastTxPceErr();
        ~LastTxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPceStdby::Peers::Peer::LastTxPceErr


class MplsPceStdby::Peers::Peer::LastRxPceErr : public ydk::Entity
{
    public:
        LastRxPceErr();
        ~LastRxPceErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_err_type; //type: uint32
        ydk::YLeaf pce_err_value; //type: uint32
        ydk::YLeaf has_open_object; //type: boolean
        ydk::YLeaf openversion; //type: uint32
        ydk::YLeaf open_keepalive; //type: uint32
        ydk::YLeaf open_dead_time; //type: uint32
        ydk::YLeaf has_rp_object; //type: boolean
        ydk::YLeaf rp_request_id; //type: uint32

}; // MplsPceStdby::Peers::Peer::LastRxPceErr


class MplsPceStdby::Peers::Peer::IgPs : public ydk::Entity
{
    public:
        IgPs();
        ~IgPs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_type; //type: IgpProtocol
        ydk::YLeaf igp_instance_id; //type: string

}; // MplsPceStdby::Peers::Peer::IgPs


class MplsPceStdby::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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

        class Global; //type: MplsPceStdby::Topology::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology::Global> global;
        
}; // MplsPceStdby::Topology


class MplsPceStdby::Topology::Global : public ydk::Entity
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

        class Nodes; //type: MplsPceStdby::Topology::Global::Nodes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Topology::Global::Nodes> > nodes;
        
}; // MplsPceStdby::Topology::Global


class MplsPceStdby::Topology::Global::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf igp_area_id; //type: uint32
        ydk::YLeaf igp_area_format; //type: IgpOspfAreaFormat
        ydk::YLeaf pce_cost; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf is_pce_border_node; //type: boolean

}; // MplsPceStdby::Topology::Global::Nodes


class MplsPceStdby::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32
        class Tunnel; //type: MplsPceStdby::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsPceStdby::Tunnels::Tunnel> > tunnel;
        
}; // MplsPceStdby::Tunnels


class MplsPceStdby::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf is_curr_path_option_pce; //type: boolean
        ydk::YLeaf curr_path_option_index; //type: uint32
        ydk::YLeaf configured_pce_address; //type: string
        ydk::YLeaf sender_pce_address; //type: string
        ydk::YLeaf path_state; //type: PceTunPathState
        ydk::YLeaf tunnel_state; //type: PceTunnelState
        ydk::YLeaf admin_weight; //type: uint32
        ydk::YLeaf hop_count; //type: uint32

}; // MplsPceStdby::Tunnels::Tunnel

class MplsTp : public ydk::Entity
{
    public:
        MplsTp();
        ~MplsTp();

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

        class TpLinks; //type: MplsTp::TpLinks
        class TpTunnels; //type: MplsTp::TpTunnels
        class TpMidpoints; //type: MplsTp::TpMidpoints
        class TpGlobalParameters; //type: MplsTp::TpGlobalParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks> tp_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels> tp_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints> tp_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpGlobalParameters> tp_global_parameters;
        
}; // MplsTp


class MplsTp::TpLinks : public ydk::Entity
{
    public:
        TpLinks();
        ~TpLinks();

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

        class TpDetailLinks; //type: MplsTp::TpLinks::TpDetailLinks
        class TpLinkSummary; //type: MplsTp::TpLinks::TpLinkSummary
        class TpLinks_; //type: MplsTp::TpLinks::TpLinks_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpDetailLinks> tp_detail_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinkSummary> tp_link_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinks_> tp_links;
        
}; // MplsTp::TpLinks


class MplsTp::TpLinks::TpDetailLinks : public ydk::Entity
{
    public:
        TpDetailLinks();
        ~TpDetailLinks();

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

        class TpDetailLink; //type: MplsTp::TpLinks::TpDetailLinks::TpDetailLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpDetailLinks::TpDetailLink> > tp_detail_link;
        
}; // MplsTp::TpLinks::TpDetailLinks


class MplsTp::TpLinks::TpDetailLinks::TpDetailLink : public ydk::Entity
{
    public:
        TpDetailLink();
        ~TpDetailLink();

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

        ydk::YLeaf tp_link_id; //type: int32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf link_state; //type: TpLinkState
        ydk::YLeaf ls_ps; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint64
        ydk::YLeaf available_bandwidth; //type: uint64
        ydk::YLeaf unsupported_linecard; //type: boolean

}; // MplsTp::TpLinks::TpDetailLinks::TpDetailLink


class MplsTp::TpLinks::TpLinkSummary : public ydk::Entity
{
    public:
        TpLinkSummary();
        ~TpLinkSummary();

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

        ydk::YLeaf links; //type: uint32

}; // MplsTp::TpLinks::TpLinkSummary


class MplsTp::TpLinks::TpLinks_ : public ydk::Entity
{
    public:
        TpLinks_();
        ~TpLinks_();

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

        class TpLink; //type: MplsTp::TpLinks::TpLinks_::TpLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpLinks::TpLinks_::TpLink> > tp_link;
        
}; // MplsTp::TpLinks::TpLinks_


class MplsTp::TpLinks::TpLinks_::TpLink : public ydk::Entity
{
    public:
        TpLink();
        ~TpLink();

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

        ydk::YLeaf tp_link_id; //type: int32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf link_state; //type: TpLinkState
        ydk::YLeaf available_bandwidth; //type: uint64

}; // MplsTp::TpLinks::TpLinks_::TpLink


class MplsTp::TpTunnels : public ydk::Entity
{
    public:
        TpTunnels();
        ~TpTunnels();

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

        class TpTunnelSummary; //type: MplsTp::TpTunnels::TpTunnelSummary
        class TpDetailTunnels; //type: MplsTp::TpTunnels::TpDetailTunnels
        class TpTunnels_; //type: MplsTp::TpTunnels::TpTunnels_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnelSummary> tp_tunnel_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels> tp_detail_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_> tp_tunnels;
        
}; // MplsTp::TpTunnels


class MplsTp::TpTunnels::TpTunnelSummary : public ydk::Entity
{
    public:
        TpTunnelSummary();
        ~TpTunnelSummary();

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

        ydk::YLeaf up_working_ls_ps; //type: uint32
        ydk::YLeaf active_working_ls_ps; //type: uint32
        ydk::YLeaf down_working_ls_ps; //type: uint32
        ydk::YLeaf locked_working_ls_ps; //type: uint32
        ydk::YLeaf up_protect_ls_ps; //type: uint32
        ydk::YLeaf active_protect_ls_ps; //type: uint32
        ydk::YLeaf down_protect_ls_ps; //type: uint32
        ydk::YLeaf locked_protect_ls_ps; //type: uint32
        ydk::YLeaf up_tunnels; //type: uint32
        ydk::YLeaf down_tunnels; //type: uint32
        ydk::YLeaf admin_down_tunnels; //type: uint32
        ydk::YLeaf complete_fec_working_ls_ps; //type: uint32
        ydk::YLeaf complete_fec_protect_ls_ps; //type: uint32
        ydk::YLeaf bfd_session_working_ls_ps; //type: uint32
        ydk::YLeaf bfd_session_protect_ls_ps; //type: uint32

}; // MplsTp::TpTunnels::TpTunnelSummary


class MplsTp::TpTunnels::TpDetailTunnels : public ydk::Entity
{
    public:
        TpDetailTunnels();
        ~TpDetailTunnels();

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

        class TpDetailTunnel; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel> > tp_detail_tunnel;
        
}; // MplsTp::TpTunnels::TpDetailTunnels


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel : public ydk::Entity
{
    public:
        TpDetailTunnel();
        ~TpDetailTunnel();

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

        ydk::YLeaf tp_tunnel_name; //type: string
        ydk::YLeaf req_bandwidth; //type: uint32
        ydk::YLeaf oam_interval; //type: uint32
        ydk::YLeaf bfd_interval_active; //type: uint32
        ydk::YLeaf bfd_interval_active_in_micro_sec; //type: boolean
        ydk::YLeaf bfd_multiplier_active; //type: uint32
        ydk::YLeaf bfd_interval_standby; //type: uint32
        ydk::YLeaf bfd_interval_standby_in_micro_sec; //type: boolean
        ydk::YLeaf bfd_multiplier_standby; //type: uint32
        ydk::YLeaf tunnel_up_time; //type: uint32
        ydk::YLeaf switchover_trig; //type: MplsTpTunnelSwitchoverTrig
        ydk::YLeaf switch_over_time; //type: uint32
        class Tunnel; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel
        class WorkingLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp
        class OamProtectionTriggers; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp> working_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp> protect_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers> oam_protection_triggers;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf admin_status; //type: MplsTpTunnelState
        ydk::YLeaf operation_status; //type: MplsTpTunnelState
        ydk::YLeaf active_lsp; //type: MplsTpTunnelActiveLsp
        class WorkingLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp> working_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp> protect_lsp;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::WorkingLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::Tunnel::ProtectLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf tp_out_label; //type: uint32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf out_interface_name; //type: string
        ydk::YLeaf out_next_hop; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint32
        class BriefInformation; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation> brief_information;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation : public ydk::Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::WorkingLsp::BriefInformation


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf tp_out_label; //type: uint32
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf out_interface_name; //type: string
        ydk::YLeaf out_next_hop; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf reserved_bandwidth; //type: uint32
        class BriefInformation; //type: MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation> brief_information;
        
}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation : public ydk::Entity
{
    public:
        BriefInformation();
        ~BriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::ProtectLsp::BriefInformation


class MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers : public ydk::Entity
{
    public:
        OamProtectionTriggers();
        ~OamProtectionTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais; //type: boolean
        ydk::YLeaf ldi; //type: boolean
        ydk::YLeaf lkr; //type: boolean

}; // MplsTp::TpTunnels::TpDetailTunnels::TpDetailTunnel::OamProtectionTriggers


class MplsTp::TpTunnels::TpTunnels_ : public ydk::Entity
{
    public:
        TpTunnels_();
        ~TpTunnels_();

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

        class TpTunnel; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel> > tp_tunnel;
        
}; // MplsTp::TpTunnels::TpTunnels_


class MplsTp::TpTunnels::TpTunnels_::TpTunnel : public ydk::Entity
{
    public:
        TpTunnel();
        ~TpTunnel();

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

        ydk::YLeaf tp_tunnel_name; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf admin_status; //type: MplsTpTunnelState
        ydk::YLeaf operation_status; //type: MplsTpTunnelState
        ydk::YLeaf active_lsp; //type: MplsTpTunnelActiveLsp
        class WorkingLsp; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp
        class ProtectLsp; //type: MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp> working_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp> protect_lsp;
        
}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel


class MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp : public ydk::Entity
{
    public:
        WorkingLsp();
        ~WorkingLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel::WorkingLsp


class MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp : public ydk::Entity
{
    public:
        ProtectLsp();
        ~ProtectLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf state; //type: MplsTpLspState
        ydk::YLeaf lock_out; //type: boolean
        ydk::YLeaf rx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf tx_oam_state; //type: MplsTpLspOamState
        ydk::YLeaf bfd_state; //type: MplsTpLspBfdState

}; // MplsTp::TpTunnels::TpTunnels_::TpTunnel::ProtectLsp


class MplsTp::TpMidpoints : public ydk::Entity
{
    public:
        TpMidpoints();
        ~TpMidpoints();

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

        class TpDetailMidpoints; //type: MplsTp::TpMidpoints::TpDetailMidpoints
        class TpMidpointSummary; //type: MplsTp::TpMidpoints::TpMidpointSummary
        class TpMidpoints_; //type: MplsTp::TpMidpoints::TpMidpoints_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints> tp_detail_midpoints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpointSummary> tp_midpoint_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpMidpoints_> tp_midpoints;
        
}; // MplsTp::TpMidpoints


class MplsTp::TpMidpoints::TpDetailMidpoints : public ydk::Entity
{
    public:
        TpDetailMidpoints();
        ~TpDetailMidpoints();

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

        class TpDetailMidpoint; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint> > tp_detail_midpoint;
        
}; // MplsTp::TpMidpoints::TpDetailMidpoints


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint : public ydk::Entity
{
    public:
        TpDetailMidpoint();
        ~TpDetailMidpoint();

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

        ydk::YLeaf tp_midpoint_name; //type: string
        ydk::YLeaf forward_lsp_reserved_bandwidth; //type: uint32
        ydk::YLeaf reverse_lsp_reserved_bandwidth; //type: uint32
        class BriefLspInformation; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation
        class ForwardLsp; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp
        class ReverseLsp; //type: MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp> forward_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_mpls_te_oper::MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp> reverse_lsp;
        
}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation : public ydk::Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf midpoint_name; //type: string
        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf source_node_id; //type: string
        ydk::YLeaf source_global_id; //type: uint32
        ydk::YLeaf source_tunnel_id; //type: uint32
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf destination_node_id; //type: string
        ydk::YLeaf destination_global_id; //type: uint32
        ydk::YLeaf destination_tunnel_id; //type: uint32
        ydk::YLeaf forward_lsp_state; //type: TpMidLspStatus
        ydk::YLeaf reverse_lsp_state; //type: TpMidLspStatus

}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::BriefLspInformation


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp : public ydk::Entity
{
    public:
        ForwardLsp();
        ~ForwardLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_link; //type: uint32
        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ForwardLsp


class MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp : public ydk::Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf out_link; //type: uint32
        ydk::YLeaf oam_refresh_interval; //type: uint32
        ydk::YLeaf outgoing_interface; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // MplsTp::TpMidpoints::TpDetailMidpoints::TpDetailMidpoint::ReverseLsp


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_35_ */

