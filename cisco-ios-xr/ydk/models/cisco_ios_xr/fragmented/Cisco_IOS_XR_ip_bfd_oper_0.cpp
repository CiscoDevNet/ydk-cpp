
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_0.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_1.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::Bfd()
    :
    label_session_briefs(std::make_shared<Bfd::LabelSessionBriefs>())
    , ipv4bf_do_mplste_tail_summary(std::make_shared<Bfd::Ipv4bfDoMplsteTailSummary>())
    , ipv6_single_hop_counters(std::make_shared<Bfd::Ipv6SingleHopCounters>())
    , counters(std::make_shared<Bfd::Counters>())
    , client_details(std::make_shared<Bfd::ClientDetails>())
    , ipv4_single_hop_summary(std::make_shared<Bfd::Ipv4SingleHopSummary>())
    , ipv6_single_hop_summary(std::make_shared<Bfd::Ipv6SingleHopSummary>())
    , label_multi_paths(std::make_shared<Bfd::LabelMultiPaths>())
    , ipv4_multi_hop_session_details(std::make_shared<Bfd::Ipv4MultiHopSessionDetails>())
    , ipv4_single_hop_session_details(std::make_shared<Bfd::Ipv4SingleHopSessionDetails>())
    , ipv4_multi_hop_session_briefs(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs>())
    , generic_summaries(std::make_shared<Bfd::GenericSummaries>())
    , ipv6_single_hop_multi_paths(std::make_shared<Bfd::Ipv6SingleHopMultiPaths>())
    , ipv4_single_hop_node_location_summaries(std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries>())
    , label_summary(std::make_shared<Bfd::LabelSummary>())
    , ipv4bf_do_mplste_head_session_briefs(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs>())
    , ipv4bf_do_mplste_tail_session_details(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails>())
    , ipv4_multi_hop_node_location_summaries(std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries>())
    , ipv4bf_do_mplste_tail_session_briefs(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs>())
    , ipv6_multi_hop_node_location_summaries(std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries>())
    , ipv4_multi_hop_summary(std::make_shared<Bfd::Ipv4MultiHopSummary>())
    , ipv4_single_hop_counters(std::make_shared<Bfd::Ipv4SingleHopCounters>())
    , ipv6_multi_hop_session_details(std::make_shared<Bfd::Ipv6MultiHopSessionDetails>())
    , ipv6_multi_hop_multi_paths(std::make_shared<Bfd::Ipv6MultiHopMultiPaths>())
    , ipv4bf_do_mplste_head_counters(std::make_shared<Bfd::Ipv4bfDoMplsteHeadCounters>())
    , session_mibs(std::make_shared<Bfd::SessionMibs>())
    , ipv6_multi_hop_summary(std::make_shared<Bfd::Ipv6MultiHopSummary>())
    , label_summary_nodes(std::make_shared<Bfd::LabelSummaryNodes>())
    , ipv6_multi_hop_session_briefs(std::make_shared<Bfd::Ipv6MultiHopSessionBriefs>())
    , session_briefs(std::make_shared<Bfd::SessionBriefs>())
    , ipv6_single_hop_node_location_summaries(std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries>())
    , summary(std::make_shared<Bfd::Summary>())
    , ipv4bfd_mplste_tail_node_summaries(std::make_shared<Bfd::Ipv4bfdMplsteTailNodeSummaries>())
    , ipv4_single_hop_location_summaries(std::make_shared<Bfd::Ipv4SingleHopLocationSummaries>())
    , ipv4bfd_mplste_head_summary_nodes(std::make_shared<Bfd::Ipv4bfdMplsteHeadSummaryNodes>())
    , label_session_details(std::make_shared<Bfd::LabelSessionDetails>())
    , ipv6_single_hop_session_details(std::make_shared<Bfd::Ipv6SingleHopSessionDetails>())
    , ipv4_multi_hop_counters(std::make_shared<Bfd::Ipv4MultiHopCounters>())
    , session_details(std::make_shared<Bfd::SessionDetails>())
    , ipv4_single_hop_multi_paths(std::make_shared<Bfd::Ipv4SingleHopMultiPaths>())
    , ipv4_single_hop_session_briefs(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs>())
    , ipv6_multi_hop_counters(std::make_shared<Bfd::Ipv6MultiHopCounters>())
    , ipv6_single_hop_location_summaries(std::make_shared<Bfd::Ipv6SingleHopLocationSummaries>())
    , label_counters(std::make_shared<Bfd::LabelCounters>())
    , ipv4bf_do_mplste_head_session_details(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionDetails>())
    , relation_briefs(std::make_shared<Bfd::RelationBriefs>())
    , client_briefs(std::make_shared<Bfd::ClientBriefs>())
    , ipv4bf_do_mplste_head_multi_paths(std::make_shared<Bfd::Ipv4bfDoMplsteHeadMultiPaths>())
    , relation_details(std::make_shared<Bfd::RelationDetails>())
    , ipv4bf_do_mplste_tail_counters(std::make_shared<Bfd::Ipv4bfDoMplsteTailCounters>())
    , ipv6_single_hop_session_briefs(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs>())
    , ipv4bf_do_mplste_tail_multi_paths(std::make_shared<Bfd::Ipv4bfDoMplsteTailMultiPaths>())
    , ipv4_multi_hop_multi_paths(std::make_shared<Bfd::Ipv4MultiHopMultiPaths>())
    , ipv4bf_do_mplste_head_summary(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSummary>())
{
    label_session_briefs->parent = this;
    ipv4bf_do_mplste_tail_summary->parent = this;
    ipv6_single_hop_counters->parent = this;
    counters->parent = this;
    client_details->parent = this;
    ipv4_single_hop_summary->parent = this;
    ipv6_single_hop_summary->parent = this;
    label_multi_paths->parent = this;
    ipv4_multi_hop_session_details->parent = this;
    ipv4_single_hop_session_details->parent = this;
    ipv4_multi_hop_session_briefs->parent = this;
    generic_summaries->parent = this;
    ipv6_single_hop_multi_paths->parent = this;
    ipv4_single_hop_node_location_summaries->parent = this;
    label_summary->parent = this;
    ipv4bf_do_mplste_head_session_briefs->parent = this;
    ipv4bf_do_mplste_tail_session_details->parent = this;
    ipv4_multi_hop_node_location_summaries->parent = this;
    ipv4bf_do_mplste_tail_session_briefs->parent = this;
    ipv6_multi_hop_node_location_summaries->parent = this;
    ipv4_multi_hop_summary->parent = this;
    ipv4_single_hop_counters->parent = this;
    ipv6_multi_hop_session_details->parent = this;
    ipv6_multi_hop_multi_paths->parent = this;
    ipv4bf_do_mplste_head_counters->parent = this;
    session_mibs->parent = this;
    ipv6_multi_hop_summary->parent = this;
    label_summary_nodes->parent = this;
    ipv6_multi_hop_session_briefs->parent = this;
    session_briefs->parent = this;
    ipv6_single_hop_node_location_summaries->parent = this;
    summary->parent = this;
    ipv4bfd_mplste_tail_node_summaries->parent = this;
    ipv4_single_hop_location_summaries->parent = this;
    ipv4bfd_mplste_head_summary_nodes->parent = this;
    label_session_details->parent = this;
    ipv6_single_hop_session_details->parent = this;
    ipv4_multi_hop_counters->parent = this;
    session_details->parent = this;
    ipv4_single_hop_multi_paths->parent = this;
    ipv4_single_hop_session_briefs->parent = this;
    ipv6_multi_hop_counters->parent = this;
    ipv6_single_hop_location_summaries->parent = this;
    label_counters->parent = this;
    ipv4bf_do_mplste_head_session_details->parent = this;
    relation_briefs->parent = this;
    client_briefs->parent = this;
    ipv4bf_do_mplste_head_multi_paths->parent = this;
    relation_details->parent = this;
    ipv4bf_do_mplste_tail_counters->parent = this;
    ipv6_single_hop_session_briefs->parent = this;
    ipv4bf_do_mplste_tail_multi_paths->parent = this;
    ipv4_multi_hop_multi_paths->parent = this;
    ipv4bf_do_mplste_head_summary->parent = this;

    yang_name = "bfd"; yang_parent_name = "Cisco-IOS-XR-ip-bfd-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Bfd::~Bfd()
{
}

bool Bfd::has_data() const
{
    if (is_presence_container) return true;
    return (label_session_briefs !=  nullptr && label_session_briefs->has_data())
	|| (ipv4bf_do_mplste_tail_summary !=  nullptr && ipv4bf_do_mplste_tail_summary->has_data())
	|| (ipv6_single_hop_counters !=  nullptr && ipv6_single_hop_counters->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (client_details !=  nullptr && client_details->has_data())
	|| (ipv4_single_hop_summary !=  nullptr && ipv4_single_hop_summary->has_data())
	|| (ipv6_single_hop_summary !=  nullptr && ipv6_single_hop_summary->has_data())
	|| (label_multi_paths !=  nullptr && label_multi_paths->has_data())
	|| (ipv4_multi_hop_session_details !=  nullptr && ipv4_multi_hop_session_details->has_data())
	|| (ipv4_single_hop_session_details !=  nullptr && ipv4_single_hop_session_details->has_data())
	|| (ipv4_multi_hop_session_briefs !=  nullptr && ipv4_multi_hop_session_briefs->has_data())
	|| (generic_summaries !=  nullptr && generic_summaries->has_data())
	|| (ipv6_single_hop_multi_paths !=  nullptr && ipv6_single_hop_multi_paths->has_data())
	|| (ipv4_single_hop_node_location_summaries !=  nullptr && ipv4_single_hop_node_location_summaries->has_data())
	|| (label_summary !=  nullptr && label_summary->has_data())
	|| (ipv4bf_do_mplste_head_session_briefs !=  nullptr && ipv4bf_do_mplste_head_session_briefs->has_data())
	|| (ipv4bf_do_mplste_tail_session_details !=  nullptr && ipv4bf_do_mplste_tail_session_details->has_data())
	|| (ipv4_multi_hop_node_location_summaries !=  nullptr && ipv4_multi_hop_node_location_summaries->has_data())
	|| (ipv4bf_do_mplste_tail_session_briefs !=  nullptr && ipv4bf_do_mplste_tail_session_briefs->has_data())
	|| (ipv6_multi_hop_node_location_summaries !=  nullptr && ipv6_multi_hop_node_location_summaries->has_data())
	|| (ipv4_multi_hop_summary !=  nullptr && ipv4_multi_hop_summary->has_data())
	|| (ipv4_single_hop_counters !=  nullptr && ipv4_single_hop_counters->has_data())
	|| (ipv6_multi_hop_session_details !=  nullptr && ipv6_multi_hop_session_details->has_data())
	|| (ipv6_multi_hop_multi_paths !=  nullptr && ipv6_multi_hop_multi_paths->has_data())
	|| (ipv4bf_do_mplste_head_counters !=  nullptr && ipv4bf_do_mplste_head_counters->has_data())
	|| (session_mibs !=  nullptr && session_mibs->has_data())
	|| (ipv6_multi_hop_summary !=  nullptr && ipv6_multi_hop_summary->has_data())
	|| (label_summary_nodes !=  nullptr && label_summary_nodes->has_data())
	|| (ipv6_multi_hop_session_briefs !=  nullptr && ipv6_multi_hop_session_briefs->has_data())
	|| (session_briefs !=  nullptr && session_briefs->has_data())
	|| (ipv6_single_hop_node_location_summaries !=  nullptr && ipv6_single_hop_node_location_summaries->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (ipv4bfd_mplste_tail_node_summaries !=  nullptr && ipv4bfd_mplste_tail_node_summaries->has_data())
	|| (ipv4_single_hop_location_summaries !=  nullptr && ipv4_single_hop_location_summaries->has_data())
	|| (ipv4bfd_mplste_head_summary_nodes !=  nullptr && ipv4bfd_mplste_head_summary_nodes->has_data())
	|| (label_session_details !=  nullptr && label_session_details->has_data())
	|| (ipv6_single_hop_session_details !=  nullptr && ipv6_single_hop_session_details->has_data())
	|| (ipv4_multi_hop_counters !=  nullptr && ipv4_multi_hop_counters->has_data())
	|| (session_details !=  nullptr && session_details->has_data())
	|| (ipv4_single_hop_multi_paths !=  nullptr && ipv4_single_hop_multi_paths->has_data())
	|| (ipv4_single_hop_session_briefs !=  nullptr && ipv4_single_hop_session_briefs->has_data())
	|| (ipv6_multi_hop_counters !=  nullptr && ipv6_multi_hop_counters->has_data())
	|| (ipv6_single_hop_location_summaries !=  nullptr && ipv6_single_hop_location_summaries->has_data())
	|| (label_counters !=  nullptr && label_counters->has_data())
	|| (ipv4bf_do_mplste_head_session_details !=  nullptr && ipv4bf_do_mplste_head_session_details->has_data())
	|| (relation_briefs !=  nullptr && relation_briefs->has_data())
	|| (client_briefs !=  nullptr && client_briefs->has_data())
	|| (ipv4bf_do_mplste_head_multi_paths !=  nullptr && ipv4bf_do_mplste_head_multi_paths->has_data())
	|| (relation_details !=  nullptr && relation_details->has_data())
	|| (ipv4bf_do_mplste_tail_counters !=  nullptr && ipv4bf_do_mplste_tail_counters->has_data())
	|| (ipv6_single_hop_session_briefs !=  nullptr && ipv6_single_hop_session_briefs->has_data())
	|| (ipv4bf_do_mplste_tail_multi_paths !=  nullptr && ipv4bf_do_mplste_tail_multi_paths->has_data())
	|| (ipv4_multi_hop_multi_paths !=  nullptr && ipv4_multi_hop_multi_paths->has_data())
	|| (ipv4bf_do_mplste_head_summary !=  nullptr && ipv4bf_do_mplste_head_summary->has_data());
}

bool Bfd::has_operation() const
{
    return is_set(yfilter)
	|| (label_session_briefs !=  nullptr && label_session_briefs->has_operation())
	|| (ipv4bf_do_mplste_tail_summary !=  nullptr && ipv4bf_do_mplste_tail_summary->has_operation())
	|| (ipv6_single_hop_counters !=  nullptr && ipv6_single_hop_counters->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (client_details !=  nullptr && client_details->has_operation())
	|| (ipv4_single_hop_summary !=  nullptr && ipv4_single_hop_summary->has_operation())
	|| (ipv6_single_hop_summary !=  nullptr && ipv6_single_hop_summary->has_operation())
	|| (label_multi_paths !=  nullptr && label_multi_paths->has_operation())
	|| (ipv4_multi_hop_session_details !=  nullptr && ipv4_multi_hop_session_details->has_operation())
	|| (ipv4_single_hop_session_details !=  nullptr && ipv4_single_hop_session_details->has_operation())
	|| (ipv4_multi_hop_session_briefs !=  nullptr && ipv4_multi_hop_session_briefs->has_operation())
	|| (generic_summaries !=  nullptr && generic_summaries->has_operation())
	|| (ipv6_single_hop_multi_paths !=  nullptr && ipv6_single_hop_multi_paths->has_operation())
	|| (ipv4_single_hop_node_location_summaries !=  nullptr && ipv4_single_hop_node_location_summaries->has_operation())
	|| (label_summary !=  nullptr && label_summary->has_operation())
	|| (ipv4bf_do_mplste_head_session_briefs !=  nullptr && ipv4bf_do_mplste_head_session_briefs->has_operation())
	|| (ipv4bf_do_mplste_tail_session_details !=  nullptr && ipv4bf_do_mplste_tail_session_details->has_operation())
	|| (ipv4_multi_hop_node_location_summaries !=  nullptr && ipv4_multi_hop_node_location_summaries->has_operation())
	|| (ipv4bf_do_mplste_tail_session_briefs !=  nullptr && ipv4bf_do_mplste_tail_session_briefs->has_operation())
	|| (ipv6_multi_hop_node_location_summaries !=  nullptr && ipv6_multi_hop_node_location_summaries->has_operation())
	|| (ipv4_multi_hop_summary !=  nullptr && ipv4_multi_hop_summary->has_operation())
	|| (ipv4_single_hop_counters !=  nullptr && ipv4_single_hop_counters->has_operation())
	|| (ipv6_multi_hop_session_details !=  nullptr && ipv6_multi_hop_session_details->has_operation())
	|| (ipv6_multi_hop_multi_paths !=  nullptr && ipv6_multi_hop_multi_paths->has_operation())
	|| (ipv4bf_do_mplste_head_counters !=  nullptr && ipv4bf_do_mplste_head_counters->has_operation())
	|| (session_mibs !=  nullptr && session_mibs->has_operation())
	|| (ipv6_multi_hop_summary !=  nullptr && ipv6_multi_hop_summary->has_operation())
	|| (label_summary_nodes !=  nullptr && label_summary_nodes->has_operation())
	|| (ipv6_multi_hop_session_briefs !=  nullptr && ipv6_multi_hop_session_briefs->has_operation())
	|| (session_briefs !=  nullptr && session_briefs->has_operation())
	|| (ipv6_single_hop_node_location_summaries !=  nullptr && ipv6_single_hop_node_location_summaries->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (ipv4bfd_mplste_tail_node_summaries !=  nullptr && ipv4bfd_mplste_tail_node_summaries->has_operation())
	|| (ipv4_single_hop_location_summaries !=  nullptr && ipv4_single_hop_location_summaries->has_operation())
	|| (ipv4bfd_mplste_head_summary_nodes !=  nullptr && ipv4bfd_mplste_head_summary_nodes->has_operation())
	|| (label_session_details !=  nullptr && label_session_details->has_operation())
	|| (ipv6_single_hop_session_details !=  nullptr && ipv6_single_hop_session_details->has_operation())
	|| (ipv4_multi_hop_counters !=  nullptr && ipv4_multi_hop_counters->has_operation())
	|| (session_details !=  nullptr && session_details->has_operation())
	|| (ipv4_single_hop_multi_paths !=  nullptr && ipv4_single_hop_multi_paths->has_operation())
	|| (ipv4_single_hop_session_briefs !=  nullptr && ipv4_single_hop_session_briefs->has_operation())
	|| (ipv6_multi_hop_counters !=  nullptr && ipv6_multi_hop_counters->has_operation())
	|| (ipv6_single_hop_location_summaries !=  nullptr && ipv6_single_hop_location_summaries->has_operation())
	|| (label_counters !=  nullptr && label_counters->has_operation())
	|| (ipv4bf_do_mplste_head_session_details !=  nullptr && ipv4bf_do_mplste_head_session_details->has_operation())
	|| (relation_briefs !=  nullptr && relation_briefs->has_operation())
	|| (client_briefs !=  nullptr && client_briefs->has_operation())
	|| (ipv4bf_do_mplste_head_multi_paths !=  nullptr && ipv4bf_do_mplste_head_multi_paths->has_operation())
	|| (relation_details !=  nullptr && relation_details->has_operation())
	|| (ipv4bf_do_mplste_tail_counters !=  nullptr && ipv4bf_do_mplste_tail_counters->has_operation())
	|| (ipv6_single_hop_session_briefs !=  nullptr && ipv6_single_hop_session_briefs->has_operation())
	|| (ipv4bf_do_mplste_tail_multi_paths !=  nullptr && ipv4bf_do_mplste_tail_multi_paths->has_operation())
	|| (ipv4_multi_hop_multi_paths !=  nullptr && ipv4_multi_hop_multi_paths->has_operation())
	|| (ipv4bf_do_mplste_head_summary !=  nullptr && ipv4bf_do_mplste_head_summary->has_operation());
}

std::string Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-session-briefs")
    {
        if(label_session_briefs == nullptr)
        {
            label_session_briefs = std::make_shared<Bfd::LabelSessionBriefs>();
        }
        return label_session_briefs;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-summary")
    {
        if(ipv4bf_do_mplste_tail_summary == nullptr)
        {
            ipv4bf_do_mplste_tail_summary = std::make_shared<Bfd::Ipv4bfDoMplsteTailSummary>();
        }
        return ipv4bf_do_mplste_tail_summary;
    }

    if(child_yang_name == "ipv6-single-hop-counters")
    {
        if(ipv6_single_hop_counters == nullptr)
        {
            ipv6_single_hop_counters = std::make_shared<Bfd::Ipv6SingleHopCounters>();
        }
        return ipv6_single_hop_counters;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Bfd::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "client-details")
    {
        if(client_details == nullptr)
        {
            client_details = std::make_shared<Bfd::ClientDetails>();
        }
        return client_details;
    }

    if(child_yang_name == "ipv4-single-hop-summary")
    {
        if(ipv4_single_hop_summary == nullptr)
        {
            ipv4_single_hop_summary = std::make_shared<Bfd::Ipv4SingleHopSummary>();
        }
        return ipv4_single_hop_summary;
    }

    if(child_yang_name == "ipv6-single-hop-summary")
    {
        if(ipv6_single_hop_summary == nullptr)
        {
            ipv6_single_hop_summary = std::make_shared<Bfd::Ipv6SingleHopSummary>();
        }
        return ipv6_single_hop_summary;
    }

    if(child_yang_name == "label-multi-paths")
    {
        if(label_multi_paths == nullptr)
        {
            label_multi_paths = std::make_shared<Bfd::LabelMultiPaths>();
        }
        return label_multi_paths;
    }

    if(child_yang_name == "ipv4-multi-hop-session-details")
    {
        if(ipv4_multi_hop_session_details == nullptr)
        {
            ipv4_multi_hop_session_details = std::make_shared<Bfd::Ipv4MultiHopSessionDetails>();
        }
        return ipv4_multi_hop_session_details;
    }

    if(child_yang_name == "ipv4-single-hop-session-details")
    {
        if(ipv4_single_hop_session_details == nullptr)
        {
            ipv4_single_hop_session_details = std::make_shared<Bfd::Ipv4SingleHopSessionDetails>();
        }
        return ipv4_single_hop_session_details;
    }

    if(child_yang_name == "ipv4-multi-hop-session-briefs")
    {
        if(ipv4_multi_hop_session_briefs == nullptr)
        {
            ipv4_multi_hop_session_briefs = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs>();
        }
        return ipv4_multi_hop_session_briefs;
    }

    if(child_yang_name == "generic-summaries")
    {
        if(generic_summaries == nullptr)
        {
            generic_summaries = std::make_shared<Bfd::GenericSummaries>();
        }
        return generic_summaries;
    }

    if(child_yang_name == "ipv6-single-hop-multi-paths")
    {
        if(ipv6_single_hop_multi_paths == nullptr)
        {
            ipv6_single_hop_multi_paths = std::make_shared<Bfd::Ipv6SingleHopMultiPaths>();
        }
        return ipv6_single_hop_multi_paths;
    }

    if(child_yang_name == "ipv4-single-hop-node-location-summaries")
    {
        if(ipv4_single_hop_node_location_summaries == nullptr)
        {
            ipv4_single_hop_node_location_summaries = std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries>();
        }
        return ipv4_single_hop_node_location_summaries;
    }

    if(child_yang_name == "label-summary")
    {
        if(label_summary == nullptr)
        {
            label_summary = std::make_shared<Bfd::LabelSummary>();
        }
        return label_summary;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-session-briefs")
    {
        if(ipv4bf_do_mplste_head_session_briefs == nullptr)
        {
            ipv4bf_do_mplste_head_session_briefs = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs>();
        }
        return ipv4bf_do_mplste_head_session_briefs;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-session-details")
    {
        if(ipv4bf_do_mplste_tail_session_details == nullptr)
        {
            ipv4bf_do_mplste_tail_session_details = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails>();
        }
        return ipv4bf_do_mplste_tail_session_details;
    }

    if(child_yang_name == "ipv4-multi-hop-node-location-summaries")
    {
        if(ipv4_multi_hop_node_location_summaries == nullptr)
        {
            ipv4_multi_hop_node_location_summaries = std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries>();
        }
        return ipv4_multi_hop_node_location_summaries;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-session-briefs")
    {
        if(ipv4bf_do_mplste_tail_session_briefs == nullptr)
        {
            ipv4bf_do_mplste_tail_session_briefs = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs>();
        }
        return ipv4bf_do_mplste_tail_session_briefs;
    }

    if(child_yang_name == "ipv6-multi-hop-node-location-summaries")
    {
        if(ipv6_multi_hop_node_location_summaries == nullptr)
        {
            ipv6_multi_hop_node_location_summaries = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries>();
        }
        return ipv6_multi_hop_node_location_summaries;
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

    if(child_yang_name == "ipv6-multi-hop-session-details")
    {
        if(ipv6_multi_hop_session_details == nullptr)
        {
            ipv6_multi_hop_session_details = std::make_shared<Bfd::Ipv6MultiHopSessionDetails>();
        }
        return ipv6_multi_hop_session_details;
    }

    if(child_yang_name == "ipv6-multi-hop-multi-paths")
    {
        if(ipv6_multi_hop_multi_paths == nullptr)
        {
            ipv6_multi_hop_multi_paths = std::make_shared<Bfd::Ipv6MultiHopMultiPaths>();
        }
        return ipv6_multi_hop_multi_paths;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-counters")
    {
        if(ipv4bf_do_mplste_head_counters == nullptr)
        {
            ipv4bf_do_mplste_head_counters = std::make_shared<Bfd::Ipv4bfDoMplsteHeadCounters>();
        }
        return ipv4bf_do_mplste_head_counters;
    }

    if(child_yang_name == "session-mibs")
    {
        if(session_mibs == nullptr)
        {
            session_mibs = std::make_shared<Bfd::SessionMibs>();
        }
        return session_mibs;
    }

    if(child_yang_name == "ipv6-multi-hop-summary")
    {
        if(ipv6_multi_hop_summary == nullptr)
        {
            ipv6_multi_hop_summary = std::make_shared<Bfd::Ipv6MultiHopSummary>();
        }
        return ipv6_multi_hop_summary;
    }

    if(child_yang_name == "label-summary-nodes")
    {
        if(label_summary_nodes == nullptr)
        {
            label_summary_nodes = std::make_shared<Bfd::LabelSummaryNodes>();
        }
        return label_summary_nodes;
    }

    if(child_yang_name == "ipv6-multi-hop-session-briefs")
    {
        if(ipv6_multi_hop_session_briefs == nullptr)
        {
            ipv6_multi_hop_session_briefs = std::make_shared<Bfd::Ipv6MultiHopSessionBriefs>();
        }
        return ipv6_multi_hop_session_briefs;
    }

    if(child_yang_name == "session-briefs")
    {
        if(session_briefs == nullptr)
        {
            session_briefs = std::make_shared<Bfd::SessionBriefs>();
        }
        return session_briefs;
    }

    if(child_yang_name == "ipv6-single-hop-node-location-summaries")
    {
        if(ipv6_single_hop_node_location_summaries == nullptr)
        {
            ipv6_single_hop_node_location_summaries = std::make_shared<Bfd::Ipv6SingleHopNodeLocationSummaries>();
        }
        return ipv6_single_hop_node_location_summaries;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Bfd::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "ipv4bfd-mplste-tail-node-summaries")
    {
        if(ipv4bfd_mplste_tail_node_summaries == nullptr)
        {
            ipv4bfd_mplste_tail_node_summaries = std::make_shared<Bfd::Ipv4bfdMplsteTailNodeSummaries>();
        }
        return ipv4bfd_mplste_tail_node_summaries;
    }

    if(child_yang_name == "ipv4-single-hop-location-summaries")
    {
        if(ipv4_single_hop_location_summaries == nullptr)
        {
            ipv4_single_hop_location_summaries = std::make_shared<Bfd::Ipv4SingleHopLocationSummaries>();
        }
        return ipv4_single_hop_location_summaries;
    }

    if(child_yang_name == "ipv4bfd-mplste-head-summary-nodes")
    {
        if(ipv4bfd_mplste_head_summary_nodes == nullptr)
        {
            ipv4bfd_mplste_head_summary_nodes = std::make_shared<Bfd::Ipv4bfdMplsteHeadSummaryNodes>();
        }
        return ipv4bfd_mplste_head_summary_nodes;
    }

    if(child_yang_name == "label-session-details")
    {
        if(label_session_details == nullptr)
        {
            label_session_details = std::make_shared<Bfd::LabelSessionDetails>();
        }
        return label_session_details;
    }

    if(child_yang_name == "ipv6-single-hop-session-details")
    {
        if(ipv6_single_hop_session_details == nullptr)
        {
            ipv6_single_hop_session_details = std::make_shared<Bfd::Ipv6SingleHopSessionDetails>();
        }
        return ipv6_single_hop_session_details;
    }

    if(child_yang_name == "ipv4-multi-hop-counters")
    {
        if(ipv4_multi_hop_counters == nullptr)
        {
            ipv4_multi_hop_counters = std::make_shared<Bfd::Ipv4MultiHopCounters>();
        }
        return ipv4_multi_hop_counters;
    }

    if(child_yang_name == "session-details")
    {
        if(session_details == nullptr)
        {
            session_details = std::make_shared<Bfd::SessionDetails>();
        }
        return session_details;
    }

    if(child_yang_name == "ipv4-single-hop-multi-paths")
    {
        if(ipv4_single_hop_multi_paths == nullptr)
        {
            ipv4_single_hop_multi_paths = std::make_shared<Bfd::Ipv4SingleHopMultiPaths>();
        }
        return ipv4_single_hop_multi_paths;
    }

    if(child_yang_name == "ipv4-single-hop-session-briefs")
    {
        if(ipv4_single_hop_session_briefs == nullptr)
        {
            ipv4_single_hop_session_briefs = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs>();
        }
        return ipv4_single_hop_session_briefs;
    }

    if(child_yang_name == "ipv6-multi-hop-counters")
    {
        if(ipv6_multi_hop_counters == nullptr)
        {
            ipv6_multi_hop_counters = std::make_shared<Bfd::Ipv6MultiHopCounters>();
        }
        return ipv6_multi_hop_counters;
    }

    if(child_yang_name == "ipv6-single-hop-location-summaries")
    {
        if(ipv6_single_hop_location_summaries == nullptr)
        {
            ipv6_single_hop_location_summaries = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries>();
        }
        return ipv6_single_hop_location_summaries;
    }

    if(child_yang_name == "label-counters")
    {
        if(label_counters == nullptr)
        {
            label_counters = std::make_shared<Bfd::LabelCounters>();
        }
        return label_counters;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-session-details")
    {
        if(ipv4bf_do_mplste_head_session_details == nullptr)
        {
            ipv4bf_do_mplste_head_session_details = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionDetails>();
        }
        return ipv4bf_do_mplste_head_session_details;
    }

    if(child_yang_name == "relation-briefs")
    {
        if(relation_briefs == nullptr)
        {
            relation_briefs = std::make_shared<Bfd::RelationBriefs>();
        }
        return relation_briefs;
    }

    if(child_yang_name == "client-briefs")
    {
        if(client_briefs == nullptr)
        {
            client_briefs = std::make_shared<Bfd::ClientBriefs>();
        }
        return client_briefs;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-multi-paths")
    {
        if(ipv4bf_do_mplste_head_multi_paths == nullptr)
        {
            ipv4bf_do_mplste_head_multi_paths = std::make_shared<Bfd::Ipv4bfDoMplsteHeadMultiPaths>();
        }
        return ipv4bf_do_mplste_head_multi_paths;
    }

    if(child_yang_name == "relation-details")
    {
        if(relation_details == nullptr)
        {
            relation_details = std::make_shared<Bfd::RelationDetails>();
        }
        return relation_details;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-counters")
    {
        if(ipv4bf_do_mplste_tail_counters == nullptr)
        {
            ipv4bf_do_mplste_tail_counters = std::make_shared<Bfd::Ipv4bfDoMplsteTailCounters>();
        }
        return ipv4bf_do_mplste_tail_counters;
    }

    if(child_yang_name == "ipv6-single-hop-session-briefs")
    {
        if(ipv6_single_hop_session_briefs == nullptr)
        {
            ipv6_single_hop_session_briefs = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs>();
        }
        return ipv6_single_hop_session_briefs;
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-multi-paths")
    {
        if(ipv4bf_do_mplste_tail_multi_paths == nullptr)
        {
            ipv4bf_do_mplste_tail_multi_paths = std::make_shared<Bfd::Ipv4bfDoMplsteTailMultiPaths>();
        }
        return ipv4bf_do_mplste_tail_multi_paths;
    }

    if(child_yang_name == "ipv4-multi-hop-multi-paths")
    {
        if(ipv4_multi_hop_multi_paths == nullptr)
        {
            ipv4_multi_hop_multi_paths = std::make_shared<Bfd::Ipv4MultiHopMultiPaths>();
        }
        return ipv4_multi_hop_multi_paths;
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-summary")
    {
        if(ipv4bf_do_mplste_head_summary == nullptr)
        {
            ipv4bf_do_mplste_head_summary = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSummary>();
        }
        return ipv4bf_do_mplste_head_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_session_briefs != nullptr)
    {
        _children["label-session-briefs"] = label_session_briefs;
    }

    if(ipv4bf_do_mplste_tail_summary != nullptr)
    {
        _children["ipv4bf-do-mplste-tail-summary"] = ipv4bf_do_mplste_tail_summary;
    }

    if(ipv6_single_hop_counters != nullptr)
    {
        _children["ipv6-single-hop-counters"] = ipv6_single_hop_counters;
    }

    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(client_details != nullptr)
    {
        _children["client-details"] = client_details;
    }

    if(ipv4_single_hop_summary != nullptr)
    {
        _children["ipv4-single-hop-summary"] = ipv4_single_hop_summary;
    }

    if(ipv6_single_hop_summary != nullptr)
    {
        _children["ipv6-single-hop-summary"] = ipv6_single_hop_summary;
    }

    if(label_multi_paths != nullptr)
    {
        _children["label-multi-paths"] = label_multi_paths;
    }

    if(ipv4_multi_hop_session_details != nullptr)
    {
        _children["ipv4-multi-hop-session-details"] = ipv4_multi_hop_session_details;
    }

    if(ipv4_single_hop_session_details != nullptr)
    {
        _children["ipv4-single-hop-session-details"] = ipv4_single_hop_session_details;
    }

    if(ipv4_multi_hop_session_briefs != nullptr)
    {
        _children["ipv4-multi-hop-session-briefs"] = ipv4_multi_hop_session_briefs;
    }

    if(generic_summaries != nullptr)
    {
        _children["generic-summaries"] = generic_summaries;
    }

    if(ipv6_single_hop_multi_paths != nullptr)
    {
        _children["ipv6-single-hop-multi-paths"] = ipv6_single_hop_multi_paths;
    }

    if(ipv4_single_hop_node_location_summaries != nullptr)
    {
        _children["ipv4-single-hop-node-location-summaries"] = ipv4_single_hop_node_location_summaries;
    }

    if(label_summary != nullptr)
    {
        _children["label-summary"] = label_summary;
    }

    if(ipv4bf_do_mplste_head_session_briefs != nullptr)
    {
        _children["ipv4bf-do-mplste-head-session-briefs"] = ipv4bf_do_mplste_head_session_briefs;
    }

    if(ipv4bf_do_mplste_tail_session_details != nullptr)
    {
        _children["ipv4bf-do-mplste-tail-session-details"] = ipv4bf_do_mplste_tail_session_details;
    }

    if(ipv4_multi_hop_node_location_summaries != nullptr)
    {
        _children["ipv4-multi-hop-node-location-summaries"] = ipv4_multi_hop_node_location_summaries;
    }

    if(ipv4bf_do_mplste_tail_session_briefs != nullptr)
    {
        _children["ipv4bf-do-mplste-tail-session-briefs"] = ipv4bf_do_mplste_tail_session_briefs;
    }

    if(ipv6_multi_hop_node_location_summaries != nullptr)
    {
        _children["ipv6-multi-hop-node-location-summaries"] = ipv6_multi_hop_node_location_summaries;
    }

    if(ipv4_multi_hop_summary != nullptr)
    {
        _children["ipv4-multi-hop-summary"] = ipv4_multi_hop_summary;
    }

    if(ipv4_single_hop_counters != nullptr)
    {
        _children["ipv4-single-hop-counters"] = ipv4_single_hop_counters;
    }

    if(ipv6_multi_hop_session_details != nullptr)
    {
        _children["ipv6-multi-hop-session-details"] = ipv6_multi_hop_session_details;
    }

    if(ipv6_multi_hop_multi_paths != nullptr)
    {
        _children["ipv6-multi-hop-multi-paths"] = ipv6_multi_hop_multi_paths;
    }

    if(ipv4bf_do_mplste_head_counters != nullptr)
    {
        _children["ipv4bf-do-mplste-head-counters"] = ipv4bf_do_mplste_head_counters;
    }

    if(session_mibs != nullptr)
    {
        _children["session-mibs"] = session_mibs;
    }

    if(ipv6_multi_hop_summary != nullptr)
    {
        _children["ipv6-multi-hop-summary"] = ipv6_multi_hop_summary;
    }

    if(label_summary_nodes != nullptr)
    {
        _children["label-summary-nodes"] = label_summary_nodes;
    }

    if(ipv6_multi_hop_session_briefs != nullptr)
    {
        _children["ipv6-multi-hop-session-briefs"] = ipv6_multi_hop_session_briefs;
    }

    if(session_briefs != nullptr)
    {
        _children["session-briefs"] = session_briefs;
    }

    if(ipv6_single_hop_node_location_summaries != nullptr)
    {
        _children["ipv6-single-hop-node-location-summaries"] = ipv6_single_hop_node_location_summaries;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(ipv4bfd_mplste_tail_node_summaries != nullptr)
    {
        _children["ipv4bfd-mplste-tail-node-summaries"] = ipv4bfd_mplste_tail_node_summaries;
    }

    if(ipv4_single_hop_location_summaries != nullptr)
    {
        _children["ipv4-single-hop-location-summaries"] = ipv4_single_hop_location_summaries;
    }

    if(ipv4bfd_mplste_head_summary_nodes != nullptr)
    {
        _children["ipv4bfd-mplste-head-summary-nodes"] = ipv4bfd_mplste_head_summary_nodes;
    }

    if(label_session_details != nullptr)
    {
        _children["label-session-details"] = label_session_details;
    }

    if(ipv6_single_hop_session_details != nullptr)
    {
        _children["ipv6-single-hop-session-details"] = ipv6_single_hop_session_details;
    }

    if(ipv4_multi_hop_counters != nullptr)
    {
        _children["ipv4-multi-hop-counters"] = ipv4_multi_hop_counters;
    }

    if(session_details != nullptr)
    {
        _children["session-details"] = session_details;
    }

    if(ipv4_single_hop_multi_paths != nullptr)
    {
        _children["ipv4-single-hop-multi-paths"] = ipv4_single_hop_multi_paths;
    }

    if(ipv4_single_hop_session_briefs != nullptr)
    {
        _children["ipv4-single-hop-session-briefs"] = ipv4_single_hop_session_briefs;
    }

    if(ipv6_multi_hop_counters != nullptr)
    {
        _children["ipv6-multi-hop-counters"] = ipv6_multi_hop_counters;
    }

    if(ipv6_single_hop_location_summaries != nullptr)
    {
        _children["ipv6-single-hop-location-summaries"] = ipv6_single_hop_location_summaries;
    }

    if(label_counters != nullptr)
    {
        _children["label-counters"] = label_counters;
    }

    if(ipv4bf_do_mplste_head_session_details != nullptr)
    {
        _children["ipv4bf-do-mplste-head-session-details"] = ipv4bf_do_mplste_head_session_details;
    }

    if(relation_briefs != nullptr)
    {
        _children["relation-briefs"] = relation_briefs;
    }

    if(client_briefs != nullptr)
    {
        _children["client-briefs"] = client_briefs;
    }

    if(ipv4bf_do_mplste_head_multi_paths != nullptr)
    {
        _children["ipv4bf-do-mplste-head-multi-paths"] = ipv4bf_do_mplste_head_multi_paths;
    }

    if(relation_details != nullptr)
    {
        _children["relation-details"] = relation_details;
    }

    if(ipv4bf_do_mplste_tail_counters != nullptr)
    {
        _children["ipv4bf-do-mplste-tail-counters"] = ipv4bf_do_mplste_tail_counters;
    }

    if(ipv6_single_hop_session_briefs != nullptr)
    {
        _children["ipv6-single-hop-session-briefs"] = ipv6_single_hop_session_briefs;
    }

    if(ipv4bf_do_mplste_tail_multi_paths != nullptr)
    {
        _children["ipv4bf-do-mplste-tail-multi-paths"] = ipv4bf_do_mplste_tail_multi_paths;
    }

    if(ipv4_multi_hop_multi_paths != nullptr)
    {
        _children["ipv4-multi-hop-multi-paths"] = ipv4_multi_hop_multi_paths;
    }

    if(ipv4bf_do_mplste_head_summary != nullptr)
    {
        _children["ipv4bf-do-mplste-head-summary"] = ipv4bf_do_mplste_head_summary;
    }

    return _children;
}

void Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Bfd::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Bfd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-session-briefs" || name == "ipv4bf-do-mplste-tail-summary" || name == "ipv6-single-hop-counters" || name == "counters" || name == "client-details" || name == "ipv4-single-hop-summary" || name == "ipv6-single-hop-summary" || name == "label-multi-paths" || name == "ipv4-multi-hop-session-details" || name == "ipv4-single-hop-session-details" || name == "ipv4-multi-hop-session-briefs" || name == "generic-summaries" || name == "ipv6-single-hop-multi-paths" || name == "ipv4-single-hop-node-location-summaries" || name == "label-summary" || name == "ipv4bf-do-mplste-head-session-briefs" || name == "ipv4bf-do-mplste-tail-session-details" || name == "ipv4-multi-hop-node-location-summaries" || name == "ipv4bf-do-mplste-tail-session-briefs" || name == "ipv6-multi-hop-node-location-summaries" || name == "ipv4-multi-hop-summary" || name == "ipv4-single-hop-counters" || name == "ipv6-multi-hop-session-details" || name == "ipv6-multi-hop-multi-paths" || name == "ipv4bf-do-mplste-head-counters" || name == "session-mibs" || name == "ipv6-multi-hop-summary" || name == "label-summary-nodes" || name == "ipv6-multi-hop-session-briefs" || name == "session-briefs" || name == "ipv6-single-hop-node-location-summaries" || name == "summary" || name == "ipv4bfd-mplste-tail-node-summaries" || name == "ipv4-single-hop-location-summaries" || name == "ipv4bfd-mplste-head-summary-nodes" || name == "label-session-details" || name == "ipv6-single-hop-session-details" || name == "ipv4-multi-hop-counters" || name == "session-details" || name == "ipv4-single-hop-multi-paths" || name == "ipv4-single-hop-session-briefs" || name == "ipv6-multi-hop-counters" || name == "ipv6-single-hop-location-summaries" || name == "label-counters" || name == "ipv4bf-do-mplste-head-session-details" || name == "relation-briefs" || name == "client-briefs" || name == "ipv4bf-do-mplste-head-multi-paths" || name == "relation-details" || name == "ipv4bf-do-mplste-tail-counters" || name == "ipv6-single-hop-session-briefs" || name == "ipv4bf-do-mplste-tail-multi-paths" || name == "ipv4-multi-hop-multi-paths" || name == "ipv4bf-do-mplste-head-summary")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBriefs()
    :
    label_session_brief(this, {})
{

    yang_name = "label-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSessionBriefs::~LabelSessionBriefs()
{
}

bool Bfd::LabelSessionBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_session_brief.len(); index++)
    {
        if(label_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<label_session_brief.len(); index++)
    {
        if(label_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-session-brief")
    {
        auto ent_ = std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief>();
        ent_->parent = this;
        label_session_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_session_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::LabelSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-session-brief")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::LabelSessionBrief()
    :
    interface_name{YType::str, "interface-name"},
    incoming_label{YType::uint32, "incoming-label"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    state{YType::enumeration, "state"},
    session_type{YType::enumeration, "session-type"},
    session_subtype{YType::str, "session-subtype"},
    session_flags{YType::uint32, "session-flags"}
        ,
    status_brief_information(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "label-session-brief"; yang_parent_name = "label-session-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSessionBriefs::LabelSessionBrief::~LabelSessionBrief()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| incoming_label.is_set
	|| location.is_set
	|| node_id.is_set
	|| state.is_set
	|| session_type.is_set
	|| session_subtype.is_set
	|| session_flags.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    return _children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "interface-name" || name == "incoming-label" || name == "location" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "label-session-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-session-briefs/label-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::LabelSessionBriefs::LabelSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSummary::Ipv4bfDoMplsteTailSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4bfDoMplsteTailSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSummary::~Ipv4bfDoMplsteTailSummary()
{
}

bool Bfd::Ipv4bfDoMplsteTailSummary::has_data() const
{
    if (is_presence_container) return true;
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Bfd::Ipv4bfDoMplsteTailSummary::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4bf-do-mplste-tail-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4bfDoMplsteTailSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopCounters()
    :
    ipv6_single_hop_packet_counters(std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters>())
{
    ipv6_single_hop_packet_counters->parent = this;

    yang_name = "ipv6-single-hop-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopCounters::~Ipv6SingleHopCounters()
{
}

bool Bfd::Ipv6SingleHopCounters::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6_single_hop_packet_counters !=  nullptr && ipv6_single_hop_packet_counters->has_data());
}

bool Bfd::Ipv6SingleHopCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_single_hop_packet_counters !=  nullptr && ipv6_single_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv6SingleHopCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_single_hop_packet_counters != nullptr)
    {
        _children["ipv6-single-hop-packet-counters"] = ipv6_single_hop_packet_counters;
    }

    return _children;
}

void Bfd::Ipv6SingleHopCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-packet-counters")
        return true;
    return false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounters()
    :
    ipv6_single_hop_packet_counter(this, {})
{

    yang_name = "ipv6-single-hop-packet-counters"; yang_parent_name = "ipv6-single-hop-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::~Ipv6SingleHopPacketCounters()
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_single_hop_packet_counter.len(); index++)
    {
        if(ipv6_single_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_packet_counter.len(); index++)
    {
        if(ipv6_single_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-packet-counter")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter>();
        ent_->parent = this;
        ipv6_single_hop_packet_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_single_hop_packet_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-packet-counter")
        return true;
    return false;
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::Ipv6SingleHopPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "ipv6-single-hop-packet-counter"; yang_parent_name = "ipv6-single-hop-packet-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::~Ipv6SingleHopPacketCounter()
{
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| location.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-counters/ipv6-single-hop-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopCounters::Ipv6SingleHopPacketCounters::Ipv6SingleHopPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "location" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::Counters::Counters()
    :
    packet_counters(std::make_shared<Bfd::Counters::PacketCounters>())
{
    packet_counters->parent = this;

    yang_name = "counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Counters::~Counters()
{
}

bool Bfd::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (packet_counters !=  nullptr && packet_counters->has_data());
}

bool Bfd::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (packet_counters !=  nullptr && packet_counters->has_operation());
}

std::string Bfd::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(packet_counters != nullptr)
    {
        _children["packet-counters"] = packet_counters;
    }

    return _children;
}

void Bfd::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counters")
        return true;
    return false;
}

Bfd::Counters::PacketCounters::PacketCounters()
    :
    packet_counter(this, {})
{

    yang_name = "packet-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Counters::PacketCounters::~PacketCounters()
{
}

bool Bfd::Counters::PacketCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<packet_counter.len(); index++)
    {
        if(packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Counters::PacketCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_counter.len(); index++)
    {
        if(packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Counters::PacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Counters::PacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Counters::PacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Counters::PacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counter")
    {
        auto ent_ = std::make_shared<Bfd::Counters::PacketCounters::PacketCounter>();
        ent_->parent = this;
        packet_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Counters::PacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : packet_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Counters::PacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Counters::PacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Counters::PacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counter")
        return true;
    return false;
}

Bfd::Counters::PacketCounters::PacketCounter::PacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "packet-counter"; yang_parent_name = "packet-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Counters::PacketCounters::PacketCounter::~PacketCounter()
{
}

bool Bfd::Counters::PacketCounters::PacketCounter::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| location.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Counters::PacketCounters::PacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Counters::PacketCounters::PacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/counters/packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Counters::PacketCounters::PacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Counters::PacketCounters::PacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Counters::PacketCounters::PacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Counters::PacketCounters::PacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Counters::PacketCounters::PacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Counters::PacketCounters::PacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
}

bool Bfd::Counters::PacketCounters::PacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "location" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::ClientDetails::ClientDetails()
    :
    client_detail(this, {"client_name"})
{

    yang_name = "client-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::ClientDetails::~ClientDetails()
{
}

bool Bfd::ClientDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_detail.len(); index++)
    {
        if(client_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::ClientDetails::has_operation() const
{
    for (std::size_t index=0; index<client_detail.len(); index++)
    {
        if(client_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::ClientDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::ClientDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::ClientDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::ClientDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-detail")
    {
        auto ent_ = std::make_shared<Bfd::ClientDetails::ClientDetail>();
        ent_->parent = this;
        client_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::ClientDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::ClientDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::ClientDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::ClientDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-detail")
        return true;
    return false;
}

Bfd::ClientDetails::ClientDetail::ClientDetail()
    :
    client_name{YType::str, "client-name"},
    recreate_time{YType::uint32, "recreate-time"}
        ,
    brief(std::make_shared<Bfd::ClientDetails::ClientDetail::Brief>())
    , flags(std::make_shared<Bfd::ClientDetails::ClientDetail::Flags>())
{
    brief->parent = this;
    flags->parent = this;

    yang_name = "client-detail"; yang_parent_name = "client-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::ClientDetails::ClientDetail::~ClientDetail()
{
}

bool Bfd::ClientDetails::ClientDetail::has_data() const
{
    if (is_presence_container) return true;
    return client_name.is_set
	|| recreate_time.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool Bfd::ClientDetails::ClientDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(recreate_time.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Bfd::ClientDetails::ClientDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/client-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::ClientDetails::ClientDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-detail";
    ADD_KEY_TOKEN(client_name, "client-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::ClientDetails::ClientDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (recreate_time.is_set || is_set(recreate_time.yfilter)) leaf_name_data.push_back(recreate_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::ClientDetails::ClientDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::ClientDetails::ClientDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    return _children;
}

void Bfd::ClientDetails::ClientDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-time")
    {
        recreate_time = value;
        recreate_time.value_namespace = name_space;
        recreate_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::ClientDetails::ClientDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "recreate-time")
    {
        recreate_time.yfilter = yfilter;
    }
}

bool Bfd::ClientDetails::ClientDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "flags" || name == "client-name" || name == "recreate-time")
        return true;
    return false;
}

Bfd::ClientDetails::ClientDetail::Brief::Brief()
    :
    name_xr{YType::str, "name-xr"},
    node_id{YType::str, "node-id"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "brief"; yang_parent_name = "client-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Bfd::ClientDetails::ClientDetail::Brief::~Brief()
{
}

bool Bfd::ClientDetails::ClientDetail::Brief::has_data() const
{
    if (is_presence_container) return true;
    return name_xr.is_set
	|| node_id.is_set
	|| session_count.is_set;
}

bool Bfd::ClientDetails::ClientDetail::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_xr.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string Bfd::ClientDetails::ClientDetail::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::ClientDetails::ClientDetail::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_xr.is_set || is_set(name_xr.yfilter)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::ClientDetails::ClientDetail::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::ClientDetails::ClientDetail::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::ClientDetails::ClientDetail::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-xr")
    {
        name_xr = value;
        name_xr.value_namespace = name_space;
        name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::ClientDetails::ClientDetail::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-xr")
    {
        name_xr.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool Bfd::ClientDetails::ClientDetail::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-xr" || name == "node-id" || name == "session-count")
        return true;
    return false;
}

Bfd::ClientDetails::ClientDetail::Flags::Flags()
    :
    is_zombie_state{YType::int32, "is-zombie-state"},
    is_recreate_state{YType::int32, "is-recreate-state"}
{

    yang_name = "flags"; yang_parent_name = "client-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Bfd::ClientDetails::ClientDetail::Flags::~Flags()
{
}

bool Bfd::ClientDetails::ClientDetail::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_zombie_state.is_set
	|| is_recreate_state.is_set;
}

bool Bfd::ClientDetails::ClientDetail::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_zombie_state.yfilter)
	|| ydk::is_set(is_recreate_state.yfilter);
}

std::string Bfd::ClientDetails::ClientDetail::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::ClientDetails::ClientDetail::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_zombie_state.is_set || is_set(is_zombie_state.yfilter)) leaf_name_data.push_back(is_zombie_state.get_name_leafdata());
    if (is_recreate_state.is_set || is_set(is_recreate_state.yfilter)) leaf_name_data.push_back(is_recreate_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::ClientDetails::ClientDetail::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::ClientDetails::ClientDetail::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::ClientDetails::ClientDetail::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-zombie-state")
    {
        is_zombie_state = value;
        is_zombie_state.value_namespace = name_space;
        is_zombie_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recreate-state")
    {
        is_recreate_state = value;
        is_recreate_state.value_namespace = name_space;
        is_recreate_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::ClientDetails::ClientDetail::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-zombie-state")
    {
        is_zombie_state.yfilter = yfilter;
    }
    if(value_path == "is-recreate-state")
    {
        is_recreate_state.yfilter = yfilter;
    }
}

bool Bfd::ClientDetails::ClientDetail::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-zombie-state" || name == "is-recreate-state")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSummary::Ipv4SingleHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4SingleHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-single-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSummary::~Ipv4SingleHopSummary()
{
}

bool Bfd::Ipv4SingleHopSummary::has_data() const
{
    if (is_presence_container) return true;
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Ipv4SingleHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSummary::Ipv6SingleHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv6SingleHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-single-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSummary::~Ipv6SingleHopSummary()
{
}

bool Bfd::Ipv6SingleHopSummary::has_data() const
{
    if (is_presence_container) return true;
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv6SingleHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv6SingleHopSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Ipv6SingleHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6SingleHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::LabelMultiPaths::LabelMultiPaths()
    :
    label_multi_path(this, {})
{

    yang_name = "label-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelMultiPaths::~LabelMultiPaths()
{
}

bool Bfd::LabelMultiPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_multi_path.len(); index++)
    {
        if(label_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<label_multi_path.len(); index++)
    {
        if(label_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::LabelMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-multi-path")
    {
        auto ent_ = std::make_shared<Bfd::LabelMultiPaths::LabelMultiPath>();
        ent_->parent = this;
        label_multi_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_multi_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::LabelMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-multi-path")
        return true;
    return false;
}

Bfd::LabelMultiPaths::LabelMultiPath::LabelMultiPath()
    :
    interface_name{YType::str, "interface-name"},
    incoming_label{YType::uint32, "incoming-label"},
    location{YType::str, "location"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    session_interface_name{YType::str, "session-interface-name"}
{

    yang_name = "label-multi-path"; yang_parent_name = "label-multi-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelMultiPaths::LabelMultiPath::~LabelMultiPath()
{
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| incoming_label.is_set
	|| location.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| incoming_label_xr.is_set
	|| session_interface_name.is_set;
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(session_interface_name.yfilter);
}

std::string Bfd::LabelMultiPaths::LabelMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelMultiPaths::LabelMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelMultiPaths::LabelMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelMultiPaths::LabelMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelMultiPaths::LabelMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::LabelMultiPaths::LabelMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelMultiPaths::LabelMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
}

bool Bfd::LabelMultiPaths::LabelMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "incoming-label" || name == "location" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetails()
    :
    ipv4_multi_hop_session_detail(this, {})
{

    yang_name = "ipv4-multi-hop-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::~Ipv4MultiHopSessionDetails()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_multi_hop_session_detail.len(); index++)
    {
        if(ipv4_multi_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_session_detail.len(); index++)
    {
        if(ipv4_multi_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-session-detail")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail>();
        ent_->parent = this;
        ipv4_multi_hop_session_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_multi_hop_session_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multi-hop-session-detail")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::Ipv4MultiHopSessionDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"}
        ,
    status_information(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation>())
    , mp_download_state(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState>())
    , lsp_ping_info(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo>())
    , owner_information(this, {})
    , association_information(this, {})
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "ipv4-multi-hop-session-detail"; yang_parent_name = "ipv4-multi-hop-session-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::~Ipv4MultiHopSessionDetail()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "association-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation>();
        ent_->parent = this;
        association_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_information != nullptr)
    {
        _children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        _children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        _children["lsp-ping-info"] = lsp_ping_info;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : association_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
        ,
    source_address(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress>())
    , last_state_change(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange>())
    , transmit_packet(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket>())
    , receive_packet(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket>())
    , status_brief_information(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation>())
    , async_transmit_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
    , async_receive_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
    , echo_transmit_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
    , echo_received_statistics(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        _children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        _children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        _children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        _children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        _children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        _children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        _children["echo-received-statistics"] = echo_received_statistics;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
        ,
    change_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::has_data() const
{
    if (is_presence_container) return true;
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(change_time != nullptr)
    {
        _children["change-time"] = change_time;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
        ,
    lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
    , lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
    , lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_ping_tx_last_time != nullptr)
    {
        _children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        _children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        _children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv4-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
        ,
    ip_destination_address(std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress>())
    , owner_information(this, {})
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_destination_address != nullptr)
    {
        _children["ip-destination-address"] = ip_destination_address;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-details/ipv4-multi-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionDetails::Ipv4MultiHopSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetails()
    :
    ipv4_single_hop_session_detail(this, {})
{

    yang_name = "ipv4-single-hop-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::~Ipv4SingleHopSessionDetails()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_single_hop_session_detail.len(); index++)
    {
        if(ipv4_single_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_detail.len(); index++)
    {
        if(ipv4_single_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-session-detail")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail>();
        ent_->parent = this;
        ipv4_single_hop_session_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_single_hop_session_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-session-detail")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::Ipv4SingleHopSessionDetail()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"}
        ,
    status_information(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation>())
    , mp_download_state(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState>())
    , lsp_ping_info(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo>())
    , owner_information(this, {})
    , association_information(this, {})
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "ipv4-single-hop-session-detail"; yang_parent_name = "ipv4-single-hop-session-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::~Ipv4SingleHopSessionDetail()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| destination_address.is_set
	|| location.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "association-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation>();
        ent_->parent = this;
        association_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_information != nullptr)
    {
        _children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        _children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        _children["lsp-ping-info"] = lsp_ping_info;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : association_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "interface-name" || name == "destination-address" || name == "location")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
        ,
    source_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress>())
    , last_state_change(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange>())
    , transmit_packet(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket>())
    , receive_packet(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket>())
    , status_brief_information(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation>())
    , async_transmit_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
    , async_receive_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
    , echo_transmit_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
    , echo_received_statistics(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        _children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        _children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        _children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        _children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        _children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        _children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        _children["echo-received-statistics"] = echo_received_statistics;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
        ,
    change_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_data() const
{
    if (is_presence_container) return true;
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(change_time != nullptr)
    {
        _children["change-time"] = change_time;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
        ,
    lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
    , lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
    , lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_ping_tx_last_time != nullptr)
    {
        _children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        _children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        _children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
        ,
    ip_destination_address(std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress>())
    , owner_information(this, {})
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4-single-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_destination_address != nullptr)
    {
        _children["ip-destination-address"] = ip_destination_address;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-details/ipv4-single-hop-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopSessionDetails::Ipv4SingleHopSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBriefs()
    :
    ipv4_multi_hop_session_brief(this, {})
{

    yang_name = "ipv4-multi-hop-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionBriefs::~Ipv4MultiHopSessionBriefs()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_multi_hop_session_brief.len(); index++)
    {
        if(ipv4_multi_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_session_brief.len(); index++)
    {
        if(ipv4_multi_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4MultiHopSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-session-brief")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief>();
        ent_->parent = this;
        ipv4_multi_hop_session_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_multi_hop_session_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multi-hop-session-brief")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::Ipv4MultiHopSessionBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"},
    node_id{YType::str, "node-id"},
    state{YType::enumeration, "state"},
    session_type{YType::enumeration, "session-type"},
    session_subtype{YType::str, "session-subtype"},
    session_flags{YType::uint32, "session-flags"}
        ,
    status_brief_information(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4-multi-hop-session-brief"; yang_parent_name = "ipv4-multi-hop-session-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::~Ipv4MultiHopSessionBrief()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| node_id.is_set
	|| state.is_set
	|| session_type.is_set
	|| session_subtype.is_set
	|| session_flags.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4-multi-hop-session-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/ipv4-multi-hop-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/ipv4-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-session-briefs/ipv4-multi-hop-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSessionBriefs::Ipv4MultiHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::GenericSummaries::GenericSummaries()
    :
    generic_summary(this, {"location"})
{

    yang_name = "generic-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::GenericSummaries::~GenericSummaries()
{
}

bool Bfd::GenericSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_summary.len(); index++)
    {
        if(generic_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::GenericSummaries::has_operation() const
{
    for (std::size_t index=0; index<generic_summary.len(); index++)
    {
        if(generic_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::GenericSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::GenericSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::GenericSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::GenericSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-summary")
    {
        auto ent_ = std::make_shared<Bfd::GenericSummaries::GenericSummary>();
        ent_->parent = this;
        generic_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::GenericSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : generic_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::GenericSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::GenericSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::GenericSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-summary")
        return true;
    return false;
}

Bfd::GenericSummaries::GenericSummary::GenericSummary()
    :
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    pps_allocated_value{YType::uint32, "pps-allocated-value"},
    ppsmp_allocated_value{YType::uint32, "ppsmp-allocated-value"},
    pps_max_value{YType::uint32, "pps-max-value"},
    ppsmp_max_value{YType::uint32, "ppsmp-max-value"},
    total_session_number{YType::uint32, "total-session-number"},
    mp_session_number{YType::uint32, "mp-session-number"},
    max_session_number{YType::uint32, "max-session-number"},
    pps_all_percentage{YType::uint32, "pps-all-percentage"},
    ppsmp_percentage{YType::uint32, "ppsmp-percentage"}
{

    yang_name = "generic-summary"; yang_parent_name = "generic-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::GenericSummaries::GenericSummary::~GenericSummary()
{
}

bool Bfd::GenericSummaries::GenericSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| node_id.is_set
	|| pps_allocated_value.is_set
	|| ppsmp_allocated_value.is_set
	|| pps_max_value.is_set
	|| ppsmp_max_value.is_set
	|| total_session_number.is_set
	|| mp_session_number.is_set
	|| max_session_number.is_set
	|| pps_all_percentage.is_set
	|| ppsmp_percentage.is_set;
}

bool Bfd::GenericSummaries::GenericSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(pps_allocated_value.yfilter)
	|| ydk::is_set(ppsmp_allocated_value.yfilter)
	|| ydk::is_set(pps_max_value.yfilter)
	|| ydk::is_set(ppsmp_max_value.yfilter)
	|| ydk::is_set(total_session_number.yfilter)
	|| ydk::is_set(mp_session_number.yfilter)
	|| ydk::is_set(max_session_number.yfilter)
	|| ydk::is_set(pps_all_percentage.yfilter)
	|| ydk::is_set(ppsmp_percentage.yfilter);
}

std::string Bfd::GenericSummaries::GenericSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/generic-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::GenericSummaries::GenericSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::GenericSummaries::GenericSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (pps_allocated_value.is_set || is_set(pps_allocated_value.yfilter)) leaf_name_data.push_back(pps_allocated_value.get_name_leafdata());
    if (ppsmp_allocated_value.is_set || is_set(ppsmp_allocated_value.yfilter)) leaf_name_data.push_back(ppsmp_allocated_value.get_name_leafdata());
    if (pps_max_value.is_set || is_set(pps_max_value.yfilter)) leaf_name_data.push_back(pps_max_value.get_name_leafdata());
    if (ppsmp_max_value.is_set || is_set(ppsmp_max_value.yfilter)) leaf_name_data.push_back(ppsmp_max_value.get_name_leafdata());
    if (total_session_number.is_set || is_set(total_session_number.yfilter)) leaf_name_data.push_back(total_session_number.get_name_leafdata());
    if (mp_session_number.is_set || is_set(mp_session_number.yfilter)) leaf_name_data.push_back(mp_session_number.get_name_leafdata());
    if (max_session_number.is_set || is_set(max_session_number.yfilter)) leaf_name_data.push_back(max_session_number.get_name_leafdata());
    if (pps_all_percentage.is_set || is_set(pps_all_percentage.yfilter)) leaf_name_data.push_back(pps_all_percentage.get_name_leafdata());
    if (ppsmp_percentage.is_set || is_set(ppsmp_percentage.yfilter)) leaf_name_data.push_back(ppsmp_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::GenericSummaries::GenericSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::GenericSummaries::GenericSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::GenericSummaries::GenericSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pps-allocated-value")
    {
        pps_allocated_value = value;
        pps_allocated_value.value_namespace = name_space;
        pps_allocated_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppsmp-allocated-value")
    {
        ppsmp_allocated_value = value;
        ppsmp_allocated_value.value_namespace = name_space;
        ppsmp_allocated_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pps-max-value")
    {
        pps_max_value = value;
        pps_max_value.value_namespace = name_space;
        pps_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppsmp-max-value")
    {
        ppsmp_max_value = value;
        ppsmp_max_value.value_namespace = name_space;
        ppsmp_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-session-number")
    {
        total_session_number = value;
        total_session_number.value_namespace = name_space;
        total_session_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp-session-number")
    {
        mp_session_number = value;
        mp_session_number.value_namespace = name_space;
        mp_session_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-session-number")
    {
        max_session_number = value;
        max_session_number.value_namespace = name_space;
        max_session_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pps-all-percentage")
    {
        pps_all_percentage = value;
        pps_all_percentage.value_namespace = name_space;
        pps_all_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppsmp-percentage")
    {
        ppsmp_percentage = value;
        ppsmp_percentage.value_namespace = name_space;
        ppsmp_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::GenericSummaries::GenericSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "pps-allocated-value")
    {
        pps_allocated_value.yfilter = yfilter;
    }
    if(value_path == "ppsmp-allocated-value")
    {
        ppsmp_allocated_value.yfilter = yfilter;
    }
    if(value_path == "pps-max-value")
    {
        pps_max_value.yfilter = yfilter;
    }
    if(value_path == "ppsmp-max-value")
    {
        ppsmp_max_value.yfilter = yfilter;
    }
    if(value_path == "total-session-number")
    {
        total_session_number.yfilter = yfilter;
    }
    if(value_path == "mp-session-number")
    {
        mp_session_number.yfilter = yfilter;
    }
    if(value_path == "max-session-number")
    {
        max_session_number.yfilter = yfilter;
    }
    if(value_path == "pps-all-percentage")
    {
        pps_all_percentage.yfilter = yfilter;
    }
    if(value_path == "ppsmp-percentage")
    {
        ppsmp_percentage.yfilter = yfilter;
    }
}

bool Bfd::GenericSummaries::GenericSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "node-id" || name == "pps-allocated-value" || name == "ppsmp-allocated-value" || name == "pps-max-value" || name == "ppsmp-max-value" || name == "total-session-number" || name == "mp-session-number" || name == "max-session-number" || name == "pps-all-percentage" || name == "ppsmp-percentage")
        return true;
    return false;
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPaths()
    :
    ipv6_single_hop_multi_path(this, {})
{

    yang_name = "ipv6-single-hop-multi-paths"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopMultiPaths::~Ipv6SingleHopMultiPaths()
{
}

bool Bfd::Ipv6SingleHopMultiPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_single_hop_multi_path.len(); index++)
    {
        if(ipv6_single_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_multi_path.len(); index++)
    {
        if(ipv6_single_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6SingleHopMultiPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-multi-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopMultiPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-single-hop-multi-path")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath>();
        ent_->parent = this;
        ipv6_single_hop_multi_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopMultiPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_single_hop_multi_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv6SingleHopMultiPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6SingleHopMultiPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6SingleHopMultiPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-single-hop-multi-path")
        return true;
    return false;
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::Ipv6SingleHopMultiPath()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    session_interface_name{YType::str, "session-interface-name"}
{

    yang_name = "ipv6-single-hop-multi-path"; yang_parent_name = "ipv6-single-hop-multi-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::~Ipv6SingleHopMultiPath()
{
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| location.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| incoming_label_xr.is_set
	|| session_interface_name.is_set;
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(incoming_label_xr.yfilter)
	|| ydk::is_set(session_interface_name.yfilter);
}

std::string Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-multi-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-multi-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.yfilter)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.yfilter)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
        incoming_label_xr.value_namespace = name_space;
        incoming_label_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
        session_interface_name.value_namespace = name_space;
        session_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr.yfilter = yfilter;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6SingleHopMultiPaths::Ipv6SingleHopMultiPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "location" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "node-id" || name == "incoming-label-xr" || name == "session-interface-name")
        return true;
    return false;
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummaries()
    :
    ipv4_single_hop_node_location_summary(this, {"location"})
{

    yang_name = "ipv4-single-hop-node-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopNodeLocationSummaries::~Ipv4SingleHopNodeLocationSummaries()
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_single_hop_node_location_summary.len(); index++)
    {
        if(ipv4_single_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_node_location_summary.len(); index++)
    {
        if(ipv4_single_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-node-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopNodeLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-node-location-summary")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary>();
        ent_->parent = this;
        ipv4_single_hop_node_location_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_single_hop_node_location_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-node-location-summary")
        return true;
    return false;
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::Ipv4SingleHopNodeLocationSummary()
    :
    location{YType::str, "location"}
        ,
    session_state(std::make_shared<Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-single-hop-node-location-summary"; yang_parent_name = "ipv4-single-hop-node-location-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::~Ipv4SingleHopNodeLocationSummary()
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-node-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-node-location-summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location")
        return true;
    return false;
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4-single-hop-node-location-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopNodeLocationSummaries::Ipv4SingleHopNodeLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::LabelSummary::LabelSummary()
    :
    session_state(std::make_shared<Bfd::LabelSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "label-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSummary::~LabelSummary()
{
}

bool Bfd::LabelSummary::has_data() const
{
    if (is_presence_container) return true;
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::LabelSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::LabelSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::LabelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::LabelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::LabelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::LabelSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "label-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::LabelSummary::SessionState::~SessionState()
{
}

bool Bfd::LabelSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::LabelSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::LabelSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::LabelSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::LabelSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::LabelSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::LabelSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::LabelSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::LabelSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Bfd::LabelSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBriefs()
    :
    ipv4bf_do_mplste_head_session_brief(this, {})
{

    yang_name = "ipv4bf-do-mplste-head-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::~Ipv4bfDoMplsteHeadSessionBriefs()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_brief.len(); index++)
    {
        if(ipv4bf_do_mplste_head_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_brief.len(); index++)
    {
        if(ipv4bf_do_mplste_head_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-head-session-brief")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief>();
        ent_->parent = this;
        ipv4bf_do_mplste_head_session_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4bf_do_mplste_head_session_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-head-session-brief")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::Ipv4bfDoMplsteHeadSessionBrief()
    :
    interface_name{YType::str, "interface-name"},
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::uint32, "incoming-label"},
    fe_ctype{YType::uint32, "fe-ctype"},
    fec_subgroup_id{YType::uint32, "fec-subgroup-id"},
    feclspid{YType::uint32, "feclspid"},
    fec_tunnel_id{YType::uint32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::uint32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::uint32, "fec-ctype"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    state{YType::enumeration, "state"},
    session_type{YType::enumeration, "session-type"},
    session_subtype{YType::str, "session-subtype"},
    session_flags{YType::uint32, "session-flags"}
        ,
    status_brief_information(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4bf-do-mplste-head-session-brief"; yang_parent_name = "ipv4bf-do-mplste-head-session-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::~Ipv4bfDoMplsteHeadSessionBrief()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vrf_name.is_set
	|| incoming_label.is_set
	|| fe_ctype.is_set
	|| fec_subgroup_id.is_set
	|| feclspid.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_destination.is_set
	|| fecp2mpid.is_set
	|| fec_subgroup_originator.is_set
	|| fec_ctype.is_set
	|| location.is_set
	|| node_id.is_set
	|| state.is_set
	|| session_type.is_set
	|| session_subtype.is_set
	|| session_flags.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(fec_subgroup_id.yfilter)
	|| ydk::is_set(feclspid.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_destination.yfilter)
	|| ydk::is_set(fecp2mpid.yfilter)
	|| ydk::is_set(fec_subgroup_originator.yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.yfilter)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.yfilter)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.yfilter)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.yfilter)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.yfilter)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
        fec_subgroup_id.value_namespace = name_space;
        fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
        feclspid.value_namespace = name_space;
        feclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
        fec_destination.value_namespace = name_space;
        fec_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
        fecp2mpid.value_namespace = name_space;
        fecp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
        fec_subgroup_originator.value_namespace = name_space;
        fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "feclspid")
    {
        feclspid.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-destination")
    {
        fec_destination.yfilter = yfilter;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "interface-name" || name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/ipv4bf-do-mplste-head-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/ipv4bf-do-mplste-head-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-briefs/ipv4bf-do-mplste-head-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteHeadSessionBriefs::Ipv4bfDoMplsteHeadSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetails()
    :
    ipv4bf_do_mplste_tail_session_detail(this, {})
{

    yang_name = "ipv4bf-do-mplste-tail-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::~Ipv4bfDoMplsteTailSessionDetails()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_detail.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_detail.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-session-detail")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail>();
        ent_->parent = this;
        ipv4bf_do_mplste_tail_session_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4bf_do_mplste_tail_session_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-tail-session-detail")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::Ipv4bfDoMplsteTailSessionDetail()
    :
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::uint32, "incoming-label"},
    fe_ctype{YType::uint32, "fe-ctype"},
    fec_subgroup_id{YType::uint32, "fec-subgroup-id"},
    feclspid{YType::uint32, "feclspid"},
    fec_tunnel_id{YType::uint32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::uint32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::uint32, "fec-ctype"},
    location{YType::str, "location"}
        ,
    status_information(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation>())
    , mp_download_state(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState>())
    , lsp_ping_info(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo>())
    , owner_information(this, {})
    , association_information(this, {})
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-session-detail"; yang_parent_name = "ipv4bf-do-mplste-tail-session-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::~Ipv4bfDoMplsteTailSessionDetail()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| incoming_label.is_set
	|| fe_ctype.is_set
	|| fec_subgroup_id.is_set
	|| feclspid.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_destination.is_set
	|| fecp2mpid.is_set
	|| fec_subgroup_originator.is_set
	|| fec_ctype.is_set
	|| location.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(fec_subgroup_id.yfilter)
	|| ydk::is_set(feclspid.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_destination.yfilter)
	|| ydk::is_set(fecp2mpid.yfilter)
	|| ydk::is_set(fec_subgroup_originator.yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.yfilter)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.yfilter)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.yfilter)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.yfilter)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.yfilter)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "association-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation>();
        ent_->parent = this;
        association_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_information != nullptr)
    {
        _children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        _children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        _children["lsp-ping-info"] = lsp_ping_info;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : association_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
        fec_subgroup_id.value_namespace = name_space;
        fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
        feclspid.value_namespace = name_space;
        feclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
        fec_destination.value_namespace = name_space;
        fec_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
        fecp2mpid.value_namespace = name_space;
        fecp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
        fec_subgroup_originator.value_namespace = name_space;
        fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "feclspid")
    {
        feclspid.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-destination")
    {
        fec_destination.yfilter = yfilter;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
        ,
    source_address(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress>())
    , last_state_change(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange>())
    , transmit_packet(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket>())
    , receive_packet(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket>())
    , status_brief_information(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation>())
    , async_transmit_statistics(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics>())
    , async_receive_statistics(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics>())
    , echo_transmit_statistics(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics>())
    , echo_received_statistics(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        _children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        _children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        _children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        _children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        _children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        _children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        _children["echo-received-statistics"] = echo_received_statistics;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
        ,
    change_time(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::has_data() const
{
    if (is_presence_container) return true;
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(change_time != nullptr)
    {
        _children["change-time"] = change_time;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
        ,
    lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime>())
    , lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
    , lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_ping_tx_last_time != nullptr)
    {
        _children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        _children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        _children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::LspPingInfo::LspPingRxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::AssociationInformation()
    :
    interface_name{YType::str, "interface-name"},
    sessiontype{YType::enumeration, "sessiontype"},
    local_discriminator{YType::uint32, "local-discriminator"}
        ,
    ip_destination_address(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress>())
    , owner_information(this, {})
{
    ip_destination_address->parent = this;

    yang_name = "association-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| sessiontype.is_set
	|| local_discriminator.is_set
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address == nullptr)
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress>();
        }
        return ip_destination_address;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_destination_address != nullptr)
    {
        _children["ip-destination-address"] = ip_destination_address;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-destination-address" || name == "owner-information" || name == "interface-name" || name == "sessiontype" || name == "local-discriminator")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip-destination-address"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::IpDestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    name{YType::str, "name"}
{

    yang_name = "owner-information"; yang_parent_name = "association-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| adjusted_detection_multiplier.is_set
	|| name.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(adjusted_interval.yfilter)
	|| ydk::is_set(adjusted_detection_multiplier.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-details/ipv4bf-do-mplste-tail-session-detail/association-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.yfilter)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.yfilter)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
        adjusted_interval.value_namespace = name_space;
        adjusted_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
        adjusted_detection_multiplier.value_namespace = name_space;
        adjusted_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval.yfilter = yfilter;
    }
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionDetails::Ipv4bfDoMplsteTailSessionDetail::AssociationInformation::OwnerInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier" || name == "adjusted-interval" || name == "adjusted-detection-multiplier" || name == "name")
        return true;
    return false;
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummaries()
    :
    ipv4_multi_hop_node_location_summary(this, {"location"})
{

    yang_name = "ipv4-multi-hop-node-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopNodeLocationSummaries::~Ipv4MultiHopNodeLocationSummaries()
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_multi_hop_node_location_summary.len(); index++)
    {
        if(ipv4_multi_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_node_location_summary.len(); index++)
    {
        if(ipv4_multi_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-node-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopNodeLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-multi-hop-node-location-summary")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary>();
        ent_->parent = this;
        ipv4_multi_hop_node_location_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_multi_hop_node_location_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-multi-hop-node-location-summary")
        return true;
    return false;
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::Ipv4MultiHopNodeLocationSummary()
    :
    location{YType::str, "location"}
        ,
    session_state(std::make_shared<Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-multi-hop-node-location-summary"; yang_parent_name = "ipv4-multi-hop-node-location-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::~Ipv4MultiHopNodeLocationSummary()
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-node-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-node-location-summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location")
        return true;
    return false;
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4-multi-hop-node-location-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopNodeLocationSummaries::Ipv4MultiHopNodeLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBriefs()
    :
    ipv4bf_do_mplste_tail_session_brief(this, {})
{

    yang_name = "ipv4bf-do-mplste-tail-session-briefs"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::~Ipv4bfDoMplsteTailSessionBriefs()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_brief.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_session_brief.len(); index++)
    {
        if(ipv4bf_do_mplste_tail_session_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4bf-do-mplste-tail-session-brief")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief>();
        ent_->parent = this;
        ipv4bf_do_mplste_tail_session_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4bf_do_mplste_tail_session_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4bf-do-mplste-tail-session-brief")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::Ipv4bfDoMplsteTailSessionBrief()
    :
    vrf_name{YType::str, "vrf-name"},
    incoming_label{YType::uint32, "incoming-label"},
    fe_ctype{YType::uint32, "fe-ctype"},
    fec_subgroup_id{YType::uint32, "fec-subgroup-id"},
    feclspid{YType::uint32, "feclspid"},
    fec_tunnel_id{YType::uint32, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_destination{YType::str, "fec-destination"},
    fecp2mpid{YType::uint32, "fecp2mpid"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_ctype{YType::uint32, "fec-ctype"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    state{YType::enumeration, "state"},
    session_type{YType::enumeration, "session-type"},
    session_subtype{YType::str, "session-subtype"},
    session_flags{YType::uint32, "session-flags"}
        ,
    status_brief_information(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;

    yang_name = "ipv4bf-do-mplste-tail-session-brief"; yang_parent_name = "ipv4bf-do-mplste-tail-session-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::~Ipv4bfDoMplsteTailSessionBrief()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| incoming_label.is_set
	|| fe_ctype.is_set
	|| fec_subgroup_id.is_set
	|| feclspid.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_destination.is_set
	|| fecp2mpid.is_set
	|| fec_subgroup_originator.is_set
	|| fec_ctype.is_set
	|| location.is_set
	|| node_id.is_set
	|| state.is_set
	|| session_type.is_set
	|| session_subtype.is_set
	|| session_flags.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(incoming_label.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(fec_subgroup_id.yfilter)
	|| ydk::is_set(feclspid.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_destination.yfilter)
	|| ydk::is_set(fecp2mpid.yfilter)
	|| ydk::is_set(fec_subgroup_originator.yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(session_flags.yfilter)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-session-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.yfilter)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.yfilter)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.yfilter)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.yfilter)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.yfilter)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.yfilter)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.yfilter)) leaf_name_data.push_back(session_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
        incoming_label.value_namespace = name_space;
        incoming_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
        fec_subgroup_id.value_namespace = name_space;
        fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
        feclspid.value_namespace = name_space;
        feclspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
        fec_destination.value_namespace = name_space;
        fec_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
        fecp2mpid.value_namespace = name_space;
        fecp2mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
        fec_subgroup_originator.value_namespace = name_space;
        fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
        session_flags.value_namespace = name_space;
        session_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "incoming-label")
    {
        incoming_label.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "feclspid")
    {
        feclspid.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-destination")
    {
        fec_destination.yfilter = yfilter;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid.yfilter = yfilter;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "session-flags")
    {
        session_flags.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-brief-information" || name == "vrf-name" || name == "incoming-label" || name == "fe-ctype" || name == "fec-subgroup-id" || name == "feclspid" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-destination" || name == "fecp2mpid" || name == "fec-subgroup-originator" || name == "fec-ctype" || name == "location" || name == "node-id" || name == "state" || name == "session-type" || name == "session-subtype" || name == "session-flags")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4bf-do-mplste-tail-session-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/ipv4bf-do-mplste-tail-session-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/ipv4bf-do-mplste-tail-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-session-briefs/ipv4bf-do-mplste-tail-session-brief/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv4bfDoMplsteTailSessionBriefs::Ipv4bfDoMplsteTailSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummaries()
    :
    ipv6_multi_hop_node_location_summary(this, {"location"})
{

    yang_name = "ipv6-multi-hop-node-location-summaries"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopNodeLocationSummaries::~Ipv6MultiHopNodeLocationSummaries()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_multi_hop_node_location_summary.len(); index++)
    {
        if(ipv6_multi_hop_node_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_node_location_summary.len(); index++)
    {
        if(ipv6_multi_hop_node_location_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-node-location-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopNodeLocationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-node-location-summary")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary>();
        ent_->parent = this;
        ipv6_multi_hop_node_location_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_multi_hop_node_location_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-node-location-summary")
        return true;
    return false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::Ipv6MultiHopNodeLocationSummary()
    :
    location{YType::str, "location"}
        ,
    session_state(std::make_shared<Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv6-multi-hop-node-location-summary"; yang_parent_name = "ipv6-multi-hop-node-location-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::~Ipv6MultiHopNodeLocationSummary()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-node-location-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-node-location-summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "location")
        return true;
    return false;
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    up_count{YType::uint32, "up-count"},
    down_count{YType::uint32, "down-count"},
    unknown_count{YType::uint32, "unknown-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv6-multi-hop-node-location-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| up_count.is_set
	|| down_count.is_set
	|| unknown_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set;
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter)
	|| ydk::is_set(retry_count.yfilter)
	|| ydk::is_set(standby_count.yfilter);
}

std::string Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.yfilter)) leaf_name_data.push_back(standby_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
        standby_count.value_namespace = name_space;
        standby_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
    if(value_path == "standby-count")
    {
        standby_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopNodeLocationSummaries::Ipv6MultiHopNodeLocationSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "up-count" || name == "down-count" || name == "unknown-count" || name == "retry-count" || name == "standby-count")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSummary::Ipv4MultiHopSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4MultiHopSummary::SessionState>())
{
    session_state->parent = this;

    yang_name = "ipv4-multi-hop-summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSummary::~Ipv4MultiHopSummary()
{
}

bool Bfd::Ipv4MultiHopSummary::has_data() const
{
    if (is_presence_container) return true;
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4MultiHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4MultiHopSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_state != nullptr)
    {
        _children["session-state"] = session_state;
    }

    return _children;
}

void Bfd::Ipv4MultiHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4MultiHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4MultiHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state")
        return true;
    return false;
}

Bfd::Ipv4MultiHopSummary::SessionState::SessionState()
    :
    total_count{YType::uint32, "total-count"},
    down_count{YType::uint32, "down-count"},
    up_count{YType::uint32, "up-count"},
    unknown_count{YType::uint32, "unknown-count"}
{

    yang_name = "session-state"; yang_parent_name = "ipv4-multi-hop-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4MultiHopSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4MultiHopSummary::SessionState::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| down_count.is_set
	|| up_count.is_set
	|| unknown_count.is_set;
}

bool Bfd::Ipv4MultiHopSummary::SessionState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(down_count.yfilter)
	|| ydk::is_set(up_count.yfilter)
	|| ydk::is_set(unknown_count.yfilter);
}

std::string Bfd::Ipv4MultiHopSummary::SessionState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4MultiHopSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4MultiHopSummary::SessionState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (down_count.is_set || is_set(down_count.yfilter)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.yfilter)) leaf_name_data.push_back(up_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.yfilter)) leaf_name_data.push_back(unknown_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4MultiHopSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4MultiHopSummary::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4MultiHopSummary::SessionState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-count")
    {
        down_count = value;
        down_count.value_namespace = name_space;
        down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-count")
    {
        up_count = value;
        up_count.value_namespace = name_space;
        up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
        unknown_count.value_namespace = name_space;
        unknown_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4MultiHopSummary::SessionState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "down-count")
    {
        down_count.yfilter = yfilter;
    }
    if(value_path == "up-count")
    {
        up_count.yfilter = yfilter;
    }
    if(value_path == "unknown-count")
    {
        unknown_count.yfilter = yfilter;
    }
}

bool Bfd::Ipv4MultiHopSummary::SessionState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "down-count" || name == "up-count" || name == "unknown-count")
        return true;
    return false;
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopCounters()
    :
    ipv4_single_hop_packet_counters(std::make_shared<Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters>())
{
    ipv4_single_hop_packet_counters->parent = this;

    yang_name = "ipv4-single-hop-counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopCounters::~Ipv4SingleHopCounters()
{
}

bool Bfd::Ipv4SingleHopCounters::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4_single_hop_packet_counters !=  nullptr && ipv4_single_hop_packet_counters->has_data());
}

bool Bfd::Ipv4SingleHopCounters::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_single_hop_packet_counters !=  nullptr && ipv4_single_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv4SingleHopCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_single_hop_packet_counters != nullptr)
    {
        _children["ipv4-single-hop-packet-counters"] = ipv4_single_hop_packet_counters;
    }

    return _children;
}

void Bfd::Ipv4SingleHopCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-packet-counters")
        return true;
    return false;
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounters()
    :
    ipv4_single_hop_packet_counter(this, {})
{

    yang_name = "ipv4-single-hop-packet-counters"; yang_parent_name = "ipv4-single-hop-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::~Ipv4SingleHopPacketCounters()
{
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_single_hop_packet_counter.len(); index++)
    {
        if(ipv4_single_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_packet_counter.len(); index++)
    {
        if(ipv4_single_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-packet-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-single-hop-packet-counter")
    {
        auto ent_ = std::make_shared<Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter>();
        ent_->parent = this;
        ipv4_single_hop_packet_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_single_hop_packet_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-single-hop-packet-counter")
        return true;
    return false;
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::Ipv4SingleHopPacketCounter()
    :
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    display_type{YType::enumeration, "display-type"}
{

    yang_name = "ipv4-single-hop-packet-counter"; yang_parent_name = "ipv4-single-hop-packet-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::~Ipv4SingleHopPacketCounter()
{
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| location.is_set
	|| hello_transmit_count.is_set
	|| hello_receive_count.is_set
	|| echo_transmit_count.is_set
	|| echo_receive_count.is_set
	|| display_type.is_set;
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(hello_transmit_count.yfilter)
	|| ydk::is_set(hello_receive_count.yfilter)
	|| ydk::is_set(echo_transmit_count.yfilter)
	|| ydk::is_set(echo_receive_count.yfilter)
	|| ydk::is_set(display_type.yfilter);
}

std::string Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-counters/ipv4-single-hop-packet-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-packet-counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.yfilter)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.yfilter)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.yfilter)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.yfilter)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.yfilter)) leaf_name_data.push_back(display_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
        hello_transmit_count.value_namespace = name_space;
        hello_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
        hello_receive_count.value_namespace = name_space;
        hello_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
        echo_transmit_count.value_namespace = name_space;
        echo_transmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
        echo_receive_count.value_namespace = name_space;
        echo_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "display-type")
    {
        display_type = value;
        display_type.value_namespace = name_space;
        display_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count.yfilter = yfilter;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count.yfilter = yfilter;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count.yfilter = yfilter;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count.yfilter = yfilter;
    }
    if(value_path == "display-type")
    {
        display_type.yfilter = yfilter;
    }
}

bool Bfd::Ipv4SingleHopCounters::Ipv4SingleHopPacketCounters::Ipv4SingleHopPacketCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "location" || name == "hello-transmit-count" || name == "hello-receive-count" || name == "echo-transmit-count" || name == "echo-receive-count" || name == "display-type")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetails()
    :
    ipv6_multi_hop_session_detail(this, {})
{

    yang_name = "ipv6-multi-hop-session-details"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::~Ipv6MultiHopSessionDetails()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_multi_hop_session_detail.len(); index++)
    {
        if(ipv6_multi_hop_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_session_detail.len(); index++)
    {
        if(ipv6_multi_hop_session_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-multi-hop-session-detail")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail>();
        ent_->parent = this;
        ipv6_multi_hop_session_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_multi_hop_session_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-multi-hop-session-detail")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::Ipv6MultiHopSessionDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"}
        ,
    status_information(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation>())
    , mp_download_state(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState>())
    , lsp_ping_info(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo>())
    , owner_information(this, {})
    , association_information(this, {})
{
    status_information->parent = this;
    mp_download_state->parent = this;
    lsp_ping_info->parent = this;

    yang_name = "ipv6-multi-hop-session-detail"; yang_parent_name = "ipv6-multi-hop-session-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::~Ipv6MultiHopSessionDetail()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| (status_information !=  nullptr && status_information->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<owner_information.len(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<association_information.len(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (status_information !=  nullptr && status_information->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-session-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-information")
    {
        if(status_information == nullptr)
        {
            status_information = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation>();
        }
        return status_information;
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state == nullptr)
        {
            mp_download_state = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState>();
        }
        return mp_download_state;
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info == nullptr)
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo>();
        }
        return lsp_ping_info;
    }

    if(child_yang_name == "owner-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::OwnerInformation>();
        ent_->parent = this;
        owner_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "association-information")
    {
        auto ent_ = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::AssociationInformation>();
        ent_->parent = this;
        association_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_information != nullptr)
    {
        _children["status-information"] = status_information;
    }

    if(mp_download_state != nullptr)
    {
        _children["mp-download-state"] = mp_download_state;
    }

    if(lsp_ping_info != nullptr)
    {
        _children["lsp-ping-info"] = lsp_ping_info;
    }

    count_ = 0;
    for (auto ent_ : owner_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : association_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-information" || name == "mp-download-state" || name == "lsp-ping-info" || name == "owner-information" || name == "association-information" || name == "source-address" || name == "destination-address" || name == "location" || name == "vrf-name")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusInformation()
    :
    sessiontype{YType::enumeration, "sessiontype"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    to_up_state_count{YType::uint32, "to-up-state-count"},
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    latency_number{YType::uint32, "latency-number"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_average{YType::uint32, "latency-average"},
    node_id{YType::str, "node-id"},
    internal_label{YType::uint32, "internal-label"}
        ,
    source_address(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress>())
    , last_state_change(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange>())
    , transmit_packet(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket>())
    , receive_packet(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket>())
    , status_brief_information(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation>())
    , async_transmit_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>())
    , async_receive_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>())
    , echo_transmit_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>())
    , echo_received_statistics(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>())
{
    source_address->parent = this;
    last_state_change->parent = this;
    transmit_packet->parent = this;
    receive_packet->parent = this;
    status_brief_information->parent = this;
    async_transmit_statistics->parent = this;
    async_receive_statistics->parent = this;
    echo_transmit_statistics->parent = this;
    echo_received_statistics->parent = this;

    yang_name = "status-information"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sessiontype.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| to_up_state_count.is_set
	|| desired_minimum_echo_transmit_interval.is_set
	|| remote_negotiated_interval.is_set
	|| latency_number.is_set
	|| latency_minimum.is_set
	|| latency_maximum.is_set
	|| latency_average.is_set
	|| node_id.is_set
	|| internal_label.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessiontype.yfilter)
	|| ydk::is_set(session_subtype.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(to_up_state_count.yfilter)
	|| ydk::is_set(desired_minimum_echo_transmit_interval.yfilter)
	|| ydk::is_set(remote_negotiated_interval.yfilter)
	|| ydk::is_set(latency_number.yfilter)
	|| ydk::is_set(latency_minimum.yfilter)
	|| ydk::is_set(latency_maximum.yfilter)
	|| ydk::is_set(latency_average.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessiontype.is_set || is_set(sessiontype.yfilter)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.yfilter)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.yfilter)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());
    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.yfilter)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.yfilter)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.yfilter)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.yfilter)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.yfilter)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change == nullptr)
        {
            last_state_change = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange>();
        }
        return last_state_change;
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet == nullptr)
        {
            transmit_packet = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket>();
        }
        return transmit_packet;
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet == nullptr)
        {
            receive_packet = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket>();
        }
        return receive_packet;
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information == nullptr)
        {
            status_brief_information = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation>();
        }
        return status_brief_information;
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics == nullptr)
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics>();
        }
        return async_transmit_statistics;
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics == nullptr)
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics>();
        }
        return async_receive_statistics;
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics == nullptr)
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics>();
        }
        return echo_transmit_statistics;
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics == nullptr)
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics>();
        }
        return echo_received_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(last_state_change != nullptr)
    {
        _children["last-state-change"] = last_state_change;
    }

    if(transmit_packet != nullptr)
    {
        _children["transmit-packet"] = transmit_packet;
    }

    if(receive_packet != nullptr)
    {
        _children["receive-packet"] = receive_packet;
    }

    if(status_brief_information != nullptr)
    {
        _children["status-brief-information"] = status_brief_information;
    }

    if(async_transmit_statistics != nullptr)
    {
        _children["async-transmit-statistics"] = async_transmit_statistics;
    }

    if(async_receive_statistics != nullptr)
    {
        _children["async-receive-statistics"] = async_receive_statistics;
    }

    if(echo_transmit_statistics != nullptr)
    {
        _children["echo-transmit-statistics"] = echo_transmit_statistics;
    }

    if(echo_received_statistics != nullptr)
    {
        _children["echo-received-statistics"] = echo_received_statistics;
    }

    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessiontype")
    {
        sessiontype = value;
        sessiontype.value_namespace = name_space;
        sessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
        session_subtype.value_namespace = name_space;
        session_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
        to_up_state_count.value_namespace = name_space;
        to_up_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
        desired_minimum_echo_transmit_interval.value_namespace = name_space;
        desired_minimum_echo_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
        remote_negotiated_interval.value_namespace = name_space;
        remote_negotiated_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
        latency_number.value_namespace = name_space;
        latency_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
        latency_minimum.value_namespace = name_space;
        latency_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
        latency_maximum.value_namespace = name_space;
        latency_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
        latency_average.value_namespace = name_space;
        latency_average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessiontype")
    {
        sessiontype.yfilter = yfilter;
    }
    if(value_path == "session-subtype")
    {
        session_subtype.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval.yfilter = yfilter;
    }
    if(value_path == "latency-number")
    {
        latency_number.yfilter = yfilter;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum.yfilter = yfilter;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum.yfilter = yfilter;
    }
    if(value_path == "latency-average")
    {
        latency_average.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "last-state-change" || name == "transmit-packet" || name == "receive-packet" || name == "status-brief-information" || name == "async-transmit-statistics" || name == "async-receive-statistics" || name == "echo-transmit-statistics" || name == "echo-received-statistics" || name == "sessiontype" || name == "session-subtype" || name == "state" || name == "local-discriminator" || name == "remote-discriminator" || name == "to-up-state-count" || name == "desired-minimum-echo-transmit-interval" || name == "remote-negotiated-interval" || name == "latency-number" || name == "latency-minimum" || name == "latency-maximum" || name == "latency-average" || name == "node-id" || name == "internal-label")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(dummy.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "dummy" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "last-state-change"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    if (is_presence_container) return true;
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::LastStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "hours" || name == "minutes" || name == "seconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "transmit-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::TransmitPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    version{YType::uint8, "version"},
    diagnostic{YType::enumeration, "diagnostic"},
    ihear_you{YType::int32, "ihear-you"},
    state{YType::enumeration, "state"},
    demand{YType::int32, "demand"},
    poll{YType::int32, "poll"},
    final_{YType::int32, "final"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    authentication_present{YType::int32, "authentication-present"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    your_discriminator{YType::uint32, "your-discriminator"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"}
{

    yang_name = "receive-packet"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    if (is_presence_container) return true;
    return version.is_set
	|| diagnostic.is_set
	|| ihear_you.is_set
	|| state.is_set
	|| demand.is_set
	|| poll.is_set
	|| final_.is_set
	|| control_plane_independent.is_set
	|| authentication_present.is_set
	|| detection_multiplier.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| your_discriminator.is_set
	|| desired_minimum_transmit_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| required_minimum_echo_receive_interval.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(diagnostic.yfilter)
	|| ydk::is_set(ihear_you.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(demand.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(final_.yfilter)
	|| ydk::is_set(control_plane_independent.yfilter)
	|| ydk::is_set(authentication_present.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(my_discriminator.yfilter)
	|| ydk::is_set(your_discriminator.yfilter)
	|| ydk::is_set(desired_minimum_transmit_interval.yfilter)
	|| ydk::is_set(required_minimum_receive_interval.yfilter)
	|| ydk::is_set(required_minimum_echo_receive_interval.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.yfilter)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.yfilter)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (demand.is_set || is_set(demand.yfilter)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (final_.is_set || is_set(final_.yfilter)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.yfilter)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (authentication_present.is_set || is_set(authentication_present.yfilter)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.yfilter)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.yfilter)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.yfilter)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.yfilter)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
        diagnostic.value_namespace = name_space;
        diagnostic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
        ihear_you.value_namespace = name_space;
        ihear_you.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand")
    {
        demand = value;
        demand.value_namespace = name_space;
        demand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "final")
    {
        final_ = value;
        final_.value_namespace = name_space;
        final_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
        control_plane_independent.value_namespace = name_space;
        control_plane_independent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-present")
    {
        authentication_present = value;
        authentication_present.value_namespace = name_space;
        authentication_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
        my_discriminator.value_namespace = name_space;
        my_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
        your_discriminator.value_namespace = name_space;
        your_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
        desired_minimum_transmit_interval.value_namespace = name_space;
        desired_minimum_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
        required_minimum_receive_interval.value_namespace = name_space;
        required_minimum_receive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
        required_minimum_echo_receive_interval.value_namespace = name_space;
        required_minimum_echo_receive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "diagnostic")
    {
        diagnostic.yfilter = yfilter;
    }
    if(value_path == "ihear-you")
    {
        ihear_you.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "demand")
    {
        demand.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "final")
    {
        final_.yfilter = yfilter;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent.yfilter = yfilter;
    }
    if(value_path == "authentication-present")
    {
        authentication_present.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator.yfilter = yfilter;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator.yfilter = yfilter;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval.yfilter = yfilter;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::ReceivePacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version" || name == "diagnostic" || name == "ihear-you" || name == "state" || name == "demand" || name == "poll" || name == "final" || name == "control-plane-independent" || name == "authentication-present" || name == "detection-multiplier" || name == "length" || name == "my-discriminator" || name == "your-discriminator" || name == "desired-minimum-transmit-interval" || name == "required-minimum-receive-interval" || name == "required-minimum-echo-receive-interval")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
    , echo_interval_multiplier(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    echo_interval_multiplier->parent = this;

    yang_name = "status-brief-information"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    if (is_presence_container) return true;
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(yfilter)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier == nullptr)
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
        }
        return async_interval_multiplier;
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier == nullptr)
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
        }
        return echo_interval_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(async_interval_multiplier != nullptr)
    {
        _children["async-interval-multiplier"] = async_interval_multiplier;
    }

    if(echo_interval_multiplier != nullptr)
    {
        _children["echo-interval-multiplier"] = echo_interval_multiplier;
    }

    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "async-interval-multiplier" || name == "echo-interval-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_remote_transmit_interval.is_set
	|| negotiated_local_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_remote_transmit_interval.yfilter)
	|| ydk::is_set(negotiated_local_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
        negotiated_remote_transmit_interval.value_namespace = name_space;
        negotiated_remote_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
        negotiated_local_transmit_interval.value_namespace = name_space;
        negotiated_local_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-remote-transmit-interval" || name == "negotiated-local-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"},
    detection_time{YType::uint32, "detection-time"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    if (is_presence_container) return true;
    return negotiated_transmit_interval.is_set
	|| detection_time.is_set
	|| detection_multiplier.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(negotiated_transmit_interval.yfilter)
	|| ydk::is_set(detection_time.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/status-brief-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.yfilter)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.yfilter)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
        negotiated_transmit_interval.value_namespace = name_space;
        negotiated_transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
        detection_time.value_namespace = name_space;
        detection_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval.yfilter = yfilter;
    }
    if(value_path == "detection-time")
    {
        detection_time.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-transmit-interval" || name == "detection-time" || name == "detection-multiplier")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "async-receive-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::AsyncReceiveStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoTransmitStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    number{YType::uint32, "number"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"},
    average{YType::uint32, "average"},
    last{YType::uint32, "last"}
{

    yang_name = "echo-received-statistics"; yang_parent_name = "status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| minimum.is_set
	|| maximum.is_set
	|| average.is_set
	|| last.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(last.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::StatusInformation::EchoReceivedStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "minimum" || name == "maximum" || name == "average" || name == "last")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
        ,
    change_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;

    yang_name = "mp-download-state"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_data() const
{
    if (is_presence_container) return true;
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mp_download_state.yfilter)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.yfilter)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change-time")
    {
        if(change_time == nullptr)
        {
            change_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime>();
        }
        return change_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(change_time != nullptr)
    {
        _children["change-time"] = change_time;
    }

    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
        mp_download_state.value_namespace = name_space;
        mp_download_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-time" || name == "mp-download-state")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "change-time"; yang_parent_name = "mp-download-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/mp-download-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::MpDownloadState::ChangeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"}
        ,
    lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>())
    , lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
    , lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>())
{
    lsp_ping_tx_last_time->parent = this;
    lsp_ping_tx_last_error_time->parent = this;
    lsp_ping_rx_last_time->parent = this;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv6-multi-hop-session-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_data() const
{
    if (is_presence_container) return true;
    return lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_rx_last_output.is_set
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data());
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_ping_tx_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_error_count.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_rc.yfilter)
	|| ydk::is_set(lsp_ping_tx_last_error_rc.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_discr.yfilter)
	|| ydk::is_set(lsp_ping_rx_count.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_code.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_subcode.yfilter)
	|| ydk::is_set(lsp_ping_rx_last_output.yfilter)
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation());
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.yfilter)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.yfilter)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.yfilter)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.yfilter)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time == nullptr)
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime>();
        }
        return lsp_ping_tx_last_time;
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time == nullptr)
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
        }
        return lsp_ping_tx_last_error_time;
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time == nullptr)
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingRxLastTime>();
        }
        return lsp_ping_rx_last_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_ping_tx_last_time != nullptr)
    {
        _children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
    }

    if(lsp_ping_tx_last_error_time != nullptr)
    {
        _children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
    }

    if(lsp_ping_rx_last_time != nullptr)
    {
        _children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
    }

    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
        lsp_ping_tx_count.value_namespace = name_space;
        lsp_ping_tx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
        lsp_ping_tx_error_count.value_namespace = name_space;
        lsp_ping_tx_error_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
        lsp_ping_tx_last_rc.value_namespace = name_space;
        lsp_ping_tx_last_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
        lsp_ping_tx_last_error_rc.value_namespace = name_space;
        lsp_ping_tx_last_error_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
        lsp_ping_rx_last_discr.value_namespace = name_space;
        lsp_ping_rx_last_discr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
        lsp_ping_rx_count.value_namespace = name_space;
        lsp_ping_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
        lsp_ping_rx_last_code.value_namespace = name_space;
        lsp_ping_rx_last_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
        lsp_ping_rx_last_subcode.value_namespace = name_space;
        lsp_ping_rx_last_subcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
        lsp_ping_rx_last_output.value_namespace = name_space;
        lsp_ping_rx_last_output.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode.yfilter = yfilter;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-ping-tx-last-time" || name == "lsp-ping-tx-last-error-time" || name == "lsp-ping-rx-last-time" || name == "lsp-ping-tx-count" || name == "lsp-ping-tx-error-count" || name == "lsp-ping-tx-last-rc" || name == "lsp-ping-tx-last-error-rc" || name == "lsp-ping-rx-last-discr" || name == "lsp-ping-rx-count" || name == "lsp-ping-rx-last-code" || name == "lsp-ping-rx-last-subcode" || name == "lsp-ping-rx-last-output")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    seconds{YType::uint64, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-session-details/ipv6-multi-hop-session-detail/lsp-ping-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bfd::Ipv6MultiHopSessionDetails::Ipv6MultiHopSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

const Enum::YLeaf BfdSession::undefined {0, "undefined"};
const Enum::YLeaf BfdSession::bundle_member {1, "bundle-member"};
const Enum::YLeaf BfdSession::bundle_interface {2, "bundle-interface"};
const Enum::YLeaf BfdSession::state_inheriting {3, "state-inheriting"};
const Enum::YLeaf BfdSession::bundle_vlan {4, "bundle-vlan"};
const Enum::YLeaf BfdSession::mpls_tp {5, "mpls-tp"};
const Enum::YLeaf BfdSession::gre {6, "gre"};
const Enum::YLeaf BfdSession::pseudowire_headend {7, "pseudowire-headend"};
const Enum::YLeaf BfdSession::ip_single_hop {8, "ip-single-hop"};

const Enum::YLeaf BfdAfId::bfd_af_id_none {0, "bfd-af-id-none"};
const Enum::YLeaf BfdAfId::bfd_af_id_ipv4 {2, "bfd-af-id-ipv4"};
const Enum::YLeaf BfdAfId::bfd_af_id_ipv6 {10, "bfd-af-id-ipv6"};

const Enum::YLeaf BfdMpDownloadState::bfd_mp_download_none {0, "bfd-mp-download-none"};
const Enum::YLeaf BfdMpDownloadState::bfd_mp_download_no_lc {1, "bfd-mp-download-no-lc"};
const Enum::YLeaf BfdMpDownloadState::bfd_mp_download_downloaded {2, "bfd-mp-download-downloaded"};
const Enum::YLeaf BfdMpDownloadState::bfd_mp_download_ack {3, "bfd-mp-download-ack"};
const Enum::YLeaf BfdMpDownloadState::bfd_mp_download_nack {4, "bfd-mp-download-nack"};
const Enum::YLeaf BfdMpDownloadState::bfd_mp_download_delete {5, "bfd-mp-download-delete"};

const Enum::YLeaf BfdMgmtSessionState::bfd_mgmt_session_state_admin_down {0, "bfd-mgmt-session-state-admin-down"};
const Enum::YLeaf BfdMgmtSessionState::bfd_mgmt_session_state_down {1, "bfd-mgmt-session-state-down"};
const Enum::YLeaf BfdMgmtSessionState::bfd_mgmt_session_state_init {2, "bfd-mgmt-session-state-init"};
const Enum::YLeaf BfdMgmtSessionState::bfd_mgmt_session_state_up {3, "bfd-mgmt-session-state-up"};
const Enum::YLeaf BfdMgmtSessionState::bfd_mgmt_session_state_failing {4, "bfd-mgmt-session-state-failing"};
const Enum::YLeaf BfdMgmtSessionState::bfd_mgmt_session_state_unknown {6, "bfd-mgmt-session-state-unknown"};

const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_none {0, "bfd-mgmt-session-diag-none"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_control_detect_expired {1, "bfd-mgmt-session-diag-control-detect-expired"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_echo_function_failed {2, "bfd-mgmt-session-diag-echo-function-failed"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_nb_or_signaled_down {3, "bfd-mgmt-session-diag-nb-or-signaled-down"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_fwding_plane_reset {4, "bfd-mgmt-session-diag-fwding-plane-reset"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_path_down {5, "bfd-mgmt-session-diag-path-down"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_conc_path_down {6, "bfd-mgmt-session-diag-conc-path-down"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_admin_down {7, "bfd-mgmt-session-diag-admin-down"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_rev_conc_path_down {8, "bfd-mgmt-session-diag-rev-conc-path-down"};
const Enum::YLeaf BfdMgmtSessionDiag::bfd_mgmt_session_diag_num {10, "bfd-mgmt-session-diag-num"};

const Enum::YLeaf BfdMgmtPktDisplay::bfd_mgmt_pkt_display_type_none {0, "bfd-mgmt-pkt-display-type-none"};
const Enum::YLeaf BfdMgmtPktDisplay::bfd_mgmt_pkt_display_type_bob_mbr {1, "bfd-mgmt-pkt-display-type-bob-mbr"};
const Enum::YLeaf BfdMgmtPktDisplay::bfd_mgmt_pkt_display_type_max {2, "bfd-mgmt-pkt-display-type-max"};


}
}

