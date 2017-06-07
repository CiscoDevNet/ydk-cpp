#ifndef _CISCO_IOS_XR_IP_BFD_OPER_0_
#define _CISCO_IOS_XR_IP_BFD_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_oper {

class Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class LabelSessionBriefs; //type: Bfd::LabelSessionBriefs
        class Ipv4BfDoMplsteTailSummary; //type: Bfd::Ipv4BfDoMplsteTailSummary
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
        class Ipv4BfDoMplsteHeadSessionBriefs; //type: Bfd::Ipv4BfDoMplsteHeadSessionBriefs
        class Ipv4BfDoMplsteTailSessionDetails; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails
        class Ipv4MultiHopNodeLocationSummaries; //type: Bfd::Ipv4MultiHopNodeLocationSummaries
        class Ipv4BfDoMplsteTailSessionBriefs; //type: Bfd::Ipv4BfDoMplsteTailSessionBriefs
        class Ipv6MultiHopNodeLocationSummaries; //type: Bfd::Ipv6MultiHopNodeLocationSummaries
        class Ipv4MultiHopSummary; //type: Bfd::Ipv4MultiHopSummary
        class Ipv4SingleHopCounters; //type: Bfd::Ipv4SingleHopCounters
        class Ipv6MultiHopSessionDetails; //type: Bfd::Ipv6MultiHopSessionDetails
        class Ipv6MultiHopMultiPaths; //type: Bfd::Ipv6MultiHopMultiPaths
        class Ipv4BfDoMplsteHeadCounters; //type: Bfd::Ipv4BfDoMplsteHeadCounters
        class SessionMibs; //type: Bfd::SessionMibs
        class Ipv6MultiHopSummary; //type: Bfd::Ipv6MultiHopSummary
        class LabelSummaryNodes; //type: Bfd::LabelSummaryNodes
        class Ipv6MultiHopSessionBriefs; //type: Bfd::Ipv6MultiHopSessionBriefs
        class SessionBriefs; //type: Bfd::SessionBriefs
        class Ipv6SingleHopNodeLocationSummaries; //type: Bfd::Ipv6SingleHopNodeLocationSummaries
        class Summary; //type: Bfd::Summary
        class Ipv4BfdMplsteTailNodeSummaries; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries
        class Ipv4SingleHopLocationSummaries; //type: Bfd::Ipv4SingleHopLocationSummaries
        class Ipv4BfdMplsteHeadSummaryNodes; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes
        class LabelSessionDetails; //type: Bfd::LabelSessionDetails
        class Ipv6SingleHopSessionDetails; //type: Bfd::Ipv6SingleHopSessionDetails
        class Ipv4MultiHopCounters; //type: Bfd::Ipv4MultiHopCounters
        class SessionDetails; //type: Bfd::SessionDetails
        class Ipv4SingleHopMultiPaths; //type: Bfd::Ipv4SingleHopMultiPaths
        class Ipv4SingleHopSessionBriefs; //type: Bfd::Ipv4SingleHopSessionBriefs
        class Ipv6MultiHopCounters; //type: Bfd::Ipv6MultiHopCounters
        class Ipv6SingleHopLocationSummaries; //type: Bfd::Ipv6SingleHopLocationSummaries
        class LabelCounters; //type: Bfd::LabelCounters
        class Ipv4BfDoMplsteHeadSessionDetails; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails
        class RelationBriefs; //type: Bfd::RelationBriefs
        class ClientBriefs; //type: Bfd::ClientBriefs
        class Ipv4BfDoMplsteHeadMultiPaths; //type: Bfd::Ipv4BfDoMplsteHeadMultiPaths
        class RelationDetails; //type: Bfd::RelationDetails
        class Ipv4BfDoMplsteTailCounters; //type: Bfd::Ipv4BfDoMplsteTailCounters
        class Ipv6SingleHopSessionBriefs; //type: Bfd::Ipv6SingleHopSessionBriefs
        class Ipv4BfDoMplsteTailMultiPaths; //type: Bfd::Ipv4BfDoMplsteTailMultiPaths
        class Ipv4MultiHopMultiPaths; //type: Bfd::Ipv4MultiHopMultiPaths
        class Ipv4BfDoMplsteHeadSummary; //type: Bfd::Ipv4BfDoMplsteHeadSummary

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientBriefs> client_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails> client_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::GenericSummaries> generic_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters> ipv4_multi_hop_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopMultiPaths> ipv4_multi_hop_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopNodeLocationSummaries> ipv4_multi_hop_node_location_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs> ipv4_multi_hop_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails> ipv4_multi_hop_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSummary> ipv4_multi_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopCounters> ipv4_single_hop_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries> ipv4_single_hop_location_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopMultiPaths> ipv4_single_hop_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopNodeLocationSummaries> ipv4_single_hop_node_location_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs> ipv4_single_hop_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails> ipv4_single_hop_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSummary> ipv4_single_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters> ipv4bf_do_mplste_head_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadMultiPaths> ipv4bf_do_mplste_head_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionBriefs> ipv4bf_do_mplste_head_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails> ipv4bf_do_mplste_head_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSummary> ipv4bf_do_mplste_head_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailCounters> ipv4bf_do_mplste_tail_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailMultiPaths> ipv4bf_do_mplste_tail_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionBriefs> ipv4bf_do_mplste_tail_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails> ipv4bf_do_mplste_tail_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSummary> ipv4bf_do_mplste_tail_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes> ipv4bfd_mplste_head_summary_nodes;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries> ipv4bfd_mplste_tail_node_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters> ipv6_multi_hop_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopMultiPaths> ipv6_multi_hop_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopNodeLocationSummaries> ipv6_multi_hop_node_location_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs> ipv6_multi_hop_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails> ipv6_multi_hop_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSummary> ipv6_multi_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopCounters> ipv6_single_hop_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries> ipv6_single_hop_location_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopMultiPaths> ipv6_single_hop_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries> ipv6_single_hop_node_location_summaries;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs> ipv6_single_hop_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails> ipv6_single_hop_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSummary> ipv6_single_hop_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters> label_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelMultiPaths> label_multi_paths;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs> label_session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails> label_session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummary> label_summary;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes> label_summary_nodes;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationBriefs> relation_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails> relation_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs> session_briefs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails> session_details;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs> session_mibs;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Summary> summary;
        
}; // Bfd


class Bfd::LabelSessionBriefs : public Entity
{
    public:
        LabelSessionBriefs();
        ~LabelSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSessionBrief; //type: Bfd::LabelSessionBriefs::LabelSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief> > label_session_brief;
        
}; // Bfd::LabelSessionBriefs


class Bfd::LabelSessionBriefs::LabelSessionBrief : public Entity
{
    public:
        LabelSessionBrief();
        ~LabelSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::LabelSessionBriefs::LabelSessionBrief


class Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation


class Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailSummary : public Entity
{
    public:
        Ipv4BfDoMplsteTailSummary();
        ~Ipv4BfDoMplsteTailSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionState; //type: Bfd::Ipv4BfDoMplsteTailSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSummary::SessionState> session_state;
        
}; // Bfd::Ipv4BfDoMplsteTailSummary


class Bfd::Ipv4BfDoMplsteTailSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSummary::SessionState


class Bfd::Ipv6SingleHopCounters : public Entity
{
    public:
        Ipv6SingleHopCounters();
        ~Ipv6SingleHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6SingleHopPacketCounters; //type: Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters> ipv6_single_hop_packet_counters;
        
}; // Bfd::Ipv6SingleHopCounters


class Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters : public Entity
{
    public:
        Ipv6SingleHopPacketCounters();
        ~Ipv6SingleHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6SingleHopPacketCounter; //type: Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter> > ipv6_single_hop_packet_counter;
        
}; // Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters


class Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter : public Entity
{
    public:
        Ipv6SingleHopPacketCounter();
        ~Ipv6SingleHopPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum

}; // Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter


class Bfd::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PacketCounters; //type: Bfd::Counters::PacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Counters::PacketCounters> packet_counters;
        
}; // Bfd::Counters


class Bfd::Counters::PacketCounters : public Entity
{
    public:
        PacketCounters();
        ~PacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PacketCounter; //type: Bfd::Counters::PacketCounters::PacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Counters::PacketCounters::PacketCounter> > packet_counter;
        
}; // Bfd::Counters::PacketCounters


class Bfd::Counters::PacketCounters::PacketCounter : public Entity
{
    public:
        PacketCounter();
        ~PacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum

}; // Bfd::Counters::PacketCounters::PacketCounter


class Bfd::ClientDetails : public Entity
{
    public:
        ClientDetails();
        ~ClientDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientDetail; //type: Bfd::ClientDetails::ClientDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails::ClientDetail> > client_detail;
        
}; // Bfd::ClientDetails


class Bfd::ClientDetails::ClientDetail : public Entity
{
    public:
        ClientDetail();
        ~ClientDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_name; //type: string
        YLeaf recreate_time; //type: uint32
        class Brief; //type: Bfd::ClientDetails::ClientDetail::Brief
        class Flags; //type: Bfd::ClientDetails::ClientDetail::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails::ClientDetail::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientDetails::ClientDetail::Flags> flags;
        
}; // Bfd::ClientDetails::ClientDetail


class Bfd::ClientDetails::ClientDetail::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name_xr; //type: string
        YLeaf node_id; //type: string
        YLeaf session_count; //type: uint32

}; // Bfd::ClientDetails::ClientDetail::Brief


class Bfd::ClientDetails::ClientDetail::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_zombie_state; //type: int32
        YLeaf is_recreate_state; //type: int32

}; // Bfd::ClientDetails::ClientDetail::Flags


class Bfd::Ipv4SingleHopSummary : public Entity
{
    public:
        Ipv4SingleHopSummary();
        ~Ipv4SingleHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionState; //type: Bfd::Ipv4SingleHopSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv4SingleHopSummary


class Bfd::Ipv4SingleHopSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4SingleHopSummary::SessionState


class Bfd::Ipv6SingleHopSummary : public Entity
{
    public:
        Ipv6SingleHopSummary();
        ~Ipv6SingleHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionState; //type: Bfd::Ipv6SingleHopSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv6SingleHopSummary


class Bfd::Ipv6SingleHopSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv6SingleHopSummary::SessionState


class Bfd::LabelMultiPaths : public Entity
{
    public:
        LabelMultiPaths();
        ~LabelMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelMultiPath; //type: Bfd::LabelMultiPaths::LabelMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelMultiPaths::LabelMultiPath> > label_multi_path;
        
}; // Bfd::LabelMultiPaths


class Bfd::LabelMultiPaths::LabelMultiPath : public Entity
{
    public:
        LabelMultiPath();
        ~LabelMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf location; //type: string
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string

}; // Bfd::LabelMultiPaths::LabelMultiPath


class Bfd::Ipv4MultiHopSessionDetails : public Entity
{
    public:
        Ipv4MultiHopSessionDetails();
        ~Ipv4MultiHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4MultiHopSessionDetail; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail> > ipv4_multi_hop_session_detail;
        
}; // Bfd::Ipv4MultiHopSessionDetails


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail : public Entity
{
    public:
        Ipv4MultiHopSessionDetail();
        ~Ipv4MultiHopSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        class StatusInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation> status_information;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfdfe_ctype; //type: BfdApiFecEnum
        class Dummy; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dummy; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf s2l_fec_subgroup_id; //type: uint16
        YLeaf s2l_fec_lsp_id; //type: uint16
        YLeaf s2l_fec_tunnel_id; //type: uint16
        YLeaf s2l_fec_extended_tunnel_id; //type: string
        YLeaf s2l_fec_source; //type: string
        YLeaf s2l_fec_dest; //type: string
        YLeaf s2l_fec_p2mp_id; //type: uint32
        YLeaf s2l_fec_subgroup_originator; //type: string
        YLeaf s2l_fec_ctype; //type: MplsLibCEnum
        YLeaf s2l_fec_vrf; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4SingleHopSessionDetails : public Entity
{
    public:
        Ipv4SingleHopSessionDetails();
        ~Ipv4SingleHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4SingleHopSessionDetail; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail> > ipv4_single_hop_session_detail;
        
}; // Bfd::Ipv4SingleHopSessionDetails


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail : public Entity
{
    public:
        Ipv4SingleHopSessionDetail();
        ~Ipv4SingleHopSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        class StatusInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation> status_information;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfdfe_ctype; //type: BfdApiFecEnum
        class Dummy; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dummy; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf s2l_fec_subgroup_id; //type: uint16
        YLeaf s2l_fec_lsp_id; //type: uint16
        YLeaf s2l_fec_tunnel_id; //type: uint16
        YLeaf s2l_fec_extended_tunnel_id; //type: string
        YLeaf s2l_fec_source; //type: string
        YLeaf s2l_fec_dest; //type: string
        YLeaf s2l_fec_p2mp_id; //type: uint32
        YLeaf s2l_fec_subgroup_originator; //type: string
        YLeaf s2l_fec_ctype; //type: MplsLibCEnum
        YLeaf s2l_fec_vrf; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopSessionBriefs : public Entity
{
    public:
        Ipv4MultiHopSessionBriefs();
        ~Ipv4MultiHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4MultiHopSessionBrief; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief> > ipv4_multi_hop_session_brief;
        
}; // Bfd::Ipv4MultiHopSessionBriefs


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief : public Entity
{
    public:
        Ipv4MultiHopSessionBrief();
        ~Ipv4MultiHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::GenericSummaries : public Entity
{
    public:
        GenericSummaries();
        ~GenericSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericSummary; //type: Bfd::GenericSummaries::GenericSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::GenericSummaries::GenericSummary> > generic_summary;
        
}; // Bfd::GenericSummaries


class Bfd::GenericSummaries::GenericSummary : public Entity
{
    public:
        GenericSummary();
        ~GenericSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf pps_allocated_value; //type: uint32
        YLeaf ppsmp_allocated_value; //type: uint32
        YLeaf pps_max_value; //type: uint32
        YLeaf ppsmp_max_value; //type: uint32
        YLeaf total_session_number; //type: uint32
        YLeaf mp_session_number; //type: uint32
        YLeaf max_session_number; //type: uint32

}; // Bfd::GenericSummaries::GenericSummary


class Bfd::Ipv6SingleHopMultiPaths : public Entity
{
    public:
        Ipv6SingleHopMultiPaths();
        ~Ipv6SingleHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6SingleHopMultiPath; //type: Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath> > ipv6_single_hop_multi_path;
        
}; // Bfd::Ipv6SingleHopMultiPaths


class Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath : public Entity
{
    public:
        Ipv6SingleHopMultiPath();
        ~Ipv6SingleHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string

}; // Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath


class Bfd::Ipv4SingleHopNodeLocationSummaries : public Entity
{
    public:
        Ipv4SingleHopNodeLocationSummaries();
        ~Ipv4SingleHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4SingleHopNodeLocationSummary; //type: Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary> > ipv4_single_hop_node_location_summary;
        
}; // Bfd::Ipv4SingleHopNodeLocationSummaries


class Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary : public Entity
{
    public:
        Ipv4SingleHopNodeLocationSummary();
        ~Ipv4SingleHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary


class Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState


class Bfd::LabelSummary : public Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionState; //type: Bfd::LabelSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummary::SessionState> session_state;
        
}; // Bfd::LabelSummary


class Bfd::LabelSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::LabelSummary::SessionState


class Bfd::Ipv4BfDoMplsteHeadSessionBriefs : public Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionBriefs();
        ~Ipv4BfDoMplsteHeadSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfDoMplsteHeadSessionBrief; //type: Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief> > ipv4bf_do_mplste_head_session_brief;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionBriefs


class Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief : public Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionBrief();
        ~Ipv4BfDoMplsteHeadSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf fe_ctype; //type: int32
        YLeaf fec_subgroup_id; //type: int32
        YLeaf feclspid; //type: int32
        YLeaf fec_tunnel_id; //type: int32
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_destination; //type: string
        YLeaf fecp2mpid; //type: int32
        YLeaf fec_subgroup_originator; //type: string
        YLeaf fec_ctype; //type: int32
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief


class Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation


class Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailSessionDetails : public Entity
{
    public:
        Ipv4BfDoMplsteTailSessionDetails();
        ~Ipv4BfDoMplsteTailSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfDoMplsteTailSessionDetail; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail> > ipv4bf_do_mplste_tail_session_detail;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail : public Entity
{
    public:
        Ipv4BfDoMplsteTailSessionDetail();
        ~Ipv4BfDoMplsteTailSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf fe_ctype; //type: int32
        YLeaf fec_subgroup_id; //type: int32
        YLeaf feclspid; //type: int32
        YLeaf fec_tunnel_id; //type: int32
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_destination; //type: string
        YLeaf fecp2mpid; //type: int32
        YLeaf fec_subgroup_originator; //type: string
        YLeaf fec_ctype; //type: int32
        YLeaf location; //type: string
        class StatusInformation; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation> status_information;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf to_up_state_count; //type: uint32
        YLeaf desired_minimum_echo_transmit_interval; //type: uint32
        YLeaf remote_negotiated_interval; //type: uint32
        YLeaf latency_number; //type: uint32
        YLeaf latency_minimum; //type: uint32
        YLeaf latency_maximum; //type: uint32
        YLeaf latency_average; //type: uint32
        YLeaf node_id; //type: string
        YLeaf internal_label; //type: uint32
        class SourceAddress; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket> transmit_packet;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        YLeaf diagnostic; //type: BfdMgmtSessionDiagEnum
        YLeaf ihear_you; //type: int32
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf demand; //type: int32
        YLeaf poll; //type: int32
        YLeaf final_; //type: int32
        YLeaf control_plane_independent; //type: int32
        YLeaf authentication_present; //type: int32
        YLeaf detection_multiplier; //type: uint32
        YLeaf length; //type: uint32
        YLeaf my_discriminator; //type: uint32
        YLeaf your_discriminator; //type: uint32
        YLeaf desired_minimum_transmit_interval; //type: uint32
        YLeaf required_minimum_receive_interval; //type: uint32
        YLeaf required_minimum_echo_receive_interval; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum
        class ChangeTime; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime> change_time;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string
        class LspPingTxLastTime; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32
        class SessionKey; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey> session_key;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32
        class IpDestinationAddress; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfdfe_ctype; //type: BfdApiFecEnum
        class Dummy; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dummy; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf s2l_fec_subgroup_id; //type: uint16
        YLeaf s2l_fec_lsp_id; //type: uint16
        YLeaf s2l_fec_tunnel_id; //type: uint16
        YLeaf s2l_fec_extended_tunnel_id; //type: string
        YLeaf s2l_fec_source; //type: string
        YLeaf s2l_fec_dest; //type: string
        YLeaf s2l_fec_p2mp_id; //type: uint32
        YLeaf s2l_fec_subgroup_originator; //type: string
        YLeaf s2l_fec_ctype; //type: MplsLibCEnum
        YLeaf s2l_fec_vrf; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string

}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopNodeLocationSummaries : public Entity
{
    public:
        Ipv4MultiHopNodeLocationSummaries();
        ~Ipv4MultiHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4MultiHopNodeLocationSummary; //type: Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary> > ipv4_multi_hop_node_location_summary;
        
}; // Bfd::Ipv4MultiHopNodeLocationSummaries


class Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary : public Entity
{
    public:
        Ipv4MultiHopNodeLocationSummary();
        ~Ipv4MultiHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary


class Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState


class Bfd::Ipv4BfDoMplsteTailSessionBriefs : public Entity
{
    public:
        Ipv4BfDoMplsteTailSessionBriefs();
        ~Ipv4BfDoMplsteTailSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4BfDoMplsteTailSessionBrief; //type: Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief> > ipv4bf_do_mplste_tail_session_brief;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionBriefs


class Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief : public Entity
{
    public:
        Ipv4BfDoMplsteTailSessionBrief();
        ~Ipv4BfDoMplsteTailSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf fe_ctype; //type: int32
        YLeaf fec_subgroup_id; //type: int32
        YLeaf feclspid; //type: int32
        YLeaf fec_tunnel_id; //type: int32
        YLeaf fec_extended_tunnel_id; //type: string
        YLeaf fec_source; //type: string
        YLeaf fec_destination; //type: string
        YLeaf fecp2mpid; //type: int32
        YLeaf fec_subgroup_originator; //type: string
        YLeaf fec_ctype; //type: int32
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32
        class StatusBriefInformation; //type: Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation> status_brief_information;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief


class Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsyncIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;
        
}; // Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation


class Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopNodeLocationSummaries : public Entity
{
    public:
        Ipv6MultiHopNodeLocationSummaries();
        ~Ipv6MultiHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6MultiHopNodeLocationSummary; //type: Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary> > ipv6_multi_hop_node_location_summary;
        
}; // Bfd::Ipv6MultiHopNodeLocationSummaries


class Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary : public Entity
{
    public:
        Ipv6MultiHopNodeLocationSummary();
        ~Ipv6MultiHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location; //type: string
        class SessionState; //type: Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState> session_state;
        
}; // Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary


class Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32

}; // Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState


class Bfd::Ipv4MultiHopSummary : public Entity
{
    public:
        Ipv4MultiHopSummary();
        ~Ipv4MultiHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionState; //type: Bfd::Ipv4MultiHopSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopSummary::SessionState> session_state;
        
}; // Bfd::Ipv4MultiHopSummary


class Bfd::Ipv4MultiHopSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32

}; // Bfd::Ipv4MultiHopSummary::SessionState


class Bfd::Ipv4SingleHopCounters : public Entity
{
    public:
        Ipv4SingleHopCounters();
        ~Ipv4SingleHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4SingleHopPacketCounters; //type: Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters> ipv4_single_hop_packet_counters;
        
}; // Bfd::Ipv4SingleHopCounters


class Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters : public Entity
{
    public:
        Ipv4SingleHopPacketCounters();
        ~Ipv4SingleHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4SingleHopPacketCounter; //type: Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter> > ipv4_single_hop_packet_counter;
        
}; // Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters


class Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter : public Entity
{
    public:
        Ipv4SingleHopPacketCounter();
        ~Ipv4SingleHopPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum

}; // Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter


class Bfd::Ipv6MultiHopSessionDetails : public Entity
{
    public:
        Ipv6MultiHopSessionDetails();
        ~Ipv6MultiHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6MultiHopSessionDetail; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail> > ipv6_multi_hop_session_detail;
        
}; // Bfd::Ipv6MultiHopSessionDetails

class BfdApiFecEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_api_fec_type_none;
        static const Enum::YLeaf bfd_api_fec_type_p2p_te;

};

class BfdSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf undefined;
        static const Enum::YLeaf bundle_member;
        static const Enum::YLeaf bundle_interface;
        static const Enum::YLeaf state_inheriting;
        static const Enum::YLeaf bundle_vlan;
        static const Enum::YLeaf mpls_tp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf pseudowire_headend;
        static const Enum::YLeaf ip_single_hop;

};

class BfdAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_af_id_none;
        static const Enum::YLeaf bfd_af_id_ipv4;
        static const Enum::YLeaf bfd_af_id_ipv6;

};

class BfdMpDownloadStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_mp_download_none;
        static const Enum::YLeaf bfd_mp_download_no_lc;
        static const Enum::YLeaf bfd_mp_download_downloaded;
        static const Enum::YLeaf bfd_mp_download_ack;
        static const Enum::YLeaf bfd_mp_download_nack;
        static const Enum::YLeaf bfd_mp_download_delete;

};

class BfdMgmtSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_mgmt_session_state_admin_down;
        static const Enum::YLeaf bfd_mgmt_session_state_down;
        static const Enum::YLeaf bfd_mgmt_session_state_init;
        static const Enum::YLeaf bfd_mgmt_session_state_up;
        static const Enum::YLeaf bfd_mgmt_session_state_failing;
        static const Enum::YLeaf bfd_mgmt_session_state_unknown;

};

class BfdMgmtSessionDiagEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_mgmt_session_diag_none;
        static const Enum::YLeaf bfd_mgmt_session_diag_control_detect_expired;
        static const Enum::YLeaf bfd_mgmt_session_diag_echo_function_failed;
        static const Enum::YLeaf bfd_mgmt_session_diag_nb_or_signaled_down;
        static const Enum::YLeaf bfd_mgmt_session_diag_fwding_plane_reset;
        static const Enum::YLeaf bfd_mgmt_session_diag_path_down;
        static const Enum::YLeaf bfd_mgmt_session_diag_conc_path_down;
        static const Enum::YLeaf bfd_mgmt_session_diag_admin_down;
        static const Enum::YLeaf bfd_mgmt_session_diag_rev_conc_path_down;
        static const Enum::YLeaf bfd_mgmt_session_diag_num;

};

class BfdMgmtPktDisplayEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_mgmt_pkt_display_type_none;
        static const Enum::YLeaf bfd_mgmt_pkt_display_type_bob_mbr;
        static const Enum::YLeaf bfd_mgmt_pkt_display_type_max;

};

class MplsLibCEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_lib_c_type_null;
        static const Enum::YLeaf mpls_lib_c_type_ipv4;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_p2p_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv6_p2p_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_uni;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_p2mp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv6_p2mp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv4_tp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_ipv6_tp_tunnel;
        static const Enum::YLeaf mpls_lib_c_type_p2p_binding_label;

};


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_0_ */

