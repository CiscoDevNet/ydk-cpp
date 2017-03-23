#ifndef _CISCO_IOS_XR_IP_BFD_OPER_
#define _CISCO_IOS_XR_IP_BFD_OPER_

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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6MultiHopSessionDetail; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail> > ipv6_multi_hop_session_detail;


}; // Bfd::Ipv6MultiHopSessionDetails


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail : public Entity
{
    public:
        Ipv6MultiHopSessionDetail();
        ~Ipv6MultiHopSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string

        class StatusInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation> status_information;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class SourceAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum

        class ChangeTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime> change_time;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string

        class LspPingTxLastTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32

        class SessionKey; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey> session_key;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32

        class IpDestinationAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfdfe_ctype; //type: BfdApiFecEnum

        class Dummy; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;


}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv6MultiHopMultiPaths : public Entity
{
    public:
        Ipv6MultiHopMultiPaths();
        ~Ipv6MultiHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6MultiHopMultiPath; //type: Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath> > ipv6_multi_hop_multi_path;


}; // Bfd::Ipv6MultiHopMultiPaths


class Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath : public Entity
{
    public:
        Ipv6MultiHopMultiPath();
        ~Ipv6MultiHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string



}; // Bfd::Ipv6MultiHopMultiPaths::Ipv6MultiHopMultiPath


class Bfd::Ipv4BfDoMplsteHeadCounters : public Entity
{
    public:
        Ipv4BfDoMplsteHeadCounters();
        ~Ipv4BfDoMplsteHeadCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteHeadPacketCounters; //type: Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters> ipv4bf_do_mplste_head_packet_counters;


}; // Bfd::Ipv4BfDoMplsteHeadCounters


class Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters : public Entity
{
    public:
        Ipv4BfDoMplsteHeadPacketCounters();
        ~Ipv4BfDoMplsteHeadPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteHeadPacketCounter; //type: Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter> > ipv4bf_do_mplste_head_packet_counter;


}; // Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters


class Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter : public Entity
{
    public:
        Ipv4BfDoMplsteHeadPacketCounter();
        ~Ipv4BfDoMplsteHeadPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf location; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum



}; // Bfd::Ipv4BfDoMplsteHeadCounters::Ipv4BfDoMplsteHeadPacketCounters::Ipv4BfDoMplsteHeadPacketCounter


class Bfd::SessionMibs : public Entity
{
    public:
        SessionMibs();
        ~SessionMibs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionMib; //type: Bfd::SessionMibs::SessionMib

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs::SessionMib> > session_mib;


}; // Bfd::SessionMibs


class Bfd::SessionMibs::SessionMib : public Entity
{
    public:
        SessionMib();
        ~SessionMib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf discriminator; //type: int32
        YLeaf local_discriminator; //type: uint32
        YLeaf remote_discriminator; //type: uint32
        YLeaf sessionversion; //type: uint32
        YLeaf session_state; //type: uint32
        YLeaf trap_bitmap; //type: uint32
        YLeaf pkt_in; //type: uint64
        YLeaf pkt_out; //type: uint64
        YLeaf last_up_time_sec; //type: uint64
        YLeaf last_up_time_nsec; //type: uint32
        YLeaf last_down_time_sec; //type: uint64
        YLeaf last_down_time_nsec; //type: uint32
        YLeaf last_down_diag; //type: BfdMgmtSessionDiagEnum
        YLeaf up_counter; //type: uint32
        YLeaf last_time_cached; //type: uint64
        YLeaf interface_name; //type: string
        YLeaf int_handle; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf desired_min_tx_interval; //type: uint32
        YLeaf required_min_rx_interval; //type: uint32
        YLeaf required_min_rx_echo_interval; //type: uint32

        class DestAddress; //type: Bfd::SessionMibs::SessionMib::DestAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionMibs::SessionMib::DestAddress> dest_address;


}; // Bfd::SessionMibs::SessionMib


class Bfd::SessionMibs::SessionMib::DestAddress : public Entity
{
    public:
        DestAddress();
        ~DestAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::SessionMibs::SessionMib::DestAddress


class Bfd::Ipv6MultiHopSummary : public Entity
{
    public:
        Ipv6MultiHopSummary();
        ~Ipv6MultiHopSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionState; //type: Bfd::Ipv6MultiHopSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSummary::SessionState> session_state;


}; // Bfd::Ipv6MultiHopSummary


class Bfd::Ipv6MultiHopSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32



}; // Bfd::Ipv6MultiHopSummary::SessionState


class Bfd::LabelSummaryNodes : public Entity
{
    public:
        LabelSummaryNodes();
        ~LabelSummaryNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelSummaryNode; //type: Bfd::LabelSummaryNodes::LabelSummaryNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes::LabelSummaryNode> > label_summary_node;


}; // Bfd::LabelSummaryNodes


class Bfd::LabelSummaryNodes::LabelSummaryNode : public Entity
{
    public:
        LabelSummaryNode();
        ~LabelSummaryNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location_name; //type: string

        class SessionState; //type: Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState> session_state;


}; // Bfd::LabelSummaryNodes::LabelSummaryNode


class Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32



}; // Bfd::LabelSummaryNodes::LabelSummaryNode::SessionState


class Bfd::Ipv6MultiHopSessionBriefs : public Entity
{
    public:
        Ipv6MultiHopSessionBriefs();
        ~Ipv6MultiHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6MultiHopSessionBrief; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief> > ipv6_multi_hop_session_brief;


}; // Bfd::Ipv6MultiHopSessionBriefs


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief : public Entity
{
    public:
        Ipv6MultiHopSessionBrief();
        ~Ipv6MultiHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32

        class StatusBriefInformation; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation> status_brief_information;


}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6MultiHopSessionBriefs::Ipv6MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::SessionBriefs : public Entity
{
    public:
        SessionBriefs();
        ~SessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionBrief; //type: Bfd::SessionBriefs::SessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief> > session_brief;


}; // Bfd::SessionBriefs


class Bfd::SessionBriefs::SessionBrief : public Entity
{
    public:
        SessionBrief();
        ~SessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32

        class StatusBriefInformation; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation> status_brief_information;


}; // Bfd::SessionBriefs::SessionBrief


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::SessionBriefs::SessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6SingleHopNodeLocationSummaries : public Entity
{
    public:
        Ipv6SingleHopNodeLocationSummaries();
        ~Ipv6SingleHopNodeLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6SingleHopNodeLocationSummary; //type: Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary> > ipv6_single_hop_node_location_summary;


}; // Bfd::Ipv6SingleHopNodeLocationSummaries


class Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary : public Entity
{
    public:
        Ipv6SingleHopNodeLocationSummary();
        ~Ipv6SingleHopNodeLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location; //type: string

        class SessionState; //type: Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState> session_state;


}; // Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary


class Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32



}; // Bfd::Ipv6SingleHopNodeLocationSummaries::Ipv6SingleHopNodeLocationSummary::SessionState


class Bfd::Summary : public Entity
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



        class SessionState; //type: Bfd::Summary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Summary::SessionState> session_state;


}; // Bfd::Summary


class Bfd::Summary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32



}; // Bfd::Summary::SessionState


class Bfd::Ipv4BfdMplsteTailNodeSummaries : public Entity
{
    public:
        Ipv4BfdMplsteTailNodeSummaries();
        ~Ipv4BfdMplsteTailNodeSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfdMplsteTailNodeSummary; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary> > ipv4bfd_mplste_tail_node_summary;


}; // Bfd::Ipv4BfdMplsteTailNodeSummaries


class Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary : public Entity
{
    public:
        Ipv4BfdMplsteTailNodeSummary();
        ~Ipv4BfdMplsteTailNodeSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location_name; //type: string

        class SessionState; //type: Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState> session_state;


}; // Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary


class Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32



}; // Bfd::Ipv4BfdMplsteTailNodeSummaries::Ipv4BfdMplsteTailNodeSummary::SessionState


class Bfd::Ipv4SingleHopLocationSummaries : public Entity
{
    public:
        Ipv4SingleHopLocationSummaries();
        ~Ipv4SingleHopLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4SingleHopLocationSummary; //type: Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary> > ipv4_single_hop_location_summary;


}; // Bfd::Ipv4SingleHopLocationSummaries


class Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary : public Entity
{
    public:
        Ipv4SingleHopLocationSummary();
        ~Ipv4SingleHopLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location_name; //type: string

        class SessionState; //type: Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState> session_state;


}; // Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary


class Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32



}; // Bfd::Ipv4SingleHopLocationSummaries::Ipv4SingleHopLocationSummary::SessionState


class Bfd::Ipv4BfdMplsteHeadSummaryNodes : public Entity
{
    public:
        Ipv4BfdMplsteHeadSummaryNodes();
        ~Ipv4BfdMplsteHeadSummaryNodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfdMplsteHeadSummaryNode; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode> > ipv4bfd_mplste_head_summary_node;


}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes


class Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode : public Entity
{
    public:
        Ipv4BfdMplsteHeadSummaryNode();
        ~Ipv4BfdMplsteHeadSummaryNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location_name; //type: string

        class SessionState; //type: Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState> session_state;


}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode


class Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32



}; // Bfd::Ipv4BfdMplsteHeadSummaryNodes::Ipv4BfdMplsteHeadSummaryNode::SessionState


class Bfd::LabelSessionDetails : public Entity
{
    public:
        LabelSessionDetails();
        ~LabelSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelSessionDetail; //type: Bfd::LabelSessionDetails::LabelSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail> > label_session_detail;


}; // Bfd::LabelSessionDetails


class Bfd::LabelSessionDetails::LabelSessionDetail : public Entity
{
    public:
        LabelSessionDetail();
        ~LabelSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf incoming_label; //type: int32
        YLeaf location; //type: string

        class StatusInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation> status_information;


}; // Bfd::LabelSessionDetails::LabelSessionDetail


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class SourceAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket> transmit_packet;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::SourceAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::LastStateChange


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::TransmitPacket


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::ReceivePacket


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum

        class ChangeTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime> change_time;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState


class Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::MpDownloadState::ChangeTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string

        class LspPingTxLastTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::LabelSessionDetails::LabelSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::OwnerInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32

        class SessionKey; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey> session_key;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32

        class IpDestinationAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfdfe_ctype; //type: BfdApiFecEnum

        class Dummy; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;


}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::LabelSessionDetails::LabelSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv6SingleHopSessionDetails : public Entity
{
    public:
        Ipv6SingleHopSessionDetails();
        ~Ipv6SingleHopSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6SingleHopSessionDetail; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail> > ipv6_single_hop_session_detail;


}; // Bfd::Ipv6SingleHopSessionDetails


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail : public Entity
{
    public:
        Ipv6SingleHopSessionDetail();
        ~Ipv6SingleHopSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string

        class StatusInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation> status_information;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class SourceAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket> transmit_packet;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum

        class ChangeTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime> change_time;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string

        class LspPingTxLastTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::OwnerInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32

        class SessionKey; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey> session_key;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32

        class IpDestinationAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfdfe_ctype; //type: BfdApiFecEnum

        class Dummy; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;


}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::Ipv6SingleHopSessionDetails::Ipv6SingleHopSessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4MultiHopCounters : public Entity
{
    public:
        Ipv4MultiHopCounters();
        ~Ipv4MultiHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4MultiHopPacketCounters; //type: Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters> ipv4_multi_hop_packet_counters;


}; // Bfd::Ipv4MultiHopCounters


class Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters : public Entity
{
    public:
        Ipv4MultiHopPacketCounters();
        ~Ipv4MultiHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4MultiHopPacketCounter; //type: Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter> > ipv4_multi_hop_packet_counter;


}; // Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters


class Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter : public Entity
{
    public:
        Ipv4MultiHopPacketCounter();
        ~Ipv4MultiHopPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum



}; // Bfd::Ipv4MultiHopCounters::Ipv4MultiHopPacketCounters::Ipv4MultiHopPacketCounter


class Bfd::SessionDetails : public Entity
{
    public:
        SessionDetails();
        ~SessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionDetail; //type: Bfd::SessionDetails::SessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail> > session_detail;


}; // Bfd::SessionDetails


class Bfd::SessionDetails::SessionDetail : public Entity
{
    public:
        SessionDetail();
        ~SessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string

        class StatusInformation; //type: Bfd::SessionDetails::SessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::SessionDetails::SessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::SessionDetails::SessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation> status_information;


}; // Bfd::SessionDetails::SessionDetail


class Bfd::SessionDetails::SessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class SourceAddress; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket> transmit_packet;


}; // Bfd::SessionDetails::SessionDetail::StatusInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::SourceAddress


class Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::LastStateChange


class Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::TransmitPacket


class Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::ReceivePacket


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::SessionDetails::SessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum

        class ChangeTime; //type: Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime> change_time;


}; // Bfd::SessionDetails::SessionDetail::MpDownloadState


class Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::MpDownloadState::ChangeTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string

        class LspPingTxLastTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;


}; // Bfd::SessionDetails::SessionDetail::LspPingInfo


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::SessionDetails::SessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::SessionDetails::SessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::SessionDetails::SessionDetail::OwnerInformation


class Bfd::SessionDetails::SessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32

        class SessionKey; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey> session_key;


}; // Bfd::SessionDetails::SessionDetail::AssociationInformation


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32

        class IpDestinationAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;


}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfdfe_ctype; //type: BfdApiFecEnum

        class Dummy; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;


}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4SingleHopMultiPaths : public Entity
{
    public:
        Ipv4SingleHopMultiPaths();
        ~Ipv4SingleHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4SingleHopMultiPath; //type: Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath> > ipv4_single_hop_multi_path;


}; // Bfd::Ipv4SingleHopMultiPaths


class Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath : public Entity
{
    public:
        Ipv4SingleHopMultiPath();
        ~Ipv4SingleHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string



}; // Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath


class Bfd::Ipv4SingleHopSessionBriefs : public Entity
{
    public:
        Ipv4SingleHopSessionBriefs();
        ~Ipv4SingleHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4SingleHopSessionBrief; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief> > ipv4_single_hop_session_brief;


}; // Bfd::Ipv4SingleHopSessionBriefs


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief : public Entity
{
    public:
        Ipv4SingleHopSessionBrief();
        ~Ipv4SingleHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32

        class StatusBriefInformation; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation> status_brief_information;


}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv6MultiHopCounters : public Entity
{
    public:
        Ipv6MultiHopCounters();
        ~Ipv6MultiHopCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6MultiHopPacketCounters; //type: Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters> ipv6_multi_hop_packet_counters;


}; // Bfd::Ipv6MultiHopCounters


class Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters : public Entity
{
    public:
        Ipv6MultiHopPacketCounters();
        ~Ipv6MultiHopPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6MultiHopPacketCounter; //type: Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter> > ipv6_multi_hop_packet_counter;


}; // Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters


class Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter : public Entity
{
    public:
        Ipv6MultiHopPacketCounter();
        ~Ipv6MultiHopPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum



}; // Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter


class Bfd::Ipv6SingleHopLocationSummaries : public Entity
{
    public:
        Ipv6SingleHopLocationSummaries();
        ~Ipv6SingleHopLocationSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6SingleHopLocationSummary; //type: Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary> > ipv6_single_hop_location_summary;


}; // Bfd::Ipv6SingleHopLocationSummaries


class Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary : public Entity
{
    public:
        Ipv6SingleHopLocationSummary();
        ~Ipv6SingleHopLocationSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location_name; //type: string

        class SessionState; //type: Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState> session_state;


}; // Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary


class Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf unknown_count; //type: uint32
        YLeaf retry_count; //type: uint32
        YLeaf standby_count; //type: uint32



}; // Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState


class Bfd::LabelCounters : public Entity
{
    public:
        LabelCounters();
        ~LabelCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelPacketCounters; //type: Bfd::LabelCounters::LabelPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters::LabelPacketCounters> label_packet_counters;


}; // Bfd::LabelCounters


class Bfd::LabelCounters::LabelPacketCounters : public Entity
{
    public:
        LabelPacketCounters();
        ~LabelPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelPacketCounter; //type: Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter> > label_packet_counter;


}; // Bfd::LabelCounters::LabelPacketCounters


class Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter : public Entity
{
    public:
        LabelPacketCounter();
        ~LabelPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf location; //type: string
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum



}; // Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter


class Bfd::Ipv4BfDoMplsteHeadSessionDetails : public Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionDetails();
        ~Ipv4BfDoMplsteHeadSessionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteHeadSessionDetail; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail> > ipv4bf_do_mplste_head_session_detail;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail : public Entity
{
    public:
        Ipv4BfDoMplsteHeadSessionDetail();
        ~Ipv4BfDoMplsteHeadSessionDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class StatusInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation
        class MpDownloadState; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState
        class LspPingInfo; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo
        class OwnerInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation
        class AssociationInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation> > association_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo> lsp_ping_info;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState> mp_download_state;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation> status_information;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation : public Entity
{
    public:
        StatusInformation();
        ~StatusInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class SourceAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress
        class LastStateChange; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange
        class TransmitPacket; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket
        class ReceivePacket; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket
        class StatusBriefInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation
        class AsyncTransmitStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics
        class AsyncReceiveStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics
        class EchoTransmitStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics
        class EchoReceivedStatistics; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics> async_receive_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics> async_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics> echo_received_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics> echo_transmit_statistics;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange> last_state_change;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket> receive_packet;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation> status_brief_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket> transmit_packet;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange : public Entity
{
    public:
        LastStateChange();
        ~LastStateChange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf days; //type: uint32
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8
        YLeaf seconds; //type: uint8



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket : public Entity
{
    public:
        TransmitPacket();
        ~TransmitPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket : public Entity
{
    public:
        ReceivePacket();
        ~ReceivePacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics : public Entity
{
    public:
        AsyncTransmitStatistics();
        ~AsyncTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics : public Entity
{
    public:
        AsyncReceiveStatistics();
        ~AsyncReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics : public Entity
{
    public:
        EchoTransmitStatistics();
        ~EchoTransmitStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics : public Entity
{
    public:
        EchoReceivedStatistics();
        ~EchoReceivedStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: uint32
        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32
        YLeaf average; //type: uint32
        YLeaf last; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState : public Entity
{
    public:
        MpDownloadState();
        ~MpDownloadState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mp_download_state; //type: BfdMpDownloadStateEnum

        class ChangeTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime> change_time;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime : public Entity
{
    public:
        ChangeTime();
        ~ChangeTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo : public Entity
{
    public:
        LspPingInfo();
        ~LspPingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_ping_tx_count; //type: uint32
        YLeaf lsp_ping_tx_error_count; //type: uint32
        YLeaf lsp_ping_tx_last_rc; //type: string
        YLeaf lsp_ping_tx_last_error_rc; //type: string
        YLeaf lsp_ping_rx_last_discr; //type: uint32
        YLeaf lsp_ping_rx_count; //type: uint32
        YLeaf lsp_ping_rx_last_code; //type: uint8
        YLeaf lsp_ping_rx_last_subcode; //type: uint8
        YLeaf lsp_ping_rx_last_output; //type: string

        class LspPingTxLastTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime
        class LspPingTxLastErrorTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime
        class LspPingRxLastTime; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime> lsp_ping_rx_last_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime> lsp_ping_tx_last_error_time;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime> lsp_ping_tx_last_time;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime : public Entity
{
    public:
        LspPingTxLastTime();
        ~LspPingTxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime : public Entity
{
    public:
        LspPingTxLastErrorTime();
        ~LspPingTxLastErrorTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime : public Entity
{
    public:
        LspPingRxLastTime();
        ~LspPingRxLastTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint64
        YLeaf nanoseconds; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32

        class SessionKey; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey> session_key;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32

        class IpDestinationAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress> target_address;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfdfe_ctype; //type: BfdApiFecEnum

        class Dummy; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;


}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation


class Bfd::RelationBriefs : public Entity
{
    public:
        RelationBriefs();
        ~RelationBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RelationBrief; //type: Bfd::RelationBriefs::RelationBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationBriefs::RelationBrief> > relation_brief;


}; // Bfd::RelationBriefs


class Bfd::RelationBriefs::RelationBrief : public Entity
{
    public:
        RelationBrief();
        ~RelationBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum

        class LinkInformation; //type: Bfd::RelationBriefs::RelationBrief::LinkInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationBriefs::RelationBrief::LinkInformation> > link_information;


}; // Bfd::RelationBriefs::RelationBrief


class Bfd::RelationBriefs::RelationBrief::LinkInformation : public Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf interface_name; //type: string



}; // Bfd::RelationBriefs::RelationBrief::LinkInformation


class Bfd::ClientBriefs : public Entity
{
    public:
        ClientBriefs();
        ~ClientBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClientBrief; //type: Bfd::ClientBriefs::ClientBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::ClientBriefs::ClientBrief> > client_brief;


}; // Bfd::ClientBriefs


class Bfd::ClientBriefs::ClientBrief : public Entity
{
    public:
        ClientBrief();
        ~ClientBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf name_xr; //type: string
        YLeaf node_id; //type: string
        YLeaf session_count; //type: uint32



}; // Bfd::ClientBriefs::ClientBrief


class Bfd::Ipv4BfDoMplsteHeadMultiPaths : public Entity
{
    public:
        Ipv4BfDoMplsteHeadMultiPaths();
        ~Ipv4BfDoMplsteHeadMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteHeadMultiPath; //type: Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath> > ipv4bf_do_mplste_head_multi_path;


}; // Bfd::Ipv4BfDoMplsteHeadMultiPaths


class Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath : public Entity
{
    public:
        Ipv4BfDoMplsteHeadMultiPath();
        ~Ipv4BfDoMplsteHeadMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string



}; // Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath


class Bfd::RelationDetails : public Entity
{
    public:
        RelationDetails();
        ~RelationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RelationDetail; //type: Bfd::RelationDetails::RelationDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail> > relation_detail;


}; // Bfd::RelationDetails


class Bfd::RelationDetails::RelationDetail : public Entity
{
    public:
        RelationDetail();
        ~RelationDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32

        class LinkInformation; //type: Bfd::RelationDetails::RelationDetail::LinkInformation
        class AssociationInformation; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation> > association_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::LinkInformation> > link_information;


}; // Bfd::RelationDetails::RelationDetail


class Bfd::RelationDetails::RelationDetail::LinkInformation : public Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf interface_name; //type: string
        YLeaf local_discriminator; //type: uint32



}; // Bfd::RelationDetails::RelationDetail::LinkInformation


class Bfd::RelationDetails::RelationDetail::AssociationInformation : public Entity
{
    public:
        AssociationInformation();
        ~AssociationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessiontype; //type: BfdSessionEnum
        YLeaf local_discriminator; //type: uint32

        class SessionKey; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey
        class OwnerInformation; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation> > owner_information;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey> session_key;


}; // Bfd::RelationDetails::RelationDetail::AssociationInformation


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey : public Entity
{
    public:
        SessionKey();
        ~SessionKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_key_type; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf incoming_label; //type: uint32
        YLeaf sbfd_enabled; //type: int32
        YLeaf sbfd_target_type; //type: uint32

        class IpDestinationAddress; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress
        class IpSourceAddress; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress
        class Bfdfec; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec
        class TargetAddress; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec> bfdfec;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress> ip_destination_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress> ip_source_address;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress> target_address;


}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress : public Entity
{
    public:
        IpDestinationAddress();
        ~IpDestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress : public Entity
{
    public:
        IpSourceAddress();
        ~IpSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec : public Entity
{
    public:
        Bfdfec();
        ~Bfdfec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bfdfe_ctype; //type: BfdApiFecEnum

        class Dummy; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy
        class TeS2LFec; //type: Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy> dummy;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec> te_s2l_fec;


}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy : public Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dummy; //type: string



}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec : public Entity
{
    public:
        TeS2LFec();
        ~TeS2LFec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec


class Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BfdAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress


class Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation : public Entity
{
    public:
        OwnerInformation();
        ~OwnerInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf adjusted_interval; //type: uint32
        YLeaf adjusted_detection_multiplier; //type: uint32
        YLeaf name; //type: string



}; // Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation


class Bfd::Ipv4BfDoMplsteTailCounters : public Entity
{
    public:
        Ipv4BfDoMplsteTailCounters();
        ~Ipv4BfDoMplsteTailCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteTailPacketCounters; //type: Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters> ipv4bf_do_mplste_tail_packet_counters;


}; // Bfd::Ipv4BfDoMplsteTailCounters


class Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters : public Entity
{
    public:
        Ipv4BfDoMplsteTailPacketCounters();
        ~Ipv4BfDoMplsteTailPacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteTailPacketCounter; //type: Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter> > ipv4bf_do_mplste_tail_packet_counter;


}; // Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters


class Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter : public Entity
{
    public:
        Ipv4BfDoMplsteTailPacketCounter();
        ~Ipv4BfDoMplsteTailPacketCounter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        YLeaf hello_transmit_count; //type: uint32
        YLeaf hello_receive_count; //type: uint32
        YLeaf echo_transmit_count; //type: uint32
        YLeaf echo_receive_count; //type: uint32
        YLeaf display_type; //type: BfdMgmtPktDisplayEnum



}; // Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter


class Bfd::Ipv6SingleHopSessionBriefs : public Entity
{
    public:
        Ipv6SingleHopSessionBriefs();
        ~Ipv6SingleHopSessionBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv6SingleHopSessionBrief; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief> > ipv6_single_hop_session_brief;


}; // Bfd::Ipv6SingleHopSessionBriefs


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief : public Entity
{
    public:
        Ipv6SingleHopSessionBrief();
        ~Ipv6SingleHopSessionBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf node_id; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf session_type; //type: BfdSessionEnum
        YLeaf session_subtype; //type: string
        YLeaf session_flags; //type: uint32

        class StatusBriefInformation; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation> status_brief_information;


}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation : public Entity
{
    public:
        StatusBriefInformation();
        ~StatusBriefInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsyncIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier
        class EchoIntervalMultiplier; //type: Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier> async_interval_multiplier;
        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier> echo_interval_multiplier;


}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier : public Entity
{
    public:
        AsyncIntervalMultiplier();
        ~AsyncIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_remote_transmit_interval; //type: uint32
        YLeaf negotiated_local_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier


class Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier : public Entity
{
    public:
        EchoIntervalMultiplier();
        ~EchoIntervalMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf negotiated_transmit_interval; //type: uint32
        YLeaf detection_time; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier


class Bfd::Ipv4BfDoMplsteTailMultiPaths : public Entity
{
    public:
        Ipv4BfDoMplsteTailMultiPaths();
        ~Ipv4BfDoMplsteTailMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4BfDoMplsteTailMultiPath; //type: Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath> > ipv4bf_do_mplste_tail_multi_path;


}; // Bfd::Ipv4BfDoMplsteTailMultiPaths


class Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath : public Entity
{
    public:
        Ipv4BfDoMplsteTailMultiPath();
        ~Ipv4BfDoMplsteTailMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string



}; // Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath


class Bfd::Ipv4MultiHopMultiPaths : public Entity
{
    public:
        Ipv4MultiHopMultiPaths();
        ~Ipv4MultiHopMultiPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4MultiHopMultiPath; //type: Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath> > ipv4_multi_hop_multi_path;


}; // Bfd::Ipv4MultiHopMultiPaths


class Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath : public Entity
{
    public:
        Ipv4MultiHopMultiPath();
        ~Ipv4MultiHopMultiPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf location; //type: string
        YLeaf vrf_name; //type: string
        YLeaf session_subtype; //type: string
        YLeaf state; //type: BfdMgmtSessionStateEnum
        YLeaf local_discriminator; //type: uint32
        YLeaf node_id; //type: string
        YLeaf incoming_label_xr; //type: uint32
        YLeaf session_interface_name; //type: string



}; // Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath


class Bfd::Ipv4BfDoMplsteHeadSummary : public Entity
{
    public:
        Ipv4BfDoMplsteHeadSummary();
        ~Ipv4BfDoMplsteHeadSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionState; //type: Bfd::Ipv4BfDoMplsteHeadSummary::SessionState

        std::shared_ptr<Cisco_IOS_XR_ip_bfd_oper::Bfd::Ipv4BfDoMplsteHeadSummary::SessionState> session_state;


}; // Bfd::Ipv4BfDoMplsteHeadSummary


class Bfd::Ipv4BfDoMplsteHeadSummary::SessionState : public Entity
{
    public:
        SessionState();
        ~SessionState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_count; //type: uint32
        YLeaf down_count; //type: uint32
        YLeaf up_count; //type: uint32
        YLeaf unknown_count; //type: uint32



}; // Bfd::Ipv4BfDoMplsteHeadSummary::SessionState

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

#endif /* _CISCO_IOS_XR_IP_BFD_OPER_ */

