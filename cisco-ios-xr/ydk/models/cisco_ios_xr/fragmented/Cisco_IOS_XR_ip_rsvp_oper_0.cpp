
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_0.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::Rsvp()
    :
    authentication_briefs(std::make_shared<Rsvp::AuthenticationBriefs>())
	,authentication_details(std::make_shared<Rsvp::AuthenticationDetails>())
	,bw_pool_info(std::make_shared<Rsvp::BwPoolInfo>())
	,controller_briefs(std::make_shared<Rsvp::ControllerBriefs>())
	,controller_detaileds(std::make_shared<Rsvp::ControllerDetaileds>())
	,controller_summaries(std::make_shared<Rsvp::ControllerSummaries>())
	,counters(std::make_shared<Rsvp::Counters>())
	,frr_summary(std::make_shared<Rsvp::FrrSummary>())
	,frrs(std::make_shared<Rsvp::Frrs>())
	,global_neighbor_briefs(std::make_shared<Rsvp::GlobalNeighborBriefs>())
	,global_neighbor_details(std::make_shared<Rsvp::GlobalNeighborDetails>())
	,graceful_restart(std::make_shared<Rsvp::GracefulRestart>())
	,hello_instance_briefs(std::make_shared<Rsvp::HelloInstanceBriefs>())
	,hello_instance_details(std::make_shared<Rsvp::HelloInstanceDetails>())
	,hello_interface_instance_briefs(std::make_shared<Rsvp::HelloInterfaceInstanceBriefs>())
	,hello_interface_instance_details(std::make_shared<Rsvp::HelloInterfaceInstanceDetails>())
	,interface_briefs(std::make_shared<Rsvp::InterfaceBriefs>())
	,interface_detaileds(std::make_shared<Rsvp::InterfaceDetaileds>())
	,interface_neighbor_briefs(std::make_shared<Rsvp::InterfaceNeighborBriefs>())
	,interface_neighbor_details(std::make_shared<Rsvp::InterfaceNeighborDetails>())
	,interface_summaries(std::make_shared<Rsvp::InterfaceSummaries>())
	,issu(std::make_shared<Rsvp::Issu>())
	,nsr(std::make_shared<Rsvp::Nsr>())
	,open_config(std::make_shared<Rsvp::OpenConfig>())
	,psb_briefs(std::make_shared<Rsvp::PsbBriefs>())
	,psb_detaileds(std::make_shared<Rsvp::PsbDetaileds>())
	,pxsb_details(std::make_shared<Rsvp::PxsbDetails>())
	,request_briefs(std::make_shared<Rsvp::RequestBriefs>())
	,request_details(std::make_shared<Rsvp::RequestDetails>())
	,rsb_briefs(std::make_shared<Rsvp::RsbBriefs>())
	,rsb_detaileds(std::make_shared<Rsvp::RsbDetaileds>())
	,rxsb_details(std::make_shared<Rsvp::RxsbDetails>())
	,session_briefs(std::make_shared<Rsvp::SessionBriefs>())
	,session_detaileds(std::make_shared<Rsvp::SessionDetaileds>())
	,summary(std::make_shared<Rsvp::Summary>())
{
    authentication_briefs->parent = this;
    authentication_details->parent = this;
    bw_pool_info->parent = this;
    controller_briefs->parent = this;
    controller_detaileds->parent = this;
    controller_summaries->parent = this;
    counters->parent = this;
    frr_summary->parent = this;
    frrs->parent = this;
    global_neighbor_briefs->parent = this;
    global_neighbor_details->parent = this;
    graceful_restart->parent = this;
    hello_instance_briefs->parent = this;
    hello_instance_details->parent = this;
    hello_interface_instance_briefs->parent = this;
    hello_interface_instance_details->parent = this;
    interface_briefs->parent = this;
    interface_detaileds->parent = this;
    interface_neighbor_briefs->parent = this;
    interface_neighbor_details->parent = this;
    interface_summaries->parent = this;
    issu->parent = this;
    nsr->parent = this;
    open_config->parent = this;
    psb_briefs->parent = this;
    psb_detaileds->parent = this;
    pxsb_details->parent = this;
    request_briefs->parent = this;
    request_details->parent = this;
    rsb_briefs->parent = this;
    rsb_detaileds->parent = this;
    rxsb_details->parent = this;
    session_briefs->parent = this;
    session_detaileds->parent = this;
    summary->parent = this;

    yang_name = "rsvp"; yang_parent_name = "Cisco-IOS-XR-ip-rsvp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Rsvp::~Rsvp()
{
}

bool Rsvp::has_data() const
{
    return (authentication_briefs !=  nullptr && authentication_briefs->has_data())
	|| (authentication_details !=  nullptr && authentication_details->has_data())
	|| (bw_pool_info !=  nullptr && bw_pool_info->has_data())
	|| (controller_briefs !=  nullptr && controller_briefs->has_data())
	|| (controller_detaileds !=  nullptr && controller_detaileds->has_data())
	|| (controller_summaries !=  nullptr && controller_summaries->has_data())
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
	|| (issu !=  nullptr && issu->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (open_config !=  nullptr && open_config->has_data())
	|| (psb_briefs !=  nullptr && psb_briefs->has_data())
	|| (psb_detaileds !=  nullptr && psb_detaileds->has_data())
	|| (pxsb_details !=  nullptr && pxsb_details->has_data())
	|| (request_briefs !=  nullptr && request_briefs->has_data())
	|| (request_details !=  nullptr && request_details->has_data())
	|| (rsb_briefs !=  nullptr && rsb_briefs->has_data())
	|| (rsb_detaileds !=  nullptr && rsb_detaileds->has_data())
	|| (rxsb_details !=  nullptr && rxsb_details->has_data())
	|| (session_briefs !=  nullptr && session_briefs->has_data())
	|| (session_detaileds !=  nullptr && session_detaileds->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication_briefs !=  nullptr && authentication_briefs->has_operation())
	|| (authentication_details !=  nullptr && authentication_details->has_operation())
	|| (bw_pool_info !=  nullptr && bw_pool_info->has_operation())
	|| (controller_briefs !=  nullptr && controller_briefs->has_operation())
	|| (controller_detaileds !=  nullptr && controller_detaileds->has_operation())
	|| (controller_summaries !=  nullptr && controller_summaries->has_operation())
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
	|| (issu !=  nullptr && issu->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (open_config !=  nullptr && open_config->has_operation())
	|| (psb_briefs !=  nullptr && psb_briefs->has_operation())
	|| (psb_detaileds !=  nullptr && psb_detaileds->has_operation())
	|| (pxsb_details !=  nullptr && pxsb_details->has_operation())
	|| (request_briefs !=  nullptr && request_briefs->has_operation())
	|| (request_details !=  nullptr && request_details->has_operation())
	|| (rsb_briefs !=  nullptr && rsb_briefs->has_operation())
	|| (rsb_detaileds !=  nullptr && rsb_detaileds->has_operation())
	|| (rxsb_details !=  nullptr && rxsb_details->has_operation())
	|| (session_briefs !=  nullptr && session_briefs->has_operation())
	|| (session_detaileds !=  nullptr && session_detaileds->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-briefs")
    {
        if(authentication_briefs == nullptr)
        {
            authentication_briefs = std::make_shared<Rsvp::AuthenticationBriefs>();
        }
        return authentication_briefs;
    }

    if(child_yang_name == "authentication-details")
    {
        if(authentication_details == nullptr)
        {
            authentication_details = std::make_shared<Rsvp::AuthenticationDetails>();
        }
        return authentication_details;
    }

    if(child_yang_name == "bw-pool-info")
    {
        if(bw_pool_info == nullptr)
        {
            bw_pool_info = std::make_shared<Rsvp::BwPoolInfo>();
        }
        return bw_pool_info;
    }

    if(child_yang_name == "controller-briefs")
    {
        if(controller_briefs == nullptr)
        {
            controller_briefs = std::make_shared<Rsvp::ControllerBriefs>();
        }
        return controller_briefs;
    }

    if(child_yang_name == "controller-detaileds")
    {
        if(controller_detaileds == nullptr)
        {
            controller_detaileds = std::make_shared<Rsvp::ControllerDetaileds>();
        }
        return controller_detaileds;
    }

    if(child_yang_name == "controller-summaries")
    {
        if(controller_summaries == nullptr)
        {
            controller_summaries = std::make_shared<Rsvp::ControllerSummaries>();
        }
        return controller_summaries;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "frr-summary")
    {
        if(frr_summary == nullptr)
        {
            frr_summary = std::make_shared<Rsvp::FrrSummary>();
        }
        return frr_summary;
    }

    if(child_yang_name == "frrs")
    {
        if(frrs == nullptr)
        {
            frrs = std::make_shared<Rsvp::Frrs>();
        }
        return frrs;
    }

    if(child_yang_name == "global-neighbor-briefs")
    {
        if(global_neighbor_briefs == nullptr)
        {
            global_neighbor_briefs = std::make_shared<Rsvp::GlobalNeighborBriefs>();
        }
        return global_neighbor_briefs;
    }

    if(child_yang_name == "global-neighbor-details")
    {
        if(global_neighbor_details == nullptr)
        {
            global_neighbor_details = std::make_shared<Rsvp::GlobalNeighborDetails>();
        }
        return global_neighbor_details;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Rsvp::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "hello-instance-briefs")
    {
        if(hello_instance_briefs == nullptr)
        {
            hello_instance_briefs = std::make_shared<Rsvp::HelloInstanceBriefs>();
        }
        return hello_instance_briefs;
    }

    if(child_yang_name == "hello-instance-details")
    {
        if(hello_instance_details == nullptr)
        {
            hello_instance_details = std::make_shared<Rsvp::HelloInstanceDetails>();
        }
        return hello_instance_details;
    }

    if(child_yang_name == "hello-interface-instance-briefs")
    {
        if(hello_interface_instance_briefs == nullptr)
        {
            hello_interface_instance_briefs = std::make_shared<Rsvp::HelloInterfaceInstanceBriefs>();
        }
        return hello_interface_instance_briefs;
    }

    if(child_yang_name == "hello-interface-instance-details")
    {
        if(hello_interface_instance_details == nullptr)
        {
            hello_interface_instance_details = std::make_shared<Rsvp::HelloInterfaceInstanceDetails>();
        }
        return hello_interface_instance_details;
    }

    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Rsvp::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interface-detaileds")
    {
        if(interface_detaileds == nullptr)
        {
            interface_detaileds = std::make_shared<Rsvp::InterfaceDetaileds>();
        }
        return interface_detaileds;
    }

    if(child_yang_name == "interface-neighbor-briefs")
    {
        if(interface_neighbor_briefs == nullptr)
        {
            interface_neighbor_briefs = std::make_shared<Rsvp::InterfaceNeighborBriefs>();
        }
        return interface_neighbor_briefs;
    }

    if(child_yang_name == "interface-neighbor-details")
    {
        if(interface_neighbor_details == nullptr)
        {
            interface_neighbor_details = std::make_shared<Rsvp::InterfaceNeighborDetails>();
        }
        return interface_neighbor_details;
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries == nullptr)
        {
            interface_summaries = std::make_shared<Rsvp::InterfaceSummaries>();
        }
        return interface_summaries;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<Rsvp::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Rsvp::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "open-config")
    {
        if(open_config == nullptr)
        {
            open_config = std::make_shared<Rsvp::OpenConfig>();
        }
        return open_config;
    }

    if(child_yang_name == "psb-briefs")
    {
        if(psb_briefs == nullptr)
        {
            psb_briefs = std::make_shared<Rsvp::PsbBriefs>();
        }
        return psb_briefs;
    }

    if(child_yang_name == "psb-detaileds")
    {
        if(psb_detaileds == nullptr)
        {
            psb_detaileds = std::make_shared<Rsvp::PsbDetaileds>();
        }
        return psb_detaileds;
    }

    if(child_yang_name == "pxsb-details")
    {
        if(pxsb_details == nullptr)
        {
            pxsb_details = std::make_shared<Rsvp::PxsbDetails>();
        }
        return pxsb_details;
    }

    if(child_yang_name == "request-briefs")
    {
        if(request_briefs == nullptr)
        {
            request_briefs = std::make_shared<Rsvp::RequestBriefs>();
        }
        return request_briefs;
    }

    if(child_yang_name == "request-details")
    {
        if(request_details == nullptr)
        {
            request_details = std::make_shared<Rsvp::RequestDetails>();
        }
        return request_details;
    }

    if(child_yang_name == "rsb-briefs")
    {
        if(rsb_briefs == nullptr)
        {
            rsb_briefs = std::make_shared<Rsvp::RsbBriefs>();
        }
        return rsb_briefs;
    }

    if(child_yang_name == "rsb-detaileds")
    {
        if(rsb_detaileds == nullptr)
        {
            rsb_detaileds = std::make_shared<Rsvp::RsbDetaileds>();
        }
        return rsb_detaileds;
    }

    if(child_yang_name == "rxsb-details")
    {
        if(rxsb_details == nullptr)
        {
            rxsb_details = std::make_shared<Rsvp::RxsbDetails>();
        }
        return rxsb_details;
    }

    if(child_yang_name == "session-briefs")
    {
        if(session_briefs == nullptr)
        {
            session_briefs = std::make_shared<Rsvp::SessionBriefs>();
        }
        return session_briefs;
    }

    if(child_yang_name == "session-detaileds")
    {
        if(session_detaileds == nullptr)
        {
            session_detaileds = std::make_shared<Rsvp::SessionDetaileds>();
        }
        return session_detaileds;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Rsvp::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_briefs != nullptr)
    {
        children["authentication-briefs"] = authentication_briefs;
    }

    if(authentication_details != nullptr)
    {
        children["authentication-details"] = authentication_details;
    }

    if(bw_pool_info != nullptr)
    {
        children["bw-pool-info"] = bw_pool_info;
    }

    if(controller_briefs != nullptr)
    {
        children["controller-briefs"] = controller_briefs;
    }

    if(controller_detaileds != nullptr)
    {
        children["controller-detaileds"] = controller_detaileds;
    }

    if(controller_summaries != nullptr)
    {
        children["controller-summaries"] = controller_summaries;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(frr_summary != nullptr)
    {
        children["frr-summary"] = frr_summary;
    }

    if(frrs != nullptr)
    {
        children["frrs"] = frrs;
    }

    if(global_neighbor_briefs != nullptr)
    {
        children["global-neighbor-briefs"] = global_neighbor_briefs;
    }

    if(global_neighbor_details != nullptr)
    {
        children["global-neighbor-details"] = global_neighbor_details;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(hello_instance_briefs != nullptr)
    {
        children["hello-instance-briefs"] = hello_instance_briefs;
    }

    if(hello_instance_details != nullptr)
    {
        children["hello-instance-details"] = hello_instance_details;
    }

    if(hello_interface_instance_briefs != nullptr)
    {
        children["hello-interface-instance-briefs"] = hello_interface_instance_briefs;
    }

    if(hello_interface_instance_details != nullptr)
    {
        children["hello-interface-instance-details"] = hello_interface_instance_details;
    }

    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interface_detaileds != nullptr)
    {
        children["interface-detaileds"] = interface_detaileds;
    }

    if(interface_neighbor_briefs != nullptr)
    {
        children["interface-neighbor-briefs"] = interface_neighbor_briefs;
    }

    if(interface_neighbor_details != nullptr)
    {
        children["interface-neighbor-details"] = interface_neighbor_details;
    }

    if(interface_summaries != nullptr)
    {
        children["interface-summaries"] = interface_summaries;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(open_config != nullptr)
    {
        children["open-config"] = open_config;
    }

    if(psb_briefs != nullptr)
    {
        children["psb-briefs"] = psb_briefs;
    }

    if(psb_detaileds != nullptr)
    {
        children["psb-detaileds"] = psb_detaileds;
    }

    if(pxsb_details != nullptr)
    {
        children["pxsb-details"] = pxsb_details;
    }

    if(request_briefs != nullptr)
    {
        children["request-briefs"] = request_briefs;
    }

    if(request_details != nullptr)
    {
        children["request-details"] = request_details;
    }

    if(rsb_briefs != nullptr)
    {
        children["rsb-briefs"] = rsb_briefs;
    }

    if(rsb_detaileds != nullptr)
    {
        children["rsb-detaileds"] = rsb_detaileds;
    }

    if(rxsb_details != nullptr)
    {
        children["rxsb-details"] = rxsb_details;
    }

    if(session_briefs != nullptr)
    {
        children["session-briefs"] = session_briefs;
    }

    if(session_detaileds != nullptr)
    {
        children["session-detaileds"] = session_detaileds;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Rsvp::clone_ptr() const
{
    return std::make_shared<Rsvp>();
}

std::string Rsvp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rsvp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rsvp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rsvp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-briefs" || name == "authentication-details" || name == "bw-pool-info" || name == "controller-briefs" || name == "controller-detaileds" || name == "controller-summaries" || name == "counters" || name == "frr-summary" || name == "frrs" || name == "global-neighbor-briefs" || name == "global-neighbor-details" || name == "graceful-restart" || name == "hello-instance-briefs" || name == "hello-instance-details" || name == "hello-interface-instance-briefs" || name == "hello-interface-instance-details" || name == "interface-briefs" || name == "interface-detaileds" || name == "interface-neighbor-briefs" || name == "interface-neighbor-details" || name == "interface-summaries" || name == "issu" || name == "nsr" || name == "open-config" || name == "psb-briefs" || name == "psb-detaileds" || name == "pxsb-details" || name == "request-briefs" || name == "request-details" || name == "rsb-briefs" || name == "rsb-detaileds" || name == "rxsb-details" || name == "session-briefs" || name == "session-detaileds" || name == "summary")
        return true;
    return false;
}

Rsvp::AuthenticationBriefs::AuthenticationBriefs()
{

    yang_name = "authentication-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::AuthenticationBriefs::~AuthenticationBriefs()
{
}

bool Rsvp::AuthenticationBriefs::has_data() const
{
    for (std::size_t index=0; index<authentication_brief.size(); index++)
    {
        if(authentication_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::AuthenticationBriefs::has_operation() const
{
    for (std::size_t index=0; index<authentication_brief.size(); index++)
    {
        if(authentication_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::AuthenticationBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::AuthenticationBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-brief")
    {
        for(auto const & c : authentication_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::AuthenticationBriefs::AuthenticationBrief>();
        c->parent = this;
        authentication_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : authentication_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::AuthenticationBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::AuthenticationBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::AuthenticationBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-brief")
        return true;
    return false;
}

Rsvp::AuthenticationBriefs::AuthenticationBrief::AuthenticationBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    mode_id{YType::enumeration, "mode-id"},
    interface_name{YType::str, "interface-name"},
    destination_address_xr{YType::str, "destination-address-xr"},
    direction{YType::enumeration, "direction"},
    key_id{YType::uint64, "key-id"},
    key_id_valid{YType::uint32, "key-id-valid"},
    key_source{YType::str, "key-source"},
    key_type{YType::enumeration, "key-type"},
    neighbor_address{YType::str, "neighbor-address"},
    source_address_xr{YType::str, "source-address-xr"}
{

    yang_name = "authentication-brief"; yang_parent_name = "authentication-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::AuthenticationBriefs::AuthenticationBrief::~AuthenticationBrief()
{
}

bool Rsvp::AuthenticationBriefs::AuthenticationBrief::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| mode_id.is_set
	|| interface_name.is_set
	|| destination_address_xr.is_set
	|| direction.is_set
	|| key_id.is_set
	|| key_id_valid.is_set
	|| key_source.is_set
	|| key_type.is_set
	|| neighbor_address.is_set
	|| source_address_xr.is_set;
}

bool Rsvp::AuthenticationBriefs::AuthenticationBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_id_valid.yfilter)
	|| ydk::is_set(key_source.yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter);
}

std::string Rsvp::AuthenticationBriefs::AuthenticationBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/authentication-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::AuthenticationBriefs::AuthenticationBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-brief" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationBriefs::AuthenticationBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.yfilter)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.yfilter)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationBriefs::AuthenticationBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationBriefs::AuthenticationBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::AuthenticationBriefs::AuthenticationBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mode-id")
    {
        mode_id = value;
        mode_id.value_namespace = name_space;
        mode_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid = value;
        key_id_valid.value_namespace = name_space;
        key_id_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-source")
    {
        key_source = value;
        key_source.value_namespace = name_space;
        key_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationBriefs::AuthenticationBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "mode-id")
    {
        mode_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid.yfilter = yfilter;
    }
    if(value_path == "key-source")
    {
        key_source.yfilter = yfilter;
    }
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationBriefs::AuthenticationBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "mode-id" || name == "interface-name" || name == "destination-address-xr" || name == "direction" || name == "key-id" || name == "key-id-valid" || name == "key-source" || name == "key-type" || name == "neighbor-address" || name == "source-address-xr")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetails()
{

    yang_name = "authentication-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::AuthenticationDetails::~AuthenticationDetails()
{
}

bool Rsvp::AuthenticationDetails::has_data() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::AuthenticationDetails::has_operation() const
{
    for (std::size_t index=0; index<authentication_detail.size(); index++)
    {
        if(authentication_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::AuthenticationDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::AuthenticationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-detail")
    {
        for(auto const & c : authentication_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail>();
        c->parent = this;
        authentication_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : authentication_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::AuthenticationDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::AuthenticationDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::AuthenticationDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-detail")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::AuthenticationDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    mode_id{YType::enumeration, "mode-id"},
    interface_name{YType::str, "interface-name"},
    challenge_status{YType::enumeration, "challenge-status"},
    key_digest_info{YType::uint32, "key-digest-info"},
    key_status{YType::uint32, "key-status"},
    lifetime{YType::uint32, "lifetime"},
    lifetime_left{YType::uint32, "lifetime-left"}
    	,
    auth_compact(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact>())
	,direction_info(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo>())
{
    auth_compact->parent = this;
    direction_info->parent = this;

    yang_name = "authentication-detail"; yang_parent_name = "authentication-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::~AuthenticationDetail()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| mode_id.is_set
	|| interface_name.is_set
	|| challenge_status.is_set
	|| key_digest_info.is_set
	|| key_status.is_set
	|| lifetime.is_set
	|| lifetime_left.is_set
	|| (auth_compact !=  nullptr && auth_compact->has_data())
	|| (direction_info !=  nullptr && direction_info->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mode_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(challenge_status.yfilter)
	|| ydk::is_set(key_digest_info.yfilter)
	|| ydk::is_set(key_status.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(lifetime_left.yfilter)
	|| (auth_compact !=  nullptr && auth_compact->has_operation())
	|| (direction_info !=  nullptr && direction_info->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/authentication-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-detail" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[mode-id='" <<mode_id <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mode_id.is_set || is_set(mode_id.yfilter)) leaf_name_data.push_back(mode_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (challenge_status.is_set || is_set(challenge_status.yfilter)) leaf_name_data.push_back(challenge_status.get_name_leafdata());
    if (key_digest_info.is_set || is_set(key_digest_info.yfilter)) leaf_name_data.push_back(key_digest_info.get_name_leafdata());
    if (key_status.is_set || is_set(key_status.yfilter)) leaf_name_data.push_back(key_status.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (lifetime_left.is_set || is_set(lifetime_left.yfilter)) leaf_name_data.push_back(lifetime_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-compact")
    {
        if(auth_compact == nullptr)
        {
            auth_compact = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact>();
        }
        return auth_compact;
    }

    if(child_yang_name == "direction-info")
    {
        if(direction_info == nullptr)
        {
            direction_info = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo>();
        }
        return direction_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_compact != nullptr)
    {
        children["auth-compact"] = auth_compact;
    }

    if(direction_info != nullptr)
    {
        children["direction-info"] = direction_info;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mode-id")
    {
        mode_id = value;
        mode_id.value_namespace = name_space;
        mode_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge-status")
    {
        challenge_status = value;
        challenge_status.value_namespace = name_space;
        challenge_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info = value;
        key_digest_info.value_namespace = name_space;
        key_digest_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-status")
    {
        key_status = value;
        key_status.value_namespace = name_space;
        key_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime-left")
    {
        lifetime_left = value;
        lifetime_left.value_namespace = name_space;
        lifetime_left.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "mode-id")
    {
        mode_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "challenge-status")
    {
        challenge_status.yfilter = yfilter;
    }
    if(value_path == "key-digest-info")
    {
        key_digest_info.yfilter = yfilter;
    }
    if(value_path == "key-status")
    {
        key_status.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "lifetime-left")
    {
        lifetime_left.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-compact" || name == "direction-info" || name == "source-address" || name == "destination-address" || name == "mode-id" || name == "interface-name" || name == "challenge-status" || name == "key-digest-info" || name == "key-status" || name == "lifetime" || name == "lifetime-left")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::AuthCompact()
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

    yang_name = "auth-compact"; yang_parent_name = "authentication-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::~AuthCompact()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_data() const
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

bool Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_id_valid.yfilter)
	|| ydk::is_set(key_source.yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-compact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_id_valid.is_set || is_set(key_id_valid.yfilter)) leaf_name_data.push_back(key_id_valid.get_name_leafdata());
    if (key_source.is_set || is_set(key_source.yfilter)) leaf_name_data.push_back(key_source.get_name_leafdata());
    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid = value;
        key_id_valid.value_namespace = name_space;
        key_id_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-source")
    {
        key_source = value;
        key_source.value_namespace = name_space;
        key_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-id-valid")
    {
        key_id_valid.yfilter = yfilter;
    }
    if(value_path == "key-source")
    {
        key_source.yfilter = yfilter;
    }
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address-xr" || name == "direction" || name == "key-id" || name == "key-id-valid" || name == "key-source" || name == "key-type" || name == "neighbor-address" || name == "source-address-xr")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::DirectionInfo()
    :
    auth_direction{YType::enumeration, "auth-direction"}
    	,
    receive_info(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>())
	,send_info(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>())
{
    receive_info->parent = this;
    send_info->parent = this;

    yang_name = "direction-info"; yang_parent_name = "authentication-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::~DirectionInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_data() const
{
    return auth_direction.is_set
	|| (receive_info !=  nullptr && receive_info->has_data())
	|| (send_info !=  nullptr && send_info->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_direction.yfilter)
	|| (receive_info !=  nullptr && receive_info->has_operation())
	|| (send_info !=  nullptr && send_info->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_direction.is_set || is_set(auth_direction.yfilter)) leaf_name_data.push_back(auth_direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive-info")
    {
        if(receive_info == nullptr)
        {
            receive_info = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo>();
        }
        return receive_info;
    }

    if(child_yang_name == "send-info")
    {
        if(send_info == nullptr)
        {
            send_info = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo>();
        }
        return send_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive_info != nullptr)
    {
        children["receive-info"] = receive_info;
    }

    if(send_info != nullptr)
    {
        children["send-info"] = send_info;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-direction")
    {
        auth_direction = value;
        auth_direction.value_namespace = name_space;
        auth_direction.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-direction")
    {
        auth_direction.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive-info" || name == "send-info" || name == "auth-direction")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::ReceiveInfo()
    :
    sequence{YType::uint64, "sequence"},
    sequence_window{YType::uint64, "sequence-window"},
    sequence_window_count{YType::uint32, "sequence-window-count"},
    sequence_window_size{YType::uint32, "sequence-window-size"}
    	,
    counters(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>())
{
    counters->parent = this;

    yang_name = "receive-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::~ReceiveInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_data() const
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

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_operation() const
{
    for (auto const & leaf : sequence_window.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(sequence_window.yfilter)
	|| ydk::is_set(sequence_window_count.yfilter)
	|| ydk::is_set(sequence_window_size.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (sequence_window_count.is_set || is_set(sequence_window_count.yfilter)) leaf_name_data.push_back(sequence_window_count.get_name_leafdata());
    if (sequence_window_size.is_set || is_set(sequence_window_size.yfilter)) leaf_name_data.push_back(sequence_window_size.get_name_leafdata());

    auto sequence_window_name_datas = sequence_window.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sequence_window_name_datas.begin(), sequence_window_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.append(value);
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count = value;
        sequence_window_count.value_namespace = name_space;
        sequence_window_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size = value;
        sequence_window_size.value_namespace = name_space;
        sequence_window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "sequence-window")
    {
        sequence_window.yfilter = yfilter;
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count.yfilter = yfilter;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence" || name == "sequence-window" || name == "sequence-window-count" || name == "sequence-window-size")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::Counters()
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

    yang_name = "counters"; yang_parent_name = "receive-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::~Counters()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_data() const
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

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_received_bad_digest.yfilter)
	|| ydk::is_set(authentication_received_bad_message_format.yfilter)
	|| ydk::is_set(authentication_received_challenge_response.yfilter)
	|| ydk::is_set(authentication_received_challenge_timeouts.yfilter)
	|| ydk::is_set(authentication_received_challenges_resent.yfilter)
	|| ydk::is_set(authentication_received_challenges_response_duplicate.yfilter)
	|| ydk::is_set(authentication_received_challenges_sent.yfilter)
	|| ydk::is_set(authentication_received_during_challenge.yfilter)
	|| ydk::is_set(authentication_received_incomplete.yfilter)
	|| ydk::is_set(authentication_received_no_integrity.yfilter)
	|| ydk::is_set(authentication_received_response_late.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_duplicate.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_outof_range.yfilter)
	|| ydk::is_set(authentication_received_valid_messages.yfilter)
	|| ydk::is_set(authentication_received_wrong_challenges_response.yfilter)
	|| ydk::is_set(authentication_received_wrong_digest_type.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_received_bad_digest.is_set || is_set(authentication_received_bad_digest.yfilter)) leaf_name_data.push_back(authentication_received_bad_digest.get_name_leafdata());
    if (authentication_received_bad_message_format.is_set || is_set(authentication_received_bad_message_format.yfilter)) leaf_name_data.push_back(authentication_received_bad_message_format.get_name_leafdata());
    if (authentication_received_challenge_response.is_set || is_set(authentication_received_challenge_response.yfilter)) leaf_name_data.push_back(authentication_received_challenge_response.get_name_leafdata());
    if (authentication_received_challenge_timeouts.is_set || is_set(authentication_received_challenge_timeouts.yfilter)) leaf_name_data.push_back(authentication_received_challenge_timeouts.get_name_leafdata());
    if (authentication_received_challenges_resent.is_set || is_set(authentication_received_challenges_resent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_resent.get_name_leafdata());
    if (authentication_received_challenges_response_duplicate.is_set || is_set(authentication_received_challenges_response_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_challenges_response_duplicate.get_name_leafdata());
    if (authentication_received_challenges_sent.is_set || is_set(authentication_received_challenges_sent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_sent.get_name_leafdata());
    if (authentication_received_during_challenge.is_set || is_set(authentication_received_during_challenge.yfilter)) leaf_name_data.push_back(authentication_received_during_challenge.get_name_leafdata());
    if (authentication_received_incomplete.is_set || is_set(authentication_received_incomplete.yfilter)) leaf_name_data.push_back(authentication_received_incomplete.get_name_leafdata());
    if (authentication_received_no_integrity.is_set || is_set(authentication_received_no_integrity.yfilter)) leaf_name_data.push_back(authentication_received_no_integrity.get_name_leafdata());
    if (authentication_received_response_late.is_set || is_set(authentication_received_response_late.yfilter)) leaf_name_data.push_back(authentication_received_response_late.get_name_leafdata());
    if (authentication_received_sequence_number_duplicate.is_set || is_set(authentication_received_sequence_number_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_duplicate.get_name_leafdata());
    if (authentication_received_sequence_number_outof_range.is_set || is_set(authentication_received_sequence_number_outof_range.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_outof_range.get_name_leafdata());
    if (authentication_received_valid_messages.is_set || is_set(authentication_received_valid_messages.yfilter)) leaf_name_data.push_back(authentication_received_valid_messages.get_name_leafdata());
    if (authentication_received_wrong_challenges_response.is_set || is_set(authentication_received_wrong_challenges_response.yfilter)) leaf_name_data.push_back(authentication_received_wrong_challenges_response.get_name_leafdata());
    if (authentication_received_wrong_digest_type.is_set || is_set(authentication_received_wrong_digest_type.yfilter)) leaf_name_data.push_back(authentication_received_wrong_digest_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest = value;
        authentication_received_bad_digest.value_namespace = name_space;
        authentication_received_bad_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format = value;
        authentication_received_bad_message_format.value_namespace = name_space;
        authentication_received_bad_message_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response = value;
        authentication_received_challenge_response.value_namespace = name_space;
        authentication_received_challenge_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts = value;
        authentication_received_challenge_timeouts.value_namespace = name_space;
        authentication_received_challenge_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent = value;
        authentication_received_challenges_resent.value_namespace = name_space;
        authentication_received_challenges_resent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate = value;
        authentication_received_challenges_response_duplicate.value_namespace = name_space;
        authentication_received_challenges_response_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent = value;
        authentication_received_challenges_sent.value_namespace = name_space;
        authentication_received_challenges_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge = value;
        authentication_received_during_challenge.value_namespace = name_space;
        authentication_received_during_challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete = value;
        authentication_received_incomplete.value_namespace = name_space;
        authentication_received_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity = value;
        authentication_received_no_integrity.value_namespace = name_space;
        authentication_received_no_integrity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late = value;
        authentication_received_response_late.value_namespace = name_space;
        authentication_received_response_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate = value;
        authentication_received_sequence_number_duplicate.value_namespace = name_space;
        authentication_received_sequence_number_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range = value;
        authentication_received_sequence_number_outof_range.value_namespace = name_space;
        authentication_received_sequence_number_outof_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages = value;
        authentication_received_valid_messages.value_namespace = name_space;
        authentication_received_valid_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response = value;
        authentication_received_wrong_challenges_response.value_namespace = name_space;
        authentication_received_wrong_challenges_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type = value;
        authentication_received_wrong_digest_type.value_namespace = name_space;
        authentication_received_wrong_digest_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest.yfilter = yfilter;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge.yfilter = yfilter;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete.yfilter = yfilter;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity.yfilter = yfilter;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range.yfilter = yfilter;
    }
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-received-bad-digest" || name == "authentication-received-bad-message-format" || name == "authentication-received-challenge-response" || name == "authentication-received-challenge-timeouts" || name == "authentication-received-challenges-resent" || name == "authentication-received-challenges-response-duplicate" || name == "authentication-received-challenges-sent" || name == "authentication-received-during-challenge" || name == "authentication-received-incomplete" || name == "authentication-received-no-integrity" || name == "authentication-received-response-late" || name == "authentication-received-sequence-number-duplicate" || name == "authentication-received-sequence-number-outof-range" || name == "authentication-received-valid-messages" || name == "authentication-received-wrong-challenges-response" || name == "authentication-received-wrong-digest-type")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::SendInfo()
    :
    sequence{YType::uint64, "sequence"}
    	,
    counters(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>())
{
    counters->parent = this;

    yang_name = "send-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::~SendInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_data() const
{
    return sequence.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::Counters()
    :
    authentication_challenge_responses_sent{YType::uint32, "authentication-challenge-responses-sent"},
    authentication_failures{YType::uint32, "authentication-failures"},
    authentication_send_challenges_received{YType::uint32, "authentication-send-challenges-received"},
    authentication_sent{YType::uint32, "authentication-sent"}
{

    yang_name = "counters"; yang_parent_name = "send-info"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::~Counters()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_data() const
{
    return authentication_challenge_responses_sent.is_set
	|| authentication_failures.is_set
	|| authentication_send_challenges_received.is_set
	|| authentication_sent.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_challenge_responses_sent.yfilter)
	|| ydk::is_set(authentication_failures.yfilter)
	|| ydk::is_set(authentication_send_challenges_received.yfilter)
	|| ydk::is_set(authentication_sent.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_challenge_responses_sent.is_set || is_set(authentication_challenge_responses_sent.yfilter)) leaf_name_data.push_back(authentication_challenge_responses_sent.get_name_leafdata());
    if (authentication_failures.is_set || is_set(authentication_failures.yfilter)) leaf_name_data.push_back(authentication_failures.get_name_leafdata());
    if (authentication_send_challenges_received.is_set || is_set(authentication_send_challenges_received.yfilter)) leaf_name_data.push_back(authentication_send_challenges_received.get_name_leafdata());
    if (authentication_sent.is_set || is_set(authentication_sent.yfilter)) leaf_name_data.push_back(authentication_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent = value;
        authentication_challenge_responses_sent.value_namespace = name_space;
        authentication_challenge_responses_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures = value;
        authentication_failures.value_namespace = name_space;
        authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received = value;
        authentication_send_challenges_received.value_namespace = name_space;
        authentication_send_challenges_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-sent")
    {
        authentication_sent = value;
        authentication_sent.value_namespace = name_space;
        authentication_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures.yfilter = yfilter;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received.yfilter = yfilter;
    }
    if(value_path == "authentication-sent")
    {
        authentication_sent.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-challenge-responses-sent" || name == "authentication-failures" || name == "authentication-send-challenges-received" || name == "authentication-sent")
        return true;
    return false;
}

Rsvp::BwPoolInfo::BwPoolInfo()
    :
    bandwidth_configuration_model{YType::enumeration, "bandwidth-configuration-model"},
    bc0_percent{YType::uint32, "bc0-percent"},
    bc1_percent{YType::uint32, "bc1-percent"},
    is_bc0_percent_configured{YType::boolean, "is-bc0-percent-configured"},
    is_bc1_percent_configured{YType::boolean, "is-bc1-percent-configured"},
    is_max_res_pool_percent_configured{YType::boolean, "is-max-res-pool-percent-configured"},
    max_res_pool_percent{YType::uint32, "max-res-pool-percent"}
{

    yang_name = "bw-pool-info"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::BwPoolInfo::~BwPoolInfo()
{
}

bool Rsvp::BwPoolInfo::has_data() const
{
    return bandwidth_configuration_model.is_set
	|| bc0_percent.is_set
	|| bc1_percent.is_set
	|| is_bc0_percent_configured.is_set
	|| is_bc1_percent_configured.is_set
	|| is_max_res_pool_percent_configured.is_set
	|| max_res_pool_percent.is_set;
}

bool Rsvp::BwPoolInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_configuration_model.yfilter)
	|| ydk::is_set(bc0_percent.yfilter)
	|| ydk::is_set(bc1_percent.yfilter)
	|| ydk::is_set(is_bc0_percent_configured.yfilter)
	|| ydk::is_set(is_bc1_percent_configured.yfilter)
	|| ydk::is_set(is_max_res_pool_percent_configured.yfilter)
	|| ydk::is_set(max_res_pool_percent.yfilter);
}

std::string Rsvp::BwPoolInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::BwPoolInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-pool-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::BwPoolInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_configuration_model.is_set || is_set(bandwidth_configuration_model.yfilter)) leaf_name_data.push_back(bandwidth_configuration_model.get_name_leafdata());
    if (bc0_percent.is_set || is_set(bc0_percent.yfilter)) leaf_name_data.push_back(bc0_percent.get_name_leafdata());
    if (bc1_percent.is_set || is_set(bc1_percent.yfilter)) leaf_name_data.push_back(bc1_percent.get_name_leafdata());
    if (is_bc0_percent_configured.is_set || is_set(is_bc0_percent_configured.yfilter)) leaf_name_data.push_back(is_bc0_percent_configured.get_name_leafdata());
    if (is_bc1_percent_configured.is_set || is_set(is_bc1_percent_configured.yfilter)) leaf_name_data.push_back(is_bc1_percent_configured.get_name_leafdata());
    if (is_max_res_pool_percent_configured.is_set || is_set(is_max_res_pool_percent_configured.yfilter)) leaf_name_data.push_back(is_max_res_pool_percent_configured.get_name_leafdata());
    if (max_res_pool_percent.is_set || is_set(max_res_pool_percent.yfilter)) leaf_name_data.push_back(max_res_pool_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::BwPoolInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::BwPoolInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::BwPoolInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-configuration-model")
    {
        bandwidth_configuration_model = value;
        bandwidth_configuration_model.value_namespace = name_space;
        bandwidth_configuration_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc0-percent")
    {
        bc0_percent = value;
        bc0_percent.value_namespace = name_space;
        bc0_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent = value;
        bc1_percent.value_namespace = name_space;
        bc1_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bc0-percent-configured")
    {
        is_bc0_percent_configured = value;
        is_bc0_percent_configured.value_namespace = name_space;
        is_bc0_percent_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bc1-percent-configured")
    {
        is_bc1_percent_configured = value;
        is_bc1_percent_configured.value_namespace = name_space;
        is_bc1_percent_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-res-pool-percent-configured")
    {
        is_max_res_pool_percent_configured = value;
        is_max_res_pool_percent_configured.value_namespace = name_space;
        is_max_res_pool_percent_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-res-pool-percent")
    {
        max_res_pool_percent = value;
        max_res_pool_percent.value_namespace = name_space;
        max_res_pool_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::BwPoolInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-configuration-model")
    {
        bandwidth_configuration_model.yfilter = yfilter;
    }
    if(value_path == "bc0-percent")
    {
        bc0_percent.yfilter = yfilter;
    }
    if(value_path == "bc1-percent")
    {
        bc1_percent.yfilter = yfilter;
    }
    if(value_path == "is-bc0-percent-configured")
    {
        is_bc0_percent_configured.yfilter = yfilter;
    }
    if(value_path == "is-bc1-percent-configured")
    {
        is_bc1_percent_configured.yfilter = yfilter;
    }
    if(value_path == "is-max-res-pool-percent-configured")
    {
        is_max_res_pool_percent_configured.yfilter = yfilter;
    }
    if(value_path == "max-res-pool-percent")
    {
        max_res_pool_percent.yfilter = yfilter;
    }
}

bool Rsvp::BwPoolInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-configuration-model" || name == "bc0-percent" || name == "bc1-percent" || name == "is-bc0-percent-configured" || name == "is-bc1-percent-configured" || name == "is-max-res-pool-percent-configured" || name == "max-res-pool-percent")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBriefs()
{

    yang_name = "controller-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerBriefs::~ControllerBriefs()
{
}

bool Rsvp::ControllerBriefs::has_data() const
{
    for (std::size_t index=0; index<controller_brief.size(); index++)
    {
        if(controller_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::ControllerBriefs::has_operation() const
{
    for (std::size_t index=0; index<controller_brief.size(); index++)
    {
        if(controller_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::ControllerBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-brief")
    {
        for(auto const & c : controller_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief>();
        c->parent = this;
        controller_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::ControllerBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::ControllerBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::ControllerBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-brief")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::ControllerBrief()
    :
    controller_name{YType::str, "controller-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    bandwidth_information(std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "controller-brief"; yang_parent_name = "controller-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerBriefs::ControllerBrief::~ControllerBrief()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::has_data() const
{
    return controller_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::ControllerBriefs::ControllerBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::ControllerBriefs::ControllerBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/controller-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerBriefs::ControllerBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-brief" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerBriefs::ControllerBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerBriefs::ControllerBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    return children;
}

void Rsvp::ControllerBriefs::ControllerBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "controller-name" || name == "interface-name-xr")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "controller-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetaileds()
{

    yang_name = "controller-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerDetaileds::~ControllerDetaileds()
{
}

bool Rsvp::ControllerDetaileds::has_data() const
{
    for (std::size_t index=0; index<controller_detailed.size(); index++)
    {
        if(controller_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::ControllerDetaileds::has_operation() const
{
    for (std::size_t index=0; index<controller_detailed.size(); index++)
    {
        if(controller_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::ControllerDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-detailed")
    {
        for(auto const & c : controller_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed>();
        c->parent = this;
        controller_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller_detailed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::ControllerDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::ControllerDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::ControllerDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-detailed")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::ControllerDetailed()
    :
    controller_name{YType::str, "controller-name"},
    ack_hold_time{YType::uint32, "ack-hold-time"},
    ack_max_size{YType::uint32, "ack-max-size"},
    bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
    expiry_drops_tolerated{YType::int32, "expiry-drops-tolerated"},
    expiry_interval{YType::int32, "expiry-interval"},
    expiry_states{YType::int32, "expiry-states"},
    expiry_timer_state{YType::enumeration, "expiry-timer-state"},
    integrity_receive_password{YType::str, "integrity-receive-password"},
    integrity_receive_password_optional{YType::uint8, "integrity-receive-password-optional"},
    integrity_send_password{YType::str, "integrity-send-password"},
    interface_name_xr{YType::str, "interface-name-xr"},
    out_of_band_expiry_drops_tolerated{YType::uint32, "out-of-band-expiry-drops-tolerated"},
    out_of_band_refresh_interval{YType::uint32, "out-of-band-refresh-interval"},
    pacing_interval{YType::uint32, "pacing-interval"},
    pacing_message_rate{YType::uint32, "pacing-message-rate"},
    pacing_messages{YType::int32, "pacing-messages"},
    pacing_timer_state{YType::enumeration, "pacing-timer-state"},
    refresh_interval{YType::int32, "refresh-interval"},
    refresh_timer_state{YType::enumeration, "refresh-timer-state"},
    retransmit_time{YType::uint32, "retransmit-time"},
    signalling_ip_tos{YType::uint8, "signalling-ip-tos"},
    summary_refresh_max_size{YType::uint32, "summary-refresh-max-size"},
    summary_refresh_timer_state{YType::enumeration, "summary-refresh-timer-state"}
    	,
    bandwidth_information(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation>())
	,flags(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::Flags>())
{
    bandwidth_information->parent = this;
    flags->parent = this;

    yang_name = "controller-detailed"; yang_parent_name = "controller-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::~ControllerDetailed()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::has_data() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_data())
            return true;
    }
    return controller_name.is_set
	|| ack_hold_time.is_set
	|| ack_max_size.is_set
	|| bundle_message_max_size.is_set
	|| expiry_drops_tolerated.is_set
	|| expiry_interval.is_set
	|| expiry_states.is_set
	|| expiry_timer_state.is_set
	|| integrity_receive_password.is_set
	|| integrity_receive_password_optional.is_set
	|| integrity_send_password.is_set
	|| interface_name_xr.is_set
	|| out_of_band_expiry_drops_tolerated.is_set
	|| out_of_band_refresh_interval.is_set
	|| pacing_interval.is_set
	|| pacing_message_rate.is_set
	|| pacing_messages.is_set
	|| pacing_timer_state.is_set
	|| refresh_interval.is_set
	|| refresh_timer_state.is_set
	|| retransmit_time.is_set
	|| signalling_ip_tos.is_set
	|| summary_refresh_max_size.is_set
	|| summary_refresh_timer_state.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::has_operation() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(ack_hold_time.yfilter)
	|| ydk::is_set(ack_max_size.yfilter)
	|| ydk::is_set(bundle_message_max_size.yfilter)
	|| ydk::is_set(expiry_drops_tolerated.yfilter)
	|| ydk::is_set(expiry_interval.yfilter)
	|| ydk::is_set(expiry_states.yfilter)
	|| ydk::is_set(expiry_timer_state.yfilter)
	|| ydk::is_set(integrity_receive_password.yfilter)
	|| ydk::is_set(integrity_receive_password_optional.yfilter)
	|| ydk::is_set(integrity_send_password.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(out_of_band_expiry_drops_tolerated.yfilter)
	|| ydk::is_set(out_of_band_refresh_interval.yfilter)
	|| ydk::is_set(pacing_interval.yfilter)
	|| ydk::is_set(pacing_message_rate.yfilter)
	|| ydk::is_set(pacing_messages.yfilter)
	|| ydk::is_set(pacing_timer_state.yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| ydk::is_set(refresh_timer_state.yfilter)
	|| ydk::is_set(retransmit_time.yfilter)
	|| ydk::is_set(signalling_ip_tos.yfilter)
	|| ydk::is_set(summary_refresh_max_size.yfilter)
	|| ydk::is_set(summary_refresh_timer_state.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/controller-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-detailed" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.yfilter)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (ack_max_size.is_set || is_set(ack_max_size.yfilter)) leaf_name_data.push_back(ack_max_size.get_name_leafdata());
    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.yfilter)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (expiry_drops_tolerated.is_set || is_set(expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(expiry_drops_tolerated.get_name_leafdata());
    if (expiry_interval.is_set || is_set(expiry_interval.yfilter)) leaf_name_data.push_back(expiry_interval.get_name_leafdata());
    if (expiry_states.is_set || is_set(expiry_states.yfilter)) leaf_name_data.push_back(expiry_states.get_name_leafdata());
    if (expiry_timer_state.is_set || is_set(expiry_timer_state.yfilter)) leaf_name_data.push_back(expiry_timer_state.get_name_leafdata());
    if (integrity_receive_password.is_set || is_set(integrity_receive_password.yfilter)) leaf_name_data.push_back(integrity_receive_password.get_name_leafdata());
    if (integrity_receive_password_optional.is_set || is_set(integrity_receive_password_optional.yfilter)) leaf_name_data.push_back(integrity_receive_password_optional.get_name_leafdata());
    if (integrity_send_password.is_set || is_set(integrity_send_password.yfilter)) leaf_name_data.push_back(integrity_send_password.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (out_of_band_expiry_drops_tolerated.is_set || is_set(out_of_band_expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(out_of_band_expiry_drops_tolerated.get_name_leafdata());
    if (out_of_band_refresh_interval.is_set || is_set(out_of_band_refresh_interval.yfilter)) leaf_name_data.push_back(out_of_band_refresh_interval.get_name_leafdata());
    if (pacing_interval.is_set || is_set(pacing_interval.yfilter)) leaf_name_data.push_back(pacing_interval.get_name_leafdata());
    if (pacing_message_rate.is_set || is_set(pacing_message_rate.yfilter)) leaf_name_data.push_back(pacing_message_rate.get_name_leafdata());
    if (pacing_messages.is_set || is_set(pacing_messages.yfilter)) leaf_name_data.push_back(pacing_messages.get_name_leafdata());
    if (pacing_timer_state.is_set || is_set(pacing_timer_state.yfilter)) leaf_name_data.push_back(pacing_timer_state.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (refresh_timer_state.is_set || is_set(refresh_timer_state.yfilter)) leaf_name_data.push_back(refresh_timer_state.get_name_leafdata());
    if (retransmit_time.is_set || is_set(retransmit_time.yfilter)) leaf_name_data.push_back(retransmit_time.get_name_leafdata());
    if (signalling_ip_tos.is_set || is_set(signalling_ip_tos.yfilter)) leaf_name_data.push_back(signalling_ip_tos.get_name_leafdata());
    if (summary_refresh_max_size.is_set || is_set(summary_refresh_max_size.yfilter)) leaf_name_data.push_back(summary_refresh_max_size.get_name_leafdata());
    if (summary_refresh_timer_state.is_set || is_set(summary_refresh_timer_state.yfilter)) leaf_name_data.push_back(summary_refresh_timer_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "neighbor-array")
    {
        for(auto const & c : neighbor_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray>();
        c->parent = this;
        neighbor_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    for (auto const & c : neighbor_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
        ack_hold_time.value_namespace = name_space;
        ack_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size = value;
        ack_max_size.value_namespace = name_space;
        ack_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
        bundle_message_max_size.value_namespace = name_space;
        bundle_message_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated = value;
        expiry_drops_tolerated.value_namespace = name_space;
        expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval = value;
        expiry_interval.value_namespace = name_space;
        expiry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-states")
    {
        expiry_states = value;
        expiry_states.value_namespace = name_space;
        expiry_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state = value;
        expiry_timer_state.value_namespace = name_space;
        expiry_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password = value;
        integrity_receive_password.value_namespace = name_space;
        integrity_receive_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional = value;
        integrity_receive_password_optional.value_namespace = name_space;
        integrity_receive_password_optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password = value;
        integrity_send_password.value_namespace = name_space;
        integrity_send_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated = value;
        out_of_band_expiry_drops_tolerated.value_namespace = name_space;
        out_of_band_expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval = value;
        out_of_band_refresh_interval.value_namespace = name_space;
        out_of_band_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval = value;
        pacing_interval.value_namespace = name_space;
        pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate = value;
        pacing_message_rate.value_namespace = name_space;
        pacing_message_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages = value;
        pacing_messages.value_namespace = name_space;
        pacing_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state = value;
        pacing_timer_state.value_namespace = name_space;
        pacing_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state = value;
        refresh_timer_state.value_namespace = name_space;
        refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time = value;
        retransmit_time.value_namespace = name_space;
        retransmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos = value;
        signalling_ip_tos.value_namespace = name_space;
        signalling_ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size = value;
        summary_refresh_max_size.value_namespace = name_space;
        summary_refresh_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state = value;
        summary_refresh_timer_state.value_namespace = name_space;
        summary_refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time.yfilter = yfilter;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size.yfilter = yfilter;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size.yfilter = yfilter;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval.yfilter = yfilter;
    }
    if(value_path == "expiry-states")
    {
        expiry_states.yfilter = yfilter;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional.yfilter = yfilter;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval.yfilter = yfilter;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate.yfilter = yfilter;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages.yfilter = yfilter;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state.yfilter = yfilter;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time.yfilter = yfilter;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "flags" || name == "neighbor-array" || name == "controller-name" || name == "ack-hold-time" || name == "ack-max-size" || name == "bundle-message-max-size" || name == "expiry-drops-tolerated" || name == "expiry-interval" || name == "expiry-states" || name == "expiry-timer-state" || name == "integrity-receive-password" || name == "integrity-receive-password-optional" || name == "integrity-send-password" || name == "interface-name-xr" || name == "out-of-band-expiry-drops-tolerated" || name == "out-of-band-refresh-interval" || name == "pacing-interval" || name == "pacing-message-rate" || name == "pacing-messages" || name == "pacing-timer-state" || name == "refresh-interval" || name == "refresh-timer-state" || name == "retransmit-time" || name == "signalling-ip-tos" || name == "summary-refresh-max-size" || name == "summary-refresh-timer-state")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "controller-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::Flags::Flags()
    :
    is_backup_tunnel{YType::boolean, "is-backup-tunnel"},
    is_interface_created{YType::boolean, "is-interface-created"},
    is_interface_down{YType::boolean, "is-interface-down"},
    is_message_bundling_enabled{YType::boolean, "is-message-bundling-enabled"},
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    is_non_default_vrf{YType::boolean, "is-non-default-vrf"},
    is_pacing_enabled{YType::boolean, "is-pacing-enabled"},
    is_refresh_enabled{YType::boolean, "is-refresh-enabled"},
    is_refresh_reduction_enabled{YType::boolean, "is-refresh-reduction-enabled"},
    is_rel_s_refresh_enabled{YType::boolean, "is-rel-s-refresh-enabled"},
    is_rsvp_configured{YType::boolean, "is-rsvp-configured"},
    is_s_refresh_enabled{YType::boolean, "is-s-refresh-enabled"}
{

    yang_name = "flags"; yang_parent_name = "controller-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::Flags::~Flags()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::Flags::has_data() const
{
    return is_backup_tunnel.is_set
	|| is_interface_created.is_set
	|| is_interface_down.is_set
	|| is_message_bundling_enabled.is_set
	|| is_mpls_enabled.is_set
	|| is_non_default_vrf.is_set
	|| is_pacing_enabled.is_set
	|| is_refresh_enabled.is_set
	|| is_refresh_reduction_enabled.is_set
	|| is_rel_s_refresh_enabled.is_set
	|| is_rsvp_configured.is_set
	|| is_s_refresh_enabled.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_backup_tunnel.yfilter)
	|| ydk::is_set(is_interface_created.yfilter)
	|| ydk::is_set(is_interface_down.yfilter)
	|| ydk::is_set(is_message_bundling_enabled.yfilter)
	|| ydk::is_set(is_mpls_enabled.yfilter)
	|| ydk::is_set(is_non_default_vrf.yfilter)
	|| ydk::is_set(is_pacing_enabled.yfilter)
	|| ydk::is_set(is_refresh_enabled.yfilter)
	|| ydk::is_set(is_refresh_reduction_enabled.yfilter)
	|| ydk::is_set(is_rel_s_refresh_enabled.yfilter)
	|| ydk::is_set(is_rsvp_configured.yfilter)
	|| ydk::is_set(is_s_refresh_enabled.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_backup_tunnel.is_set || is_set(is_backup_tunnel.yfilter)) leaf_name_data.push_back(is_backup_tunnel.get_name_leafdata());
    if (is_interface_created.is_set || is_set(is_interface_created.yfilter)) leaf_name_data.push_back(is_interface_created.get_name_leafdata());
    if (is_interface_down.is_set || is_set(is_interface_down.yfilter)) leaf_name_data.push_back(is_interface_down.get_name_leafdata());
    if (is_message_bundling_enabled.is_set || is_set(is_message_bundling_enabled.yfilter)) leaf_name_data.push_back(is_message_bundling_enabled.get_name_leafdata());
    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.yfilter)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (is_non_default_vrf.is_set || is_set(is_non_default_vrf.yfilter)) leaf_name_data.push_back(is_non_default_vrf.get_name_leafdata());
    if (is_pacing_enabled.is_set || is_set(is_pacing_enabled.yfilter)) leaf_name_data.push_back(is_pacing_enabled.get_name_leafdata());
    if (is_refresh_enabled.is_set || is_set(is_refresh_enabled.yfilter)) leaf_name_data.push_back(is_refresh_enabled.get_name_leafdata());
    if (is_refresh_reduction_enabled.is_set || is_set(is_refresh_reduction_enabled.yfilter)) leaf_name_data.push_back(is_refresh_reduction_enabled.get_name_leafdata());
    if (is_rel_s_refresh_enabled.is_set || is_set(is_rel_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_rel_s_refresh_enabled.get_name_leafdata());
    if (is_rsvp_configured.is_set || is_set(is_rsvp_configured.yfilter)) leaf_name_data.push_back(is_rsvp_configured.get_name_leafdata());
    if (is_s_refresh_enabled.is_set || is_set(is_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_s_refresh_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel = value;
        is_backup_tunnel.value_namespace = name_space;
        is_backup_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created = value;
        is_interface_created.value_namespace = name_space;
        is_interface_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down = value;
        is_interface_down.value_namespace = name_space;
        is_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled = value;
        is_message_bundling_enabled.value_namespace = name_space;
        is_message_bundling_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
        is_mpls_enabled.value_namespace = name_space;
        is_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf = value;
        is_non_default_vrf.value_namespace = name_space;
        is_non_default_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled = value;
        is_pacing_enabled.value_namespace = name_space;
        is_pacing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled = value;
        is_refresh_enabled.value_namespace = name_space;
        is_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled = value;
        is_refresh_reduction_enabled.value_namespace = name_space;
        is_refresh_reduction_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled = value;
        is_rel_s_refresh_enabled.value_namespace = name_space;
        is_rel_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured = value;
        is_rsvp_configured.value_namespace = name_space;
        is_rsvp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled = value;
        is_s_refresh_enabled.value_namespace = name_space;
        is_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel.yfilter = yfilter;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created.yfilter = yfilter;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down.yfilter = yfilter;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf.yfilter = yfilter;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured.yfilter = yfilter;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-backup-tunnel" || name == "is-interface-created" || name == "is-interface-down" || name == "is-message-bundling-enabled" || name == "is-mpls-enabled" || name == "is-non-default-vrf" || name == "is-pacing-enabled" || name == "is-refresh-enabled" || name == "is-refresh-reduction-enabled" || name == "is-rel-s-refresh-enabled" || name == "is-rsvp-configured" || name == "is-s-refresh-enabled")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborArray()
    :
    is_neighbor_refresh_reduction_capable{YType::boolean, "is-neighbor-refresh-reduction-capable"},
    message_ids{YType::uint32, "message-ids"},
    neighbor_address{YType::str, "neighbor-address"},
    outgoing_states{YType::int32, "outgoing-states"}
    	,
    expiry_time(std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime>())
{
    expiry_time->parent = this;

    yang_name = "neighbor-array"; yang_parent_name = "controller-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::~NeighborArray()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::has_data() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_data())
            return true;
    }
    return is_neighbor_refresh_reduction_capable.is_set
	|| message_ids.is_set
	|| neighbor_address.is_set
	|| outgoing_states.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data());
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor_refresh_reduction_capable.yfilter)
	|| ydk::is_set(message_ids.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(outgoing_states.yfilter)
	|| (expiry_time !=  nullptr && expiry_time->has_operation());
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor_refresh_reduction_capable.is_set || is_set(is_neighbor_refresh_reduction_capable.yfilter)) leaf_name_data.push_back(is_neighbor_refresh_reduction_capable.get_name_leafdata());
    if (message_ids.is_set || is_set(message_ids.yfilter)) leaf_name_data.push_back(message_ids.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (outgoing_states.is_set || is_set(outgoing_states.yfilter)) leaf_name_data.push_back(outgoing_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "neighbor-message-id")
    {
        for(auto const & c : neighbor_message_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId>();
        c->parent = this;
        neighbor_message_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    for (auto const & c : neighbor_message_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable = value;
        is_neighbor_refresh_reduction_capable.value_namespace = name_space;
        is_neighbor_refresh_reduction_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-ids")
    {
        message_ids = value;
        message_ids.value_namespace = name_space;
        message_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states = value;
        outgoing_states.value_namespace = name_space;
        outgoing_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable.yfilter = yfilter;
    }
    if(value_path == "message-ids")
    {
        message_ids.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time" || name == "neighbor-message-id" || name == "is-neighbor-refresh-reduction-capable" || name == "message-ids" || name == "neighbor-address" || name == "outgoing-states")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::NeighborMessageId()
    :
    message_id{YType::uint32, "message-id"}
{

    yang_name = "neighbor-message-id"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::~NeighborMessageId()
{
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::has_data() const
{
    return message_id.is_set;
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter);
}

std::string Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
}

bool Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id")
        return true;
    return false;
}

Rsvp::ControllerSummaries::ControllerSummaries()
{

    yang_name = "controller-summaries"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerSummaries::~ControllerSummaries()
{
}

bool Rsvp::ControllerSummaries::has_data() const
{
    for (std::size_t index=0; index<controller_summary.size(); index++)
    {
        if(controller_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::ControllerSummaries::has_operation() const
{
    for (std::size_t index=0; index<controller_summary.size(); index++)
    {
        if(controller_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::ControllerSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-summary")
    {
        for(auto const & c : controller_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::ControllerSummaries::ControllerSummary>();
        c->parent = this;
        controller_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::ControllerSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::ControllerSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::ControllerSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-summary")
        return true;
    return false;
}

Rsvp::ControllerSummaries::ControllerSummary::ControllerSummary()
    :
    controller_name{YType::str, "controller-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    paths_in{YType::uint32, "paths-in"},
    paths_out{YType::uint32, "paths-out"},
    reservations_in{YType::uint32, "reservations-in"},
    reservations_out{YType::uint32, "reservations-out"}
    	,
    bandwidth_information(std::make_shared<Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "controller-summary"; yang_parent_name = "controller-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::ControllerSummaries::ControllerSummary::~ControllerSummary()
{
}

bool Rsvp::ControllerSummaries::ControllerSummary::has_data() const
{
    return controller_name.is_set
	|| interface_name_xr.is_set
	|| paths_in.is_set
	|| paths_out.is_set
	|| reservations_in.is_set
	|| reservations_out.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::ControllerSummaries::ControllerSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(paths_in.yfilter)
	|| ydk::is_set(paths_out.yfilter)
	|| ydk::is_set(reservations_in.yfilter)
	|| ydk::is_set(reservations_out.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::ControllerSummaries::ControllerSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/controller-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerSummaries::ControllerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-summary" <<"[controller-name='" <<controller_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerSummaries::ControllerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (paths_in.is_set || is_set(paths_in.yfilter)) leaf_name_data.push_back(paths_in.get_name_leafdata());
    if (paths_out.is_set || is_set(paths_out.yfilter)) leaf_name_data.push_back(paths_out.get_name_leafdata());
    if (reservations_in.is_set || is_set(reservations_in.yfilter)) leaf_name_data.push_back(reservations_in.get_name_leafdata());
    if (reservations_out.is_set || is_set(reservations_out.yfilter)) leaf_name_data.push_back(reservations_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerSummaries::ControllerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerSummaries::ControllerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    return children;
}

void Rsvp::ControllerSummaries::ControllerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-in")
    {
        paths_in = value;
        paths_in.value_namespace = name_space;
        paths_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-out")
    {
        paths_out = value;
        paths_out.value_namespace = name_space;
        paths_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservations-in")
    {
        reservations_in = value;
        reservations_in.value_namespace = name_space;
        reservations_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservations-out")
    {
        reservations_out = value;
        reservations_out.value_namespace = name_space;
        reservations_out.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerSummaries::ControllerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "paths-in")
    {
        paths_in.yfilter = yfilter;
    }
    if(value_path == "paths-out")
    {
        paths_out.yfilter = yfilter;
    }
    if(value_path == "reservations-in")
    {
        reservations_in.yfilter = yfilter;
    }
    if(value_path == "reservations-out")
    {
        reservations_out.yfilter = yfilter;
    }
}

bool Rsvp::ControllerSummaries::ControllerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "controller-name" || name == "interface-name-xr" || name == "paths-in" || name == "paths-out" || name == "reservations-in" || name == "reservations-out")
        return true;
    return false;
}

Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "controller-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

Rsvp::Counters::Counters()
    :
    database(std::make_shared<Rsvp::Counters::Database>())
	,event_syncs(std::make_shared<Rsvp::Counters::EventSyncs>())
	,interface_events(std::make_shared<Rsvp::Counters::InterfaceEvents>())
	,interface_messages(std::make_shared<Rsvp::Counters::InterfaceMessages>())
	,issu(std::make_shared<Rsvp::Counters::Issu>())
	,message_summary(std::make_shared<Rsvp::Counters::MessageSummary>())
	,nsr(std::make_shared<Rsvp::Counters::Nsr>())
	,out_of_resource(std::make_shared<Rsvp::Counters::OutOfResource>())
	,prefix_filtering(std::make_shared<Rsvp::Counters::PrefixFiltering>())
{
    database->parent = this;
    event_syncs->parent = this;
    interface_events->parent = this;
    interface_messages->parent = this;
    issu->parent = this;
    message_summary->parent = this;
    nsr->parent = this;
    out_of_resource->parent = this;
    prefix_filtering->parent = this;

    yang_name = "counters"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::~Counters()
{
}

bool Rsvp::Counters::has_data() const
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

bool Rsvp::Counters::has_operation() const
{
    return is_set(yfilter)
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

std::string Rsvp::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Rsvp::Counters::Database>();
        }
        return database;
    }

    if(child_yang_name == "event-syncs")
    {
        if(event_syncs == nullptr)
        {
            event_syncs = std::make_shared<Rsvp::Counters::EventSyncs>();
        }
        return event_syncs;
    }

    if(child_yang_name == "interface-events")
    {
        if(interface_events == nullptr)
        {
            interface_events = std::make_shared<Rsvp::Counters::InterfaceEvents>();
        }
        return interface_events;
    }

    if(child_yang_name == "interface-messages")
    {
        if(interface_messages == nullptr)
        {
            interface_messages = std::make_shared<Rsvp::Counters::InterfaceMessages>();
        }
        return interface_messages;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<Rsvp::Counters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "message-summary")
    {
        if(message_summary == nullptr)
        {
            message_summary = std::make_shared<Rsvp::Counters::MessageSummary>();
        }
        return message_summary;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Rsvp::Counters::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "out-of-resource")
    {
        if(out_of_resource == nullptr)
        {
            out_of_resource = std::make_shared<Rsvp::Counters::OutOfResource>();
        }
        return out_of_resource;
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering == nullptr)
        {
            prefix_filtering = std::make_shared<Rsvp::Counters::PrefixFiltering>();
        }
        return prefix_filtering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(event_syncs != nullptr)
    {
        children["event-syncs"] = event_syncs;
    }

    if(interface_events != nullptr)
    {
        children["interface-events"] = interface_events;
    }

    if(interface_messages != nullptr)
    {
        children["interface-messages"] = interface_messages;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(message_summary != nullptr)
    {
        children["message-summary"] = message_summary;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(out_of_resource != nullptr)
    {
        children["out-of-resource"] = out_of_resource;
    }

    if(prefix_filtering != nullptr)
    {
        children["prefix-filtering"] = prefix_filtering;
    }

    return children;
}

void Rsvp::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "event-syncs" || name == "interface-events" || name == "interface-messages" || name == "issu" || name == "message-summary" || name == "nsr" || name == "out-of-resource" || name == "prefix-filtering")
        return true;
    return false;
}

Rsvp::Counters::Database::Database()
    :
    incoming_paths{YType::uint32, "incoming-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    interfaces{YType::uint32, "interfaces"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    sessions{YType::uint32, "sessions"}
{

    yang_name = "database"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::Database::~Database()
{
}

bool Rsvp::Counters::Database::has_data() const
{
    return incoming_paths.is_set
	|| incoming_reservations.is_set
	|| interfaces.is_set
	|| outgoing_paths.is_set
	|| outgoing_reservations.is_set
	|| sessions.is_set;
}

bool Rsvp::Counters::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(sessions.yfilter);
}

std::string Rsvp::Counters::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_paths.is_set || is_set(incoming_paths.yfilter)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.yfilter)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.yfilter)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.yfilter)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
        incoming_paths.value_namespace = name_space;
        incoming_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
        incoming_reservations.value_namespace = name_space;
        incoming_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
        outgoing_paths.value_namespace = name_space;
        outgoing_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
        outgoing_reservations.value_namespace = name_space;
        outgoing_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-paths")
    {
        incoming_paths.yfilter = yfilter;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations.yfilter = yfilter;
    }
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations.yfilter = yfilter;
    }
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
}

bool Rsvp::Counters::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-paths" || name == "incoming-reservations" || name == "interfaces" || name == "outgoing-paths" || name == "outgoing-reservations" || name == "sessions")
        return true;
    return false;
}

Rsvp::Counters::EventSyncs::EventSyncs()
{

    yang_name = "event-syncs"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::EventSyncs::~EventSyncs()
{
}

bool Rsvp::Counters::EventSyncs::has_data() const
{
    for (std::size_t index=0; index<event_sync.size(); index++)
    {
        if(event_sync[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::EventSyncs::has_operation() const
{
    for (std::size_t index=0; index<event_sync.size(); index++)
    {
        if(event_sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::EventSyncs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::EventSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-syncs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::EventSyncs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::EventSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-sync")
    {
        for(auto const & c : event_sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Counters::EventSyncs::EventSync>();
        c->parent = this;
        event_sync.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::EventSyncs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_sync)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Counters::EventSyncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::EventSyncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::EventSyncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-sync")
        return true;
    return false;
}

Rsvp::Counters::EventSyncs::EventSync::EventSync()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{

    yang_name = "event-sync"; yang_parent_name = "event-syncs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::EventSyncs::EventSync::~EventSync()
{
}

bool Rsvp::Counters::EventSyncs::EventSync::has_data() const
{
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool Rsvp::Counters::EventSyncs::EventSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(expired_paths.yfilter)
	|| ydk::is_set(expired_reservations.yfilter)
	|| ydk::is_set(nac_ks.yfilter);
}

std::string Rsvp::Counters::EventSyncs::EventSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/event-syncs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::EventSyncs::EventSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-sync" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::EventSyncs::EventSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.yfilter)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.yfilter)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.yfilter)) leaf_name_data.push_back(nac_ks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::EventSyncs::EventSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::EventSyncs::EventSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::EventSyncs::EventSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
        expired_paths.value_namespace = name_space;
        expired_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
        expired_reservations.value_namespace = name_space;
        expired_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
        nac_ks.value_namespace = name_space;
        nac_ks.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::EventSyncs::EventSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "expired-paths")
    {
        expired_paths.yfilter = yfilter;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations.yfilter = yfilter;
    }
    if(value_path == "nac-ks")
    {
        nac_ks.yfilter = yfilter;
    }
}

bool Rsvp::Counters::EventSyncs::EventSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "expired-paths" || name == "expired-reservations" || name == "nac-ks")
        return true;
    return false;
}

Rsvp::Counters::InterfaceEvents::InterfaceEvents()
{

    yang_name = "interface-events"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::InterfaceEvents::~InterfaceEvents()
{
}

bool Rsvp::Counters::InterfaceEvents::has_data() const
{
    for (std::size_t index=0; index<interface_event.size(); index++)
    {
        if(interface_event[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::InterfaceEvents::has_operation() const
{
    for (std::size_t index=0; index<interface_event.size(); index++)
    {
        if(interface_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::InterfaceEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-event")
    {
        for(auto const & c : interface_event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Counters::InterfaceEvents::InterfaceEvent>();
        c->parent = this;
        interface_event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Counters::InterfaceEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::InterfaceEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::InterfaceEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-event")
        return true;
    return false;
}

Rsvp::Counters::InterfaceEvents::InterfaceEvent::InterfaceEvent()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{

    yang_name = "interface-event"; yang_parent_name = "interface-events"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::InterfaceEvents::InterfaceEvent::~InterfaceEvent()
{
}

bool Rsvp::Counters::InterfaceEvents::InterfaceEvent::has_data() const
{
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool Rsvp::Counters::InterfaceEvents::InterfaceEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(expired_paths.yfilter)
	|| ydk::is_set(expired_reservations.yfilter)
	|| ydk::is_set(nac_ks.yfilter);
}

std::string Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/interface-events/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-event" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.yfilter)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.yfilter)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.yfilter)) leaf_name_data.push_back(nac_ks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::InterfaceEvents::InterfaceEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
        expired_paths.value_namespace = name_space;
        expired_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
        expired_reservations.value_namespace = name_space;
        expired_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
        nac_ks.value_namespace = name_space;
        nac_ks.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceEvents::InterfaceEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "expired-paths")
    {
        expired_paths.yfilter = yfilter;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations.yfilter = yfilter;
    }
    if(value_path == "nac-ks")
    {
        nac_ks.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceEvents::InterfaceEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "expired-paths" || name == "expired-reservations" || name == "nac-ks")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessages()
{

    yang_name = "interface-messages"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::InterfaceMessages::~InterfaceMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::has_data() const
{
    for (std::size_t index=0; index<interface_message.size(); index++)
    {
        if(interface_message[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::InterfaceMessages::has_operation() const
{
    for (std::size_t index=0; index<interface_message.size(); index++)
    {
        if(interface_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-message")
    {
        for(auto const & c : interface_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage>();
        c->parent = this;
        interface_message.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_message)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Counters::InterfaceMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::InterfaceMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::InterfaceMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-message")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::InterfaceMessage()
    :
    interface_name{YType::str, "interface-name"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
    	,
    bundle_received_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>())
	,bundle_transmitted_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>())
	,received_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>())
	,transmitted_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>())
{
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;
    received_messages->parent = this;
    transmitted_messages->parent = this;

    yang_name = "interface-message"; yang_parent_name = "interface-messages"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::~InterfaceMessage()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_data() const
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

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter)
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation())
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation());
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/interface-messages/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-message" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_received_messages != nullptr)
    {
        children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    if(received_messages != nullptr)
    {
        children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        children["transmitted-messages"] = transmitted_messages;
    }

    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "received-messages" || name == "transmitted-messages" || name == "interface-name" || name == "out-of-order-messages" || name == "rate-limited-messages" || name == "retransmitted-messages")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::BundleReceivedMessages()
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

    yang_name = "bundle-received-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_data() const
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

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::BundleTransmittedMessages()
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

    yang_name = "bundle-transmitted-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_data() const
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

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::ReceivedMessages()
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

    yang_name = "received-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::~ReceivedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_data() const
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

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::TransmittedMessages()
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

    yang_name = "transmitted-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::~TransmittedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_data() const
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

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nacks{YType::uint64, "total-nacks"},
    total_states{YType::uint32, "total-states"}
{

    yang_name = "issu"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::Issu::~Issu()
{
}

bool Rsvp::Counters::Issu::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| rsvp_process_role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nacks.is_set
	|| total_states.is_set;
}

bool Rsvp::Counters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(rsvp_process_role.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_id_ts.yfilter)
	|| ydk::is_set(total_nacks.yfilter)
	|| ydk::is_set(total_states.yfilter);
}

std::string Rsvp::Counters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.yfilter)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.yfilter)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
        rsvp_process_role.value_namespace = name_space;
        rsvp_process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
        total_nacks.value_namespace = name_space;
        total_nacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
    if(value_path == "total-nacks")
    {
        total_nacks.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
}

bool Rsvp::Counters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "last-idt-states" || name == "rsvp-process-role" || name == "total-deletions" || name == "total-id-ts" || name == "total-nacks" || name == "total-states")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::MessageSummary()
    :
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
    	,
    bundle_received_messages(std::make_shared<Rsvp::Counters::MessageSummary::BundleReceivedMessages>())
	,bundle_transmitted_messages(std::make_shared<Rsvp::Counters::MessageSummary::BundleTransmittedMessages>())
	,received_messages(std::make_shared<Rsvp::Counters::MessageSummary::ReceivedMessages>())
	,transmitted_messages(std::make_shared<Rsvp::Counters::MessageSummary::TransmittedMessages>())
{
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;
    received_messages->parent = this;
    transmitted_messages->parent = this;

    yang_name = "message-summary"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::~MessageSummary()
{
}

bool Rsvp::Counters::MessageSummary::has_data() const
{
    return out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| retransmitted_messages.is_set
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data())
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data());
}

bool Rsvp::Counters::MessageSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter)
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation())
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation());
}

std::string Rsvp::Counters::MessageSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<Rsvp::Counters::MessageSummary::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<Rsvp::Counters::MessageSummary::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<Rsvp::Counters::MessageSummary::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<Rsvp::Counters::MessageSummary::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_received_messages != nullptr)
    {
        children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    if(received_messages != nullptr)
    {
        children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        children["transmitted-messages"] = transmitted_messages;
    }

    return children;
}

void Rsvp::Counters::MessageSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "received-messages" || name == "transmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages" || name == "retransmitted-messages")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::BundleReceivedMessages::BundleReceivedMessages()
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

    yang_name = "bundle-received-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_data() const
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

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::MessageSummary::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::BundleTransmittedMessages::BundleTransmittedMessages()
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

    yang_name = "bundle-transmitted-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_data() const
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

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::MessageSummary::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::ReceivedMessages::ReceivedMessages()
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

    yang_name = "received-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::ReceivedMessages::~ReceivedMessages()
{
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_data() const
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

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::MessageSummary::ReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::ReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::MessageSummary::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::TransmittedMessages::TransmittedMessages()
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

    yang_name = "transmitted-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::MessageSummary::TransmittedMessages::~TransmittedMessages()
{
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_data() const
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

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(response.yfilter)
	|| ydk::is_set(srefresh.yfilter);
}

std::string Rsvp::Counters::MessageSummary::TransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::TransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::MessageSummary::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::MessageSummary::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::MessageSummary::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "bundle" || name == "challenge" || name == "hello" || name == "path" || name == "path-error" || name == "path-tear" || name == "reservation" || name == "reservation-confirm" || name == "reservation-error" || name == "reservation-tear" || name == "response" || name == "srefresh")
        return true;
    return false;
}

Rsvp::Counters::Nsr::Nsr()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nacks{YType::uint64, "total-nacks"},
    total_states{YType::uint32, "total-states"}
{

    yang_name = "nsr"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::Nsr::~Nsr()
{
}

bool Rsvp::Counters::Nsr::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| rsvp_process_role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nacks.is_set
	|| total_states.is_set;
}

bool Rsvp::Counters::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(rsvp_process_role.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_id_ts.yfilter)
	|| ydk::is_set(total_nacks.yfilter)
	|| ydk::is_set(total_states.yfilter);
}

std::string Rsvp::Counters::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.yfilter)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.yfilter)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
        rsvp_process_role.value_namespace = name_space;
        rsvp_process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
        total_nacks.value_namespace = name_space;
        total_nacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
    if(value_path == "total-nacks")
    {
        total_nacks.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
}

bool Rsvp::Counters::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "last-idt-states" || name == "rsvp-process-role" || name == "total-deletions" || name == "total-id-ts" || name == "total-nacks" || name == "total-states")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::OutOfResource()
    :
    interfaces(std::make_shared<Rsvp::Counters::OutOfResource::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "out-of-resource"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::OutOfResource::~OutOfResource()
{
}

bool Rsvp::Counters::OutOfResource::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::OutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::OutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::OutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::OutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Rsvp::Counters::OutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::OutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::OutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces()
    :
    interfaces(std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Interfaces_>())
	,summary(std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Summary>())
{
    interfaces->parent = this;
    summary->parent = this;

    yang_name = "interfaces"; yang_parent_name = "out-of-resource"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::OutOfResource::Interfaces::~Interfaces()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Rsvp::Counters::OutOfResource::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Rsvp::Counters::OutOfResource::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::OutOfResource::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::OutOfResource::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Rsvp::Counters::OutOfResource::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::OutOfResource::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "summary")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interfaces_()
{

    yang_name = "interfaces"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::~Interfaces_()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_data() const
{
    return interface_name.is_set
	|| dropped_path_messages.is_set;
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(dropped_path_messages.yfilter);
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/interfaces/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (dropped_path_messages.is_set || is_set(dropped_path_messages.yfilter)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
        dropped_path_messages.value_namespace = name_space;
        dropped_path_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "dropped-path-messages")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Summary::Summary()
    :
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{

    yang_name = "summary"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::OutOfResource::Interfaces::Summary::~Summary()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Summary::has_data() const
{
    return dropped_path_messages.is_set;
}

bool Rsvp::Counters::OutOfResource::Interfaces::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_path_messages.yfilter);
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_path_messages.is_set || is_set(dropped_path_messages.yfilter)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::OutOfResource::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::OutOfResource::Interfaces::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::OutOfResource::Interfaces::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
        dropped_path_messages.value_namespace = name_space;
        dropped_path_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::OutOfResource::Interfaces::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::OutOfResource::Interfaces::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-path-messages")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::PrefixFiltering()
    :
    accesses(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses>())
	,interfaces(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces>())
{
    accesses->parent = this;
    interfaces->parent = this;

    yang_name = "prefix-filtering"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::~PrefixFiltering()
{
}

bool Rsvp::Counters::PrefixFiltering::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::PrefixFiltering::has_operation() const
{
    return is_set(yfilter)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses>();
        }
        return accesses;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accesses != nullptr)
    {
        children["accesses"] = accesses;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesses" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Accesses()
{

    yang_name = "accesses"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Accesses::~Accesses()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        for(auto const & c : access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access>();
        c->parent = this;
        access.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
    	,
    dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped>())
	,forwarded(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded>())
	,locally_destined(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>())
	,total(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Total>())
{
    dropped->parent = this;
    forwarded->parent = this;
    locally_destined->parent = this;
    total->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::~Access()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::has_data() const
{
    return access_list_name.is_set
	|| (dropped !=  nullptr && dropped->has_data())
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[access-list-name='" <<access_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dropped != nullptr)
    {
        children["dropped"] = dropped;
    }

    if(forwarded != nullptr)
    {
        children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        children["locally-destined"] = locally_destined;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped" || name == "forwarded" || name == "locally-destined" || name == "total" || name == "access-list-name")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::~Dropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::~Forwarded()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::~LocallyDestined()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::~Total()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces()
    :
    interfaces(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_>())
	,summary(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary>())
{
    interfaces->parent = this;
    summary->parent = this;

    yang_name = "interfaces"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::~Interfaces()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "summary")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interfaces_()
{

    yang_name = "interfaces"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::~Interfaces_()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    default_action_dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>())
	,default_action_processed(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>())
	,dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>())
	,forwarded(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>())
	,locally_destined(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>())
	,total(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>())
{
    default_action_dropped->parent = this;
    default_action_processed->parent = this;
    dropped->parent = this;
    forwarded->parent = this;
    locally_destined->parent = this;
    total->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_data() const
{
    return interface_name.is_set
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped == nullptr)
        {
            default_action_dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>();
        }
        return default_action_dropped;
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed == nullptr)
        {
            default_action_processed = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>();
        }
        return default_action_processed;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_action_dropped != nullptr)
    {
        children["default-action-dropped"] = default_action_dropped;
    }

    if(default_action_processed != nullptr)
    {
        children["default-action-processed"] = default_action_processed;
    }

    if(dropped != nullptr)
    {
        children["dropped"] = dropped;
    }

    if(forwarded != nullptr)
    {
        children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        children["locally-destined"] = locally_destined;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-action-dropped" || name == "default-action-processed" || name == "dropped" || name == "forwarded" || name == "locally-destined" || name == "total" || name == "interface-name")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-dropped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::~DefaultActionDropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-processed"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::~Dropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::~Forwarded()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::~LocallyDestined()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::~Total()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Summary()
    :
    default_action_dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>())
	,default_action_processed(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>())
	,dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped>())
	,forwarded(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>())
	,locally_destined(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>())
	,total(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total>())
{
    default_action_dropped->parent = this;
    default_action_processed->parent = this;
    dropped->parent = this;
    forwarded->parent = this;
    locally_destined->parent = this;
    total->parent = this;

    yang_name = "summary"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::~Summary()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::has_data() const
{
    return (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped == nullptr)
        {
            default_action_dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>();
        }
        return default_action_dropped;
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed == nullptr)
        {
            default_action_processed = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>();
        }
        return default_action_processed;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_action_dropped != nullptr)
    {
        children["default-action-dropped"] = default_action_dropped;
    }

    if(default_action_processed != nullptr)
    {
        children["default-action-processed"] = default_action_processed;
    }

    if(dropped != nullptr)
    {
        children["dropped"] = dropped;
    }

    if(forwarded != nullptr)
    {
        children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        children["locally-destined"] = locally_destined;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-action-dropped" || name == "default-action-processed" || name == "dropped" || name == "forwarded" || name == "locally-destined" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-dropped"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::~DefaultActionDropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-processed"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::~Dropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::~Forwarded()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::~LocallyDestined()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::~Total()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::FrrSummary::FrrSummary()
    :
    path_states(std::make_shared<Rsvp::FrrSummary::PathStates>())
	,reservation_states(std::make_shared<Rsvp::FrrSummary::ReservationStates>())
{
    path_states->parent = this;
    reservation_states->parent = this;

    yang_name = "frr-summary"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::FrrSummary::~FrrSummary()
{
}

bool Rsvp::FrrSummary::has_data() const
{
    return (path_states !=  nullptr && path_states->has_data())
	|| (reservation_states !=  nullptr && reservation_states->has_data());
}

bool Rsvp::FrrSummary::has_operation() const
{
    return is_set(yfilter)
	|| (path_states !=  nullptr && path_states->has_operation())
	|| (reservation_states !=  nullptr && reservation_states->has_operation());
}

std::string Rsvp::FrrSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::FrrSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::FrrSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::FrrSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-states")
    {
        if(path_states == nullptr)
        {
            path_states = std::make_shared<Rsvp::FrrSummary::PathStates>();
        }
        return path_states;
    }

    if(child_yang_name == "reservation-states")
    {
        if(reservation_states == nullptr)
        {
            reservation_states = std::make_shared<Rsvp::FrrSummary::ReservationStates>();
        }
        return reservation_states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::FrrSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_states != nullptr)
    {
        children["path-states"] = path_states;
    }

    if(reservation_states != nullptr)
    {
        children["reservation-states"] = reservation_states;
    }

    return children;
}

void Rsvp::FrrSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::FrrSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::FrrSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-states" || name == "reservation-states")
        return true;
    return false;
}

Rsvp::FrrSummary::PathStates::PathStates()
    :
    active_instances{YType::uint32, "active-instances"},
    active_wait_instances{YType::uint32, "active-wait-instances"},
    ready_instances{YType::uint32, "ready-instances"},
    total{YType::uint32, "total"}
{

    yang_name = "path-states"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::FrrSummary::PathStates::~PathStates()
{
}

bool Rsvp::FrrSummary::PathStates::has_data() const
{
    return active_instances.is_set
	|| active_wait_instances.is_set
	|| ready_instances.is_set
	|| total.is_set;
}

bool Rsvp::FrrSummary::PathStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_instances.yfilter)
	|| ydk::is_set(active_wait_instances.yfilter)
	|| ydk::is_set(ready_instances.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::FrrSummary::PathStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frr-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::FrrSummary::PathStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::FrrSummary::PathStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_instances.is_set || is_set(active_instances.yfilter)) leaf_name_data.push_back(active_instances.get_name_leafdata());
    if (active_wait_instances.is_set || is_set(active_wait_instances.yfilter)) leaf_name_data.push_back(active_wait_instances.get_name_leafdata());
    if (ready_instances.is_set || is_set(ready_instances.yfilter)) leaf_name_data.push_back(ready_instances.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::FrrSummary::PathStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::FrrSummary::PathStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::FrrSummary::PathStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-instances")
    {
        active_instances = value;
        active_instances.value_namespace = name_space;
        active_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances = value;
        active_wait_instances.value_namespace = name_space;
        active_wait_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-instances")
    {
        ready_instances = value;
        ready_instances.value_namespace = name_space;
        ready_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::FrrSummary::PathStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-instances")
    {
        active_instances.yfilter = yfilter;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances.yfilter = yfilter;
    }
    if(value_path == "ready-instances")
    {
        ready_instances.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::FrrSummary::PathStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-instances" || name == "active-wait-instances" || name == "ready-instances" || name == "total")
        return true;
    return false;
}

Rsvp::FrrSummary::ReservationStates::ReservationStates()
    :
    active_instances{YType::uint32, "active-instances"},
    active_wait_instances{YType::uint32, "active-wait-instances"},
    ready_instances{YType::uint32, "ready-instances"},
    total{YType::uint32, "total"}
{

    yang_name = "reservation-states"; yang_parent_name = "frr-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::FrrSummary::ReservationStates::~ReservationStates()
{
}

bool Rsvp::FrrSummary::ReservationStates::has_data() const
{
    return active_instances.is_set
	|| active_wait_instances.is_set
	|| ready_instances.is_set
	|| total.is_set;
}

bool Rsvp::FrrSummary::ReservationStates::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_instances.yfilter)
	|| ydk::is_set(active_wait_instances.yfilter)
	|| ydk::is_set(ready_instances.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::FrrSummary::ReservationStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frr-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::FrrSummary::ReservationStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::FrrSummary::ReservationStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_instances.is_set || is_set(active_instances.yfilter)) leaf_name_data.push_back(active_instances.get_name_leafdata());
    if (active_wait_instances.is_set || is_set(active_wait_instances.yfilter)) leaf_name_data.push_back(active_wait_instances.get_name_leafdata());
    if (ready_instances.is_set || is_set(ready_instances.yfilter)) leaf_name_data.push_back(ready_instances.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::FrrSummary::ReservationStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::FrrSummary::ReservationStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::FrrSummary::ReservationStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-instances")
    {
        active_instances = value;
        active_instances.value_namespace = name_space;
        active_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances = value;
        active_wait_instances.value_namespace = name_space;
        active_wait_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-instances")
    {
        ready_instances = value;
        ready_instances.value_namespace = name_space;
        ready_instances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::FrrSummary::ReservationStates::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-instances")
    {
        active_instances.yfilter = yfilter;
    }
    if(value_path == "active-wait-instances")
    {
        active_wait_instances.yfilter = yfilter;
    }
    if(value_path == "ready-instances")
    {
        ready_instances.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::FrrSummary::ReservationStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-instances" || name == "active-wait-instances" || name == "ready-instances" || name == "total")
        return true;
    return false;
}

Rsvp::Frrs::Frrs()
{

    yang_name = "frrs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::~Frrs()
{
}

bool Rsvp::Frrs::has_data() const
{
    for (std::size_t index=0; index<frr.size(); index++)
    {
        if(frr[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Frrs::has_operation() const
{
    for (std::size_t index=0; index<frr.size(); index++)
    {
        if(frr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Frrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr")
    {
        for(auto const & c : frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::Frrs::Frr>();
        c->parent = this;
        frr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::Frrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Frrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Frrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Frr()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    path_status{YType::enumeration, "path-status"},
    protocol{YType::int32, "protocol"},
    reservation_status{YType::enumeration, "reservation-status"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    s2l_sub_lsp(std::make_shared<Rsvp::Frrs::Frr::S2LSubLsp>())
	,session(std::make_shared<Rsvp::Frrs::Frr::Session>())
{
    s2l_sub_lsp->parent = this;
    session->parent = this;

    yang_name = "frr"; yang_parent_name = "frrs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::~Frr()
{
}

bool Rsvp::Frrs::Frr::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| path_status.is_set
	|| protocol.is_set
	|| reservation_status.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Rsvp::Frrs::Frr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(reservation_status.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Rsvp::Frrs::Frr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (reservation_status.is_set || is_set(reservation_status.yfilter)) leaf_name_data.push_back(reservation_status.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::Frrs::Frr::S2LSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::Frrs::Frr::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(s2l_sub_lsp != nullptr)
    {
        children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Rsvp::Frrs::Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-status")
    {
        reservation_status = value;
        reservation_status.value_namespace = name_space;
        reservation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "reservation-status")
    {
        reservation_status.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-sub-lsp" || name == "session" || name == "destination-address" || name == "destination-port" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "path-status" || name == "protocol" || name == "reservation-status" || name == "session-type" || name == "source-address" || name == "source-port" || name == "sub-group-id" || name == "sub-group-origin" || name == "vrf-name")
        return true;
    return false;
}

Rsvp::Frrs::Frr::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::S2LSubLsp::~S2LSubLsp()
{
}

bool Rsvp::Frrs::Frr::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool Rsvp::Frrs::Frr::S2LSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::Frrs::Frr::S2LSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::S2LSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::S2LSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Frrs::Frr::S2LSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::S2LSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::S2LSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::Session::~Session()
{
}

bool Rsvp::Frrs::Frr::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::Frrs::Frr::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::Frrs::Frr::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_session != nullptr)
    {
        children["rsvp-session"] = rsvp_session;
    }

    return children;
}

void Rsvp::Frrs::Frr::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Frrs::Frr::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Frrs::Frr::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;
    ipv4_uni_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        children["ipv4-uni-session"] = ipv4_uni_session;
    }

    return children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-p2mp-lsp-session" || name == "ipv4-uni-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "destination-port" || name == "protocol")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-tunnel-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-tunnel-id" || name == "p2mp-id" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "extended-address" || name == "tunnel-id")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBriefs()
{

    yang_name = "global-neighbor-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalNeighborBriefs::~GlobalNeighborBriefs()
{
}

bool Rsvp::GlobalNeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<global_neighbor_brief.size(); index++)
    {
        if(global_neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::GlobalNeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<global_neighbor_brief.size(); index++)
    {
        if(global_neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-brief")
    {
        for(auto const & c : global_neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief>();
        c->parent = this;
        global_neighbor_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_neighbor_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::GlobalNeighborBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::GlobalNeighborBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::GlobalNeighborBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-brief")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborBrief()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    local_node_address{YType::str, "local-node-address"},
    lost_communication_reason{YType::enumeration, "lost-communication-reason"},
    lost_communication_total{YType::uint16, "lost-communication-total"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    node_address{YType::str, "node-address"},
    restart_state{YType::enumeration, "restart-state"}
    	,
    global_neighbor_flags(std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags>())
{
    global_neighbor_flags->parent = this;

    yang_name = "global-neighbor-brief"; yang_parent_name = "global-neighbor-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::~GlobalNeighborBrief()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_data() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbor_address.is_set
	|| is_gr_enabled.is_set
	|| node_address.is_set
	|| restart_state.is_set
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_data());
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(local_node_address.yfilter)
	|| ydk::is_set(lost_communication_reason.yfilter)
	|| ydk::is_set(lost_communication_total.yfilter)
	|| ydk::is_set(neighbor_hello_state.yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(restart_state.yfilter)
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_operation());
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/global-neighbor-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-brief" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (restart_state.is_set || is_set(restart_state.yfilter)) leaf_name_data.push_back(restart_state.get_name_leafdata());

    auto local_node_address_name_datas = local_node_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_node_address_name_datas.begin(), local_node_address_name_datas.end());
    auto lost_communication_reason_name_datas = lost_communication_reason.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_reason_name_datas.begin(), lost_communication_reason_name_datas.end());
    auto lost_communication_total_name_datas = lost_communication_total.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_total_name_datas.begin(), lost_communication_total_name_datas.end());
    auto neighbor_hello_state_name_datas = neighbor_hello_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_hello_state_name_datas.begin(), neighbor_hello_state_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-flags")
    {
        if(global_neighbor_flags == nullptr)
        {
            global_neighbor_flags = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags>();
        }
        return global_neighbor_flags;
    }

    if(child_yang_name == "lost-communication-time")
    {
        for(auto const & c : lost_communication_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime>();
        c->parent = this;
        lost_communication_time.push_back(c);
        return c;
    }

    if(child_yang_name == "up-time")
    {
        for(auto const & c : up_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime>();
        c->parent = this;
        up_time.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_neighbor_flags != nullptr)
    {
        children["global-neighbor-flags"] = global_neighbor_flags;
    }

    for (auto const & c : lost_communication_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : up_time)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-address")
    {
        local_node_address.append(value);
    }
    if(value_path == "lost-communication-reason")
    {
        lost_communication_reason.append(value);
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.append(value);
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.append(value);
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-state")
    {
        restart_state = value;
        restart_state.value_namespace = name_space;
        restart_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "local-node-address")
    {
        local_node_address.yfilter = yfilter;
    }
    if(value_path == "lost-communication-reason")
    {
        lost_communication_reason.yfilter = yfilter;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.yfilter = yfilter;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "restart-state")
    {
        restart_state.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-flags" || name == "lost-communication-time" || name == "up-time" || name == "neighbor-address" || name == "is-gr-enabled" || name == "local-node-address" || name == "lost-communication-reason" || name == "lost-communication-total" || name == "neighbor-hello-state" || name == "node-address" || name == "restart-state")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::GlobalNeighborFlags()
    :
    is_application_mpls{YType::boolean, "is-application-mpls"},
    is_application_ouni{YType::boolean, "is-application-ouni"}
{

    yang_name = "global-neighbor-flags"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::~GlobalNeighborFlags()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_data() const
{
    return is_application_mpls.is_set
	|| is_application_ouni.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_application_mpls.yfilter)
	|| ydk::is_set(is_application_ouni.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_application_mpls.is_set || is_set(is_application_mpls.yfilter)) leaf_name_data.push_back(is_application_mpls.get_name_leafdata());
    if (is_application_ouni.is_set || is_set(is_application_ouni.yfilter)) leaf_name_data.push_back(is_application_ouni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-application-mpls")
    {
        is_application_mpls = value;
        is_application_mpls.value_namespace = name_space;
        is_application_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-ouni")
    {
        is_application_ouni = value;
        is_application_ouni.value_namespace = name_space;
        is_application_ouni.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-application-mpls")
    {
        is_application_mpls.yfilter = yfilter;
    }
    if(value_path == "is-application-ouni")
    {
        is_application_ouni.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-application-mpls" || name == "is-application-ouni")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::LostCommunicationTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "lost-communication-time"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::~LostCommunicationTime()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::UpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "up-time"; yang_parent_name = "global-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::~UpTime()
{
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetails()
{

    yang_name = "global-neighbor-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalNeighborDetails::~GlobalNeighborDetails()
{
}

bool Rsvp::GlobalNeighborDetails::has_data() const
{
    for (std::size_t index=0; index<global_neighbor_detail.size(); index++)
    {
        if(global_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::GlobalNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<global_neighbor_detail.size(); index++)
    {
        if(global_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::GlobalNeighborDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-detail")
    {
        for(auto const & c : global_neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail>();
        c->parent = this;
        global_neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : global_neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::GlobalNeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::GlobalNeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::GlobalNeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-detail")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_neighbor{YType::str, "interface-neighbor"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    is_restart_timer_running{YType::boolean, "is-restart-timer-running"},
    local_node_address{YType::str, "local-node-address"},
    lost_communication_reason{YType::enumeration, "lost-communication-reason"},
    lost_communication_total{YType::uint16, "lost-communication-total"},
    missed_hellos{YType::uint8, "missed-hellos"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    node_address{YType::str, "node-address"},
    pending_states{YType::uint32, "pending-states"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_state{YType::enumeration, "restart-state"},
    restart_time{YType::uint32, "restart-time"}
    	,
    global_neighbor_flags(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags>())
	,recovery_time_left(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft>())
	,recovery_timer_exp_time(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime>())
	,restart_time_left(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft>())
	,restart_timer_expiry_time(std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime>())
{
    global_neighbor_flags->parent = this;
    recovery_time_left->parent = this;
    recovery_timer_exp_time->parent = this;
    restart_time_left->parent = this;
    restart_timer_expiry_time->parent = this;

    yang_name = "global-neighbor-detail"; yang_parent_name = "global-neighbor-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::~GlobalNeighborDetail()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_data() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_data())
            return true;
    }
    for (auto const & leaf : interface_neighbor.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return neighbor_address.is_set
	|| hello_interval.is_set
	|| is_gr_enabled.is_set
	|| is_recovery_timer_running.is_set
	|| is_restart_timer_running.is_set
	|| missed_hellos.is_set
	|| node_address.is_set
	|| pending_states.is_set
	|| recovery_time.is_set
	|| restart_state.is_set
	|| restart_time.is_set
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_data())
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data())
	|| (restart_time_left !=  nullptr && restart_time_left->has_data())
	|| (restart_timer_expiry_time !=  nullptr && restart_timer_expiry_time->has_data());
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<lost_communication_time.size(); index++)
    {
        if(lost_communication_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<up_time.size(); index++)
    {
        if(up_time[index]->has_operation())
            return true;
    }
    for (auto const & leaf : interface_neighbor.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_node_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lost_communication_reason.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lost_communication_total.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : neighbor_hello_state.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(interface_neighbor.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(is_restart_timer_running.yfilter)
	|| ydk::is_set(local_node_address.yfilter)
	|| ydk::is_set(lost_communication_reason.yfilter)
	|| ydk::is_set(lost_communication_total.yfilter)
	|| ydk::is_set(missed_hellos.yfilter)
	|| ydk::is_set(neighbor_hello_state.yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(pending_states.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(restart_state.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| (global_neighbor_flags !=  nullptr && global_neighbor_flags->has_operation())
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation())
	|| (restart_time_left !=  nullptr && restart_time_left->has_operation())
	|| (restart_timer_expiry_time !=  nullptr && restart_timer_expiry_time->has_operation());
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/global-neighbor-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-detail" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (is_restart_timer_running.is_set || is_set(is_restart_timer_running.yfilter)) leaf_name_data.push_back(is_restart_timer_running.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.yfilter)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.yfilter)) leaf_name_data.push_back(pending_states.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_state.is_set || is_set(restart_state.yfilter)) leaf_name_data.push_back(restart_state.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());

    auto interface_neighbor_name_datas = interface_neighbor.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_neighbor_name_datas.begin(), interface_neighbor_name_datas.end());
    auto local_node_address_name_datas = local_node_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_node_address_name_datas.begin(), local_node_address_name_datas.end());
    auto lost_communication_reason_name_datas = lost_communication_reason.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_reason_name_datas.begin(), lost_communication_reason_name_datas.end());
    auto lost_communication_total_name_datas = lost_communication_total.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lost_communication_total_name_datas.begin(), lost_communication_total_name_datas.end());
    auto neighbor_hello_state_name_datas = neighbor_hello_state.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_hello_state_name_datas.begin(), neighbor_hello_state_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-neighbor-flags")
    {
        if(global_neighbor_flags == nullptr)
        {
            global_neighbor_flags = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags>();
        }
        return global_neighbor_flags;
    }

    if(child_yang_name == "lost-communication-time")
    {
        for(auto const & c : lost_communication_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime>();
        c->parent = this;
        lost_communication_time.push_back(c);
        return c;
    }

    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left == nullptr)
        {
            recovery_time_left = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft>();
        }
        return recovery_time_left;
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time == nullptr)
        {
            recovery_timer_exp_time = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime>();
        }
        return recovery_timer_exp_time;
    }

    if(child_yang_name == "restart-time-left")
    {
        if(restart_time_left == nullptr)
        {
            restart_time_left = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft>();
        }
        return restart_time_left;
    }

    if(child_yang_name == "restart-timer-expiry-time")
    {
        if(restart_timer_expiry_time == nullptr)
        {
            restart_timer_expiry_time = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime>();
        }
        return restart_timer_expiry_time;
    }

    if(child_yang_name == "up-time")
    {
        for(auto const & c : up_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime>();
        c->parent = this;
        up_time.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_neighbor_flags != nullptr)
    {
        children["global-neighbor-flags"] = global_neighbor_flags;
    }

    for (auto const & c : lost_communication_time)
    {
        children[c->get_segment_path()] = c;
    }

    if(recovery_time_left != nullptr)
    {
        children["recovery-time-left"] = recovery_time_left;
    }

    if(recovery_timer_exp_time != nullptr)
    {
        children["recovery-timer-exp-time"] = recovery_timer_exp_time;
    }

    if(restart_time_left != nullptr)
    {
        children["restart-time-left"] = restart_time_left;
    }

    if(restart_timer_expiry_time != nullptr)
    {
        children["restart-timer-expiry-time"] = restart_timer_expiry_time;
    }

    for (auto const & c : up_time)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbor")
    {
        interface_neighbor.append(value);
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-restart-timer-running")
    {
        is_restart_timer_running = value;
        is_restart_timer_running.value_namespace = name_space;
        is_restart_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-address")
    {
        local_node_address.append(value);
    }
    if(value_path == "lost-communication-reason")
    {
        lost_communication_reason.append(value);
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.append(value);
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos = value;
        missed_hellos.value_namespace = name_space;
        missed_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.append(value);
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-states")
    {
        pending_states = value;
        pending_states.value_namespace = name_space;
        pending_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-state")
    {
        restart_state = value;
        restart_state.value_namespace = name_space;
        restart_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "interface-neighbor")
    {
        interface_neighbor.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "is-restart-timer-running")
    {
        is_restart_timer_running.yfilter = yfilter;
    }
    if(value_path == "local-node-address")
    {
        local_node_address.yfilter = yfilter;
    }
    if(value_path == "lost-communication-reason")
    {
        lost_communication_reason.yfilter = yfilter;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.yfilter = yfilter;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos.yfilter = yfilter;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "pending-states")
    {
        pending_states.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "restart-state")
    {
        restart_state.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-neighbor-flags" || name == "lost-communication-time" || name == "recovery-time-left" || name == "recovery-timer-exp-time" || name == "restart-time-left" || name == "restart-timer-expiry-time" || name == "up-time" || name == "neighbor-address" || name == "hello-interval" || name == "interface-neighbor" || name == "is-gr-enabled" || name == "is-recovery-timer-running" || name == "is-restart-timer-running" || name == "local-node-address" || name == "lost-communication-reason" || name == "lost-communication-total" || name == "missed-hellos" || name == "neighbor-hello-state" || name == "node-address" || name == "pending-states" || name == "recovery-time" || name == "restart-state" || name == "restart-time")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::GlobalNeighborFlags()
    :
    is_application_mpls{YType::boolean, "is-application-mpls"},
    is_application_ouni{YType::boolean, "is-application-ouni"}
{

    yang_name = "global-neighbor-flags"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::~GlobalNeighborFlags()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_data() const
{
    return is_application_mpls.is_set
	|| is_application_ouni.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_application_mpls.yfilter)
	|| ydk::is_set(is_application_ouni.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-neighbor-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_application_mpls.is_set || is_set(is_application_mpls.yfilter)) leaf_name_data.push_back(is_application_mpls.get_name_leafdata());
    if (is_application_ouni.is_set || is_set(is_application_ouni.yfilter)) leaf_name_data.push_back(is_application_ouni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-application-mpls")
    {
        is_application_mpls = value;
        is_application_mpls.value_namespace = name_space;
        is_application_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-ouni")
    {
        is_application_ouni = value;
        is_application_ouni.value_namespace = name_space;
        is_application_ouni.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-application-mpls")
    {
        is_application_mpls.yfilter = yfilter;
    }
    if(value_path == "is-application-ouni")
    {
        is_application_ouni.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-application-mpls" || name == "is-application-ouni")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::LostCommunicationTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "lost-communication-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::~LostCommunicationTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost-communication-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "recovery-time-left"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "recovery-timer-exp-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::RestartTimeLeft()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "restart-time-left"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::~RestartTimeLeft()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::RestartTimerExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "restart-timer-expiry-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::~RestartTimerExpiryTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart-timer-expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::UpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "up-time"; yang_parent_name = "global-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::~UpTime()
{
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GracefulRestart::GracefulRestart()
    :
    global_neighbors{YType::uint32, "global-neighbors"},
    hello_interval{YType::uint32, "hello-interval"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    missed_hellos{YType::uint8, "missed-hellos"},
    pending_states{YType::uint32, "pending-states"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_time{YType::uint32, "restart-time"}
    	,
    recovery_time_left(std::make_shared<Rsvp::GracefulRestart::RecoveryTimeLeft>())
	,recovery_timer_exp_time(std::make_shared<Rsvp::GracefulRestart::RecoveryTimerExpTime>())
{
    recovery_time_left->parent = this;
    recovery_timer_exp_time->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GracefulRestart::~GracefulRestart()
{
}

bool Rsvp::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<local_node_address.size(); index++)
    {
        if(local_node_address[index]->has_data())
            return true;
    }
    return global_neighbors.is_set
	|| hello_interval.is_set
	|| is_gr_enabled.is_set
	|| is_recovery_timer_running.is_set
	|| missed_hellos.is_set
	|| pending_states.is_set
	|| recovery_time.is_set
	|| restart_time.is_set
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data());
}

bool Rsvp::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<local_node_address.size(); index++)
    {
        if(local_node_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(global_neighbors.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(missed_hellos.yfilter)
	|| ydk::is_set(pending_states.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation());
}

std::string Rsvp::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_neighbors.is_set || is_set(global_neighbors.yfilter)) leaf_name_data.push_back(global_neighbors.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.yfilter)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.yfilter)) leaf_name_data.push_back(pending_states.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-node-address")
    {
        for(auto const & c : local_node_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::GracefulRestart::LocalNodeAddress>();
        c->parent = this;
        local_node_address.push_back(c);
        return c;
    }

    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left == nullptr)
        {
            recovery_time_left = std::make_shared<Rsvp::GracefulRestart::RecoveryTimeLeft>();
        }
        return recovery_time_left;
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time == nullptr)
        {
            recovery_timer_exp_time = std::make_shared<Rsvp::GracefulRestart::RecoveryTimerExpTime>();
        }
        return recovery_timer_exp_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_node_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(recovery_time_left != nullptr)
    {
        children["recovery-time-left"] = recovery_time_left;
    }

    if(recovery_timer_exp_time != nullptr)
    {
        children["recovery-timer-exp-time"] = recovery_timer_exp_time;
    }

    return children;
}

void Rsvp::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-neighbors")
    {
        global_neighbors = value;
        global_neighbors.value_namespace = name_space;
        global_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos = value;
        missed_hellos.value_namespace = name_space;
        missed_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-states")
    {
        pending_states = value;
        pending_states.value_namespace = name_space;
        pending_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-neighbors")
    {
        global_neighbors.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos.yfilter = yfilter;
    }
    if(value_path == "pending-states")
    {
        pending_states.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-node-address" || name == "recovery-time-left" || name == "recovery-timer-exp-time" || name == "global-neighbors" || name == "hello-interval" || name == "is-gr-enabled" || name == "is-recovery-timer-running" || name == "missed-hellos" || name == "pending-states" || name == "recovery-time" || name == "restart-time")
        return true;
    return false;
}

Rsvp::GracefulRestart::LocalNodeAddress::LocalNodeAddress()
    :
    application_type{YType::enumeration, "application-type"},
    local_node_ip_address{YType::str, "local-node-ip-address"}
{

    yang_name = "local-node-address"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GracefulRestart::LocalNodeAddress::~LocalNodeAddress()
{
}

bool Rsvp::GracefulRestart::LocalNodeAddress::has_data() const
{
    return application_type.is_set
	|| local_node_ip_address.is_set;
}

bool Rsvp::GracefulRestart::LocalNodeAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(local_node_ip_address.yfilter);
}

std::string Rsvp::GracefulRestart::LocalNodeAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::LocalNodeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-node-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::LocalNodeAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (local_node_ip_address.is_set || is_set(local_node_ip_address.yfilter)) leaf_name_data.push_back(local_node_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GracefulRestart::LocalNodeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GracefulRestart::LocalNodeAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GracefulRestart::LocalNodeAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address = value;
        local_node_ip_address.value_namespace = name_space;
        local_node_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::LocalNodeAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::LocalNodeAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-type" || name == "local-node-ip-address")
        return true;
    return false;
}

Rsvp::GracefulRestart::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "recovery-time-left"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GracefulRestart::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool Rsvp::GracefulRestart::RecoveryTimeLeft::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GracefulRestart::RecoveryTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GracefulRestart::RecoveryTimeLeft::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::RecoveryTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GracefulRestart::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GracefulRestart::RecoveryTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GracefulRestart::RecoveryTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::RecoveryTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::RecoveryTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::GracefulRestart::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "recovery-timer-exp-time"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::GracefulRestart::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool Rsvp::GracefulRestart::RecoveryTimerExpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::GracefulRestart::RecoveryTimerExpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::GracefulRestart::RecoveryTimerExpTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::RecoveryTimerExpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::GracefulRestart::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::GracefulRestart::RecoveryTimerExpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::GracefulRestart::RecoveryTimerExpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::RecoveryTimerExpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::RecoveryTimerExpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::HelloInstanceBriefs::HelloInstanceBriefs()
{

    yang_name = "hello-instance-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInstanceBriefs::~HelloInstanceBriefs()
{
}

bool Rsvp::HelloInstanceBriefs::has_data() const
{
    for (std::size_t index=0; index<hello_instance_brief.size(); index++)
    {
        if(hello_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_instance_brief.size(); index++)
    {
        if(hello_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInstanceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-instance-brief")
    {
        for(auto const & c : hello_instance_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::HelloInstanceBriefs::HelloInstanceBrief>();
        c->parent = this;
        hello_instance_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_instance_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::HelloInstanceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInstanceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInstanceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-instance-brief")
        return true;
    return false;
}

Rsvp::HelloInstanceBriefs::HelloInstanceBrief::HelloInstanceBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_interface{YType::str, "hello-interface"},
    instance_type{YType::enumeration, "instance-type"},
    lost_communication_total{YType::uint16, "lost-communication-total"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    source_address_xr{YType::str, "source-address-xr"}
{

    yang_name = "hello-instance-brief"; yang_parent_name = "hello-instance-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInstanceBriefs::HelloInstanceBrief::~HelloInstanceBrief()
{
}

bool Rsvp::HelloInstanceBriefs::HelloInstanceBrief::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| destination_address_xr.is_set
	|| hello_interface.is_set
	|| instance_type.is_set
	|| lost_communication_total.is_set
	|| neighbor_hello_state.is_set
	|| source_address_xr.is_set;
}

bool Rsvp::HelloInstanceBriefs::HelloInstanceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(lost_communication_total.yfilter)
	|| ydk::is_set(neighbor_hello_state.yfilter)
	|| ydk::is_set(source_address_xr.yfilter);
}

std::string Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-instance-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-brief" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (lost_communication_total.is_set || is_set(lost_communication_total.yfilter)) leaf_name_data.push_back(lost_communication_total.get_name_leafdata());
    if (neighbor_hello_state.is_set || is_set(neighbor_hello_state.yfilter)) leaf_name_data.push_back(neighbor_hello_state.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceBriefs::HelloInstanceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::HelloInstanceBriefs::HelloInstanceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total = value;
        lost_communication_total.value_namespace = name_space;
        lost_communication_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state = value;
        neighbor_hello_state.value_namespace = name_space;
        neighbor_hello_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInstanceBriefs::HelloInstanceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "lost-communication-total")
    {
        lost_communication_total.yfilter = yfilter;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
}

bool Rsvp::HelloInstanceBriefs::HelloInstanceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "destination-address-xr" || name == "hello-interface" || name == "instance-type" || name == "lost-communication-total" || name == "neighbor-hello-state" || name == "source-address-xr")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetails()
{

    yang_name = "hello-instance-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInstanceDetails::~HelloInstanceDetails()
{
}

bool Rsvp::HelloInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<hello_instance_detail.size(); index++)
    {
        if(hello_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_instance_detail.size(); index++)
    {
        if(hello_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInstanceDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-instance-detail")
    {
        for(auto const & c : hello_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail>();
        c->parent = this;
        hello_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_instance_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::HelloInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-instance-detail")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::HelloInstanceDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    communication_lost_hello_missed{YType::uint16, "communication-lost-hello-missed"},
    communication_lost_interface_down{YType::uint16, "communication-lost-interface-down"},
    communication_lost_neighbor_disabled_hello{YType::uint16, "communication-lost-neighbor-disabled-hello"},
    communication_lost_reason{YType::enumeration, "communication-lost-reason"},
    communication_lost_wrong_destination_inst{YType::uint16, "communication-lost-wrong-destination-inst"},
    communication_lost_wrong_source_inst{YType::uint16, "communication-lost-wrong-source-inst"},
    destination_address_xr{YType::str, "destination-address-xr"},
    destination_instance{YType::uint32, "destination-instance"},
    hello_instance_owner{YType::enumeration, "hello-instance-owner"},
    hello_interface{YType::str, "hello-interface"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_messages_received{YType::uint64, "hello-messages-received"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    hello_request_suppressed{YType::uint64, "hello-request-suppressed"},
    instance_type{YType::enumeration, "instance-type"},
    missed_acks_allowed{YType::uint32, "missed-acks-allowed"},
    neighbor_hello_state{YType::enumeration, "neighbor-hello-state"},
    source_address_xr{YType::str, "source-address-xr"},
    source_instance{YType::uint32, "source-instance"},
    total_communication_lost{YType::uint16, "total-communication-lost"}
    	,
    communication_lost_time(std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime>())
	,up_time(std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime>())
{
    communication_lost_time->parent = this;
    up_time->parent = this;

    yang_name = "hello-instance-detail"; yang_parent_name = "hello-instance-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::~HelloInstanceDetail()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| communication_lost_hello_missed.is_set
	|| communication_lost_interface_down.is_set
	|| communication_lost_neighbor_disabled_hello.is_set
	|| communication_lost_reason.is_set
	|| communication_lost_wrong_destination_inst.is_set
	|| communication_lost_wrong_source_inst.is_set
	|| destination_address_xr.is_set
	|| destination_instance.is_set
	|| hello_instance_owner.is_set
	|| hello_interface.is_set
	|| hello_interval.is_set
	|| hello_messages_received.is_set
	|| hello_messages_sent.is_set
	|| hello_request_suppressed.is_set
	|| instance_type.is_set
	|| missed_acks_allowed.is_set
	|| neighbor_hello_state.is_set
	|| source_address_xr.is_set
	|| source_instance.is_set
	|| total_communication_lost.is_set
	|| (communication_lost_time !=  nullptr && communication_lost_time->has_data())
	|| (up_time !=  nullptr && up_time->has_data());
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(communication_lost_hello_missed.yfilter)
	|| ydk::is_set(communication_lost_interface_down.yfilter)
	|| ydk::is_set(communication_lost_neighbor_disabled_hello.yfilter)
	|| ydk::is_set(communication_lost_reason.yfilter)
	|| ydk::is_set(communication_lost_wrong_destination_inst.yfilter)
	|| ydk::is_set(communication_lost_wrong_source_inst.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(destination_instance.yfilter)
	|| ydk::is_set(hello_instance_owner.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_messages_received.yfilter)
	|| ydk::is_set(hello_messages_sent.yfilter)
	|| ydk::is_set(hello_request_suppressed.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(missed_acks_allowed.yfilter)
	|| ydk::is_set(neighbor_hello_state.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(source_instance.yfilter)
	|| ydk::is_set(total_communication_lost.yfilter)
	|| (communication_lost_time !=  nullptr && communication_lost_time->has_operation())
	|| (up_time !=  nullptr && up_time->has_operation());
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-instance-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-instance-detail" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (communication_lost_hello_missed.is_set || is_set(communication_lost_hello_missed.yfilter)) leaf_name_data.push_back(communication_lost_hello_missed.get_name_leafdata());
    if (communication_lost_interface_down.is_set || is_set(communication_lost_interface_down.yfilter)) leaf_name_data.push_back(communication_lost_interface_down.get_name_leafdata());
    if (communication_lost_neighbor_disabled_hello.is_set || is_set(communication_lost_neighbor_disabled_hello.yfilter)) leaf_name_data.push_back(communication_lost_neighbor_disabled_hello.get_name_leafdata());
    if (communication_lost_reason.is_set || is_set(communication_lost_reason.yfilter)) leaf_name_data.push_back(communication_lost_reason.get_name_leafdata());
    if (communication_lost_wrong_destination_inst.is_set || is_set(communication_lost_wrong_destination_inst.yfilter)) leaf_name_data.push_back(communication_lost_wrong_destination_inst.get_name_leafdata());
    if (communication_lost_wrong_source_inst.is_set || is_set(communication_lost_wrong_source_inst.yfilter)) leaf_name_data.push_back(communication_lost_wrong_source_inst.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.yfilter)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (hello_instance_owner.is_set || is_set(hello_instance_owner.yfilter)) leaf_name_data.push_back(hello_instance_owner.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.yfilter)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.yfilter)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (hello_request_suppressed.is_set || is_set(hello_request_suppressed.yfilter)) leaf_name_data.push_back(hello_request_suppressed.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (missed_acks_allowed.is_set || is_set(missed_acks_allowed.yfilter)) leaf_name_data.push_back(missed_acks_allowed.get_name_leafdata());
    if (neighbor_hello_state.is_set || is_set(neighbor_hello_state.yfilter)) leaf_name_data.push_back(neighbor_hello_state.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.yfilter)) leaf_name_data.push_back(source_instance.get_name_leafdata());
    if (total_communication_lost.is_set || is_set(total_communication_lost.yfilter)) leaf_name_data.push_back(total_communication_lost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "communication-lost-time")
    {
        if(communication_lost_time == nullptr)
        {
            communication_lost_time = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime>();
        }
        return communication_lost_time;
    }

    if(child_yang_name == "up-time")
    {
        if(up_time == nullptr)
        {
            up_time = std::make_shared<Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime>();
        }
        return up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceDetails::HelloInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(communication_lost_time != nullptr)
    {
        children["communication-lost-time"] = communication_lost_time;
    }

    if(up_time != nullptr)
    {
        children["up-time"] = up_time;
    }

    return children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "communication-lost-hello-missed")
    {
        communication_lost_hello_missed = value;
        communication_lost_hello_missed.value_namespace = name_space;
        communication_lost_hello_missed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-interface-down")
    {
        communication_lost_interface_down = value;
        communication_lost_interface_down.value_namespace = name_space;
        communication_lost_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-neighbor-disabled-hello")
    {
        communication_lost_neighbor_disabled_hello = value;
        communication_lost_neighbor_disabled_hello.value_namespace = name_space;
        communication_lost_neighbor_disabled_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-reason")
    {
        communication_lost_reason = value;
        communication_lost_reason.value_namespace = name_space;
        communication_lost_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-wrong-destination-inst")
    {
        communication_lost_wrong_destination_inst = value;
        communication_lost_wrong_destination_inst.value_namespace = name_space;
        communication_lost_wrong_destination_inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "communication-lost-wrong-source-inst")
    {
        communication_lost_wrong_source_inst = value;
        communication_lost_wrong_source_inst.value_namespace = name_space;
        communication_lost_wrong_source_inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-instance")
    {
        destination_instance = value;
        destination_instance.value_namespace = name_space;
        destination_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-instance-owner")
    {
        hello_instance_owner = value;
        hello_instance_owner.value_namespace = name_space;
        hello_instance_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received = value;
        hello_messages_received.value_namespace = name_space;
        hello_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent = value;
        hello_messages_sent.value_namespace = name_space;
        hello_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-request-suppressed")
    {
        hello_request_suppressed = value;
        hello_request_suppressed.value_namespace = name_space;
        hello_request_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missed-acks-allowed")
    {
        missed_acks_allowed = value;
        missed_acks_allowed.value_namespace = name_space;
        missed_acks_allowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state = value;
        neighbor_hello_state.value_namespace = name_space;
        neighbor_hello_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-instance")
    {
        source_instance = value;
        source_instance.value_namespace = name_space;
        source_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-communication-lost")
    {
        total_communication_lost = value;
        total_communication_lost.value_namespace = name_space;
        total_communication_lost.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "communication-lost-hello-missed")
    {
        communication_lost_hello_missed.yfilter = yfilter;
    }
    if(value_path == "communication-lost-interface-down")
    {
        communication_lost_interface_down.yfilter = yfilter;
    }
    if(value_path == "communication-lost-neighbor-disabled-hello")
    {
        communication_lost_neighbor_disabled_hello.yfilter = yfilter;
    }
    if(value_path == "communication-lost-reason")
    {
        communication_lost_reason.yfilter = yfilter;
    }
    if(value_path == "communication-lost-wrong-destination-inst")
    {
        communication_lost_wrong_destination_inst.yfilter = yfilter;
    }
    if(value_path == "communication-lost-wrong-source-inst")
    {
        communication_lost_wrong_source_inst.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-instance")
    {
        destination_instance.yfilter = yfilter;
    }
    if(value_path == "hello-instance-owner")
    {
        hello_instance_owner.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received.yfilter = yfilter;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent.yfilter = yfilter;
    }
    if(value_path == "hello-request-suppressed")
    {
        hello_request_suppressed.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "missed-acks-allowed")
    {
        missed_acks_allowed.yfilter = yfilter;
    }
    if(value_path == "neighbor-hello-state")
    {
        neighbor_hello_state.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "source-instance")
    {
        source_instance.yfilter = yfilter;
    }
    if(value_path == "total-communication-lost")
    {
        total_communication_lost.yfilter = yfilter;
    }
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "communication-lost-time" || name == "up-time" || name == "source-address" || name == "destination-address" || name == "communication-lost-hello-missed" || name == "communication-lost-interface-down" || name == "communication-lost-neighbor-disabled-hello" || name == "communication-lost-reason" || name == "communication-lost-wrong-destination-inst" || name == "communication-lost-wrong-source-inst" || name == "destination-address-xr" || name == "destination-instance" || name == "hello-instance-owner" || name == "hello-interface" || name == "hello-interval" || name == "hello-messages-received" || name == "hello-messages-sent" || name == "hello-request-suppressed" || name == "instance-type" || name == "missed-acks-allowed" || name == "neighbor-hello-state" || name == "source-address-xr" || name == "source-instance" || name == "total-communication-lost")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::CommunicationLostTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "communication-lost-time"; yang_parent_name = "hello-instance-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::~CommunicationLostTime()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "communication-lost-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::UpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "up-time"; yang_parent_name = "hello-instance-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::~UpTime()
{
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBriefs()
{

    yang_name = "hello-interface-instance-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInterfaceInstanceBriefs::~HelloInterfaceInstanceBriefs()
{
}

bool Rsvp::HelloInterfaceInstanceBriefs::has_data() const
{
    for (std::size_t index=0; index<hello_interface_instance_brief.size(); index++)
    {
        if(hello_interface_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInterfaceInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_brief.size(); index++)
    {
        if(hello_interface_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInterfaceInstanceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInterfaceInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interface-instance-brief")
    {
        for(auto const & c : hello_interface_instance_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief>();
        c->parent = this;
        hello_interface_instance_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInterfaceInstanceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interface_instance_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::HelloInterfaceInstanceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInterfaceInstanceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInterfaceInstanceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interface-instance-brief")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::HelloInterfaceInstanceBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_interface{YType::str, "hello-interface"},
    instance_type{YType::enumeration, "instance-type"},
    source_address_xr{YType::str, "source-address-xr"}
{

    yang_name = "hello-interface-instance-brief"; yang_parent_name = "hello-interface-instance-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::~HelloInterfaceInstanceBrief()
{
}

bool Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| destination_address_xr.is_set
	|| hello_interface.is_set
	|| instance_type.is_set
	|| source_address_xr.is_set;
}

bool Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter);
}

std::string Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-interface-instance-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-brief" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
}

bool Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "destination-address-xr" || name == "hello-interface" || name == "instance-type" || name == "source-address-xr")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetails()
{

    yang_name = "hello-interface-instance-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInterfaceInstanceDetails::~HelloInterfaceInstanceDetails()
{
}

bool Rsvp::HelloInterfaceInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<hello_interface_instance_detail.size(); index++)
    {
        if(hello_interface_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInterfaceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_detail.size(); index++)
    {
        if(hello_interface_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInterfaceInstanceDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInterfaceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interface-instance-detail")
    {
        for(auto const & c : hello_interface_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail>();
        c->parent = this;
        hello_interface_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInterfaceInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interface_instance_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::HelloInterfaceInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInterfaceInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInterfaceInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interface-instance-detail")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::HelloInterfaceInstanceDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    destination_instance{YType::uint32, "destination-instance"},
    hello_global_neighbor_id{YType::str, "hello-global-neighbor-id"},
    hello_interface{YType::str, "hello-interface"},
    hello_messages_received{YType::uint64, "hello-messages-received"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    instance_type{YType::enumeration, "instance-type"},
    source_address_xr{YType::str, "source-address-xr"},
    source_instance{YType::uint32, "source-instance"}
    	,
    last_message_sent_time(std::make_shared<Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>())
{
    last_message_sent_time->parent = this;

    yang_name = "hello-interface-instance-detail"; yang_parent_name = "hello-interface-instance-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::~HelloInterfaceInstanceDetail()
{
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| destination_address_xr.is_set
	|| destination_instance.is_set
	|| hello_global_neighbor_id.is_set
	|| hello_interface.is_set
	|| hello_messages_received.is_set
	|| hello_messages_sent.is_set
	|| instance_type.is_set
	|| source_address_xr.is_set
	|| source_instance.is_set
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_data());
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(destination_instance.yfilter)
	|| ydk::is_set(hello_global_neighbor_id.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(hello_messages_received.yfilter)
	|| ydk::is_set(hello_messages_sent.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(source_instance.yfilter)
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_operation());
}

std::string Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-interface-instance-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-detail" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.yfilter)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (hello_global_neighbor_id.is_set || is_set(hello_global_neighbor_id.yfilter)) leaf_name_data.push_back(hello_global_neighbor_id.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.yfilter)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.yfilter)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.yfilter)) leaf_name_data.push_back(source_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-message-sent-time")
    {
        if(last_message_sent_time == nullptr)
        {
            last_message_sent_time = std::make_shared<Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>();
        }
        return last_message_sent_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_message_sent_time != nullptr)
    {
        children["last-message-sent-time"] = last_message_sent_time;
    }

    return children;
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-instance")
    {
        destination_instance = value;
        destination_instance.value_namespace = name_space;
        destination_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id = value;
        hello_global_neighbor_id.value_namespace = name_space;
        hello_global_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received = value;
        hello_messages_received.value_namespace = name_space;
        hello_messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent = value;
        hello_messages_sent.value_namespace = name_space;
        hello_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-instance")
    {
        source_instance = value;
        source_instance.value_namespace = name_space;
        source_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-instance")
    {
        destination_instance.yfilter = yfilter;
    }
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received.yfilter = yfilter;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "source-instance")
    {
        source_instance.yfilter = yfilter;
    }
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-message-sent-time" || name == "source-address" || name == "destination-address" || name == "destination-address-xr" || name == "destination-instance" || name == "hello-global-neighbor-id" || name == "hello-interface" || name == "hello-messages-received" || name == "hello-messages-sent" || name == "instance-type" || name == "source-address-xr" || name == "source-instance")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::LastMessageSentTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "last-message-sent-time"; yang_parent_name = "hello-interface-instance-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::~LastMessageSentTime()
{
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-message-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBriefs()
{

    yang_name = "interface-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Rsvp::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    bandwidth_information(std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    return children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceBriefs::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetaileds()
{

    yang_name = "interface-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceDetaileds::~InterfaceDetaileds()
{
}

bool Rsvp::InterfaceDetaileds::has_data() const
{
    for (std::size_t index=0; index<interface_detailed.size(); index++)
    {
        if(interface_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceDetaileds::has_operation() const
{
    for (std::size_t index=0; index<interface_detailed.size(); index++)
    {
        if(interface_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detailed")
    {
        for(auto const & c : interface_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed>();
        c->parent = this;
        interface_detailed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_detailed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detailed")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::InterfaceDetailed()
    :
    interface_name{YType::str, "interface-name"},
    ack_hold_time{YType::uint32, "ack-hold-time"},
    ack_max_size{YType::uint32, "ack-max-size"},
    bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
    expiry_drops_tolerated{YType::int32, "expiry-drops-tolerated"},
    expiry_interval{YType::int32, "expiry-interval"},
    expiry_states{YType::int32, "expiry-states"},
    expiry_timer_state{YType::enumeration, "expiry-timer-state"},
    integrity_receive_password{YType::str, "integrity-receive-password"},
    integrity_receive_password_optional{YType::uint8, "integrity-receive-password-optional"},
    integrity_send_password{YType::str, "integrity-send-password"},
    interface_name_xr{YType::str, "interface-name-xr"},
    out_of_band_expiry_drops_tolerated{YType::uint32, "out-of-band-expiry-drops-tolerated"},
    out_of_band_refresh_interval{YType::uint32, "out-of-band-refresh-interval"},
    pacing_interval{YType::uint32, "pacing-interval"},
    pacing_message_rate{YType::uint32, "pacing-message-rate"},
    pacing_messages{YType::int32, "pacing-messages"},
    pacing_timer_state{YType::enumeration, "pacing-timer-state"},
    refresh_interval{YType::int32, "refresh-interval"},
    refresh_timer_state{YType::enumeration, "refresh-timer-state"},
    retransmit_time{YType::uint32, "retransmit-time"},
    signalling_ip_tos{YType::uint8, "signalling-ip-tos"},
    summary_refresh_max_size{YType::uint32, "summary-refresh-max-size"},
    summary_refresh_timer_state{YType::enumeration, "summary-refresh-timer-state"}
    	,
    bandwidth_information(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>())
	,flags(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags>())
{
    bandwidth_information->parent = this;
    flags->parent = this;

    yang_name = "interface-detailed"; yang_parent_name = "interface-detaileds"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::~InterfaceDetailed()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::has_data() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| ack_hold_time.is_set
	|| ack_max_size.is_set
	|| bundle_message_max_size.is_set
	|| expiry_drops_tolerated.is_set
	|| expiry_interval.is_set
	|| expiry_states.is_set
	|| expiry_timer_state.is_set
	|| integrity_receive_password.is_set
	|| integrity_receive_password_optional.is_set
	|| integrity_send_password.is_set
	|| interface_name_xr.is_set
	|| out_of_band_expiry_drops_tolerated.is_set
	|| out_of_band_refresh_interval.is_set
	|| pacing_interval.is_set
	|| pacing_message_rate.is_set
	|| pacing_messages.is_set
	|| pacing_timer_state.is_set
	|| refresh_interval.is_set
	|| refresh_timer_state.is_set
	|| retransmit_time.is_set
	|| signalling_ip_tos.is_set
	|| summary_refresh_max_size.is_set
	|| summary_refresh_timer_state.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::has_operation() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ack_hold_time.yfilter)
	|| ydk::is_set(ack_max_size.yfilter)
	|| ydk::is_set(bundle_message_max_size.yfilter)
	|| ydk::is_set(expiry_drops_tolerated.yfilter)
	|| ydk::is_set(expiry_interval.yfilter)
	|| ydk::is_set(expiry_states.yfilter)
	|| ydk::is_set(expiry_timer_state.yfilter)
	|| ydk::is_set(integrity_receive_password.yfilter)
	|| ydk::is_set(integrity_receive_password_optional.yfilter)
	|| ydk::is_set(integrity_send_password.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(out_of_band_expiry_drops_tolerated.yfilter)
	|| ydk::is_set(out_of_band_refresh_interval.yfilter)
	|| ydk::is_set(pacing_interval.yfilter)
	|| ydk::is_set(pacing_message_rate.yfilter)
	|| ydk::is_set(pacing_messages.yfilter)
	|| ydk::is_set(pacing_timer_state.yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| ydk::is_set(refresh_timer_state.yfilter)
	|| ydk::is_set(retransmit_time.yfilter)
	|| ydk::is_set(signalling_ip_tos.yfilter)
	|| ydk::is_set(summary_refresh_max_size.yfilter)
	|| ydk::is_set(summary_refresh_timer_state.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detailed" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.yfilter)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (ack_max_size.is_set || is_set(ack_max_size.yfilter)) leaf_name_data.push_back(ack_max_size.get_name_leafdata());
    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.yfilter)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (expiry_drops_tolerated.is_set || is_set(expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(expiry_drops_tolerated.get_name_leafdata());
    if (expiry_interval.is_set || is_set(expiry_interval.yfilter)) leaf_name_data.push_back(expiry_interval.get_name_leafdata());
    if (expiry_states.is_set || is_set(expiry_states.yfilter)) leaf_name_data.push_back(expiry_states.get_name_leafdata());
    if (expiry_timer_state.is_set || is_set(expiry_timer_state.yfilter)) leaf_name_data.push_back(expiry_timer_state.get_name_leafdata());
    if (integrity_receive_password.is_set || is_set(integrity_receive_password.yfilter)) leaf_name_data.push_back(integrity_receive_password.get_name_leafdata());
    if (integrity_receive_password_optional.is_set || is_set(integrity_receive_password_optional.yfilter)) leaf_name_data.push_back(integrity_receive_password_optional.get_name_leafdata());
    if (integrity_send_password.is_set || is_set(integrity_send_password.yfilter)) leaf_name_data.push_back(integrity_send_password.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (out_of_band_expiry_drops_tolerated.is_set || is_set(out_of_band_expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(out_of_band_expiry_drops_tolerated.get_name_leafdata());
    if (out_of_band_refresh_interval.is_set || is_set(out_of_band_refresh_interval.yfilter)) leaf_name_data.push_back(out_of_band_refresh_interval.get_name_leafdata());
    if (pacing_interval.is_set || is_set(pacing_interval.yfilter)) leaf_name_data.push_back(pacing_interval.get_name_leafdata());
    if (pacing_message_rate.is_set || is_set(pacing_message_rate.yfilter)) leaf_name_data.push_back(pacing_message_rate.get_name_leafdata());
    if (pacing_messages.is_set || is_set(pacing_messages.yfilter)) leaf_name_data.push_back(pacing_messages.get_name_leafdata());
    if (pacing_timer_state.is_set || is_set(pacing_timer_state.yfilter)) leaf_name_data.push_back(pacing_timer_state.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (refresh_timer_state.is_set || is_set(refresh_timer_state.yfilter)) leaf_name_data.push_back(refresh_timer_state.get_name_leafdata());
    if (retransmit_time.is_set || is_set(retransmit_time.yfilter)) leaf_name_data.push_back(retransmit_time.get_name_leafdata());
    if (signalling_ip_tos.is_set || is_set(signalling_ip_tos.yfilter)) leaf_name_data.push_back(signalling_ip_tos.get_name_leafdata());
    if (summary_refresh_max_size.is_set || is_set(summary_refresh_max_size.yfilter)) leaf_name_data.push_back(summary_refresh_max_size.get_name_leafdata());
    if (summary_refresh_timer_state.is_set || is_set(summary_refresh_timer_state.yfilter)) leaf_name_data.push_back(summary_refresh_timer_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "neighbor-array")
    {
        for(auto const & c : neighbor_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray>();
        c->parent = this;
        neighbor_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    for (auto const & c : neighbor_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
        ack_hold_time.value_namespace = name_space;
        ack_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size = value;
        ack_max_size.value_namespace = name_space;
        ack_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
        bundle_message_max_size.value_namespace = name_space;
        bundle_message_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated = value;
        expiry_drops_tolerated.value_namespace = name_space;
        expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval = value;
        expiry_interval.value_namespace = name_space;
        expiry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-states")
    {
        expiry_states = value;
        expiry_states.value_namespace = name_space;
        expiry_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state = value;
        expiry_timer_state.value_namespace = name_space;
        expiry_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password = value;
        integrity_receive_password.value_namespace = name_space;
        integrity_receive_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional = value;
        integrity_receive_password_optional.value_namespace = name_space;
        integrity_receive_password_optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password = value;
        integrity_send_password.value_namespace = name_space;
        integrity_send_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated = value;
        out_of_band_expiry_drops_tolerated.value_namespace = name_space;
        out_of_band_expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval = value;
        out_of_band_refresh_interval.value_namespace = name_space;
        out_of_band_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval = value;
        pacing_interval.value_namespace = name_space;
        pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate = value;
        pacing_message_rate.value_namespace = name_space;
        pacing_message_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages = value;
        pacing_messages.value_namespace = name_space;
        pacing_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state = value;
        pacing_timer_state.value_namespace = name_space;
        pacing_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state = value;
        refresh_timer_state.value_namespace = name_space;
        refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time = value;
        retransmit_time.value_namespace = name_space;
        retransmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos = value;
        signalling_ip_tos.value_namespace = name_space;
        signalling_ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size = value;
        summary_refresh_max_size.value_namespace = name_space;
        summary_refresh_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state = value;
        summary_refresh_timer_state.value_namespace = name_space;
        summary_refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time.yfilter = yfilter;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size.yfilter = yfilter;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size.yfilter = yfilter;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval.yfilter = yfilter;
    }
    if(value_path == "expiry-states")
    {
        expiry_states.yfilter = yfilter;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional.yfilter = yfilter;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval.yfilter = yfilter;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate.yfilter = yfilter;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages.yfilter = yfilter;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state.yfilter = yfilter;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time.yfilter = yfilter;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "flags" || name == "neighbor-array" || name == "interface-name" || name == "ack-hold-time" || name == "ack-max-size" || name == "bundle-message-max-size" || name == "expiry-drops-tolerated" || name == "expiry-interval" || name == "expiry-states" || name == "expiry-timer-state" || name == "integrity-receive-password" || name == "integrity-receive-password-optional" || name == "integrity-send-password" || name == "interface-name-xr" || name == "out-of-band-expiry-drops-tolerated" || name == "out-of-band-refresh-interval" || name == "pacing-interval" || name == "pacing-message-rate" || name == "pacing-messages" || name == "pacing-timer-state" || name == "refresh-interval" || name == "refresh-timer-state" || name == "retransmit-time" || name == "signalling-ip-tos" || name == "summary-refresh-max-size" || name == "summary-refresh-timer-state")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::Flags()
    :
    is_backup_tunnel{YType::boolean, "is-backup-tunnel"},
    is_interface_created{YType::boolean, "is-interface-created"},
    is_interface_down{YType::boolean, "is-interface-down"},
    is_message_bundling_enabled{YType::boolean, "is-message-bundling-enabled"},
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    is_non_default_vrf{YType::boolean, "is-non-default-vrf"},
    is_pacing_enabled{YType::boolean, "is-pacing-enabled"},
    is_refresh_enabled{YType::boolean, "is-refresh-enabled"},
    is_refresh_reduction_enabled{YType::boolean, "is-refresh-reduction-enabled"},
    is_rel_s_refresh_enabled{YType::boolean, "is-rel-s-refresh-enabled"},
    is_rsvp_configured{YType::boolean, "is-rsvp-configured"},
    is_s_refresh_enabled{YType::boolean, "is-s-refresh-enabled"}
{

    yang_name = "flags"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::~Flags()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::has_data() const
{
    return is_backup_tunnel.is_set
	|| is_interface_created.is_set
	|| is_interface_down.is_set
	|| is_message_bundling_enabled.is_set
	|| is_mpls_enabled.is_set
	|| is_non_default_vrf.is_set
	|| is_pacing_enabled.is_set
	|| is_refresh_enabled.is_set
	|| is_refresh_reduction_enabled.is_set
	|| is_rel_s_refresh_enabled.is_set
	|| is_rsvp_configured.is_set
	|| is_s_refresh_enabled.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_backup_tunnel.yfilter)
	|| ydk::is_set(is_interface_created.yfilter)
	|| ydk::is_set(is_interface_down.yfilter)
	|| ydk::is_set(is_message_bundling_enabled.yfilter)
	|| ydk::is_set(is_mpls_enabled.yfilter)
	|| ydk::is_set(is_non_default_vrf.yfilter)
	|| ydk::is_set(is_pacing_enabled.yfilter)
	|| ydk::is_set(is_refresh_enabled.yfilter)
	|| ydk::is_set(is_refresh_reduction_enabled.yfilter)
	|| ydk::is_set(is_rel_s_refresh_enabled.yfilter)
	|| ydk::is_set(is_rsvp_configured.yfilter)
	|| ydk::is_set(is_s_refresh_enabled.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_backup_tunnel.is_set || is_set(is_backup_tunnel.yfilter)) leaf_name_data.push_back(is_backup_tunnel.get_name_leafdata());
    if (is_interface_created.is_set || is_set(is_interface_created.yfilter)) leaf_name_data.push_back(is_interface_created.get_name_leafdata());
    if (is_interface_down.is_set || is_set(is_interface_down.yfilter)) leaf_name_data.push_back(is_interface_down.get_name_leafdata());
    if (is_message_bundling_enabled.is_set || is_set(is_message_bundling_enabled.yfilter)) leaf_name_data.push_back(is_message_bundling_enabled.get_name_leafdata());
    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.yfilter)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (is_non_default_vrf.is_set || is_set(is_non_default_vrf.yfilter)) leaf_name_data.push_back(is_non_default_vrf.get_name_leafdata());
    if (is_pacing_enabled.is_set || is_set(is_pacing_enabled.yfilter)) leaf_name_data.push_back(is_pacing_enabled.get_name_leafdata());
    if (is_refresh_enabled.is_set || is_set(is_refresh_enabled.yfilter)) leaf_name_data.push_back(is_refresh_enabled.get_name_leafdata());
    if (is_refresh_reduction_enabled.is_set || is_set(is_refresh_reduction_enabled.yfilter)) leaf_name_data.push_back(is_refresh_reduction_enabled.get_name_leafdata());
    if (is_rel_s_refresh_enabled.is_set || is_set(is_rel_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_rel_s_refresh_enabled.get_name_leafdata());
    if (is_rsvp_configured.is_set || is_set(is_rsvp_configured.yfilter)) leaf_name_data.push_back(is_rsvp_configured.get_name_leafdata());
    if (is_s_refresh_enabled.is_set || is_set(is_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_s_refresh_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel = value;
        is_backup_tunnel.value_namespace = name_space;
        is_backup_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created = value;
        is_interface_created.value_namespace = name_space;
        is_interface_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down = value;
        is_interface_down.value_namespace = name_space;
        is_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled = value;
        is_message_bundling_enabled.value_namespace = name_space;
        is_message_bundling_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
        is_mpls_enabled.value_namespace = name_space;
        is_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf = value;
        is_non_default_vrf.value_namespace = name_space;
        is_non_default_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled = value;
        is_pacing_enabled.value_namespace = name_space;
        is_pacing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled = value;
        is_refresh_enabled.value_namespace = name_space;
        is_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled = value;
        is_refresh_reduction_enabled.value_namespace = name_space;
        is_refresh_reduction_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled = value;
        is_rel_s_refresh_enabled.value_namespace = name_space;
        is_rel_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured = value;
        is_rsvp_configured.value_namespace = name_space;
        is_rsvp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled = value;
        is_s_refresh_enabled.value_namespace = name_space;
        is_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel.yfilter = yfilter;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created.yfilter = yfilter;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down.yfilter = yfilter;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled.yfilter = yfilter;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf.yfilter = yfilter;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured.yfilter = yfilter;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-backup-tunnel" || name == "is-interface-created" || name == "is-interface-down" || name == "is-message-bundling-enabled" || name == "is-mpls-enabled" || name == "is-non-default-vrf" || name == "is-pacing-enabled" || name == "is-refresh-enabled" || name == "is-refresh-reduction-enabled" || name == "is-rel-s-refresh-enabled" || name == "is-rsvp-configured" || name == "is-s-refresh-enabled")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborArray()
    :
    is_neighbor_refresh_reduction_capable{YType::boolean, "is-neighbor-refresh-reduction-capable"},
    message_ids{YType::uint32, "message-ids"},
    neighbor_address{YType::str, "neighbor-address"},
    outgoing_states{YType::int32, "outgoing-states"}
    	,
    expiry_time(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>())
{
    expiry_time->parent = this;

    yang_name = "neighbor-array"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::~NeighborArray()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_data() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_data())
            return true;
    }
    return is_neighbor_refresh_reduction_capable.is_set
	|| message_ids.is_set
	|| neighbor_address.is_set
	|| outgoing_states.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data());
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor_refresh_reduction_capable.yfilter)
	|| ydk::is_set(message_ids.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(outgoing_states.yfilter)
	|| (expiry_time !=  nullptr && expiry_time->has_operation());
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor_refresh_reduction_capable.is_set || is_set(is_neighbor_refresh_reduction_capable.yfilter)) leaf_name_data.push_back(is_neighbor_refresh_reduction_capable.get_name_leafdata());
    if (message_ids.is_set || is_set(message_ids.yfilter)) leaf_name_data.push_back(message_ids.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (outgoing_states.is_set || is_set(outgoing_states.yfilter)) leaf_name_data.push_back(outgoing_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "neighbor-message-id")
    {
        for(auto const & c : neighbor_message_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId>();
        c->parent = this;
        neighbor_message_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(expiry_time != nullptr)
    {
        children["expiry-time"] = expiry_time;
    }

    for (auto const & c : neighbor_message_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable = value;
        is_neighbor_refresh_reduction_capable.value_namespace = name_space;
        is_neighbor_refresh_reduction_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-ids")
    {
        message_ids = value;
        message_ids.value_namespace = name_space;
        message_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states = value;
        outgoing_states.value_namespace = name_space;
        outgoing_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable.yfilter = yfilter;
    }
    if(value_path == "message-ids")
    {
        message_ids.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time" || name == "neighbor-message-id" || name == "is-neighbor-refresh-reduction-capable" || name == "message-ids" || name == "neighbor-address" || name == "outgoing-states")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::NeighborMessageId()
    :
    message_id{YType::uint32, "message-id"}
{

    yang_name = "neighbor-message-id"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::~NeighborMessageId()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_data() const
{
    return message_id.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id")
        return true;
    return false;
}

Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBriefs()
{

    yang_name = "interface-neighbor-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceNeighborBriefs::~InterfaceNeighborBriefs()
{
}

bool Rsvp::InterfaceNeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_brief.size(); index++)
    {
        if(interface_neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceNeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_brief.size(); index++)
    {
        if(interface_neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceNeighborBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceNeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceNeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-brief")
    {
        for(auto const & c : interface_neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief>();
        c->parent = this;
        interface_neighbor_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceNeighborBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_neighbor_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceNeighborBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceNeighborBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceNeighborBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-brief")
        return true;
    return false;
}

Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborBrief()
    :
    neighbor_address{YType::str, "neighbor-address"},
    node_address{YType::str, "node-address"}
{

    yang_name = "interface-neighbor-brief"; yang_parent_name = "interface-neighbor-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::~InterfaceNeighborBrief()
{
}

bool Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_list_compact.size(); index++)
    {
        if(interface_neighbor_list_compact[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| node_address.is_set;
}

bool Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_list_compact.size(); index++)
    {
        if(interface_neighbor_list_compact[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(node_address.yfilter);
}

std::string Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-neighbor-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-brief" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-list-compact")
    {
        for(auto const & c : interface_neighbor_list_compact)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact>();
        c->parent = this;
        interface_neighbor_list_compact.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_neighbor_list_compact)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-list-compact" || name == "neighbor-address" || name == "node-address")
        return true;
    return false;
}

Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::InterfaceNeighborListCompact()
    :
    interface_neighbor_address{YType::str, "interface-neighbor-address"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"}
{

    yang_name = "interface-neighbor-list-compact"; yang_parent_name = "interface-neighbor-brief"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::~InterfaceNeighborListCompact()
{
}

bool Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::has_data() const
{
    return interface_neighbor_address.is_set
	|| neighbor_interface_name.is_set;
}

bool Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_address.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter);
}

std::string Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-list-compact";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_address.is_set || is_set(interface_neighbor_address.yfilter)) leaf_name_data.push_back(interface_neighbor_address.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address = value;
        interface_neighbor_address.value_namespace = name_space;
        interface_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-address" || name == "neighbor-interface-name")
        return true;
    return false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetails()
{

    yang_name = "interface-neighbor-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceNeighborDetails::~InterfaceNeighborDetails()
{
}

bool Rsvp::InterfaceNeighborDetails::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_detail.size(); index++)
    {
        if(interface_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_detail.size(); index++)
    {
        if(interface_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceNeighborDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-detail")
    {
        for(auto const & c : interface_neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail>();
        c->parent = this;
        interface_neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceNeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceNeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceNeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceNeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-detail")
        return true;
    return false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    node_address{YType::str, "node-address"}
{

    yang_name = "interface-neighbor-detail"; yang_parent_name = "interface-neighbor-details"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::~InterfaceNeighborDetail()
{
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_list_detail.size(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| node_address.is_set;
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_list_detail.size(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(node_address.yfilter);
}

std::string Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-neighbor-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-detail" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-list-detail")
    {
        for(auto const & c : interface_neighbor_list_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail>();
        c->parent = this;
        interface_neighbor_list_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_neighbor_list_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-list-detail" || name == "neighbor-address" || name == "node-address")
        return true;
    return false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::InterfaceNeighborListDetail()
    :
    interface_neighbor_address{YType::str, "interface-neighbor-address"},
    is_rr_enabled{YType::boolean, "is-rr-enabled"},
    neighbor_epoch{YType::uint32, "neighbor-epoch"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
{

    yang_name = "interface-neighbor-list-detail"; yang_parent_name = "interface-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::~InterfaceNeighborListDetail()
{
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_data() const
{
    return interface_neighbor_address.is_set
	|| is_rr_enabled.is_set
	|| neighbor_epoch.is_set
	|| neighbor_interface_name.is_set
	|| out_of_order_messages.is_set
	|| retransmitted_messages.is_set;
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_address.yfilter)
	|| ydk::is_set(is_rr_enabled.yfilter)
	|| ydk::is_set(neighbor_epoch.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter);
}

std::string Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-list-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_address.is_set || is_set(interface_neighbor_address.yfilter)) leaf_name_data.push_back(interface_neighbor_address.get_name_leafdata());
    if (is_rr_enabled.is_set || is_set(is_rr_enabled.yfilter)) leaf_name_data.push_back(is_rr_enabled.get_name_leafdata());
    if (neighbor_epoch.is_set || is_set(neighbor_epoch.yfilter)) leaf_name_data.push_back(neighbor_epoch.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address = value;
        interface_neighbor_address.value_namespace = name_space;
        interface_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled = value;
        is_rr_enabled.value_namespace = name_space;
        is_rr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch = value;
        neighbor_epoch.value_namespace = name_space;
        neighbor_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-address" || name == "is-rr-enabled" || name == "neighbor-epoch" || name == "neighbor-interface-name" || name == "out-of-order-messages" || name == "retransmitted-messages")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummaries()
{

    yang_name = "interface-summaries"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceSummaries::~InterfaceSummaries()
{
}

bool Rsvp::InterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rsvp::InterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    paths_in{YType::uint32, "paths-in"},
    paths_out{YType::uint32, "paths-out"},
    reservations_in{YType::uint32, "reservations-in"},
    reservations_out{YType::uint32, "reservations-out"}
    	,
    bandwidth_information(std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| paths_in.is_set
	|| paths_out.is_set
	|| reservations_in.is_set
	|| reservations_out.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(paths_in.yfilter)
	|| ydk::is_set(paths_out.yfilter)
	|| ydk::is_set(reservations_in.yfilter)
	|| ydk::is_set(reservations_out.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (paths_in.is_set || is_set(paths_in.yfilter)) leaf_name_data.push_back(paths_in.get_name_leafdata());
    if (paths_out.is_set || is_set(paths_out.yfilter)) leaf_name_data.push_back(paths_out.get_name_leafdata());
    if (reservations_in.is_set || is_set(reservations_in.yfilter)) leaf_name_data.push_back(reservations_in.get_name_leafdata());
    if (reservations_out.is_set || is_set(reservations_out.yfilter)) leaf_name_data.push_back(reservations_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_information != nullptr)
    {
        children["bandwidth-information"] = bandwidth_information;
    }

    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-in")
    {
        paths_in = value;
        paths_in.value_namespace = name_space;
        paths_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-out")
    {
        paths_out = value;
        paths_out.value_namespace = name_space;
        paths_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservations-in")
    {
        reservations_in = value;
        reservations_in.value_namespace = name_space;
        reservations_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservations-out")
    {
        reservations_out = value;
        reservations_out.value_namespace = name_space;
        reservations_out.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "paths-in")
    {
        paths_in.yfilter = yfilter;
    }
    if(value_path == "paths-out")
    {
        paths_out.yfilter = yfilter;
    }
    if(value_path == "reservations-in")
    {
        reservations_in.yfilter = yfilter;
    }
    if(value_path == "reservations-out")
    {
        reservations_out.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "interface-name" || name == "interface-name-xr" || name == "paths-in" || name == "paths-out" || name == "reservations-in" || name == "reservations-out")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_standard_dste_interface != nullptr)
    {
        children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        children["standard-dste-interface"] = standard_dste_interface;
    }

    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter);
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-subpool-bandwidth")
        return true;
    return false;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
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

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true;
}

Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_data() const
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

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter);
}

std::string Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute" || name == "max-bandwidth" || name == "max-flow-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth")
        return true;
    return false;
}

Rsvp::Issu::Issu()
    :
    status(std::make_shared<Rsvp::Issu::Status>())
{
    status->parent = this;

    yang_name = "issu"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Issu::~Issu()
{
}

bool Rsvp::Issu::has_data() const
{
    return (status !=  nullptr && status->has_data());
}

bool Rsvp::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string Rsvp::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Rsvp::Issu::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Rsvp::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Rsvp::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<Rsvp::Issu::Status::IdtStatus>())
	,previous_idt_status(std::make_shared<Rsvp::Issu::Status::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Issu::Status::~Status()
{
}

bool Rsvp::Issu::Status::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Issu::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Issu::Status::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Issu::Status::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void Rsvp::Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

Rsvp::Issu::Status::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Issu::Status::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Issu::Status::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Issu::Status::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Issu::Status::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Issu::Status::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Issu::Status::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Issu::Status::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Issu::Status::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Issu::Status::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Issu::Status::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Issu::Status::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Issu::Status::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Issu::Status::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Issu::Status::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Issu::Status::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Issu::Status::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Issu::Status::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Issu::Status::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Issu::Status::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Issu::Status::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rsvp::Issu::Status::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Issu::Status::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Issu::Status::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Nsr::Nsr()
    :
    status(std::make_shared<Rsvp::Nsr::Status>())
{
    status->parent = this;

    yang_name = "nsr"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Nsr::~Nsr()
{
}

bool Rsvp::Nsr::has_data() const
{
    return (status !=  nullptr && status->has_data());
}

bool Rsvp::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string Rsvp::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Rsvp::Nsr::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Rsvp::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Rsvp::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<Rsvp::Nsr::Status::IdtStatus>())
	,previous_idt_status(std::make_shared<Rsvp::Nsr::Status::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

Rsvp::Nsr::Status::~Status()
{
}

bool Rsvp::Nsr::Status::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Nsr::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Nsr::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rsvp::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Nsr::Status::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Nsr::Status::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rsvp::Nsr::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void Rsvp::Nsr::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Nsr::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Nsr::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

const Enum::YLeaf RsvpMgmtDsteModes::pre_standard {1, "pre-standard"};
const Enum::YLeaf RsvpMgmtDsteModes::standard {3, "standard"};

const Enum::YLeaf RsvpMgmtQosServiceEnum::rsvp_mgmt_qos_unknown {0, "rsvp-mgmt-qos-unknown"};
const Enum::YLeaf RsvpMgmtQosServiceEnum::rsvp_mgmt_qos_guaranteed {3, "rsvp-mgmt-qos-guaranteed"};
const Enum::YLeaf RsvpMgmtQosServiceEnum::rsvp_mgmt_qos_controlled_load {5, "rsvp-mgmt-qos-controlled-load"};
const Enum::YLeaf RsvpMgmtQosServiceEnum::rsvp_mgmt_qos_qualitative {6, "rsvp-mgmt-qos-qualitative"};

const Enum::YLeaf RsvpTimerState::rsvp_timer_running_and_sleeping {1, "rsvp-timer-running-and-sleeping"};
const Enum::YLeaf RsvpTimerState::rsvp_timer_running {2, "rsvp-timer-running"};
const Enum::YLeaf RsvpTimerState::rsvp_timer_not_running {3, "rsvp-timer-not-running"};

const Enum::YLeaf RsvpMgmtGenericLabel::rsvp_mgmt_label_type_gmpls {2, "rsvp-mgmt-label-type-gmpls"};

const Enum::YLeaf RsvpMgmtReservationTypeEnum::rsvp_mgmt_ff_option {10, "rsvp-mgmt-ff-option"};
const Enum::YLeaf RsvpMgmtReservationTypeEnum::rsvp_mgmt_wf_option {17, "rsvp-mgmt-wf-option"};
const Enum::YLeaf RsvpMgmtReservationTypeEnum::rsvp_mgmt_se_option {18, "rsvp-mgmt-se-option"};

const Enum::YLeaf RsvpMgmtHelloInstanceOwner::mpls_graceful_restart {0, "mpls-graceful-restart"};
const Enum::YLeaf RsvpMgmtHelloInstanceOwner::mpls_ouni {1, "mpls-ouni"};

const Enum::YLeaf RsvpSyncStatus::not_ready {0, "not-ready"};
const Enum::YLeaf RsvpSyncStatus::ready {1, "ready"};

const Enum::YLeaf RsvpMgmtAuthChallengeStatus::rsvp_mgmt_auth_cs_not_cfg {0, "rsvp-mgmt-auth-cs-not-cfg"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatus::rsvp_mgmt_auth_cs_completed {1, "rsvp-mgmt-auth-cs-completed"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatus::rsvp_mgmt_auth_cs_in_progress {2, "rsvp-mgmt-auth-cs-in-progress"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatus::rsvp_mgmt_auth_cs_failure {3, "rsvp-mgmt-auth-cs-failure"};
const Enum::YLeaf RsvpMgmtAuthChallengeStatus::rsvp_mgmt_auth_cs_not_supported {4, "rsvp-mgmt-auth-cs-not-supported"};

const Enum::YLeaf RsvpMgmtTspec::g709otn {5, "g709otn"};
const Enum::YLeaf RsvpMgmtTspec::intsrv {12, "intsrv"};

const Enum::YLeaf RsvpMgmtSession::rsvp_mgmt_session_type_udp_ipv4 {1, "rsvp-mgmt-session-type-udp-ipv4"};
const Enum::YLeaf RsvpMgmtSession::rsvp_mgmt_session_type_lsp_ipv4 {7, "rsvp-mgmt-session-type-lsp-ipv4"};
const Enum::YLeaf RsvpMgmtSession::rsvp_mgmt_session_type_uni_ipv4 {9, "rsvp-mgmt-session-type-uni-ipv4"};
const Enum::YLeaf RsvpMgmtSession::rsvp_mgmt_session_type_p2mp_lsp_ipv4 {13, "rsvp-mgmt-session-type-p2mp-lsp-ipv4"};

const Enum::YLeaf RsvpMode::send {0, "send"};
const Enum::YLeaf RsvpMode::receive {1, "receive"};

const Enum::YLeaf RsvpMgmtRestartState::done {0, "done"};
const Enum::YLeaf RsvpMgmtRestartState::recovery {1, "recovery"};
const Enum::YLeaf RsvpMgmtRestartState::abort {2, "abort"};

const Enum::YLeaf RsvpMgmtHelloInstance::active {0, "active"};
const Enum::YLeaf RsvpMgmtHelloInstance::passive {1, "passive"};

const Enum::YLeaf IgpteLibBwModel::rdm {0, "rdm"};
const Enum::YLeaf IgpteLibBwModel::mam {1, "mam"};
const Enum::YLeaf IgpteLibBwModel::not_set {2, "not-set"};

const Enum::YLeaf RsvpMgmtFlowSpec::g709otn {5, "g709otn"};

const Enum::YLeaf RsvpMgmtHelloState::hello_state_init {0, "hello-state-init"};
const Enum::YLeaf RsvpMgmtHelloState::hello_state_up {1, "hello-state-up"};
const Enum::YLeaf RsvpMgmtHelloState::hello_state_down {2, "hello-state-down"};

const Enum::YLeaf RsvpMgmtHelloDownReason::not_applicable {0, "not-applicable"};
const Enum::YLeaf RsvpMgmtHelloDownReason::wrong_destination_instance {1, "wrong-destination-instance"};
const Enum::YLeaf RsvpMgmtHelloDownReason::wrong_source_instance {2, "wrong-source-instance"};
const Enum::YLeaf RsvpMgmtHelloDownReason::hello_missed {3, "hello-missed"};
const Enum::YLeaf RsvpMgmtHelloDownReason::interface_down {4, "interface-down"};
const Enum::YLeaf RsvpMgmtHelloDownReason::neighbor_disabled_hello {5, "neighbor-disabled-hello"};
const Enum::YLeaf RsvpMgmtHelloDownReason::control_channel_down {6, "control-channel-down"};

const Enum::YLeaf RsvpMgmtFrrStateEnum::ready_state {0, "ready-state"};
const Enum::YLeaf RsvpMgmtFrrStateEnum::pending_state {1, "pending-state"};
const Enum::YLeaf RsvpMgmtFrrStateEnum::active_state {2, "active-state"};

const Enum::YLeaf RsvpMgmtAssociation::none {0, "none"};
const Enum::YLeaf RsvpMgmtAssociation::ipv4 {1, "ipv4"};
const Enum::YLeaf RsvpMgmtAssociation::ipv6 {2, "ipv6"};
const Enum::YLeaf RsvpMgmtAssociation::extended_ipv4 {3, "extended-ipv4"};
const Enum::YLeaf RsvpMgmtAssociation::extended_ipv6 {4, "extended-ipv6"};

const Enum::YLeaf RsvpSession::ipv4 {1, "ipv4"};
const Enum::YLeaf RsvpSession::p2p_lsp_ipv4 {7, "p2p-lsp-ipv4"};
const Enum::YLeaf RsvpSession::ouni_ipv4 {9, "ouni-ipv4"};
const Enum::YLeaf RsvpSession::p2mp_lsp_ipv4 {13, "p2mp-lsp-ipv4"};

const Enum::YLeaf RsvpMgmtFilter::rsvp_mgmt_filter_type_ipv4 {1, "rsvp-mgmt-filter-type-ipv4"};
const Enum::YLeaf RsvpMgmtFilter::rsvp_mgmt_filter_type_p2mp_lsp_ipv4 {12, "rsvp-mgmt-filter-type-p2mp-lsp-ipv4"};

const Enum::YLeaf RsvpMgmtAuthDirection::rsvp_mgmt_auth_direction_send {0, "rsvp-mgmt-auth-direction-send"};
const Enum::YLeaf RsvpMgmtAuthDirection::rsvp_mgmt_auth_direction_recv {1, "rsvp-mgmt-auth-direction-recv"};

const Enum::YLeaf RsvpMgmtEroSubobj::rsvp_mgmt_ero_type_ipv4 {1, "rsvp-mgmt-ero-type-ipv4"};
const Enum::YLeaf RsvpMgmtEroSubobj::rsvp_mgmt_ero_type_un_num {4, "rsvp-mgmt-ero-type-un-num"};

const Enum::YLeaf RsvpMgmtEroSubobjStatus::rsvp_mgmt_ero_status_not_available {0, "rsvp-mgmt-ero-status-not-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatus::rsvp_mgmt_ero_status_available {1, "rsvp-mgmt-ero-status-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatus::rsvp_mgmt_ero_status_bw_not_available {2, "rsvp-mgmt-ero-status-bw-not-available"};

const Enum::YLeaf RsvpProcRole::unknown {0, "unknown"};
const Enum::YLeaf RsvpProcRole::v1_active {1, "v1-active"};
const Enum::YLeaf RsvpProcRole::v1_standby {2, "v1-standby"};
const Enum::YLeaf RsvpProcRole::v2_active {3, "v2-active"};
const Enum::YLeaf RsvpProcRole::v2_standby {4, "v2-standby"};
const Enum::YLeaf RsvpProcRole::v1_active_post_big_bang {5, "v1-active-post-big-bang"};
const Enum::YLeaf RsvpProcRole::v1_standby_post_big_bang {6, "v1-standby-post-big-bang"};
const Enum::YLeaf RsvpProcRole::count {7, "count"};

const Enum::YLeaf RsvpProcNsrNotReadyReason::collab_time_out {0, "collab-time-out"};
const Enum::YLeaf RsvpProcNsrNotReadyReason::collab_conntection_idt {1, "collab-conntection-idt"};
const Enum::YLeaf RsvpProcNsrNotReadyReason::nsr_peer_not_connected {2, "nsr-peer-not-connected"};
const Enum::YLeaf RsvpProcNsrNotReadyReason::nsr_peer_not_in_sync {3, "nsr-peer-not-in-sync"};

const Enum::YLeaf RsvpMgmtGrApp::ouni {0, "ouni"};
const Enum::YLeaf RsvpMgmtGrApp::gmpls {1, "gmpls"};

const Enum::YLeaf RsvpMgmtRroSubobj::ipv4rro_type {1, "ipv4rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobj::label_rro_type {3, "label-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobj::unnumbered_rro_type {4, "unnumbered-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobj::srlg_rro_type {34, "srlg-rro-type"};

const Enum::YLeaf RsvpMgmtAuthKi::rsvp_mgmt_auth_ki_type_none {0, "rsvp-mgmt-auth-ki-type-none"};
const Enum::YLeaf RsvpMgmtAuthKi::rsvp_mgmt_auth_ki_type_global {1, "rsvp-mgmt-auth-ki-type-global"};
const Enum::YLeaf RsvpMgmtAuthKi::rsvp_mgmt_auth_ki_type_interface {2, "rsvp-mgmt-auth-ki-type-interface"};
const Enum::YLeaf RsvpMgmtAuthKi::rsvp_mgmt_auth_ki_type_neighbor {3, "rsvp-mgmt-auth-ki-type-neighbor"};


}
}

