
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
    , ip_subscribers(std::make_shared<DynamicTemplate::IpSubscribers>())
    , subscriber_services(std::make_shared<DynamicTemplate::SubscriberServices>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ppps != nullptr)
    {
        _children["ppps"] = ppps;
    }

    if(ip_subscribers != nullptr)
    {
        _children["ip-subscribers"] = ip_subscribers;
    }

    if(subscriber_services != nullptr)
    {
        _children["subscriber-services"] = subscriber_services;
    }

    return _children;
}

void DynamicTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DynamicTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DynamicTemplate::clone_ptr() const
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
    :
    ppp(this, {"template_name"})
{

    yang_name = "ppps"; yang_parent_name = "dynamic-template"; is_top_level_class = false; has_list_ancestor = false; 
}

DynamicTemplate::Ppps::~Ppps()
{
}

bool DynamicTemplate::Ppps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ppp.len(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::Ppps::has_operation() const
{
    for (std::size_t index=0; index<ppp.len(); index++)
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppp")
    {
        auto ent_ = std::make_shared<DynamicTemplate::Ppps::Ppp>();
        ent_->parent = this;
        ppp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ppp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    pppoe_template(nullptr) // presence node
    , pbr(std::make_shared<DynamicTemplate::Ppps::Ppp::Pbr>())
    , ipv4_network(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4Network>())
    , dhcpv6(std::make_shared<DynamicTemplate::Ppps::Ppp::Dhcpv6>())
    , ipv6_neighbor(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor>())
    , accounting(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting>())
    , ipv4_packet_filter(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter>())
    , ipv6_packet_filter(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter>())
    , ipv6_network(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network>())
    , igmp(std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp>())
    , ppp_template(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate>())
{
    pbr->parent = this;
    ipv4_network->parent = this;
    dhcpv6->parent = this;
    ipv6_neighbor->parent = this;
    accounting->parent = this;
    ipv4_packet_filter->parent = this;
    ipv6_packet_filter->parent = this;
    ipv6_network->parent = this;
    igmp->parent = this;
    ppp_template->parent = this;

    yang_name = "ppp"; yang_parent_name = "ppps"; is_top_level_class = false; has_list_ancestor = false; 
}

DynamicTemplate::Ppps::Ppp::~Ppp()
{
}

bool DynamicTemplate::Ppps::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| vrf.is_set
	|| (pppoe_template !=  nullptr && pppoe_template->has_data())
	|| (pbr !=  nullptr && pbr->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (ppp_template !=  nullptr && ppp_template->has_data());
}

bool DynamicTemplate::Ppps::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (pppoe_template !=  nullptr && pppoe_template->has_operation())
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (ppp_template !=  nullptr && ppp_template->has_operation());
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
    path_buffer << "ppp";
    ADD_KEY_TOKEN(template_name, "template-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-template")
    {
        if(pppoe_template == nullptr)
        {
            pppoe_template = std::make_shared<DynamicTemplate::Ppps::Ppp::PppoeTemplate>();
        }
        return pppoe_template;
    }

    if(child_yang_name == "Cisco-IOS-XR-pbr-subscriber-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<DynamicTemplate::Ppps::Ppp::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6")
    {
        if(dhcpv6 == nullptr)
        {
            dhcpv6 = std::make_shared<DynamicTemplate::Ppps::Ppp::Dhcpv6>();
        }
        return dhcpv6;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-accounting-cfg:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting>();
        }
        return accounting;
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

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<DynamicTemplate::Ppps::Ppp::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "Cisco-IOS-XR-ppp-ma-gbl-cfg:ppp-template")
    {
        if(ppp_template == nullptr)
        {
            ppp_template = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate>();
        }
        return ppp_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe_template != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-template"] = pppoe_template;
    }

    if(pbr != nullptr)
    {
        _children["Cisco-IOS-XR-pbr-subscriber-cfg:pbr"] = pbr;
    }

    if(ipv4_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network"] = ipv4_network;
    }

    if(dhcpv6 != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6"] = dhcpv6;
    }

    if(ipv6_neighbor != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(accounting != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-accounting-cfg:accounting"] = accounting;
    }

    if(ipv4_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv6_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(ipv6_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network"] = ipv6_network;
    }

    if(igmp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp"] = igmp;
    }

    if(ppp_template != nullptr)
    {
        _children["Cisco-IOS-XR-ppp-ma-gbl-cfg:ppp-template"] = ppp_template;
    }

    return _children;
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
    if(name == "pppoe-template" || name == "pbr" || name == "ipv4-network" || name == "dhcpv6" || name == "ipv6-neighbor" || name == "accounting" || name == "ipv4-packet-filter" || name == "ipv6-packet-filter" || name == "ipv6-network" || name == "igmp" || name == "ppp-template" || name == "template-name" || name == "vrf")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::PppoeTemplate::PppoeTemplate()
    :
    port_limit{YType::uint16, "port-limit"}
{

    yang_name = "pppoe-template"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::Ppps::Ppp::PppoeTemplate::~PppoeTemplate()
{
}

bool DynamicTemplate::Ppps::Ppp::PppoeTemplate::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppoeTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppoeTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::Ppps::Ppp::Dhcpv6::Dhcpv6()
    :
    dns_ipv6address{YType::str, "dns-ipv6address"},
    mode_class{YType::str, "mode-class"},
    dhcpv6_iplease{YType::str, "dhcpv6-iplease"},
    dhcpv6_option{YType::str, "dhcpv6-option"},
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
    if (is_presence_container) return true;
    return dns_ipv6address.is_set
	|| mode_class.is_set
	|| dhcpv6_iplease.is_set
	|| dhcpv6_option.is_set
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
	|| ydk::is_set(dhcpv6_iplease.yfilter)
	|| ydk::is_set(dhcpv6_option.yfilter)
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
    if (dhcpv6_iplease.is_set || is_set(dhcpv6_iplease.yfilter)) leaf_name_data.push_back(dhcpv6_iplease.get_name_leafdata());
    if (dhcpv6_option.is_set || is_set(dhcpv6_option.yfilter)) leaf_name_data.push_back(dhcpv6_option.get_name_leafdata());
    if (address_pool.is_set || is_set(address_pool.yfilter)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (delegated_prefix_pool.is_set || is_set(delegated_prefix_pool.yfilter)) leaf_name_data.push_back(delegated_prefix_pool.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (stateful_address.is_set || is_set(stateful_address.yfilter)) leaf_name_data.push_back(stateful_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Dhcpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delegated_prefix != nullptr)
    {
        _children["delegated-prefix"] = delegated_prefix;
    }

    return _children;
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
    if(value_path == "dhcpv6-iplease")
    {
        dhcpv6_iplease = value;
        dhcpv6_iplease.value_namespace = name_space;
        dhcpv6_iplease.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv6-option")
    {
        dhcpv6_option = value;
        dhcpv6_option.value_namespace = name_space;
        dhcpv6_option.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dhcpv6-iplease")
    {
        dhcpv6_iplease.yfilter = yfilter;
    }
    if(value_path == "dhcpv6-option")
    {
        dhcpv6_option.yfilter = yfilter;
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
    if(name == "delegated-prefix" || name == "dns-ipv6address" || name == "mode-class" || name == "dhcpv6-iplease" || name == "dhcpv6-option" || name == "address-pool" || name == "delegated-prefix-pool" || name == "class" || name == "stateful-address")
        return true;
    return false;
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::DelegatedPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "delegated-prefix"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::~DelegatedPrefix()
{
}

bool DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , framed_prefix(nullptr) // presence node
    , duplicate_address_detection(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection>())
    , ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ra_interval != nullptr)
    {
        _children["ra-interval"] = ra_interval;
    }

    if(framed_prefix != nullptr)
    {
        _children["framed-prefix"] = framed_prefix;
    }

    if(duplicate_address_detection != nullptr)
    {
        _children["duplicate-address-detection"] = duplicate_address_detection;
    }

    if(ra_initial != nullptr)
    {
        _children["ra-initial"] = ra_initial;
    }

    return _children;
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

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::Ppps::Ppp::Accounting::Accounting()
    :
    monitor_feature{YType::str, "monitor-feature"},
    prepaid_feature{YType::str, "prepaid-feature"}
        ,
    idle_timeout(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout>())
    , session(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::Session>())
    , service_accounting(std::make_shared<DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting>())
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
    if (is_presence_container) return true;
    return monitor_feature.is_set
	|| prepaid_feature.is_set
	|| (idle_timeout !=  nullptr && idle_timeout->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (service_accounting !=  nullptr && service_accounting->has_data());
}

bool DynamicTemplate::Ppps::Ppp::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_feature.yfilter)
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

    if (monitor_feature.is_set || is_set(monitor_feature.yfilter)) leaf_name_data.push_back(monitor_feature.get_name_leafdata());
    if (prepaid_feature.is_set || is_set(prepaid_feature.yfilter)) leaf_name_data.push_back(prepaid_feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idle_timeout != nullptr)
    {
        _children["idle-timeout"] = idle_timeout;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(service_accounting != nullptr)
    {
        _children["service-accounting"] = service_accounting;
    }

    return _children;
}

void DynamicTemplate::Ppps::Ppp::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-feature")
    {
        monitor_feature = value;
        monitor_feature.value_namespace = name_space;
        monitor_feature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-feature")
    {
        prepaid_feature = value;
        prepaid_feature.value_namespace = name_space;
        prepaid_feature.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::Ppps::Ppp::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-feature")
    {
        monitor_feature.yfilter = yfilter;
    }
    if(value_path == "prepaid-feature")
    {
        prepaid_feature.yfilter = yfilter;
    }
}

bool DynamicTemplate::Ppps::Ppp::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-timeout" || name == "session" || name == "service-accounting" || name == "monitor-feature" || name == "prepaid-feature")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Accounting::IdleTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    periodic_interval{YType::uint32, "periodic-interval"},
    dual_stack_delay{YType::uint32, "dual-stack-delay"},
    hold_acct_start{YType::enumeration, "hold-acct-start"}
{

    yang_name = "session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::Ppps::Ppp::Accounting::Session::~Session()
{
}

bool DynamicTemplate::Ppps::Ppp::Accounting::Session::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Accounting::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Accounting::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    accounting_interim_interval{YType::uint32, "accounting-interim-interval"}
{

    yang_name = "service-accounting"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::~ServiceAccounting()
{
}

bool DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Accounting::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound>())
    , inbound(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound>())
{
    outbound->parent = this;
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , outbound(std::make_shared<DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_configuration != nullptr)
    {
        _children["auto-configuration"] = auto_configuration;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(explicit_tracking != nullptr)
    {
        _children["explicit-tracking"] = explicit_tracking;
    }

    return _children;
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

    yang_name = "explicit-tracking"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::~ExplicitTracking()
{
}

bool DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::Ppps::Ppp::PppTemplate::PppTemplate()
    :
    fsm(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm>())
    , lcp(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp>())
    , ipv6cp(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp>())
    , ipcp(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv6cp = std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp>();
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fsm != nullptr)
    {
        _children["fsm"] = fsm;
    }

    if(lcp != nullptr)
    {
        _children["lcp"] = lcp;
    }

    if(ipv6cp != nullptr)
    {
        _children["ipv6cp"] = ipv6cp;
    }

    if(ipcp != nullptr)
    {
        _children["ipcp"] = ipcp;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Fsm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , delay(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay>())
    , authentication(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication>())
    , keepalive(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(absolute_timeout != nullptr)
    {
        _children["absolute-timeout"] = absolute_timeout;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::AbsoluteTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    pap{YType::uint32, "pap"},
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(methods != nullptr)
    {
        _children["methods"] = methods;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Authentication::Methods::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Lcp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::Ipv6cp()
    :
    passive{YType::empty, "passive"},
    renegotiation{YType::empty, "renegotiation"},
    peer_interface_id{YType::str, "peer-interface-id"},
    protocol_reject{YType::empty, "protocol-reject"}
{

    yang_name = "ipv6cp"; yang_parent_name = "ppp-template"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::~Ipv6cp()
{
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::has_data() const
{
    if (is_presence_container) return true;
    return passive.is_set
	|| renegotiation.is_set
	|| peer_interface_id.is_set
	|| protocol_reject.is_set;
}

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(renegotiation.yfilter)
	|| ydk::is_set(peer_interface_id.yfilter)
	|| ydk::is_set(protocol_reject.yfilter);
}

std::string DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6cp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (renegotiation.is_set || is_set(renegotiation.yfilter)) leaf_name_data.push_back(renegotiation.get_name_leafdata());
    if (peer_interface_id.is_set || is_set(peer_interface_id.yfilter)) leaf_name_data.push_back(peer_interface_id.get_name_leafdata());
    if (protocol_reject.is_set || is_set(protocol_reject.yfilter)) leaf_name_data.push_back(protocol_reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool DynamicTemplate::Ppps::Ppp::PppTemplate::Ipv6cp::has_leaf_or_child_of_name(const std::string & name) const
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
    , dns(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns>())
    , peer_address(std::make_shared<DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wins != nullptr)
    {
        _children["wins"] = wins;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    if(peer_address != nullptr)
    {
        _children["peer-address"] = peer_address;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(wins_addresses != nullptr)
    {
        _children["wins-addresses"] = wins_addresses;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Wins::WinsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns_addresses != nullptr)
    {
        _children["dns-addresses"] = dns_addresses;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::Dns::DnsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::Ppps::Ppp::PppTemplate::Ipcp::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::IpSubscribers::IpSubscribers()
    :
    ip_subscriber(this, {"template_name"})
{

    yang_name = "ip-subscribers"; yang_parent_name = "dynamic-template"; is_top_level_class = false; has_list_ancestor = false; 
}

DynamicTemplate::IpSubscribers::~IpSubscribers()
{
}

bool DynamicTemplate::IpSubscribers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_subscriber.len(); index++)
    {
        if(ip_subscriber[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::IpSubscribers::has_operation() const
{
    for (std::size_t index=0; index<ip_subscriber.len(); index++)
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber")
    {
        auto ent_ = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber>();
        ent_->parent = this;
        ip_subscriber.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_subscriber.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    pbr(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr>())
    , ipv4_network(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network>())
    , dhcpv6(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6>())
    , ipv6_neighbor(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor>())
    , accounting(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting>())
    , dhcpd(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd>())
    , ipv4_packet_filter(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter>())
    , ipv6_packet_filter(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter>())
    , ipv6_network(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network>())
    , igmp(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp>())
{
    pbr->parent = this;
    ipv4_network->parent = this;
    dhcpv6->parent = this;
    ipv6_neighbor->parent = this;
    accounting->parent = this;
    dhcpd->parent = this;
    ipv4_packet_filter->parent = this;
    ipv6_packet_filter->parent = this;
    ipv6_network->parent = this;
    igmp->parent = this;

    yang_name = "ip-subscriber"; yang_parent_name = "ip-subscribers"; is_top_level_class = false; has_list_ancestor = false; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::~IpSubscriber()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| vrf.is_set
	|| (pbr !=  nullptr && pbr->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (dhcpd !=  nullptr && dhcpd->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data())
	|| (igmp !=  nullptr && igmp->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (dhcpv6 !=  nullptr && dhcpv6->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (dhcpd !=  nullptr && dhcpd->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation());
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
    path_buffer << "ip-subscriber";
    ADD_KEY_TOKEN(template_name, "template-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::IpSubscribers::IpSubscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-pbr-subscriber-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6")
    {
        if(dhcpv6 == nullptr)
        {
            dhcpv6 = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6>();
        }
        return dhcpv6;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-accounting-cfg:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-dhcpd-subscriber-cfg:dhcpd")
    {
        if(dhcpd == nullptr)
        {
            dhcpd = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd>();
        }
        return dhcpd;
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

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network>();
        }
        return ipv6_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbr != nullptr)
    {
        _children["Cisco-IOS-XR-pbr-subscriber-cfg:pbr"] = pbr;
    }

    if(ipv4_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network"] = ipv4_network;
    }

    if(dhcpv6 != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg:dhcpv6"] = dhcpv6;
    }

    if(ipv6_neighbor != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(accounting != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-accounting-cfg:accounting"] = accounting;
    }

    if(dhcpd != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-dhcpd-subscriber-cfg:dhcpd"] = dhcpd;
    }

    if(ipv4_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv6_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(ipv6_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network"] = ipv6_network;
    }

    if(igmp != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg:igmp"] = igmp;
    }

    return _children;
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
    if(name == "pbr" || name == "ipv4-network" || name == "dhcpv6" || name == "ipv6-neighbor" || name == "accounting" || name == "dhcpd" || name == "ipv4-packet-filter" || name == "ipv6-packet-filter" || name == "ipv6-network" || name == "igmp" || name == "template-name" || name == "vrf")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::Dhcpv6()
    :
    dns_ipv6address{YType::str, "dns-ipv6address"},
    mode_class{YType::str, "mode-class"},
    dhcpv6_iplease{YType::str, "dhcpv6-iplease"},
    dhcpv6_option{YType::str, "dhcpv6-option"},
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
    if (is_presence_container) return true;
    return dns_ipv6address.is_set
	|| mode_class.is_set
	|| dhcpv6_iplease.is_set
	|| dhcpv6_option.is_set
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
	|| ydk::is_set(dhcpv6_iplease.yfilter)
	|| ydk::is_set(dhcpv6_option.yfilter)
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
    if (dhcpv6_iplease.is_set || is_set(dhcpv6_iplease.yfilter)) leaf_name_data.push_back(dhcpv6_iplease.get_name_leafdata());
    if (dhcpv6_option.is_set || is_set(dhcpv6_option.yfilter)) leaf_name_data.push_back(dhcpv6_option.get_name_leafdata());
    if (address_pool.is_set || is_set(address_pool.yfilter)) leaf_name_data.push_back(address_pool.get_name_leafdata());
    if (delegated_prefix_pool.is_set || is_set(delegated_prefix_pool.yfilter)) leaf_name_data.push_back(delegated_prefix_pool.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (stateful_address.is_set || is_set(stateful_address.yfilter)) leaf_name_data.push_back(stateful_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delegated_prefix != nullptr)
    {
        _children["delegated-prefix"] = delegated_prefix;
    }

    return _children;
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
    if(value_path == "dhcpv6-iplease")
    {
        dhcpv6_iplease = value;
        dhcpv6_iplease.value_namespace = name_space;
        dhcpv6_iplease.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv6-option")
    {
        dhcpv6_option = value;
        dhcpv6_option.value_namespace = name_space;
        dhcpv6_option.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dhcpv6-iplease")
    {
        dhcpv6_iplease.yfilter = yfilter;
    }
    if(value_path == "dhcpv6-option")
    {
        dhcpv6_option.yfilter = yfilter;
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
    if(name == "delegated-prefix" || name == "dns-ipv6address" || name == "mode-class" || name == "dhcpv6-iplease" || name == "dhcpv6-option" || name == "address-pool" || name == "delegated-prefix-pool" || name == "class" || name == "stateful-address")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::DelegatedPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "delegated-prefix"; yang_parent_name = "dhcpv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::~DelegatedPrefix()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , framed_prefix(nullptr) // presence node
    , duplicate_address_detection(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection>())
    , ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ra_interval != nullptr)
    {
        _children["ra-interval"] = ra_interval;
    }

    if(framed_prefix != nullptr)
    {
        _children["framed-prefix"] = framed_prefix;
    }

    if(duplicate_address_detection != nullptr)
    {
        _children["duplicate-address-detection"] = duplicate_address_detection;
    }

    if(ra_initial != nullptr)
    {
        _children["ra-initial"] = ra_initial;
    }

    return _children;
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

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Accounting()
    :
    monitor_feature{YType::str, "monitor-feature"},
    prepaid_feature{YType::str, "prepaid-feature"}
        ,
    service_accounting(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting>())
    , session(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session>())
    , idle_timeout(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout>())
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
    if (is_presence_container) return true;
    return monitor_feature.is_set
	|| prepaid_feature.is_set
	|| (service_accounting !=  nullptr && service_accounting->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (idle_timeout !=  nullptr && idle_timeout->has_data());
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_feature.yfilter)
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

    if (monitor_feature.is_set || is_set(monitor_feature.yfilter)) leaf_name_data.push_back(monitor_feature.get_name_leafdata());
    if (prepaid_feature.is_set || is_set(prepaid_feature.yfilter)) leaf_name_data.push_back(prepaid_feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_accounting != nullptr)
    {
        _children["service-accounting"] = service_accounting;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(idle_timeout != nullptr)
    {
        _children["idle-timeout"] = idle_timeout;
    }

    return _children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-feature")
    {
        monitor_feature = value;
        monitor_feature.value_namespace = name_space;
        monitor_feature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-feature")
    {
        prepaid_feature = value;
        prepaid_feature.value_namespace = name_space;
        prepaid_feature.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-feature")
    {
        monitor_feature.yfilter = yfilter;
    }
    if(value_path == "prepaid-feature")
    {
        prepaid_feature.yfilter = yfilter;
    }
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting" || name == "session" || name == "idle-timeout" || name == "monitor-feature" || name == "prepaid-feature")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::ServiceAccounting()
    :
    method_list_name{YType::str, "method-list-name"},
    accounting_interim_interval{YType::uint32, "accounting-interim-interval"}
{

    yang_name = "service-accounting"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::~ServiceAccounting()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    periodic_interval{YType::uint32, "periodic-interval"},
    dual_stack_delay{YType::uint32, "dual-stack-delay"},
    hold_acct_start{YType::enumeration, "hold-acct-start"}
{

    yang_name = "session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::~Session()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::IdleTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::Dhcpd()
    :
    dhcpv4_iplease{YType::str, "dhcpv4-iplease"},
    class_{YType::str, "class"},
    default_gateway{YType::str, "default-gateway"},
    session_limit{YType::uint32, "session-limit"},
    dhcpv4_option{YType::str, "dhcpv4-option"}
{

    yang_name = "dhcpd"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::~Dhcpd()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::has_data() const
{
    if (is_presence_container) return true;
    return dhcpv4_iplease.is_set
	|| class_.is_set
	|| default_gateway.is_set
	|| session_limit.is_set
	|| dhcpv4_option.is_set;
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcpv4_iplease.yfilter)
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

    if (dhcpv4_iplease.is_set || is_set(dhcpv4_iplease.yfilter)) leaf_name_data.push_back(dhcpv4_iplease.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (default_gateway.is_set || is_set(default_gateway.yfilter)) leaf_name_data.push_back(default_gateway.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (dhcpv4_option.is_set || is_set(dhcpv4_option.yfilter)) leaf_name_data.push_back(dhcpv4_option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcpv4-iplease")
    {
        dhcpv4_iplease = value;
        dhcpv4_iplease.value_namespace = name_space;
        dhcpv4_iplease.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "dhcpv4-iplease")
    {
        dhcpv4_iplease.yfilter = yfilter;
    }
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
    if(name == "dhcpv4-iplease" || name == "class" || name == "default-gateway" || name == "session-limit" || name == "dhcpv4-option")
        return true;
    return false;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound>())
    , inbound(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound>())
{
    outbound->parent = this;
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , outbound(std::make_shared<DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "ip-subscriber"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_configuration != nullptr)
    {
        _children["auto-configuration"] = auto_configuration;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(explicit_tracking != nullptr)
    {
        _children["explicit-tracking"] = explicit_tracking;
    }

    return _children;
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

    yang_name = "explicit-tracking"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::~ExplicitTracking()
{
}

bool DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::IpSubscribers::IpSubscriber::Igmp::DefaultVrf::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::SubscriberServices::SubscriberServices()
    :
    subscriber_service(this, {"template_name"})
{

    yang_name = "subscriber-services"; yang_parent_name = "dynamic-template"; is_top_level_class = false; has_list_ancestor = false; 
}

DynamicTemplate::SubscriberServices::~SubscriberServices()
{
}

bool DynamicTemplate::SubscriberServices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_service.len(); index++)
    {
        if(subscriber_service[index]->has_data())
            return true;
    }
    return false;
}

bool DynamicTemplate::SubscriberServices::has_operation() const
{
    for (std::size_t index=0; index<subscriber_service.len(); index++)
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-service")
    {
        auto ent_ = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService>();
        ent_->parent = this;
        subscriber_service.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    pbr(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Pbr>())
    , ipv4_network(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network>())
    , ipv6_neighbor(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor>())
    , accounting(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting>())
    , ipv4_packet_filter(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter>())
    , ipv6_packet_filter(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter>())
    , ipv6_network(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network>())
{
    pbr->parent = this;
    ipv4_network->parent = this;
    ipv6_neighbor->parent = this;
    accounting->parent = this;
    ipv4_packet_filter->parent = this;
    ipv6_packet_filter->parent = this;
    ipv6_network->parent = this;

    yang_name = "subscriber-service"; yang_parent_name = "subscriber-services"; is_top_level_class = false; has_list_ancestor = false; 
}

DynamicTemplate::SubscriberServices::SubscriberService::~SubscriberService()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| vrf.is_set
	|| (pbr !=  nullptr && pbr->has_data())
	|| (ipv4_network !=  nullptr && ipv4_network->has_data())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_data())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_data())
	|| (ipv6_network !=  nullptr && ipv6_network->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (pbr !=  nullptr && pbr->has_operation())
	|| (ipv4_network !=  nullptr && ipv4_network->has_operation())
	|| (ipv6_neighbor !=  nullptr && ipv6_neighbor->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (ipv4_packet_filter !=  nullptr && ipv4_packet_filter->has_operation())
	|| (ipv6_packet_filter !=  nullptr && ipv6_packet_filter->has_operation())
	|| (ipv6_network !=  nullptr && ipv6_network->has_operation());
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
    path_buffer << "subscriber-service";
    ADD_KEY_TOKEN(template_name, "template-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DynamicTemplate::SubscriberServices::SubscriberService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-pbr-subscriber-cfg:pbr")
    {
        if(pbr == nullptr)
        {
            pbr = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Pbr>();
        }
        return pbr;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network")
    {
        if(ipv4_network == nullptr)
        {
            ipv4_network = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network>();
        }
        return ipv4_network;
    }

    if(child_yang_name == "Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor")
    {
        if(ipv6_neighbor == nullptr)
        {
            ipv6_neighbor = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor>();
        }
        return ipv6_neighbor;
    }

    if(child_yang_name == "Cisco-IOS-XR-subscriber-accounting-cfg:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting>();
        }
        return accounting;
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

    if(child_yang_name == "Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network")
    {
        if(ipv6_network == nullptr)
        {
            ipv6_network = std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network>();
        }
        return ipv6_network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbr != nullptr)
    {
        _children["Cisco-IOS-XR-pbr-subscriber-cfg:pbr"] = pbr;
    }

    if(ipv4_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv4-ma-subscriber-cfg:ipv4-network"] = ipv4_network;
    }

    if(ipv6_neighbor != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-nd-subscriber-cfg:ipv6-neighbor"] = ipv6_neighbor;
    }

    if(accounting != nullptr)
    {
        _children["Cisco-IOS-XR-subscriber-accounting-cfg:accounting"] = accounting;
    }

    if(ipv4_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv4-packet-filter"] = ipv4_packet_filter;
    }

    if(ipv6_packet_filter != nullptr)
    {
        _children["Cisco-IOS-XR-ip-pfilter-subscriber-cfg:ipv6-packet-filter"] = ipv6_packet_filter;
    }

    if(ipv6_network != nullptr)
    {
        _children["Cisco-IOS-XR-ipv6-ma-subscriber-cfg:ipv6-network"] = ipv6_network;
    }

    return _children;
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
    if(name == "pbr" || name == "ipv4-network" || name == "ipv6-neighbor" || name == "accounting" || name == "ipv4-packet-filter" || name == "ipv6-packet-filter" || name == "ipv6-network" || name == "template-name" || name == "vrf")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , framed_prefix(nullptr) // presence node
    , duplicate_address_detection(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection>())
    , ra_initial(nullptr) // presence node
{
    duplicate_address_detection->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ra_interval != nullptr)
    {
        _children["ra-interval"] = ra_interval;
    }

    if(framed_prefix != nullptr)
    {
        _children["framed-prefix"] = framed_prefix;
    }

    if(duplicate_address_detection != nullptr)
    {
        _children["duplicate-address-detection"] = duplicate_address_detection;
    }

    if(ra_initial != nullptr)
    {
        _children["ra-initial"] = ra_initial;
    }

    return _children;
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

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "framed-prefix"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::~FramedPrefix()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

    yang_name = "ra-initial"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::~RaInitial()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Accounting()
    :
    monitor_feature{YType::str, "monitor-feature"},
    prepaid_feature{YType::str, "prepaid-feature"}
        ,
    service_accounting(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting>())
    , session(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session>())
    , idle_timeout(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout>())
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
    if (is_presence_container) return true;
    return monitor_feature.is_set
	|| prepaid_feature.is_set
	|| (service_accounting !=  nullptr && service_accounting->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (idle_timeout !=  nullptr && idle_timeout->has_data());
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_feature.yfilter)
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

    if (monitor_feature.is_set || is_set(monitor_feature.yfilter)) leaf_name_data.push_back(monitor_feature.get_name_leafdata());
    if (prepaid_feature.is_set || is_set(prepaid_feature.yfilter)) leaf_name_data.push_back(prepaid_feature.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_accounting != nullptr)
    {
        _children["service-accounting"] = service_accounting;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(idle_timeout != nullptr)
    {
        _children["idle-timeout"] = idle_timeout;
    }

    return _children;
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-feature")
    {
        monitor_feature = value;
        monitor_feature.value_namespace = name_space;
        monitor_feature.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prepaid-feature")
    {
        prepaid_feature = value;
        prepaid_feature.value_namespace = name_space;
        prepaid_feature.value_namespace_prefix = name_space_prefix;
    }
}

void DynamicTemplate::SubscriberServices::SubscriberService::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-feature")
    {
        monitor_feature.yfilter = yfilter;
    }
    if(value_path == "prepaid-feature")
    {
        prepaid_feature.yfilter = yfilter;
    }
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-accounting" || name == "session" || name == "idle-timeout" || name == "monitor-feature" || name == "prepaid-feature")
        return true;
    return false;
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::ServiceAccounting()
    :
    method_list_name{YType::str, "method-list-name"},
    accounting_interim_interval{YType::uint32, "accounting-interim-interval"}
{

    yang_name = "service-accounting"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::~ServiceAccounting()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::ServiceAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    periodic_interval{YType::uint32, "periodic-interval"},
    dual_stack_delay{YType::uint32, "dual-stack-delay"},
    hold_acct_start{YType::enumeration, "hold-acct-start"}
{

    yang_name = "session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::~Session()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Accounting::IdleTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound>())
    , inbound(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound>())
{
    outbound->parent = this;
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    , outbound(std::make_shared<DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "subscriber-service"; is_top_level_class = false; has_list_ancestor = true; 
}

DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_configuration != nullptr)
    {
        _children["auto-configuration"] = auto_configuration;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

const Enum::YLeaf DynamicTemplate::Ppps::Ppp::Accounting::Session::HoldAcctStart::ipv6_prefix_delegation {3, "ipv6-prefix-delegation"};

const Enum::YLeaf DynamicTemplate::IpSubscribers::IpSubscriber::Accounting::Session::HoldAcctStart::ipv6_prefix_delegation {3, "ipv6-prefix-delegation"};

const Enum::YLeaf DynamicTemplate::SubscriberServices::SubscriberService::Accounting::Session::HoldAcctStart::ipv6_prefix_delegation {3, "ipv6-prefix-delegation"};


}
}

