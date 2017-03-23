
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_0.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {

RsvpStandby::RsvpStandby()
    :
    authentication_briefs(std::make_shared<RsvpStandby::AuthenticationBriefs>())
	,authentication_details(std::make_shared<RsvpStandby::AuthenticationDetails>())
	,counters(std::make_shared<RsvpStandby::Counters>())
	,frr_summary(std::make_shared<RsvpStandby::FrrSummary>())
	,frrs(std::make_shared<RsvpStandby::Frrs>())
	,global_neighbor_briefs(std::make_shared<RsvpStandby::GlobalNeighborBriefs>())
	,global_neighbor_details(std::make_shared<RsvpStandby::GlobalNeighborDetails>())
	,graceful_restart(std::make_shared<RsvpStandby::GracefulRestart>())
	,hello_instance_briefs(std::make_shared<RsvpStandby::HelloInstanceBriefs>())
	,hello_instance_details(std::make_shared<RsvpStandby::HelloInstanceDetails>())
	,hello_interface_instance_briefs(std::make_shared<RsvpStandby::HelloInterfaceInstanceBriefs>())
	,hello_interface_instance_details(std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails>())
	,interface_briefs(std::make_shared<RsvpStandby::InterfaceBriefs>())
	,interface_detaileds(std::make_shared<RsvpStandby::InterfaceDetaileds>())
	,interface_neighbor_briefs(std::make_shared<RsvpStandby::InterfaceNeighborBriefs>())
	,interface_neighbor_details(std::make_shared<RsvpStandby::InterfaceNeighborDetails>())
	,interface_summaries(std::make_shared<RsvpStandby::InterfaceSummaries>())
	,nsr(std::make_shared<RsvpStandby::Nsr>())
	,open_config(std::make_shared<RsvpStandby::OpenConfig>())
	,psb_briefs(std::make_shared<RsvpStandby::PsbBriefs>())
	,psb_detaileds(std::make_shared<RsvpStandby::PsbDetaileds>())
	,request_briefs(std::make_shared<RsvpStandby::RequestBriefs>())
	,request_details(std::make_shared<RsvpStandby::RequestDetails>())
	,rsb_briefs(std::make_shared<RsvpStandby::RsbBriefs>())
	,rsb_detaileds(std::make_shared<RsvpStandby::RsbDetaileds>())
	,session_briefs(std::make_shared<RsvpStandby::SessionBriefs>())
	,session_detaileds(std::make_shared<RsvpStandby::SessionDetaileds>())
	,summary(std::make_shared<RsvpStandby::Summary>())
{
    authentication_briefs->parent = this;
    children["authentication-briefs"] = authentication_briefs;

    authentication_details->parent = this;
    children["authentication-details"] = authentication_details;

    counters->parent = this;
    children["counters"] = counters;

    frr_summary->parent = this;
    children["frr-summary"] = frr_summary;

    frrs->parent = this;
    children["frrs"] = frrs;

    global_neighbor_briefs->parent = this;
    children["global-neighbor-briefs"] = global_neighbor_briefs;

    global_neighbor_details->parent = this;
    children["global-neighbor-details"] = global_neighbor_details;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    hello_instance_briefs->parent = this;
    children["hello-instance-briefs"] = hello_instance_briefs;

    hello_instance_details->parent = this;
    children["hello-instance-details"] = hello_instance_details;

    hello_interface_instance_briefs->parent = this;
    children["hello-interface-instance-briefs"] = hello_interface_instance_briefs;

    hello_interface_instance_details->parent = this;
    children["hello-interface-instance-details"] = hello_interface_instance_details;

    interface_briefs->parent = this;
    children["interface-briefs"] = interface_briefs;

    interface_detaileds->parent = this;
    children["interface-detaileds"] = interface_detaileds;

    interface_neighbor_briefs->parent = this;
    children["interface-neighbor-briefs"] = interface_neighbor_briefs;

    interface_neighbor_details->parent = this;
    children["interface-neighbor-details"] = interface_neighbor_details;

    interface_summaries->parent = this;
    children["interface-summaries"] = interface_summaries;

    nsr->parent = this;
    children["nsr"] = nsr;

    open_config->parent = this;
    children["open-config"] = open_config;

    psb_briefs->parent = this;
    children["psb-briefs"] = psb_briefs;

    psb_detaileds->parent = this;
    children["psb-detaileds"] = psb_detaileds;

    request_briefs->parent = this;
    children["request-briefs"] = request_briefs;

    request_details->parent = this;
    children["request-details"] = request_details;

    rsb_briefs->parent = this;
    children["rsb-briefs"] = rsb_briefs;

    rsb_detaileds->parent = this;
    children["rsb-detaileds"] = rsb_detaileds;

    session_briefs->parent = this;
    children["session-briefs"] = session_briefs;

    session_detaileds->parent = this;
    children["session-detaileds"] = session_detaileds;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "rsvp-standby"; yang_parent_name = "Cisco-IOS-XR-ip-rsvp-oper";
}

RsvpStandby::~RsvpStandby()
{
}

bool RsvpStandby::has_data() const
{
    return (authentication_briefs !=  nullptr && authentication_briefs->has_data())
	|| (authentication_details !=  nullptr && authentication_details->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (frr_summary !=  nullptr && frr_summary->has_data())
	|| (frrs !=  nullptr && frrs->has_data())
	|| (global_neighbor_briefs !=  nullptr && global_neighbor_briefs->has_data())
	|| (global_neighbor_details !=  nullptr && global_neighbor_details->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (hello_instance_briefs !=  nullptr && hello_instance_briefs->has_data())
	|| (hello_instance_details !=  nullptr && hello_instance_details->has_data())
	|| (hello_interface_instance_briefs !=  nullptr && hello_interface_instance_briefs->has_data())
	|| (hello_interface_instance_details !=  nullptr && hello_interface_instance_details->has_data())
	|| (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interface_detaileds !=  nullptr && interface_detaileds->has_data())
	|| (interface_neighbor_briefs !=  nullptr && interface_neighbor_briefs->has_data())
	|| (interface_neighbor_details !=  nullptr && interface_neighbor_details->has_data())
	|| (interface_summaries !=  nullptr && interface_summaries->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (open_config !=  nullptr && open_config->has_data())
	|| (psb_briefs !=  nullptr && psb_briefs->has_data())
	|| (psb_detaileds !=  nullptr && psb_detaileds->has_data())
	|| (request_briefs !=  nullptr && request_briefs->has_data())
	|| (request_details !=  nullptr && request_details->has_data())
	|| (rsb_briefs !=  nullptr && rsb_briefs->has_data())
	|| (rsb_detaileds !=  nullptr && rsb_detaileds->has_data())
	|| (session_briefs !=  nullptr && session_briefs->has_data())
	|| (session_detaileds !=  nullptr && session_detaileds->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RsvpStandby::has_operation() const
{
    return is_set(operation)
	|| (authentication_briefs !=  nullptr && authentication_briefs->has_operation())
	|| (authentication_details !=  nullptr && authentication_details->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (frr_summary !=  nullptr && frr_summary->has_operation())
	|| (frrs !=  nullptr && frrs->has_operation())
	|| (global_neighbor_briefs !=  nullptr && global_neighbor_briefs->has_operation())
	|| (global_neighbor_details !=  nullptr && global_neighbor_details->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (hello_instance_briefs !=  nullptr && hello_instance_briefs->has_operation())
	|| (hello_instance_details !=  nullptr && hello_instance_details->has_operation())
	|| (hello_interface_instance_briefs !=  nullptr && hello_interface_instance_briefs->has_operation())
	|| (hello_interface_instance_details !=  nullptr && hello_interface_instance_details->has_operation())
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interface_detaileds !=  nullptr && interface_detaileds->has_operation())
	|| (interface_neighbor_briefs !=  nullptr && interface_neighbor_briefs->has_operation())
	|| (interface_neighbor_details !=  nullptr && interface_neighbor_details->has_operation())
	|| (interface_summaries !=  nullptr && interface_summaries->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (open_config !=  nullptr && open_config->has_operation())
	|| (psb_briefs !=  nullptr && psb_briefs->has_operation())
	|| (psb_detaileds !=  nullptr && psb_detaileds->has_operation())
	|| (request_briefs !=  nullptr && request_briefs->has_operation())
	|| (request_details !=  nullptr && request_details->has_operation())
	|| (rsb_briefs !=  nullptr && rsb_briefs->has_operation())
	|| (rsb_detaileds !=  nullptr && rsb_detaileds->has_operation())
	|| (session_briefs !=  nullptr && session_briefs->has_operation())
	|| (session_detaileds !=  nullptr && session_detaileds->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RsvpStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby";

    return path_buffer.str();

}

EntityPath RsvpStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication-briefs")
    {
        if(authentication_briefs != nullptr)
        {
            children["authentication-briefs"] = authentication_briefs;
        }
        else
        {
            authentication_briefs = std::make_shared<RsvpStandby::AuthenticationBriefs>();
            authentication_briefs->parent = this;
            children["authentication-briefs"] = authentication_briefs;
        }
        return children.at("authentication-briefs");
    }

    if(child_yang_name == "authentication-details")
    {
        if(authentication_details != nullptr)
        {
            children["authentication-details"] = authentication_details;
        }
        else
        {
            authentication_details = std::make_shared<RsvpStandby::AuthenticationDetails>();
            authentication_details->parent = this;
            children["authentication-details"] = authentication_details;
        }
        return children.at("authentication-details");
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<RsvpStandby::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    if(child_yang_name == "frr-summary")
    {
        if(frr_summary != nullptr)
        {
            children["frr-summary"] = frr_summary;
        }
        else
        {
            frr_summary = std::make_shared<RsvpStandby::FrrSummary>();
            frr_summary->parent = this;
            children["frr-summary"] = frr_summary;
        }
        return children.at("frr-summary");
    }

    if(child_yang_name == "frrs")
    {
        if(frrs != nullptr)
        {
            children["frrs"] = frrs;
        }
        else
        {
            frrs = std::make_shared<RsvpStandby::Frrs>();
            frrs->parent = this;
            children["frrs"] = frrs;
        }
        return children.at("frrs");
    }

    if(child_yang_name == "global-neighbor-briefs")
    {
        if(global_neighbor_briefs != nullptr)
        {
            children["global-neighbor-briefs"] = global_neighbor_briefs;
        }
        else
        {
            global_neighbor_briefs = std::make_shared<RsvpStandby::GlobalNeighborBriefs>();
            global_neighbor_briefs->parent = this;
            children["global-neighbor-briefs"] = global_neighbor_briefs;
        }
        return children.at("global-neighbor-briefs");
    }

    if(child_yang_name == "global-neighbor-details")
    {
        if(global_neighbor_details != nullptr)
        {
            children["global-neighbor-details"] = global_neighbor_details;
        }
        else
        {
            global_neighbor_details = std::make_shared<RsvpStandby::GlobalNeighborDetails>();
            global_neighbor_details->parent = this;
            children["global-neighbor-details"] = global_neighbor_details;
        }
        return children.at("global-neighbor-details");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<RsvpStandby::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "hello-instance-briefs")
    {
        if(hello_instance_briefs != nullptr)
        {
            children["hello-instance-briefs"] = hello_instance_briefs;
        }
        else
        {
            hello_instance_briefs = std::make_shared<RsvpStandby::HelloInstanceBriefs>();
            hello_instance_briefs->parent = this;
            children["hello-instance-briefs"] = hello_instance_briefs;
        }
        return children.at("hello-instance-briefs");
    }

    if(child_yang_name == "hello-instance-details")
    {
        if(hello_instance_details != nullptr)
        {
            children["hello-instance-details"] = hello_instance_details;
        }
        else
        {
            hello_instance_details = std::make_shared<RsvpStandby::HelloInstanceDetails>();
            hello_instance_details->parent = this;
            children["hello-instance-details"] = hello_instance_details;
        }
        return children.at("hello-instance-details");
    }

    if(child_yang_name == "hello-interface-instance-briefs")
    {
        if(hello_interface_instance_briefs != nullptr)
        {
            children["hello-interface-instance-briefs"] = hello_interface_instance_briefs;
        }
        else
        {
            hello_interface_instance_briefs = std::make_shared<RsvpStandby::HelloInterfaceInstanceBriefs>();
            hello_interface_instance_briefs->parent = this;
            children["hello-interface-instance-briefs"] = hello_interface_instance_briefs;
        }
        return children.at("hello-interface-instance-briefs");
    }

    if(child_yang_name == "hello-interface-instance-details")
    {
        if(hello_interface_instance_details != nullptr)
        {
            children["hello-interface-instance-details"] = hello_interface_instance_details;
        }
        else
        {
            hello_interface_instance_details = std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails>();
            hello_interface_instance_details->parent = this;
            children["hello-interface-instance-details"] = hello_interface_instance_details;
        }
        return children.at("hello-interface-instance-details");
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs != nullptr)
        {
            children["interface-briefs"] = interface_briefs;
        }
        else
        {
            interface_briefs = std::make_shared<RsvpStandby::InterfaceBriefs>();
            interface_briefs->parent = this;
            children["interface-briefs"] = interface_briefs;
        }
        return children.at("interface-briefs");
    }

    if(child_yang_name == "interface-detaileds")
    {
        if(interface_detaileds != nullptr)
        {
            children["interface-detaileds"] = interface_detaileds;
        }
        else
        {
            interface_detaileds = std::make_shared<RsvpStandby::InterfaceDetaileds>();
            interface_detaileds->parent = this;
            children["interface-detaileds"] = interface_detaileds;
        }
        return children.at("interface-detaileds");
    }

    if(child_yang_name == "interface-neighbor-briefs")
    {
        if(interface_neighbor_briefs != nullptr)
        {
            children["interface-neighbor-briefs"] = interface_neighbor_briefs;
        }
        else
        {
            interface_neighbor_briefs = std::make_shared<RsvpStandby::InterfaceNeighborBriefs>();
            interface_neighbor_briefs->parent = this;
            children["interface-neighbor-briefs"] = interface_neighbor_briefs;
        }
        return children.at("interface-neighbor-briefs");
    }

    if(child_yang_name == "interface-neighbor-details")
    {
        if(interface_neighbor_details != nullptr)
        {
            children["interface-neighbor-details"] = interface_neighbor_details;
        }
        else
        {
            interface_neighbor_details = std::make_shared<RsvpStandby::InterfaceNeighborDetails>();
            interface_neighbor_details->parent = this;
            children["interface-neighbor-details"] = interface_neighbor_details;
        }
        return children.at("interface-neighbor-details");
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries != nullptr)
        {
            children["interface-summaries"] = interface_summaries;
        }
        else
        {
            interface_summaries = std::make_shared<RsvpStandby::InterfaceSummaries>();
            interface_summaries->parent = this;
            children["interface-summaries"] = interface_summaries;
        }
        return children.at("interface-summaries");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<RsvpStandby::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "open-config")
    {
        if(open_config != nullptr)
        {
            children["open-config"] = open_config;
        }
        else
        {
            open_config = std::make_shared<RsvpStandby::OpenConfig>();
            open_config->parent = this;
            children["open-config"] = open_config;
        }
        return children.at("open-config");
    }

    if(child_yang_name == "psb-briefs")
    {
        if(psb_briefs != nullptr)
        {
            children["psb-briefs"] = psb_briefs;
        }
        else
        {
            psb_briefs = std::make_shared<RsvpStandby::PsbBriefs>();
            psb_briefs->parent = this;
            children["psb-briefs"] = psb_briefs;
        }
        return children.at("psb-briefs");
    }

    if(child_yang_name == "psb-detaileds")
    {
        if(psb_detaileds != nullptr)
        {
            children["psb-detaileds"] = psb_detaileds;
        }
        else
        {
            psb_detaileds = std::make_shared<RsvpStandby::PsbDetaileds>();
            psb_detaileds->parent = this;
            children["psb-detaileds"] = psb_detaileds;
        }
        return children.at("psb-detaileds");
    }

    if(child_yang_name == "request-briefs")
    {
        if(request_briefs != nullptr)
        {
            children["request-briefs"] = request_briefs;
        }
        else
        {
            request_briefs = std::make_shared<RsvpStandby::RequestBriefs>();
            request_briefs->parent = this;
            children["request-briefs"] = request_briefs;
        }
        return children.at("request-briefs");
    }

    if(child_yang_name == "request-details")
    {
        if(request_details != nullptr)
        {
            children["request-details"] = request_details;
        }
        else
        {
            request_details = std::make_shared<RsvpStandby::RequestDetails>();
            request_details->parent = this;
            children["request-details"] = request_details;
        }
        return children.at("request-details");
    }

    if(child_yang_name == "rsb-briefs")
    {
        if(rsb_briefs != nullptr)
        {
            children["rsb-briefs"] = rsb_briefs;
        }
        else
        {
            rsb_briefs = std::make_shared<RsvpStandby::RsbBriefs>();
            rsb_briefs->parent = this;
            children["rsb-briefs"] = rsb_briefs;
        }
        return children.at("rsb-briefs");
    }

    if(child_yang_name == "rsb-detaileds")
    {
        if(rsb_detaileds != nullptr)
        {
            children["rsb-detaileds"] = rsb_detaileds;
        }
        else
        {
            rsb_detaileds = std::make_shared<RsvpStandby::RsbDetaileds>();
            rsb_detaileds->parent = this;
            children["rsb-detaileds"] = rsb_detaileds;
        }
        return children.at("rsb-detaileds");
    }

    if(child_yang_name == "session-briefs")
    {
        if(session_briefs != nullptr)
        {
            children["session-briefs"] = session_briefs;
        }
        else
        {
            session_briefs = std::make_shared<RsvpStandby::SessionBriefs>();
            session_briefs->parent = this;
            children["session-briefs"] = session_briefs;
        }
        return children.at("session-briefs");
    }

    if(child_yang_name == "session-detaileds")
    {
        if(session_detaileds != nullptr)
        {
            children["session-detaileds"] = session_detaileds;
        }
        else
        {
            session_detaileds = std::make_shared<RsvpStandby::SessionDetaileds>();
            session_detaileds->parent = this;
            children["session-detaileds"] = session_detaileds;
        }
        return children.at("session-detaileds");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<RsvpStandby::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::get_children()
{
    if(children.find("authentication-briefs") == children.end())
    {
        if(authentication_briefs != nullptr)
        {
            children["authentication-briefs"] = authentication_briefs;
        }
    }

    if(children.find("authentication-details") == children.end())
    {
        if(authentication_details != nullptr)
        {
            children["authentication-details"] = authentication_details;
        }
    }

    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    if(children.find("frr-summary") == children.end())
    {
        if(frr_summary != nullptr)
        {
            children["frr-summary"] = frr_summary;
        }
    }

    if(children.find("frrs") == children.end())
    {
        if(frrs != nullptr)
        {
            children["frrs"] = frrs;
        }
    }

    if(children.find("global-neighbor-briefs") == children.end())
    {
        if(global_neighbor_briefs != nullptr)
        {
            children["global-neighbor-briefs"] = global_neighbor_briefs;
        }
    }

    if(children.find("global-neighbor-details") == children.end())
    {
        if(global_neighbor_details != nullptr)
        {
            children["global-neighbor-details"] = global_neighbor_details;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("hello-instance-briefs") == children.end())
    {
        if(hello_instance_briefs != nullptr)
        {
            children["hello-instance-briefs"] = hello_instance_briefs;
        }
    }

    if(children.find("hello-instance-details") == children.end())
    {
        if(hello_instance_details != nullptr)
        {
            children["hello-instance-details"] = hello_instance_details;
        }
    }

    if(children.find("hello-interface-instance-briefs") == children.end())
    {
        if(hello_interface_instance_briefs != nullptr)
        {
            children["hello-interface-instance-briefs"] = hello_interface_instance_briefs;
        }
    }

    if(children.find("hello-interface-instance-details") == children.end())
    {
        if(hello_interface_instance_details != nullptr)
        {
            children["hello-interface-instance-details"] = hello_interface_instance_details;
        }
    }

    if(children.find("interface-briefs") == children.end())
    {
        if(interface_briefs != nullptr)
        {
            children["interface-briefs"] = interface_briefs;
        }
    }

    if(children.find("interface-detaileds") == children.end())
    {
        if(interface_detaileds != nullptr)
        {
            children["interface-detaileds"] = interface_detaileds;
        }
    }

    if(children.find("interface-neighbor-briefs") == children.end())
    {
        if(interface_neighbor_briefs != nullptr)
        {
            children["interface-neighbor-briefs"] = interface_neighbor_briefs;
        }
    }

    if(children.find("interface-neighbor-details") == children.end())
    {
        if(interface_neighbor_details != nullptr)
        {
            children["interface-neighbor-details"] = interface_neighbor_details;
        }
    }

    if(children.find("interface-summaries") == children.end())
    {
        if(interface_summaries != nullptr)
        {
            children["interface-summaries"] = interface_summaries;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("open-config") == children.end())
    {
        if(open_config != nullptr)
        {
            children["open-config"] = open_config;
        }
    }

    if(children.find("psb-briefs") == children.end())
    {
        if(psb_briefs != nullptr)
        {
            children["psb-briefs"] = psb_briefs;
        }
    }

    if(children.find("psb-detaileds") == children.end())
    {
        if(psb_detaileds != nullptr)
        {
            children["psb-detaileds"] = psb_detaileds;
        }
    }

    if(children.find("request-briefs") == children.end())
    {
        if(request_briefs != nullptr)
        {
            children["request-briefs"] = request_briefs;
        }
    }

    if(children.find("request-details") == children.end())
    {
        if(request_details != nullptr)
        {
            children["request-details"] = request_details;
        }
    }

    if(children.find("rsb-briefs") == children.end())
    {
        if(rsb_briefs != nullptr)
        {
            children["rsb-briefs"] = rsb_briefs;
        }
    }

    if(children.find("rsb-detaileds") == children.end())
    {
        if(rsb_detaileds != nullptr)
        {
            children["rsb-detaileds"] = rsb_detaileds;
        }
    }

    if(children.find("session-briefs") == children.end())
    {
        if(session_briefs != nullptr)
        {
            children["session-briefs"] = session_briefs;
        }
    }

    if(children.find("session-detaileds") == children.end())
    {
        if(session_detaileds != nullptr)
        {
            children["session-detaileds"] = session_detaileds;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void RsvpStandby::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RsvpStandby::clone_ptr() const
{
    return std::make_shared<RsvpStandby>();
}

std::string RsvpStandby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RsvpStandby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RsvpStandby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBriefs()
{
    yang_name = "interface-neighbor-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::InterfaceNeighborBriefs::~InterfaceNeighborBriefs()
{
}

bool RsvpStandby::InterfaceNeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_brief.size(); index++)
    {
        if(interface_neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceNeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_brief.size(); index++)
    {
        if(interface_neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::InterfaceNeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceNeighborBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceNeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-neighbor-brief")
    {
        for(auto const & c : interface_neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief>();
        c->parent = this;
        interface_neighbor_brief.push_back(std::move(c));
        children[segment_path] = interface_neighbor_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceNeighborBriefs::get_children()
{
    for (auto const & c : interface_neighbor_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceNeighborBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborBrief()
    :
    neighbor_address{YType::str, "neighbor-address"},
    node_address{YType::str, "node-address"}
{
    yang_name = "interface-neighbor-brief"; yang_parent_name = "interface-neighbor-briefs";
}

RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::~InterfaceNeighborBrief()
{
}

bool RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_list_compact.size(); index++)
    {
        if(interface_neighbor_list_compact[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| node_address.is_set;
}

bool RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_list_compact.size(); index++)
    {
        if(interface_neighbor_list_compact[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(node_address.operation);
}

std::string RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-brief" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-neighbor-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.operation)) leaf_name_data.push_back(node_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-neighbor-list-compact")
    {
        for(auto const & c : interface_neighbor_list_compact)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact>();
        c->parent = this;
        interface_neighbor_list_compact.push_back(std::move(c));
        children[segment_path] = interface_neighbor_list_compact.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_children()
{
    for (auto const & c : interface_neighbor_list_compact)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "node-address")
    {
        node_address = value;
    }
}

RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::InterfaceNeighborListCompact()
    :
    interface_neighbor_address{YType::str, "interface-neighbor-address"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"}
{
    yang_name = "interface-neighbor-list-compact"; yang_parent_name = "interface-neighbor-brief";
}

RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::~InterfaceNeighborListCompact()
{
}

bool RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::has_data() const
{
    return interface_neighbor_address.is_set
	|| neighbor_interface_name.is_set;
}

bool RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_neighbor_address.operation)
	|| is_set(neighbor_interface_name.operation);
}

std::string RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-list-compact";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceNeighborListCompact' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_address.is_set || is_set(interface_neighbor_address.operation)) leaf_name_data.push_back(interface_neighbor_address.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_children()
{
    return children;
}

void RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
}

RsvpStandby::AuthenticationBriefs::AuthenticationBriefs()
{
    yang_name = "authentication-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::AuthenticationBriefs::~AuthenticationBriefs()
{
}

bool RsvpStandby::AuthenticationBriefs::has_data() const
{
    for (std::size_t index=0; index<authentication_brief.size(); index++)
    {
        if(authentication_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::AuthenticationBriefs::has_operation() const
{
    for (std::size_t index=0; index<authentication_brief.size(); index++)
    {
        if(authentication_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::AuthenticationBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication-brief")
    {
        for(auto const & c : authentication_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::AuthenticationBriefs::AuthenticationBrief>();
        c->parent = this;
        authentication_brief.push_back(std::move(c));
        children[segment_path] = authentication_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationBriefs::get_children()
{
    for (auto const & c : authentication_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::AuthenticationBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::AuthenticationBriefs::AuthenticationBrief::AuthenticationBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    mode_id{YType::enumeration, "mode-id"},
    source_address{YType::str, "source-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    direction{YType::enumeration, "direction"},
    key_id{YType::uint64, "key-id"},
    key_id_valid{YType::uint32, "key-id-valid"},
    key_source{YType::str, "key-source"},
    key_type{YType::enumeration, "key-type"},
    neighbor_address{YType::str, "neighbor-address"},
    source_address_xr{YType::str, "source-address-xr"}
{
    yang_name = "authentication-brief"; yang_parent_name = "authentication-briefs";
}

RsvpStandby::AuthenticationBriefs::AuthenticationBrief::~AuthenticationBrief()
{
}

bool RsvpStandby::AuthenticationBriefs::AuthenticationBrief::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| mode_id.is_set
	|| source_address.is_set
	|| destination_address_xr.is_set
	|| direction.is_set
	|| key_id.is_set
	|| key_id_valid.is_set
	|| key_source.is_set
	|| key_type.is_set
	|| neighbor_address.is_set
	|| source_address_xr.is_set;
}

bool RsvpStandby::AuthenticationBriefs::AuthenticationBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(mode_id.operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(direction.operation)
	|| is_set(key_id.operation)
	|| is_set(key_id_valid.operation)
	|| is_set(key_source.operation)
	|| is_set(key_type.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(source_address_xr.operation);
}

std::string RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-brief" <<"[destination-address='" <<destination_address <<"']" <<"[interface-name='" <<interface_name <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/authentication-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.operation)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.operation)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.operation)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.operation)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationBriefs::AuthenticationBrief::get_children()
{
    return children;
}

void RsvpStandby::AuthenticationBriefs::AuthenticationBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mode-id")
    {
        mode_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid = value;
    }
    if(value_path == "key-source")
    {
        key_source = value;
    }
    if(value_path == "key-type")
    {
        key_type = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
}

RsvpStandby::SessionBriefs::SessionBriefs()
{
    yang_name = "session-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::SessionBriefs::~SessionBriefs()
{
}

bool RsvpStandby::SessionBriefs::has_data() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::SessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<session_brief.size(); index++)
    {
        if(session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::SessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-brief")
    {
        for(auto const & c : session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief>();
        c->parent = this;
        session_brief.push_back(std::move(c));
        children[segment_path] = session_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::get_children()
{
    for (auto const & c : session_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::SessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::SessionBriefs::SessionBrief::SessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    detail_list_size{YType::uint32, "detail-list-size"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    ps_bs{YType::uint32, "ps-bs"},
    requests{YType::uint32, "requests"},
    rs_bs{YType::uint32, "rs-bs"},
    session_type{YType::enumeration, "session-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session>())
{
    session->parent = this;
    children["session"] = session;

    yang_name = "session-brief"; yang_parent_name = "session-briefs";
}

RsvpStandby::SessionBriefs::SessionBrief::~SessionBrief()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| detail_list_size.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| ps_bs.is_set
	|| requests.is_set
	|| rs_bs.is_set
	|| session_type.is_set
	|| vrf_name.is_set
	|| (session !=  nullptr && session->has_data());
}

bool RsvpStandby::SessionBriefs::SessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(detail_list_size.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(ps_bs.operation)
	|| is_set(requests.operation)
	|| is_set(rs_bs.operation)
	|| is_set(session_type.operation)
	|| is_set(vrf_name.operation)
	|| (session !=  nullptr && session->has_operation());
}

std::string RsvpStandby::SessionBriefs::SessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (detail_list_size.is_set || is_set(detail_list_size.operation)) leaf_name_data.push_back(detail_list_size.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (ps_bs.is_set || is_set(ps_bs.operation)) leaf_name_data.push_back(ps_bs.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (rs_bs.is_set || is_set(rs_bs.operation)) leaf_name_data.push_back(rs_bs.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "detail-list-size")
    {
        detail_list_size = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "ps-bs")
    {
        ps_bs = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
    if(value_path == "rs-bs")
    {
        rs_bs = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::SessionBriefs::SessionBrief::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "session-brief";
}

RsvpStandby::SessionBriefs::SessionBrief::Session::~Session()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-briefs/session-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetaileds()
{
    yang_name = "psb-detaileds"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::PsbDetaileds::~PsbDetaileds()
{
}

bool RsvpStandby::PsbDetaileds::has_data() const
{
    for (std::size_t index=0; index<psb_detailed.size(); index++)
    {
        if(psb_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::has_operation() const
{
    for (std::size_t index=0; index<psb_detailed.size(); index++)
    {
        if(psb_detailed[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::PsbDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-detaileds";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "psb-detailed")
    {
        for(auto const & c : psb_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed>();
        c->parent = this;
        psb_detailed.push_back(std::move(c));
        children[segment_path] = psb_detailed.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::get_children()
{
    for (auto const & c : psb_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::PsbDetaileds::PsbDetailed::PsbDetailed()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    is_in_ero_valid{YType::boolean, "is-in-ero-valid"},
    is_out_ero_valid{YType::boolean, "is-out-ero-valid"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    class_type(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::ClassType>())
	,expiry_time(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime>())
	,generic_traffic_spec(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec>())
	,header(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Header>())
	,hop(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Hop>())
	,label_info(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo>())
	,path_flags(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags>())
	,policy_flags(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags>())
	,policy_query_flags(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags>())
	,policy_source_info(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp>())
	,session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session>())
	,session_attribute(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute>())
	,template_(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_>())
	,traffic_spec(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec>())
{
    class_type->parent = this;
    children["class-type"] = class_type;

    expiry_time->parent = this;
    children["expiry-time"] = expiry_time;

    generic_traffic_spec->parent = this;
    children["generic-traffic-spec"] = generic_traffic_spec;

    header->parent = this;
    children["header"] = header;

    hop->parent = this;
    children["hop"] = hop;

    label_info->parent = this;
    children["label-info"] = label_info;

    path_flags->parent = this;
    children["path-flags"] = path_flags;

    policy_flags->parent = this;
    children["policy-flags"] = policy_flags;

    policy_query_flags->parent = this;
    children["policy-query-flags"] = policy_query_flags;

    policy_source_info->parent = this;
    children["policy-source-info"] = policy_source_info;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    session_attribute->parent = this;
    children["session-attribute"] = session_attribute;

    template_->parent = this;
    children["template"] = template_;

    traffic_spec->parent = this;
    children["traffic-spec"] = traffic_spec;

    yang_name = "psb-detailed"; yang_parent_name = "psb-detaileds";
}

RsvpStandby::PsbDetaileds::PsbDetailed::~PsbDetailed()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::has_data() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pfc.size(); index++)
    {
        if(pfc[index]->has_data())
            return true;
    }
    return backup_tunnel_name.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| is_in_ero_valid.is_set
	|| is_out_ero_valid.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (expiry_time !=  nullptr && expiry_time->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (label_info !=  nullptr && label_info->has_data())
	|| (path_flags !=  nullptr && path_flags->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (policy_source_info !=  nullptr && policy_source_info->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (session_attribute !=  nullptr && session_attribute->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::has_operation() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pfc.size(); index++)
    {
        if(pfc[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(input_interface.operation)
	|| is_set(is_in_ero_valid.operation)
	|| is_set(is_out_ero_valid.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (expiry_time !=  nullptr && expiry_time->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (label_info !=  nullptr && label_info->has_operation())
	|| (path_flags !=  nullptr && path_flags->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (policy_source_info !=  nullptr && policy_source_info->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (session_attribute !=  nullptr && session_attribute->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-detailed";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.operation)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (is_in_ero_valid.is_set || is_set(is_in_ero_valid.operation)) leaf_name_data.push_back(is_in_ero_valid.get_name_leafdata());
    if (is_out_ero_valid.is_set || is_set(is_out_ero_valid.operation)) leaf_name_data.push_back(is_out_ero_valid.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-type")
    {
        if(class_type != nullptr)
        {
            children["class-type"] = class_type;
        }
        else
        {
            class_type = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::ClassType>();
            class_type->parent = this;
            children["class-type"] = class_type;
        }
        return children.at("class-type");
    }

    if(child_yang_name == "expiry-time")
    {
        if(expiry_time != nullptr)
        {
            children["expiry-time"] = expiry_time;
        }
        else
        {
            expiry_time = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime>();
            expiry_time->parent = this;
            children["expiry-time"] = expiry_time;
        }
        return children.at("expiry-time");
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec != nullptr)
        {
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
        else
        {
            generic_traffic_spec = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec>();
            generic_traffic_spec->parent = this;
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
        return children.at("generic-traffic-spec");
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
        else
        {
            header = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Header>();
            header->parent = this;
            children["header"] = header;
        }
        return children.at("header");
    }

    if(child_yang_name == "hop")
    {
        if(hop != nullptr)
        {
            children["hop"] = hop;
        }
        else
        {
            hop = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Hop>();
            hop->parent = this;
            children["hop"] = hop;
        }
        return children.at("hop");
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::InEro>();
        c->parent = this;
        in_ero.push_back(std::move(c));
        children[segment_path] = in_ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "label-info")
    {
        if(label_info != nullptr)
        {
            children["label-info"] = label_info;
        }
        else
        {
            label_info = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo>();
            label_info->parent = this;
            children["label-info"] = label_info;
        }
        return children.at("label-info");
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::OutEro>();
        c->parent = this;
        out_ero.push_back(std::move(c));
        children[segment_path] = out_ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "path-flags")
    {
        if(path_flags != nullptr)
        {
            children["path-flags"] = path_flags;
        }
        else
        {
            path_flags = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags>();
            path_flags->parent = this;
            children["path-flags"] = path_flags;
        }
        return children.at("path-flags");
    }

    if(child_yang_name == "pfc")
    {
        for(auto const & c : pfc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Pfc>();
        c->parent = this;
        pfc.push_back(std::move(c));
        children[segment_path] = pfc.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
        else
        {
            policy_flags = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags>();
            policy_flags->parent = this;
            children["policy-flags"] = policy_flags;
        }
        return children.at("policy-flags");
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
        else
        {
            policy_query_flags = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags>();
            policy_query_flags->parent = this;
            children["policy-query-flags"] = policy_query_flags;
        }
        return children.at("policy-query-flags");
    }

    if(child_yang_name == "policy-source-info")
    {
        if(policy_source_info != nullptr)
        {
            children["policy-source-info"] = policy_source_info;
        }
        else
        {
            policy_source_info = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo>();
            policy_source_info->parent = this;
            children["policy-source-info"] = policy_source_info;
        }
        return children.at("policy-source-info");
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "session-attribute")
    {
        if(session_attribute != nullptr)
        {
            children["session-attribute"] = session_attribute;
        }
        else
        {
            session_attribute = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute>();
            session_attribute->parent = this;
            children["session-attribute"] = session_attribute;
        }
        return children.at("session-attribute");
    }

    if(child_yang_name == "template")
    {
        if(template_ != nullptr)
        {
            children["template"] = template_;
        }
        else
        {
            template_ = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_>();
            template_->parent = this;
            children["template"] = template_;
        }
        return children.at("template");
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec != nullptr)
        {
            children["traffic-spec"] = traffic_spec;
        }
        else
        {
            traffic_spec = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec>();
            traffic_spec->parent = this;
            children["traffic-spec"] = traffic_spec;
        }
        return children.at("traffic-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::get_children()
{
    if(children.find("class-type") == children.end())
    {
        if(class_type != nullptr)
        {
            children["class-type"] = class_type;
        }
    }

    if(children.find("expiry-time") == children.end())
    {
        if(expiry_time != nullptr)
        {
            children["expiry-time"] = expiry_time;
        }
    }

    if(children.find("generic-traffic-spec") == children.end())
    {
        if(generic_traffic_spec != nullptr)
        {
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
    }

    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
    }

    if(children.find("hop") == children.end())
    {
        if(hop != nullptr)
        {
            children["hop"] = hop;
        }
    }

    for (auto const & c : in_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("label-info") == children.end())
    {
        if(label_info != nullptr)
        {
            children["label-info"] = label_info;
        }
    }

    for (auto const & c : out_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("path-flags") == children.end())
    {
        if(path_flags != nullptr)
        {
            children["path-flags"] = path_flags;
        }
    }

    for (auto const & c : pfc)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("policy-flags") == children.end())
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
    }

    if(children.find("policy-query-flags") == children.end())
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
    }

    if(children.find("policy-source-info") == children.end())
    {
        if(policy_source_info != nullptr)
        {
            children["policy-source-info"] = policy_source_info;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("session-attribute") == children.end())
    {
        if(session_attribute != nullptr)
        {
            children["session-attribute"] = session_attribute;
        }
    }

    if(children.find("template") == children.end())
    {
        if(template_ != nullptr)
        {
            children["template"] = template_;
        }
    }

    if(children.find("traffic-spec") == children.end())
    {
        if(traffic_spec != nullptr)
        {
            children["traffic-spec"] = traffic_spec;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
    }
    if(value_path == "is-in-ero-valid")
    {
        is_in_ero_valid = value;
    }
    if(value_path == "is-out-ero-valid")
    {
        is_out_ero_valid = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::~Session()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::Template_()
    :
    rsvp_filter(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter>())
{
    rsvp_filter->parent = this;
    children["rsvp-filter"] = rsvp_filter;

    yang_name = "template"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::~Template_()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::has_operation() const
{
    return is_set(operation)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
        else
        {
            rsvp_filter = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter>();
            rsvp_filter->parent = this;
            children["rsvp-filter"] = rsvp_filter;
        }
        return children.at("rsvp-filter");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Template_::get_children()
{
    if(children.find("rsvp-filter") == children.end())
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Template_::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    children["p2mp-ipv4-session"] = p2mp_ipv4_session;

    udp_ipv4_session->parent = this;
    children["udp-ipv4-session"] = udp_ipv4_session;

    yang_name = "rsvp-filter"; yang_parent_name = "template";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        else
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session>();
            p2mp_ipv4_session->parent = this;
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        return children.at("p2mp-ipv4-session");
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        else
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session>();
            udp_ipv4_session->parent = this;
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        return children.at("udp-ipv4-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::get_children()
{
    if(children.find("p2mp-ipv4-session") == children.end())
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
    }

    if(children.find("udp-ipv4-session") == children.end())
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/template/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{
    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/template/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessionAttribute()
    :
    reservation_priority{YType::uint8, "reservation-priority"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    sess_attribute_flags(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags>())
{
    sess_attribute_flags->parent = this;
    children["sess-attribute-flags"] = sess_attribute_flags;

    yang_name = "session-attribute"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::~SessionAttribute()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::has_data() const
{
    return reservation_priority.is_set
	|| setup_priority.is_set
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(reservation_priority.operation)
	|| is_set(setup_priority.operation)
	|| (sess_attribute_flags !=  nullptr && sess_attribute_flags->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-attribute";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_priority.is_set || is_set(reservation_priority.operation)) leaf_name_data.push_back(reservation_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sess-attribute-flags")
    {
        if(sess_attribute_flags != nullptr)
        {
            children["sess-attribute-flags"] = sess_attribute_flags;
        }
        else
        {
            sess_attribute_flags = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags>();
            sess_attribute_flags->parent = this;
            children["sess-attribute-flags"] = sess_attribute_flags;
        }
        return children.at("sess-attribute-flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::get_children()
{
    if(children.find("sess-attribute-flags") == children.end())
    {
        if(sess_attribute_flags != nullptr)
        {
            children["sess-attribute-flags"] = sess_attribute_flags;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reservation-priority")
    {
        reservation_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::SessAttributeFlags()
    :
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_local_protect{YType::boolean, "is-local-protect"},
    is_node_protect{YType::boolean, "is-node-protect"},
    is_record_labels{YType::boolean, "is-record-labels"},
    is_shared_explicit_requested{YType::boolean, "is-shared-explicit-requested"}
{
    yang_name = "sess-attribute-flags"; yang_parent_name = "session-attribute";
}

RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::~SessAttributeFlags()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_data() const
{
    return is_bandwidth_protect.is_set
	|| is_local_protect.is_set
	|| is_node_protect.is_set
	|| is_record_labels.is_set
	|| is_shared_explicit_requested.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bandwidth_protect.operation)
	|| is_set(is_local_protect.operation)
	|| is_set(is_node_protect.operation)
	|| is_set(is_record_labels.operation)
	|| is_set(is_shared_explicit_requested.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sess-attribute-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/session-attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.operation)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_local_protect.is_set || is_set(is_local_protect.operation)) leaf_name_data.push_back(is_local_protect.get_name_leafdata());
    if (is_node_protect.is_set || is_set(is_node_protect.operation)) leaf_name_data.push_back(is_node_protect.get_name_leafdata());
    if (is_record_labels.is_set || is_set(is_record_labels.operation)) leaf_name_data.push_back(is_record_labels.get_name_leafdata());
    if (is_shared_explicit_requested.is_set || is_set(is_shared_explicit_requested.operation)) leaf_name_data.push_back(is_shared_explicit_requested.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
    }
    if(value_path == "is-local-protect")
    {
        is_local_protect = value;
    }
    if(value_path == "is-node-protect")
    {
        is_node_protect = value;
    }
    if(value_path == "is-record-labels")
    {
        is_record_labels = value;
    }
    if(value_path == "is-shared-explicit-requested")
    {
        is_shared_explicit_requested = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{
    yang_name = "traffic-spec"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::~TrafficSpec()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_average_rate.operation)
	|| is_set(traffic_max_burst.operation)
	|| is_set(traffic_max_unit.operation)
	|| is_set(traffic_min_unit.operation)
	|| is_set(traffic_peak_rate.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.operation)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.operation)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.operation)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.operation)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.operation)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    children["g709otn-tspec"] = g709otn_tspec;

    intsrv_tspec->parent = this;
    children["intsrv-tspec"] = intsrv_tspec;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(tspec_type.operation)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.operation)) leaf_name_data.push_back(tspec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec != nullptr)
        {
            children["g709otn-tspec"] = g709otn_tspec;
        }
        else
        {
            g709otn_tspec = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec>();
            g709otn_tspec->parent = this;
            children["g709otn-tspec"] = g709otn_tspec;
        }
        return children.at("g709otn-tspec");
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec != nullptr)
        {
            children["intsrv-tspec"] = intsrv_tspec;
        }
        else
        {
            intsrv_tspec = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec>();
            intsrv_tspec->parent = this;
            children["intsrv-tspec"] = intsrv_tspec;
        }
        return children.at("intsrv-tspec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::get_children()
{
    if(children.find("g709otn-tspec") == children.end())
    {
        if(g709otn_tspec != nullptr)
        {
            children["g709otn-tspec"] = g709otn_tspec;
        }
    }

    if(children.find("intsrv-tspec") == children.end())
    {
        if(intsrv_tspec != nullptr)
        {
            children["intsrv-tspec"] = intsrv_tspec;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{
    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec";
}

RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_bit_rate.operation)
	|| is_set(traffic_multiplier.operation)
	|| is_set(traffic_nvc.operation)
	|| is_set(traffic_signal_type.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/generic-traffic-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.operation)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.operation)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.operation)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.operation)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{
    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec";
}

RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_average_rate.operation)
	|| is_set(traffic_max_burst.operation)
	|| is_set(traffic_max_unit.operation)
	|| is_set(traffic_min_unit.operation)
	|| is_set(traffic_peak_rate.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/generic-traffic-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.operation)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.operation)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.operation)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.operation)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.operation)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::PathFlags()
    :
    is_bidirectional{YType::boolean, "is-bidirectional"},
    is_local_repair{YType::boolean, "is-local-repair"},
    is_local_sender{YType::boolean, "is-local-sender"},
    is_lockout{YType::boolean, "is-lockout"},
    is_message_id_valid{YType::boolean, "is-message-id-valid"},
    is_non_rsvp_hop_upstream{YType::boolean, "is-non-rsvp-hop-upstream"}
{
    yang_name = "path-flags"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::~PathFlags()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::has_data() const
{
    return is_bidirectional.is_set
	|| is_local_repair.is_set
	|| is_local_sender.is_set
	|| is_lockout.is_set
	|| is_message_id_valid.is_set
	|| is_non_rsvp_hop_upstream.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bidirectional.operation)
	|| is_set(is_local_repair.operation)
	|| is_set(is_local_sender.operation)
	|| is_set(is_lockout.operation)
	|| is_set(is_message_id_valid.operation)
	|| is_set(is_non_rsvp_hop_upstream.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bidirectional.is_set || is_set(is_bidirectional.operation)) leaf_name_data.push_back(is_bidirectional.get_name_leafdata());
    if (is_local_repair.is_set || is_set(is_local_repair.operation)) leaf_name_data.push_back(is_local_repair.get_name_leafdata());
    if (is_local_sender.is_set || is_set(is_local_sender.operation)) leaf_name_data.push_back(is_local_sender.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.operation)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (is_message_id_valid.is_set || is_set(is_message_id_valid.operation)) leaf_name_data.push_back(is_message_id_valid.get_name_leafdata());
    if (is_non_rsvp_hop_upstream.is_set || is_set(is_non_rsvp_hop_upstream.operation)) leaf_name_data.push_back(is_non_rsvp_hop_upstream.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bidirectional")
    {
        is_bidirectional = value;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair = value;
    }
    if(value_path == "is-local-sender")
    {
        is_local_sender = value;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid = value;
    }
    if(value_path == "is-non-rsvp-hop-upstream")
    {
        is_non_rsvp_hop_upstream = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{
    yang_name = "hop"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Hop::~Hop()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Hop::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_logical_interface_name.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Hop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.operation)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Hop::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Hop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::PolicySourceInfo()
    :
    is_cable{YType::boolean, "is-cable"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_local{YType::boolean, "is-local"},
    is_te_link{YType::boolean, "is-te-link"}
{
    yang_name = "policy-source-info"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::~PolicySourceInfo()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_data() const
{
    return is_cable.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_local.is_set
	|| is_te_link.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_cable.operation)
	|| is_set(is_cops.operation)
	|| is_set(is_default.operation)
	|| is_set(is_local.operation)
	|| is_set(is_te_link.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-source-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cable.is_set || is_set(is_cable.operation)) leaf_name_data.push_back(is_cable.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.operation)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_te_link.is_set || is_set(is_te_link.operation)) leaf_name_data.push_back(is_te_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-cable")
    {
        is_cable = value;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-te-link")
    {
        is_te_link = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Header::Header()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{
    yang_name = "header"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Header::~Header()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Header::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_source_address.operation)
	|| is_set(ip_tos.operation)
	|| is_set(ip_ttl.operation)
	|| is_set(rsvp_header_flags.operation)
	|| is_set(rsvp_message_type.operation)
	|| is_set(rsvp_ttl.operation)
	|| is_set(rsvp_version.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.operation)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.operation)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.operation)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.operation)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.operation)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.operation)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Header::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "expiry-time"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::~ExpiryTime()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
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

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime::set_value(const std::string & value_path, std::string value)
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

RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{
    yang_name = "policy-flags"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::~PolicyFlags()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_accepted.operation)
	|| is_set(is_forwarding.operation)
	|| is_set(is_installed.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.operation)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.operation)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.operation)) leaf_name_data.push_back(is_installed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{
    yang_name = "policy-query-flags"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bypass.operation)
	|| is_set(is_needed.operation)
	|| is_set(is_report_required.operation)
	|| is_set(is_resync.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.operation)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.operation)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.operation)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.operation)) leaf_name_data.push_back(is_resync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::LabelInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    local_downstream_label{YType::uint32, "local-downstream-label"},
    local_upstream_label{YType::uint32, "local-upstream-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    merge_point_label{YType::uint32, "merge-point-label"},
    outgoing_downstream_label{YType::uint32, "outgoing-downstream-label"},
    outgoing_upstream_label{YType::uint32, "outgoing-upstream-label"},
    recovery_label{YType::uint32, "recovery-label"}
    	,
    generic_local_downstream_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel>())
	,generic_local_upstream_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel>())
	,generic_merge_point_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel>())
	,generic_outgoing_downstream_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>())
	,generic_outgoing_upstream_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>())
	,generic_recovery_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel>())
{
    generic_local_downstream_label->parent = this;
    children["generic-local-downstream-label"] = generic_local_downstream_label;

    generic_local_upstream_label->parent = this;
    children["generic-local-upstream-label"] = generic_local_upstream_label;

    generic_merge_point_label->parent = this;
    children["generic-merge-point-label"] = generic_merge_point_label;

    generic_outgoing_downstream_label->parent = this;
    children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;

    generic_outgoing_upstream_label->parent = this;
    children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;

    generic_recovery_label->parent = this;
    children["generic-recovery-label"] = generic_recovery_label;

    yang_name = "label-info"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::~LabelInfo()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::has_data() const
{
    return is_valid.is_set
	|| local_downstream_label.is_set
	|| local_upstream_label.is_set
	|| lsp_wrap_label.is_set
	|| merge_point_label.is_set
	|| outgoing_downstream_label.is_set
	|| outgoing_upstream_label.is_set
	|| recovery_label.is_set
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_data())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_data())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_data())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_data())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_data())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| is_set(local_downstream_label.operation)
	|| is_set(local_upstream_label.operation)
	|| is_set(lsp_wrap_label.operation)
	|| is_set(merge_point_label.operation)
	|| is_set(outgoing_downstream_label.operation)
	|| is_set(outgoing_upstream_label.operation)
	|| is_set(recovery_label.operation)
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_operation())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_operation())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_operation())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_operation())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_operation())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (local_downstream_label.is_set || is_set(local_downstream_label.operation)) leaf_name_data.push_back(local_downstream_label.get_name_leafdata());
    if (local_upstream_label.is_set || is_set(local_upstream_label.operation)) leaf_name_data.push_back(local_upstream_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.operation)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.operation)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (outgoing_downstream_label.is_set || is_set(outgoing_downstream_label.operation)) leaf_name_data.push_back(outgoing_downstream_label.get_name_leafdata());
    if (outgoing_upstream_label.is_set || is_set(outgoing_upstream_label.operation)) leaf_name_data.push_back(outgoing_upstream_label.get_name_leafdata());
    if (recovery_label.is_set || is_set(recovery_label.operation)) leaf_name_data.push_back(recovery_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-local-downstream-label")
    {
        if(generic_local_downstream_label != nullptr)
        {
            children["generic-local-downstream-label"] = generic_local_downstream_label;
        }
        else
        {
            generic_local_downstream_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel>();
            generic_local_downstream_label->parent = this;
            children["generic-local-downstream-label"] = generic_local_downstream_label;
        }
        return children.at("generic-local-downstream-label");
    }

    if(child_yang_name == "generic-local-upstream-label")
    {
        if(generic_local_upstream_label != nullptr)
        {
            children["generic-local-upstream-label"] = generic_local_upstream_label;
        }
        else
        {
            generic_local_upstream_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel>();
            generic_local_upstream_label->parent = this;
            children["generic-local-upstream-label"] = generic_local_upstream_label;
        }
        return children.at("generic-local-upstream-label");
    }

    if(child_yang_name == "generic-merge-point-label")
    {
        if(generic_merge_point_label != nullptr)
        {
            children["generic-merge-point-label"] = generic_merge_point_label;
        }
        else
        {
            generic_merge_point_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel>();
            generic_merge_point_label->parent = this;
            children["generic-merge-point-label"] = generic_merge_point_label;
        }
        return children.at("generic-merge-point-label");
    }

    if(child_yang_name == "generic-outgoing-downstream-label")
    {
        if(generic_outgoing_downstream_label != nullptr)
        {
            children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
        }
        else
        {
            generic_outgoing_downstream_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>();
            generic_outgoing_downstream_label->parent = this;
            children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
        }
        return children.at("generic-outgoing-downstream-label");
    }

    if(child_yang_name == "generic-outgoing-upstream-label")
    {
        if(generic_outgoing_upstream_label != nullptr)
        {
            children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
        }
        else
        {
            generic_outgoing_upstream_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>();
            generic_outgoing_upstream_label->parent = this;
            children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
        }
        return children.at("generic-outgoing-upstream-label");
    }

    if(child_yang_name == "generic-recovery-label")
    {
        if(generic_recovery_label != nullptr)
        {
            children["generic-recovery-label"] = generic_recovery_label;
        }
        else
        {
            generic_recovery_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel>();
            generic_recovery_label->parent = this;
            children["generic-recovery-label"] = generic_recovery_label;
        }
        return children.at("generic-recovery-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::get_children()
{
    if(children.find("generic-local-downstream-label") == children.end())
    {
        if(generic_local_downstream_label != nullptr)
        {
            children["generic-local-downstream-label"] = generic_local_downstream_label;
        }
    }

    if(children.find("generic-local-upstream-label") == children.end())
    {
        if(generic_local_upstream_label != nullptr)
        {
            children["generic-local-upstream-label"] = generic_local_upstream_label;
        }
    }

    if(children.find("generic-merge-point-label") == children.end())
    {
        if(generic_merge_point_label != nullptr)
        {
            children["generic-merge-point-label"] = generic_merge_point_label;
        }
    }

    if(children.find("generic-outgoing-downstream-label") == children.end())
    {
        if(generic_outgoing_downstream_label != nullptr)
        {
            children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
        }
    }

    if(children.find("generic-outgoing-upstream-label") == children.end())
    {
        if(generic_outgoing_upstream_label != nullptr)
        {
            children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
        }
    }

    if(children.find("generic-recovery-label") == children.end())
    {
        if(generic_recovery_label != nullptr)
        {
            children["generic-recovery-label"] = generic_recovery_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label = value;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label = value;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label = value;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label = value;
    }
    if(value_path == "recovery-label")
    {
        recovery_label = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GenericLocalDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-local-downstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::~GenericLocalDownstreamLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-downstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-local-downstream-label";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/generic-local-downstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GenericOutgoingDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-outgoing-downstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::~GenericOutgoingDownstreamLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-downstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-downstream-label";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/generic-outgoing-downstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GenericMergePointLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-merge-point-label"; yang_parent_name = "label-info";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::~GenericMergePointLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-merge-point-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-merge-point-label";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/generic-merge-point-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GenericOutgoingUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-outgoing-upstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::~GenericOutgoingUpstreamLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-upstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-upstream-label";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/generic-outgoing-upstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GenericLocalUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-local-upstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::~GenericLocalUpstreamLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-upstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-local-upstream-label";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/generic-local-upstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GenericRecoveryLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-recovery-label"; yang_parent_name = "label-info";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::~GenericRecoveryLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-recovery-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-recovery-label";
}

RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/label-info/generic-recovery-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::ClassType()
    :
    class_type{YType::uint8, "class-type"},
    is_class_type_info_valid{YType::boolean, "is-class-type-info-valid"}
{
    yang_name = "class-type"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::~ClassType()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::has_data() const
{
    return class_type.is_set
	|| is_class_type_info_valid.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::has_operation() const
{
    return is_set(operation)
	|| is_set(class_type.operation)
	|| is_set(is_class_type_info_valid.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (is_class_type_info_valid.is_set || is_set(is_class_type_info_valid.operation)) leaf_name_data.push_back(is_class_type_info_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::ClassType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "is-class-type-info-valid")
    {
        is_class_type_info_valid = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::Pfc()
    :
    output_interface{YType::str, "output-interface"}
    	,
    policy_flags(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags>())
	,policy_query_flags(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags>())
{
    policy_flags->parent = this;
    children["policy-flags"] = policy_flags;

    policy_query_flags->parent = this;
    children["policy-query-flags"] = policy_query_flags;

    yang_name = "pfc"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::~Pfc()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::has_data() const
{
    return output_interface.is_set
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::has_operation() const
{
    return is_set(operation)
	|| is_set(output_interface.operation)
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output_interface.is_set || is_set(output_interface.operation)) leaf_name_data.push_back(output_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
        else
        {
            policy_flags = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags>();
            policy_flags->parent = this;
            children["policy-flags"] = policy_flags;
        }
        return children.at("policy-flags");
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
        else
        {
            policy_query_flags = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags>();
            policy_query_flags->parent = this;
            children["policy-query-flags"] = policy_query_flags;
        }
        return children.at("policy-query-flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::get_children()
{
    if(children.find("policy-flags") == children.end())
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
    }

    if(children.find("policy-query-flags") == children.end())
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output-interface")
    {
        output_interface = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{
    yang_name = "policy-flags"; yang_parent_name = "pfc";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::~PolicyFlags()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_accepted.operation)
	|| is_set(is_forwarding.operation)
	|| is_set(is_installed.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/pfc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.operation)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.operation)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.operation)) leaf_name_data.push_back(is_installed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{
    yang_name = "policy-query-flags"; yang_parent_name = "pfc";
}

RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bypass.operation)
	|| is_set(is_needed.operation)
	|| is_set(is_report_required.operation)
	|| is_set(is_resync.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/pfc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.operation)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.operation)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.operation)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.operation)) leaf_name_data.push_back(is_resync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "in-ero"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::InEro::~InEro()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::InEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::InEro::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::InEro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.operation)) leaf_name_data.push_back(ero_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::InEro::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::InEro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero";
}

RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/in-ero/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.operation)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero";
}

RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/in-ero/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.operation)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.operation)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    children["ipv4ero-sub-object"] = ipv4ero_sub_object;

    unnumbered_ero_sub_object->parent = this;
    children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;

    yang_name = "out-ero"; yang_parent_name = "psb-detailed";
}

RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::~OutEro()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_type.operation)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.operation)) leaf_name_data.push_back(ero_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        else
        {
            ipv4ero_sub_object = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject>();
            ipv4ero_sub_object->parent = this;
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
        return children.at("ipv4ero-sub-object");
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        else
        {
            unnumbered_ero_sub_object = std::make_shared<RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject>();
            unnumbered_ero_sub_object->parent = this;
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
        return children.at("unnumbered-ero-sub-object");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::get_children()
{
    if(children.find("ipv4ero-sub-object") == children.end())
    {
        if(ipv4ero_sub_object != nullptr)
        {
            children["ipv4ero-sub-object"] = ipv4ero_sub_object;
        }
    }

    if(children.find("unnumbered-ero-sub-object") == children.end())
    {
        if(unnumbered_ero_sub_object != nullptr)
        {
            children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
        }
    }

    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    ero_address{YType::str, "ero-address"},
    is_strict_route{YType::boolean, "is-strict-route"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero";
}

RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_data() const
{
    return ero_address.is_set
	|| is_strict_route.is_set
	|| prefix_length.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_address.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(prefix_length.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/out-ero/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_address.is_set || is_set(ero_address.operation)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-address")
    {
        ero_address = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    is_strict_route{YType::boolean, "is-strict-route"},
    status{YType::enumeration, "status"}
{
    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero";
}

RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_data() const
{
    return ero_interface_id.is_set
	|| ero_router_id.is_set
	|| is_strict_route.is_set
	|| status.is_set;
}

bool RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ero_interface_id.operation)
	|| is_set(ero_router_id.operation)
	|| is_set(is_strict_route.operation)
	|| is_set(status.operation);
}

std::string RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";

    return path_buffer.str();

}

EntityPath RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/psb-detaileds/psb-detailed/out-ero/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_interface_id.is_set || is_set(ero_interface_id.operation)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.operation)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (is_strict_route.is_set || is_set(is_strict_route.operation)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::get_children()
{
    return children;
}

void RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
    }
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

RsvpStandby::FrrSummary::FrrSummary()
    :
    path_states(std::make_shared<RsvpStandby::FrrSummary::PathStates>())
	,reservation_states(std::make_shared<RsvpStandby::FrrSummary::ReservationStates>())
{
    path_states->parent = this;
    children["path-states"] = path_states;

    reservation_states->parent = this;
    children["reservation-states"] = reservation_states;

    yang_name = "frr-summary"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::FrrSummary::~FrrSummary()
{
}

bool RsvpStandby::FrrSummary::has_data() const
{
    return (path_states !=  nullptr && path_states->has_data())
	|| (reservation_states !=  nullptr && reservation_states->has_data());
}

bool RsvpStandby::FrrSummary::has_operation() const
{
    return is_set(operation)
	|| (path_states !=  nullptr && path_states->has_operation())
	|| (reservation_states !=  nullptr && reservation_states->has_operation());
}

std::string RsvpStandby::FrrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-summary";

    return path_buffer.str();

}

EntityPath RsvpStandby::FrrSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::FrrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-states")
    {
        if(path_states != nullptr)
        {
            children["path-states"] = path_states;
        }
        else
        {
            path_states = std::make_shared<RsvpStandby::FrrSummary::PathStates>();
            path_states->parent = this;
            children["path-states"] = path_states;
        }
        return children.at("path-states");
    }

    if(child_yang_name == "reservation-states")
    {
        if(reservation_states != nullptr)
        {
            children["reservation-states"] = reservation_states;
        }
        else
        {
            reservation_states = std::make_shared<RsvpStandby::FrrSummary::ReservationStates>();
            reservation_states->parent = this;
            children["reservation-states"] = reservation_states;
        }
        return children.at("reservation-states");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::FrrSummary::get_children()
{
    if(children.find("path-states") == children.end())
    {
        if(path_states != nullptr)
        {
            children["path-states"] = path_states;
        }
    }

    if(children.find("reservation-states") == children.end())
    {
        if(reservation_states != nullptr)
        {
            children["reservation-states"] = reservation_states;
        }
    }

    return children;
}

void RsvpStandby::FrrSummary::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::FrrSummary::PathStates::PathStates()
    :
    active_instances{YType::uint32, "active-instances"},
    active_wait_instances{YType::uint32, "active-wait-instances"},
    ready_instances{YType::uint32, "ready-instances"},
    total{YType::uint32, "total"}
{
    yang_name = "path-states"; yang_parent_name = "frr-summary";
}

RsvpStandby::FrrSummary::PathStates::~PathStates()
{
}

bool RsvpStandby::FrrSummary::PathStates::has_data() const
{
    return active_instances.is_set
	|| active_wait_instances.is_set
	|| ready_instances.is_set
	|| total.is_set;
}

bool RsvpStandby::FrrSummary::PathStates::has_operation() const
{
    return is_set(operation)
	|| is_set(active_instances.operation)
	|| is_set(active_wait_instances.operation)
	|| is_set(ready_instances.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::FrrSummary::PathStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-states";

    return path_buffer.str();

}

EntityPath RsvpStandby::FrrSummary::PathStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frr-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_instances.is_set || is_set(active_instances.operation)) leaf_name_data.push_back(active_instances.get_name_leafdata());
    if (active_wait_instances.is_set || is_set(active_wait_instances.operation)) leaf_name_data.push_back(active_wait_instances.get_name_leafdata());
    if (ready_instances.is_set || is_set(ready_instances.operation)) leaf_name_data.push_back(ready_instances.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::FrrSummary::PathStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::FrrSummary::PathStates::get_children()
{
    return children;
}

void RsvpStandby::FrrSummary::PathStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-instances")
    {
        active_instances = value;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances = value;
    }
    if(value_path == "ready-instances")
    {
        ready_instances = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::FrrSummary::ReservationStates::ReservationStates()
    :
    active_instances{YType::uint32, "active-instances"},
    active_wait_instances{YType::uint32, "active-wait-instances"},
    ready_instances{YType::uint32, "ready-instances"},
    total{YType::uint32, "total"}
{
    yang_name = "reservation-states"; yang_parent_name = "frr-summary";
}

RsvpStandby::FrrSummary::ReservationStates::~ReservationStates()
{
}

bool RsvpStandby::FrrSummary::ReservationStates::has_data() const
{
    return active_instances.is_set
	|| active_wait_instances.is_set
	|| ready_instances.is_set
	|| total.is_set;
}

bool RsvpStandby::FrrSummary::ReservationStates::has_operation() const
{
    return is_set(operation)
	|| is_set(active_instances.operation)
	|| is_set(active_wait_instances.operation)
	|| is_set(ready_instances.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::FrrSummary::ReservationStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-states";

    return path_buffer.str();

}

EntityPath RsvpStandby::FrrSummary::ReservationStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frr-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_instances.is_set || is_set(active_instances.operation)) leaf_name_data.push_back(active_instances.get_name_leafdata());
    if (active_wait_instances.is_set || is_set(active_wait_instances.operation)) leaf_name_data.push_back(active_wait_instances.get_name_leafdata());
    if (ready_instances.is_set || is_set(ready_instances.operation)) leaf_name_data.push_back(ready_instances.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::FrrSummary::ReservationStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::FrrSummary::ReservationStates::get_children()
{
    return children;
}

void RsvpStandby::FrrSummary::ReservationStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-instances")
    {
        active_instances = value;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances = value;
    }
    if(value_path == "ready-instances")
    {
        ready_instances = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetaileds()
{
    yang_name = "rsb-detaileds"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::RsbDetaileds::~RsbDetaileds()
{
}

bool RsvpStandby::RsbDetaileds::has_data() const
{
    for (std::size_t index=0; index<rsb_detailed.size(); index++)
    {
        if(rsb_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::has_operation() const
{
    for (std::size_t index=0; index<rsb_detailed.size(); index++)
    {
        if(rsb_detailed[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::RsbDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-detaileds";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsb-detailed")
    {
        for(auto const & c : rsb_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed>();
        c->parent = this;
        rsb_detailed.push_back(std::move(c));
        children[segment_path] = rsb_detailed.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::get_children()
{
    for (auto const & c : rsb_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RsbDetaileds::RsbDetailed::RsbDetailed()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_adjusted_interface{YType::str, "input-adjusted-interface"},
    input_physical_interface{YType::str, "input-physical-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    expiry_time(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime>())
	,filter(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter>())
	,flow_spec(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec>())
	,generic_flow_spec(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec>())
	,header(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Header>())
	,hop(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Hop>())
	,label_info(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo>())
	,policy_flags(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags>())
	,policy_query_flags(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags>())
	,policy_sources(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources>())
	,rsb_flags(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp>())
	,session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session>())
	,style(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Style>())
{
    expiry_time->parent = this;
    children["expiry-time"] = expiry_time;

    filter->parent = this;
    children["filter"] = filter;

    flow_spec->parent = this;
    children["flow-spec"] = flow_spec;

    generic_flow_spec->parent = this;
    children["generic-flow-spec"] = generic_flow_spec;

    header->parent = this;
    children["header"] = header;

    hop->parent = this;
    children["hop"] = hop;

    label_info->parent = this;
    children["label-info"] = label_info;

    policy_flags->parent = this;
    children["policy-flags"] = policy_flags;

    policy_query_flags->parent = this;
    children["policy-query-flags"] = policy_query_flags;

    policy_sources->parent = this;
    children["policy-sources"] = policy_sources;

    rsb_flags->parent = this;
    children["rsb-flags"] = rsb_flags;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    style->parent = this;
    children["style"] = style;

    yang_name = "rsb-detailed"; yang_parent_name = "rsb-detaileds";
}

RsvpStandby::RsbDetaileds::RsbDetailed::~RsbDetailed()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_adjusted_interface.is_set
	|| input_physical_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (label_info !=  nullptr && label_info->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (rsb_flags !=  nullptr && rsb_flags->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(input_adjusted_interface.operation)
	|| is_set(input_physical_interface.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (expiry_time !=  nullptr && expiry_time->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (label_info !=  nullptr && label_info->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (rsb_flags !=  nullptr && rsb_flags->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-detailed";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_adjusted_interface.is_set || is_set(input_adjusted_interface.operation)) leaf_name_data.push_back(input_adjusted_interface.get_name_leafdata());
    if (input_physical_interface.is_set || is_set(input_physical_interface.operation)) leaf_name_data.push_back(input_physical_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "expiry-time")
    {
        if(expiry_time != nullptr)
        {
            children["expiry-time"] = expiry_time;
        }
        else
        {
            expiry_time = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime>();
            expiry_time->parent = this;
            children["expiry-time"] = expiry_time;
        }
        return children.at("expiry-time");
    }

    if(child_yang_name == "filter")
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
        else
        {
            filter = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter>();
            filter->parent = this;
            children["filter"] = filter;
        }
        return children.at("filter");
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
        else
        {
            flow_spec = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec>();
            flow_spec->parent = this;
            children["flow-spec"] = flow_spec;
        }
        return children.at("flow-spec");
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
        else
        {
            generic_flow_spec = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec>();
            generic_flow_spec->parent = this;
            children["generic-flow-spec"] = generic_flow_spec;
        }
        return children.at("generic-flow-spec");
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
        else
        {
            header = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Header>();
            header->parent = this;
            children["header"] = header;
        }
        return children.at("header");
    }

    if(child_yang_name == "hop")
    {
        if(hop != nullptr)
        {
            children["hop"] = hop;
        }
        else
        {
            hop = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Hop>();
            hop->parent = this;
            children["hop"] = hop;
        }
        return children.at("hop");
    }

    if(child_yang_name == "label-info")
    {
        if(label_info != nullptr)
        {
            children["label-info"] = label_info;
        }
        else
        {
            label_info = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo>();
            label_info->parent = this;
            children["label-info"] = label_info;
        }
        return children.at("label-info");
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
        else
        {
            policy_flags = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags>();
            policy_flags->parent = this;
            children["policy-flags"] = policy_flags;
        }
        return children.at("policy-flags");
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
        else
        {
            policy_query_flags = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags>();
            policy_query_flags->parent = this;
            children["policy-query-flags"] = policy_query_flags;
        }
        return children.at("policy-query-flags");
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources != nullptr)
        {
            children["policy-sources"] = policy_sources;
        }
        else
        {
            policy_sources = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources>();
            policy_sources->parent = this;
            children["policy-sources"] = policy_sources;
        }
        return children.at("policy-sources");
    }

    if(child_yang_name == "rsb-flags")
    {
        if(rsb_flags != nullptr)
        {
            children["rsb-flags"] = rsb_flags;
        }
        else
        {
            rsb_flags = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags>();
            rsb_flags->parent = this;
            children["rsb-flags"] = rsb_flags;
        }
        return children.at("rsb-flags");
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "style")
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
        else
        {
            style = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Style>();
            style->parent = this;
            children["style"] = style;
        }
        return children.at("style");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::get_children()
{
    if(children.find("expiry-time") == children.end())
    {
        if(expiry_time != nullptr)
        {
            children["expiry-time"] = expiry_time;
        }
    }

    if(children.find("filter") == children.end())
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
    }

    if(children.find("flow-spec") == children.end())
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
    }

    if(children.find("generic-flow-spec") == children.end())
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
    }

    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
    }

    if(children.find("hop") == children.end())
    {
        if(hop != nullptr)
        {
            children["hop"] = hop;
        }
    }

    if(children.find("label-info") == children.end())
    {
        if(label_info != nullptr)
        {
            children["label-info"] = label_info;
        }
    }

    if(children.find("policy-flags") == children.end())
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
    }

    if(children.find("policy-query-flags") == children.end())
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
    }

    if(children.find("policy-sources") == children.end())
    {
        if(policy_sources != nullptr)
        {
            children["policy-sources"] = policy_sources;
        }
    }

    if(children.find("rsb-flags") == children.end())
    {
        if(rsb_flags != nullptr)
        {
            children["rsb-flags"] = rsb_flags;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("style") == children.end())
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "input-adjusted-interface")
    {
        input_adjusted_interface = value;
    }
    if(value_path == "input-physical-interface")
    {
        input_physical_interface = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{
    yang_name = "flow-spec"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_average_rate.operation)
	|| is_set(flow_max_burst.operation)
	|| is_set(flow_max_unit.operation)
	|| is_set(flow_min_unit.operation)
	|| is_set(flow_peak_rate.operation)
	|| is_set(flow_qos.operation)
	|| is_set(flow_requested_rate.operation)
	|| is_set(flow_slack.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.operation)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.operation)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.operation)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.operation)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.operation)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.operation)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.operation)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.operation)) leaf_name_data.push_back(flow_slack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;
    children["g709otn-flow-spec"] = g709otn_flow_spec;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_spec_type.operation)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.operation)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        else
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec>();
            g709otn_flow_spec->parent = this;
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        return children.at("g709otn-flow-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::get_children()
{
    if(children.find("g709otn-flow-spec") == children.end())
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{
    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec";
}

RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_bit_rate.operation)
	|| is_set(flow_multiplier.operation)
	|| is_set(flow_nvc.operation)
	|| is_set(flow_signal_type.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/generic-flow-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.operation)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.operation)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.operation)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.operation)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::~Session()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{
    yang_name = "style"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Style::~Style()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Style::has_data() const
{
    return reservation_type.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Style::has_operation() const
{
    return is_set(operation)
	|| is_set(reservation_type.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Style::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.operation)) leaf_name_data.push_back(reservation_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Style::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Style::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;
    children["rsvp-filter"] = rsvp_filter;

    yang_name = "filter"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::~Filter()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::has_operation() const
{
    return is_set(operation)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
        else
        {
            rsvp_filter = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter>();
            rsvp_filter->parent = this;
            children["rsvp-filter"] = rsvp_filter;
        }
        return children.at("rsvp-filter");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Filter::get_children()
{
    if(children.find("rsvp-filter") == children.end())
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Filter::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    children["p2mp-ipv4-session"] = p2mp_ipv4_session;

    udp_ipv4_session->parent = this;
    children["udp-ipv4-session"] = udp_ipv4_session;

    yang_name = "rsvp-filter"; yang_parent_name = "filter";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        else
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session>();
            p2mp_ipv4_session->parent = this;
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        return children.at("p2mp-ipv4-session");
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        else
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session>();
            udp_ipv4_session->parent = this;
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        return children.at("udp-ipv4-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::get_children()
{
    if(children.find("p2mp-ipv4-session") == children.end())
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
    }

    if(children.find("udp-ipv4-session") == children.end())
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{
    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::RsbFlags()
    :
    is_local_receiver{YType::boolean, "is-local-receiver"},
    is_local_repair{YType::boolean, "is-local-repair"},
    is_lockout{YType::boolean, "is-lockout"},
    is_merge_point{YType::boolean, "is-merge-point"},
    is_message_id_valid{YType::boolean, "is-message-id-valid"}
{
    yang_name = "rsb-flags"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::~RsbFlags()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::has_data() const
{
    return is_local_receiver.is_set
	|| is_local_repair.is_set
	|| is_lockout.is_set
	|| is_merge_point.is_set
	|| is_message_id_valid.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_local_receiver.operation)
	|| is_set(is_local_repair.operation)
	|| is_set(is_lockout.operation)
	|| is_set(is_merge_point.operation)
	|| is_set(is_message_id_valid.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_local_receiver.is_set || is_set(is_local_receiver.operation)) leaf_name_data.push_back(is_local_receiver.get_name_leafdata());
    if (is_local_repair.is_set || is_set(is_local_repair.operation)) leaf_name_data.push_back(is_local_repair.get_name_leafdata());
    if (is_lockout.is_set || is_set(is_lockout.operation)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (is_merge_point.is_set || is_set(is_merge_point.operation)) leaf_name_data.push_back(is_merge_point.get_name_leafdata());
    if (is_message_id_valid.is_set || is_set(is_message_id_valid.operation)) leaf_name_data.push_back(is_message_id_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-local-receiver")
    {
        is_local_receiver = value;
    }
    if(value_path == "is-local-repair")
    {
        is_local_repair = value;
    }
    if(value_path == "is-lockout")
    {
        is_lockout = value;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point = value;
    }
    if(value_path == "is-message-id-valid")
    {
        is_message_id_valid = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{
    yang_name = "hop"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Hop::~Hop()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Hop::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_logical_interface_name.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Hop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.operation)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Hop::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Hop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::PolicySources()
    :
    is_cable{YType::boolean, "is-cable"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_local{YType::boolean, "is-local"},
    is_te_link{YType::boolean, "is-te-link"}
{
    yang_name = "policy-sources"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::~PolicySources()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::has_data() const
{
    return is_cable.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_local.is_set
	|| is_te_link.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::has_operation() const
{
    return is_set(operation)
	|| is_set(is_cable.operation)
	|| is_set(is_cops.operation)
	|| is_set(is_default.operation)
	|| is_set(is_local.operation)
	|| is_set(is_te_link.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-sources";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cable.is_set || is_set(is_cable.operation)) leaf_name_data.push_back(is_cable.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.operation)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_te_link.is_set || is_set(is_te_link.operation)) leaf_name_data.push_back(is_te_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-cable")
    {
        is_cable = value;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-te-link")
    {
        is_te_link = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::Header::Header()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{
    yang_name = "header"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::Header::~Header()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Header::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_source_address.operation)
	|| is_set(ip_tos.operation)
	|| is_set(ip_ttl.operation)
	|| is_set(rsvp_header_flags.operation)
	|| is_set(rsvp_message_type.operation)
	|| is_set(rsvp_ttl.operation)
	|| is_set(rsvp_version.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.operation)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.operation)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.operation)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.operation)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.operation)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.operation)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::Header::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{
    yang_name = "policy-flags"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::~PolicyFlags()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_accepted.operation)
	|| is_set(is_forwarding.operation)
	|| is_set(is_installed.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.operation)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.operation)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.operation)) leaf_name_data.push_back(is_installed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "expiry-time"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::~ExpiryTime()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
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

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime::set_value(const std::string & value_path, std::string value)
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

RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{
    yang_name = "policy-query-flags"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bypass.operation)
	|| is_set(is_needed.operation)
	|| is_set(is_report_required.operation)
	|| is_set(is_resync.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.operation)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.operation)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.operation)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.operation)) leaf_name_data.push_back(is_resync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::LabelInfo()
    :
    is_valid{YType::boolean, "is-valid"},
    local_downstream_label{YType::uint32, "local-downstream-label"},
    local_upstream_label{YType::uint32, "local-upstream-label"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    merge_point_label{YType::uint32, "merge-point-label"},
    outgoing_downstream_label{YType::uint32, "outgoing-downstream-label"},
    outgoing_upstream_label{YType::uint32, "outgoing-upstream-label"},
    recovery_label{YType::uint32, "recovery-label"}
    	,
    generic_local_downstream_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel>())
	,generic_local_upstream_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel>())
	,generic_merge_point_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel>())
	,generic_outgoing_downstream_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>())
	,generic_outgoing_upstream_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>())
	,generic_recovery_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel>())
{
    generic_local_downstream_label->parent = this;
    children["generic-local-downstream-label"] = generic_local_downstream_label;

    generic_local_upstream_label->parent = this;
    children["generic-local-upstream-label"] = generic_local_upstream_label;

    generic_merge_point_label->parent = this;
    children["generic-merge-point-label"] = generic_merge_point_label;

    generic_outgoing_downstream_label->parent = this;
    children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;

    generic_outgoing_upstream_label->parent = this;
    children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;

    generic_recovery_label->parent = this;
    children["generic-recovery-label"] = generic_recovery_label;

    yang_name = "label-info"; yang_parent_name = "rsb-detailed";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::~LabelInfo()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::has_data() const
{
    return is_valid.is_set
	|| local_downstream_label.is_set
	|| local_upstream_label.is_set
	|| lsp_wrap_label.is_set
	|| merge_point_label.is_set
	|| outgoing_downstream_label.is_set
	|| outgoing_upstream_label.is_set
	|| recovery_label.is_set
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_data())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_data())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_data())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_data())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_data())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_valid.operation)
	|| is_set(local_downstream_label.operation)
	|| is_set(local_upstream_label.operation)
	|| is_set(lsp_wrap_label.operation)
	|| is_set(merge_point_label.operation)
	|| is_set(outgoing_downstream_label.operation)
	|| is_set(outgoing_upstream_label.operation)
	|| is_set(recovery_label.operation)
	|| (generic_local_downstream_label !=  nullptr && generic_local_downstream_label->has_operation())
	|| (generic_local_upstream_label !=  nullptr && generic_local_upstream_label->has_operation())
	|| (generic_merge_point_label !=  nullptr && generic_merge_point_label->has_operation())
	|| (generic_outgoing_downstream_label !=  nullptr && generic_outgoing_downstream_label->has_operation())
	|| (generic_outgoing_upstream_label !=  nullptr && generic_outgoing_upstream_label->has_operation())
	|| (generic_recovery_label !=  nullptr && generic_recovery_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (local_downstream_label.is_set || is_set(local_downstream_label.operation)) leaf_name_data.push_back(local_downstream_label.get_name_leafdata());
    if (local_upstream_label.is_set || is_set(local_upstream_label.operation)) leaf_name_data.push_back(local_upstream_label.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.operation)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (merge_point_label.is_set || is_set(merge_point_label.operation)) leaf_name_data.push_back(merge_point_label.get_name_leafdata());
    if (outgoing_downstream_label.is_set || is_set(outgoing_downstream_label.operation)) leaf_name_data.push_back(outgoing_downstream_label.get_name_leafdata());
    if (outgoing_upstream_label.is_set || is_set(outgoing_upstream_label.operation)) leaf_name_data.push_back(outgoing_upstream_label.get_name_leafdata());
    if (recovery_label.is_set || is_set(recovery_label.operation)) leaf_name_data.push_back(recovery_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-local-downstream-label")
    {
        if(generic_local_downstream_label != nullptr)
        {
            children["generic-local-downstream-label"] = generic_local_downstream_label;
        }
        else
        {
            generic_local_downstream_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel>();
            generic_local_downstream_label->parent = this;
            children["generic-local-downstream-label"] = generic_local_downstream_label;
        }
        return children.at("generic-local-downstream-label");
    }

    if(child_yang_name == "generic-local-upstream-label")
    {
        if(generic_local_upstream_label != nullptr)
        {
            children["generic-local-upstream-label"] = generic_local_upstream_label;
        }
        else
        {
            generic_local_upstream_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel>();
            generic_local_upstream_label->parent = this;
            children["generic-local-upstream-label"] = generic_local_upstream_label;
        }
        return children.at("generic-local-upstream-label");
    }

    if(child_yang_name == "generic-merge-point-label")
    {
        if(generic_merge_point_label != nullptr)
        {
            children["generic-merge-point-label"] = generic_merge_point_label;
        }
        else
        {
            generic_merge_point_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel>();
            generic_merge_point_label->parent = this;
            children["generic-merge-point-label"] = generic_merge_point_label;
        }
        return children.at("generic-merge-point-label");
    }

    if(child_yang_name == "generic-outgoing-downstream-label")
    {
        if(generic_outgoing_downstream_label != nullptr)
        {
            children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
        }
        else
        {
            generic_outgoing_downstream_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel>();
            generic_outgoing_downstream_label->parent = this;
            children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
        }
        return children.at("generic-outgoing-downstream-label");
    }

    if(child_yang_name == "generic-outgoing-upstream-label")
    {
        if(generic_outgoing_upstream_label != nullptr)
        {
            children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
        }
        else
        {
            generic_outgoing_upstream_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel>();
            generic_outgoing_upstream_label->parent = this;
            children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
        }
        return children.at("generic-outgoing-upstream-label");
    }

    if(child_yang_name == "generic-recovery-label")
    {
        if(generic_recovery_label != nullptr)
        {
            children["generic-recovery-label"] = generic_recovery_label;
        }
        else
        {
            generic_recovery_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel>();
            generic_recovery_label->parent = this;
            children["generic-recovery-label"] = generic_recovery_label;
        }
        return children.at("generic-recovery-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::get_children()
{
    if(children.find("generic-local-downstream-label") == children.end())
    {
        if(generic_local_downstream_label != nullptr)
        {
            children["generic-local-downstream-label"] = generic_local_downstream_label;
        }
    }

    if(children.find("generic-local-upstream-label") == children.end())
    {
        if(generic_local_upstream_label != nullptr)
        {
            children["generic-local-upstream-label"] = generic_local_upstream_label;
        }
    }

    if(children.find("generic-merge-point-label") == children.end())
    {
        if(generic_merge_point_label != nullptr)
        {
            children["generic-merge-point-label"] = generic_merge_point_label;
        }
    }

    if(children.find("generic-outgoing-downstream-label") == children.end())
    {
        if(generic_outgoing_downstream_label != nullptr)
        {
            children["generic-outgoing-downstream-label"] = generic_outgoing_downstream_label;
        }
    }

    if(children.find("generic-outgoing-upstream-label") == children.end())
    {
        if(generic_outgoing_upstream_label != nullptr)
        {
            children["generic-outgoing-upstream-label"] = generic_outgoing_upstream_label;
        }
    }

    if(children.find("generic-recovery-label") == children.end())
    {
        if(generic_recovery_label != nullptr)
        {
            children["generic-recovery-label"] = generic_recovery_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "local-downstream-label")
    {
        local_downstream_label = value;
    }
    if(value_path == "local-upstream-label")
    {
        local_upstream_label = value;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
    }
    if(value_path == "merge-point-label")
    {
        merge_point_label = value;
    }
    if(value_path == "outgoing-downstream-label")
    {
        outgoing_downstream_label = value;
    }
    if(value_path == "outgoing-upstream-label")
    {
        outgoing_upstream_label = value;
    }
    if(value_path == "recovery-label")
    {
        recovery_label = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GenericLocalDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-local-downstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::~GenericLocalDownstreamLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-downstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-local-downstream-label";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/generic-local-downstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GenericOutgoingDownstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-outgoing-downstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::~GenericOutgoingDownstreamLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-downstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-downstream-label";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/generic-outgoing-downstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GenericMergePointLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-merge-point-label"; yang_parent_name = "label-info";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::~GenericMergePointLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-merge-point-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-merge-point-label";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/generic-merge-point-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GenericOutgoingUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-outgoing-upstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::~GenericOutgoingUpstreamLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-outgoing-upstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-outgoing-upstream-label";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/generic-outgoing-upstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GenericLocalUpstreamLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-local-upstream-label"; yang_parent_name = "label-info";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::~GenericLocalUpstreamLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-local-upstream-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-local-upstream-label";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/generic-local-upstream-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GenericRecoveryLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-recovery-label"; yang_parent_name = "label-info";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::~GenericRecoveryLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-recovery-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-recovery-label";
}

RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-detaileds/rsb-detailed/label-info/generic-recovery-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::InterfaceSummaries::InterfaceSummaries()
{
    yang_name = "interface-summaries"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::InterfaceSummaries::~InterfaceSummaries()
{
}

bool RsvpStandby::InterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(std::move(c));
        children[segment_path] = interface_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceSummaries::get_children()
{
    for (auto const & c : interface_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceSummaries::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    paths_in{YType::uint32, "paths-in"},
    paths_out{YType::uint32, "paths-out"},
    reservations_in{YType::uint32, "reservations-in"},
    reservations_out{YType::uint32, "reservations-out"}
    	,
    bandwidth_information(std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation>())
{
    bandwidth_information->parent = this;
    children["bandwidth-information"] = bandwidth_information;

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries";
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| paths_in.is_set
	|| paths_out.is_set
	|| reservations_in.is_set
	|| reservations_out.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(paths_in.operation)
	|| is_set(paths_out.operation)
	|| is_set(reservations_in.operation)
	|| is_set(reservations_out.operation)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string RsvpStandby::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceSummaries::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (paths_in.is_set || is_set(paths_in.operation)) leaf_name_data.push_back(paths_in.get_name_leafdata());
    if (paths_out.is_set || is_set(paths_out.operation)) leaf_name_data.push_back(paths_out.get_name_leafdata());
    if (reservations_in.is_set || is_set(reservations_in.operation)) leaf_name_data.push_back(reservations_in.get_name_leafdata());
    if (reservations_out.is_set || is_set(reservations_out.operation)) leaf_name_data.push_back(reservations_out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information != nullptr)
        {
            children["bandwidth-information"] = bandwidth_information;
        }
        else
        {
            bandwidth_information = std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation>();
            bandwidth_information->parent = this;
            children["bandwidth-information"] = bandwidth_information;
        }
        return children.at("bandwidth-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceSummaries::InterfaceSummary::get_children()
{
    if(children.find("bandwidth-information") == children.end())
    {
        if(bandwidth_information != nullptr)
        {
            children["bandwidth-information"] = bandwidth_information;
        }
    }

    return children;
}

void RsvpStandby::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "paths-in")
    {
        paths_in = value;
    }
    if(value_path == "paths-out")
    {
        paths_out = value;
    }
    if(value_path == "reservations-in")
    {
        reservations_in = value;
    }
    if(value_path == "reservations-out")
    {
        reservations_out = value;
    }
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    children["pre-standard-dste-interface"] = pre_standard_dste_interface;

    standard_dste_interface->parent = this;
    children["standard-dste-interface"] = standard_dste_interface;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-summary";
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::~BandwidthInformation()
{
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(dste_mode.operation)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthInformation' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.operation)) leaf_name_data.push_back(dste_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface != nullptr)
        {
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
        else
        {
            pre_standard_dste_interface = std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface>();
            pre_standard_dste_interface->parent = this;
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
        return children.at("pre-standard-dste-interface");
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface != nullptr)
        {
            children["standard-dste-interface"] = standard_dste_interface;
        }
        else
        {
            standard_dste_interface = std::make_shared<RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface>();
            standard_dste_interface->parent = this;
            children["standard-dste-interface"] = standard_dste_interface;
        }
        return children.at("standard-dste-interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_children()
{
    if(children.find("pre-standard-dste-interface") == children.end())
    {
        if(pre_standard_dste_interface != nullptr)
        {
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
    }

    if(children.find("standard-dste-interface") == children.end())
    {
        if(standard_dste_interface != nullptr)
        {
            children["standard-dste-interface"] = standard_dste_interface;
        }
    }

    return children;
}

void RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
    }
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{
    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information";
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bit_rate.operation)
	|| is_set(is_max_bandwidth_absolute.operation)
	|| is_set(is_max_subpool_bandwidth_absolute.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_flow_bandwidth.operation)
	|| is_set(max_subpool_bandwidth.operation);
}

std::string RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreStandardDsteInterface' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.operation)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.operation)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.operation)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_children()
{
    return children;
}

void RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
    }
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"}
{
    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information";
}

RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set;
}

bool RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bit_rate.operation)
	|| is_set(is_max_bandwidth_absolute.operation)
	|| is_set(is_max_bc0_bandwidth_absolute.operation)
	|| is_set(is_max_bc1_bandwidth_absolute.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_flow_bandwidth.operation)
	|| is_set(max_pool0_bandwidth.operation)
	|| is_set(max_pool1_bandwidth.operation);
}

std::string RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandardDsteInterface' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.operation)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.operation)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.operation)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.operation)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_children()
{
    return children;
}

void RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
    }
}

RsvpStandby::HelloInstanceBriefs::HelloInstanceBriefs()
{
    yang_name = "hello-instance-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::HelloInstanceBriefs::~HelloInstanceBriefs()
{
}

bool RsvpStandby::HelloInstanceBriefs::has_data() const
{
    for (std::size_t index=0; index<hello_instance_brief.size(); index++)
    {
        if(hello_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::HelloInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_instance_brief.size(); index++)
    {
        if(hello_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::HelloInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInstanceBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-instance-brief")
    {
        for(auto const & c : hello_instance_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief>();
        c->parent = this;
        hello_instance_brief.push_back(std::move(c));
        children[segment_path] = hello_instance_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInstanceBriefs::get_children()
{
    for (auto const & c : hello_instance_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::HelloInstanceBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::HelloInstanceBrief()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_interface{YType::str, "hello-interface"},
    instance_type{YType::enumeration, "instance-type"},
    lost_communication_total{YType::uint16, "lost-communication-total"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    source_address_xr{YType::str, "source-address-xr"}
{
    yang_name = "hello-instance-brief"; yang_parent_name = "hello-instance-briefs";
}

RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::~HelloInstanceBrief()
{
}

bool RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| destination_address_xr.is_set
	|| hello_interface.is_set
	|| instance_type.is_set
	|| lost_communication_total.is_set
	|| neighbor_hello_state.is_set
	|| source_address_xr.is_set;
}

bool RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(hello_interface.operation)
	|| is_set(instance_type.operation)
	|| is_set(lost_communication_total.operation)
	|| is_set(neighbor_hello_state.operation)
	|| is_set(source_address_xr.operation);
}

std::string RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-brief" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/hello-instance-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.operation)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.operation)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (lost_communication_total.is_set || is_set(lost_communication_total.operation)) leaf_name_data.push_back(lost_communication_total.get_name_leafdata());
    if (neighbor_hello_state.is_set || is_set(neighbor_hello_state.operation)) leaf_name_data.push_back(neighbor_hello_state.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::get_children()
{
    return children;
}

void RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total = value;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetails()
{
    yang_name = "authentication-details"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::AuthenticationDetails::~AuthenticationDetails()
{
}

bool RsvpStandby::AuthenticationDetails::has_data() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::AuthenticationDetails::has_operation() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::AuthenticationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-details";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication-detail")
    {
        for(auto const & c : authentication_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail>();
        c->parent = this;
        authentication_detail.push_back(std::move(c));
        children[segment_path] = authentication_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::get_children()
{
    for (auto const & c : authentication_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthenticationDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    mode_id{YType::enumeration, "mode-id"},
    source_address{YType::str, "source-address"},
    challenge_status{YType::enumeration, "challenge-status"},
    key_digest_info{YType::uint32, "key-digest-info"},
    key_status{YType::uint32, "key-status"},
    lifetime{YType::uint32, "lifetime"},
    lifetime_left{YType::uint32, "lifetime-left"}
    	,
    auth_compact(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact>())
	,direction_info(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo>())
{
    auth_compact->parent = this;
    children["auth-compact"] = auth_compact;

    direction_info->parent = this;
    children["direction-info"] = direction_info;

    yang_name = "authentication-detail"; yang_parent_name = "authentication-details";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::~AuthenticationDetail()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| mode_id.is_set
	|| source_address.is_set
	|| challenge_status.is_set
	|| key_digest_info.is_set
	|| key_status.is_set
	|| lifetime.is_set
	|| lifetime_left.is_set
	|| (auth_compact !=  nullptr && auth_compact->has_data())
	|| (direction_info !=  nullptr && direction_info->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(mode_id.operation)
	|| is_set(source_address.operation)
	|| is_set(challenge_status.operation)
	|| is_set(key_digest_info.operation)
	|| is_set(key_status.operation)
	|| is_set(lifetime.operation)
	|| is_set(lifetime_left.operation)
	|| (auth_compact !=  nullptr && auth_compact->has_operation())
	|| (direction_info !=  nullptr && direction_info->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-detail" <<"[destination-address='" <<destination_address <<"']" <<"[interface-name='" <<interface_name <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/authentication-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.operation)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (challenge_status.is_set || is_set(challenge_status.operation)) leaf_name_data.push_back(challenge_status.get_name_leafdata());
    if (key_digest_info.is_set || is_set(key_digest_info.operation)) leaf_name_data.push_back(key_digest_info.get_name_leafdata());
    if (key_status.is_set || is_set(key_status.operation)) leaf_name_data.push_back(key_status.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (lifetime_left.is_set || is_set(lifetime_left.operation)) leaf_name_data.push_back(lifetime_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auth-compact")
    {
        if(auth_compact != nullptr)
        {
            children["auth-compact"] = auth_compact;
        }
        else
        {
            auth_compact = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact>();
            auth_compact->parent = this;
            children["auth-compact"] = auth_compact;
        }
        return children.at("auth-compact");
    }

    if(child_yang_name == "direction-info")
    {
        if(direction_info != nullptr)
        {
            children["direction-info"] = direction_info;
        }
        else
        {
            direction_info = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo>();
            direction_info->parent = this;
            children["direction-info"] = direction_info;
        }
        return children.at("direction-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::get_children()
{
    if(children.find("auth-compact") == children.end())
    {
        if(auth_compact != nullptr)
        {
            children["auth-compact"] = auth_compact;
        }
    }

    if(children.find("direction-info") == children.end())
    {
        if(direction_info != nullptr)
        {
            children["direction-info"] = direction_info;
        }
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mode-id")
    {
        mode_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "challenge-status")
    {
        challenge_status = value;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info = value;
    }
    if(value_path == "key-status")
    {
        key_status = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
    if(value_path == "lifetime-left")
    {
        lifetime_left = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::AuthCompact()
    :
    destination_address_xr{YType::str, "destination-address-xr"},
    direction{YType::enumeration, "direction"},
    key_id{YType::uint64, "key-id"},
    key_id_valid{YType::uint32, "key-id-valid"},
    key_source{YType::str, "key-source"},
    key_type{YType::enumeration, "key-type"},
    neighbor_address{YType::str, "neighbor-address"},
    source_address_xr{YType::str, "source-address-xr"}
{
    yang_name = "auth-compact"; yang_parent_name = "authentication-detail";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::~AuthCompact()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_data() const
{
    return destination_address_xr.is_set
	|| direction.is_set
	|| key_id.is_set
	|| key_id_valid.is_set
	|| key_source.is_set
	|| key_type.is_set
	|| neighbor_address.is_set
	|| source_address_xr.is_set;
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(direction.operation)
	|| is_set(key_id.operation)
	|| is_set(key_id_valid.operation)
	|| is_set(key_source.operation)
	|| is_set(key_type.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(source_address_xr.operation);
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-compact";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthCompact' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.operation)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.operation)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.operation)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_children()
{
    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid = value;
    }
    if(value_path == "key-source")
    {
        key_source = value;
    }
    if(value_path == "key-type")
    {
        key_type = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::DirectionInfo()
    :
    auth_direction{YType::enumeration, "auth-direction"}
    	,
    receive_info(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>())
	,send_info(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>())
{
    receive_info->parent = this;
    children["receive-info"] = receive_info;

    send_info->parent = this;
    children["send-info"] = send_info;

    yang_name = "direction-info"; yang_parent_name = "authentication-detail";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::~DirectionInfo()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_data() const
{
    return auth_direction.is_set
	|| (receive_info !=  nullptr && receive_info->has_data())
	|| (send_info !=  nullptr && send_info->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_direction.operation)
	|| (receive_info !=  nullptr && receive_info->has_operation())
	|| (send_info !=  nullptr && send_info->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DirectionInfo' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_direction.is_set || is_set(auth_direction.operation)) leaf_name_data.push_back(auth_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "receive-info")
    {
        if(receive_info != nullptr)
        {
            children["receive-info"] = receive_info;
        }
        else
        {
            receive_info = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>();
            receive_info->parent = this;
            children["receive-info"] = receive_info;
        }
        return children.at("receive-info");
    }

    if(child_yang_name == "send-info")
    {
        if(send_info != nullptr)
        {
            children["send-info"] = send_info;
        }
        else
        {
            send_info = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>();
            send_info->parent = this;
            children["send-info"] = send_info;
        }
        return children.at("send-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_children()
{
    if(children.find("receive-info") == children.end())
    {
        if(receive_info != nullptr)
        {
            children["receive-info"] = receive_info;
        }
    }

    if(children.find("send-info") == children.end())
    {
        if(send_info != nullptr)
        {
            children["send-info"] = send_info;
        }
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-direction")
    {
        auth_direction = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::SendInfo()
    :
    sequence{YType::uint64, "sequence"}
    	,
    counters(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "send-info"; yang_parent_name = "direction-info";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::~SendInfo()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_data() const
{
    return sequence.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendInfo' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::Counters()
    :
    authentication_challenge_responses_sent{YType::uint32, "authentication-challenge-responses-sent"},
    authentication_failures{YType::uint32, "authentication-failures"},
    authentication_send_challenges_received{YType::uint32, "authentication-send-challenges-received"},
    authentication_sent{YType::uint32, "authentication-sent"}
{
    yang_name = "counters"; yang_parent_name = "send-info";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::~Counters()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_data() const
{
    return authentication_challenge_responses_sent.is_set
	|| authentication_failures.is_set
	|| authentication_send_challenges_received.is_set
	|| authentication_sent.is_set;
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_challenge_responses_sent.operation)
	|| is_set(authentication_failures.operation)
	|| is_set(authentication_send_challenges_received.operation)
	|| is_set(authentication_sent.operation);
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_challenge_responses_sent.is_set || is_set(authentication_challenge_responses_sent.operation)) leaf_name_data.push_back(authentication_challenge_responses_sent.get_name_leafdata());
    if (authentication_failures.is_set || is_set(authentication_failures.operation)) leaf_name_data.push_back(authentication_failures.get_name_leafdata());
    if (authentication_send_challenges_received.is_set || is_set(authentication_send_challenges_received.operation)) leaf_name_data.push_back(authentication_send_challenges_received.get_name_leafdata());
    if (authentication_sent.is_set || is_set(authentication_sent.operation)) leaf_name_data.push_back(authentication_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_children()
{
    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent = value;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures = value;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received = value;
    }
    if(value_path == "authentication-sent")
    {
        authentication_sent = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::ReceiveInfo()
    :
    sequence{YType::uint64, "sequence"},
    sequence_window{YType::uint64, "sequence-window"},
    sequence_window_count{YType::uint32, "sequence-window-count"},
    sequence_window_size{YType::uint32, "sequence-window-size"}
    	,
    counters(std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "receive-info"; yang_parent_name = "direction-info";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::~ReceiveInfo()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_data() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sequence.is_set
	|| sequence_window_count.is_set
	|| sequence_window_size.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_operation() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(sequence_window.operation)
	|| is_set(sequence_window_count.operation)
	|| is_set(sequence_window_size.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveInfo' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (sequence_window_count.is_set || is_set(sequence_window_count.operation)) leaf_name_data.push_back(sequence_window_count.get_name_leafdata());
    if (sequence_window_size.is_set || is_set(sequence_window_size.operation)) leaf_name_data.push_back(sequence_window_size.get_name_leafdata());

    auto sequence_window_name_datas = sequence_window.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sequence_window_name_datas.begin(), sequence_window_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.append(value);
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count = value;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size = value;
    }
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::Counters()
    :
    authentication_received_bad_digest{YType::uint32, "authentication-received-bad-digest"},
    authentication_received_bad_message_format{YType::uint32, "authentication-received-bad-message-format"},
    authentication_received_challenge_response{YType::uint32, "authentication-received-challenge-response"},
    authentication_received_challenge_timeouts{YType::uint32, "authentication-received-challenge-timeouts"},
    authentication_received_challenges_resent{YType::uint32, "authentication-received-challenges-resent"},
    authentication_received_challenges_response_duplicate{YType::uint32, "authentication-received-challenges-response-duplicate"},
    authentication_received_challenges_sent{YType::uint32, "authentication-received-challenges-sent"},
    authentication_received_during_challenge{YType::uint32, "authentication-received-during-challenge"},
    authentication_received_incomplete{YType::uint32, "authentication-received-incomplete"},
    authentication_received_no_integrity{YType::uint32, "authentication-received-no-integrity"},
    authentication_received_response_late{YType::uint32, "authentication-received-response-late"},
    authentication_received_sequence_number_duplicate{YType::uint32, "authentication-received-sequence-number-duplicate"},
    authentication_received_sequence_number_outof_range{YType::uint32, "authentication-received-sequence-number-outof-range"},
    authentication_received_valid_messages{YType::uint32, "authentication-received-valid-messages"},
    authentication_received_wrong_challenges_response{YType::uint32, "authentication-received-wrong-challenges-response"},
    authentication_received_wrong_digest_type{YType::uint32, "authentication-received-wrong-digest-type"}
{
    yang_name = "counters"; yang_parent_name = "receive-info";
}

RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::~Counters()
{
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_data() const
{
    return authentication_received_bad_digest.is_set
	|| authentication_received_bad_message_format.is_set
	|| authentication_received_challenge_response.is_set
	|| authentication_received_challenge_timeouts.is_set
	|| authentication_received_challenges_resent.is_set
	|| authentication_received_challenges_response_duplicate.is_set
	|| authentication_received_challenges_sent.is_set
	|| authentication_received_during_challenge.is_set
	|| authentication_received_incomplete.is_set
	|| authentication_received_no_integrity.is_set
	|| authentication_received_response_late.is_set
	|| authentication_received_sequence_number_duplicate.is_set
	|| authentication_received_sequence_number_outof_range.is_set
	|| authentication_received_valid_messages.is_set
	|| authentication_received_wrong_challenges_response.is_set
	|| authentication_received_wrong_digest_type.is_set;
}

bool RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_received_bad_digest.operation)
	|| is_set(authentication_received_bad_message_format.operation)
	|| is_set(authentication_received_challenge_response.operation)
	|| is_set(authentication_received_challenge_timeouts.operation)
	|| is_set(authentication_received_challenges_resent.operation)
	|| is_set(authentication_received_challenges_response_duplicate.operation)
	|| is_set(authentication_received_challenges_sent.operation)
	|| is_set(authentication_received_during_challenge.operation)
	|| is_set(authentication_received_incomplete.operation)
	|| is_set(authentication_received_no_integrity.operation)
	|| is_set(authentication_received_response_late.operation)
	|| is_set(authentication_received_sequence_number_duplicate.operation)
	|| is_set(authentication_received_sequence_number_outof_range.operation)
	|| is_set(authentication_received_valid_messages.operation)
	|| is_set(authentication_received_wrong_challenges_response.operation)
	|| is_set(authentication_received_wrong_digest_type.operation);
}

std::string RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_received_bad_digest.is_set || is_set(authentication_received_bad_digest.operation)) leaf_name_data.push_back(authentication_received_bad_digest.get_name_leafdata());
    if (authentication_received_bad_message_format.is_set || is_set(authentication_received_bad_message_format.operation)) leaf_name_data.push_back(authentication_received_bad_message_format.get_name_leafdata());
    if (authentication_received_challenge_response.is_set || is_set(authentication_received_challenge_response.operation)) leaf_name_data.push_back(authentication_received_challenge_response.get_name_leafdata());
    if (authentication_received_challenge_timeouts.is_set || is_set(authentication_received_challenge_timeouts.operation)) leaf_name_data.push_back(authentication_received_challenge_timeouts.get_name_leafdata());
    if (authentication_received_challenges_resent.is_set || is_set(authentication_received_challenges_resent.operation)) leaf_name_data.push_back(authentication_received_challenges_resent.get_name_leafdata());
    if (authentication_received_challenges_response_duplicate.is_set || is_set(authentication_received_challenges_response_duplicate.operation)) leaf_name_data.push_back(authentication_received_challenges_response_duplicate.get_name_leafdata());
    if (authentication_received_challenges_sent.is_set || is_set(authentication_received_challenges_sent.operation)) leaf_name_data.push_back(authentication_received_challenges_sent.get_name_leafdata());
    if (authentication_received_during_challenge.is_set || is_set(authentication_received_during_challenge.operation)) leaf_name_data.push_back(authentication_received_during_challenge.get_name_leafdata());
    if (authentication_received_incomplete.is_set || is_set(authentication_received_incomplete.operation)) leaf_name_data.push_back(authentication_received_incomplete.get_name_leafdata());
    if (authentication_received_no_integrity.is_set || is_set(authentication_received_no_integrity.operation)) leaf_name_data.push_back(authentication_received_no_integrity.get_name_leafdata());
    if (authentication_received_response_late.is_set || is_set(authentication_received_response_late.operation)) leaf_name_data.push_back(authentication_received_response_late.get_name_leafdata());
    if (authentication_received_sequence_number_duplicate.is_set || is_set(authentication_received_sequence_number_duplicate.operation)) leaf_name_data.push_back(authentication_received_sequence_number_duplicate.get_name_leafdata());
    if (authentication_received_sequence_number_outof_range.is_set || is_set(authentication_received_sequence_number_outof_range.operation)) leaf_name_data.push_back(authentication_received_sequence_number_outof_range.get_name_leafdata());
    if (authentication_received_valid_messages.is_set || is_set(authentication_received_valid_messages.operation)) leaf_name_data.push_back(authentication_received_valid_messages.get_name_leafdata());
    if (authentication_received_wrong_challenges_response.is_set || is_set(authentication_received_wrong_challenges_response.operation)) leaf_name_data.push_back(authentication_received_wrong_challenges_response.get_name_leafdata());
    if (authentication_received_wrong_digest_type.is_set || is_set(authentication_received_wrong_digest_type.operation)) leaf_name_data.push_back(authentication_received_wrong_digest_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_children()
{
    return children;
}

void RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest = value;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format = value;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response = value;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts = value;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent = value;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate = value;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent = value;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge = value;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete = value;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity = value;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late = value;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate = value;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range = value;
    }
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages = value;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response = value;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type = value;
    }
}

RsvpStandby::RsbBriefs::RsbBriefs()
{
    yang_name = "rsb-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::RsbBriefs::~RsbBriefs()
{
}

bool RsvpStandby::RsbBriefs::has_data() const
{
    for (std::size_t index=0; index<rsb_brief.size(); index++)
    {
        if(rsb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::RsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<rsb_brief.size(); index++)
    {
        if(rsb_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::RsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsb-brief")
    {
        for(auto const & c : rsb_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief>();
        c->parent = this;
        rsb_brief.push_back(std::move(c));
        children[segment_path] = rsb_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::get_children()
{
    for (auto const & c : rsb_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RsbBriefs::RsbBrief::RsbBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    input_interface{YType::str, "input-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter>())
	,flow_spec(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::FlowSpec>())
	,generic_flow_spec(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp>())
	,session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session>())
	,style(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Style>())
{
    filter->parent = this;
    children["filter"] = filter;

    flow_spec->parent = this;
    children["flow-spec"] = flow_spec;

    generic_flow_spec->parent = this;
    children["generic-flow-spec"] = generic_flow_spec;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    style->parent = this;
    children["style"] = style;

    yang_name = "rsb-brief"; yang_parent_name = "rsb-briefs";
}

RsvpStandby::RsbBriefs::RsbBrief::~RsbBrief()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| input_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(input_interface.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-brief";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.operation)) leaf_name_data.push_back(input_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "filter")
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
        else
        {
            filter = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter>();
            filter->parent = this;
            children["filter"] = filter;
        }
        return children.at("filter");
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
        else
        {
            flow_spec = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::FlowSpec>();
            flow_spec->parent = this;
            children["flow-spec"] = flow_spec;
        }
        return children.at("flow-spec");
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
        else
        {
            generic_flow_spec = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec>();
            generic_flow_spec->parent = this;
            children["generic-flow-spec"] = generic_flow_spec;
        }
        return children.at("generic-flow-spec");
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "style")
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
        else
        {
            style = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Style>();
            style->parent = this;
            children["style"] = style;
        }
        return children.at("style");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::get_children()
{
    if(children.find("filter") == children.end())
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
    }

    if(children.find("flow-spec") == children.end())
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
    }

    if(children.find("generic-flow-spec") == children.end())
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("style") == children.end())
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "rsb-brief";
}

RsvpStandby::RsbBriefs::RsbBrief::Session::~Session()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-brief";
}

RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{
    yang_name = "flow-spec"; yang_parent_name = "rsb-brief";
}

RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_average_rate.operation)
	|| is_set(flow_max_burst.operation)
	|| is_set(flow_max_unit.operation)
	|| is_set(flow_min_unit.operation)
	|| is_set(flow_peak_rate.operation)
	|| is_set(flow_qos.operation)
	|| is_set(flow_requested_rate.operation)
	|| is_set(flow_slack.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.operation)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.operation)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.operation)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.operation)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.operation)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.operation)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.operation)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.operation)) leaf_name_data.push_back(flow_slack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::FlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;
    children["g709otn-flow-spec"] = g709otn_flow_spec;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-brief";
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_spec_type.operation)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.operation)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        else
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec>();
            g709otn_flow_spec->parent = this;
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        return children.at("g709otn-flow-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::get_children()
{
    if(children.find("g709otn-flow-spec") == children.end())
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{
    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec";
}

RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_bit_rate.operation)
	|| is_set(flow_multiplier.operation)
	|| is_set(flow_nvc.operation)
	|| is_set(flow_signal_type.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/generic-flow-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.operation)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.operation)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.operation)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.operation)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{
    yang_name = "style"; yang_parent_name = "rsb-brief";
}

RsvpStandby::RsbBriefs::RsbBrief::Style::~Style()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Style::has_data() const
{
    return reservation_type.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Style::has_operation() const
{
    return is_set(operation)
	|| is_set(reservation_type.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Style::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.operation)) leaf_name_data.push_back(reservation_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Style::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Style::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;
    children["rsvp-filter"] = rsvp_filter;

    yang_name = "filter"; yang_parent_name = "rsb-brief";
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::~Filter()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::has_operation() const
{
    return is_set(operation)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
        else
        {
            rsvp_filter = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter>();
            rsvp_filter->parent = this;
            children["rsvp-filter"] = rsvp_filter;
        }
        return children.at("rsvp-filter");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Filter::get_children()
{
    if(children.find("rsvp-filter") == children.end())
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    children["p2mp-ipv4-session"] = p2mp_ipv4_session;

    udp_ipv4_session->parent = this;
    children["udp-ipv4-session"] = udp_ipv4_session;

    yang_name = "rsvp-filter"; yang_parent_name = "filter";
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        else
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session>();
            p2mp_ipv4_session->parent = this;
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        return children.at("p2mp-ipv4-session");
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        else
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>();
            udp_ipv4_session->parent = this;
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        return children.at("udp-ipv4-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_children()
{
    if(children.find("p2mp-ipv4-session") == children.end())
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
    }

    if(children.find("udp-ipv4-session") == children.end())
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
    }

    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{
    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation);
}

std::string RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

RsvpStandby::OpenConfig::OpenConfig()
    :
    global_counters(std::make_shared<RsvpStandby::OpenConfig::GlobalCounters>())
	,interface_counters(std::make_shared<RsvpStandby::OpenConfig::InterfaceCounters>())
{
    global_counters->parent = this;
    children["global-counters"] = global_counters;

    interface_counters->parent = this;
    children["interface-counters"] = interface_counters;

    yang_name = "open-config"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::OpenConfig::~OpenConfig()
{
}

bool RsvpStandby::OpenConfig::has_data() const
{
    return (global_counters !=  nullptr && global_counters->has_data())
	|| (interface_counters !=  nullptr && interface_counters->has_data());
}

bool RsvpStandby::OpenConfig::has_operation() const
{
    return is_set(operation)
	|| (global_counters !=  nullptr && global_counters->has_operation())
	|| (interface_counters !=  nullptr && interface_counters->has_operation());
}

std::string RsvpStandby::OpenConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config";

    return path_buffer.str();

}

EntityPath RsvpStandby::OpenConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::OpenConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-counters")
    {
        if(global_counters != nullptr)
        {
            children["global-counters"] = global_counters;
        }
        else
        {
            global_counters = std::make_shared<RsvpStandby::OpenConfig::GlobalCounters>();
            global_counters->parent = this;
            children["global-counters"] = global_counters;
        }
        return children.at("global-counters");
    }

    if(child_yang_name == "interface-counters")
    {
        if(interface_counters != nullptr)
        {
            children["interface-counters"] = interface_counters;
        }
        else
        {
            interface_counters = std::make_shared<RsvpStandby::OpenConfig::InterfaceCounters>();
            interface_counters->parent = this;
            children["interface-counters"] = interface_counters;
        }
        return children.at("interface-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::OpenConfig::get_children()
{
    if(children.find("global-counters") == children.end())
    {
        if(global_counters != nullptr)
        {
            children["global-counters"] = global_counters;
        }
    }

    if(children.find("interface-counters") == children.end())
    {
        if(interface_counters != nullptr)
        {
            children["interface-counters"] = interface_counters;
        }
    }

    return children;
}

void RsvpStandby::OpenConfig::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::OpenConfig::GlobalCounters::GlobalCounters()
    :
    in_ack_messages{YType::uint64, "in-ack-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    out_ack_messages{YType::uint64, "out-ack-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"},
    path_timeouts{YType::uint64, "path-timeouts"},
    rate_limited_messages{YType::uint64, "rate-limited-messages"},
    reservation_timeouts{YType::uint64, "reservation-timeouts"}
{
    yang_name = "global-counters"; yang_parent_name = "open-config";
}

RsvpStandby::OpenConfig::GlobalCounters::~GlobalCounters()
{
}

bool RsvpStandby::OpenConfig::GlobalCounters::has_data() const
{
    return in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set
	|| path_timeouts.is_set
	|| rate_limited_messages.is_set
	|| reservation_timeouts.is_set;
}

bool RsvpStandby::OpenConfig::GlobalCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(in_ack_messages.operation)
	|| is_set(in_hello_messages.operation)
	|| is_set(in_path_error_messages.operation)
	|| is_set(in_path_messages.operation)
	|| is_set(in_path_tear_messages.operation)
	|| is_set(in_reservation_error_messages.operation)
	|| is_set(in_reservation_messages.operation)
	|| is_set(in_reservation_tear_messages.operation)
	|| is_set(in_srefresh_messages.operation)
	|| is_set(out_ack_messages.operation)
	|| is_set(out_hello_messages.operation)
	|| is_set(out_path_error_messages.operation)
	|| is_set(out_path_messages.operation)
	|| is_set(out_path_tear_messages.operation)
	|| is_set(out_reservation_error_messages.operation)
	|| is_set(out_reservation_messages.operation)
	|| is_set(out_reservation_tear_messages.operation)
	|| is_set(out_srefresh_messages.operation)
	|| is_set(path_timeouts.operation)
	|| is_set(rate_limited_messages.operation)
	|| is_set(reservation_timeouts.operation);
}

std::string RsvpStandby::OpenConfig::GlobalCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-counters";

    return path_buffer.str();

}

EntityPath RsvpStandby::OpenConfig::GlobalCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/open-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_ack_messages.is_set || is_set(in_ack_messages.operation)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.operation)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.operation)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.operation)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.operation)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.operation)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.operation)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.operation)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.operation)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.operation)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.operation)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.operation)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.operation)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.operation)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.operation)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.operation)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.operation)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.operation)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());
    if (path_timeouts.is_set || is_set(path_timeouts.operation)) leaf_name_data.push_back(path_timeouts.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.operation)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (reservation_timeouts.is_set || is_set(reservation_timeouts.operation)) leaf_name_data.push_back(reservation_timeouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::OpenConfig::GlobalCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::OpenConfig::GlobalCounters::get_children()
{
    return children;
}

void RsvpStandby::OpenConfig::GlobalCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
    }
    if(value_path == "path-timeouts")
    {
        path_timeouts = value;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
    }
    if(value_path == "reservation-timeouts")
    {
        reservation_timeouts = value;
    }
}

RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounters()
{
    yang_name = "interface-counters"; yang_parent_name = "open-config";
}

RsvpStandby::OpenConfig::InterfaceCounters::~InterfaceCounters()
{
}

bool RsvpStandby::OpenConfig::InterfaceCounters::has_data() const
{
    for (std::size_t index=0; index<interface_counter.size(); index++)
    {
        if(interface_counter[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::OpenConfig::InterfaceCounters::has_operation() const
{
    for (std::size_t index=0; index<interface_counter.size(); index++)
    {
        if(interface_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::OpenConfig::InterfaceCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counters";

    return path_buffer.str();

}

EntityPath RsvpStandby::OpenConfig::InterfaceCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/open-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::OpenConfig::InterfaceCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-counter")
    {
        for(auto const & c : interface_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter>();
        c->parent = this;
        interface_counter.push_back(std::move(c));
        children[segment_path] = interface_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::OpenConfig::InterfaceCounters::get_children()
{
    for (auto const & c : interface_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::OpenConfig::InterfaceCounters::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::InterfaceCounter()
    :
    interface_name{YType::str, "interface-name"},
    in_ack_messages{YType::uint64, "in-ack-messages"},
    in_hello_messages{YType::uint64, "in-hello-messages"},
    in_path_error_messages{YType::uint64, "in-path-error-messages"},
    in_path_messages{YType::uint64, "in-path-messages"},
    in_path_tear_messages{YType::uint64, "in-path-tear-messages"},
    in_reservation_error_messages{YType::uint64, "in-reservation-error-messages"},
    in_reservation_messages{YType::uint64, "in-reservation-messages"},
    in_reservation_tear_messages{YType::uint64, "in-reservation-tear-messages"},
    in_srefresh_messages{YType::uint64, "in-srefresh-messages"},
    interface_name_xr{YType::str, "interface-name-xr"},
    out_ack_messages{YType::uint64, "out-ack-messages"},
    out_hello_messages{YType::uint64, "out-hello-messages"},
    out_path_error_messages{YType::uint64, "out-path-error-messages"},
    out_path_messages{YType::uint64, "out-path-messages"},
    out_path_tear_messages{YType::uint64, "out-path-tear-messages"},
    out_reservation_error_messages{YType::uint64, "out-reservation-error-messages"},
    out_reservation_messages{YType::uint64, "out-reservation-messages"},
    out_reservation_tear_messages{YType::uint64, "out-reservation-tear-messages"},
    out_srefresh_messages{YType::uint64, "out-srefresh-messages"}
{
    yang_name = "interface-counter"; yang_parent_name = "interface-counters";
}

RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::~InterfaceCounter()
{
}

bool RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::has_data() const
{
    return interface_name.is_set
	|| in_ack_messages.is_set
	|| in_hello_messages.is_set
	|| in_path_error_messages.is_set
	|| in_path_messages.is_set
	|| in_path_tear_messages.is_set
	|| in_reservation_error_messages.is_set
	|| in_reservation_messages.is_set
	|| in_reservation_tear_messages.is_set
	|| in_srefresh_messages.is_set
	|| interface_name_xr.is_set
	|| out_ack_messages.is_set
	|| out_hello_messages.is_set
	|| out_path_error_messages.is_set
	|| out_path_messages.is_set
	|| out_path_tear_messages.is_set
	|| out_reservation_error_messages.is_set
	|| out_reservation_messages.is_set
	|| out_reservation_tear_messages.is_set
	|| out_srefresh_messages.is_set;
}

bool RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(in_ack_messages.operation)
	|| is_set(in_hello_messages.operation)
	|| is_set(in_path_error_messages.operation)
	|| is_set(in_path_messages.operation)
	|| is_set(in_path_tear_messages.operation)
	|| is_set(in_reservation_error_messages.operation)
	|| is_set(in_reservation_messages.operation)
	|| is_set(in_reservation_tear_messages.operation)
	|| is_set(in_srefresh_messages.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(out_ack_messages.operation)
	|| is_set(out_hello_messages.operation)
	|| is_set(out_path_error_messages.operation)
	|| is_set(out_path_messages.operation)
	|| is_set(out_path_tear_messages.operation)
	|| is_set(out_reservation_error_messages.operation)
	|| is_set(out_reservation_messages.operation)
	|| is_set(out_reservation_tear_messages.operation)
	|| is_set(out_srefresh_messages.operation);
}

std::string RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-counter" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/open-config/interface-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (in_ack_messages.is_set || is_set(in_ack_messages.operation)) leaf_name_data.push_back(in_ack_messages.get_name_leafdata());
    if (in_hello_messages.is_set || is_set(in_hello_messages.operation)) leaf_name_data.push_back(in_hello_messages.get_name_leafdata());
    if (in_path_error_messages.is_set || is_set(in_path_error_messages.operation)) leaf_name_data.push_back(in_path_error_messages.get_name_leafdata());
    if (in_path_messages.is_set || is_set(in_path_messages.operation)) leaf_name_data.push_back(in_path_messages.get_name_leafdata());
    if (in_path_tear_messages.is_set || is_set(in_path_tear_messages.operation)) leaf_name_data.push_back(in_path_tear_messages.get_name_leafdata());
    if (in_reservation_error_messages.is_set || is_set(in_reservation_error_messages.operation)) leaf_name_data.push_back(in_reservation_error_messages.get_name_leafdata());
    if (in_reservation_messages.is_set || is_set(in_reservation_messages.operation)) leaf_name_data.push_back(in_reservation_messages.get_name_leafdata());
    if (in_reservation_tear_messages.is_set || is_set(in_reservation_tear_messages.operation)) leaf_name_data.push_back(in_reservation_tear_messages.get_name_leafdata());
    if (in_srefresh_messages.is_set || is_set(in_srefresh_messages.operation)) leaf_name_data.push_back(in_srefresh_messages.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (out_ack_messages.is_set || is_set(out_ack_messages.operation)) leaf_name_data.push_back(out_ack_messages.get_name_leafdata());
    if (out_hello_messages.is_set || is_set(out_hello_messages.operation)) leaf_name_data.push_back(out_hello_messages.get_name_leafdata());
    if (out_path_error_messages.is_set || is_set(out_path_error_messages.operation)) leaf_name_data.push_back(out_path_error_messages.get_name_leafdata());
    if (out_path_messages.is_set || is_set(out_path_messages.operation)) leaf_name_data.push_back(out_path_messages.get_name_leafdata());
    if (out_path_tear_messages.is_set || is_set(out_path_tear_messages.operation)) leaf_name_data.push_back(out_path_tear_messages.get_name_leafdata());
    if (out_reservation_error_messages.is_set || is_set(out_reservation_error_messages.operation)) leaf_name_data.push_back(out_reservation_error_messages.get_name_leafdata());
    if (out_reservation_messages.is_set || is_set(out_reservation_messages.operation)) leaf_name_data.push_back(out_reservation_messages.get_name_leafdata());
    if (out_reservation_tear_messages.is_set || is_set(out_reservation_tear_messages.operation)) leaf_name_data.push_back(out_reservation_tear_messages.get_name_leafdata());
    if (out_srefresh_messages.is_set || is_set(out_srefresh_messages.operation)) leaf_name_data.push_back(out_srefresh_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::get_children()
{
    return children;
}

void RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "in-ack-messages")
    {
        in_ack_messages = value;
    }
    if(value_path == "in-hello-messages")
    {
        in_hello_messages = value;
    }
    if(value_path == "in-path-error-messages")
    {
        in_path_error_messages = value;
    }
    if(value_path == "in-path-messages")
    {
        in_path_messages = value;
    }
    if(value_path == "in-path-tear-messages")
    {
        in_path_tear_messages = value;
    }
    if(value_path == "in-reservation-error-messages")
    {
        in_reservation_error_messages = value;
    }
    if(value_path == "in-reservation-messages")
    {
        in_reservation_messages = value;
    }
    if(value_path == "in-reservation-tear-messages")
    {
        in_reservation_tear_messages = value;
    }
    if(value_path == "in-srefresh-messages")
    {
        in_srefresh_messages = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "out-ack-messages")
    {
        out_ack_messages = value;
    }
    if(value_path == "out-hello-messages")
    {
        out_hello_messages = value;
    }
    if(value_path == "out-path-error-messages")
    {
        out_path_error_messages = value;
    }
    if(value_path == "out-path-messages")
    {
        out_path_messages = value;
    }
    if(value_path == "out-path-tear-messages")
    {
        out_path_tear_messages = value;
    }
    if(value_path == "out-reservation-error-messages")
    {
        out_reservation_error_messages = value;
    }
    if(value_path == "out-reservation-messages")
    {
        out_reservation_messages = value;
    }
    if(value_path == "out-reservation-tear-messages")
    {
        out_reservation_tear_messages = value;
    }
    if(value_path == "out-srefresh-messages")
    {
        out_srefresh_messages = value;
    }
}

RsvpStandby::Counters::Counters()
    :
    database(std::make_shared<RsvpStandby::Counters::Database>())
	,event_syncs(std::make_shared<RsvpStandby::Counters::EventSyncs>())
	,interface_events(std::make_shared<RsvpStandby::Counters::InterfaceEvents>())
	,interface_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages>())
	,issu(std::make_shared<RsvpStandby::Counters::Issu>())
	,message_summary(std::make_shared<RsvpStandby::Counters::MessageSummary>())
	,nsr(std::make_shared<RsvpStandby::Counters::Nsr>())
	,out_of_resource(std::make_shared<RsvpStandby::Counters::OutOfResource>())
	,prefix_filtering(std::make_shared<RsvpStandby::Counters::PrefixFiltering>())
{
    database->parent = this;
    children["database"] = database;

    event_syncs->parent = this;
    children["event-syncs"] = event_syncs;

    interface_events->parent = this;
    children["interface-events"] = interface_events;

    interface_messages->parent = this;
    children["interface-messages"] = interface_messages;

    issu->parent = this;
    children["issu"] = issu;

    message_summary->parent = this;
    children["message-summary"] = message_summary;

    nsr->parent = this;
    children["nsr"] = nsr;

    out_of_resource->parent = this;
    children["out-of-resource"] = out_of_resource;

    prefix_filtering->parent = this;
    children["prefix-filtering"] = prefix_filtering;

    yang_name = "counters"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::Counters::~Counters()
{
}

bool RsvpStandby::Counters::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (event_syncs !=  nullptr && event_syncs->has_data())
	|| (interface_events !=  nullptr && interface_events->has_data())
	|| (interface_messages !=  nullptr && interface_messages->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (message_summary !=  nullptr && message_summary->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (out_of_resource !=  nullptr && out_of_resource->has_data())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_data());
}

bool RsvpStandby::Counters::has_operation() const
{
    return is_set(operation)
	|| (database !=  nullptr && database->has_operation())
	|| (event_syncs !=  nullptr && event_syncs->has_operation())
	|| (interface_events !=  nullptr && interface_events->has_operation())
	|| (interface_messages !=  nullptr && interface_messages->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (message_summary !=  nullptr && message_summary->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (out_of_resource !=  nullptr && out_of_resource->has_operation())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_operation());
}

std::string RsvpStandby::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
        else
        {
            database = std::make_shared<RsvpStandby::Counters::Database>();
            database->parent = this;
            children["database"] = database;
        }
        return children.at("database");
    }

    if(child_yang_name == "event-syncs")
    {
        if(event_syncs != nullptr)
        {
            children["event-syncs"] = event_syncs;
        }
        else
        {
            event_syncs = std::make_shared<RsvpStandby::Counters::EventSyncs>();
            event_syncs->parent = this;
            children["event-syncs"] = event_syncs;
        }
        return children.at("event-syncs");
    }

    if(child_yang_name == "interface-events")
    {
        if(interface_events != nullptr)
        {
            children["interface-events"] = interface_events;
        }
        else
        {
            interface_events = std::make_shared<RsvpStandby::Counters::InterfaceEvents>();
            interface_events->parent = this;
            children["interface-events"] = interface_events;
        }
        return children.at("interface-events");
    }

    if(child_yang_name == "interface-messages")
    {
        if(interface_messages != nullptr)
        {
            children["interface-messages"] = interface_messages;
        }
        else
        {
            interface_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages>();
            interface_messages->parent = this;
            children["interface-messages"] = interface_messages;
        }
        return children.at("interface-messages");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<RsvpStandby::Counters::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "message-summary")
    {
        if(message_summary != nullptr)
        {
            children["message-summary"] = message_summary;
        }
        else
        {
            message_summary = std::make_shared<RsvpStandby::Counters::MessageSummary>();
            message_summary->parent = this;
            children["message-summary"] = message_summary;
        }
        return children.at("message-summary");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<RsvpStandby::Counters::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "out-of-resource")
    {
        if(out_of_resource != nullptr)
        {
            children["out-of-resource"] = out_of_resource;
        }
        else
        {
            out_of_resource = std::make_shared<RsvpStandby::Counters::OutOfResource>();
            out_of_resource->parent = this;
            children["out-of-resource"] = out_of_resource;
        }
        return children.at("out-of-resource");
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering != nullptr)
        {
            children["prefix-filtering"] = prefix_filtering;
        }
        else
        {
            prefix_filtering = std::make_shared<RsvpStandby::Counters::PrefixFiltering>();
            prefix_filtering->parent = this;
            children["prefix-filtering"] = prefix_filtering;
        }
        return children.at("prefix-filtering");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::get_children()
{
    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
    }

    if(children.find("event-syncs") == children.end())
    {
        if(event_syncs != nullptr)
        {
            children["event-syncs"] = event_syncs;
        }
    }

    if(children.find("interface-events") == children.end())
    {
        if(interface_events != nullptr)
        {
            children["interface-events"] = interface_events;
        }
    }

    if(children.find("interface-messages") == children.end())
    {
        if(interface_messages != nullptr)
        {
            children["interface-messages"] = interface_messages;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("message-summary") == children.end())
    {
        if(message_summary != nullptr)
        {
            children["message-summary"] = message_summary;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("out-of-resource") == children.end())
    {
        if(out_of_resource != nullptr)
        {
            children["out-of-resource"] = out_of_resource;
        }
    }

    if(children.find("prefix-filtering") == children.end())
    {
        if(prefix_filtering != nullptr)
        {
            children["prefix-filtering"] = prefix_filtering;
        }
    }

    return children;
}

void RsvpStandby::Counters::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessages()
{
    yang_name = "interface-messages"; yang_parent_name = "counters";
}

RsvpStandby::Counters::InterfaceMessages::~InterfaceMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::has_data() const
{
    for (std::size_t index=0; index<interface_message.size(); index++)
    {
        if(interface_message[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::InterfaceMessages::has_operation() const
{
    for (std::size_t index=0; index<interface_message.size(); index++)
    {
        if(interface_message[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Counters::InterfaceMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-message")
    {
        for(auto const & c : interface_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage>();
        c->parent = this;
        interface_message.push_back(std::move(c));
        children[segment_path] = interface_message.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceMessages::get_children()
{
    for (auto const & c : interface_message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Counters::InterfaceMessages::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::InterfaceMessage()
    :
    interface_name{YType::str, "interface-name"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
    	,
    bundle_received_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>())
	,bundle_transmitted_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>())
	,received_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>())
	,transmitted_messages(std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>())
{
    bundle_received_messages->parent = this;
    children["bundle-received-messages"] = bundle_received_messages;

    bundle_transmitted_messages->parent = this;
    children["bundle-transmitted-messages"] = bundle_transmitted_messages;

    received_messages->parent = this;
    children["received-messages"] = received_messages;

    transmitted_messages->parent = this;
    children["transmitted-messages"] = transmitted_messages;

    yang_name = "interface-message"; yang_parent_name = "interface-messages";
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::~InterfaceMessage()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::has_data() const
{
    return interface_name.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| retransmitted_messages.is_set
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data())
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data());
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(out_of_order_messages.operation)
	|| is_set(rate_limited_messages.operation)
	|| is_set(retransmitted_messages.operation)
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation())
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation());
}

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-message" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/interface-messages/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.operation)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.operation)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.operation)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages != nullptr)
        {
            children["bundle-received-messages"] = bundle_received_messages;
        }
        else
        {
            bundle_received_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>();
            bundle_received_messages->parent = this;
            children["bundle-received-messages"] = bundle_received_messages;
        }
        return children.at("bundle-received-messages");
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages != nullptr)
        {
            children["bundle-transmitted-messages"] = bundle_transmitted_messages;
        }
        else
        {
            bundle_transmitted_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>();
            bundle_transmitted_messages->parent = this;
            children["bundle-transmitted-messages"] = bundle_transmitted_messages;
        }
        return children.at("bundle-transmitted-messages");
    }

    if(child_yang_name == "received-messages")
    {
        if(received_messages != nullptr)
        {
            children["received-messages"] = received_messages;
        }
        else
        {
            received_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>();
            received_messages->parent = this;
            children["received-messages"] = received_messages;
        }
        return children.at("received-messages");
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages != nullptr)
        {
            children["transmitted-messages"] = transmitted_messages;
        }
        else
        {
            transmitted_messages = std::make_shared<RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>();
            transmitted_messages->parent = this;
            children["transmitted-messages"] = transmitted_messages;
        }
        return children.at("transmitted-messages");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::get_children()
{
    if(children.find("bundle-received-messages") == children.end())
    {
        if(bundle_received_messages != nullptr)
        {
            children["bundle-received-messages"] = bundle_received_messages;
        }
    }

    if(children.find("bundle-transmitted-messages") == children.end())
    {
        if(bundle_transmitted_messages != nullptr)
        {
            children["bundle-transmitted-messages"] = bundle_transmitted_messages;
        }
    }

    if(children.find("received-messages") == children.end())
    {
        if(received_messages != nullptr)
        {
            children["received-messages"] = received_messages;
        }
    }

    if(children.find("transmitted-messages") == children.end())
    {
        if(transmitted_messages != nullptr)
        {
            children["transmitted-messages"] = transmitted_messages;
        }
    }

    return children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
    }
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::ReceivedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "received-messages"; yang_parent_name = "interface-message";
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::~ReceivedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedMessages' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::TransmittedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "transmitted-messages"; yang_parent_name = "interface-message";
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::~TransmittedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransmittedMessages' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::BundleReceivedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "bundle-received-messages"; yang_parent_name = "interface-message";
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleReceivedMessages' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::BundleTransmittedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "bundle-transmitted-messages"; yang_parent_name = "interface-message";
}

RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleTransmittedMessages' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::MessageSummary::MessageSummary()
    :
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
    	,
    bundle_received_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::BundleReceivedMessages>())
	,bundle_transmitted_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages>())
	,received_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::ReceivedMessages>())
	,transmitted_messages(std::make_shared<RsvpStandby::Counters::MessageSummary::TransmittedMessages>())
{
    bundle_received_messages->parent = this;
    children["bundle-received-messages"] = bundle_received_messages;

    bundle_transmitted_messages->parent = this;
    children["bundle-transmitted-messages"] = bundle_transmitted_messages;

    received_messages->parent = this;
    children["received-messages"] = received_messages;

    transmitted_messages->parent = this;
    children["transmitted-messages"] = transmitted_messages;

    yang_name = "message-summary"; yang_parent_name = "counters";
}

RsvpStandby::Counters::MessageSummary::~MessageSummary()
{
}

bool RsvpStandby::Counters::MessageSummary::has_data() const
{
    return out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| retransmitted_messages.is_set
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data())
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data());
}

bool RsvpStandby::Counters::MessageSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(out_of_order_messages.operation)
	|| is_set(rate_limited_messages.operation)
	|| is_set(retransmitted_messages.operation)
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation())
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation());
}

std::string RsvpStandby::Counters::MessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-summary";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::MessageSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_of_order_messages.is_set || is_set(out_of_order_messages.operation)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.operation)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.operation)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::MessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages != nullptr)
        {
            children["bundle-received-messages"] = bundle_received_messages;
        }
        else
        {
            bundle_received_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::BundleReceivedMessages>();
            bundle_received_messages->parent = this;
            children["bundle-received-messages"] = bundle_received_messages;
        }
        return children.at("bundle-received-messages");
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages != nullptr)
        {
            children["bundle-transmitted-messages"] = bundle_transmitted_messages;
        }
        else
        {
            bundle_transmitted_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages>();
            bundle_transmitted_messages->parent = this;
            children["bundle-transmitted-messages"] = bundle_transmitted_messages;
        }
        return children.at("bundle-transmitted-messages");
    }

    if(child_yang_name == "received-messages")
    {
        if(received_messages != nullptr)
        {
            children["received-messages"] = received_messages;
        }
        else
        {
            received_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::ReceivedMessages>();
            received_messages->parent = this;
            children["received-messages"] = received_messages;
        }
        return children.at("received-messages");
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages != nullptr)
        {
            children["transmitted-messages"] = transmitted_messages;
        }
        else
        {
            transmitted_messages = std::make_shared<RsvpStandby::Counters::MessageSummary::TransmittedMessages>();
            transmitted_messages->parent = this;
            children["transmitted-messages"] = transmitted_messages;
        }
        return children.at("transmitted-messages");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::MessageSummary::get_children()
{
    if(children.find("bundle-received-messages") == children.end())
    {
        if(bundle_received_messages != nullptr)
        {
            children["bundle-received-messages"] = bundle_received_messages;
        }
    }

    if(children.find("bundle-transmitted-messages") == children.end())
    {
        if(bundle_transmitted_messages != nullptr)
        {
            children["bundle-transmitted-messages"] = bundle_transmitted_messages;
        }
    }

    if(children.find("received-messages") == children.end())
    {
        if(received_messages != nullptr)
        {
            children["received-messages"] = received_messages;
        }
    }

    if(children.find("transmitted-messages") == children.end())
    {
        if(transmitted_messages != nullptr)
        {
            children["transmitted-messages"] = transmitted_messages;
        }
    }

    return children;
}

void RsvpStandby::Counters::MessageSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
    }
}

RsvpStandby::Counters::MessageSummary::ReceivedMessages::ReceivedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "received-messages"; yang_parent_name = "message-summary";
}

RsvpStandby::Counters::MessageSummary::ReceivedMessages::~ReceivedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::ReceivedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::MessageSummary::ReceivedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::MessageSummary::ReceivedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::MessageSummary::ReceivedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::MessageSummary::TransmittedMessages::TransmittedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "transmitted-messages"; yang_parent_name = "message-summary";
}

RsvpStandby::Counters::MessageSummary::TransmittedMessages::~TransmittedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::TransmittedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::MessageSummary::TransmittedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::MessageSummary::TransmittedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::MessageSummary::TransmittedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::BundleReceivedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "bundle-received-messages"; yang_parent_name = "message-summary";
}

RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::MessageSummary::BundleReceivedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

const Enum::YLeaf RsvpMgmtAssociationEnum::none {0, "none"};
const Enum::YLeaf RsvpMgmtAssociationEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf RsvpMgmtAssociationEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf RsvpMgmtAssociationEnum::extended_ipv4 {3, "extended-ipv4"};
const Enum::YLeaf RsvpMgmtAssociationEnum::extended_ipv6 {4, "extended-ipv6"};

const Enum::YLeaf RsvpMgmtEroSubobjEnum::rsvp_mgmt_ero_type_ipv4 {1, "rsvp-mgmt-ero-type-ipv4"};
const Enum::YLeaf RsvpMgmtEroSubobjEnum::rsvp_mgmt_ero_type_un_num {4, "rsvp-mgmt-ero-type-un-num"};

const Enum::YLeaf RsvpMgmtQosServiceEnumEnum::rsvp_mgmt_qos_unknown {0, "rsvp-mgmt-qos-unknown"};
const Enum::YLeaf RsvpMgmtQosServiceEnumEnum::rsvp_mgmt_qos_guaranteed {3, "rsvp-mgmt-qos-guaranteed"};
const Enum::YLeaf RsvpMgmtQosServiceEnumEnum::rsvp_mgmt_qos_controlled_load {5, "rsvp-mgmt-qos-controlled-load"};
const Enum::YLeaf RsvpMgmtQosServiceEnumEnum::rsvp_mgmt_qos_qualitative {6, "rsvp-mgmt-qos-qualitative"};

const Enum::YLeaf RsvpMgmtHelloInstanceEnum::active {0, "active"};
const Enum::YLeaf RsvpMgmtHelloInstanceEnum::passive {1, "passive"};

const Enum::YLeaf IgpteLibBwModelEnum::rdm {0, "rdm"};
const Enum::YLeaf IgpteLibBwModelEnum::mam {1, "mam"};
const Enum::YLeaf IgpteLibBwModelEnum::not_set {2, "not-set"};

const Enum::YLeaf RsvpMgmtFrrStateEnumEnum::ready_state {0, "ready-state"};
const Enum::YLeaf RsvpMgmtFrrStateEnumEnum::pending_state {1, "pending-state"};
const Enum::YLeaf RsvpMgmtFrrStateEnumEnum::active_state {2, "active-state"};

const Enum::YLeaf RsvpProcNsrNotReadyReasonEnum::collab_time_out {0, "collab-time-out"};
const Enum::YLeaf RsvpProcNsrNotReadyReasonEnum::collab_conntection_idt {1, "collab-conntection-idt"};
const Enum::YLeaf RsvpProcNsrNotReadyReasonEnum::nsr_peer_not_connected {2, "nsr-peer-not-connected"};
const Enum::YLeaf RsvpProcNsrNotReadyReasonEnum::nsr_peer_not_in_sync {3, "nsr-peer-not-in-sync"};

const Enum::YLeaf RsvpMgmtDsteModesEnum::pre_standard {1, "pre-standard"};
const Enum::YLeaf RsvpMgmtDsteModesEnum::standard {3, "standard"};

const Enum::YLeaf RsvpMgmtRestartStateEnum::done {0, "done"};
const Enum::YLeaf RsvpMgmtRestartStateEnum::recovery {1, "recovery"};
const Enum::YLeaf RsvpMgmtRestartStateEnum::abort {2, "abort"};

const Enum::YLeaf RsvpMgmtReservationTypeEnumEnum::rsvp_mgmt_ff_option {10, "rsvp-mgmt-ff-option"};
const Enum::YLeaf RsvpMgmtReservationTypeEnumEnum::rsvp_mgmt_wf_option {17, "rsvp-mgmt-wf-option"};
const Enum::YLeaf RsvpMgmtReservationTypeEnumEnum::rsvp_mgmt_se_option {18, "rsvp-mgmt-se-option"};

const Enum::YLeaf RsvpMgmtTspecEnum::g709otn {5, "g709otn"};
const Enum::YLeaf RsvpMgmtTspecEnum::intsrv {12, "intsrv"};

const Enum::YLeaf RsvpMgmtAuthDirectionEnum::rsvp_mgmt_auth_direction_send {0, "rsvp-mgmt-auth-direction-send"};
const Enum::YLeaf RsvpMgmtAuthDirectionEnum::rsvp_mgmt_auth_direction_recv {1, "rsvp-mgmt-auth-direction-recv"};

const Enum::YLeaf RsvpMgmtFilterEnum::rsvp_mgmt_filter_type_ipv4 {1, "rsvp-mgmt-filter-type-ipv4"};
const Enum::YLeaf RsvpMgmtFilterEnum::rsvp_mgmt_filter_type_p2mp_lsp_ipv4 {12, "rsvp-mgmt-filter-type-p2mp-lsp-ipv4"};

const Enum::YLeaf RsvpProcRoleEnum::unknown {0, "unknown"};
const Enum::YLeaf RsvpProcRoleEnum::v1_active {1, "v1-active"};
const Enum::YLeaf RsvpProcRoleEnum::v1_standby {2, "v1-standby"};
const Enum::YLeaf RsvpProcRoleEnum::v2_active {3, "v2-active"};
const Enum::YLeaf RsvpProcRoleEnum::v2_standby {4, "v2-standby"};
const Enum::YLeaf RsvpProcRoleEnum::v1_active_post_big_bang {5, "v1-active-post-big-bang"};
const Enum::YLeaf RsvpProcRoleEnum::v1_standby_post_big_bang {6, "v1-standby-post-big-bang"};
const Enum::YLeaf RsvpProcRoleEnum::count {7, "count"};

const Enum::YLeaf RsvpSessionEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf RsvpSessionEnum::p2p_lsp_ipv4 {7, "p2p-lsp-ipv4"};
const Enum::YLeaf RsvpSessionEnum::ouni_ipv4 {9, "ouni-ipv4"};
const Enum::YLeaf RsvpSessionEnum::p2mp_lsp_ipv4 {13, "p2mp-lsp-ipv4"};

const Enum::YLeaf RsvpMgmtHelloStateEnum::hello_state_init {0, "hello-state-init"};
const Enum::YLeaf RsvpMgmtHelloStateEnum::hello_state_up {1, "hello-state-up"};
const Enum::YLeaf RsvpMgmtHelloStateEnum::hello_state_down {2, "hello-state-down"};

const Enum::YLeaf RsvpMgmtFlowSpecEnum::g709otn {5, "g709otn"};

const Enum::YLeaf RsvpMgmtHelloInstanceOwnerEnum::mpls_graceful_restart {0, "mpls-graceful-restart"};
const Enum::YLeaf RsvpMgmtHelloInstanceOwnerEnum::mpls_ouni {1, "mpls-ouni"};

const Enum::YLeaf RsvpMgmtRroSubobjEnum::ipv4rro_type {1, "ipv4rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobjEnum::label_rro_type {3, "label-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobjEnum::unnumbered_rro_type {4, "unnumbered-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobjEnum::srlg_rro_type {34, "srlg-rro-type"};

const Enum::YLeaf RsvpMgmtSessionEnum::rsvp_mgmt_session_type_udp_ipv4 {1, "rsvp-mgmt-session-type-udp-ipv4"};
const Enum::YLeaf RsvpMgmtSessionEnum::rsvp_mgmt_session_type_lsp_ipv4 {7, "rsvp-mgmt-session-type-lsp-ipv4"};
const Enum::YLeaf RsvpMgmtSessionEnum::rsvp_mgmt_session_type_uni_ipv4 {9, "rsvp-mgmt-session-type-uni-ipv4"};
const Enum::YLeaf RsvpMgmtSessionEnum::rsvp_mgmt_session_type_p2mp_lsp_ipv4 {13, "rsvp-mgmt-session-type-p2mp-lsp-ipv4"};

const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::not_applicable {0, "not-applicable"};
const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::wrong_destination_instance {1, "wrong-destination-instance"};
const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::wrong_source_instance {2, "wrong-source-instance"};
const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::hello_missed {3, "hello-missed"};
const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::interface_down {4, "interface-down"};
const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::neighbor_disabled_hello {5, "neighbor-disabled-hello"};
const Enum::YLeaf RsvpMgmtHelloDownReasonEnum::control_channel_down {6, "control-channel-down"};

const Enum::YLeaf RsvpMgmtGenericLabelEnum::rsvp_mgmt_label_type_gmpls {2, "rsvp-mgmt-label-type-gmpls"};

const Enum::YLeaf RsvpMgmtGrAppEnum::ouni {0, "ouni"};
const Enum::YLeaf RsvpMgmtGrAppEnum::gmpls {1, "gmpls"};

const Enum::YLeaf RsvpMgmtAuthChallengeStatusEnum::rsvp_mgmt_auth_cs_not_cfg {0, "rsvp-mgmt-auth-cs-not-cfg"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatusEnum::rsvp_mgmt_auth_cs_completed {1, "rsvp-mgmt-auth-cs-completed"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatusEnum::rsvp_mgmt_auth_cs_in_progress {2, "rsvp-mgmt-auth-cs-in-progress"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatusEnum::rsvp_mgmt_auth_cs_failure {3, "rsvp-mgmt-auth-cs-failure"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatusEnum::rsvp_mgmt_auth_cs_not_supported {4, "rsvp-mgmt-auth-cs-not-supported"};

const Enum::YLeaf RsvpMgmtAuthKiEnum::rsvp_mgmt_auth_ki_type_none {0, "rsvp-mgmt-auth-ki-type-none"};
const Enum::YLeaf RsvpMgmtAuthKiEnum::rsvp_mgmt_auth_ki_type_global {1, "rsvp-mgmt-auth-ki-type-global"};
const Enum::YLeaf RsvpMgmtAuthKiEnum::rsvp_mgmt_auth_ki_type_interface {2, "rsvp-mgmt-auth-ki-type-interface"};
const Enum::YLeaf RsvpMgmtAuthKiEnum::rsvp_mgmt_auth_ki_type_neighbor {3, "rsvp-mgmt-auth-ki-type-neighbor"};

const Enum::YLeaf RsvpTimerStateEnum::rsvp_timer_running_and_sleeping {1, "rsvp-timer-running-and-sleeping"};
const Enum::YLeaf RsvpTimerStateEnum::rsvp_timer_running {2, "rsvp-timer-running"};
const Enum::YLeaf RsvpTimerStateEnum::rsvp_timer_not_running {3, "rsvp-timer-not-running"};

const Enum::YLeaf RsvpSyncStatusEnum::not_ready {0, "not-ready"};
const Enum::YLeaf RsvpSyncStatusEnum::ready {1, "ready"};

const Enum::YLeaf RsvpModeEnum::send {0, "send"};
const Enum::YLeaf RsvpModeEnum::receive {1, "receive"};

const Enum::YLeaf RsvpMgmtEroSubobjStatusEnum::rsvp_mgmt_ero_status_not_available {0, "rsvp-mgmt-ero-status-not-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatusEnum::rsvp_mgmt_ero_status_available {1, "rsvp-mgmt-ero-status-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatusEnum::rsvp_mgmt_ero_status_bw_not_available {2, "rsvp-mgmt-ero-status-bw-not-available"};


}
}

