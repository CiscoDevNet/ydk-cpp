
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg {

DynamicTemplate::DynamicTemplate()
    :
    ppps(std::make_shared<DynamicTemplate::Ppps>())
	,ip_subscribers(std::make_shared<DynamicTemplate::IpSubscribers>())
	,subscriber_services(std::make_shared<DynamicTemplate::SubscriberServices>())
{
    ppps->parent = this;
    ip_subscribers->parent = this;
    subscriber_services->parent = this;

    yang_name = "dynamic-template"; yang_parent_name = "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

DynamicTemplate::~DynamicTemplate()
{
}

bool DynamicTemplate::has_data() const
{
    return (ppps !=  nullptr && ppps->has_data())
	|| (ip_subscribers !=  nullptr && ip_subscribers->has_data())
	|| (subscriber_services !=  nullptr && subscriber_services->has_data());
}

bool DynamicTemplate::has_operation() const
{
    return is_set(yfilter)
	|| (ppps !=  nullptr && ppps->has_operation())
	|| (ip_subscribers !=  nullptr && ip_subscribers->has_operation())
	|| (subscriber_services !=  nullptr && subscriber_services->has_operation());
}

std::string DynamicTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppps")
    {
        if(ppps == nullptr)
        {
            ppps = std::make_shared<DynamicTemplate::Ppps>();
        }
        return ppps;
    }

    if(child_yang_name == "ip-subscribers")
    {
        if(ip_subscribers == nullptr)
        {
            ip_subscribers = std::make_shared<DynamicTemplate::IpSubscribers>();
        }
        return ip_subscribers;
    }

    if(child_yang_name == "subscriber-services")
    {
        if(subscriber_services == nullptr)
        {
            subscriber_services = std::make_shared<DynamicTemplate::SubscriberServices>();
        }
        return subscriber_services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ppps != nullptr)
    {
        children["ppps"] = ppps;
    }

    if(ip_subscribers != nullptr)
    {
        children["ip-subscribers"] = ip_subscribers;
    }

    if(subscriber_services != nullptr)
    {
        children["subscriber-services"] = subscriber_services;
    }

    return children;
}

void DynamicTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DynamicTemplate::clone_ptr() const
{
    return std::make_shared<DynamicTemplate>();
}

std::string DynamicTemplate::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string DynamicTemplate::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function DynamicTemplate::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DynamicTemplate::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool DynamicTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppps" || name == "ip-subscribers" || name == "subscriber-services")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppps()
{

    yang_name = "ppps"; yang_parent_name = "dynamic-template"; is_top_level_class = false; has_list_ancestor = false;
}

DynamicTemplate::Ppps::~Ppps()
{
}

bool DynamicTemplate::Ppps::has_data() const
{
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::Ppps::has_operation() const
{
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DynamicTemplate::Ppps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/" << get_segment_path();
    return path_buffer.str();
}

std::string DynamicTemplate::Ppps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppp")
    {
        for(auto const & c : ppp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DynamicTemplate::Ppps::Ppp>();
        c->parent = this;
        ppp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ppp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DynamicTemplate::Ppps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppp")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ppp()
    :
    template_name{YType::str, "template-name"},
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-subscriber-cfg:vrf"}
    	,
    span_monitor_sessions(std::make_shared<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions>())
	,ipv4_packet_filter(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter>())
	,ipv6_packet_filter(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter>())
	,igmp(std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp>())
	,ipv4_network(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4Network>())
	,ipv6_network(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network>())
	,ipv6_neighbor(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor>())
	,dhcpv6(std::make_shared<DynamicTemplate::Ppps::Ppp::Dhcpv6>())
	,pbr(std::make_shared<DynamicTemplate::Ppps::Ppp::Pbr>())
	,ppp_template(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate>())
	,qos(std::make_shared<DynamicTemplate::Ppps::Ppp::Qos>())
	,accounting(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting>())
	,pppoe_template(std::make_shared<DynamicTemplate::Ppps::Ppp::PppoeTemplate>())
{
    span_monitor_sessions->parent = this;
    ipv4_packet_filter->parent = this;
    ipv6_packet_filter->parent = this;
    igmp->parent = this;
    ipv4_network->parent = this;
    ipv6_network->parent = this;
    ipv6_neighbor->parent = this;
    dhcpv6->parent = this;
    pbr->parent = this;
    ppp_template->parent = this;
    qos->parent = this;
    accounting->parent = this;
    pppoe_template->parent = this;

    yang_name = "ppp"; yang_parent_name = "ppps"; is_top_level_class = false; has_list_ancestor = false;
}

DynamicTemplate::Ppps::Ppp::~Ppp()
{
}

bool DynamicTemplate::Ppps::Ppp::has_data() const
{
    return template_name.is_set
	|| vrf.is_set
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (ppp_template !=  nullptr && ppp_template->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (pppoe_template !=  nullptr && pppoe_template->has_data());
}

bool DynamicTemplate::Ppps::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (ppp_template !=  nullptr && ppp_template->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (pppoe_template !=  nullptr && pppoe_template->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/ppps/" << get_segment_path();
    return path_buffer.str();
}

std::string DynamicTemplate::Ppps::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter")
    {
        if(ipv4_packet_filter == nullptr)
        {
            ipv4_packet_filter = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter>();
        }
        return ipv4_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter")
    {
        if(ipv6_packet_filter == nullptr)
        {
            ipv6_packet_filter = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter>();
        }
        return ipv6_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6")
    {
        if(dhcpv6 == nullptr)
        {
            dhcpv6 = std::make_shared<DynamicTemplate::Ppps::Ppp::Dhcpv6>();
        }
        return dhcpv6;
    }

    if(child_yang_name == "Cisco-IOS-XR-pbr-subscriber-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<DynamicTemplate::Ppps::Ppp::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-gbl-cfg:ppp-template")
    {
        if(ppp_template == nullptr)
        {
            ppp_template = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate>();
        }
        return ppp_template;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-bng-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<DynamicTemplate::Ppps::Ppp::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-accounting-cfg:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-template")
    {
        if(pppoe_template == nullptr)
        {
            pppoe_template = std::make_shared<DynamicTemplate::Ppps::Ppp::PppoeTemplate>();
        }
        return pppoe_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(span_monitor_sessions != nullptr)
    {
        children["Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(ipv4_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv6_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(igmp != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp"] = igmp;
    }

    if(ipv4_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv6_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network"] = ipv6_network;
    }

    if(ipv6_neighbor != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(dhcpv6 != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6"] = dhcpv6;
    }

    if(pbr != nullptr)
    {
        children["Cisco-IOS-XR-pbr-subscriber-cfg:pbr"] = pbr;
    }

    if(ppp_template != nullptr)
    {
        children["Cisco-IOS-XR-ppp-ma-gbl-cfg:ppp-template"] = ppp_template;
    }

    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-bng-cfg:qos"] = qos;
    }

    if(accounting != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-accounting-cfg:accounting"] = accounting;
    }

    if(pppoe_template != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-template"] = pppoe_template;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-infra-rsi-subscriber-cfg:vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-sessions" || name == "ipv4-packet-filter" || name == "ipv6-packet-filter" || name == "igmp" || name == "ipv4-network" || name == "ipv6-network" || name == "ipv6-neighbor" || name == "dhcpv6" || name == "pbr" || name == "ppp-template" || name == "qos" || name == "accounting" || name == "pppoe-template" || name == "template-name" || name == "vrf")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
	,acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(nullptr) // presence node
	,inbound(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound>())
{
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::has_data() const
{
    return (outbound !=  nullptr && outbound->has_data())
	|| (inbound !=  nullptr && inbound->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (outbound !=  nullptr && outbound->has_operation())
	|| (inbound !=  nullptr && inbound->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::Outbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::Outbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Igmp::Igmp()
    :
    default_vrf(std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf>())
{
    default_vrf->parent = this;

    yang_name = "igmp"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Igmp::~Igmp()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::DefaultVrf()
    :
    max_groups{YType::uint32, "max-groups"},
    access_group{YType::str, "access-group"},
    version{YType::uint32, "version"},
    query_interval{YType::uint32, "query-interval"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    multicast_mode{YType::enumeration, "multicast-mode"}
    	,
    explicit_tracking(nullptr) // presence node
{

    yang_name = "default-vrf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::~DefaultVrf()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::has_data() const
{
    return max_groups.is_set
	|| access_group.is_set
	|| version.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| multicast_mode.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_groups.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(multicast_mode.yfilter)
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_groups.is_set || is_set(max_groups.yfilter)) leaf_name_data.push_back(max_groups.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (multicast_mode.is_set || is_set(multicast_mode.yfilter)) leaf_name_data.push_back(multicast_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-groups")
    {
        max_groups = value;
        max_groups.value_namespace = name_space;
        max_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mode")
    {
        multicast_mode = value;
        multicast_mode.value_namespace = name_space;
        multicast_mode.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-groups")
    {
        max_groups.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "multicast-mode")
    {
        multicast_mode.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-tracking" || name == "max-groups" || name == "access-group" || name == "version" || name == "query-interval" || name == "query-max-response-time" || name == "multicast-mode")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::~ExplicitTracking()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv4Network::Ipv4Network()
    :
    unnumbered{YType::str, "unnumbered"},
    mtu{YType::uint32, "mtu"},
    unreachables{YType::boolean, "unreachables"},
    rpf{YType::boolean, "rpf"}
{

    yang_name = "ipv4-network"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv4Network::~Ipv4Network()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4Network::has_data() const
{
    return unnumbered.is_set
	|| mtu.is_set
	|| unreachables.is_set
	|| rpf.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(rpf.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unnumbered" || name == "mtu" || name == "unreachables" || name == "rpf")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    rpf{YType::boolean, "rpf"},
    unreachables{YType::empty, "unreachables"}
    	,
    addresses(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses>())
{
    addresses->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::~Ipv6Network()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| rpf.is_set
	|| unreachables.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "mtu" || name == "rpf" || name == "unreachables")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration>())
{
    auto_configuration->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::~Addresses()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_configuration != nullptr)
    {
        children["auto-configuration"] = auto_configuration;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-configuration")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "auto-configuration"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::Ipv6Neighbor()
    :
    framed_prefix_pool{YType::str, "framed-prefix-pool"},
    managed_config{YType::empty, "managed-config"},
    other_config{YType::empty, "other-config"},
    start_ra_on_ipv6_enable{YType::empty, "start-ra-on-ipv6-enable"},
    nud_enable{YType::empty, "nud-enable"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    router_preference{YType::enumeration, "router-preference"},
    ra_suppress{YType::empty, "ra-suppress"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    ra_suppress_mtu{YType::empty, "ra-suppress-mtu"},
    suppress_cache_learning{YType::empty, "suppress-cache-learning"},
    reachable_time{YType::uint32, "reachable-time"},
    ns_interval{YType::uint32, "ns-interval"}
    	,
    ra_interval(nullptr) // presence node
	,framed_prefix(nullptr) // presence node
	,duplicate_address_detection(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection>())
	,ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::has_data() const
{
    return framed_prefix_pool.is_set
	|| managed_config.is_set
	|| other_config.is_set
	|| start_ra_on_ipv6_enable.is_set
	|| nud_enable.is_set
	|| ra_lifetime.is_set
	|| router_preference.is_set
	|| ra_suppress.is_set
	|| ra_unicast.is_set
	|| ra_unspecify_hoplimit.is_set
	|| ra_suppress_mtu.is_set
	|| suppress_cache_learning.is_set
	|| reachable_time.is_set
	|| ns_interval.is_set
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (framed_prefix !=  nullptr && framed_prefix->has_data())
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_data())
	|| (ra_initial !=  nullptr && ra_initial->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(framed_prefix_pool.yfilter)
	|| ydk::is_set(managed_config.yfilter)
	|| ydk::is_set(other_config.yfilter)
	|| ydk::is_set(start_ra_on_ipv6_enable.yfilter)
	|| ydk::is_set(nud_enable.yfilter)
	|| ydk::is_set(ra_lifetime.yfilter)
	|| ydk::is_set(router_preference.yfilter)
	|| ydk::is_set(ra_suppress.yfilter)
	|| ydk::is_set(ra_unicast.yfilter)
	|| ydk::is_set(ra_unspecify_hoplimit.yfilter)
	|| ydk::is_set(ra_suppress_mtu.yfilter)
	|| ydk::is_set(suppress_cache_learning.yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(ns_interval.yfilter)
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (framed_prefix !=  nullptr && framed_prefix->has_operation())
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_operation())
	|| (ra_initial !=  nullptr && ra_initial->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (framed_prefix_pool.is_set || is_set(framed_prefix_pool.yfilter)) leaf_name_data.push_back(framed_prefix_pool.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.yfilter)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.yfilter)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (start_ra_on_ipv6_enable.is_set || is_set(start_ra_on_ipv6_enable.yfilter)) leaf_name_data.push_back(start_ra_on_ipv6_enable.get_name_leafdata());
    if (nud_enable.is_set || is_set(nud_enable.yfilter)) leaf_name_data.push_back(nud_enable.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.yfilter)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.yfilter)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.yfilter)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.yfilter)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.yfilter)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (ra_suppress_mtu.is_set || is_set(ra_suppress_mtu.yfilter)) leaf_name_data.push_back(ra_suppress_mtu.get_name_leafdata());
    if (suppress_cache_learning.is_set || is_set(suppress_cache_learning.yfilter)) leaf_name_data.push_back(suppress_cache_learning.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.yfilter)) leaf_name_data.push_back(ns_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "framed-prefix")
    {
        if(framed_prefix == nullptr)
        {
            framed_prefix = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix>();
        }
        return framed_prefix;
    }

    if(child_yang_name == "duplicate-address-detection")
    {
        if(duplicate_address_detection == nullptr)
        {
            duplicate_address_detection = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection>();
        }
        return duplicate_address_detection;
    }

    if(child_yang_name == "ra-initial")
    {
        if(ra_initial == nullptr)
        {
            ra_initial = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial>();
        }
        return ra_initial;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ra_interval != nullptr)
    {
        children["ra-interval"] = ra_interval;
    }

    if(framed_prefix != nullptr)
    {
        children["framed-prefix"] = framed_prefix;
    }

    if(duplicate_address_detection != nullptr)
    {
        children["duplicate-address-detection"] = duplicate_address_detection;
    }

    if(ra_initial != nullptr)
    {
        children["ra-initial"] = ra_initial;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool = value;
        framed_prefix_pool.value_namespace = name_space;
        framed_prefix_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
        managed_config.value_namespace = name_space;
        managed_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config")
    {
        other_config = value;
        other_config.value_namespace = name_space;
        other_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable = value;
        start_ra_on_ipv6_enable.value_namespace = name_space;
        start_ra_on_ipv6_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nud-enable")
    {
        nud_enable = value;
        nud_enable.value_namespace = name_space;
        nud_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
        ra_lifetime.value_namespace = name_space;
        ra_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
        router_preference.value_namespace = name_space;
        router_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
        ra_suppress.value_namespace = name_space;
        ra_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
        ra_unicast.value_namespace = name_space;
        ra_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
        ra_unspecify_hoplimit.value_namespace = name_space;
        ra_unspecify_hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu = value;
        ra_suppress_mtu.value_namespace = name_space;
        ra_suppress_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning = value;
        suppress_cache_learning.value_namespace = name_space;
        suppress_cache_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
        ns_interval.value_namespace = name_space;
        ns_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool.yfilter = yfilter;
    }
    if(value_path == "managed-config")
    {
        managed_config.yfilter = yfilter;
    }
    if(value_path == "other-config")
    {
        other_config.yfilter = yfilter;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable.yfilter = yfilter;
    }
    if(value_path == "nud-enable")
    {
        nud_enable.yfilter = yfilter;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime.yfilter = yfilter;
    }
    if(value_path == "router-preference")
    {
        router_preference.yfilter = yfilter;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress.yfilter = yfilter;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast.yfilter = yfilter;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit.yfilter = yfilter;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu.yfilter = yfilter;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning.yfilter = yfilter;
    }
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "ns-interval")
    {
        ns_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra-interval" || name == "framed-prefix" || name == "duplicate-address-detection" || name == "ra-initial" || name == "framed-prefix-pool" || name == "managed-config" || name == "other-config" || name == "start-ra-on-ipv6-enable" || name == "nud-enable" || name == "ra-lifetime" || name == "router-preference" || name == "ra-suppress" || name == "ra-unicast" || name == "ra-unspecify-hoplimit" || name == "ra-suppress-mtu" || name == "suppress-cache-learning" || name == "reachable-time" || name == "ns-interval")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::FramedPrefix()
    :
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::has_data() const
{
    return prefix_length.is_set
	|| prefix.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framed-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::DuplicateAddressDetection()
    :
    attempts{YType::uint32, "attempts"}
{

    yang_name = "duplicate-address-detection"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::~DuplicateAddressDetection()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::has_data() const
{
    return attempts.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attempts.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-address-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.yfilter)) leaf_name_data.push_back(attempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attempts")
    {
        attempts = value;
        attempts.value_namespace = name_space;
        attempts.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attempts")
    {
        attempts.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attempts")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::RaInitial()
    :
    count{YType::uint32, "count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-initial";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::Dhcpv6()
    :
    dns_ipv6address{YType::str, "dns-ipv6address"},
    mode_class{YType::str, "mode-class"},
    address_pool{YType::str, "address-pool"},
    delegated_prefix_pool{YType::str, "delegated-prefix-pool"},
    class_{YType::str, "class"},
    stateful_address{YType::str, "stateful-address"}
    	,
    delegated_prefix(nullptr) // presence node
{

    yang_name = "dhcpv6"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::~Dhcpv6()
{
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::has_data() const
{
    return dns_ipv6address.is_set
	|| mode_class.is_set
	|| address_pool.is_set
	|| delegated_prefix_pool.is_set
	|| class_.is_set
	|| stateful_address.is_set
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_ipv6address.yfilter)
	|| ydk::is_set(mode_class.yfilter)
	|| ydk::is_set(address_pool.yfilter)
	|| ydk::is_set(delegated_prefix_pool.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(stateful_address.yfilter)
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Dhcpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_ipv6address.is_set || is_set(dns_ipv6address.yfilter)) leaf_name_data.push_back(dns_ipv6address.get_name_leafdata());
    if (mode_class.is_set || is_set(mode_class.yfilter)) leaf_name_data.push_back(mode_class.get_name_leafdata());
    if (address_pool.is_set || is_set(address_pool.yfilter)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (delegated_prefix_pool.is_set || is_set(delegated_prefix_pool.yfilter)) leaf_name_data.push_back(delegated_prefix_pool.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (stateful_address.is_set || is_set(stateful_address.yfilter)) leaf_name_data.push_back(stateful_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delegated-prefix")
    {
        if(delegated_prefix == nullptr)
        {
            delegated_prefix = std::make_shared<DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix>();
        }
        return delegated_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Dhcpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delegated_prefix != nullptr)
    {
        children["delegated-prefix"] = delegated_prefix;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Dhcpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-ipv6address")
    {
        dns_ipv6address = value;
        dns_ipv6address.value_namespace = name_space;
        dns_ipv6address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-class")
    {
        mode_class = value;
        mode_class.value_namespace = name_space;
        mode_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-pool")
    {
        address_pool = value;
        address_pool.value_namespace = name_space;
        address_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegated-prefix-pool")
    {
        delegated_prefix_pool = value;
        delegated_prefix_pool.value_namespace = name_space;
        delegated_prefix_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-address")
    {
        stateful_address = value;
        stateful_address.value_namespace = name_space;
        stateful_address.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Dhcpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-ipv6address")
    {
        dns_ipv6address.yfilter = yfilter;
    }
    if(value_path == "mode-class")
    {
        mode_class.yfilter = yfilter;
    }
    if(value_path == "address-pool")
    {
        address_pool.yfilter = yfilter;
    }
    if(value_path == "delegated-prefix-pool")
    {
        delegated_prefix_pool.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "stateful-address")
    {
        stateful_address.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delegated-prefix" || name == "dns-ipv6address" || name == "mode-class" || name == "address-pool" || name == "delegated-prefix-pool" || name == "class" || name == "stateful-address")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::DelegatedPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "delegated-prefix"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::~DelegatedPrefix()
{
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_shared<DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "pbr"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Pbr::~Pbr()
{
}

bool DynamicTemplate::Ppps::Ppp::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Pbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_in.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-subscriber-cfg:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-in")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{

    yang_name = "service-policy"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::PppTemplate()
    :
    fsm(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm>())
	,lcp(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp>())
	,ipv6cp(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp>())
	,ipcp(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp>())
{
    fsm->parent = this;
    lcp->parent = this;
    ipv6cp->parent = this;
    ipcp->parent = this;

    yang_name = "ppp-template"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::~PppTemplate()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::has_data() const
{
    return (fsm !=  nullptr && fsm->has_data())
	|| (lcp !=  nullptr && lcp->has_data())
	|| (ipv6cp !=  nullptr && ipv6cp->has_data())
	|| (ipcp !=  nullptr && ipcp->has_data());
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::has_operation() const
{
    return is_set(yfilter)
	|| (fsm !=  nullptr && fsm->has_operation())
	|| (lcp !=  nullptr && lcp->has_operation())
	|| (ipv6cp !=  nullptr && ipv6cp->has_operation())
	|| (ipcp !=  nullptr && ipcp->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-gbl-cfg:ppp-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsm")
    {
        if(fsm == nullptr)
        {
            fsm = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm>();
        }
        return fsm;
    }

    if(child_yang_name == "lcp")
    {
        if(lcp == nullptr)
        {
            lcp = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp>();
        }
        return lcp;
    }

    if(child_yang_name == "ipv6cp")
    {
        if(ipv6cp == nullptr)
        {
            ipv6cp = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp>();
        }
        return ipv6cp;
    }

    if(child_yang_name == "ipcp")
    {
        if(ipcp == nullptr)
        {
            ipcp = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp>();
        }
        return ipcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fsm != nullptr)
    {
        children["fsm"] = fsm;
    }

    if(lcp != nullptr)
    {
        children["lcp"] = lcp;
    }

    if(ipv6cp != nullptr)
    {
        children["ipv6cp"] = ipv6cp;
    }

    if(ipcp != nullptr)
    {
        children["ipcp"] = ipcp;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm" || name == "lcp" || name == "ipv6cp" || name == "ipcp")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::Fsm()
    :
    max_consecutive_conf_naks{YType::uint32, "max-consecutive-conf-naks"},
    max_unacknowledged_conf_requests{YType::uint32, "max-unacknowledged-conf-requests"},
    retry_timeout{YType::uint32, "retry-timeout"},
    protocol_reject_timeout{YType::uint32, "protocol-reject-timeout"}
{

    yang_name = "fsm"; yang_parent_name = "ppp-template"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::~Fsm()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::has_data() const
{
    return max_consecutive_conf_naks.is_set
	|| max_unacknowledged_conf_requests.is_set
	|| retry_timeout.is_set
	|| protocol_reject_timeout.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_consecutive_conf_naks.yfilter)
	|| ydk::is_set(max_unacknowledged_conf_requests.yfilter)
	|| ydk::is_set(retry_timeout.yfilter)
	|| ydk::is_set(protocol_reject_timeout.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_consecutive_conf_naks.is_set || is_set(max_consecutive_conf_naks.yfilter)) leaf_name_data.push_back(max_consecutive_conf_naks.get_name_leafdata());
    if (max_unacknowledged_conf_requests.is_set || is_set(max_unacknowledged_conf_requests.yfilter)) leaf_name_data.push_back(max_unacknowledged_conf_requests.get_name_leafdata());
    if (retry_timeout.is_set || is_set(retry_timeout.yfilter)) leaf_name_data.push_back(retry_timeout.get_name_leafdata());
    if (protocol_reject_timeout.is_set || is_set(protocol_reject_timeout.yfilter)) leaf_name_data.push_back(protocol_reject_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks = value;
        max_consecutive_conf_naks.value_namespace = name_space;
        max_consecutive_conf_naks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests = value;
        max_unacknowledged_conf_requests.value_namespace = name_space;
        max_unacknowledged_conf_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-timeout")
    {
        retry_timeout = value;
        retry_timeout.value_namespace = name_space;
        retry_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-reject-timeout")
    {
        protocol_reject_timeout = value;
        protocol_reject_timeout.value_namespace = name_space;
        protocol_reject_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-consecutive-conf-naks")
    {
        max_consecutive_conf_naks.yfilter = yfilter;
    }
    if(value_path == "max-unacknowledged-conf-requests")
    {
        max_unacknowledged_conf_requests.yfilter = yfilter;
    }
    if(value_path == "retry-timeout")
    {
        retry_timeout.yfilter = yfilter;
    }
    if(value_path == "protocol-reject-timeout")
    {
        protocol_reject_timeout.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-consecutive-conf-naks" || name == "max-unacknowledged-conf-requests" || name == "retry-timeout" || name == "protocol-reject-timeout")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Lcp()
    :
    renegotiation{YType::empty, "renegotiation"},
    service_type{YType::uint32, "service-type"},
    send_term_request_on_shut_down{YType::empty, "send-term-request-on-shut-down"},
    mru_ignore{YType::empty, "mru-ignore"}
    	,
    absolute_timeout(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout>())
	,delay(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay>())
	,authentication(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication>())
	,keepalive(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive>())
{
    absolute_timeout->parent = this;
    delay->parent = this;
    authentication->parent = this;
    keepalive->parent = this;

    yang_name = "lcp"; yang_parent_name = "ppp-template"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::~Lcp()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::has_data() const
{
    return renegotiation.is_set
	|| service_type.is_set
	|| send_term_request_on_shut_down.is_set
	|| mru_ignore.is_set
	|| (absolute_timeout !=  nullptr && absolute_timeout->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data());
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(renegotiation.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| ydk::is_set(send_term_request_on_shut_down.yfilter)
	|| ydk::is_set(mru_ignore.yfilter)
	|| (absolute_timeout !=  nullptr && absolute_timeout->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (renegotiation.is_set || is_set(renegotiation.yfilter)) leaf_name_data.push_back(renegotiation.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());
    if (send_term_request_on_shut_down.is_set || is_set(send_term_request_on_shut_down.yfilter)) leaf_name_data.push_back(send_term_request_on_shut_down.get_name_leafdata());
    if (mru_ignore.is_set || is_set(mru_ignore.yfilter)) leaf_name_data.push_back(mru_ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute-timeout")
    {
        if(absolute_timeout == nullptr)
        {
            absolute_timeout = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout>();
        }
        return absolute_timeout;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute_timeout != nullptr)
    {
        children["absolute-timeout"] = absolute_timeout;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "renegotiation")
    {
        renegotiation = value;
        renegotiation.value_namespace = name_space;
        renegotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-term-request-on-shut-down")
    {
        send_term_request_on_shut_down = value;
        send_term_request_on_shut_down.value_namespace = name_space;
        send_term_request_on_shut_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mru-ignore")
    {
        mru_ignore = value;
        mru_ignore.value_namespace = name_space;
        mru_ignore.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "renegotiation")
    {
        renegotiation.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
    if(value_path == "send-term-request-on-shut-down")
    {
        send_term_request_on_shut_down.yfilter = yfilter;
    }
    if(value_path == "mru-ignore")
    {
        mru_ignore.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute-timeout" || name == "delay" || name == "authentication" || name == "keepalive" || name == "renegotiation" || name == "service-type" || name == "send-term-request-on-shut-down" || name == "mru-ignore")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::AbsoluteTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "absolute-timeout"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::~AbsoluteTimeout()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::Delay()
    :
    seconds{YType::uint32, "seconds"},
    milliseconds{YType::uint32, "milliseconds"}
{

    yang_name = "delay"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::~Delay()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::has_data() const
{
    return seconds.is_set
	|| milliseconds.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(milliseconds.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "milliseconds")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Authentication()
    :
    chap_host_name{YType::str, "chap-host-name"},
    pap{YType::int32, "pap"},
    mschap_host_name{YType::str, "mschap-host-name"},
    max_authentication_failures{YType::uint32, "max-authentication-failures"},
    timeout{YType::uint32, "timeout"}
    	,
    methods(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods>())
{
    methods->parent = this;

    yang_name = "authentication"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::~Authentication()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::has_data() const
{
    return chap_host_name.is_set
	|| pap.is_set
	|| mschap_host_name.is_set
	|| max_authentication_failures.is_set
	|| timeout.is_set
	|| (methods !=  nullptr && methods->has_data());
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chap_host_name.yfilter)
	|| ydk::is_set(pap.yfilter)
	|| ydk::is_set(mschap_host_name.yfilter)
	|| ydk::is_set(max_authentication_failures.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (methods !=  nullptr && methods->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chap_host_name.is_set || is_set(chap_host_name.yfilter)) leaf_name_data.push_back(chap_host_name.get_name_leafdata());
    if (pap.is_set || is_set(pap.yfilter)) leaf_name_data.push_back(pap.get_name_leafdata());
    if (mschap_host_name.is_set || is_set(mschap_host_name.yfilter)) leaf_name_data.push_back(mschap_host_name.get_name_leafdata());
    if (max_authentication_failures.is_set || is_set(max_authentication_failures.yfilter)) leaf_name_data.push_back(max_authentication_failures.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "methods")
    {
        if(methods == nullptr)
        {
            methods = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods>();
        }
        return methods;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(methods != nullptr)
    {
        children["methods"] = methods;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chap-host-name")
    {
        chap_host_name = value;
        chap_host_name.value_namespace = name_space;
        chap_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pap")
    {
        pap = value;
        pap.value_namespace = name_space;
        pap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mschap-host-name")
    {
        mschap_host_name = value;
        mschap_host_name.value_namespace = name_space;
        mschap_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures = value;
        max_authentication_failures.value_namespace = name_space;
        max_authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chap-host-name")
    {
        chap_host_name.yfilter = yfilter;
    }
    if(value_path == "pap")
    {
        pap.yfilter = yfilter;
    }
    if(value_path == "mschap-host-name")
    {
        mschap_host_name.yfilter = yfilter;
    }
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "methods" || name == "chap-host-name" || name == "pap" || name == "mschap-host-name" || name == "max-authentication-failures" || name == "timeout")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::Methods()
    :
    method{YType::enumeration, "method"}
{

    yang_name = "methods"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::~Methods()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "methods";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method.append(value);
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::Keepalive()
    :
    keepalive_disable{YType::boolean, "keepalive-disable"},
    interval{YType::uint32, "interval"},
    retry_count{YType::uint32, "retry-count"}
{

    yang_name = "keepalive"; yang_parent_name = "lcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::~Keepalive()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::has_data() const
{
    return keepalive_disable.is_set
	|| interval.is_set
	|| retry_count.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_disable.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(retry_count.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_disable.is_set || is_set(keepalive_disable.yfilter)) leaf_name_data.push_back(keepalive_disable.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.yfilter)) leaf_name_data.push_back(retry_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-disable")
    {
        keepalive_disable = value;
        keepalive_disable.value_namespace = name_space;
        keepalive_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
        retry_count.value_namespace = name_space;
        retry_count.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-disable")
    {
        keepalive_disable.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "retry-count")
    {
        retry_count.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-disable" || name == "interval" || name == "retry-count")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::Ipv6Cp()
    :
    passive{YType::empty, "passive"},
    renegotiation{YType::empty, "renegotiation"},
    peer_interface_id{YType::str, "peer-interface-id"},
    protocol_reject{YType::empty, "protocol-reject"}
{

    yang_name = "ipv6cp"; yang_parent_name = "ppp-template"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::~Ipv6Cp()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::has_data() const
{
    return passive.is_set
	|| renegotiation.is_set
	|| peer_interface_id.is_set
	|| protocol_reject.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(renegotiation.yfilter)
	|| ydk::is_set(peer_interface_id.yfilter)
	|| ydk::is_set(protocol_reject.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6cp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (renegotiation.is_set || is_set(renegotiation.yfilter)) leaf_name_data.push_back(renegotiation.get_name_leafdata());
    if (peer_interface_id.is_set || is_set(peer_interface_id.yfilter)) leaf_name_data.push_back(peer_interface_id.get_name_leafdata());
    if (protocol_reject.is_set || is_set(protocol_reject.yfilter)) leaf_name_data.push_back(protocol_reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "renegotiation")
    {
        renegotiation = value;
        renegotiation.value_namespace = name_space;
        renegotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-interface-id")
    {
        peer_interface_id = value;
        peer_interface_id.value_namespace = name_space;
        peer_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-reject")
    {
        protocol_reject = value;
        protocol_reject.value_namespace = name_space;
        protocol_reject.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "renegotiation")
    {
        renegotiation.yfilter = yfilter;
    }
    if(value_path == "peer-interface-id")
    {
        peer_interface_id.yfilter = yfilter;
    }
    if(value_path == "protocol-reject")
    {
        protocol_reject.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6Cp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive" || name == "renegotiation" || name == "peer-interface-id" || name == "protocol-reject")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Ipcp()
    :
    renegotiation{YType::empty, "renegotiation"},
    passive{YType::empty, "passive"},
    protocol_reject{YType::empty, "protocol-reject"},
    peer_netmask{YType::str, "peer-netmask"}
    	,
    wins(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins>())
	,dns(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns>())
	,peer_address(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress>())
{
    wins->parent = this;
    dns->parent = this;
    peer_address->parent = this;

    yang_name = "ipcp"; yang_parent_name = "ppp-template"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::~Ipcp()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::has_data() const
{
    return renegotiation.is_set
	|| passive.is_set
	|| protocol_reject.is_set
	|| peer_netmask.is_set
	|| (wins !=  nullptr && wins->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (peer_address !=  nullptr && peer_address->has_data());
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(renegotiation.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(protocol_reject.yfilter)
	|| ydk::is_set(peer_netmask.yfilter)
	|| (wins !=  nullptr && wins->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (peer_address !=  nullptr && peer_address->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (renegotiation.is_set || is_set(renegotiation.yfilter)) leaf_name_data.push_back(renegotiation.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (protocol_reject.is_set || is_set(protocol_reject.yfilter)) leaf_name_data.push_back(protocol_reject.get_name_leafdata());
    if (peer_netmask.is_set || is_set(peer_netmask.yfilter)) leaf_name_data.push_back(peer_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wins")
    {
        if(wins == nullptr)
        {
            wins = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins>();
        }
        return wins;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress>();
        }
        return peer_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wins != nullptr)
    {
        children["wins"] = wins;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(peer_address != nullptr)
    {
        children["peer-address"] = peer_address;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "renegotiation")
    {
        renegotiation = value;
        renegotiation.value_namespace = name_space;
        renegotiation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-reject")
    {
        protocol_reject = value;
        protocol_reject.value_namespace = name_space;
        protocol_reject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-netmask")
    {
        peer_netmask = value;
        peer_netmask.value_namespace = name_space;
        peer_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "renegotiation")
    {
        renegotiation.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "protocol-reject")
    {
        protocol_reject.yfilter = yfilter;
    }
    if(value_path == "peer-netmask")
    {
        peer_netmask.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wins" || name == "dns" || name == "peer-address" || name == "renegotiation" || name == "passive" || name == "protocol-reject" || name == "peer-netmask")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::Wins()
    :
    wins_addresses(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses>())
{
    wins_addresses->parent = this;

    yang_name = "wins"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::~Wins()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::has_data() const
{
    return (wins_addresses !=  nullptr && wins_addresses->has_data());
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::has_operation() const
{
    return is_set(yfilter)
	|| (wins_addresses !=  nullptr && wins_addresses->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wins";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wins-addresses")
    {
        if(wins_addresses == nullptr)
        {
            wins_addresses = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses>();
        }
        return wins_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wins_addresses != nullptr)
    {
        children["wins-addresses"] = wins_addresses;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wins-addresses")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::WinsAddresses()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "wins-addresses"; yang_parent_name = "wins"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::~WinsAddresses()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wins-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::Dns()
    :
    dns_addresses(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses>())
{
    dns_addresses->parent = this;

    yang_name = "dns"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::~Dns()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::has_data() const
{
    return (dns_addresses !=  nullptr && dns_addresses->has_data());
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (dns_addresses !=  nullptr && dns_addresses->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-addresses")
    {
        if(dns_addresses == nullptr)
        {
            dns_addresses = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses>();
        }
        return dns_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dns_addresses != nullptr)
    {
        children["dns-addresses"] = dns_addresses;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-addresses")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::DnsAddresses()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns-addresses"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::~DnsAddresses()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::PeerAddress()
    :
    default_{YType::str, "default"},
    pool{YType::str, "pool"}
{

    yang_name = "peer-address"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::~PeerAddress()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::has_data() const
{
    return default_.is_set
	|| pool.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(pool.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "pool")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Qos::Qos()
    :
    service_policy(std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy>())
	,account(std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::Account>())
	,output(std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::Output>())
{
    service_policy->parent = this;
    account->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Qos::~Qos()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data())
	|| (account !=  nullptr && account->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (account !=  nullptr && account->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-bng-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "account" || name == "output")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::ServicePolicy()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{

    yang_name = "service-policy"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::Input()
    :
    policy_name{YType::str, "policy-name"},
    spi_name{YType::str, "spi-name"},
    merge{YType::boolean, "merge"},
    merge_id{YType::uint32, "merge-id"},
    account_stats{YType::boolean, "account-stats"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::~Input()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::has_data() const
{
    return policy_name.is_set
	|| spi_name.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| account_stats.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(merge.yfilter)
	|| ydk::is_set(merge_id.yfilter)
	|| ydk::is_set(account_stats.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.yfilter)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (account_stats.is_set || is_set(account_stats.yfilter)) leaf_name_data.push_back(account_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
        merge_id.value_namespace = name_space;
        merge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-stats")
    {
        account_stats = value;
        account_stats.value_namespace = name_space;
        account_stats.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
    if(value_path == "merge-id")
    {
        merge_id.yfilter = yfilter;
    }
    if(value_path == "account-stats")
    {
        account_stats.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "spi-name" || name == "merge" || name == "merge-id" || name == "account-stats")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::Output()
    :
    policy_name{YType::str, "policy-name"},
    spi_name{YType::str, "spi-name"},
    merge{YType::boolean, "merge"},
    merge_id{YType::uint32, "merge-id"},
    account_stats{YType::boolean, "account-stats"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::~Output()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::has_data() const
{
    return policy_name.is_set
	|| spi_name.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| account_stats.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(merge.yfilter)
	|| ydk::is_set(merge_id.yfilter)
	|| ydk::is_set(account_stats.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.yfilter)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (account_stats.is_set || is_set(account_stats.yfilter)) leaf_name_data.push_back(account_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
        merge_id.value_namespace = name_space;
        merge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-stats")
    {
        account_stats = value;
        account_stats.value_namespace = name_space;
        account_stats.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
    if(value_path == "merge-id")
    {
        merge_id.yfilter = yfilter;
    }
    if(value_path == "account-stats")
    {
        account_stats.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "spi-name" || name == "merge" || name == "merge-id" || name == "account-stats")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Qos::Account::Account()
    :
    aal{YType::enumeration, "aal"},
    encapsulation{YType::enumeration, "encapsulation"},
    atm_cell_tax{YType::empty, "atm-cell-tax"},
    user_defined{YType::int32, "user-defined"}
{

    yang_name = "account"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Qos::Account::~Account()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::Account::has_data() const
{
    return aal.is_set
	|| encapsulation.is_set
	|| atm_cell_tax.is_set
	|| user_defined.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aal.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(atm_cell_tax.yfilter)
	|| ydk::is_set(user_defined.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Qos::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal.is_set || is_set(aal.yfilter)) leaf_name_data.push_back(aal.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (atm_cell_tax.is_set || is_set(atm_cell_tax.yfilter)) leaf_name_data.push_back(atm_cell_tax.get_name_leafdata());
    if (user_defined.is_set || is_set(user_defined.yfilter)) leaf_name_data.push_back(user_defined.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aal")
    {
        aal = value;
        aal.value_namespace = name_space;
        aal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax = value;
        atm_cell_tax.value_namespace = name_space;
        atm_cell_tax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-defined")
    {
        user_defined = value;
        user_defined.value_namespace = name_space;
        user_defined.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aal")
    {
        aal.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax.yfilter = yfilter;
    }
    if(value_path == "user-defined")
    {
        user_defined.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aal" || name == "encapsulation" || name == "atm-cell-tax" || name == "user-defined")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Qos::Output::Output()
    :
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"}
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Qos::Output::~Output()
{
}

bool DynamicTemplate::Ppps::Ppp::Qos::Output::has_data() const
{
    return minimum_bandwidth.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Qos::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-bandwidth")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Accounting::Accounting()
    :
    prepaid_feature{YType::str, "prepaid-feature"}
    	,
    idle_timeout(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout>())
	,session(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::Session>())
	,service_accounting(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting>())
{
    idle_timeout->parent = this;
    session->parent = this;
    service_accounting->parent = this;

    yang_name = "accounting"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Accounting::~Accounting()
{
}

bool DynamicTemplate::Ppps::Ppp::Accounting::has_data() const
{
    return prepaid_feature.is_set
	|| (idle_timeout !=  nullptr && idle_timeout->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (service_accounting !=  nullptr && service_accounting->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepaid_feature.yfilter)
	|| (idle_timeout !=  nullptr && idle_timeout->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (service_accounting !=  nullptr && service_accounting->has_operation());
}

std::string DynamicTemplate::Ppps::Ppp::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_feature.is_set || is_set(prepaid_feature.yfilter)) leaf_name_data.push_back(prepaid_feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idle-timeout")
    {
        if(idle_timeout == nullptr)
        {
            idle_timeout = std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout>();
        }
        return idle_timeout;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::Session>();
        }
        return session;
    }

    if(child_yang_name == "service-accounting")
    {
        if(service_accounting == nullptr)
        {
            service_accounting = std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting>();
        }
        return service_accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idle_timeout != nullptr)
    {
        children["idle-timeout"] = idle_timeout;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(service_accounting != nullptr)
    {
        children["service-accounting"] = service_accounting;
    }

    return children;
}

void DynamicTemplate::Ppps::Ppp::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepaid-feature")
    {
        prepaid_feature = value;
        prepaid_feature.value_namespace = name_space;
        prepaid_feature.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepaid-feature")
    {
        prepaid_feature.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-timeout" || name == "session" || name == "service-accounting" || name == "prepaid-feature")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::IdleTimeout()
    :
    timeout_value{YType::uint32, "timeout-value"},
    threshold{YType::uint32, "threshold"},
    direction{YType::str, "direction"}
{

    yang_name = "idle-timeout"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::~IdleTimeout()
{
}

bool DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::has_data() const
{
    return timeout_value.is_set
	|| threshold.is_set
	|| direction.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_value.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_value.is_set || is_set(timeout_value.yfilter)) leaf_name_data.push_back(timeout_value.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-value")
    {
        timeout_value = value;
        timeout_value.value_namespace = name_space;
        timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-value")
    {
        timeout_value.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-value" || name == "threshold" || name == "direction")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Accounting::Session::Session()
    :
    method_list_name{YType::str, "method-list-name"},
    periodic_interval{YType::int32, "periodic-interval"},
    dual_stack_delay{YType::int32, "dual-stack-delay"},
    hold_acct_start{YType::int32, "hold-acct-start"}
{

    yang_name = "session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Accounting::Session::~Session()
{
}

bool DynamicTemplate::Ppps::Ppp::Accounting::Session::has_data() const
{
    return method_list_name.is_set
	|| periodic_interval.is_set
	|| dual_stack_delay.is_set
	|| hold_acct_start.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Accounting::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(periodic_interval.yfilter)
	|| ydk::is_set(dual_stack_delay.yfilter)
	|| ydk::is_set(hold_acct_start.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Accounting::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Accounting::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (dual_stack_delay.is_set || is_set(dual_stack_delay.yfilter)) leaf_name_data.push_back(dual_stack_delay.get_name_leafdata());
    if (hold_acct_start.is_set || is_set(hold_acct_start.yfilter)) leaf_name_data.push_back(hold_acct_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Accounting::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Accounting::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Accounting::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-stack-delay")
    {
        dual_stack_delay = value;
        dual_stack_delay.value_namespace = name_space;
        dual_stack_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-acct-start")
    {
        hold_acct_start = value;
        hold_acct_start.value_namespace = name_space;
        hold_acct_start.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Accounting::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
    if(value_path == "dual-stack-delay")
    {
        dual_stack_delay.yfilter = yfilter;
    }
    if(value_path == "hold-acct-start")
    {
        hold_acct_start.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Accounting::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name" || name == "periodic-interval" || name == "dual-stack-delay" || name == "hold-acct-start")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::ServiceAccounting()
    :
    method_list_name{YType::str, "method-list-name"},
    accounting_interim_interval{YType::int32, "accounting-interim-interval"}
{

    yang_name = "service-accounting"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::~ServiceAccounting()
{
}

bool DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::has_data() const
{
    return method_list_name.is_set
	|| accounting_interim_interval.is_set;
}

bool DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(accounting_interim_interval.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (accounting_interim_interval.is_set || is_set(accounting_interim_interval.yfilter)) leaf_name_data.push_back(accounting_interim_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-interim-interval")
    {
        accounting_interim_interval = value;
        accounting_interim_interval.value_namespace = name_space;
        accounting_interim_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "accounting-interim-interval")
    {
        accounting_interim_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name" || name == "accounting-interim-interval")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppoeTemplate::PppoeTemplate()
    :
    port_limit{YType::uint16, "port-limit"}
{

    yang_name = "pppoe-template"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::Ppps::Ppp::PppoeTemplate::~PppoeTemplate()
{
}

bool DynamicTemplate::Ppps::Ppp::PppoeTemplate::has_data() const
{
    return port_limit.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppoeTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_limit.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppoeTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppoeTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_limit.is_set || is_set(port_limit.yfilter)) leaf_name_data.push_back(port_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::Ppps::Ppp::PppoeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::Ppps::Ppp::PppoeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::Ppps::Ppp::PppoeTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-limit")
    {
        port_limit = value;
        port_limit.value_namespace = name_space;
        port_limit.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::PppoeTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-limit")
    {
        port_limit.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::PppoeTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-limit")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscribers()
{

    yang_name = "ip-subscribers"; yang_parent_name = "dynamic-template"; is_top_level_class = false; has_list_ancestor = false;
}

DynamicTemplate::IpSubscribers::~IpSubscribers()
{
}

bool DynamicTemplate::IpSubscribers::has_data() const
{
    for (std::size_t index=0; index<ip_subscriber.size(); index++)
    {
        if(ip_subscriber[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::IpSubscribers::has_operation() const
{
    for (std::size_t index=0; index<ip_subscriber.size(); index++)
    {
        if(ip_subscriber[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DynamicTemplate::IpSubscribers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/" << get_segment_path();
    return path_buffer.str();
}

std::string DynamicTemplate::IpSubscribers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscribers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber")
    {
        for(auto const & c : ip_subscriber)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber>();
        c->parent = this;
        ip_subscriber.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_subscriber)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::IpSubscriber()
    :
    template_name{YType::str, "template-name"},
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-subscriber-cfg:vrf"}
    	,
    span_monitor_sessions(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions>())
	,ipv4_packet_filter(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter>())
	,ipv6_packet_filter(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter>())
	,dhcpd(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd>())
	,igmp(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp>())
	,ipv4_network(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network>())
	,ipv6_network(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network>())
	,ipv6_neighbor(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor>())
	,dhcpv6(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6>())
	,pbr(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr>())
	,qos(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos>())
	,accounting(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting>())
{
    span_monitor_sessions->parent = this;
    ipv4_packet_filter->parent = this;
    ipv6_packet_filter->parent = this;
    dhcpd->parent = this;
    igmp->parent = this;
    ipv4_network->parent = this;
    ipv6_network->parent = this;
    ipv6_neighbor->parent = this;
    dhcpv6->parent = this;
    pbr->parent = this;
    qos->parent = this;
    accounting->parent = this;

    yang_name = "ip-subscriber"; yang_parent_name = "ip-subscribers"; is_top_level_class = false; has_list_ancestor = false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::~IpSubscriber()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_data() const
{
    return template_name.is_set
	|| vrf.is_set
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (dhcpd !=  nullptr && dhcpd->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (accounting !=  nullptr && accounting->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (dhcpd !=  nullptr && dhcpd->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/ip-subscribers/" << get_segment_path();
    return path_buffer.str();
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter")
    {
        if(ipv4_packet_filter == nullptr)
        {
            ipv4_packet_filter = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter>();
        }
        return ipv4_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter")
    {
        if(ipv6_packet_filter == nullptr)
        {
            ipv6_packet_filter = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter>();
        }
        return ipv6_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-dhcpd-subscriber-cfg:dhcpd")
    {
        if(dhcpd == nullptr)
        {
            dhcpd = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd>();
        }
        return dhcpd;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6")
    {
        if(dhcpv6 == nullptr)
        {
            dhcpv6 = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6>();
        }
        return dhcpv6;
    }

    if(child_yang_name == "Cisco-IOS-XR-pbr-subscriber-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-bng-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-accounting-cfg:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(span_monitor_sessions != nullptr)
    {
        children["Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(ipv4_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv6_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(dhcpd != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-dhcpd-subscriber-cfg:dhcpd"] = dhcpd;
    }

    if(igmp != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp"] = igmp;
    }

    if(ipv4_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv6_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network"] = ipv6_network;
    }

    if(ipv6_neighbor != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(dhcpv6 != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6"] = dhcpv6;
    }

    if(pbr != nullptr)
    {
        children["Cisco-IOS-XR-pbr-subscriber-cfg:pbr"] = pbr;
    }

    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-bng-cfg:qos"] = qos;
    }

    if(accounting != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-accounting-cfg:accounting"] = accounting;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-infra-rsi-subscriber-cfg:vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-sessions" || name == "ipv4-packet-filter" || name == "ipv6-packet-filter" || name == "dhcpd" || name == "igmp" || name == "ipv4-network" || name == "ipv6-network" || name == "ipv6-neighbor" || name == "dhcpv6" || name == "pbr" || name == "qos" || name == "accounting" || name == "template-name" || name == "vrf")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
	,acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(nullptr) // presence node
	,inbound(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound>())
{
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::has_data() const
{
    return (outbound !=  nullptr && outbound->has_data())
	|| (inbound !=  nullptr && inbound->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (outbound !=  nullptr && outbound->has_operation())
	|| (inbound !=  nullptr && inbound->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::Outbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::Outbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::Dhcpd()
    :
    class_{YType::str, "class"},
    default_gateway{YType::str, "default-gateway"},
    session_limit{YType::int32, "session-limit"},
    dhcpv4_option{YType::str, "dhcpv4-option"}
{

    yang_name = "dhcpd"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::~Dhcpd()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::has_data() const
{
    return class_.is_set
	|| default_gateway.is_set
	|| session_limit.is_set
	|| dhcpv4_option.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(default_gateway.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(dhcpv4_option.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-subscriber-cfg:dhcpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (default_gateway.is_set || is_set(default_gateway.yfilter)) leaf_name_data.push_back(default_gateway.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (dhcpv4_option.is_set || is_set(dhcpv4_option.yfilter)) leaf_name_data.push_back(dhcpv4_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-gateway")
    {
        default_gateway = value;
        default_gateway.value_namespace = name_space;
        default_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4-option")
    {
        dhcpv4_option = value;
        dhcpv4_option.value_namespace = name_space;
        dhcpv4_option.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "default-gateway")
    {
        default_gateway.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "dhcpv4-option")
    {
        dhcpv4_option.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class" || name == "default-gateway" || name == "session-limit" || name == "dhcpv4-option")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::Igmp()
    :
    default_vrf(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf>())
{
    default_vrf->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::~Igmp()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::DefaultVrf()
    :
    max_groups{YType::uint32, "max-groups"},
    access_group{YType::str, "access-group"},
    version{YType::uint32, "version"},
    query_interval{YType::uint32, "query-interval"},
    query_max_response_time{YType::uint32, "query-max-response-time"},
    multicast_mode{YType::enumeration, "multicast-mode"}
    	,
    explicit_tracking(nullptr) // presence node
{

    yang_name = "default-vrf"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::~DefaultVrf()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::has_data() const
{
    return max_groups.is_set
	|| access_group.is_set
	|| version.is_set
	|| query_interval.is_set
	|| query_max_response_time.is_set
	|| multicast_mode.is_set
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_groups.yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_max_response_time.yfilter)
	|| ydk::is_set(multicast_mode.yfilter)
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_groups.is_set || is_set(max_groups.yfilter)) leaf_name_data.push_back(max_groups.get_name_leafdata());
    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_max_response_time.is_set || is_set(query_max_response_time.yfilter)) leaf_name_data.push_back(query_max_response_time.get_name_leafdata());
    if (multicast_mode.is_set || is_set(multicast_mode.yfilter)) leaf_name_data.push_back(multicast_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-groups")
    {
        max_groups = value;
        max_groups.value_namespace = name_space;
        max_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time = value;
        query_max_response_time.value_namespace = name_space;
        query_max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-mode")
    {
        multicast_mode = value;
        multicast_mode.value_namespace = name_space;
        multicast_mode.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-groups")
    {
        max_groups.yfilter = yfilter;
    }
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-max-response-time")
    {
        query_max_response_time.yfilter = yfilter;
    }
    if(value_path == "multicast-mode")
    {
        multicast_mode.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-tracking" || name == "max-groups" || name == "access-group" || name == "version" || name == "query-interval" || name == "query-max-response-time" || name == "multicast-mode")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::ExplicitTracking()
    :
    enable{YType::boolean, "enable"},
    access_list_name{YType::str, "access-list-name"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::~ExplicitTracking()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::has_data() const
{
    return enable.is_set
	|| access_list_name.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(access_list_name.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "access-list-name")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::Ipv4Network()
    :
    unnumbered{YType::str, "unnumbered"},
    mtu{YType::uint32, "mtu"},
    unreachables{YType::boolean, "unreachables"},
    rpf{YType::boolean, "rpf"}
{

    yang_name = "ipv4-network"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::~Ipv4Network()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::has_data() const
{
    return unnumbered.is_set
	|| mtu.is_set
	|| unreachables.is_set
	|| rpf.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(rpf.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unnumbered" || name == "mtu" || name == "unreachables" || name == "rpf")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    rpf{YType::boolean, "rpf"},
    unreachables{YType::empty, "unreachables"}
    	,
    addresses(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses>())
{
    addresses->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::~Ipv6Network()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| rpf.is_set
	|| unreachables.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "mtu" || name == "rpf" || name == "unreachables")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration>())
{
    auto_configuration->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::~Addresses()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_configuration != nullptr)
    {
        children["auto-configuration"] = auto_configuration;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-configuration")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "auto-configuration"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::Ipv6Neighbor()
    :
    framed_prefix_pool{YType::str, "framed-prefix-pool"},
    managed_config{YType::empty, "managed-config"},
    other_config{YType::empty, "other-config"},
    start_ra_on_ipv6_enable{YType::empty, "start-ra-on-ipv6-enable"},
    nud_enable{YType::empty, "nud-enable"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    router_preference{YType::enumeration, "router-preference"},
    ra_suppress{YType::empty, "ra-suppress"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    ra_suppress_mtu{YType::empty, "ra-suppress-mtu"},
    suppress_cache_learning{YType::empty, "suppress-cache-learning"},
    reachable_time{YType::uint32, "reachable-time"},
    ns_interval{YType::uint32, "ns-interval"}
    	,
    ra_interval(nullptr) // presence node
	,framed_prefix(nullptr) // presence node
	,duplicate_address_detection(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection>())
	,ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::has_data() const
{
    return framed_prefix_pool.is_set
	|| managed_config.is_set
	|| other_config.is_set
	|| start_ra_on_ipv6_enable.is_set
	|| nud_enable.is_set
	|| ra_lifetime.is_set
	|| router_preference.is_set
	|| ra_suppress.is_set
	|| ra_unicast.is_set
	|| ra_unspecify_hoplimit.is_set
	|| ra_suppress_mtu.is_set
	|| suppress_cache_learning.is_set
	|| reachable_time.is_set
	|| ns_interval.is_set
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (framed_prefix !=  nullptr && framed_prefix->has_data())
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_data())
	|| (ra_initial !=  nullptr && ra_initial->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(framed_prefix_pool.yfilter)
	|| ydk::is_set(managed_config.yfilter)
	|| ydk::is_set(other_config.yfilter)
	|| ydk::is_set(start_ra_on_ipv6_enable.yfilter)
	|| ydk::is_set(nud_enable.yfilter)
	|| ydk::is_set(ra_lifetime.yfilter)
	|| ydk::is_set(router_preference.yfilter)
	|| ydk::is_set(ra_suppress.yfilter)
	|| ydk::is_set(ra_unicast.yfilter)
	|| ydk::is_set(ra_unspecify_hoplimit.yfilter)
	|| ydk::is_set(ra_suppress_mtu.yfilter)
	|| ydk::is_set(suppress_cache_learning.yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(ns_interval.yfilter)
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (framed_prefix !=  nullptr && framed_prefix->has_operation())
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_operation())
	|| (ra_initial !=  nullptr && ra_initial->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (framed_prefix_pool.is_set || is_set(framed_prefix_pool.yfilter)) leaf_name_data.push_back(framed_prefix_pool.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.yfilter)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.yfilter)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (start_ra_on_ipv6_enable.is_set || is_set(start_ra_on_ipv6_enable.yfilter)) leaf_name_data.push_back(start_ra_on_ipv6_enable.get_name_leafdata());
    if (nud_enable.is_set || is_set(nud_enable.yfilter)) leaf_name_data.push_back(nud_enable.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.yfilter)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.yfilter)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.yfilter)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.yfilter)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.yfilter)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (ra_suppress_mtu.is_set || is_set(ra_suppress_mtu.yfilter)) leaf_name_data.push_back(ra_suppress_mtu.get_name_leafdata());
    if (suppress_cache_learning.is_set || is_set(suppress_cache_learning.yfilter)) leaf_name_data.push_back(suppress_cache_learning.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.yfilter)) leaf_name_data.push_back(ns_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "framed-prefix")
    {
        if(framed_prefix == nullptr)
        {
            framed_prefix = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix>();
        }
        return framed_prefix;
    }

    if(child_yang_name == "duplicate-address-detection")
    {
        if(duplicate_address_detection == nullptr)
        {
            duplicate_address_detection = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection>();
        }
        return duplicate_address_detection;
    }

    if(child_yang_name == "ra-initial")
    {
        if(ra_initial == nullptr)
        {
            ra_initial = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial>();
        }
        return ra_initial;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ra_interval != nullptr)
    {
        children["ra-interval"] = ra_interval;
    }

    if(framed_prefix != nullptr)
    {
        children["framed-prefix"] = framed_prefix;
    }

    if(duplicate_address_detection != nullptr)
    {
        children["duplicate-address-detection"] = duplicate_address_detection;
    }

    if(ra_initial != nullptr)
    {
        children["ra-initial"] = ra_initial;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool = value;
        framed_prefix_pool.value_namespace = name_space;
        framed_prefix_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
        managed_config.value_namespace = name_space;
        managed_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config")
    {
        other_config = value;
        other_config.value_namespace = name_space;
        other_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable = value;
        start_ra_on_ipv6_enable.value_namespace = name_space;
        start_ra_on_ipv6_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nud-enable")
    {
        nud_enable = value;
        nud_enable.value_namespace = name_space;
        nud_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
        ra_lifetime.value_namespace = name_space;
        ra_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
        router_preference.value_namespace = name_space;
        router_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
        ra_suppress.value_namespace = name_space;
        ra_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
        ra_unicast.value_namespace = name_space;
        ra_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
        ra_unspecify_hoplimit.value_namespace = name_space;
        ra_unspecify_hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu = value;
        ra_suppress_mtu.value_namespace = name_space;
        ra_suppress_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning = value;
        suppress_cache_learning.value_namespace = name_space;
        suppress_cache_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
        ns_interval.value_namespace = name_space;
        ns_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool.yfilter = yfilter;
    }
    if(value_path == "managed-config")
    {
        managed_config.yfilter = yfilter;
    }
    if(value_path == "other-config")
    {
        other_config.yfilter = yfilter;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable.yfilter = yfilter;
    }
    if(value_path == "nud-enable")
    {
        nud_enable.yfilter = yfilter;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime.yfilter = yfilter;
    }
    if(value_path == "router-preference")
    {
        router_preference.yfilter = yfilter;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress.yfilter = yfilter;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast.yfilter = yfilter;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit.yfilter = yfilter;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu.yfilter = yfilter;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning.yfilter = yfilter;
    }
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "ns-interval")
    {
        ns_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra-interval" || name == "framed-prefix" || name == "duplicate-address-detection" || name == "ra-initial" || name == "framed-prefix-pool" || name == "managed-config" || name == "other-config" || name == "start-ra-on-ipv6-enable" || name == "nud-enable" || name == "ra-lifetime" || name == "router-preference" || name == "ra-suppress" || name == "ra-unicast" || name == "ra-unspecify-hoplimit" || name == "ra-suppress-mtu" || name == "suppress-cache-learning" || name == "reachable-time" || name == "ns-interval")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::FramedPrefix()
    :
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::has_data() const
{
    return prefix_length.is_set
	|| prefix.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framed-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::DuplicateAddressDetection()
    :
    attempts{YType::uint32, "attempts"}
{

    yang_name = "duplicate-address-detection"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::~DuplicateAddressDetection()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::has_data() const
{
    return attempts.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attempts.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-address-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.yfilter)) leaf_name_data.push_back(attempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attempts")
    {
        attempts = value;
        attempts.value_namespace = name_space;
        attempts.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attempts")
    {
        attempts.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attempts")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::RaInitial()
    :
    count{YType::uint32, "count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-initial";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::Dhcpv6()
    :
    dns_ipv6address{YType::str, "dns-ipv6address"},
    mode_class{YType::str, "mode-class"},
    address_pool{YType::str, "address-pool"},
    delegated_prefix_pool{YType::str, "delegated-prefix-pool"},
    class_{YType::str, "class"},
    stateful_address{YType::str, "stateful-address"}
    	,
    delegated_prefix(nullptr) // presence node
{

    yang_name = "dhcpv6"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::~Dhcpv6()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::has_data() const
{
    return dns_ipv6address.is_set
	|| mode_class.is_set
	|| address_pool.is_set
	|| delegated_prefix_pool.is_set
	|| class_.is_set
	|| stateful_address.is_set
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_ipv6address.yfilter)
	|| ydk::is_set(mode_class.yfilter)
	|| ydk::is_set(address_pool.yfilter)
	|| ydk::is_set(delegated_prefix_pool.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(stateful_address.yfilter)
	|| (delegated_prefix !=  nullptr && delegated_prefix->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_ipv6address.is_set || is_set(dns_ipv6address.yfilter)) leaf_name_data.push_back(dns_ipv6address.get_name_leafdata());
    if (mode_class.is_set || is_set(mode_class.yfilter)) leaf_name_data.push_back(mode_class.get_name_leafdata());
    if (address_pool.is_set || is_set(address_pool.yfilter)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (delegated_prefix_pool.is_set || is_set(delegated_prefix_pool.yfilter)) leaf_name_data.push_back(delegated_prefix_pool.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (stateful_address.is_set || is_set(stateful_address.yfilter)) leaf_name_data.push_back(stateful_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delegated-prefix")
    {
        if(delegated_prefix == nullptr)
        {
            delegated_prefix = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix>();
        }
        return delegated_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delegated_prefix != nullptr)
    {
        children["delegated-prefix"] = delegated_prefix;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-ipv6address")
    {
        dns_ipv6address = value;
        dns_ipv6address.value_namespace = name_space;
        dns_ipv6address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode-class")
    {
        mode_class = value;
        mode_class.value_namespace = name_space;
        mode_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-pool")
    {
        address_pool = value;
        address_pool.value_namespace = name_space;
        address_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegated-prefix-pool")
    {
        delegated_prefix_pool = value;
        delegated_prefix_pool.value_namespace = name_space;
        delegated_prefix_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful-address")
    {
        stateful_address = value;
        stateful_address.value_namespace = name_space;
        stateful_address.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-ipv6address")
    {
        dns_ipv6address.yfilter = yfilter;
    }
    if(value_path == "mode-class")
    {
        mode_class.yfilter = yfilter;
    }
    if(value_path == "address-pool")
    {
        address_pool.yfilter = yfilter;
    }
    if(value_path == "delegated-prefix-pool")
    {
        delegated_prefix_pool.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "stateful-address")
    {
        stateful_address.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delegated-prefix" || name == "dns-ipv6address" || name == "mode-class" || name == "address-pool" || name == "delegated-prefix-pool" || name == "class" || name == "stateful-address")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::DelegatedPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "delegated-prefix"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::~DelegatedPrefix()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delegated-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "pbr"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::~Pbr()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_in.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-subscriber-cfg:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-in")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{

    yang_name = "service-policy"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Qos()
    :
    service_policy(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy>())
	,account(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account>())
	,output(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output>())
{
    service_policy->parent = this;
    account->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::~Qos()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data())
	|| (account !=  nullptr && account->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (account !=  nullptr && account->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-bng-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "account" || name == "output")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::ServicePolicy()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{

    yang_name = "service-policy"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::Input()
    :
    policy_name{YType::str, "policy-name"},
    spi_name{YType::str, "spi-name"},
    merge{YType::boolean, "merge"},
    merge_id{YType::uint32, "merge-id"},
    account_stats{YType::boolean, "account-stats"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::~Input()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::has_data() const
{
    return policy_name.is_set
	|| spi_name.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| account_stats.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(merge.yfilter)
	|| ydk::is_set(merge_id.yfilter)
	|| ydk::is_set(account_stats.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.yfilter)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (account_stats.is_set || is_set(account_stats.yfilter)) leaf_name_data.push_back(account_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
        merge_id.value_namespace = name_space;
        merge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-stats")
    {
        account_stats = value;
        account_stats.value_namespace = name_space;
        account_stats.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
    if(value_path == "merge-id")
    {
        merge_id.yfilter = yfilter;
    }
    if(value_path == "account-stats")
    {
        account_stats.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "spi-name" || name == "merge" || name == "merge-id" || name == "account-stats")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::Output()
    :
    policy_name{YType::str, "policy-name"},
    spi_name{YType::str, "spi-name"},
    merge{YType::boolean, "merge"},
    merge_id{YType::uint32, "merge-id"},
    account_stats{YType::boolean, "account-stats"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::~Output()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::has_data() const
{
    return policy_name.is_set
	|| spi_name.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| account_stats.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(merge.yfilter)
	|| ydk::is_set(merge_id.yfilter)
	|| ydk::is_set(account_stats.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.yfilter)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (account_stats.is_set || is_set(account_stats.yfilter)) leaf_name_data.push_back(account_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
        merge_id.value_namespace = name_space;
        merge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-stats")
    {
        account_stats = value;
        account_stats.value_namespace = name_space;
        account_stats.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
    if(value_path == "merge-id")
    {
        merge_id.yfilter = yfilter;
    }
    if(value_path == "account-stats")
    {
        account_stats.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "spi-name" || name == "merge" || name == "merge-id" || name == "account-stats")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::Account()
    :
    aal{YType::enumeration, "aal"},
    encapsulation{YType::enumeration, "encapsulation"},
    atm_cell_tax{YType::empty, "atm-cell-tax"},
    user_defined{YType::int32, "user-defined"}
{

    yang_name = "account"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::~Account()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::has_data() const
{
    return aal.is_set
	|| encapsulation.is_set
	|| atm_cell_tax.is_set
	|| user_defined.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aal.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(atm_cell_tax.yfilter)
	|| ydk::is_set(user_defined.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal.is_set || is_set(aal.yfilter)) leaf_name_data.push_back(aal.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (atm_cell_tax.is_set || is_set(atm_cell_tax.yfilter)) leaf_name_data.push_back(atm_cell_tax.get_name_leafdata());
    if (user_defined.is_set || is_set(user_defined.yfilter)) leaf_name_data.push_back(user_defined.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aal")
    {
        aal = value;
        aal.value_namespace = name_space;
        aal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax = value;
        atm_cell_tax.value_namespace = name_space;
        atm_cell_tax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-defined")
    {
        user_defined = value;
        user_defined.value_namespace = name_space;
        user_defined.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aal")
    {
        aal.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax.yfilter = yfilter;
    }
    if(value_path == "user-defined")
    {
        user_defined.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aal" || name == "encapsulation" || name == "atm-cell-tax" || name == "user-defined")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::Output()
    :
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"}
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::~Output()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::has_data() const
{
    return minimum_bandwidth.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-bandwidth")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Accounting()
    :
    prepaid_feature{YType::str, "prepaid-feature"}
    	,
    service_accounting(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting>())
	,session(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session>())
	,idle_timeout(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout>())
{
    service_accounting->parent = this;
    session->parent = this;
    idle_timeout->parent = this;

    yang_name = "accounting"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::~Accounting()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::has_data() const
{
    return prepaid_feature.is_set
	|| (service_accounting !=  nullptr && service_accounting->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (idle_timeout !=  nullptr && idle_timeout->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepaid_feature.yfilter)
	|| (service_accounting !=  nullptr && service_accounting->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (idle_timeout !=  nullptr && idle_timeout->has_operation());
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_feature.is_set || is_set(prepaid_feature.yfilter)) leaf_name_data.push_back(prepaid_feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-accounting")
    {
        if(service_accounting == nullptr)
        {
            service_accounting = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting>();
        }
        return service_accounting;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session>();
        }
        return session;
    }

    if(child_yang_name == "idle-timeout")
    {
        if(idle_timeout == nullptr)
        {
            idle_timeout = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout>();
        }
        return idle_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_accounting != nullptr)
    {
        children["service-accounting"] = service_accounting;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(idle_timeout != nullptr)
    {
        children["idle-timeout"] = idle_timeout;
    }

    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepaid-feature")
    {
        prepaid_feature = value;
        prepaid_feature.value_namespace = name_space;
        prepaid_feature.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepaid-feature")
    {
        prepaid_feature.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting" || name == "session" || name == "idle-timeout" || name == "prepaid-feature")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::ServiceAccounting()
    :
    method_list_name{YType::str, "method-list-name"},
    accounting_interim_interval{YType::int32, "accounting-interim-interval"}
{

    yang_name = "service-accounting"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::~ServiceAccounting()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::has_data() const
{
    return method_list_name.is_set
	|| accounting_interim_interval.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(accounting_interim_interval.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (accounting_interim_interval.is_set || is_set(accounting_interim_interval.yfilter)) leaf_name_data.push_back(accounting_interim_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-interim-interval")
    {
        accounting_interim_interval = value;
        accounting_interim_interval.value_namespace = name_space;
        accounting_interim_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "accounting-interim-interval")
    {
        accounting_interim_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name" || name == "accounting-interim-interval")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::Session()
    :
    method_list_name{YType::str, "method-list-name"},
    periodic_interval{YType::int32, "periodic-interval"},
    dual_stack_delay{YType::int32, "dual-stack-delay"},
    hold_acct_start{YType::int32, "hold-acct-start"}
{

    yang_name = "session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::~Session()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::has_data() const
{
    return method_list_name.is_set
	|| periodic_interval.is_set
	|| dual_stack_delay.is_set
	|| hold_acct_start.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(periodic_interval.yfilter)
	|| ydk::is_set(dual_stack_delay.yfilter)
	|| ydk::is_set(hold_acct_start.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (dual_stack_delay.is_set || is_set(dual_stack_delay.yfilter)) leaf_name_data.push_back(dual_stack_delay.get_name_leafdata());
    if (hold_acct_start.is_set || is_set(hold_acct_start.yfilter)) leaf_name_data.push_back(hold_acct_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-stack-delay")
    {
        dual_stack_delay = value;
        dual_stack_delay.value_namespace = name_space;
        dual_stack_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-acct-start")
    {
        hold_acct_start = value;
        hold_acct_start.value_namespace = name_space;
        hold_acct_start.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
    if(value_path == "dual-stack-delay")
    {
        dual_stack_delay.yfilter = yfilter;
    }
    if(value_path == "hold-acct-start")
    {
        hold_acct_start.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name" || name == "periodic-interval" || name == "dual-stack-delay" || name == "hold-acct-start")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::IdleTimeout()
    :
    timeout_value{YType::uint32, "timeout-value"},
    threshold{YType::uint32, "threshold"},
    direction{YType::str, "direction"}
{

    yang_name = "idle-timeout"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::~IdleTimeout()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::has_data() const
{
    return timeout_value.is_set
	|| threshold.is_set
	|| direction.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_value.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_value.is_set || is_set(timeout_value.yfilter)) leaf_name_data.push_back(timeout_value.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-value")
    {
        timeout_value = value;
        timeout_value.value_namespace = name_space;
        timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-value")
    {
        timeout_value.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-value" || name == "threshold" || name == "direction")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberServices()
{

    yang_name = "subscriber-services"; yang_parent_name = "dynamic-template"; is_top_level_class = false; has_list_ancestor = false;
}

DynamicTemplate::SubscriberServices::~SubscriberServices()
{
}

bool DynamicTemplate::SubscriberServices::has_data() const
{
    for (std::size_t index=0; index<subscriber_service.size(); index++)
    {
        if(subscriber_service[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::SubscriberServices::has_operation() const
{
    for (std::size_t index=0; index<subscriber_service.size(); index++)
    {
        if(subscriber_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DynamicTemplate::SubscriberServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/" << get_segment_path();
    return path_buffer.str();
}

std::string DynamicTemplate::SubscriberServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-service")
    {
        for(auto const & c : subscriber_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService>();
        c->parent = this;
        subscriber_service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-service")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::SubscriberService()
    :
    template_name{YType::str, "template-name"},
    vrf{YType::str, "Cisco-IOS-XR-infra-rsi-subscriber-cfg:vrf"}
    	,
    span_monitor_sessions(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions>())
	,ipv4_packet_filter(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter>())
	,ipv6_packet_filter(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter>())
	,ipv4_network(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network>())
	,ipv6_network(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network>())
	,ipv6_neighbor(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor>())
	,pbr(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Pbr>())
	,qos(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos>())
	,accounting(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting>())
{
    span_monitor_sessions->parent = this;
    ipv4_packet_filter->parent = this;
    ipv6_packet_filter->parent = this;
    ipv4_network->parent = this;
    ipv6_network->parent = this;
    ipv6_neighbor->parent = this;
    pbr->parent = this;
    qos->parent = this;
    accounting->parent = this;

    yang_name = "subscriber-service"; yang_parent_name = "subscriber-services"; is_top_level_class = false; has_list_ancestor = false;
}

DynamicTemplate::SubscriberServices::SubscriberService::~SubscriberService()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_data() const
{
    return template_name.is_set
	|| vrf.is_set
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (accounting !=  nullptr && accounting->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template/subscriber-services/" << get_segment_path();
    return path_buffer.str();
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-service" <<"[template-name='" <<template_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter")
    {
        if(ipv4_packet_filter == nullptr)
        {
            ipv4_packet_filter = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter>();
        }
        return ipv4_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter")
    {
        if(ipv6_packet_filter == nullptr)
        {
            ipv6_packet_filter = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter>();
        }
        return ipv6_packet_filter;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-pbr-subscriber-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-bng-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-accounting-cfg:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(span_monitor_sessions != nullptr)
    {
        children["Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions"] = span_monitor_sessions;
    }

    if(ipv4_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv6_packet_filter != nullptr)
    {
        children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(ipv4_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv6_network != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network"] = ipv6_network;
    }

    if(ipv6_neighbor != nullptr)
    {
        children["Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(pbr != nullptr)
    {
        children["Cisco-IOS-XR-pbr-subscriber-cfg:pbr"] = pbr;
    }

    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-bng-cfg:qos"] = qos;
    }

    if(accounting != nullptr)
    {
        children["Cisco-IOS-XR-subscriber-accounting-cfg:accounting"] = accounting;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XR-infra-rsi-subscriber-cfg:vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-sessions" || name == "ipv4-packet-filter" || name == "ipv6-packet-filter" || name == "ipv4-network" || name == "ipv6-network" || name == "ipv6-neighbor" || name == "pbr" || name == "qos" || name == "accounting" || name == "template-name" || name == "vrf")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
	,acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(nullptr) // presence node
	,inbound(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound>())
{
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::has_data() const
{
    return (outbound !=  nullptr && outbound->has_data())
	|| (inbound !=  nullptr && inbound->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (outbound !=  nullptr && outbound->has_operation())
	|| (inbound !=  nullptr && inbound->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::Outbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound>())
	,outbound(nullptr) // presence node
{
    inbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::Outbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::has_data() const
{
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::Ipv4Network()
    :
    unnumbered{YType::str, "unnumbered"},
    mtu{YType::uint32, "mtu"},
    unreachables{YType::boolean, "unreachables"},
    rpf{YType::boolean, "rpf"}
{

    yang_name = "ipv4-network"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::~Ipv4Network()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::has_data() const
{
    return unnumbered.is_set
	|| mtu.is_set
	|| unreachables.is_set
	|| rpf.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(rpf.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unnumbered" || name == "mtu" || name == "unreachables" || name == "rpf")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    rpf{YType::boolean, "rpf"},
    unreachables{YType::empty, "unreachables"}
    	,
    addresses(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses>())
{
    addresses->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::~Ipv6Network()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| rpf.is_set
	|| unreachables.is_set
	|| (addresses !=  nullptr && addresses->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses>();
        }
        return addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "mtu" || name == "rpf" || name == "unreachables")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration>())
{
    auto_configuration->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::~Addresses()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_configuration != nullptr)
    {
        children["auto-configuration"] = auto_configuration;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-configuration")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "auto-configuration"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::Ipv6Neighbor()
    :
    framed_prefix_pool{YType::str, "framed-prefix-pool"},
    managed_config{YType::empty, "managed-config"},
    other_config{YType::empty, "other-config"},
    start_ra_on_ipv6_enable{YType::empty, "start-ra-on-ipv6-enable"},
    nud_enable{YType::empty, "nud-enable"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    router_preference{YType::enumeration, "router-preference"},
    ra_suppress{YType::empty, "ra-suppress"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    ra_suppress_mtu{YType::empty, "ra-suppress-mtu"},
    suppress_cache_learning{YType::empty, "suppress-cache-learning"},
    reachable_time{YType::uint32, "reachable-time"},
    ns_interval{YType::uint32, "ns-interval"}
    	,
    ra_interval(nullptr) // presence node
	,framed_prefix(nullptr) // presence node
	,duplicate_address_detection(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection>())
	,ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::has_data() const
{
    return framed_prefix_pool.is_set
	|| managed_config.is_set
	|| other_config.is_set
	|| start_ra_on_ipv6_enable.is_set
	|| nud_enable.is_set
	|| ra_lifetime.is_set
	|| router_preference.is_set
	|| ra_suppress.is_set
	|| ra_unicast.is_set
	|| ra_unspecify_hoplimit.is_set
	|| ra_suppress_mtu.is_set
	|| suppress_cache_learning.is_set
	|| reachable_time.is_set
	|| ns_interval.is_set
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (framed_prefix !=  nullptr && framed_prefix->has_data())
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_data())
	|| (ra_initial !=  nullptr && ra_initial->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(framed_prefix_pool.yfilter)
	|| ydk::is_set(managed_config.yfilter)
	|| ydk::is_set(other_config.yfilter)
	|| ydk::is_set(start_ra_on_ipv6_enable.yfilter)
	|| ydk::is_set(nud_enable.yfilter)
	|| ydk::is_set(ra_lifetime.yfilter)
	|| ydk::is_set(router_preference.yfilter)
	|| ydk::is_set(ra_suppress.yfilter)
	|| ydk::is_set(ra_unicast.yfilter)
	|| ydk::is_set(ra_unspecify_hoplimit.yfilter)
	|| ydk::is_set(ra_suppress_mtu.yfilter)
	|| ydk::is_set(suppress_cache_learning.yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(ns_interval.yfilter)
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (framed_prefix !=  nullptr && framed_prefix->has_operation())
	|| (duplicate_address_detection !=  nullptr && duplicate_address_detection->has_operation())
	|| (ra_initial !=  nullptr && ra_initial->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (framed_prefix_pool.is_set || is_set(framed_prefix_pool.yfilter)) leaf_name_data.push_back(framed_prefix_pool.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.yfilter)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.yfilter)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (start_ra_on_ipv6_enable.is_set || is_set(start_ra_on_ipv6_enable.yfilter)) leaf_name_data.push_back(start_ra_on_ipv6_enable.get_name_leafdata());
    if (nud_enable.is_set || is_set(nud_enable.yfilter)) leaf_name_data.push_back(nud_enable.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.yfilter)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.yfilter)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.yfilter)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.yfilter)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.yfilter)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (ra_suppress_mtu.is_set || is_set(ra_suppress_mtu.yfilter)) leaf_name_data.push_back(ra_suppress_mtu.get_name_leafdata());
    if (suppress_cache_learning.is_set || is_set(suppress_cache_learning.yfilter)) leaf_name_data.push_back(suppress_cache_learning.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.yfilter)) leaf_name_data.push_back(ns_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "framed-prefix")
    {
        if(framed_prefix == nullptr)
        {
            framed_prefix = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix>();
        }
        return framed_prefix;
    }

    if(child_yang_name == "duplicate-address-detection")
    {
        if(duplicate_address_detection == nullptr)
        {
            duplicate_address_detection = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection>();
        }
        return duplicate_address_detection;
    }

    if(child_yang_name == "ra-initial")
    {
        if(ra_initial == nullptr)
        {
            ra_initial = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial>();
        }
        return ra_initial;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ra_interval != nullptr)
    {
        children["ra-interval"] = ra_interval;
    }

    if(framed_prefix != nullptr)
    {
        children["framed-prefix"] = framed_prefix;
    }

    if(duplicate_address_detection != nullptr)
    {
        children["duplicate-address-detection"] = duplicate_address_detection;
    }

    if(ra_initial != nullptr)
    {
        children["ra-initial"] = ra_initial;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool = value;
        framed_prefix_pool.value_namespace = name_space;
        framed_prefix_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
        managed_config.value_namespace = name_space;
        managed_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config")
    {
        other_config = value;
        other_config.value_namespace = name_space;
        other_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable = value;
        start_ra_on_ipv6_enable.value_namespace = name_space;
        start_ra_on_ipv6_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nud-enable")
    {
        nud_enable = value;
        nud_enable.value_namespace = name_space;
        nud_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
        ra_lifetime.value_namespace = name_space;
        ra_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
        router_preference.value_namespace = name_space;
        router_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
        ra_suppress.value_namespace = name_space;
        ra_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
        ra_unicast.value_namespace = name_space;
        ra_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
        ra_unspecify_hoplimit.value_namespace = name_space;
        ra_unspecify_hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu = value;
        ra_suppress_mtu.value_namespace = name_space;
        ra_suppress_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning = value;
        suppress_cache_learning.value_namespace = name_space;
        suppress_cache_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
        ns_interval.value_namespace = name_space;
        ns_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "framed-prefix-pool")
    {
        framed_prefix_pool.yfilter = yfilter;
    }
    if(value_path == "managed-config")
    {
        managed_config.yfilter = yfilter;
    }
    if(value_path == "other-config")
    {
        other_config.yfilter = yfilter;
    }
    if(value_path == "start-ra-on-ipv6-enable")
    {
        start_ra_on_ipv6_enable.yfilter = yfilter;
    }
    if(value_path == "nud-enable")
    {
        nud_enable.yfilter = yfilter;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime.yfilter = yfilter;
    }
    if(value_path == "router-preference")
    {
        router_preference.yfilter = yfilter;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress.yfilter = yfilter;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast.yfilter = yfilter;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit.yfilter = yfilter;
    }
    if(value_path == "ra-suppress-mtu")
    {
        ra_suppress_mtu.yfilter = yfilter;
    }
    if(value_path == "suppress-cache-learning")
    {
        suppress_cache_learning.yfilter = yfilter;
    }
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "ns-interval")
    {
        ns_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra-interval" || name == "framed-prefix" || name == "duplicate-address-detection" || name == "ra-initial" || name == "framed-prefix-pool" || name == "managed-config" || name == "other-config" || name == "start-ra-on-ipv6-enable" || name == "nud-enable" || name == "ra-lifetime" || name == "router-preference" || name == "ra-suppress" || name == "ra-unicast" || name == "ra-unspecify-hoplimit" || name == "ra-suppress-mtu" || name == "suppress-cache-learning" || name == "reachable-time" || name == "ns-interval")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::FramedPrefix()
    :
    prefix_length{YType::uint8, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::has_data() const
{
    return prefix_length.is_set
	|| prefix.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framed-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::DuplicateAddressDetection()
    :
    attempts{YType::uint32, "attempts"}
{

    yang_name = "duplicate-address-detection"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::~DuplicateAddressDetection()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::has_data() const
{
    return attempts.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attempts.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-address-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.yfilter)) leaf_name_data.push_back(attempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attempts")
    {
        attempts = value;
        attempts.value_namespace = name_space;
        attempts.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attempts")
    {
        attempts.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attempts")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::RaInitial()
    :
    count{YType::uint32, "count"},
    interval{YType::uint32, "interval"}
{

    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-initial";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "interval")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::Pbr()
    :
    service_policy_in{YType::str, "service-policy-in"}
    	,
    service_policy(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "pbr"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::~Pbr()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::has_data() const
{
    return service_policy_in.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_in.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-subscriber-cfg:pbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_in.is_set || is_set(service_policy_in.yfilter)) leaf_name_data.push_back(service_policy_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Pbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in = value;
        service_policy_in.value_namespace = name_space;
        service_policy_in.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Pbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-in")
    {
        service_policy_in.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-in")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"}
{

    yang_name = "service-policy"; yang_parent_name = "pbr"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::has_data() const
{
    return input.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Qos()
    :
    service_policy(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy>())
	,account(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account>())
	,output(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output>())
{
    service_policy->parent = this;
    account->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::~Qos()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data())
	|| (account !=  nullptr && account->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (account !=  nullptr && account->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-bng-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(account != nullptr)
    {
        children["account"] = account;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "account" || name == "output")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::ServicePolicy()
    :
    input(nullptr) // presence node
	,output(nullptr) // presence node
{

    yang_name = "service-policy"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::~ServicePolicy()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::Input()
    :
    policy_name{YType::str, "policy-name"},
    spi_name{YType::str, "spi-name"},
    merge{YType::boolean, "merge"},
    merge_id{YType::uint32, "merge-id"},
    account_stats{YType::boolean, "account-stats"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::~Input()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::has_data() const
{
    return policy_name.is_set
	|| spi_name.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| account_stats.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(merge.yfilter)
	|| ydk::is_set(merge_id.yfilter)
	|| ydk::is_set(account_stats.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.yfilter)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (account_stats.is_set || is_set(account_stats.yfilter)) leaf_name_data.push_back(account_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
        merge_id.value_namespace = name_space;
        merge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-stats")
    {
        account_stats = value;
        account_stats.value_namespace = name_space;
        account_stats.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
    if(value_path == "merge-id")
    {
        merge_id.yfilter = yfilter;
    }
    if(value_path == "account-stats")
    {
        account_stats.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "spi-name" || name == "merge" || name == "merge-id" || name == "account-stats")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::Output()
    :
    policy_name{YType::str, "policy-name"},
    spi_name{YType::str, "spi-name"},
    merge{YType::boolean, "merge"},
    merge_id{YType::uint32, "merge-id"},
    account_stats{YType::boolean, "account-stats"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::~Output()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::has_data() const
{
    return policy_name.is_set
	|| spi_name.is_set
	|| merge.is_set
	|| merge_id.is_set
	|| account_stats.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(merge.yfilter)
	|| ydk::is_set(merge_id.yfilter)
	|| ydk::is_set(account_stats.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (merge.is_set || is_set(merge.yfilter)) leaf_name_data.push_back(merge.get_name_leafdata());
    if (merge_id.is_set || is_set(merge_id.yfilter)) leaf_name_data.push_back(merge_id.get_name_leafdata());
    if (account_stats.is_set || is_set(account_stats.yfilter)) leaf_name_data.push_back(account_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge")
    {
        merge = value;
        merge.value_namespace = name_space;
        merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-id")
    {
        merge_id = value;
        merge_id.value_namespace = name_space;
        merge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-stats")
    {
        account_stats = value;
        account_stats.value_namespace = name_space;
        account_stats.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "merge")
    {
        merge.yfilter = yfilter;
    }
    if(value_path == "merge-id")
    {
        merge_id.yfilter = yfilter;
    }
    if(value_path == "account-stats")
    {
        account_stats.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "spi-name" || name == "merge" || name == "merge-id" || name == "account-stats")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::Account()
    :
    aal{YType::enumeration, "aal"},
    encapsulation{YType::enumeration, "encapsulation"},
    atm_cell_tax{YType::empty, "atm-cell-tax"},
    user_defined{YType::int32, "user-defined"}
{

    yang_name = "account"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::~Account()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::has_data() const
{
    return aal.is_set
	|| encapsulation.is_set
	|| atm_cell_tax.is_set
	|| user_defined.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aal.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(atm_cell_tax.yfilter)
	|| ydk::is_set(user_defined.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal.is_set || is_set(aal.yfilter)) leaf_name_data.push_back(aal.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (atm_cell_tax.is_set || is_set(atm_cell_tax.yfilter)) leaf_name_data.push_back(atm_cell_tax.get_name_leafdata());
    if (user_defined.is_set || is_set(user_defined.yfilter)) leaf_name_data.push_back(user_defined.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aal")
    {
        aal = value;
        aal.value_namespace = name_space;
        aal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax = value;
        atm_cell_tax.value_namespace = name_space;
        atm_cell_tax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-defined")
    {
        user_defined = value;
        user_defined.value_namespace = name_space;
        user_defined.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aal")
    {
        aal.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "atm-cell-tax")
    {
        atm_cell_tax.yfilter = yfilter;
    }
    if(value_path == "user-defined")
    {
        user_defined.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aal" || name == "encapsulation" || name == "atm-cell-tax" || name == "user-defined")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::Output()
    :
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"}
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::~Output()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::has_data() const
{
    return minimum_bandwidth.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_bandwidth.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.yfilter)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
        minimum_bandwidth.value_namespace = name_space;
        minimum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-bandwidth")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Accounting()
    :
    prepaid_feature{YType::str, "prepaid-feature"}
    	,
    service_accounting(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting>())
	,session(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session>())
	,idle_timeout(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout>())
{
    service_accounting->parent = this;
    session->parent = this;
    idle_timeout->parent = this;

    yang_name = "accounting"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::~Accounting()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::has_data() const
{
    return prepaid_feature.is_set
	|| (service_accounting !=  nullptr && service_accounting->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (idle_timeout !=  nullptr && idle_timeout->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepaid_feature.yfilter)
	|| (service_accounting !=  nullptr && service_accounting->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (idle_timeout !=  nullptr && idle_timeout->has_operation());
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-accounting-cfg:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepaid_feature.is_set || is_set(prepaid_feature.yfilter)) leaf_name_data.push_back(prepaid_feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-accounting")
    {
        if(service_accounting == nullptr)
        {
            service_accounting = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting>();
        }
        return service_accounting;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session>();
        }
        return session;
    }

    if(child_yang_name == "idle-timeout")
    {
        if(idle_timeout == nullptr)
        {
            idle_timeout = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout>();
        }
        return idle_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_accounting != nullptr)
    {
        children["service-accounting"] = service_accounting;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    if(idle_timeout != nullptr)
    {
        children["idle-timeout"] = idle_timeout;
    }

    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepaid-feature")
    {
        prepaid_feature = value;
        prepaid_feature.value_namespace = name_space;
        prepaid_feature.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepaid-feature")
    {
        prepaid_feature.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting" || name == "session" || name == "idle-timeout" || name == "prepaid-feature")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::ServiceAccounting()
    :
    method_list_name{YType::str, "method-list-name"},
    accounting_interim_interval{YType::int32, "accounting-interim-interval"}
{

    yang_name = "service-accounting"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::~ServiceAccounting()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::has_data() const
{
    return method_list_name.is_set
	|| accounting_interim_interval.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(accounting_interim_interval.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (accounting_interim_interval.is_set || is_set(accounting_interim_interval.yfilter)) leaf_name_data.push_back(accounting_interim_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-interim-interval")
    {
        accounting_interim_interval = value;
        accounting_interim_interval.value_namespace = name_space;
        accounting_interim_interval.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "accounting-interim-interval")
    {
        accounting_interim_interval.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name" || name == "accounting-interim-interval")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::Session()
    :
    method_list_name{YType::str, "method-list-name"},
    periodic_interval{YType::int32, "periodic-interval"},
    dual_stack_delay{YType::int32, "dual-stack-delay"},
    hold_acct_start{YType::int32, "hold-acct-start"}
{

    yang_name = "session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::~Session()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::has_data() const
{
    return method_list_name.is_set
	|| periodic_interval.is_set
	|| dual_stack_delay.is_set
	|| hold_acct_start.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(periodic_interval.yfilter)
	|| ydk::is_set(dual_stack_delay.yfilter)
	|| ydk::is_set(hold_acct_start.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (dual_stack_delay.is_set || is_set(dual_stack_delay.yfilter)) leaf_name_data.push_back(dual_stack_delay.get_name_leafdata());
    if (hold_acct_start.is_set || is_set(hold_acct_start.yfilter)) leaf_name_data.push_back(hold_acct_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-stack-delay")
    {
        dual_stack_delay = value;
        dual_stack_delay.value_namespace = name_space;
        dual_stack_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-acct-start")
    {
        hold_acct_start = value;
        hold_acct_start.value_namespace = name_space;
        hold_acct_start.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
    if(value_path == "dual-stack-delay")
    {
        dual_stack_delay.yfilter = yfilter;
    }
    if(value_path == "hold-acct-start")
    {
        hold_acct_start.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list-name" || name == "periodic-interval" || name == "dual-stack-delay" || name == "hold-acct-start")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::IdleTimeout()
    :
    timeout_value{YType::uint32, "timeout-value"},
    threshold{YType::uint32, "threshold"},
    direction{YType::str, "direction"}
{

    yang_name = "idle-timeout"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::~IdleTimeout()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::has_data() const
{
    return timeout_value.is_set
	|| threshold.is_set
	|| direction.is_set;
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_value.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_value.is_set || is_set(timeout_value.yfilter)) leaf_name_data.push_back(timeout_value.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-value")
    {
        timeout_value = value;
        timeout_value.value_namespace = name_space;
        timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-value")
    {
        timeout_value.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-value" || name == "threshold" || name == "direction")
        return true;
    return false;
}


}
}

