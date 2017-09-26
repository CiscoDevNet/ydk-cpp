#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_2_
#define _CISCO_IOS_XR_IP_RSVP_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rsvp_oper_0.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {


class Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::RsbBriefs::RsbBrief::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // Rsvp::RsbBriefs::RsbBrief::Style


class Rsvp::RsbDetaileds : public ydk::Entity
{
    public:
        RsbDetaileds();
        ~RsbDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RsbDetailed; //type: Rsvp::RsbDetaileds::RsbDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed> > rsb_detailed;
        
}; // Rsvp::RsbDetaileds


class Rsvp::RsbDetaileds::RsbDetailed : public ydk::Entity
{
    public:
        RsbDetailed();
        ~RsbDetailed();

        bool has_data() const override;
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
        ydk::YLeaf input_adjusted_interface; //type: string
        ydk::YLeaf input_physical_interface; //type: string
        class FlowSpec; //type: Rsvp::RsbDetaileds::RsbDetailed::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec
        class Session; //type: Rsvp::RsbDetaileds::RsbDetailed::Session
        class S2LSubLsp; //type: Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp
        class Style; //type: Rsvp::RsbDetaileds::RsbDetailed::Style
        class Filter; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter
        class RsbFlags; //type: Rsvp::RsbDetaileds::RsbDetailed::RsbFlags
        class Hop; //type: Rsvp::RsbDetaileds::RsbDetailed::Hop
        class PolicySources; //type: Rsvp::RsbDetaileds::RsbDetailed::PolicySources
        class Header; //type: Rsvp::RsbDetaileds::RsbDetailed::Header
        class PolicyFlags; //type: Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags
        class ExpiryTime; //type: Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime
        class PolicyQueryFlags; //type: Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags
        class LabelInfo; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Style> style;
        
}; // Rsvp::RsbDetaileds::RsbDetailed


class Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: int32
        ydk::YLeaf nanoseconds; //type: int32

}; // Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime


class Rsvp::RsbDetaileds::RsbDetailed::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RsvpFilter; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::Filter


class Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter : public ydk::Entity
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
        class UdpIpv4Session; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


class Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
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
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
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
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RsbDetaileds::RsbDetailed::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // Rsvp::RsbDetaileds::RsbDetailed::FlowSpec


class Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec


class Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RsbDetaileds::RsbDetailed::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // Rsvp::RsbDetaileds::RsbDetailed::Header


class Rsvp::RsbDetaileds::RsbDetailed::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
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
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // Rsvp::RsbDetaileds::RsbDetailed::Hop


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo : public ydk::Entity
{
    public:
        LabelInfo();
        ~LabelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf local_downstream_label; //type: uint32
        ydk::YLeaf outgoing_downstream_label; //type: uint32
        ydk::YLeaf merge_point_label; //type: uint32
        ydk::YLeaf outgoing_upstream_label; //type: uint32
        ydk::YLeaf local_upstream_label; //type: uint32
        ydk::YLeaf recovery_label; //type: uint32
        ydk::YLeaf lsp_wrap_label; //type: uint32
        class GenericLocalDownstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel
        class GenericOutgoingDownstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel
        class GenericMergePointLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel
        class GenericOutgoingUpstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel
        class GenericLocalUpstreamLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel
        class GenericRecoveryLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel : public ydk::Entity
{
    public:
        GenericLocalDownstreamLabel();
        ~GenericLocalDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel : public ydk::Entity
{
    public:
        GenericLocalUpstreamLabel();
        ~GenericLocalUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel : public ydk::Entity
{
    public:
        GenericMergePointLabel();
        ~GenericMergePointLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingDownstreamLabel();
        ~GenericOutgoingDownstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel : public ydk::Entity
{
    public:
        GenericOutgoingUpstreamLabel();
        ~GenericOutgoingUpstreamLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel : public ydk::Entity
{
    public:
        GenericRecoveryLabel();
        ~GenericRecoveryLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


class Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


class Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags : public ydk::Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_accepted; //type: boolean
        ydk::YLeaf is_installed; //type: boolean
        ydk::YLeaf is_forwarding; //type: boolean

}; // Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags


class Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags : public ydk::Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_needed; //type: boolean
        ydk::YLeaf is_report_required; //type: boolean
        ydk::YLeaf is_resync; //type: boolean
        ydk::YLeaf is_bypass; //type: boolean

}; // Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags


class Rsvp::RsbDetaileds::RsbDetailed::PolicySources : public ydk::Entity
{
    public:
        PolicySources();
        ~PolicySources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_te_link; //type: boolean
        ydk::YLeaf is_local; //type: boolean
        ydk::YLeaf is_cops; //type: boolean
        ydk::YLeaf is_default; //type: boolean
        ydk::YLeaf is_cable; //type: boolean

}; // Rsvp::RsbDetaileds::RsbDetailed::PolicySources


class Rsvp::RsbDetaileds::RsbDetailed::RsbFlags : public ydk::Entity
{
    public:
        RsbFlags();
        ~RsbFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_local_receiver; //type: boolean
        ydk::YLeaf is_message_id_valid; //type: boolean
        ydk::YLeaf is_local_repair; //type: boolean
        ydk::YLeaf is_merge_point; //type: boolean
        ydk::YLeaf is_lockout; //type: boolean

}; // Rsvp::RsbDetaileds::RsbDetailed::RsbFlags


class Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp : public ydk::Entity
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

}; // Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp


class Rsvp::RsbDetaileds::RsbDetailed::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::Session


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


class Rsvp::RsbDetaileds::RsbDetailed::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // Rsvp::RsbDetaileds::RsbDetailed::Style


class Rsvp::RxsbDetails : public ydk::Entity
{
    public:
        RxsbDetails();
        ~RxsbDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RxsbDetail; //type: Rsvp::RxsbDetails::RxsbDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail> > rxsb_detail;
        
}; // Rsvp::RxsbDetails


class Rsvp::RxsbDetails::RxsbDetail : public ydk::Entity
{
    public:
        RxsbDetail();
        ~RxsbDetail();

        bool has_data() const override;
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
        ydk::YLeaf dynamic_state; //type: uint32
        class Session; //type: Rsvp::RxsbDetails::RxsbDetail::Session
        class S2LSubLsp; //type: Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp
        class Style; //type: Rsvp::RxsbDetails::RxsbDetail::Style
        class Filter; //type: Rsvp::RxsbDetails::RxsbDetail::Filter
        class FlowSpec; //type: Rsvp::RxsbDetails::RxsbDetail::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec
        class Hop; //type: Rsvp::RxsbDetails::RxsbDetail::Hop
        class RsvpHeader; //type: Rsvp::RxsbDetails::RxsbDetail::RsvpHeader

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter> filter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Hop> hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::RsvpHeader> rsvp_header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Style> style;
        
}; // Rsvp::RxsbDetails::RxsbDetail


class Rsvp::RxsbDetails::RxsbDetail::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RsvpFilter; //type: Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter> rsvp_filter;
        
}; // Rsvp::RxsbDetails::RxsbDetail::Filter


class Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter : public ydk::Entity
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
        class UdpIpv4Session; //type: Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
        
}; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter


class Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session : public ydk::Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
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
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16

}; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session : public ydk::Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
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
        ydk::YLeaf source_port; //type: uint16

}; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RxsbDetails::RxsbDetail::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // Rsvp::RxsbDetails::RxsbDetail::FlowSpec


class Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec


class Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RxsbDetails::RxsbDetail::Hop : public ydk::Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
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
        ydk::YLeaf neighbor_logical_interface_name; //type: string

}; // Rsvp::RxsbDetails::RxsbDetail::Hop


class Rsvp::RxsbDetails::RxsbDetail::RsvpHeader : public ydk::Entity
{
    public:
        RsvpHeader();
        ~RsvpHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rsvp_version; //type: uint8
        ydk::YLeaf rsvp_header_flags; //type: uint8
        ydk::YLeaf rsvp_ttl; //type: uint8
        ydk::YLeaf rsvp_message_type; //type: uint8
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf ip_ttl; //type: uint8
        ydk::YLeaf ip_source_address; //type: string

}; // Rsvp::RxsbDetails::RxsbDetail::RsvpHeader


class Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp : public ydk::Entity
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

}; // Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp


class Rsvp::RxsbDetails::RxsbDetail::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::RxsbDetails::RxsbDetail::Session


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::RxsbDetails::RxsbDetail::Style : public ydk::Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnum

}; // Rsvp::RxsbDetails::RxsbDetail::Style


class Rsvp::SessionBriefs : public ydk::Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionBrief; //type: Rsvp::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief> > session_brief;
        
}; // Rsvp::SessionBriefs


class Rsvp::SessionBriefs::SessionBrief : public ydk::Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

        bool has_data() const override;
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
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ps_bs; //type: uint32
        ydk::YLeaf rs_bs; //type: uint32
        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf detail_list_size; //type: uint32
        class Session; //type: Rsvp::SessionBriefs::SessionBrief::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session> session;
        
}; // Rsvp::SessionBriefs::SessionBrief


class Rsvp::SessionBriefs::SessionBrief::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::SessionBriefs::SessionBrief::Session


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::SessionDetaileds : public ydk::Entity
{
    public:
        SessionDetaileds();
        ~SessionDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionDetailed; //type: Rsvp::SessionDetaileds::SessionDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed> > session_detailed;
        
}; // Rsvp::SessionDetaileds


class Rsvp::SessionDetaileds::SessionDetailed : public ydk::Entity
{
    public:
        SessionDetailed();
        ~SessionDetailed();

        bool has_data() const override;
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
        ydk::YLeaf vrf_name; //type: string
        class Compact; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact
        class S2LSubLsp; //type: Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp
        class PsbRsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact> compact;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo> > psb_rsb_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp> s2l_sub_lsp;
        
}; // Rsvp::SessionDetaileds::SessionDetailed


class Rsvp::SessionDetaileds::SessionDetailed::Compact : public ydk::Entity
{
    public:
        Compact();
        ~Compact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ps_bs; //type: uint32
        ydk::YLeaf rs_bs; //type: uint32
        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf detail_list_size; //type: uint32
        class Session; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session> session;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::Compact


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session : public ydk::Entity
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

        class RsvpSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession> rsvp_session;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession : public ydk::Entity
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
        class Ipv4; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4 : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo : public ydk::Entity
{
    public:
        PsbRsbInfo();
        ~PsbRsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo
        class RsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo> > psb_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo> > rsb_info;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo : public ydk::Entity
{
    public:
        PsbInfo();
        ~PsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf lsp_id; //type: uint32
        ydk::YLeaf p2mp_sub_group_origin; //type: string
        ydk::YLeaf sub_group_id; //type: uint16
        ydk::YLeaf in_interface; //type: string
        ydk::YLeaf in_label; //type: uint32
        ydk::YLeaf lsp_wrap_label; //type: uint32
        ydk::YLeaf is_bad_address; //type: boolean
        ydk::YLeaf incoming_interface_address; //type: string
        ydk::YLeaf is_ero_valid; //type: boolean
        ydk::YLeaf is_rro_valid; //type: boolean
        ydk::YLeaf is_traffic_spec_valid; //type: boolean
        ydk::YLeaf tunnel_name; //type: string
        class GenericInLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel
        class TrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec
        class Association; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association
        class Protection; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection
        class ReverseLsp; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp
        class Ero; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero
        class Rro; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association> association;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero> > ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel> generic_in_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection> protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp> reverse_lsp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro> > rro;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec> traffic_spec;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf association_type; //type: RsvpMgmtAssociation
        class Ipv4; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4
        class Ipv6; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6
        class ExtendedIpv4; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4
        class ExtendedIpv6; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4> extended_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6> extended_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6> ipv6;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4 : public ydk::Entity
{
    public:
        ExtendedIpv4();
        ~ExtendedIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf global_source; //type: uint32
        ydk::YLeafList extended_id; //type: list of  uint32

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6 : public ydk::Entity
{
    public:
        ExtendedIpv6();
        ~ExtendedIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf global_source; //type: uint32
        ydk::YLeafList extended_id; //type: list of  uint32

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4 : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf source; //type: string

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6 : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf source; //type: string

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero : public ydk::Entity
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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel : public ydk::Entity
{
    public:
        GenericInLabel();
        ~GenericInLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec : public ydk::Entity
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
        class G709OtnTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf s; //type: boolean
        ydk::YLeaf p; //type: boolean
        ydk::YLeaf n; //type: boolean
        ydk::YLeaf o; //type: boolean
        class LspFlags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags
        class LinkFlags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags> link_flags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags> lsp_flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf enhanced; //type: boolean
        ydk::YLeaf ded1_plus1; //type: boolean
        ydk::YLeaf ded1_to1; //type: boolean
        ydk::YLeaf shared; //type: boolean
        ydk::YLeaf unprotected; //type: boolean
        ydk::YLeaf extra_traffic; //type: boolean
        ydk::YLeaf reserved_bit1; //type: boolean
        ydk::YLeaf reserved_bit2; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags : public ydk::Entity
{
    public:
        LspFlags();
        ~LspFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rerouting; //type: boolean
        ydk::YLeaf rerouting_no_et; //type: boolean
        ydk::YLeaf one_to_n_protection_et; //type: boolean
        ydk::YLeaf one_plus_one_uni; //type: boolean
        ydk::YLeaf one_plus_one_bi; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class GenericTrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec
        class Ero; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero
        class UnsupSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero> > ero;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec> generic_traffic_spec;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject> > unsup_sub_object;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero : public ydk::Entity
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

        ydk::YLeaf ero_type; //type: RsvpMgmtEroSubobj
        class Ipv4EroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject : public ydk::Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject : public ydk::Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_strict_route; //type: boolean
        ydk::YLeaf ero_interface_id; //type: uint32
        ydk::YLeaf ero_router_id; //type: string
        ydk::YLeaf status; //type: RsvpMgmtEroSubobjStatus

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec : public ydk::Entity
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
        class G709OtnTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject : public ydk::Entity
{
    public:
        UnsupSubObject();
        ~UnsupSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList rsvp_mgmt_rev_lsp_unsupported_subobj; //type: list of  uint8

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro : public ydk::Entity
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

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags> flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        ydk::YLeafList variable_length_label; //type: list of  uint32
        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags> flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList srl_gs; //type: list of  uint32

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec : public ydk::Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

        bool has_data() const override;
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

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo : public ydk::Entity
{
    public:
        RsbInfo();
        ~RsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf out_interface; //type: string
        ydk::YLeaf out_label; //type: uint32
        ydk::YLeaf backup_interface; //type: string
        ydk::YLeaf backup_label; //type: uint32
        ydk::YLeaf is_rro_valid; //type: boolean
        ydk::YLeaf is_flow_spec_valid; //type: boolean
        class GenericOutLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel
        class FlowSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec
        class GenericFlowSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec
        class Rro; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec> flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel> generic_out_label;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro> > rro;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec : public ydk::Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_average_rate; //type: uint64
        ydk::YLeaf flow_max_burst; //type: uint64
        ydk::YLeaf flow_peak_rate; //type: uint64
        ydk::YLeaf flow_min_unit; //type: uint32
        ydk::YLeaf flow_max_unit; //type: uint32
        ydk::YLeaf flow_requested_rate; //type: uint64
        ydk::YLeaf flow_slack; //type: uint32
        ydk::YLeaf flow_qos; //type: RsvpMgmtQosServiceEnum

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec : public ydk::Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_spec_type; //type: RsvpMgmtFlowSpec
        class G709OtnFlowSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec : public ydk::Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flow_signal_type; //type: uint8
        ydk::YLeaf flow_nvc; //type: uint16
        ydk::YLeaf flow_multiplier; //type: uint16
        ydk::YLeaf flow_bit_rate; //type: uint64

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel : public ydk::Entity
{
    public:
        GenericOutLabel();
        ~GenericOutLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf generic_label_type; //type: RsvpMgmtGenericLabel
        class GeneralizedLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel> generalized_label;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel : public ydk::Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList value_; //type: list of  uint32

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro : public ydk::Entity
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

        ydk::YLeaf rro_type; //type: RsvpMgmtRroSubobj
        class Ipv4RroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject : public ydk::Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf rro_address; //type: string
        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags> flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject : public ydk::Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf label; //type: uint32
        ydk::YLeaf is_label_variable_length; //type: boolean
        ydk::YLeafList variable_length_label; //type: list of  uint32
        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags> flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_global_label; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject : public ydk::Entity
{
    public:
        SrlgRroSubObject();
        ~SrlgRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeafList srl_gs; //type: list of  uint32

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject : public ydk::Entity
{
    public:
        UnnumberedRroSubObject();
        ~UnnumberedRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_id; //type: uint32
        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;
        
}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf is_protection_available; //type: boolean
        ydk::YLeaf is_protection_in_use; //type: boolean
        ydk::YLeaf is_bandwidth_protected; //type: boolean
        ydk::YLeaf is_node_protection_available; //type: boolean
        ydk::YLeaf is_node_id; //type: boolean

}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp : public ydk::Entity
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

}; // Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp


class Rsvp::Summary : public ydk::Entity
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

        ydk::YLeaf interfaces; //type: uint32
        ydk::YLeaf ls_ps; //type: uint32
        class IssuStatus; //type: Rsvp::Summary::IssuStatus
        class NsrStatus; //type: Rsvp::Summary::NsrStatus
        class DatabaseCounters; //type: Rsvp::Summary::DatabaseCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::DatabaseCounters> database_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus> issu_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus> nsr_status;
        
}; // Rsvp::Summary


class Rsvp::Summary::DatabaseCounters : public ydk::Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
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

}; // Rsvp::Summary::DatabaseCounters


class Rsvp::Summary::IssuStatus : public ydk::Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
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
        class IdtStatus; //type: Rsvp::Summary::IssuStatus::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Summary::IssuStatus::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::PreviousIdtStatus> previous_idt_status;
        
}; // Rsvp::Summary::IssuStatus


class Rsvp::Summary::IssuStatus::IdtStatus : public ydk::Entity
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

}; // Rsvp::Summary::IssuStatus::IdtStatus


class Rsvp::Summary::IssuStatus::PreviousIdtStatus : public ydk::Entity
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

}; // Rsvp::Summary::IssuStatus::PreviousIdtStatus


class Rsvp::Summary::NsrStatus : public ydk::Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
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
        class IdtStatus; //type: Rsvp::Summary::NsrStatus::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Summary::NsrStatus::PreviousIdtStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::PreviousIdtStatus> previous_idt_status;
        
}; // Rsvp::Summary::NsrStatus


class Rsvp::Summary::NsrStatus::IdtStatus : public ydk::Entity
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

}; // Rsvp::Summary::NsrStatus::IdtStatus


class Rsvp::Summary::NsrStatus::PreviousIdtStatus : public ydk::Entity
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

}; // Rsvp::Summary::NsrStatus::PreviousIdtStatus

class RsvpStandby : public ydk::Entity
{
    public:
        RsvpStandby();
        ~RsvpStandby();

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

        class InterfaceNeighborBriefs; //type: RsvpStandby::InterfaceNeighborBriefs
        class ControllerSummaries; //type: RsvpStandby::ControllerSummaries
        class AuthenticationBriefs; //type: RsvpStandby::AuthenticationBriefs
        class SessionBriefs; //type: RsvpStandby::SessionBriefs
        class PsbDetaileds; //type: RsvpStandby::PsbDetaileds
        class ControllerDetaileds; //type: RsvpStandby::ControllerDetaileds
        class FrrSummary; //type: RsvpStandby::FrrSummary
        class RsbDetaileds; //type: RsvpStandby::RsbDetaileds
        class InterfaceSummaries; //type: RsvpStandby::InterfaceSummaries
        class HelloInstanceBriefs; //type: RsvpStandby::HelloInstanceBriefs
        class AuthenticationDetails; //type: RsvpStandby::AuthenticationDetails
        class RsbBriefs; //type: RsvpStandby::RsbBriefs
        class OpenConfig; //type: RsvpStandby::OpenConfig
        class Counters; //type: RsvpStandby::Counters
        class InterfaceDetaileds; //type: RsvpStandby::InterfaceDetaileds
        class ControllerBriefs; //type: RsvpStandby::ControllerBriefs
        class GracefulRestart; //type: RsvpStandby::GracefulRestart
        class HelloInterfaceInstanceBriefs; //type: RsvpStandby::HelloInterfaceInstanceBriefs
        class HelloInterfaceInstanceDetails; //type: RsvpStandby::HelloInterfaceInstanceDetails
        class InterfaceNeighborDetails; //type: RsvpStandby::InterfaceNeighborDetails
        class Nsr; //type: RsvpStandby::Nsr
        class Summary; //type: RsvpStandby::Summary
        class Frrs; //type: RsvpStandby::Frrs
        class RequestBriefs; //type: RsvpStandby::RequestBriefs
        class RequestDetails; //type: RsvpStandby::RequestDetails
        class InterfaceBriefs; //type: RsvpStandby::InterfaceBriefs
        class SessionDetaileds; //type: RsvpStandby::SessionDetaileds
        class HelloInstanceDetails; //type: RsvpStandby::HelloInstanceDetails
        class GlobalNeighborDetails; //type: RsvpStandby::GlobalNeighborDetails
        class PsbBriefs; //type: RsvpStandby::PsbBriefs
        class GlobalNeighborBriefs; //type: RsvpStandby::GlobalNeighborBriefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs> authentication_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails> authentication_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerBriefs> controller_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds> controller_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerSummaries> controller_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary> frr_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs> frrs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs> global_neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails> global_neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs> hello_instance_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails> hello_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds> interface_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails> interface_neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries> interface_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig> open_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs> psb_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds> psb_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs> request_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails> request_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs> rsb_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds> rsb_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs> session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds> session_detaileds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary> summary;
        
}; // RsvpStandby


class RsvpStandby::AuthenticationBriefs : public ydk::Entity
{
    public:
        AuthenticationBriefs();
        ~AuthenticationBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AuthenticationBrief; //type: RsvpStandby::AuthenticationBriefs::AuthenticationBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;
        
}; // RsvpStandby::AuthenticationBriefs


class RsvpStandby::AuthenticationBriefs::AuthenticationBrief : public ydk::Entity
{
    public:
        AuthenticationBrief();
        ~AuthenticationBrief();

        bool has_data() const override;
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
        ydk::YLeaf mode_id; //type: RsvpMode
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf direction; //type: RsvpMgmtAuthDirection
        ydk::YLeaf key_type; //type: RsvpMgmtAuthKi
        ydk::YLeaf key_source; //type: string
        ydk::YLeaf key_id; //type: uint64
        ydk::YLeaf key_id_valid; //type: uint32

}; // RsvpStandby::AuthenticationBriefs::AuthenticationBrief


class RsvpStandby::AuthenticationDetails : public ydk::Entity
{
    public:
        AuthenticationDetails();
        ~AuthenticationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AuthenticationDetail; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail> > authentication_detail;
        
}; // RsvpStandby::AuthenticationDetails


class RsvpStandby::AuthenticationDetails::AuthenticationDetail : public ydk::Entity
{
    public:
        AuthenticationDetail();
        ~AuthenticationDetail();

        bool has_data() const override;
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
        ydk::YLeaf mode_id; //type: RsvpMode
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf key_status; //type: uint32
        ydk::YLeaf key_digest_info; //type: uint32
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf lifetime_left; //type: uint32
        ydk::YLeaf challenge_status; //type: RsvpMgmtAuthChallengeStatus
        class AuthCompact; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact
        class DirectionInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact : public ydk::Entity
{
    public:
        AuthCompact();
        ~AuthCompact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address_xr; //type: string
        ydk::YLeaf destination_address_xr; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf direction; //type: RsvpMgmtAuthDirection
        ydk::YLeaf key_type; //type: RsvpMgmtAuthKi
        ydk::YLeaf key_source; //type: string
        ydk::YLeaf key_id; //type: uint64
        ydk::YLeaf key_id_valid; //type: uint32

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo : public ydk::Entity
{
    public:
        DirectionInfo();
        ~DirectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_direction; //type: RsvpMgmtAuthDirection
        class SendInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo
        class ReceiveInfo; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo : public ydk::Entity
{
    public:
        ReceiveInfo();
        ~ReceiveInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf sequence_window_size; //type: uint32
        ydk::YLeaf sequence_window_count; //type: uint32
        ydk::YLeafList sequence_window; //type: list of  uint64
        class Counters; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters : public ydk::Entity
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

        ydk::YLeaf authentication_received_valid_messages; //type: uint32
        ydk::YLeaf authentication_received_challenges_sent; //type: uint32
        ydk::YLeaf authentication_received_challenge_response; //type: uint32
        ydk::YLeaf authentication_received_challenges_resent; //type: uint32
        ydk::YLeaf authentication_received_challenge_timeouts; //type: uint32
        ydk::YLeaf authentication_received_during_challenge; //type: uint32
        ydk::YLeaf authentication_received_incomplete; //type: uint32
        ydk::YLeaf authentication_received_no_integrity; //type: uint32
        ydk::YLeaf authentication_received_bad_digest; //type: uint32
        ydk::YLeaf authentication_received_wrong_digest_type; //type: uint32
        ydk::YLeaf authentication_received_sequence_number_duplicate; //type: uint32
        ydk::YLeaf authentication_received_sequence_number_outof_range; //type: uint32
        ydk::YLeaf authentication_received_wrong_challenges_response; //type: uint32
        ydk::YLeaf authentication_received_challenges_response_duplicate; //type: uint32
        ydk::YLeaf authentication_received_response_late; //type: uint32
        ydk::YLeaf authentication_received_bad_message_format; //type: uint32

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo : public ydk::Entity
{
    public:
        SendInfo();
        ~SendInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        class Counters; //type: RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;
        
}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


class RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters : public ydk::Entity
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

        ydk::YLeaf authentication_sent; //type: uint32
        ydk::YLeaf authentication_failures; //type: uint32
        ydk::YLeaf authentication_send_challenges_received; //type: uint32
        ydk::YLeaf authentication_challenge_responses_sent; //type: uint32

}; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


class RsvpStandby::ControllerBriefs : public ydk::Entity
{
    public:
        ControllerBriefs();
        ~ControllerBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerBrief; //type: RsvpStandby::ControllerBriefs::ControllerBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerBriefs::ControllerBrief> > controller_brief;
        
}; // RsvpStandby::ControllerBriefs


class RsvpStandby::ControllerBriefs::ControllerBrief : public ydk::Entity
{
    public:
        ControllerBrief();
        ~ControllerBrief();

        bool has_data() const override;
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
        class BandwidthInformation; //type: RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation> bandwidth_information;
        
}; // RsvpStandby::ControllerBriefs::ControllerBrief


class RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation : public ydk::Entity
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
        class PreStandardDsteInterface; //type: RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
        
}; // RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation


class RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface


class RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface : public ydk::Entity
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

}; // RsvpStandby::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface


class RsvpStandby::ControllerDetaileds : public ydk::Entity
{
    public:
        ControllerDetaileds();
        ~ControllerDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerDetailed; //type: RsvpStandby::ControllerDetaileds::ControllerDetailed

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::ControllerDetaileds::ControllerDetailed> > controller_detailed;
        
}; // RsvpStandby::ControllerDetaileds


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_2_ */

