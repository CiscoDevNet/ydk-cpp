#ifndef _CISCO_IOS_XR_IP_BFD_OPER_0_
#define _CISCO_IOS_XR_IP_BFD_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {

class Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

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

        class LabelSessionBriefs; //type: Bfd::LabelSessionBriefs
        class Ipv4bfDoMplsteTailSummary; //type: Bfd::Ipv4bfDoMplsteTailSummary
        class Ipv6SingleHopCounters; //type: Bfd::Ipv6SingleHopCounters
        class Counters; //type: Bfd::Counters
        class ClientDetails; //type: Bfd::ClientDetails
        class Ipv4SingleHopSummary; //type: Bfd::Ipv4SingleHopSummary
        class Ipv6SingleHopSummary; //type: Bfd::Ipv6SingleHopSummary
        class LabelMultiPaths; //type: Bfd::LabelMultiPaths
        class Ipv4MultiHopSessionDetails; //type: Bfd::Ipv4MultiHopSessionDetails
        class Ipv4SingleHopSessionDetails; //type: Bfd::Ipv4SingleHopSessionDetails
        class Ipv4MultiHopSessionBriefs; //type: Bfd::Ipv4MultiHopSessionBriefs
        class GenericSummaries; //type: Bfd::GenericSummaries
        class Ipv6SingleHopMultiPaths; //type: Bfd::Ipv6SingleHopMultiPaths
        class Ipv4SingleHopNodeLocationSummaries; //type: Bfd::Ipv4SingleHopNodeLocationSummaries
        class LabelSummary; //type: Bfd::LabelSummary
        class Ipv4bfDoMplsteHeadSessionBriefs; //type: Bfd::Ipv4bfDoMplsteHeadSessionBriefs
        class Ipv4bfDoMplsteTailSessionDetails; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails
        class Ipv4MultiHopNodeLocationSummaries; //type: Bfd::Ipv4MultiHopNodeLocationSummaries
        class Ipv4bfDoMplsteTailSessionBriefs; //type: Bfd::Ipv4bfDoMplsteTailSessionBriefs
        class Ipv6MultiHopNodeLocationSummaries; //type: Bfd::Ipv6MultiHopNodeLocationSummaries
        class Ipv4MultiHopSummary; //type: Bfd::Ipv4MultiHopSummary
        class Ipv4SingleHopCounters; //type: Bfd::Ipv4SingleHopCounters
        class Ipv6MultiHopSessionDetails; //type: Bfd::Ipv6MultiHopSessionDetails
        class Ipv6MultiHopMultiPaths; //type: Bfd::Ipv6MultiHopMultiPaths
        class Ipv4bfDoMplsteHeadCounters; //type: Bfd::Ipv4bfDoMplsteHeadCounters
        class SessionMibs; //type: Bfd::SessionMibs
        class Ipv6MultiHopSummary; //type: Bfd::Ipv6MultiHopSummary
        class LabelSummaryNodes; //type: Bfd::LabelSummaryNodes
        class Ipv6MultiHopSessionBriefs; //type: Bfd::Ipv6MultiHopSessionBriefs
        class SessionBriefs; //type: Bfd::SessionBriefs
        class Ipv6SingleHopNodeLocationSummaries; //type: Bfd::Ipv6SingleHopNodeLocationSummaries
        class Summary; //type: Bfd::Summary
        class Ipv4bfdMplsteTailNodeSummaries; //type: Bfd::Ipv4bfdMplsteTailNodeSummaries
        class Ipv4SingleHopLocationSummaries; //type: Bfd::Ipv4SingleHopLocationSummaries
        class Ipv4bfdMplsteHeadSummaryNodes; //type: Bfd::Ipv4bfdMplsteHeadSummaryNodes
        class LabelSessionDetails; //type: Bfd::LabelSessionDetails
        class Ipv6SingleHopSessionDetails; //type: Bfd::Ipv6SingleHopSessionDetails
        class Ipv4MultiHopCounters; //type: Bfd::Ipv4MultiHopCounters
        class SessionDetails; //type: Bfd::SessionDetails
        class Ipv4SingleHopMultiPaths; //type: Bfd::Ipv4SingleHopMultiPaths
        class Ipv4SingleHopSessionBriefs; //type: Bfd::Ipv4SingleHopSessionBriefs
        class Ipv6MultiHopCounters; //type: Bfd::Ipv6MultiHopCounters
        class Ipv6SingleHopLocationSummaries; //type: Bfd::Ipv6SingleHopLocationSummaries
        class LabelCounters; //type: Bfd::LabelCounters
        class Ipv4bfDoMplsteHeadSessionDetails; //type: Bfd::Ipv4bfDoMplsteHeadSessionDetails
        class RelationBriefs; //type: Bfd::RelationBriefs
        class ClientBriefs; //type: Bfd::ClientBriefs
        class Ipv4bfDoMplsteHeadMultiPaths; //type: Bfd::Ipv4bfDoMplsteHeadMultiPaths
        class RelationDetails; //type: Bfd::RelationDetails
        class Ipv4bfDoMplsteTailCounters; //type: Bfd::Ipv4bfDoMplsteTailCounters
        class Ipv6SingleHopSessionBriefs; //type: Bfd::Ipv6SingleHopSessionBriefs
        class Ipv4bfDoMplsteTailMultiPaths; //type: Bfd::Ipv4bfDoMplsteTailMultiPaths
        class Ipv4MultiHopMultiPaths; //type: Bfd::Ipv4MultiHopMultiPaths
        class Ipv4bfDoMplsteHeadSummary; //type: Bfd::Ipv4bfDoMplsteHeadSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs> label_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSummary> ipv4bf_do_mplste_tail_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopCounters> ipv6_single_hop_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails> client_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSummary> ipv4_single_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSummary> ipv6_single_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelMultiPaths> label_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails> ipv4_multi_hop_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails> ipv4_single_hop_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs> ipv4_multi_hop_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::GenericSummaries> generic_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopMultiPaths> ipv6_single_hop_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopNodeLocationSummaries> ipv4_single_hop_node_location_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummary> label_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadSessionBriefs> ipv4bf_do_mplste_head_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails> ipv4bf_do_mplste_tail_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopNodeLocationSummaries> ipv4_multi_hop_node_location_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionBriefs> ipv4bf_do_mplste_tail_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopNodeLocationSummaries> ipv6_multi_hop_node_location_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSummary> ipv4_multi_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopCounters> ipv4_single_hop_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails> ipv6_multi_hop_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopMultiPaths> ipv6_multi_hop_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadCounters> ipv4bf_do_mplste_head_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs> session_mibs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSummary> ipv6_multi_hop_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes> label_summary_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs> ipv6_multi_hop_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs> session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries> ipv6_single_hop_node_location_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfdMplsteTailNodeSummaries> ipv4bfd_mplste_tail_node_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries> ipv4_single_hop_location_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfdMplsteHeadSummaryNodes> ipv4bfd_mplste_head_summary_nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails> label_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails> ipv6_single_hop_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters> ipv4_multi_hop_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails> session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopMultiPaths> ipv4_single_hop_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs> ipv4_single_hop_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters> ipv6_multi_hop_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries> ipv6_single_hop_location_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters> label_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadSessionDetails> ipv4bf_do_mplste_head_session_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationBriefs> relation_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientBriefs> client_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadMultiPaths> ipv4bf_do_mplste_head_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails> relation_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailCounters> ipv4bf_do_mplste_tail_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs> ipv6_single_hop_session_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailMultiPaths> ipv4bf_do_mplste_tail_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopMultiPaths> ipv4_multi_hop_multi_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadSummary> ipv4bf_do_mplste_head_summary;
        
}; // Bfd


class Bfd::LabelSessionBriefs : public ydk::Entity
{
    public:
        LabelSessionBriefs();
        ~LabelSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LabelSessionBrief; //type: Bfd::LabelSessionBriefs::LabelSessionBrief

        ydk::YList label_session_brief;
        
}; // Bfd::LabelSessionBriefs


class Bfd::LabelSessionBriefs::LabelSessionBrief : public ydk::Entity
{
    public:
        LabelSessionBrief();
        ~LabelSessionBrief();

        bool has_data() const override;
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
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::LabelSessionBriefs::LabelSessionBrief


class Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation


class Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4bfDoMplsteTailSummary : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteTailSummary();
        ~Ipv4bfDoMplsteTailSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionState; //type: Bfd::Ipv4bfDoMplsteTailSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSummary::SessionState> session_state;
        
}; // Bfd::Ipv4bfDoMplsteTailSummary


class Bfd::Ipv4bfDoMplsteTailSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSummary::SessionState


class Bfd::Ipv6SingleHopCounters : public ydk::Entity
{
    public:
        Ipv6SingleHopCounters();
        ~Ipv6SingleHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6SingleHopPacketCounters; //type: Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters> ipv6_single_hop_packet_counters;
        
}; // Bfd::Ipv6SingleHopCounters


class Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters : public ydk::Entity
{
    public:
        Ipv6SingleHopPacketCounters();
        ~Ipv6SingleHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6SingleHopPacketCounter; //type: Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter

        ydk::YList ipv6_single_hop_packet_counter;
        
}; // Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters


class Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter : public ydk::Entity
{
    public:
        Ipv6SingleHopPacketCounter();
        ~Ipv6SingleHopPacketCounter();

        bool has_data() const override;
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
        ydk::YLeaf location; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter


class Bfd::Counters : public ydk::Entity
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

        class PacketCounters; //type: Bfd::Counters::PacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Counters::PacketCounters> packet_counters;
        
}; // Bfd::Counters


class Bfd::Counters::PacketCounters : public ydk::Entity
{
    public:
        PacketCounters();
        ~PacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PacketCounter; //type: Bfd::Counters::PacketCounters::PacketCounter

        ydk::YList packet_counter;
        
}; // Bfd::Counters::PacketCounters


class Bfd::Counters::PacketCounters::PacketCounter : public ydk::Entity
{
    public:
        PacketCounter();
        ~PacketCounter();

        bool has_data() const override;
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
        ydk::YLeaf location; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Counters::PacketCounters::PacketCounter


class Bfd::ClientDetails : public ydk::Entity
{
    public:
        ClientDetails();
        ~ClientDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClientDetail; //type: Bfd::ClientDetails::ClientDetail

        ydk::YList client_detail;
        
}; // Bfd::ClientDetails


class Bfd::ClientDetails::ClientDetail : public ydk::Entity
{
    public:
        ClientDetail();
        ~ClientDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf client_name; //type: string
        ydk::YLeaf recreate_time; //type: uint32
        class Brief; //type: Bfd::ClientDetails::ClientDetail::Brief
        class Flags; //type: Bfd::ClientDetails::ClientDetail::Flags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails::ClientDetail::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails::ClientDetail::Flags> flags;
        
}; // Bfd::ClientDetails::ClientDetail


class Bfd::ClientDetails::ClientDetail::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_xr; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf session_count; //type: uint32

}; // Bfd::ClientDetails::ClientDetail::Brief


class Bfd::ClientDetails::ClientDetail::Flags : public ydk::Entity
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

        ydk::YLeaf is_zombie_state; //type: int32
        ydk::YLeaf is_recreate_state; //type: int32

}; // Bfd::ClientDetails::ClientDetail::Flags


class Bfd::Ipv4SingleHopSummary : public ydk::Entity
{
    public:
        Ipv4SingleHopSummary();
        ~Ipv4SingleHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionState; //type: Bfd::Ipv4SingleHopSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv4SingleHopSummary


class Bfd::Ipv4SingleHopSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4SingleHopSummary::SessionState


class Bfd::Ipv6SingleHopSummary : public ydk::Entity
{
    public:
        Ipv6SingleHopSummary();
        ~Ipv6SingleHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionState; //type: Bfd::Ipv6SingleHopSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv6SingleHopSummary


class Bfd::Ipv6SingleHopSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv6SingleHopSummary::SessionState


class Bfd::LabelMultiPaths : public ydk::Entity
{
    public:
        LabelMultiPaths();
        ~LabelMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LabelMultiPath; //type: Bfd::LabelMultiPaths::LabelMultiPath

        ydk::YList label_multi_path;
        
}; // Bfd::LabelMultiPaths


class Bfd::LabelMultiPaths::LabelMultiPath : public ydk::Entity
{
    public:
        LabelMultiPath();
        ~LabelMultiPath();

        bool has_data() const override;
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
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf location; //type: string
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf incoming_label_xr; //type: uint32
        ydk::YLeaf session_interface_name; //type: string

}; // Bfd::LabelMultiPaths::LabelMultiPath


class Bfd::Ipv4MultiHopSessionDetails : public ydk::Entity
{
    public:
        Ipv4MultiHopSessionDetails();
        ~Ipv4MultiHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4MultiHopSessionDetail; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail

        ydk::YList ipv4_multi_hop_session_detail;
        
}; // Bfd::Ipv4MultiHopSessionDetails


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail : public ydk::Entity
{
    public:
        Ipv4MultiHopSessionDetail();
        ~Ipv4MultiHopSessionDetail();

        bool has_data() const override;
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
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        class StatusInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo> lsp_ping_info;
        ydk::YList owner_information;
        ydk::YList association_information;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation : public ydk::Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf to_up_state_count; //type: uint32
        ydk::YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        ydk::YLeaf remote_negotiated_interval; //type: uint32
        ydk::YLeaf latency_number; //type: uint32
        ydk::YLeaf latency_minimum; //type: uint32
        ydk::YLeaf latency_maximum; //type: uint32
        ydk::YLeaf latency_average; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8
        ydk::YLeaf seconds; //type: uint8

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState : public ydk::Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mp_download_state; //type: BfdMpDownloadState
        class ChangeTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo : public ydk::Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_ping_tx_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_error_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_last_rc; //type: string
        ydk::YLeaf lsp_ping_tx_last_error_rc; //type: string
        ydk::YLeaf lsp_ping_rx_last_discr; //type: uint32
        ydk::YLeaf lsp_ping_rx_count; //type: uint32
        ydk::YLeaf lsp_ping_rx_last_code; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_subcode; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
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
        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        ydk::YList owner_information;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4SingleHopSessionDetails : public ydk::Entity
{
    public:
        Ipv4SingleHopSessionDetails();
        ~Ipv4SingleHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4SingleHopSessionDetail; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail

        ydk::YList ipv4_single_hop_session_detail;
        
}; // Bfd::Ipv4SingleHopSessionDetails


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail : public ydk::Entity
{
    public:
        Ipv4SingleHopSessionDetail();
        ~Ipv4SingleHopSessionDetail();

        bool has_data() const override;
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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        class StatusInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo> lsp_ping_info;
        ydk::YList owner_information;
        ydk::YList association_information;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation : public ydk::Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf to_up_state_count; //type: uint32
        ydk::YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        ydk::YLeaf remote_negotiated_interval; //type: uint32
        ydk::YLeaf latency_number; //type: uint32
        ydk::YLeaf latency_minimum; //type: uint32
        ydk::YLeaf latency_maximum; //type: uint32
        ydk::YLeaf latency_average; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8
        ydk::YLeaf seconds; //type: uint8

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState : public ydk::Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mp_download_state; //type: BfdMpDownloadState
        class ChangeTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo : public ydk::Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_ping_tx_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_error_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_last_rc; //type: string
        ydk::YLeaf lsp_ping_tx_last_error_rc; //type: string
        ydk::YLeaf lsp_ping_rx_last_discr; //type: uint32
        ydk::YLeaf lsp_ping_rx_count; //type: uint32
        ydk::YLeaf lsp_ping_rx_last_code; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_subcode; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
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
        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        ydk::YList owner_information;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopSessionBriefs : public ydk::Entity
{
    public:
        Ipv4MultiHopSessionBriefs();
        ~Ipv4MultiHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4MultiHopSessionBrief; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief

        ydk::YList ipv4_multi_hop_session_brief;
        
}; // Bfd::Ipv4MultiHopSessionBriefs


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief : public ydk::Entity
{
    public:
        Ipv4MultiHopSessionBrief();
        ~Ipv4MultiHopSessionBrief();

        bool has_data() const override;
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
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::GenericSummaries : public ydk::Entity
{
    public:
        GenericSummaries();
        ~GenericSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class GenericSummary; //type: Bfd::GenericSummaries::GenericSummary

        ydk::YList generic_summary;
        
}; // Bfd::GenericSummaries


class Bfd::GenericSummaries::GenericSummary : public ydk::Entity
{
    public:
        GenericSummary();
        ~GenericSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf pps_allocated_value; //type: uint32
        ydk::YLeaf ppsmp_allocated_value; //type: uint32
        ydk::YLeaf pps_max_value; //type: uint32
        ydk::YLeaf ppsmp_max_value; //type: uint32
        ydk::YLeaf total_session_number; //type: uint32
        ydk::YLeaf mp_session_number; //type: uint32
        ydk::YLeaf max_session_number; //type: uint32
        ydk::YLeaf pps_all_percentage; //type: uint32
        ydk::YLeaf ppsmp_percentage; //type: uint32

}; // Bfd::GenericSummaries::GenericSummary


class Bfd::Ipv6SingleHopMultiPaths : public ydk::Entity
{
    public:
        Ipv6SingleHopMultiPaths();
        ~Ipv6SingleHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6SingleHopMultiPath; //type: Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath

        ydk::YList ipv6_single_hop_multi_path;
        
}; // Bfd::Ipv6SingleHopMultiPaths


class Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath : public ydk::Entity
{
    public:
        Ipv6SingleHopMultiPath();
        ~Ipv6SingleHopMultiPath();

        bool has_data() const override;
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
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf incoming_label_xr; //type: uint32
        ydk::YLeaf session_interface_name; //type: string

}; // Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath


class Bfd::Ipv4SingleHopNodeLocationSummaries : public ydk::Entity
{
    public:
        Ipv4SingleHopNodeLocationSummaries();
        ~Ipv4SingleHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4SingleHopNodeLocationSummary; //type: Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary

        ydk::YList ipv4_single_hop_node_location_summary;
        
}; // Bfd::Ipv4SingleHopNodeLocationSummaries


class Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary : public ydk::Entity
{
    public:
        Ipv4SingleHopNodeLocationSummary();
        ~Ipv4SingleHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary


class Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState


class Bfd::LabelSummary : public ydk::Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionState; //type: Bfd::LabelSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummary::SessionState> session_state;
        
}; // Bfd::LabelSummary


class Bfd::LabelSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::LabelSummary::SessionState


class Bfd::Ipv4bfDoMplsteHeadSessionBriefs : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteHeadSessionBriefs();
        ~Ipv4bfDoMplsteHeadSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4bfDoMplsteHeadSessionBrief; //type: Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief

        ydk::YList ipv4bf_do_mplste_head_session_brief;
        
}; // Bfd::Ipv4bfDoMplsteHeadSessionBriefs


class Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteHeadSessionBrief();
        ~Ipv4bfDoMplsteHeadSessionBrief();

        bool has_data() const override;
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
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf fe_ctype; //type: uint32
        ydk::YLeaf fec_subgroup_id; //type: uint32
        ydk::YLeaf feclspid; //type: uint32
        ydk::YLeaf fec_tunnel_id; //type: uint32
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_destination; //type: string
        ydk::YLeaf fecp2mpid; //type: uint32
        ydk::YLeaf fec_subgroup_originator; //type: string
        ydk::YLeaf fec_ctype; //type: uint32
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief


class Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation


class Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4bfDoMplsteTailSessionDetails : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteTailSessionDetails();
        ~Ipv4bfDoMplsteTailSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4bfDoMplsteTailSessionDetail; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail

        ydk::YList ipv4bf_do_mplste_tail_session_detail;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteTailSessionDetail();
        ~Ipv4bfDoMplsteTailSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf fe_ctype; //type: uint32
        ydk::YLeaf fec_subgroup_id; //type: uint32
        ydk::YLeaf feclspid; //type: uint32
        ydk::YLeaf fec_tunnel_id; //type: uint32
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_destination; //type: string
        ydk::YLeaf fecp2mpid; //type: uint32
        ydk::YLeaf fec_subgroup_originator; //type: string
        ydk::YLeaf fec_ctype; //type: uint32
        ydk::YLeaf location; //type: string
        class StatusInformation; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo> lsp_ping_info;
        ydk::YList owner_information;
        ydk::YList association_information;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation : public ydk::Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf to_up_state_count; //type: uint32
        ydk::YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        ydk::YLeaf remote_negotiated_interval; //type: uint32
        ydk::YLeaf latency_number; //type: uint32
        ydk::YLeaf latency_minimum; //type: uint32
        ydk::YLeaf latency_maximum; //type: uint32
        ydk::YLeaf latency_average; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8
        ydk::YLeaf seconds; //type: uint8

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState : public ydk::Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mp_download_state; //type: BfdMpDownloadState
        class ChangeTime; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo : public ydk::Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_ping_tx_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_error_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_last_rc; //type: string
        ydk::YLeaf lsp_ping_tx_last_error_rc; //type: string
        ydk::YLeaf lsp_ping_rx_last_discr; //type: uint32
        ydk::YLeaf lsp_ping_rx_count; //type: uint32
        ydk::YLeaf lsp_ping_rx_last_code; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_subcode; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime : public ydk::Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation : public ydk::Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
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
        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf local_discriminator; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress
        class OwnerInformation; //type: Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress> ip_destination_address;
        ydk::YList owner_information;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress : public ydk::Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress


class Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation : public ydk::Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf adjusted_interval; //type: uint32
        ydk::YLeaf adjusted_detection_multiplier; //type: uint32
        ydk::YLeaf name; //type: string

}; // Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopNodeLocationSummaries : public ydk::Entity
{
    public:
        Ipv4MultiHopNodeLocationSummaries();
        ~Ipv4MultiHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4MultiHopNodeLocationSummary; //type: Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary

        ydk::YList ipv4_multi_hop_node_location_summary;
        
}; // Bfd::Ipv4MultiHopNodeLocationSummaries


class Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary : public ydk::Entity
{
    public:
        Ipv4MultiHopNodeLocationSummary();
        ~Ipv4MultiHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary


class Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState


class Bfd::Ipv4bfDoMplsteTailSessionBriefs : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteTailSessionBriefs();
        ~Ipv4bfDoMplsteTailSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4bfDoMplsteTailSessionBrief; //type: Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief

        ydk::YList ipv4bf_do_mplste_tail_session_brief;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionBriefs


class Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief : public ydk::Entity
{
    public:
        Ipv4bfDoMplsteTailSessionBrief();
        ~Ipv4bfDoMplsteTailSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf incoming_label; //type: uint32
        ydk::YLeaf fe_ctype; //type: uint32
        ydk::YLeaf fec_subgroup_id; //type: uint32
        ydk::YLeaf feclspid; //type: uint32
        ydk::YLeaf fec_tunnel_id; //type: uint32
        ydk::YLeaf fec_extended_tunnel_id; //type: string
        ydk::YLeaf fec_source; //type: string
        ydk::YLeaf fec_destination; //type: string
        ydk::YLeaf fecp2mpid; //type: uint32
        ydk::YLeaf fec_subgroup_originator; //type: string
        ydk::YLeaf fec_ctype; //type: uint32
        ydk::YLeaf location; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf session_type; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief


class Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation


class Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopNodeLocationSummaries : public ydk::Entity
{
    public:
        Ipv6MultiHopNodeLocationSummaries();
        ~Ipv6MultiHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6MultiHopNodeLocationSummary; //type: Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary

        ydk::YList ipv6_multi_hop_node_location_summary;
        
}; // Bfd::Ipv6MultiHopNodeLocationSummaries


class Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary : public ydk::Entity
{
    public:
        Ipv6MultiHopNodeLocationSummary();
        ~Ipv6MultiHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary


class Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf standby_count; //type: uint32

}; // Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState


class Bfd::Ipv4MultiHopSummary : public ydk::Entity
{
    public:
        Ipv4MultiHopSummary();
        ~Ipv4MultiHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionState; //type: Bfd::Ipv4MultiHopSummary::SessionState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv4MultiHopSummary


class Bfd::Ipv4MultiHopSummary::SessionState : public ydk::Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf total_count; //type: uint32
        ydk::YLeaf down_count; //type: uint32
        ydk::YLeaf up_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4MultiHopSummary::SessionState


class Bfd::Ipv4SingleHopCounters : public ydk::Entity
{
    public:
        Ipv4SingleHopCounters();
        ~Ipv4SingleHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4SingleHopPacketCounters; //type: Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters> ipv4_single_hop_packet_counters;
        
}; // Bfd::Ipv4SingleHopCounters


class Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters : public ydk::Entity
{
    public:
        Ipv4SingleHopPacketCounters();
        ~Ipv4SingleHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4SingleHopPacketCounter; //type: Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter

        ydk::YList ipv4_single_hop_packet_counter;
        
}; // Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters


class Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter : public ydk::Entity
{
    public:
        Ipv4SingleHopPacketCounter();
        ~Ipv4SingleHopPacketCounter();

        bool has_data() const override;
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
        ydk::YLeaf location; //type: string
        ydk::YLeaf hello_transmit_count; //type: uint32
        ydk::YLeaf hello_receive_count; //type: uint32
        ydk::YLeaf echo_transmit_count; //type: uint32
        ydk::YLeaf echo_receive_count; //type: uint32
        ydk::YLeaf display_type; //type: BfdMgmtPktDisplay

}; // Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter


class Bfd::Ipv6MultiHopSessionDetails : public ydk::Entity
{
    public:
        Ipv6MultiHopSessionDetails();
        ~Ipv6MultiHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6MultiHopSessionDetail; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail

        ydk::YList ipv6_multi_hop_session_detail;
        
}; // Bfd::Ipv6MultiHopSessionDetails


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail : public ydk::Entity
{
    public:
        Ipv6MultiHopSessionDetail();
        ~Ipv6MultiHopSessionDetail();

        bool has_data() const override;
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
        ydk::YLeaf location; //type: string
        ydk::YLeaf vrf_name; //type: string
        class StatusInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation> status_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState> mp_download_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo> lsp_ping_info;
        ydk::YList owner_information;
        ydk::YList association_information;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation : public ydk::Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessiontype; //type: BfdSession
        ydk::YLeaf session_subtype; //type: string
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf local_discriminator; //type: uint32
        ydk::YLeaf remote_discriminator; //type: uint32
        ydk::YLeaf to_up_state_count; //type: uint32
        ydk::YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        ydk::YLeaf remote_negotiated_interval; //type: uint32
        ydk::YLeaf latency_number; //type: uint32
        ydk::YLeaf latency_minimum; //type: uint32
        ydk::YLeaf latency_maximum; //type: uint32
        ydk::YLeaf latency_average; //type: uint32
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf afi; //type: BfdAfId
        ydk::YLeaf dummy; //type: uint8
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange : public ydk::Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8
        ydk::YLeaf seconds; //type: uint8

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket : public ydk::Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket : public ydk::Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf diagnostic; //type: BfdMgmtSessionDiag
        ydk::YLeaf ihear_you; //type: int32
        ydk::YLeaf state; //type: BfdMgmtSessionState
        ydk::YLeaf demand; //type: int32
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf final_; //type: int32
        ydk::YLeaf control_plane_independent; //type: int32
        ydk::YLeaf authentication_present; //type: int32
        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf length; //type: uint32
        ydk::YLeaf my_discriminator; //type: uint32
        ydk::YLeaf your_discriminator; //type: uint32
        ydk::YLeaf desired_minimum_transmit_interval; //type: uint32
        ydk::YLeaf required_minimum_receive_interval; //type: uint32
        ydk::YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation : public ydk::Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public ydk::Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_remote_transmit_interval; //type: uint32
        ydk::YLeaf negotiated_local_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public ydk::Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf negotiated_transmit_interval; //type: uint32
        ydk::YLeaf detection_time; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public ydk::Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public ydk::Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics : public ydk::Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics : public ydk::Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32
        ydk::YLeaf average; //type: uint32
        ydk::YLeaf last; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState : public ydk::Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mp_download_state; //type: BfdMpDownloadState
        class ChangeTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime : public ydk::Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo : public ydk::Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsp_ping_tx_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_error_count; //type: uint32
        ydk::YLeaf lsp_ping_tx_last_rc; //type: string
        ydk::YLeaf lsp_ping_tx_last_error_rc; //type: string
        ydk::YLeaf lsp_ping_rx_last_discr; //type: uint32
        ydk::YLeaf lsp_ping_rx_count; //type: uint32
        ydk::YLeaf lsp_ping_rx_last_code; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_subcode; //type: uint8
        ydk::YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        
}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime : public ydk::Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public ydk::Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf seconds; //type: uint64
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime

class BfdSession : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf bundle_member;
        static const ydk::Enum::YLeaf bundle_interface;
        static const ydk::Enum::YLeaf state_inheriting;
        static const ydk::Enum::YLeaf bundle_vlan;
        static const ydk::Enum::YLeaf mpls_tp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf pseudowire_headend;
        static const ydk::Enum::YLeaf ip_single_hop;

};

class BfdAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_af_id_none;
        static const ydk::Enum::YLeaf bfd_af_id_ipv4;
        static const ydk::Enum::YLeaf bfd_af_id_ipv6;

};

class BfdMpDownloadState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_mp_download_none;
        static const ydk::Enum::YLeaf bfd_mp_download_no_lc;
        static const ydk::Enum::YLeaf bfd_mp_download_downloaded;
        static const ydk::Enum::YLeaf bfd_mp_download_ack;
        static const ydk::Enum::YLeaf bfd_mp_download_nack;
        static const ydk::Enum::YLeaf bfd_mp_download_delete;

};

class BfdMgmtSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_mgmt_session_state_admin_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_state_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_state_init;
        static const ydk::Enum::YLeaf bfd_mgmt_session_state_up;
        static const ydk::Enum::YLeaf bfd_mgmt_session_state_failing;
        static const ydk::Enum::YLeaf bfd_mgmt_session_state_unknown;

};

class BfdMgmtSessionDiag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_none;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_control_detect_expired;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_echo_function_failed;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_nb_or_signaled_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_fwding_plane_reset;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_path_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_conc_path_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_admin_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_rev_conc_path_down;
        static const ydk::Enum::YLeaf bfd_mgmt_session_diag_num;

};

class BfdMgmtPktDisplay : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_mgmt_pkt_display_type_none;
        static const ydk::Enum::YLeaf bfd_mgmt_pkt_display_type_bob_mbr;
        static const ydk::Enum::YLeaf bfd_mgmt_pkt_display_type_max;

};


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_0_ */

