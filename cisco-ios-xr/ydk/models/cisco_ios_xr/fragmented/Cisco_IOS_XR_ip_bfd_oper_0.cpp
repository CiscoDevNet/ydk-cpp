
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_0.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_1.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::Bfd()
    :
    client_briefs(std::make_shared<Bfd::ClientBriefs>())
	,client_details(std::make_shared<Bfd::ClientDetails>())
	,counters(std::make_shared<Bfd::Counters>())
	,generic_summaries(std::make_shared<Bfd::GenericSummaries>())
	,ipv4_multi_hop_counters(std::make_shared<Bfd::Ipv4MultiHopCounters>())
	,ipv4_multi_hop_multi_paths(std::make_shared<Bfd::Ipv4MultiHopMultiPaths>())
	,ipv4_multi_hop_node_location_summaries(std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries>())
	,ipv4_multi_hop_session_briefs(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs>())
	,ipv4_multi_hop_session_details(std::make_shared<Bfd::Ipv4MultiHopSessionDetails>())
	,ipv4_multi_hop_summary(std::make_shared<Bfd::Ipv4MultiHopSummary>())
	,ipv4_single_hop_counters(std::make_shared<Bfd::Ipv4SingleHopCounters>())
	,ipv4_single_hop_location_summaries(std::make_shared<Bfd::Ipv4SingleHopLocationSummaries>())
	,ipv4_single_hop_multi_paths(std::make_shared<Bfd::Ipv4SingleHopMultiPaths>())
	,ipv4_single_hop_node_location_summaries(std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries>())
	,ipv4_single_hop_session_briefs(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs>())
	,ipv4_single_hop_session_details(std::make_shared<Bfd::Ipv4SingleHopSessionDetails>())
	,ipv4_single_hop_summary(std::make_shared<Bfd::Ipv4SingleHopSummary>())
	,ipv4bf_do_mplste_head_counters(std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters>())
	,ipv4bf_do_mplste_head_multi_paths(std::make_shared<Bfd::Ipv4BfDoMplsteHeadMultiPaths>())
	,ipv4bf_do_mplste_head_session_briefs(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs>())
	,ipv4bf_do_mplste_head_session_details(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails>())
	,ipv4bf_do_mplste_head_summary(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSummary>())
	,ipv4bf_do_mplste_tail_counters(std::make_shared<Bfd::Ipv4BfDoMplsteTailCounters>())
	,ipv4bf_do_mplste_tail_multi_paths(std::make_shared<Bfd::Ipv4BfDoMplsteTailMultiPaths>())
	,ipv4bf_do_mplste_tail_session_briefs(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs>())
	,ipv4bf_do_mplste_tail_session_details(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails>())
	,ipv4bf_do_mplste_tail_summary(std::make_shared<Bfd::Ipv4BfDoMplsteTailSummary>())
	,ipv4bfd_mplste_head_summary_nodes(std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes>())
	,ipv4bfd_mplste_tail_node_summaries(std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries>())
	,ipv6_multi_hop_counters(std::make_shared<Bfd::Ipv6MultiHopCounters>())
	,ipv6_multi_hop_multi_paths(std::make_shared<Bfd::Ipv6MultiHopMultiPaths>())
	,ipv6_multi_hop_node_location_summaries(std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries>())
	,ipv6_multi_hop_session_briefs(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs>())
	,ipv6_multi_hop_session_details(std::make_shared<Bfd::Ipv6MultiHopSessionDetails>())
	,ipv6_multi_hop_summary(std::make_shared<Bfd::Ipv6MultiHopSummary>())
	,ipv6_single_hop_counters(std::make_shared<Bfd::Ipv6SingleHopCounters>())
	,ipv6_single_hop_location_summaries(std::make_shared<Bfd::Ipv6SingleHopLocationSummaries>())
	,ipv6_single_hop_multi_paths(std::make_shared<Bfd::Ipv6SingleHopMultiPaths>())
	,ipv6_single_hop_node_location_summaries(std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries>())
	,ipv6_single_hop_session_briefs(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs>())
	,ipv6_single_hop_session_details(std::make_shared<Bfd::Ipv6SingleHopSessionDetails>())
	,ipv6_single_hop_summary(std::make_shared<Bfd::Ipv6SingleHopSummary>())
	,label_counters(std::make_shared<Bfd::LabelCounters>())
	,label_multi_paths(std::make_shared<Bfd::LabelMultiPaths>())
	,label_session_briefs(std::make_shared<Bfd::LabelSessionBriefs>())
	,label_session_details(std::make_shared<Bfd::LabelSessionDetails>())
	,label_summary(std::make_shared<Bfd::LabelSummary>())
	,label_summary_nodes(std::make_shared<Bfd::LabelSummaryNodes>())
	,relation_briefs(std::make_shared<Bfd::RelationBriefs>())
	,relation_details(std::make_shared<Bfd::RelationDetails>())
	,session_briefs(std::make_shared<Bfd::SessionBriefs>())
	,session_details(std::make_shared<Bfd::SessionDetails>())
	,session_mibs(std::make_shared<Bfd::SessionMibs>())
	,summary(std::make_shared<Bfd::Summary>())
{
    client_briefs->parent = this;

    client_details->parent = this;

    counters->parent = this;

    generic_summaries->parent = this;

    ipv4_multi_hop_counters->parent = this;

    ipv4_multi_hop_multi_paths->parent = this;

    ipv4_multi_hop_node_location_summaries->parent = this;

    ipv4_multi_hop_session_briefs->parent = this;

    ipv4_multi_hop_session_details->parent = this;

    ipv4_multi_hop_summary->parent = this;

    ipv4_single_hop_counters->parent = this;

    ipv4_single_hop_location_summaries->parent = this;

    ipv4_single_hop_multi_paths->parent = this;

    ipv4_single_hop_node_location_summaries->parent = this;

    ipv4_single_hop_session_briefs->parent = this;

    ipv4_single_hop_session_details->parent = this;

    ipv4_single_hop_summary->parent = this;

    ipv4bf_do_mplste_head_counters->parent = this;

    ipv4bf_do_mplste_head_multi_paths->parent = this;

    ipv4bf_do_mplste_head_session_briefs->parent = this;

    ipv4bf_do_mplste_head_session_details->parent = this;

    ipv4bf_do_mplste_head_summary->parent = this;

    ipv4bf_do_mplste_tail_counters->parent = this;

    ipv4bf_do_mplste_tail_multi_paths->parent = this;

    ipv4bf_do_mplste_tail_session_briefs->parent = this;

    ipv4bf_do_mplste_tail_session_details->parent = this;

    ipv4bf_do_mplste_tail_summary->parent = this;

    ipv4bfd_mplste_head_summary_nodes->parent = this;

    ipv4bfd_mplste_tail_node_summaries->parent = this;

    ipv6_multi_hop_counters->parent = this;

    ipv6_multi_hop_multi_paths->parent = this;

    ipv6_multi_hop_node_location_summaries->parent = this;

    ipv6_multi_hop_session_briefs->parent = this;

    ipv6_multi_hop_session_details->parent = this;

    ipv6_multi_hop_summary->parent = this;

    ipv6_single_hop_counters->parent = this;

    ipv6_single_hop_location_summaries->parent = this;

    ipv6_single_hop_multi_paths->parent = this;

    ipv6_single_hop_node_location_summaries->parent = this;

    ipv6_single_hop_session_briefs->parent = this;

    ipv6_single_hop_session_details->parent = this;

    ipv6_single_hop_summary->parent = this;

    label_counters->parent = this;

    label_multi_paths->parent = this;

    label_session_briefs->parent = this;

    label_session_details->parent = this;

    label_summary->parent = this;

    label_summary_nodes->parent = this;

    relation_briefs->parent = this;

    relation_details->parent = this;

    session_briefs->parent = this;

    session_details->parent = this;

    session_mibs->parent = this;

    summary->parent = this;

    yang_name = "bfd"; yang_parent_name = "Cisco-IOS-XR-ip-bfd-oper";
}

Bfd::~Bfd()
{
}

bool Bfd::has_data() const
{
    return (client_briefs !=  nullptr && client_briefs->has_data())
	|| (client_details !=  nullptr && client_details->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (generic_summaries !=  nullptr && generic_summaries->has_data())
	|| (ipv4_multi_hop_counters !=  nullptr && ipv4_multi_hop_counters->has_data())
	|| (ipv4_multi_hop_multi_paths !=  nullptr && ipv4_multi_hop_multi_paths->has_data())
	|| (ipv4_multi_hop_node_location_summaries !=  nullptr && ipv4_multi_hop_node_location_summaries->has_data())
	|| (ipv4_multi_hop_session_briefs !=  nullptr && ipv4_multi_hop_session_briefs->has_data())
	|| (ipv4_multi_hop_session_details !=  nullptr && ipv4_multi_hop_session_details->has_data())
	|| (ipv4_multi_hop_summary !=  nullptr && ipv4_multi_hop_summary->has_data())
	|| (ipv4_single_hop_counters !=  nullptr && ipv4_single_hop_counters->has_data())
	|| (ipv4_single_hop_location_summaries !=  nullptr && ipv4_single_hop_location_summaries->has_data())
	|| (ipv4_single_hop_multi_paths !=  nullptr && ipv4_single_hop_multi_paths->has_data())
	|| (ipv4_single_hop_node_location_summaries !=  nullptr && ipv4_single_hop_node_location_summaries->has_data())
	|| (ipv4_single_hop_session_briefs !=  nullptr && ipv4_single_hop_session_briefs->has_data())
	|| (ipv4_single_hop_session_details !=  nullptr && ipv4_single_hop_session_details->has_data())
	|| (ipv4_single_hop_summary !=  nullptr && ipv4_single_hop_summary->has_data())
	|| (ipv4bf_do_mplste_head_counters !=  nullptr && ipv4bf_do_mplste_head_counters->has_data())
	|| (ipv4bf_do_mplste_head_multi_paths !=  nullptr && ipv4bf_do_mplste_head_multi_paths->has_data())
	|| (ipv4bf_do_mplste_head_session_briefs !=  nullptr && ipv4bf_do_mplste_head_session_briefs->has_data())
	|| (ipv4bf_do_mplste_head_session_details !=  nullptr && ipv4bf_do_mplste_head_session_details->has_data())
	|| (ipv4bf_do_mplste_head_summary !=  nullptr && ipv4bf_do_mplste_head_summary->has_data())
	|| (ipv4bf_do_mplste_tail_counters !=  nullptr && ipv4bf_do_mplste_tail_counters->has_data())
	|| (ipv4bf_do_mplste_tail_multi_paths !=  nullptr && ipv4bf_do_mplste_tail_multi_paths->has_data())
	|| (ipv4bf_do_mplste_tail_session_briefs !=  nullptr && ipv4bf_do_mplste_tail_session_briefs->has_data())
	|| (ipv4bf_do_mplste_tail_session_details !=  nullptr && ipv4bf_do_mplste_tail_session_details->has_data())
	|| (ipv4bf_do_mplste_tail_summary !=  nullptr && ipv4bf_do_mplste_tail_summary->has_data())
	|| (ipv4bfd_mplste_head_summary_nodes !=  nullptr && ipv4bfd_mplste_head_summary_nodes->has_data())
	|| (ipv4bfd_mplste_tail_node_summaries !=  nullptr && ipv4bfd_mplste_tail_node_summaries->has_data())
	|| (ipv6_multi_hop_counters !=  nullptr && ipv6_multi_hop_counters->has_data())
	|| (ipv6_multi_hop_multi_paths !=  nullptr && ipv6_multi_hop_multi_paths->has_data())
	|| (ipv6_multi_hop_node_location_summaries !=  nullptr && ipv6_multi_hop_node_location_summaries->has_data())
	|| (ipv6_multi_hop_session_briefs !=  nullptr && ipv6_multi_hop_session_briefs->has_data())
	|| (ipv6_multi_hop_session_details !=  nullptr && ipv6_multi_hop_session_details->has_data())
	|| (ipv6_multi_hop_summary !=  nullptr && ipv6_multi_hop_summary->has_data())
	|| (ipv6_single_hop_counters !=  nullptr && ipv6_single_hop_counters->has_data())
	|| (ipv6_single_hop_location_summaries !=  nullptr && ipv6_single_hop_location_summaries->has_data())
	|| (ipv6_single_hop_multi_paths !=  nullptr && ipv6_single_hop_multi_paths->has_data())
	|| (ipv6_single_hop_node_location_summaries !=  nullptr && ipv6_single_hop_node_location_summaries->has_data())
	|| (ipv6_single_hop_session_briefs !=  nullptr && ipv6_single_hop_session_briefs->has_data())
	|| (ipv6_single_hop_session_details !=  nullptr && ipv6_single_hop_session_details->has_data())
	|| (ipv6_single_hop_summary !=  nullptr && ipv6_single_hop_summary->has_data())
	|| (label_counters !=  nullptr && label_counters->has_data())
	|| (label_multi_paths !=  nullptr && label_multi_paths->has_data())
	|| (label_session_briefs !=  nullptr && label_session_briefs->has_data())
	|| (label_session_details !=  nullptr && label_session_details->has_data())
	|| (label_summary !=  nullptr && label_summary->has_data())
	|| (label_summary_nodes !=  nullptr && label_summary_nodes->has_data())
	|| (relation_briefs !=  nullptr && relation_briefs->has_data())
	|| (relation_details !=  nullptr && relation_details->has_data())
	|| (session_briefs !=  nullptr && session_briefs->has_data())
	|| (session_details !=  nullptr && session_details->has_data())
	|| (session_mibs !=  nullptr && session_mibs->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Bfd::has_operation() const
{
    return is_set(operation)
	|| (client_briefs !=  nullptr && client_briefs->has_operation())
	|| (client_details !=  nullptr && client_details->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (generic_summaries !=  nullptr && generic_summaries->has_operation())
	|| (ipv4_multi_hop_counters !=  nullptr && ipv4_multi_hop_counters->has_operation())
	|| (ipv4_multi_hop_multi_paths !=  nullptr && ipv4_multi_hop_multi_paths->has_operation())
	|| (ipv4_multi_hop_node_location_summaries !=  nullptr && ipv4_multi_hop_node_location_summaries->has_operation())
	|| (ipv4_multi_hop_session_briefs !=  nullptr && ipv4_multi_hop_session_briefs->has_operation())
	|| (ipv4_multi_hop_session_details !=  nullptr && ipv4_multi_hop_session_details->has_operation())
	|| (ipv4_multi_hop_summary !=  nullptr && ipv4_multi_hop_summary->has_operation())
	|| (ipv4_single_hop_counters !=  nullptr && ipv4_single_hop_counters->has_operation())
	|| (ipv4_single_hop_location_summaries !=  nullptr && ipv4_single_hop_location_summaries->has_operation())
	|| (ipv4_single_hop_multi_paths !=  nullptr && ipv4_single_hop_multi_paths->has_operation())
	|| (ipv4_single_hop_node_location_summaries !=  nullptr && ipv4_single_hop_node_location_summaries->has_operation())
	|| (ipv4_single_hop_session_briefs !=  nullptr && ipv4_single_hop_session_briefs->has_operation())
	|| (ipv4_single_hop_session_details !=  nullptr && ipv4_single_hop_session_details->has_operation())
	|| (ipv4_single_hop_summary !=  nullptr && ipv4_single_hop_summary->has_operation())
	|| (ipv4bf_do_mplste_head_counters !=  nullptr && ipv4bf_do_mplste_head_counters->has_operation())
	|| (ipv4bf_do_mplste_head_multi_paths !=  nullptr && ipv4bf_do_mplste_head_multi_paths->has_operation())
	|| (ipv4bf_do_mplste_head_session_briefs !=  nullptr && ipv4bf_do_mplste_head_session_briefs->has_operation())
	|| (ipv4bf_do_mplste_head_session_details !=  nullptr && ipv4bf_do_mplste_head_session_details->has_operation())
	|| (ipv4bf_do_mplste_head_summary !=  nullptr && ipv4bf_do_mplste_head_summary->has_operation())
	|| (ipv4bf_do_mplste_tail_counters !=  nullptr && ipv4bf_do_mplste_tail_counters->has_operation())
	|| (ipv4bf_do_mplste_tail_multi_paths !=  nullptr && ipv4bf_do_mplste_tail_multi_paths->has_operation())
	|| (ipv4bf_do_mplste_tail_session_briefs !=  nullptr && ipv4bf_do_mplste_tail_session_briefs->has_operation())
	|| (ipv4bf_do_mplste_tail_session_details !=  nullptr && ipv4bf_do_mplste_tail_session_details->has_operation())
	|| (ipv4bf_do_mplste_tail_summary !=  nullptr && ipv4bf_do_mplste_tail_summary->has_operation())
	|| (ipv4bfd_mplste_head_summary_nodes !=  nullptr && ipv4bfd_mplste_head_summary_nodes->has_operation())
	|| (ipv4bfd_mplste_tail_node_summaries !=  nullptr && ipv4bfd_mplste_tail_node_summaries->has_operation())
	|| (ipv6_multi_hop_counters !=  nullptr && ipv6_multi_hop_counters->has_operation())
	|| (ipv6_multi_hop_multi_paths !=  nullptr && ipv6_multi_hop_multi_paths->has_operation())
	|| (ipv6_multi_hop_node_location_summaries !=  nullptr && ipv6_multi_hop_node_location_summaries->has_operation())
	|| (ipv6_multi_hop_session_briefs !=  nullptr && ipv6_multi_hop_session_briefs->has_operation())
	|| (ipv6_multi_hop_session_details !=  nullptr && ipv6_multi_hop_session_details->has_operation())
	|| (ipv6_multi_hop_summary !=  nullptr && ipv6_multi_hop_summary->has_operation())
	|| (ipv6_single_hop_counters !=  nullptr && ipv6_single_hop_counters->has_operation())
	|| (ipv6_single_hop_location_summaries !=  nullptr && ipv6_single_hop_location_summaries->has_operation())
	|| (ipv6_single_hop_multi_paths !=  nullptr && ipv6_single_hop_multi_paths->has_operation())
	|| (ipv6_single_hop_node_location_summaries !=  nullptr && ipv6_single_hop_node_location_summaries->has_operation())
	|| (ipv6_single_hop_session_briefs !=  nullptr && ipv6_single_hop_session_briefs->has_operation())
	|| (ipv6_single_hop_session_details !=  nullptr && ipv6_single_hop_session_details->has_operation())
	|| (ipv6_single_hop_summary !=  nullptr && ipv6_single_hop_summary->has_operation())
	|| (label_counters !=  nullptr && label_counters->has_operation())
	|| (label_multi_paths !=  nullptr && label_multi_paths->has_operation())
	|| (label_session_briefs !=  nullptr && label_session_briefs->has_operation())
	|| (label_session_details !=  nullptr && label_session_details->has_operation())
	|| (label_summary !=  nullptr && label_summary->has_operation())
	|| (label_summary_nodes !=  nullptr && label_summary_nodes->has_operation())
	|| (relation_briefs !=  nullptr && relation_briefs->has_operation())
	|| (relation_details !=  nullptr && relation_details->has_operation())
	|| (session_briefs !=  nullptr && session_briefs->has_operation())
	|| (session_details !=  nullptr && session_details->has_operation())
	|| (session_mibs !=  nullptr && session_mibs->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd";

    return path_buffer.str();

}

const EntityPath Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-briefs")
    {
        if(client_briefs == nullptr)
        {
            client_briefs = std::make_shared<Bfd::ClientBriefs>();
        }
        return client_briefs;
    }

    if(child_yang_name == "client-details")
    {
        if(client_details == nullptr)
        {
            client_details = std::make_shared<Bfd::ClientDetails>();
        }
        return client_details;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Bfd::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "generic-summaries")
    {
        if(generic_summaries == nullptr)
        {
            generic_summaries = std::make_shared<Bfd::GenericSummaries>();
        }
        return generic_summaries;
    }

    if(child_yang_name == "ipv4-multi-hop-counters")
    {
        if(ipv4_multi_hop_counters == nullptr)
        {
            ipv4_multi_hop_counters = std::make_shared<Bfd::Ipv4MultiHopCounters>();
        }
        return ipv4_multi_hop_counters;
    }

    if(child_yang_name == "ipv4-multi-hop-multi-paths")
    {
        if(ipv4_multi_hop_multi_paths == nullptr)
        {
            ipv4_multi_hop_multi_paths = std::make_shared<Bfd::Ipv4MultiHopMultiPaths>();
        }
        return ipv4_multi_hop_multi_paths;
    }

    if(child_yang_name == "ipv4-multi-hop-node-location-summaries")
    {
        if(ipv4_multi_hop_node_location_summaries == nullptr)
        {
            ipv4_multi_hop_node_location_summaries = std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries>();
        }
        return ipv4_multi_hop_node_location_summaries;
    }

    if(child_yang_name == "ipv4-multi-hop-session-briefs")
    {
        if(ipv4_multi_hop_session_briefs == nullptr)
        {
            ipv4_multi_hop_session_briefs = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs>();
        }
        return ipv4_multi_hop_session_briefs;
    }

    if(child_yang_name == "ipv4-multi-hop-session-details")
    {
        if(ipv4_multi_hop_session_details == nullptr)
        {
            ipv4_multi_hop_session_details = std::make_shared<Bfd::Ipv4MultiHopSessionDetails>();
        }
        return ipv4_multi_hop_session_details;
    }

    if(child_yang_name == "ipv4-multi-hop-summary")
    {
        if(ipv4_multi_hop_summary == nullptr)
        {
            ipv4_multi_hop_summary = std::make_shared<Bfd::Ipv4MultiHopSummary>();
        }
        return ipv4_multi_hop_summary;
    }

    if(child_yang_name == "ipv4-single-hop-counters")
    {
        if(ipv4_single_hop_counters == nullptr)
        {
            ipv4_single_hop_counters = std::make_shared<Bfd::Ipv4SingleHopCounters>();
        }
        return ipv4_single_hop_counters;
    }

    if(child_yang_name == "ipv4-single-hop-location-summaries")
    {
        if(ipv4_single_hop_location_summaries == nullptr)
        {
            ipv4_single_hop_location_summaries = std::make_shared<Bfd::Ipv4SingleHopLocationSummaries>();
        }
        return ipv4_single_hop_location_summaries;
    }

    if(child_yang_name == "ipv4-single-hop-multi-paths")
    {
        if(ipv4_single_hop_multi_paths == nullptr)
        {
            ipv4_single_hop_multi_paths = std::make_shared<Bfd::Ipv4SingleHopMultiPaths>();
        }
        return ipv4_single_hop_multi_paths;
    }

    if(child_yang_name == "ipv4-single-hop-node-location-summaries")
    {
        if(ipv4_single_hop_node_location_summaries == nullptr)
        {
            ipv4_single_hop_node_location_summaries = std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries>();
        }
        return ipv4_single_hop_node_location_summaries;
    }

    if(child_yang_name == "ipv4-single-hop-session-briefs")
    {
        if(ipv4_single_hop_session_briefs == nullptr)
        {
            ipv4_single_hop_session_briefs = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs>();
        }
        return ipv4_single_hop_session_briefs;
    }

    if(child_yang_name == "ipv4-single-hop-session-details")
    {
        if(ipv4_single_hop_session_details == nullptr)
        {
            ipv4_single_hop_session_details = std::make_shared<Bfd::Ipv4SingleHopSessionDetails>();
        }
        return ipv4_single_hop_session_details;
    }

    if(child_yang_name == "ipv4-single-hop-summary")
    {
        if(ipv4_single_hop_summary == nullptr)
        {
            ipv4_single_hop_summary = std::make_shared<Bfd::Ipv4SingleHopSummary>();
        }
        return ipv4_single_hop_summary;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-counters")
    {
        if(ipv4bf_do_mplste_head_counters == nullptr)
        {
            ipv4bf_do_mplste_head_counters = std::make_shared<Bfd::Ipv4BfDoMplsteHeadCounters>();
        }
        return ipv4bf_do_mplste_head_counters;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-multi-paths")
    {
        if(ipv4bf_do_mplste_head_multi_paths == nullptr)
        {
            ipv4bf_do_mplste_head_multi_paths = std::make_shared<Bfd::Ipv4BfDoMplsteHeadMultiPaths>();
        }
        return ipv4bf_do_mplste_head_multi_paths;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-session-briefs")
    {
        if(ipv4bf_do_mplste_head_session_briefs == nullptr)
        {
            ipv4bf_do_mplste_head_session_briefs = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs>();
        }
        return ipv4bf_do_mplste_head_session_briefs;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-session-details")
    {
        if(ipv4bf_do_mplste_head_session_details == nullptr)
        {
            ipv4bf_do_mplste_head_session_details = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails>();
        }
        return ipv4bf_do_mplste_head_session_details;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-summary")
    {
        if(ipv4bf_do_mplste_head_summary == nullptr)
        {
            ipv4bf_do_mplste_head_summary = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSummary>();
        }
        return ipv4bf_do_mplste_head_summary;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-counters")
    {
        if(ipv4bf_do_mplste_tail_counters == nullptr)
        {
            ipv4bf_do_mplste_tail_counters = std::make_shared<Bfd::Ipv4BfDoMplsteTailCounters>();
        }
        return ipv4bf_do_mplste_tail_counters;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-multi-paths")
    {
        if(ipv4bf_do_mplste_tail_multi_paths == nullptr)
        {
            ipv4bf_do_mplste_tail_multi_paths = std::make_shared<Bfd::Ipv4BfDoMplsteTailMultiPaths>();
        }
        return ipv4bf_do_mplste_tail_multi_paths;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-session-briefs")
    {
        if(ipv4bf_do_mplste_tail_session_briefs == nullptr)
        {
            ipv4bf_do_mplste_tail_session_briefs = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs>();
        }
        return ipv4bf_do_mplste_tail_session_briefs;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-session-details")
    {
        if(ipv4bf_do_mplste_tail_session_details == nullptr)
        {
            ipv4bf_do_mplste_tail_session_details = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails>();
        }
        return ipv4bf_do_mplste_tail_session_details;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-summary")
    {
        if(ipv4bf_do_mplste_tail_summary == nullptr)
        {
            ipv4bf_do_mplste_tail_summary = std::make_shared<Bfd::Ipv4BfDoMplsteTailSummary>();
        }
        return ipv4bf_do_mplste_tail_summary;
    }

    if(child_yang_name == "ipv4bfd-mplste-head-summary-nodes")
    {
        if(ipv4bfd_mplste_head_summary_nodes == nullptr)
        {
            ipv4bfd_mplste_head_summary_nodes = std::make_shared<Bfd::Ipv4BfdMplsteHeadSummaryNodes>();
        }
        return ipv4bfd_mplste_head_summary_nodes;
    }

    if(child_yang_name == "ipv4bfd-mplste-tail-node-summaries")
    {
        if(ipv4bfd_mplste_tail_node_summaries == nullptr)
        {
            ipv4bfd_mplste_tail_node_summaries = std::make_shared<Bfd::Ipv4BfdMplsteTailNodeSummaries>();
        }
        return ipv4bfd_mplste_tail_node_summaries;
    }

    if(child_yang_name == "ipv6-multi-hop-counters")
    {
        if(ipv6_multi_hop_counters == nullptr)
        {
            ipv6_multi_hop_counters = std::make_shared<Bfd::Ipv6MultiHopCounters>();
        }
        return ipv6_multi_hop_counters;
    }

    if(child_yang_name == "ipv6-multi-hop-multi-paths")
    {
        if(ipv6_multi_hop_multi_paths == nullptr)
        {
            ipv6_multi_hop_multi_paths = std::make_shared<Bfd::Ipv6MultiHopMultiPaths>();
        }
        return ipv6_multi_hop_multi_paths;
    }

    if(child_yang_name == "ipv6-multi-hop-node-location-summaries")
    {
        if(ipv6_multi_hop_node_location_summaries == nullptr)
        {
            ipv6_multi_hop_node_location_summaries = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries>();
        }
        return ipv6_multi_hop_node_location_summaries;
    }

    if(child_yang_name == "ipv6-multi-hop-session-briefs")
    {
        if(ipv6_multi_hop_session_briefs == nullptr)
        {
            ipv6_multi_hop_session_briefs = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs>();
        }
        return ipv6_multi_hop_session_briefs;
    }

    if(child_yang_name == "ipv6-multi-hop-session-details")
    {
        if(ipv6_multi_hop_session_details == nullptr)
        {
            ipv6_multi_hop_session_details = std::make_shared<Bfd::Ipv6MultiHopSessionDetails>();
        }
        return ipv6_multi_hop_session_details;
    }

    if(child_yang_name == "ipv6-multi-hop-summary")
    {
        if(ipv6_multi_hop_summary == nullptr)
        {
            ipv6_multi_hop_summary = std::make_shared<Bfd::Ipv6MultiHopSummary>();
        }
        return ipv6_multi_hop_summary;
    }

    if(child_yang_name == "ipv6-single-hop-counters")
    {
        if(ipv6_single_hop_counters == nullptr)
        {
            ipv6_single_hop_counters = std::make_shared<Bfd::Ipv6SingleHopCounters>();
        }
        return ipv6_single_hop_counters;
    }

    if(child_yang_name == "ipv6-single-hop-location-summaries")
    {
        if(ipv6_single_hop_location_summaries == nullptr)
        {
            ipv6_single_hop_location_summaries = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries>();
        }
        return ipv6_single_hop_location_summaries;
    }

    if(child_yang_name == "ipv6-single-hop-multi-paths")
    {
        if(ipv6_single_hop_multi_paths == nullptr)
        {
            ipv6_single_hop_multi_paths = std::make_shared<Bfd::Ipv6SingleHopMultiPaths>();
        }
        return ipv6_single_hop_multi_paths;
    }

    if(child_yang_name == "ipv6-single-hop-node-location-summaries")
    {
        if(ipv6_single_hop_node_location_summaries == nullptr)
        {
            ipv6_single_hop_node_location_summaries = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries>();
        }
        return ipv6_single_hop_node_location_summaries;
    }

    if(child_yang_name == "ipv6-single-hop-session-briefs")
    {
        if(ipv6_single_hop_session_briefs == nullptr)
        {
            ipv6_single_hop_session_briefs = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs>();
        }
        return ipv6_single_hop_session_briefs;
    }

    if(child_yang_name == "ipv6-single-hop-session-details")
    {
        if(ipv6_single_hop_session_details == nullptr)
        {
            ipv6_single_hop_session_details = std::make_shared<Bfd::Ipv6SingleHopSessionDetails>();
        }
        return ipv6_single_hop_session_details;
    }

    if(child_yang_name == "ipv6-single-hop-summary")
    {
        if(ipv6_single_hop_summary == nullptr)
        {
            ipv6_single_hop_summary = std::make_shared<Bfd::Ipv6SingleHopSummary>();
        }
        return ipv6_single_hop_summary;
    }

    if(child_yang_name == "label-counters")
    {
        if(label_counters == nullptr)
        {
            label_counters = std::make_shared<Bfd::LabelCounters>();
        }
        return label_counters;
    }

    if(child_yang_name == "label-multi-paths")
    {
        if(label_multi_paths == nullptr)
        {
            label_multi_paths = std::make_shared<Bfd::LabelMultiPaths>();
        }
        return label_multi_paths;
    }

    if(child_yang_name == "label-session-briefs")
    {
        if(label_session_briefs == nullptr)
        {
            label_session_briefs = std::make_shared<Bfd::LabelSessionBriefs>();
        }
        return label_session_briefs;
    }

    if(child_yang_name == "label-session-details")
    {
        if(label_session_details == nullptr)
        {
            label_session_details = std::make_shared<Bfd::LabelSessionDetails>();
        }
        return label_session_details;
    }

    if(child_yang_name == "label-summary")
    {
        if(label_summary == nullptr)
        {
            label_summary = std::make_shared<Bfd::LabelSummary>();
        }
        return label_summary;
    }

    if(child_yang_name == "label-summary-nodes")
    {
        if(label_summary_nodes == nullptr)
        {
            label_summary_nodes = std::make_shared<Bfd::LabelSummaryNodes>();
        }
        return label_summary_nodes;
    }

    if(child_yang_name == "relation-briefs")
    {
        if(relation_briefs == nullptr)
        {
            relation_briefs = std::make_shared<Bfd::RelationBriefs>();
        }
        return relation_briefs;
    }

    if(child_yang_name == "relation-details")
    {
        if(relation_details == nullptr)
        {
            relation_details = std::make_shared<Bfd::RelationDetails>();
        }
        return relation_details;
    }

    if(child_yang_name == "session-briefs")
    {
        if(session_briefs == nullptr)
        {
            session_briefs = std::make_shared<Bfd::SessionBriefs>();
        }
        return session_briefs;
    }

    if(child_yang_name == "session-details")
    {
        if(session_details == nullptr)
        {
            session_details = std::make_shared<Bfd::SessionDetails>();
        }
        return session_details;
    }

    if(child_yang_name == "session-mibs")
    {
        if(session_mibs == nullptr)
        {
            session_mibs = std::make_shared<Bfd::SessionMibs>();
        }
        return session_mibs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Bfd::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_briefs != nullptr)
    {
        children["client-briefs"] = client_briefs;
    }

    if(client_details != nullptr)
    {
        children["client-details"] = client_details;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(generic_summaries != nullptr)
    {
        children["generic-summaries"] = generic_summaries;
    }

    if(ipv4_multi_hop_counters != nullptr)
    {
        children["ipv4-multi-hop-counters"] = ipv4_multi_hop_counters;
    }

    if(ipv4_multi_hop_multi_paths != nullptr)
    {
        children["ipv4-multi-hop-multi-paths"] = ipv4_multi_hop_multi_paths;
    }

    if(ipv4_multi_hop_node_location_summaries != nullptr)
    {
        children["ipv4-multi-hop-node-location-summaries"] = ipv4_multi_hop_node_location_summaries;
    }

    if(ipv4_multi_hop_session_briefs != nullptr)
    {
        children["ipv4-multi-hop-session-briefs"] = ipv4_multi_hop_session_briefs;
    }

    if(ipv4_multi_hop_session_details != nullptr)
    {
        children["ipv4-multi-hop-session-details"] = ipv4_multi_hop_session_details;
    }

    if(ipv4_multi_hop_summary != nullptr)
    {
        children["ipv4-multi-hop-summary"] = ipv4_multi_hop_summary;
    }

    if(ipv4_single_hop_counters != nullptr)
    {
        children["ipv4-single-hop-counters"] = ipv4_single_hop_counters;
    }

    if(ipv4_single_hop_location_summaries != nullptr)
    {
        children["ipv4-single-hop-location-summaries"] = ipv4_single_hop_location_summaries;
    }

    if(ipv4_single_hop_multi_paths != nullptr)
    {
        children["ipv4-single-hop-multi-paths"] = ipv4_single_hop_multi_paths;
    }

    if(ipv4_single_hop_node_location_summaries != nullptr)
    {
        children["ipv4-single-hop-node-location-summaries"] = ipv4_single_hop_node_location_summaries;
    }

    if(ipv4_single_hop_session_briefs != nullptr)
    {
        children["ipv4-single-hop-session-briefs"] = ipv4_single_hop_session_briefs;
    }

    if(ipv4_single_hop_session_details != nullptr)
    {
        children["ipv4-single-hop-session-details"] = ipv4_single_hop_session_details;
    }

    if(ipv4_single_hop_summary != nullptr)
    {
        children["ipv4-single-hop-summary"] = ipv4_single_hop_summary;
    }

    if(ipv4bf_do_mplste_head_counters != nullptr)
    {
        children["ipv4bf-do-mplste-head-counters"] = ipv4bf_do_mplste_head_counters;
    }

    if(ipv4bf_do_mplste_head_multi_paths != nullptr)
    {
        children["ipv4bf-do-mplste-head-multi-paths"] = ipv4bf_do_mplste_head_multi_paths;
    }

    if(ipv4bf_do_mplste_head_session_briefs != nullptr)
    {
        children["ipv4bf-do-mplste-head-session-briefs"] = ipv4bf_do_mplste_head_session_briefs;
    }

    if(ipv4bf_do_mplste_head_session_details != nullptr)
    {
        children["ipv4bf-do-mplste-head-session-details"] = ipv4bf_do_mplste_head_session_details;
    }

    if(ipv4bf_do_mplste_head_summary != nullptr)
    {
        children["ipv4bf-do-mplste-head-summary"] = ipv4bf_do_mplste_head_summary;
    }

    if(ipv4bf_do_mplste_tail_counters != nullptr)
    {
        children["ipv4bf-do-mplste-tail-counters"] = ipv4bf_do_mplste_tail_counters;
    }

    if(ipv4bf_do_mplste_tail_multi_paths != nullptr)
    {
        children["ipv4bf-do-mplste-tail-multi-paths"] = ipv4bf_do_mplste_tail_multi_paths;
    }

    if(ipv4bf_do_mplste_tail_session_briefs != nullptr)
    {
        children["ipv4bf-do-mplste-tail-session-briefs"] = ipv4bf_do_mplste_tail_session_briefs;
    }

    if(ipv4bf_do_mplste_tail_session_details != nullptr)
    {
        children["ipv4bf-do-mplste-tail-session-details"] = ipv4bf_do_mplste_tail_session_details;
    }

    if(ipv4bf_do_mplste_tail_summary != nullptr)
    {
        children["ipv4bf-do-mplste-tail-summary"] = ipv4bf_do_mplste_tail_summary;
    }

    if(ipv4bfd_mplste_head_summary_nodes != nullptr)
    {
        children["ipv4bfd-mplste-head-summary-nodes"] = ipv4bfd_mplste_head_summary_nodes;
    }

    if(ipv4bfd_mplste_tail_node_summaries != nullptr)
    {
        children["ipv4bfd-mplste-tail-node-summaries"] = ipv4bfd_mplste_tail_node_summaries;
    }

    if(ipv6_multi_hop_counters != nullptr)
    {
        children["ipv6-multi-hop-counters"] = ipv6_multi_hop_counters;
    }

    if(ipv6_multi_hop_multi_paths != nullptr)
    {
        children["ipv6-multi-hop-multi-paths"] = ipv6_multi_hop_multi_paths;
    }

    if(ipv6_multi_hop_node_location_summaries != nullptr)
    {
        children["ipv6-multi-hop-node-location-summaries"] = ipv6_multi_hop_node_location_summaries;
    }

    if(ipv6_multi_hop_session_briefs != nullptr)
    {
        children["ipv6-multi-hop-session-briefs"] = ipv6_multi_hop_session_briefs;
    }

    if(ipv6_multi_hop_session_details != nullptr)
    {
        children["ipv6-multi-hop-session-details"] = ipv6_multi_hop_session_details;
    }

    if(ipv6_multi_hop_summary != nullptr)
    {
        children["ipv6-multi-hop-summary"] = ipv6_multi_hop_summary;
    }

    if(ipv6_single_hop_counters != nullptr)
    {
        children["ipv6-single-hop-counters"] = ipv6_single_hop_counters;
    }

    if(ipv6_single_hop_location_summaries != nullptr)
    {
        children["ipv6-single-hop-location-summaries"] = ipv6_single_hop_location_summaries;
    }

    if(ipv6_single_hop_multi_paths != nullptr)
    {
        children["ipv6-single-hop-multi-paths"] = ipv6_single_hop_multi_paths;
    }

    if(ipv6_single_hop_node_location_summaries != nullptr)
    {
        children["ipv6-single-hop-node-location-summaries"] = ipv6_single_hop_node_location_summaries;
    }

    if(ipv6_single_hop_session_briefs != nullptr)
    {
        children["ipv6-single-hop-session-briefs"] = ipv6_single_hop_session_briefs;
    }

    if(ipv6_single_hop_session_details != nullptr)
    {
        children["ipv6-single-hop-session-details"] = ipv6_single_hop_session_details;
    }

    if(ipv6_single_hop_summary != nullptr)
    {
        children["ipv6-single-hop-summary"] = ipv6_single_hop_summary;
    }

    if(label_counters != nullptr)
    {
        children["label-counters"] = label_counters;
    }

    if(label_multi_paths != nullptr)
    {
        children["label-multi-paths"] = label_multi_paths;
    }

    if(label_session_briefs != nullptr)
    {
        children["label-session-briefs"] = label_session_briefs;
    }

    if(label_session_details != nullptr)
    {
        children["label-session-details"] = label_session_details;
    }

    if(label_summary != nullptr)
    {
        children["label-summary"] = label_summary;
    }

    if(label_summary_nodes != nullptr)
    {
        children["label-summary-nodes"] = label_summary_nodes;
    }

    if(relation_briefs != nullptr)
    {
        children["relation-briefs"] = relation_briefs;
    }

    if(relation_details != nullptr)
    {
        children["relation-details"] = relation_details;
    }

    if(session_briefs != nullptr)
    {
        children["session-briefs"] = session_briefs;
    }

    if(session_details != nullptr)
    {
        children["session-details"] = session_details;
    }

    if(session_mibs != nullptr)
    {
        children["session-mibs"] = session_mibs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Bfd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Bfd::clone_ptr() const
{
    return std::make_shared<Bfd>();
}

std::string Bfd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bfd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bfd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Bfd::LabelSessionBriefs::LabelSessionBriefs()
{
    yang_name = "label-session-briefs"; yang_parent_name = "bfd";
}

Bfd::LabelSessionBriefs::~LabelSessionBriefs()
{
}

bool Bfd::LabelSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<label_session_brief.size(); index++)
    {
        if(label_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<label_session_brief.size(); index++)
    {
        if(label_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::LabelSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-briefs";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-session-brief")
    {
        for(auto const & c : label_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief>();
        c->parent = this;
        label_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelSessionBriefs::LabelSessionBrief::LabelSessionBrief()
    :
    incoming_label{YType::int32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "label-session-brief"; yang_parent_name = "label-session-briefs";
}

Bfd::LabelSessionBriefs::LabelSessionBrief::~LabelSessionBrief()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(state.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-brief";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSessionBriefs::LabelSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "label-session-brief";
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSummary::Ipv4BfDoMplsteTailSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4BfDoMplsteTailSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-summary"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteTailSummary::~Ipv4BfDoMplsteTailSummary()
{
}

bool Bfd::Ipv4BfDoMplsteTailSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-summary";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4BfDoMplsteTailSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4bf-do-mplste-tail-summary";
}

Bfd::Ipv4BfDoMplsteTailSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4BfDoMplsteTailSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopCounters()
    :
    ipv6_single_hop_packet_counters(std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters>())
{
    ipv6_single_hop_packet_counters->parent = this;

    yang_name = "ipv6-single-hop-counters"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopCounters::~Ipv6SingleHopCounters()
{
}

bool Bfd::Ipv6SingleHopCounters::has_data() const
{
    return (ipv6_single_hop_packet_counters !=  nullptr && ipv6_single_hop_packet_counters->has_data());
}

bool Bfd::Ipv6SingleHopCounters::has_operation() const
{
    return is_set(operation)
	|| (ipv6_single_hop_packet_counters !=  nullptr && ipv6_single_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv6SingleHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-counters";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-packet-counters")
    {
        if(ipv6_single_hop_packet_counters == nullptr)
        {
            ipv6_single_hop_packet_counters = std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters>();
        }
        return ipv6_single_hop_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_single_hop_packet_counters != nullptr)
    {
        children["ipv6-single-hop-packet-counters"] = ipv6_single_hop_packet_counters;
    }

    return children;
}

void Bfd::Ipv6SingleHopCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounters()
{
    yang_name = "ipv6-single-hop-packet-counters"; yang_parent_name = "ipv6-single-hop-counters";
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::~Ipv6SingleHopPacketCounters()
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_packet_counter.size(); index++)
    {
        if(ipv6_single_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_packet_counter.size(); index++)
    {
        if(ipv6_single_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-packet-counters";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-packet-counter")
    {
        for(auto const & c : ipv6_single_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter>();
        c->parent = this;
        ipv6_single_hop_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::Ipv6SingleHopPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"}
{
    yang_name = "ipv6-single-hop-packet-counter"; yang_parent_name = "ipv6-single-hop-packet-counters";
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::~Ipv6SingleHopPacketCounter()
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_data() const
{
    return interface_name.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set;
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation);
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-packet-counter" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-counters/ipv6-single-hop-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
}

Bfd::Counters::Counters()
    :
    packet_counters(std::make_shared<Bfd::Counters::PacketCounters>())
{
    packet_counters->parent = this;

    yang_name = "counters"; yang_parent_name = "bfd";
}

Bfd::Counters::~Counters()
{
}

bool Bfd::Counters::has_data() const
{
    return (packet_counters !=  nullptr && packet_counters->has_data());
}

bool Bfd::Counters::has_operation() const
{
    return is_set(operation)
	|| (packet_counters !=  nullptr && packet_counters->has_operation());
}

std::string Bfd::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Bfd::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counters")
    {
        if(packet_counters == nullptr)
        {
            packet_counters = std::make_shared<Bfd::Counters::PacketCounters>();
        }
        return packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_counters != nullptr)
    {
        children["packet-counters"] = packet_counters;
    }

    return children;
}

void Bfd::Counters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Counters::PacketCounters::PacketCounters()
{
    yang_name = "packet-counters"; yang_parent_name = "counters";
}

Bfd::Counters::PacketCounters::~PacketCounters()
{
}

bool Bfd::Counters::PacketCounters::has_data() const
{
    for (std::size_t index=0; index<packet_counter.size(); index++)
    {
        if(packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Counters::PacketCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_counter.size(); index++)
    {
        if(packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Counters::PacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counters";

    return path_buffer.str();

}

const EntityPath Bfd::Counters::PacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Counters::PacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counter")
    {
        for(auto const & c : packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Counters::PacketCounters::PacketCounter>();
        c->parent = this;
        packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Counters::PacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Counters::PacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Counters::PacketCounters::PacketCounter::PacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"}
{
    yang_name = "packet-counter"; yang_parent_name = "packet-counters";
}

Bfd::Counters::PacketCounters::PacketCounter::~PacketCounter()
{
}

bool Bfd::Counters::PacketCounters::PacketCounter::has_data() const
{
    return interface_name.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set;
}

bool Bfd::Counters::PacketCounters::PacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation);
}

std::string Bfd::Counters::PacketCounters::PacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counter" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Counters::PacketCounters::PacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/counters/packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Counters::PacketCounters::PacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Counters::PacketCounters::PacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Counters::PacketCounters::PacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
}

Bfd::ClientDetails::ClientDetails()
{
    yang_name = "client-details"; yang_parent_name = "bfd";
}

Bfd::ClientDetails::~ClientDetails()
{
}

bool Bfd::ClientDetails::has_data() const
{
    for (std::size_t index=0; index<client_detail.size(); index++)
    {
        if(client_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::ClientDetails::has_operation() const
{
    for (std::size_t index=0; index<client_detail.size(); index++)
    {
        if(client_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::ClientDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-details";

    return path_buffer.str();

}

const EntityPath Bfd::ClientDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::ClientDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-detail")
    {
        for(auto const & c : client_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::ClientDetails::ClientDetail>();
        c->parent = this;
        client_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::ClientDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::ClientDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::ClientDetails::ClientDetail::ClientDetail()
    :
    client_name{YType::str, "client-name"},
    recreate_time{YType::uint32, "recreate-time"}
    	,
    brief(std::make_shared<Bfd::ClientDetails::ClientDetail::Brief>())
	,flags(std::make_shared<Bfd::ClientDetails::ClientDetail::Flags>())
{
    brief->parent = this;

    flags->parent = this;

    yang_name = "client-detail"; yang_parent_name = "client-details";
}

Bfd::ClientDetails::ClientDetail::~ClientDetail()
{
}

bool Bfd::ClientDetails::ClientDetail::has_data() const
{
    return client_name.is_set
	|| recreate_time.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool Bfd::ClientDetails::ClientDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(client_name.operation)
	|| is_set(recreate_time.operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Bfd::ClientDetails::ClientDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-detail" <<"[client-name='" <<client_name <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::ClientDetails::ClientDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/client-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (recreate_time.is_set || is_set(recreate_time.operation)) leaf_name_data.push_back(recreate_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::ClientDetails::ClientDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Bfd::ClientDetails::ClientDetail::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Bfd::ClientDetails::ClientDetail::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::ClientDetails::ClientDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void Bfd::ClientDetails::ClientDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "recreate-time")
    {
        recreate_time = value;
    }
}

Bfd::ClientDetails::ClientDetail::Brief::Brief()
    :
    name_xr{YType::str, "name-xr"},
    node_id{YType::str, "node-id"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "brief"; yang_parent_name = "client-detail";
}

Bfd::ClientDetails::ClientDetail::Brief::~Brief()
{
}

bool Bfd::ClientDetails::ClientDetail::Brief::has_data() const
{
    return name_xr.is_set
	|| node_id.is_set
	|| session_count.is_set;
}

bool Bfd::ClientDetails::ClientDetail::Brief::has_operation() const
{
    return is_set(operation)
	|| is_set(name_xr.operation)
	|| is_set(node_id.operation)
	|| is_set(session_count.operation);
}

std::string Bfd::ClientDetails::ClientDetail::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

const EntityPath Bfd::ClientDetails::ClientDetail::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::ClientDetails::ClientDetail::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::ClientDetails::ClientDetail::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::ClientDetails::ClientDetail::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

Bfd::ClientDetails::ClientDetail::Flags::Flags()
    :
    is_recreate_state{YType::int32, "is-recreate-state"},
    is_zombie_state{YType::int32, "is-zombie-state"}
{
    yang_name = "flags"; yang_parent_name = "client-detail";
}

Bfd::ClientDetails::ClientDetail::Flags::~Flags()
{
}

bool Bfd::ClientDetails::ClientDetail::Flags::has_data() const
{
    return is_recreate_state.is_set
	|| is_zombie_state.is_set;
}

bool Bfd::ClientDetails::ClientDetail::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_recreate_state.operation)
	|| is_set(is_zombie_state.operation);
}

std::string Bfd::ClientDetails::ClientDetail::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

const EntityPath Bfd::ClientDetails::ClientDetail::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_recreate_state.is_set || is_set(is_recreate_state.operation)) leaf_name_data.push_back(is_recreate_state.get_name_leafdata());
    if (is_zombie_state.is_set || is_set(is_zombie_state.operation)) leaf_name_data.push_back(is_zombie_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::ClientDetails::ClientDetail::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::ClientDetails::ClientDetail::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::ClientDetails::ClientDetail::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-recreate-state")
    {
        is_recreate_state = value;
    }
    if(value_path == "is-zombie-state")
    {
        is_zombie_state = value;
    }
}

Bfd::Ipv4SingleHopSummary::Ipv4SingleHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4SingleHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-single-hop-summary"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopSummary::~Ipv4SingleHopSummary()
{
}

bool Bfd::Ipv4SingleHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-summary";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4SingleHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4SingleHopSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-summary";
}

Bfd::Ipv4SingleHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4SingleHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv6SingleHopSummary::Ipv6SingleHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv6SingleHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-summary"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopSummary::~Ipv6SingleHopSummary()
{
}

bool Bfd::Ipv6SingleHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-summary";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6SingleHopSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-summary";
}

Bfd::Ipv6SingleHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv6SingleHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::LabelMultiPaths::LabelMultiPaths()
{
    yang_name = "label-multi-paths"; yang_parent_name = "bfd";
}

Bfd::LabelMultiPaths::~LabelMultiPaths()
{
}

bool Bfd::LabelMultiPaths::has_data() const
{
    for (std::size_t index=0; index<label_multi_path.size(); index++)
    {
        if(label_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<label_multi_path.size(); index++)
    {
        if(label_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::LabelMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-multi-paths";

    return path_buffer.str();

}

const EntityPath Bfd::LabelMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-multi-path")
    {
        for(auto const & c : label_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::LabelMultiPaths::LabelMultiPath>();
        c->parent = this;
        label_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::LabelMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelMultiPaths::LabelMultiPath::LabelMultiPath()
    :
    incoming_label{YType::int32, "incoming-label"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"}
{
    yang_name = "label-multi-path"; yang_parent_name = "label-multi-paths";
}

Bfd::LabelMultiPaths::LabelMultiPath::~LabelMultiPath()
{
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_data() const
{
    return incoming_label.is_set
	|| incoming_label_xr.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set;
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(state.operation);
}

std::string Bfd::LabelMultiPaths::LabelMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-multi-path";

    return path_buffer.str();

}

const EntityPath Bfd::LabelMultiPaths::LabelMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelMultiPaths::LabelMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelMultiPaths::LabelMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelMultiPaths::LabelMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetails()
{
    yang_name = "ipv4-multi-hop-session-details"; yang_parent_name = "bfd";
}

Bfd::Ipv4MultiHopSessionDetails::~Ipv4MultiHopSessionDetails()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_session_detail.size(); index++)
    {
        if(ipv4_multi_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_session_detail.size(); index++)
    {
        if(ipv4_multi_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-details";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-session-detail")
    {
        for(auto const & c : ipv4_multi_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail>();
        c->parent = this;
        ipv4_multi_hop_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_multi_hop_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::Ipv4MultiHopSessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    source_address{YType::str, "source-address"},
    vrf_name{YType::str, "vrf-name"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;

    mp_download_state->parent = this;

    status_information->parent = this;

    yang_name = "ipv4-multi-hop-session-detail"; yang_parent_name = "ipv4-multi-hop-session-details";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::~Ipv4MultiHopSessionDetail()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| location.is_set
	|| source_address.is_set
	|| vrf_name.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(location.operation)
	|| is_set(source_address.operation)
	|| is_set(vrf_name.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-detail";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;

    async_transmit_statistics->parent = this;

    echo_received_statistics->parent = this;

    echo_transmit_statistics->parent = this;

    last_state_change->parent = this;

    receive_packet->parent = this;

    source_address->parent = this;

    status_brief_information->parent = this;

    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4-multi-hop-session-detail";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4-multi-hop-session-detail";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/mp-download-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;

    lsp_ping_tx_last_error_time->parent = this;

    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4-multi-hop-session-detail";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "ipv4-multi-hop-session-detail";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4-multi-hop-session-detail";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "session-key")
    {
        if(session_key == nullptr)
        {
            session_key = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey>();
        }
        return session_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(session_key != nullptr)
    {
        children["session-key"] = session_key;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;

    ip_destination_address->parent = this;

    ip_source_address->parent = this;

    target_address->parent = this;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfdfec")
    {
        if(bfdfec == nullptr)
        {
            bfdfec = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
        }
        return bfdfec;
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address == nullptr)
        {
            ip_source_address = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
        }
        return ip_source_address;
    }

    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfdfec != nullptr)
    {
        children["bfdfec"] = bfdfec;
    }

    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    if(ip_source_address != nullptr)
    {
        children["ip-source-address"] = ip_source_address;
    }

    if(target_address != nullptr)
    {
        children["target-address"] = target_address;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;

    te_s2l_fec->parent = this;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec == nullptr)
        {
            te_s2l_fec = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
        }
        return te_s2l_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(te_s2l_fec != nullptr)
    {
        children["te-s2l-fec"] = te_s2l_fec;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetails()
{
    yang_name = "ipv4-single-hop-session-details"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopSessionDetails::~Ipv4SingleHopSessionDetails()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_detail.size(); index++)
    {
        if(ipv4_single_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_detail.size(); index++)
    {
        if(ipv4_single_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-details";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-session-detail")
    {
        for(auto const & c : ipv4_single_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail>();
        c->parent = this;
        ipv4_single_hop_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_single_hop_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::Ipv4SingleHopSessionDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;

    mp_download_state->parent = this;

    status_information->parent = this;

    yang_name = "ipv4-single-hop-session-detail"; yang_parent_name = "ipv4-single-hop-session-details";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::~Ipv4SingleHopSessionDetail()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-detail";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;

    async_transmit_statistics->parent = this;

    echo_received_statistics->parent = this;

    echo_transmit_statistics->parent = this;

    last_state_change->parent = this;

    receive_packet->parent = this;

    source_address->parent = this;

    status_brief_information->parent = this;

    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4-single-hop-session-detail";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4-single-hop-session-detail";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/mp-download-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;

    lsp_ping_tx_last_error_time->parent = this;

    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4-single-hop-session-detail";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "ipv4-single-hop-session-detail";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4-single-hop-session-detail";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "session-key")
    {
        if(session_key == nullptr)
        {
            session_key = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey>();
        }
        return session_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(session_key != nullptr)
    {
        children["session-key"] = session_key;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;

    ip_destination_address->parent = this;

    ip_source_address->parent = this;

    target_address->parent = this;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfdfec")
    {
        if(bfdfec == nullptr)
        {
            bfdfec = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
        }
        return bfdfec;
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address == nullptr)
        {
            ip_source_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
        }
        return ip_source_address;
    }

    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfdfec != nullptr)
    {
        children["bfdfec"] = bfdfec;
    }

    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    if(ip_source_address != nullptr)
    {
        children["ip-source-address"] = ip_source_address;
    }

    if(target_address != nullptr)
    {
        children["target-address"] = target_address;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;

    te_s2l_fec->parent = this;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec == nullptr)
        {
            te_s2l_fec = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
        }
        return te_s2l_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(te_s2l_fec != nullptr)
    {
        children["te-s2l-fec"] = te_s2l_fec;
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBriefs()
{
    yang_name = "ipv4-multi-hop-session-briefs"; yang_parent_name = "bfd";
}

Bfd::Ipv4MultiHopSessionBriefs::~Ipv4MultiHopSessionBriefs()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_session_brief.size(); index++)
    {
        if(ipv4_multi_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_session_brief.size(); index++)
    {
        if(ipv4_multi_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4MultiHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-briefs";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-session-brief")
    {
        for(auto const & c : ipv4_multi_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief>();
        c->parent = this;
        ipv4_multi_hop_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_multi_hop_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::Ipv4MultiHopSessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4-multi-hop-session-brief"; yang_parent_name = "ipv4-multi-hop-session-briefs";
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::~Ipv4MultiHopSessionBrief()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::has_data() const
{
    return destination_address.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| state.is_set
	|| vrf_name.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-brief";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4-multi-hop-session-brief";
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/ipv4-multi-hop-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/ipv4-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/ipv4-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::GenericSummaries::GenericSummaries()
{
    yang_name = "generic-summaries"; yang_parent_name = "bfd";
}

Bfd::GenericSummaries::~GenericSummaries()
{
}

bool Bfd::GenericSummaries::has_data() const
{
    for (std::size_t index=0; index<generic_summary.size(); index++)
    {
        if(generic_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::GenericSummaries::has_operation() const
{
    for (std::size_t index=0; index<generic_summary.size(); index++)
    {
        if(generic_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::GenericSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-summaries";

    return path_buffer.str();

}

const EntityPath Bfd::GenericSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::GenericSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-summary")
    {
        for(auto const & c : generic_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::GenericSummaries::GenericSummary>();
        c->parent = this;
        generic_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::GenericSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::GenericSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::GenericSummaries::GenericSummary::GenericSummary()
    :
    location{YType::str, "location"},
    max_session_number{YType::uint32, "max-session-number"},
    mp_session_number{YType::uint32, "mp-session-number"},
    node_id{YType::str, "node-id"},
    pps_allocated_value{YType::uint32, "pps-allocated-value"},
    pps_max_value{YType::uint32, "pps-max-value"},
    ppsmp_allocated_value{YType::uint32, "ppsmp-allocated-value"},
    ppsmp_max_value{YType::uint32, "ppsmp-max-value"},
    total_session_number{YType::uint32, "total-session-number"}
{
    yang_name = "generic-summary"; yang_parent_name = "generic-summaries";
}

Bfd::GenericSummaries::GenericSummary::~GenericSummary()
{
}

bool Bfd::GenericSummaries::GenericSummary::has_data() const
{
    return location.is_set
	|| max_session_number.is_set
	|| mp_session_number.is_set
	|| node_id.is_set
	|| pps_allocated_value.is_set
	|| pps_max_value.is_set
	|| ppsmp_allocated_value.is_set
	|| ppsmp_max_value.is_set
	|| total_session_number.is_set;
}

bool Bfd::GenericSummaries::GenericSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| is_set(max_session_number.operation)
	|| is_set(mp_session_number.operation)
	|| is_set(node_id.operation)
	|| is_set(pps_allocated_value.operation)
	|| is_set(pps_max_value.operation)
	|| is_set(ppsmp_allocated_value.operation)
	|| is_set(ppsmp_max_value.operation)
	|| is_set(total_session_number.operation);
}

std::string Bfd::GenericSummaries::GenericSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-summary" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::GenericSummaries::GenericSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/generic-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (max_session_number.is_set || is_set(max_session_number.operation)) leaf_name_data.push_back(max_session_number.get_name_leafdata());
    if (mp_session_number.is_set || is_set(mp_session_number.operation)) leaf_name_data.push_back(mp_session_number.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pps_allocated_value.is_set || is_set(pps_allocated_value.operation)) leaf_name_data.push_back(pps_allocated_value.get_name_leafdata());
    if (pps_max_value.is_set || is_set(pps_max_value.operation)) leaf_name_data.push_back(pps_max_value.get_name_leafdata());
    if (ppsmp_allocated_value.is_set || is_set(ppsmp_allocated_value.operation)) leaf_name_data.push_back(ppsmp_allocated_value.get_name_leafdata());
    if (ppsmp_max_value.is_set || is_set(ppsmp_max_value.operation)) leaf_name_data.push_back(ppsmp_max_value.get_name_leafdata());
    if (total_session_number.is_set || is_set(total_session_number.operation)) leaf_name_data.push_back(total_session_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::GenericSummaries::GenericSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::GenericSummaries::GenericSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::GenericSummaries::GenericSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "max-session-number")
    {
        max_session_number = value;
    }
    if(value_path == "mp-session-number")
    {
        mp_session_number = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "pps-allocated-value")
    {
        pps_allocated_value = value;
    }
    if(value_path == "pps-max-value")
    {
        pps_max_value = value;
    }
    if(value_path == "ppsmp-allocated-value")
    {
        ppsmp_allocated_value = value;
    }
    if(value_path == "ppsmp-max-value")
    {
        ppsmp_max_value = value;
    }
    if(value_path == "total-session-number")
    {
        total_session_number = value;
    }
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPaths()
{
    yang_name = "ipv6-single-hop-multi-paths"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopMultiPaths::~Ipv6SingleHopMultiPaths()
{
}

bool Bfd::Ipv6SingleHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_multi_path.size(); index++)
    {
        if(ipv6_single_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_multi_path.size(); index++)
    {
        if(ipv6_single_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6SingleHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-multi-paths";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-multi-path")
    {
        for(auto const & c : ipv6_single_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath>();
        c->parent = this;
        ipv6_single_hop_multi_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_single_hop_multi_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6SingleHopMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::Ipv6SingleHopMultiPath()
    :
    destination_address{YType::str, "destination-address"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"}
{
    yang_name = "ipv6-single-hop-multi-path"; yang_parent_name = "ipv6-single-hop-multi-paths";
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::~Ipv6SingleHopMultiPath()
{
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_data() const
{
    return destination_address.is_set
	|| incoming_label_xr.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set;
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(state.operation);
}

std::string Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-multi-path";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummaries()
{
    yang_name = "ipv4-single-hop-node-location-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopNodeLocationSummaries::~Ipv4SingleHopNodeLocationSummaries()
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_node_location_summary.size(); index++)
    {
        if(ipv4_single_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_node_location_summary.size(); index++)
    {
        if(ipv4_single_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-node-location-summaries";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopNodeLocationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-node-location-summary")
    {
        for(auto const & c : ipv4_single_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary>();
        c->parent = this;
        ipv4_single_hop_node_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_single_hop_node_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::Ipv4SingleHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-single-hop-node-location-summary"; yang_parent_name = "ipv4-single-hop-node-location-summaries";
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::~Ipv4SingleHopNodeLocationSummary()
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-node-location-summary" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-node-location-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-node-location-summary";
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::LabelSummary::LabelSummary()
    :
    session_state(std::make_shared<Bfd::LabelSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "label-summary"; yang_parent_name = "bfd";
}

Bfd::LabelSummary::~LabelSummary()
{
}

bool Bfd::LabelSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::LabelSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::LabelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::LabelSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::LabelSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "label-summary";
}

Bfd::LabelSummary::SessionState::~SessionState()
{
}

bool Bfd::LabelSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::LabelSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::LabelSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::LabelSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::LabelSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::LabelSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBriefs()
{
    yang_name = "ipv4bf-do-mplste-head-session-briefs"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::~Ipv4BfDoMplsteHeadSessionBriefs()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_brief.size(); index++)
    {
        if(ipv4bf_do_mplste_head_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_brief.size(); index++)
    {
        if(ipv4bf_do_mplste_head_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-briefs";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteHeadSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-head-session-brief")
    {
        for(auto const & c : ipv4bf_do_mplste_head_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief>();
        c->parent = this;
        ipv4bf_do_mplste_head_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bf_do_mplste_head_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::Ipv4BfDoMplsteHeadSessionBrief()
    :
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    incoming_label{YType::int32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4bf-do-mplste-head-session-brief"; yang_parent_name = "ipv4bf-do-mplste-head-session-briefs";
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::~Ipv4BfDoMplsteHeadSessionBrief()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::has_data() const
{
    return fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| incoming_label.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| vrf_name.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-brief";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-brief";
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/ipv4bf-do-mplste-head-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/ipv4bf-do-mplste-head-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/ipv4bf-do-mplste-head-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionBriefs::Ipv4BfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetails()
{
    yang_name = "ipv4bf-do-mplste-tail-session-details"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::~Ipv4BfDoMplsteTailSessionDetails()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_detail.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_detail.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-details";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-session-detail")
    {
        for(auto const & c : ipv4bf_do_mplste_tail_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail>();
        c->parent = this;
        ipv4bf_do_mplste_tail_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bf_do_mplste_tail_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::Ipv4BfDoMplsteTailSessionDetail()
    :
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    incoming_label{YType::int32, "incoming-label"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;

    mp_download_state->parent = this;

    status_information->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-session-detail"; yang_parent_name = "ipv4bf-do-mplste-tail-session-details";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::~Ipv4BfDoMplsteTailSessionDetail()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| incoming_label.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(incoming_label.operation)
	|| is_set(location.operation)
	|| is_set(vrf_name.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-detail";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : association_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(lsp_ping_info != nullptr)
    {
        children["lsp-ping-info"] = lsp_ping_info;
    }

    if(mp_download_state != nullptr)
    {
        children["mp-download-state"] = mp_download_state;
    }

    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(status_information != nullptr)
    {
        children["status-information"] = status_information;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;

    async_transmit_statistics->parent = this;

    echo_received_statistics->parent = this;

    echo_transmit_statistics->parent = this;

    last_state_change->parent = this;

    receive_packet->parent = this;

    source_address->parent = this;

    status_brief_information->parent = this;

    transmit_packet->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_receive_statistics != nullptr)
    {
        children["async-receive-statistics"] = async_receive_statistics;
    }

    if(async_transmit_statistics != nullptr)
    {
        children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        children["echo-received-statistics"] = echo_received_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(last_state_change != nullptr)
    {
        children["last-state-change"] = last_state_change;
    }

    if(receive_packet != nullptr)
    {
        children["receive-packet"] = receive_packet;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    if(transmit_packet != nullptr)
    {
        children["transmit-packet"] = transmit_packet;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change_time != nullptr)
    {
        children["change-time"] = change_time;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/mp-download-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;

    lsp_ping_tx_last_error_time->parent = this;

    lsp_ping_tx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_ping_rx_last_time != nullptr)
    {
        children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_tx_last_time != nullptr)
    {
        children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(c);
        return c;
    }

    if(child_yang_name == "session-key")
    {
        if(session_key == nullptr)
        {
            session_key = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey>();
        }
        return session_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : owner_information)
    {
        children[c->get_segment_path()] = c;
    }

    if(session_key != nullptr)
    {
        children["session-key"] = session_key;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;

    ip_destination_address->parent = this;

    ip_source_address->parent = this;

    target_address->parent = this;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfdfec")
    {
        if(bfdfec == nullptr)
        {
            bfdfec = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
        }
        return bfdfec;
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address == nullptr)
        {
            ip_source_address = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
        }
        return ip_source_address;
    }

    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfdfec != nullptr)
    {
        children["bfdfec"] = bfdfec;
    }

    if(ip_destination_address != nullptr)
    {
        children["ip-destination-address"] = ip_destination_address;
    }

    if(ip_source_address != nullptr)
    {
        children["ip-source-address"] = ip_source_address;
    }

    if(target_address != nullptr)
    {
        children["target-address"] = target_address;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;

    te_s2l_fec->parent = this;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec == nullptr)
        {
            te_s2l_fec = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
        }
        return te_s2l_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(te_s2l_fec != nullptr)
    {
        children["te-s2l-fec"] = te_s2l_fec;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionDetails::Ipv4BfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummaries()
{
    yang_name = "ipv4-multi-hop-node-location-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv4MultiHopNodeLocationSummaries::~Ipv4MultiHopNodeLocationSummaries()
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_node_location_summary.size(); index++)
    {
        if(ipv4_multi_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_node_location_summary.size(); index++)
    {
        if(ipv4_multi_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-node-location-summaries";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopNodeLocationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-node-location-summary")
    {
        for(auto const & c : ipv4_multi_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary>();
        c->parent = this;
        ipv4_multi_hop_node_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_multi_hop_node_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::Ipv4MultiHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-multi-hop-node-location-summary"; yang_parent_name = "ipv4-multi-hop-node-location-summaries";
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::~Ipv4MultiHopNodeLocationSummary()
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-node-location-summary" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-node-location-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4-multi-hop-node-location-summary";
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBriefs()
{
    yang_name = "ipv4bf-do-mplste-tail-session-briefs"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::~Ipv4BfDoMplsteTailSessionBriefs()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_brief.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_brief.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-briefs";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-session-brief")
    {
        for(auto const & c : ipv4bf_do_mplste_tail_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief>();
        c->parent = this;
        ipv4bf_do_mplste_tail_session_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4bf_do_mplste_tail_session_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::Ipv4BfDoMplsteTailSessionBrief()
    :
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    incoming_label{YType::int32, "incoming-label"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-session-brief"; yang_parent_name = "ipv4bf-do-mplste-tail-session-briefs";
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::~Ipv4BfDoMplsteTailSessionBrief()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::has_data() const
{
    return fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| incoming_label.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| vrf_name.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(incoming_label.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-brief";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_brief_information != nullptr)
    {
        children["status-brief-information"] = status_brief_information;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;

    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-brief";
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/ipv4bf-do-mplste-tail-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(async_interval_multiplier != nullptr)
    {
        children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/ipv4bf-do-mplste-tail-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/ipv4bf-do-mplste-tail-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4BfDoMplsteTailSessionBriefs::Ipv4BfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummaries()
{
    yang_name = "ipv6-multi-hop-node-location-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv6MultiHopNodeLocationSummaries::~Ipv6MultiHopNodeLocationSummaries()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_node_location_summary.size(); index++)
    {
        if(ipv6_multi_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_node_location_summary.size(); index++)
    {
        if(ipv6_multi_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-node-location-summaries";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6MultiHopNodeLocationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-node-location-summary")
    {
        for(auto const & c : ipv6_multi_hop_node_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary>();
        c->parent = this;
        ipv6_multi_hop_node_location_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_node_location_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::Ipv6MultiHopNodeLocationSummary()
    :
    location{YType::str, "location"}
    	,
    session_state(std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-multi-hop-node-location-summary"; yang_parent_name = "ipv6-multi-hop-node-location-summaries";
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::~Ipv6MultiHopNodeLocationSummary()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_data() const
{
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-node-location-summary" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-node-location-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv6-multi-hop-node-location-summary";
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4MultiHopSummary::Ipv4MultiHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4MultiHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-multi-hop-summary"; yang_parent_name = "bfd";
}

Bfd::Ipv4MultiHopSummary::~Ipv4MultiHopSummary()
{
}

bool Bfd::Ipv4MultiHopSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4MultiHopSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4MultiHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-summary";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4MultiHopSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Bfd::Ipv4MultiHopSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4-multi-hop-summary";
}

Bfd::Ipv4MultiHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4MultiHopSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4MultiHopSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4MultiHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4MultiHopSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4MultiHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4MultiHopSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopCounters()
    :
    ipv4_single_hop_packet_counters(std::make_shared<Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters>())
{
    ipv4_single_hop_packet_counters->parent = this;

    yang_name = "ipv4-single-hop-counters"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopCounters::~Ipv4SingleHopCounters()
{
}

bool Bfd::Ipv4SingleHopCounters::has_data() const
{
    return (ipv4_single_hop_packet_counters !=  nullptr && ipv4_single_hop_packet_counters->has_data());
}

bool Bfd::Ipv4SingleHopCounters::has_operation() const
{
    return is_set(operation)
	|| (ipv4_single_hop_packet_counters !=  nullptr && ipv4_single_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv4SingleHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-counters";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-packet-counters")
    {
        if(ipv4_single_hop_packet_counters == nullptr)
        {
            ipv4_single_hop_packet_counters = std::make_shared<Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters>();
        }
        return ipv4_single_hop_packet_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_single_hop_packet_counters != nullptr)
    {
        children["ipv4-single-hop-packet-counters"] = ipv4_single_hop_packet_counters;
    }

    return children;
}

void Bfd::Ipv4SingleHopCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounters()
{
    yang_name = "ipv4-single-hop-packet-counters"; yang_parent_name = "ipv4-single-hop-counters";
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::~Ipv4SingleHopPacketCounters()
{
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_packet_counter.size(); index++)
    {
        if(ipv4_single_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_packet_counter.size(); index++)
    {
        if(ipv4_single_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-packet-counters";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-packet-counter")
    {
        for(auto const & c : ipv4_single_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter>();
        c->parent = this;
        ipv4_single_hop_packet_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_single_hop_packet_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::Ipv4SingleHopPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"}
{
    yang_name = "ipv4-single-hop-packet-counter"; yang_parent_name = "ipv4-single-hop-packet-counters";
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::~Ipv4SingleHopPacketCounter()
{
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::has_data() const
{
    return interface_name.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set;
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation);
}

std::string Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-packet-counter" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-counters/ipv4-single-hop-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetails()
{
    yang_name = "ipv6-multi-hop-session-details"; yang_parent_name = "bfd";
}

Bfd::Ipv6MultiHopSessionDetails::~Ipv6MultiHopSessionDetails()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_detail.size(); index++)
    {
        if(ipv6_multi_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_detail.size(); index++)
    {
        if(ipv6_multi_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6MultiHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-details";

    return path_buffer.str();

}

const EntityPath Bfd::Ipv6MultiHopSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-session-detail")
    {
        for(auto const & c : ipv6_multi_hop_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail>();
        c->parent = this;
        ipv6_multi_hop_session_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Ipv6MultiHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_multi_hop_session_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Ipv6MultiHopSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf BfdApiFecEnum::bfd_api_fec_type_none {0, "bfd-api-fec-type-none"};
const Enum::YLeaf BfdApiFecEnum::bfd_api_fec_type_p2p_te {1, "bfd-api-fec-type-p2p-te"};

const Enum::YLeaf BfdSessionEnum::undefined {0, "undefined"};
const Enum::YLeaf BfdSessionEnum::bundle_member {1, "bundle-member"};
const Enum::YLeaf BfdSessionEnum::bundle_interface {2, "bundle-interface"};
const Enum::YLeaf BfdSessionEnum::state_inheriting {3, "state-inheriting"};
const Enum::YLeaf BfdSessionEnum::bundle_vlan {4, "bundle-vlan"};
const Enum::YLeaf BfdSessionEnum::mpls_tp {5, "mpls-tp"};
const Enum::YLeaf BfdSessionEnum::gre {6, "gre"};
const Enum::YLeaf BfdSessionEnum::pseudowire_headend {7, "pseudowire-headend"};
const Enum::YLeaf BfdSessionEnum::ip_single_hop {8, "ip-single-hop"};

const Enum::YLeaf BfdAfIdEnum::bfd_af_id_none {0, "bfd-af-id-none"};
const Enum::YLeaf BfdAfIdEnum::bfd_af_id_ipv4 {2, "bfd-af-id-ipv4"};
const Enum::YLeaf BfdAfIdEnum::bfd_af_id_ipv6 {10, "bfd-af-id-ipv6"};

const Enum::YLeaf BfdMpDownloadStateEnum::bfd_mp_download_none {0, "bfd-mp-download-none"};
const Enum::YLeaf BfdMpDownloadStateEnum::bfd_mp_download_no_lc {1, "bfd-mp-download-no-lc"};
const Enum::YLeaf BfdMpDownloadStateEnum::bfd_mp_download_downloaded {2, "bfd-mp-download-downloaded"};
const Enum::YLeaf BfdMpDownloadStateEnum::bfd_mp_download_ack {3, "bfd-mp-download-ack"};
const Enum::YLeaf BfdMpDownloadStateEnum::bfd_mp_download_nack {4, "bfd-mp-download-nack"};
const Enum::YLeaf BfdMpDownloadStateEnum::bfd_mp_download_delete {5, "bfd-mp-download-delete"};

const Enum::YLeaf BfdMgmtSessionStateEnum::bfd_mgmt_session_state_admin_down {0, "bfd-mgmt-session-state-admin-down"};
const Enum::YLeaf BfdMgmtSessionStateEnum::bfd_mgmt_session_state_down {1, "bfd-mgmt-session-state-down"};
const Enum::YLeaf BfdMgmtSessionStateEnum::bfd_mgmt_session_state_init {2, "bfd-mgmt-session-state-init"};
const Enum::YLeaf BfdMgmtSessionStateEnum::bfd_mgmt_session_state_up {3, "bfd-mgmt-session-state-up"};
const Enum::YLeaf BfdMgmtSessionStateEnum::bfd_mgmt_session_state_failing {4, "bfd-mgmt-session-state-failing"};
const Enum::YLeaf BfdMgmtSessionStateEnum::bfd_mgmt_session_state_unknown {6, "bfd-mgmt-session-state-unknown"};

const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_none {0, "bfd-mgmt-session-diag-none"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_control_detect_expired {1, "bfd-mgmt-session-diag-control-detect-expired"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_echo_function_failed {2, "bfd-mgmt-session-diag-echo-function-failed"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_nb_or_signaled_down {3, "bfd-mgmt-session-diag-nb-or-signaled-down"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_fwding_plane_reset {4, "bfd-mgmt-session-diag-fwding-plane-reset"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_path_down {5, "bfd-mgmt-session-diag-path-down"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_conc_path_down {6, "bfd-mgmt-session-diag-conc-path-down"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_admin_down {7, "bfd-mgmt-session-diag-admin-down"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_rev_conc_path_down {8, "bfd-mgmt-session-diag-rev-conc-path-down"};
const Enum::YLeaf BfdMgmtSessionDiagEnum::bfd_mgmt_session_diag_num {10, "bfd-mgmt-session-diag-num"};

const Enum::YLeaf BfdMgmtPktDisplayEnum::bfd_mgmt_pkt_display_type_none {0, "bfd-mgmt-pkt-display-type-none"};
const Enum::YLeaf BfdMgmtPktDisplayEnum::bfd_mgmt_pkt_display_type_bob_mbr {1, "bfd-mgmt-pkt-display-type-bob-mbr"};
const Enum::YLeaf BfdMgmtPktDisplayEnum::bfd_mgmt_pkt_display_type_max {2, "bfd-mgmt-pkt-display-type-max"};

const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_null {0, "mpls-lib-c-type-null"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4 {1, "mpls-lib-c-type-ipv4"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_p2p_tunnel {7, "mpls-lib-c-type-ipv4-p2p-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv6_p2p_tunnel {8, "mpls-lib-c-type-ipv6-p2p-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_uni {9, "mpls-lib-c-type-ipv4-uni"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_p2mp_tunnel {13, "mpls-lib-c-type-ipv4-p2mp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv6_p2mp_tunnel {14, "mpls-lib-c-type-ipv6-p2mp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_tp_tunnel {15, "mpls-lib-c-type-ipv4-tp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv6_tp_tunnel {16, "mpls-lib-c-type-ipv6-tp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_p2p_binding_label {17, "mpls-lib-c-type-p2p-binding-label"};


}
}

