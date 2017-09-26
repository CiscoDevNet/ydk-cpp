
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfis()
{

    yang_name = "vfis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::~Vfis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_data() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_operation() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi")
    {
        for(auto const & c : vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi>();
        c->parent = this;
        vfi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vfi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::Vfi()
    :
    name{YType::str, "name"},
    vfi_shutdown{YType::empty, "vfi-shutdown"},
    vpnid{YType::uint32, "vpnid"}
    	,
    bgp_auto_discovery(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>())
	,multicast_p2mp(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp>())
	,vfi_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>())
{
    bgp_auto_discovery->parent = this;
    multicast_p2mp->parent = this;
    vfi_pseudowires->parent = this;

    yang_name = "vfi"; yang_parent_name = "vfis"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::~Vfi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_data() const
{
    return name.is_set
	|| vfi_shutdown.is_set
	|| vpnid.is_set
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_data())
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_data())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vfi_shutdown.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_operation())
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_operation())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vfi_shutdown.is_set || is_set(vfi_shutdown.yfilter)) leaf_name_data.push_back(vfi_shutdown.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-auto-discovery")
    {
        if(bgp_auto_discovery == nullptr)
        {
            bgp_auto_discovery = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>();
        }
        return bgp_auto_discovery;
    }

    if(child_yang_name == "multicast-p2mp")
    {
        if(multicast_p2mp == nullptr)
        {
            multicast_p2mp = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp>();
        }
        return multicast_p2mp;
    }

    if(child_yang_name == "vfi-pseudowires")
    {
        if(vfi_pseudowires == nullptr)
        {
            vfi_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>();
        }
        return vfi_pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_auto_discovery != nullptr)
    {
        children["bgp-auto-discovery"] = bgp_auto_discovery;
    }

    if(multicast_p2mp != nullptr)
    {
        children["multicast-p2mp"] = multicast_p2mp;
    }

    if(vfi_pseudowires != nullptr)
    {
        children["vfi-pseudowires"] = vfi_pseudowires;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown = value;
        vfi_shutdown.value_namespace = name_space;
        vfi_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnid")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown.yfilter = yfilter;
    }
    if(value_path == "vpnid")
    {
        vpnid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-auto-discovery" || name == "multicast-p2mp" || name == "vfi-pseudowires" || name == "name" || name == "vfi-shutdown" || name == "vpnid")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpAutoDiscovery()
    :
    ad_control_word{YType::empty, "ad-control-word"},
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
    	,
    bgp_route_policy(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>())
	,bgp_signaling_protocol(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>())
	,ldp_signaling_protocol(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>())
	,route_distinguisher(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>())
	,route_targets(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>())
{
    bgp_route_policy->parent = this;
    bgp_signaling_protocol->parent = this;
    ldp_signaling_protocol->parent = this;
    route_distinguisher->parent = this;
    route_targets->parent = this;

    yang_name = "bgp-auto-discovery"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::~BgpAutoDiscovery()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_data() const
{
    return ad_control_word.is_set
	|| enable.is_set
	|| table_policy.is_set
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_data())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_data())
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ad_control_word.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_operation())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_operation())
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_control_word.is_set || is_set(ad_control_word.yfilter)) leaf_name_data.push_back(ad_control_word.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-policy")
    {
        if(bgp_route_policy == nullptr)
        {
            bgp_route_policy = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>();
        }
        return bgp_route_policy;
    }

    if(child_yang_name == "bgp-signaling-protocol")
    {
        if(bgp_signaling_protocol == nullptr)
        {
            bgp_signaling_protocol = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>();
        }
        return bgp_signaling_protocol;
    }

    if(child_yang_name == "ldp-signaling-protocol")
    {
        if(ldp_signaling_protocol == nullptr)
        {
            ldp_signaling_protocol = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>();
        }
        return ldp_signaling_protocol;
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>();
        }
        return route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_route_policy != nullptr)
    {
        children["bgp-route-policy"] = bgp_route_policy;
    }

    if(bgp_signaling_protocol != nullptr)
    {
        children["bgp-signaling-protocol"] = bgp_signaling_protocol;
    }

    if(ldp_signaling_protocol != nullptr)
    {
        children["ldp-signaling-protocol"] = ldp_signaling_protocol;
    }

    if(route_distinguisher != nullptr)
    {
        children["route-distinguisher"] = route_distinguisher;
    }

    if(route_targets != nullptr)
    {
        children["route-targets"] = route_targets;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-control-word")
    {
        ad_control_word = value;
        ad_control_word.value_namespace = name_space;
        ad_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-control-word")
    {
        ad_control_word.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-policy" || name == "bgp-signaling-protocol" || name == "ldp-signaling-protocol" || name == "route-distinguisher" || name == "route-targets" || name == "ad-control-word" || name == "enable" || name == "table-policy")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::BgpRoutePolicy()
    :
    export_{YType::str, "export"}
{

    yang_name = "bgp-route-policy"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::~BgpRoutePolicy()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_data() const
{
    return export_.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(export_.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.yfilter)) leaf_name_data.push_back(export_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "export")
    {
        export_ = value;
        export_.value_namespace = name_space;
        export_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "export")
    {
        export_.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::BgpSignalingProtocol()
    :
    enable{YType::empty, "enable"},
    ve_range{YType::uint32, "ve-range"},
    veid{YType::uint32, "veid"}
    	,
    flow_label_load_balance(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;

    yang_name = "bgp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::~BgpSignalingProtocol()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_data() const
{
    return enable.is_set
	|| ve_range.is_set
	|| veid.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(veid.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (veid.is_set || is_set(veid.yfilter)) leaf_name_data.push_back(veid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
        ve_range.value_namespace = name_space;
        ve_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "veid")
    {
        veid = value;
        veid.value_namespace = name_space;
        veid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ve-range")
    {
        ve_range.yfilter = yfilter;
    }
    if(value_path == "veid")
    {
        veid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "enable" || name == "ve-range" || name == "veid")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "bgp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::LdpSignalingProtocol()
    :
    enable{YType::empty, "enable"}
    	,
    flow_label_load_balance(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>())
	,vpls_id(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId>())
{
    flow_label_load_balance->parent = this;
    vpls_id->parent = this;

    yang_name = "ldp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::~LdpSignalingProtocol()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_data() const
{
    return enable.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data())
	|| (vpls_id !=  nullptr && vpls_id->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation())
	|| (vpls_id !=  nullptr && vpls_id->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId>();
        }
        return vpls_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    if(vpls_id != nullptr)
    {
        children["vpls-id"] = vpls_id;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "vpls-id" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "ldp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::VplsId()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "vpls-id"; yang_parent_name = "ldp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::~VplsId()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTargets()
{

    yang_name = "route-targets"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::~RouteTargets()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::RouteTarget()
    :
    role{YType::enumeration, "role"},
    format{YType::enumeration, "format"}
{

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_data())
            return true;
    }
    return role.is_set
	|| format.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[role='" <<role <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(c);
        return c;
    }

    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        for(auto const & c : two_byte_as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs>();
        c->parent = this;
        two_byte_as_or_four_byte_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : two_byte_as_or_four_byte_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-as-or-four-byte-as" || name == "role" || name == "format")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "ipv4-address"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| addr_index.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address <<"']" <<"[addr-index='" <<addr_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "addr-index")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{

    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    return as.is_set
	|| as_index.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as-index")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::MulticastP2Mp()
    :
    enable{YType::empty, "enable"}
    	,
    signalings(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings>())
	,transports(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports>())
{
    signalings->parent = this;
    transports->parent = this;

    yang_name = "multicast-p2mp"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::~MulticastP2Mp()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::has_data() const
{
    return enable.is_set
	|| (signalings !=  nullptr && signalings->has_data())
	|| (transports !=  nullptr && transports->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (signalings !=  nullptr && signalings->has_operation())
	|| (transports !=  nullptr && transports->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalings")
    {
        if(signalings == nullptr)
        {
            signalings = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings>();
        }
        return signalings;
    }

    if(child_yang_name == "transports")
    {
        if(transports == nullptr)
        {
            transports = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports>();
        }
        return transports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signalings != nullptr)
    {
        children["signalings"] = signalings;
    }

    if(transports != nullptr)
    {
        children["transports"] = transports;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalings" || name == "transports" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signalings()
{

    yang_name = "signalings"; yang_parent_name = "multicast-p2mp"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::~Signalings()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::has_data() const
{
    for (std::size_t index=0; index<signaling.size(); index++)
    {
        if(signaling[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::has_operation() const
{
    for (std::size_t index=0; index<signaling.size(); index++)
    {
        if(signaling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        for(auto const & c : signaling)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling>();
        c->parent = this;
        signaling.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : signaling)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::Signaling()
    :
    signaling_name{YType::str, "signaling-name"}
{

    yang_name = "signaling"; yang_parent_name = "signalings"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::~Signaling()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::has_data() const
{
    return signaling_name.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signaling_name.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling" <<"[signaling-name='" <<signaling_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaling_name.is_set || is_set(signaling_name.yfilter)) leaf_name_data.push_back(signaling_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaling-name")
    {
        signaling_name = value;
        signaling_name.value_namespace = name_space;
        signaling_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaling-name")
    {
        signaling_name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling-name")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transports()
{

    yang_name = "transports"; yang_parent_name = "multicast-p2mp"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::~Transports()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::has_data() const
{
    for (std::size_t index=0; index<transport.size(); index++)
    {
        if(transport[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::has_operation() const
{
    for (std::size_t index=0; index<transport.size(); index++)
    {
        if(transport[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        for(auto const & c : transport)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport>();
        c->parent = this;
        transport.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : transport)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::Transport()
    :
    transport_name{YType::str, "transport-name"},
    attribute_set_name{YType::str, "attribute-set-name"}
{

    yang_name = "transport"; yang_parent_name = "transports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::~Transport()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::has_data() const
{
    return transport_name.is_set
	|| attribute_set_name.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_name.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport" <<"[transport-name='" <<transport_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_name.is_set || is_set(transport_name.yfilter)) leaf_name_data.push_back(transport_name.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-name")
    {
        transport_name = value;
        transport_name.value_namespace = name_space;
        transport_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-name")
    {
        transport_name.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-name" || name == "attribute-set-name")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowires()
{

    yang_name = "vfi-pseudowires"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::~VfiPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_data() const
{
    for (std::size_t index=0; index<vfi_pseudowire.size(); index++)
    {
        if(vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<vfi_pseudowire.size(); index++)
    {
        if(vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi-pseudowire")
    {
        for(auto const & c : vfi_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire>();
        c->parent = this;
        vfi_pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vfi_pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi-pseudowire")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    vfi_pw_class{YType::str, "vfi-pw-class"},
    vfi_pw_igmp_snoop{YType::str, "vfi-pw-igmp-snoop"},
    vfi_pw_mld_snoop{YType::str, "vfi-pw-mld-snoop"}
    	,
    pseudowire_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>())
	,vfi_pw_dhcp_snoop(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>())
	,vfi_pw_mpls_static_labels(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>())
{
    pseudowire_static_mac_addresses->parent = this;
    vfi_pw_dhcp_snoop->parent = this;
    vfi_pw_mpls_static_labels->parent = this;

    yang_name = "vfi-pseudowire"; yang_parent_name = "vfi-pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::~VfiPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| vfi_pw_class.is_set
	|| vfi_pw_igmp_snoop.is_set
	|| vfi_pw_mld_snoop.is_set
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_data())
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_data())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(vfi_pw_class.yfilter)
	|| ydk::is_set(vfi_pw_igmp_snoop.yfilter)
	|| ydk::is_set(vfi_pw_mld_snoop.yfilter)
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_operation())
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_operation())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (vfi_pw_class.is_set || is_set(vfi_pw_class.yfilter)) leaf_name_data.push_back(vfi_pw_class.get_name_leafdata());
    if (vfi_pw_igmp_snoop.is_set || is_set(vfi_pw_igmp_snoop.yfilter)) leaf_name_data.push_back(vfi_pw_igmp_snoop.get_name_leafdata());
    if (vfi_pw_mld_snoop.is_set || is_set(vfi_pw_mld_snoop.yfilter)) leaf_name_data.push_back(vfi_pw_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-static-mac-addresses")
    {
        if(pseudowire_static_mac_addresses == nullptr)
        {
            pseudowire_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>();
        }
        return pseudowire_static_mac_addresses;
    }

    if(child_yang_name == "vfi-pw-dhcp-snoop")
    {
        if(vfi_pw_dhcp_snoop == nullptr)
        {
            vfi_pw_dhcp_snoop = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>();
        }
        return vfi_pw_dhcp_snoop;
    }

    if(child_yang_name == "vfi-pw-mpls-static-labels")
    {
        if(vfi_pw_mpls_static_labels == nullptr)
        {
            vfi_pw_mpls_static_labels = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>();
        }
        return vfi_pw_mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire_static_mac_addresses != nullptr)
    {
        children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;
    }

    if(vfi_pw_dhcp_snoop != nullptr)
    {
        children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;
    }

    if(vfi_pw_mpls_static_labels != nullptr)
    {
        children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class = value;
        vfi_pw_class.value_namespace = name_space;
        vfi_pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop = value;
        vfi_pw_igmp_snoop.value_namespace = name_space;
        vfi_pw_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop = value;
        vfi_pw_mld_snoop.value_namespace = name_space;
        vfi_pw_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-static-mac-addresses" || name == "vfi-pw-dhcp-snoop" || name == "vfi-pw-mpls-static-labels" || name == "neighbor" || name == "pseudowire-id" || name == "vfi-pw-class" || name == "vfi-pw-igmp-snoop" || name == "vfi-pw-mld-snoop")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddresses()
{

    yang_name = "pseudowire-static-mac-addresses"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::~PseudowireStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_static_mac_address.size(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_static_mac_address.size(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-static-mac-address")
    {
        for(auto const & c : pseudowire_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress>();
        c->parent = this;
        pseudowire_static_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire_static_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-static-mac-address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::PseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "pseudowire-static-mac-address"; yang_parent_name = "pseudowire-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::~PseudowireStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::VfiPwDhcpSnoop()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{

    yang_name = "vfi-pw-dhcp-snoop"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::~VfiPwDhcpSnoop()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter)
	|| ydk::is_set(profile_id.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-dhcp-snoop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping-id" || name == "profile-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::VfiPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "vfi-pw-mpls-static-labels"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::~VfiPwMplsStaticLabels()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::FlexibleXconnectServiceTable()
    :
    vlan_aware_flexible_xconnect_services(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices>())
	,vlan_unaware_flexible_xconnect_services(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices>())
{
    vlan_aware_flexible_xconnect_services->parent = this;
    vlan_unaware_flexible_xconnect_services->parent = this;

    yang_name = "flexible-xconnect-service-table"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::~FlexibleXconnectServiceTable()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::has_data() const
{
    return (vlan_aware_flexible_xconnect_services !=  nullptr && vlan_aware_flexible_xconnect_services->has_data())
	|| (vlan_unaware_flexible_xconnect_services !=  nullptr && vlan_unaware_flexible_xconnect_services->has_data());
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_aware_flexible_xconnect_services !=  nullptr && vlan_aware_flexible_xconnect_services->has_operation())
	|| (vlan_unaware_flexible_xconnect_services !=  nullptr && vlan_unaware_flexible_xconnect_services->has_operation());
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-flexible-xconnect-services")
    {
        if(vlan_aware_flexible_xconnect_services == nullptr)
        {
            vlan_aware_flexible_xconnect_services = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices>();
        }
        return vlan_aware_flexible_xconnect_services;
    }

    if(child_yang_name == "vlan-unaware-flexible-xconnect-services")
    {
        if(vlan_unaware_flexible_xconnect_services == nullptr)
        {
            vlan_unaware_flexible_xconnect_services = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices>();
        }
        return vlan_unaware_flexible_xconnect_services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_aware_flexible_xconnect_services != nullptr)
    {
        children["vlan-aware-flexible-xconnect-services"] = vlan_aware_flexible_xconnect_services;
    }

    if(vlan_unaware_flexible_xconnect_services != nullptr)
    {
        children["vlan-unaware-flexible-xconnect-services"] = vlan_unaware_flexible_xconnect_services;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::FlexibleXconnectServiceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-flexible-xconnect-services" || name == "vlan-unaware-flexible-xconnect-services")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectServices()
{

    yang_name = "vlan-aware-flexible-xconnect-services"; yang_parent_name = "flexible-xconnect-service-table"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::~VlanAwareFlexibleXconnectServices()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_data() const
{
    for (std::size_t index=0; index<vlan_aware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_aware_flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<vlan_aware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_aware_flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-flexible-xconnect-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-flexible-xconnect-service")
    {
        for(auto const & c : vlan_aware_flexible_xconnect_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService>();
        c->parent = this;
        vlan_aware_flexible_xconnect_service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_aware_flexible_xconnect_service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-flexible-xconnect-service")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFlexibleXconnectService()
    :
    eviid{YType::uint32, "eviid"}
    	,
    vlan_aware_fxc_attachment_circuits(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits>())
{
    vlan_aware_fxc_attachment_circuits->parent = this;

    yang_name = "vlan-aware-flexible-xconnect-service"; yang_parent_name = "vlan-aware-flexible-xconnect-services"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::~VlanAwareFlexibleXconnectService()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_data() const
{
    return eviid.is_set
	|| (vlan_aware_fxc_attachment_circuits !=  nullptr && vlan_aware_fxc_attachment_circuits->has_data());
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| (vlan_aware_fxc_attachment_circuits !=  nullptr && vlan_aware_fxc_attachment_circuits->has_operation());
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/vlan-aware-flexible-xconnect-services/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-flexible-xconnect-service" <<"[eviid='" <<eviid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-fxc-attachment-circuits")
    {
        if(vlan_aware_fxc_attachment_circuits == nullptr)
        {
            vlan_aware_fxc_attachment_circuits = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits>();
        }
        return vlan_aware_fxc_attachment_circuits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_aware_fxc_attachment_circuits != nullptr)
    {
        children["vlan-aware-fxc-attachment-circuits"] = vlan_aware_fxc_attachment_circuits;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-fxc-attachment-circuits" || name == "eviid")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuits()
{

    yang_name = "vlan-aware-fxc-attachment-circuits"; yang_parent_name = "vlan-aware-flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::~VlanAwareFxcAttachmentCircuits()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<vlan_aware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_aware_fxc_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<vlan_aware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_aware_fxc_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-fxc-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-fxc-attachment-circuit")
    {
        for(auto const & c : vlan_aware_fxc_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit>();
        c->parent = this;
        vlan_aware_fxc_attachment_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_aware_fxc_attachment_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-fxc-attachment-circuit")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::VlanAwareFxcAttachmentCircuit()
    :
    name{YType::str, "name"}
{

    yang_name = "vlan-aware-fxc-attachment-circuit"; yang_parent_name = "vlan-aware-fxc-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::~VlanAwareFxcAttachmentCircuit()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_data() const
{
    return name.is_set;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-fxc-attachment-circuit" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectServices()
{

    yang_name = "vlan-unaware-flexible-xconnect-services"; yang_parent_name = "flexible-xconnect-service-table"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::~VlanUnawareFlexibleXconnectServices()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_data() const
{
    for (std::size_t index=0; index<vlan_unaware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_unaware_flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_unaware_flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-flexible-xconnect-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-flexible-xconnect-service")
    {
        for(auto const & c : vlan_unaware_flexible_xconnect_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService>();
        c->parent = this;
        vlan_unaware_flexible_xconnect_service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_unaware_flexible_xconnect_service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-flexible-xconnect-service")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFlexibleXconnectService()
    :
    name{YType::str, "name"}
    	,
    vlan_unaware_fxc_attachment_circuits(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits>())
	,vlan_unaware_fxc_pseudowire_evpns(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns>())
{
    vlan_unaware_fxc_attachment_circuits->parent = this;
    vlan_unaware_fxc_pseudowire_evpns->parent = this;

    yang_name = "vlan-unaware-flexible-xconnect-service"; yang_parent_name = "vlan-unaware-flexible-xconnect-services"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::~VlanUnawareFlexibleXconnectService()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_data() const
{
    return name.is_set
	|| (vlan_unaware_fxc_attachment_circuits !=  nullptr && vlan_unaware_fxc_attachment_circuits->has_data())
	|| (vlan_unaware_fxc_pseudowire_evpns !=  nullptr && vlan_unaware_fxc_pseudowire_evpns->has_data());
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vlan_unaware_fxc_attachment_circuits !=  nullptr && vlan_unaware_fxc_attachment_circuits->has_operation())
	|| (vlan_unaware_fxc_pseudowire_evpns !=  nullptr && vlan_unaware_fxc_pseudowire_evpns->has_operation());
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/vlan-unaware-flexible-xconnect-services/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-flexible-xconnect-service" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-fxc-attachment-circuits")
    {
        if(vlan_unaware_fxc_attachment_circuits == nullptr)
        {
            vlan_unaware_fxc_attachment_circuits = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits>();
        }
        return vlan_unaware_fxc_attachment_circuits;
    }

    if(child_yang_name == "vlan-unaware-fxc-pseudowire-evpns")
    {
        if(vlan_unaware_fxc_pseudowire_evpns == nullptr)
        {
            vlan_unaware_fxc_pseudowire_evpns = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns>();
        }
        return vlan_unaware_fxc_pseudowire_evpns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_unaware_fxc_attachment_circuits != nullptr)
    {
        children["vlan-unaware-fxc-attachment-circuits"] = vlan_unaware_fxc_attachment_circuits;
    }

    if(vlan_unaware_fxc_pseudowire_evpns != nullptr)
    {
        children["vlan-unaware-fxc-pseudowire-evpns"] = vlan_unaware_fxc_pseudowire_evpns;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-fxc-attachment-circuits" || name == "vlan-unaware-fxc-pseudowire-evpns" || name == "name")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuits()
{

    yang_name = "vlan-unaware-fxc-attachment-circuits"; yang_parent_name = "vlan-unaware-flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::~VlanUnawareFxcAttachmentCircuits()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_unaware_fxc_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_unaware_fxc_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-fxc-attachment-circuit")
    {
        for(auto const & c : vlan_unaware_fxc_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit>();
        c->parent = this;
        vlan_unaware_fxc_attachment_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_unaware_fxc_attachment_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-fxc-attachment-circuit")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::VlanUnawareFxcAttachmentCircuit()
    :
    name{YType::str, "name"}
{

    yang_name = "vlan-unaware-fxc-attachment-circuit"; yang_parent_name = "vlan-unaware-fxc-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::~VlanUnawareFxcAttachmentCircuit()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_data() const
{
    return name.is_set;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-attachment-circuit" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpns()
{

    yang_name = "vlan-unaware-fxc-pseudowire-evpns"; yang_parent_name = "vlan-unaware-flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::~VlanUnawareFxcPseudowireEvpns()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_data() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_pseudowire_evpn.size(); index++)
    {
        if(vlan_unaware_fxc_pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_pseudowire_evpn.size(); index++)
    {
        if(vlan_unaware_fxc_pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-pseudowire-evpns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-fxc-pseudowire-evpn")
    {
        for(auto const & c : vlan_unaware_fxc_pseudowire_evpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn>();
        c->parent = this;
        vlan_unaware_fxc_pseudowire_evpn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_unaware_fxc_pseudowire_evpn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-fxc-pseudowire-evpn")
        return true;
    return false;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::VlanUnawareFxcPseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    acid{YType::uint32, "acid"}
{

    yang_name = "vlan-unaware-fxc-pseudowire-evpn"; yang_parent_name = "vlan-unaware-fxc-pseudowire-evpns"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::~VlanUnawareFxcPseudowireEvpn()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_data() const
{
    return eviid.is_set
	|| acid.is_set;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(acid.yfilter);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-pseudowire-evpn" <<"[eviid='" <<eviid <<"']" <<"[acid='" <<acid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (acid.is_set || is_set(acid.yfilter)) leaf_name_data.push_back(acid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acid")
    {
        acid = value;
        acid.value_namespace = name_space;
        acid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "acid")
    {
        acid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid" || name == "acid")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Rings()
{

    yang_name = "g8032-rings"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::G8032Rings::~G8032Rings()
{
}

bool L2Vpn::Database::G8032Rings::has_data() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::G8032Rings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::G8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-rings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring")
    {
        for(auto const & c : g8032_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring>();
        c->parent = this;
        g8032_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : g8032_ring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::G8032Rings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::G8032Rings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::G8032Ring()
    :
    g8032_ring_name{YType::str, "g8032-ring-name"},
    erp_provider_bridge{YType::empty, "erp-provider-bridge"},
    exclusion_list{YType::str, "exclusion-list"},
    open_ring{YType::empty, "open-ring"}
    	,
    erp_instances(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances>())
	,erp_port0s(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S>())
	,erp_port1s(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S>())
{
    erp_instances->parent = this;
    erp_port0s->parent = this;
    erp_port1s->parent = this;

    yang_name = "g8032-ring"; yang_parent_name = "g8032-rings"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::G8032Rings::G8032Ring::~G8032Ring()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::has_data() const
{
    return g8032_ring_name.is_set
	|| erp_provider_bridge.is_set
	|| exclusion_list.is_set
	|| open_ring.is_set
	|| (erp_instances !=  nullptr && erp_instances->has_data())
	|| (erp_port0s !=  nullptr && erp_port0s->has_data())
	|| (erp_port1s !=  nullptr && erp_port1s->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(g8032_ring_name.yfilter)
	|| ydk::is_set(erp_provider_bridge.yfilter)
	|| ydk::is_set(exclusion_list.yfilter)
	|| ydk::is_set(open_ring.yfilter)
	|| (erp_instances !=  nullptr && erp_instances->has_operation())
	|| (erp_port0s !=  nullptr && erp_port0s->has_operation())
	|| (erp_port1s !=  nullptr && erp_port1s->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/g8032-rings/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring" <<"[g8032-ring-name='" <<g8032_ring_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g8032_ring_name.is_set || is_set(g8032_ring_name.yfilter)) leaf_name_data.push_back(g8032_ring_name.get_name_leafdata());
    if (erp_provider_bridge.is_set || is_set(erp_provider_bridge.yfilter)) leaf_name_data.push_back(erp_provider_bridge.get_name_leafdata());
    if (exclusion_list.is_set || is_set(exclusion_list.yfilter)) leaf_name_data.push_back(exclusion_list.get_name_leafdata());
    if (open_ring.is_set || is_set(open_ring.yfilter)) leaf_name_data.push_back(open_ring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-instances")
    {
        if(erp_instances == nullptr)
        {
            erp_instances = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances>();
        }
        return erp_instances;
    }

    if(child_yang_name == "erp-port0s")
    {
        if(erp_port0s == nullptr)
        {
            erp_port0s = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S>();
        }
        return erp_port0s;
    }

    if(child_yang_name == "erp-port1s")
    {
        if(erp_port1s == nullptr)
        {
            erp_port1s = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S>();
        }
        return erp_port1s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(erp_instances != nullptr)
    {
        children["erp-instances"] = erp_instances;
    }

    if(erp_port0s != nullptr)
    {
        children["erp-port0s"] = erp_port0s;
    }

    if(erp_port1s != nullptr)
    {
        children["erp-port1s"] = erp_port1s;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "g8032-ring-name")
    {
        g8032_ring_name = value;
        g8032_ring_name.value_namespace = name_space;
        g8032_ring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erp-provider-bridge")
    {
        erp_provider_bridge = value;
        erp_provider_bridge.value_namespace = name_space;
        erp_provider_bridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-list")
    {
        exclusion_list = value;
        exclusion_list.value_namespace = name_space;
        exclusion_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-ring")
    {
        open_ring = value;
        open_ring.value_namespace = name_space;
        open_ring.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "g8032-ring-name")
    {
        g8032_ring_name.yfilter = yfilter;
    }
    if(value_path == "erp-provider-bridge")
    {
        erp_provider_bridge.yfilter = yfilter;
    }
    if(value_path == "exclusion-list")
    {
        exclusion_list.yfilter = yfilter;
    }
    if(value_path == "open-ring")
    {
        open_ring.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-instances" || name == "erp-port0s" || name == "erp-port1s" || name == "g8032-ring-name" || name == "erp-provider-bridge" || name == "exclusion-list" || name == "open-ring")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstances()
{

    yang_name = "erp-instances"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::~ErpInstances()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_data() const
{
    for (std::size_t index=0; index<erp_instance.size(); index++)
    {
        if(erp_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_operation() const
{
    for (std::size_t index=0; index<erp_instance.size(); index++)
    {
        if(erp_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-instance")
    {
        for(auto const & c : erp_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance>();
        c->parent = this;
        erp_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : erp_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-instance")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::ErpInstance()
    :
    erp_instance_id{YType::uint32, "erp-instance-id"},
    description{YType::str, "description"},
    inclusion_list{YType::str, "inclusion-list"},
    profile{YType::str, "profile"}
    	,
    aps(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps>())
	,rpl(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl>())
{
    aps->parent = this;
    rpl->parent = this;

    yang_name = "erp-instance"; yang_parent_name = "erp-instances"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::~ErpInstance()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_data() const
{
    return erp_instance_id.is_set
	|| description.is_set
	|| inclusion_list.is_set
	|| profile.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (rpl !=  nullptr && rpl->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(erp_instance_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inclusion_list.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (rpl !=  nullptr && rpl->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-instance" <<"[erp-instance-id='" <<erp_instance_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erp_instance_id.is_set || is_set(erp_instance_id.yfilter)) leaf_name_data.push_back(erp_instance_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inclusion_list.is_set || is_set(inclusion_list.yfilter)) leaf_name_data.push_back(inclusion_list.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "rpl")
    {
        if(rpl == nullptr)
        {
            rpl = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl>();
        }
        return rpl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    if(rpl != nullptr)
    {
        children["rpl"] = rpl;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "erp-instance-id")
    {
        erp_instance_id = value;
        erp_instance_id.value_namespace = name_space;
        erp_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inclusion-list")
    {
        inclusion_list = value;
        inclusion_list.value_namespace = name_space;
        inclusion_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "erp-instance-id")
    {
        erp_instance_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inclusion-list")
    {
        inclusion_list.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "rpl" || name == "erp-instance-id" || name == "description" || name == "inclusion-list" || name == "profile")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Aps()
    :
    enable{YType::empty, "enable"},
    level{YType::uint32, "level"},
    port0{YType::str, "port0"}
    	,
    port1(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1>())
{
    port1->parent = this;

    yang_name = "aps"; yang_parent_name = "erp-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::~Aps()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_data() const
{
    return enable.is_set
	|| level.is_set
	|| port0.is_set
	|| (port1 !=  nullptr && port1->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| (port1 !=  nullptr && port1->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port1")
    {
        if(port1 == nullptr)
        {
            port1 = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1>();
        }
        return port1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port1 != nullptr)
    {
        children["port1"] = port1;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "enable" || name == "level" || name == "port0")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::Port1()
    :
    aps_channel{YType::str, "aps-channel"},
    aps_type{YType::enumeration, "aps-type"}
{

    yang_name = "port1"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::~Port1()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_data() const
{
    return aps_channel.is_set
	|| aps_type.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aps_channel.yfilter)
	|| ydk::is_set(aps_type.yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_channel.is_set || is_set(aps_channel.yfilter)) leaf_name_data.push_back(aps_channel.get_name_leafdata());
    if (aps_type.is_set || is_set(aps_type.yfilter)) leaf_name_data.push_back(aps_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aps-channel")
    {
        aps_channel = value;
        aps_channel.value_namespace = name_space;
        aps_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-type")
    {
        aps_type = value;
        aps_type.value_namespace = name_space;
        aps_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aps-channel")
    {
        aps_channel.yfilter = yfilter;
    }
    if(value_path == "aps-type")
    {
        aps_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-channel" || name == "aps-type")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::Rpl()
    :
    port{YType::enumeration, "port"},
    role{YType::enumeration, "role"}
{

    yang_name = "rpl"; yang_parent_name = "erp-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::~Rpl()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_data() const
{
    return port.is_set
	|| role.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "role")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0S()
{

    yang_name = "erp-port0s"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::~ErpPort0S()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::has_data() const
{
    for (std::size_t index=0; index<erp_port0.size(); index++)
    {
        if(erp_port0[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::has_operation() const
{
    for (std::size_t index=0; index<erp_port0.size(); index++)
    {
        if(erp_port0[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port0s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-port0")
    {
        for(auto const & c : erp_port0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0>();
        c->parent = this;
        erp_port0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : erp_port0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-port0")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::ErpPort0()
    :
    interface_name{YType::str, "interface-name"},
    monitor{YType::str, "monitor"}
{

    yang_name = "erp-port0"; yang_parent_name = "erp-port0s"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::~ErpPort0()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::has_data() const
{
    return interface_name.is_set
	|| monitor.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port0" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "monitor")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1S()
{

    yang_name = "erp-port1s"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::~ErpPort1S()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::has_data() const
{
    for (std::size_t index=0; index<erp_port1.size(); index++)
    {
        if(erp_port1[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::has_operation() const
{
    for (std::size_t index=0; index<erp_port1.size(); index++)
    {
        if(erp_port1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port1s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-port1")
    {
        for(auto const & c : erp_port1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1>();
        c->parent = this;
        erp_port1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : erp_port1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-port1")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::ErpPort1()
    :
    erp_port_type{YType::enumeration, "erp-port-type"}
    	,
    none_or_virtual(nullptr) // presence node
{

    yang_name = "erp-port1"; yang_parent_name = "erp-port1s"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::~ErpPort1()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return erp_port_type.is_set
	|| (none_or_virtual !=  nullptr && none_or_virtual->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(erp_port_type.yfilter)
	|| (none_or_virtual !=  nullptr && none_or_virtual->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port1" <<"[erp-port-type='" <<erp_port_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erp_port_type.is_set || is_set(erp_port_type.yfilter)) leaf_name_data.push_back(erp_port_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "none-or-virtual")
    {
        if(none_or_virtual == nullptr)
        {
            none_or_virtual = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual>();
        }
        return none_or_virtual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(none_or_virtual != nullptr)
    {
        children["none-or-virtual"] = none_or_virtual;
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "erp-port-type")
    {
        erp_port_type = value;
        erp_port_type.value_namespace = name_space;
        erp_port_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "erp-port-type")
    {
        erp_port_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "none-or-virtual" || name == "erp-port-type")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    monitor{YType::str, "monitor"}
{

    yang_name = "interface"; yang_parent_name = "erp-port1"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::~Interface()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::has_data() const
{
    return interface_name.is_set
	|| monitor.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "monitor")
        return true;
    return false;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::NoneOrVirtual()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "none-or-virtual"; yang_parent_name = "erp-port1"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::~NoneOrVirtual()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::has_data() const
{
    return monitor.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none-or-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClasses()
{

    yang_name = "pseudowire-classes"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::PseudowireClasses::~PseudowireClasses()
{
}

bool L2Vpn::Database::PseudowireClasses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::PseudowireClasses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::PseudowireClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-class")
    {
        for(auto const & c : pseudowire_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass>();
        c->parent = this;
        pseudowire_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::PseudowireClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::PseudowireClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-class")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::PseudowireClass()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"},
    mac_withdraw{YType::empty, "mac-withdraw"}
    	,
    backup_disable_delay(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay>())
	,l2tpv3_encapsulation(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation>())
	,mpls_encapsulation(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation>())
{
    backup_disable_delay->parent = this;
    l2tpv3_encapsulation->parent = this;
    mpls_encapsulation->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "pseudowire-classes"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::~PseudowireClass()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::has_data() const
{
    return name.is_set
	|| enable.is_set
	|| mac_withdraw.is_set
	|| (backup_disable_delay !=  nullptr && backup_disable_delay->has_data())
	|| (l2tpv3_encapsulation !=  nullptr && l2tpv3_encapsulation->has_data())
	|| (mpls_encapsulation !=  nullptr && mpls_encapsulation->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mac_withdraw.yfilter)
	|| (backup_disable_delay !=  nullptr && backup_disable_delay->has_operation())
	|| (l2tpv3_encapsulation !=  nullptr && l2tpv3_encapsulation->has_operation())
	|| (mpls_encapsulation !=  nullptr && mpls_encapsulation->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/pseudowire-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.yfilter)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-disable-delay")
    {
        if(backup_disable_delay == nullptr)
        {
            backup_disable_delay = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay>();
        }
        return backup_disable_delay;
    }

    if(child_yang_name == "l2tpv3-encapsulation")
    {
        if(l2tpv3_encapsulation == nullptr)
        {
            l2tpv3_encapsulation = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation>();
        }
        return l2tpv3_encapsulation;
    }

    if(child_yang_name == "mpls-encapsulation")
    {
        if(mpls_encapsulation == nullptr)
        {
            mpls_encapsulation = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation>();
        }
        return mpls_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_disable_delay != nullptr)
    {
        children["backup-disable-delay"] = backup_disable_delay;
    }

    if(l2tpv3_encapsulation != nullptr)
    {
        children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;
    }

    if(mpls_encapsulation != nullptr)
    {
        children["mpls-encapsulation"] = mpls_encapsulation;
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
        mac_withdraw.value_namespace = name_space;
        mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-disable-delay" || name == "l2tpv3-encapsulation" || name == "mpls-encapsulation" || name == "name" || name == "enable" || name == "mac-withdraw")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::BackupDisableDelay()
    :
    disable_backup{YType::uint32, "disable-backup"},
    type{YType::enumeration, "type"}
{

    yang_name = "backup-disable-delay"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::~BackupDisableDelay()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_data() const
{
    return disable_backup.is_set
	|| type.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_backup.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-disable-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_backup.is_set || is_set(disable_backup.yfilter)) leaf_name_data.push_back(disable_backup.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-backup")
    {
        disable_backup = value;
        disable_backup.value_namespace = name_space;
        disable_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-backup")
    {
        disable_backup.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-backup" || name == "type")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::L2Tpv3Encapsulation()
    :
    cookie_size{YType::enumeration, "cookie-size"},
    df_bit_set{YType::empty, "df-bit-set"},
    enable{YType::empty, "enable"},
    source_address{YType::str, "source-address"},
    time_to_live{YType::uint32, "time-to-live"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    path_mtu(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu>())
	,sequencing(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing>())
	,signaling_protocol(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol>())
	,type_of_service(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService>())
{
    path_mtu->parent = this;
    sequencing->parent = this;
    signaling_protocol->parent = this;
    type_of_service->parent = this;

    yang_name = "l2tpv3-encapsulation"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::~L2Tpv3Encapsulation()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::has_data() const
{
    return cookie_size.is_set
	|| df_bit_set.is_set
	|| enable.is_set
	|| source_address.is_set
	|| time_to_live.is_set
	|| transport_mode.is_set
	|| (path_mtu !=  nullptr && path_mtu->has_data())
	|| (sequencing !=  nullptr && sequencing->has_data())
	|| (signaling_protocol !=  nullptr && signaling_protocol->has_data())
	|| (type_of_service !=  nullptr && type_of_service->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(df_bit_set.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(time_to_live.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| (path_mtu !=  nullptr && path_mtu->has_operation())
	|| (sequencing !=  nullptr && sequencing->has_operation())
	|| (signaling_protocol !=  nullptr && signaling_protocol->has_operation())
	|| (type_of_service !=  nullptr && type_of_service->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (df_bit_set.is_set || is_set(df_bit_set.yfilter)) leaf_name_data.push_back(df_bit_set.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (time_to_live.is_set || is_set(time_to_live.yfilter)) leaf_name_data.push_back(time_to_live.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu")
    {
        if(path_mtu == nullptr)
        {
            path_mtu = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu>();
        }
        return path_mtu;
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing == nullptr)
        {
            sequencing = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing>();
        }
        return sequencing;
    }

    if(child_yang_name == "signaling-protocol")
    {
        if(signaling_protocol == nullptr)
        {
            signaling_protocol = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol>();
        }
        return signaling_protocol;
    }

    if(child_yang_name == "type-of-service")
    {
        if(type_of_service == nullptr)
        {
            type_of_service = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService>();
        }
        return type_of_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu != nullptr)
    {
        children["path-mtu"] = path_mtu;
    }

    if(sequencing != nullptr)
    {
        children["sequencing"] = sequencing;
    }

    if(signaling_protocol != nullptr)
    {
        children["signaling-protocol"] = signaling_protocol;
    }

    if(type_of_service != nullptr)
    {
        children["type-of-service"] = type_of_service;
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "df-bit-set")
    {
        df_bit_set = value;
        df_bit_set.value_namespace = name_space;
        df_bit_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-live")
    {
        time_to_live = value;
        time_to_live.value_namespace = name_space;
        time_to_live.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "df-bit-set")
    {
        df_bit_set.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "time-to-live")
    {
        time_to_live.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu" || name == "sequencing" || name == "signaling-protocol" || name == "type-of-service" || name == "cookie-size" || name == "df-bit-set" || name == "enable" || name == "source-address" || name == "time-to-live" || name == "transport-mode")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::PathMtu()
    :
    enable{YType::empty, "enable"},
    max_path_mtu{YType::uint32, "max-path-mtu"}
{

    yang_name = "path-mtu"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::~PathMtu()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::has_data() const
{
    return enable.is_set
	|| max_path_mtu.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_path_mtu.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_path_mtu.is_set || is_set(max_path_mtu.yfilter)) leaf_name_data.push_back(max_path_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-path-mtu")
    {
        max_path_mtu = value;
        max_path_mtu.value_namespace = name_space;
        max_path_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-path-mtu")
    {
        max_path_mtu.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-path-mtu")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::Sequencing()
    :
    resync_threshold{YType::uint32, "resync-threshold"},
    sequencing{YType::enumeration, "sequencing"}
{

    yang_name = "sequencing"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::~Sequencing()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::has_data() const
{
    return resync_threshold.is_set
	|| sequencing.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(sequencing.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resync-threshold" || name == "sequencing")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::SignalingProtocol()
    :
    l2tpv3_class_name{YType::str, "l2tpv3-class-name"},
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "signaling-protocol"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::~SignalingProtocol()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::has_data() const
{
    return l2tpv3_class_name.is_set
	|| protocol.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tpv3_class_name.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tpv3_class_name.is_set || is_set(l2tpv3_class_name.yfilter)) leaf_name_data.push_back(l2tpv3_class_name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tpv3-class-name")
    {
        l2tpv3_class_name = value;
        l2tpv3_class_name.value_namespace = name_space;
        l2tpv3_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tpv3-class-name")
    {
        l2tpv3_class_name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3-class-name" || name == "protocol")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::TypeOfService()
    :
    type_of_service_mode{YType::enumeration, "type-of-service-mode"},
    type_of_service_value{YType::uint32, "type-of-service-value"}
{

    yang_name = "type-of-service"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::~TypeOfService()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::has_data() const
{
    return type_of_service_mode.is_set
	|| type_of_service_value.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_of_service_mode.yfilter)
	|| ydk::is_set(type_of_service_value.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-of-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_of_service_mode.is_set || is_set(type_of_service_mode.yfilter)) leaf_name_data.push_back(type_of_service_mode.get_name_leafdata());
    if (type_of_service_value.is_set || is_set(type_of_service_value.yfilter)) leaf_name_data.push_back(type_of_service_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-of-service-mode")
    {
        type_of_service_mode = value;
        type_of_service_mode.value_namespace = name_space;
        type_of_service_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-of-service-value")
    {
        type_of_service_value = value;
        type_of_service_value.value_namespace = name_space;
        type_of_service_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-of-service-mode")
    {
        type_of_service_mode.yfilter = yfilter;
    }
    if(value_path == "type-of-service-value")
    {
        type_of_service_value.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-of-service-mode" || name == "type-of-service-value")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsEncapsulation()
    :
    control_word{YType::enumeration, "control-word"},
    enable{YType::empty, "enable"},
    pw_switching_tlv{YType::enumeration, "pw-switching-tlv"},
    signaling_protocol{YType::enumeration, "signaling-protocol"},
    source_address{YType::str, "source-address"},
    static_tag_rewrite{YType::uint32, "static-tag-rewrite"},
    transport_mode{YType::enumeration, "transport-mode"},
    vccv_type{YType::enumeration, "vccv-type"}
    	,
    load_balance_group(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup>())
	,mpls_redundancy(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy>())
	,preferred_path(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath>())
	,sequencing(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing>())
{
    load_balance_group->parent = this;
    mpls_redundancy->parent = this;
    preferred_path->parent = this;
    sequencing->parent = this;

    yang_name = "mpls-encapsulation"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::~MplsEncapsulation()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_data() const
{
    return control_word.is_set
	|| enable.is_set
	|| pw_switching_tlv.is_set
	|| signaling_protocol.is_set
	|| source_address.is_set
	|| static_tag_rewrite.is_set
	|| transport_mode.is_set
	|| vccv_type.is_set
	|| (load_balance_group !=  nullptr && load_balance_group->has_data())
	|| (mpls_redundancy !=  nullptr && mpls_redundancy->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (sequencing !=  nullptr && sequencing->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(pw_switching_tlv.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(static_tag_rewrite.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(vccv_type.yfilter)
	|| (load_balance_group !=  nullptr && load_balance_group->has_operation())
	|| (mpls_redundancy !=  nullptr && mpls_redundancy->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (sequencing !=  nullptr && sequencing->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pw_switching_tlv.is_set || is_set(pw_switching_tlv.yfilter)) leaf_name_data.push_back(pw_switching_tlv.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (static_tag_rewrite.is_set || is_set(static_tag_rewrite.yfilter)) leaf_name_data.push_back(static_tag_rewrite.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (vccv_type.is_set || is_set(vccv_type.yfilter)) leaf_name_data.push_back(vccv_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance-group")
    {
        if(load_balance_group == nullptr)
        {
            load_balance_group = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup>();
        }
        return load_balance_group;
    }

    if(child_yang_name == "mpls-redundancy")
    {
        if(mpls_redundancy == nullptr)
        {
            mpls_redundancy = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy>();
        }
        return mpls_redundancy;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing == nullptr)
        {
            sequencing = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing>();
        }
        return sequencing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_group != nullptr)
    {
        children["load-balance-group"] = load_balance_group;
    }

    if(mpls_redundancy != nullptr)
    {
        children["mpls-redundancy"] = mpls_redundancy;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(sequencing != nullptr)
    {
        children["sequencing"] = sequencing;
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-switching-tlv")
    {
        pw_switching_tlv = value;
        pw_switching_tlv.value_namespace = name_space;
        pw_switching_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-tag-rewrite")
    {
        static_tag_rewrite = value;
        static_tag_rewrite.value_namespace = name_space;
        static_tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vccv-type")
    {
        vccv_type = value;
        vccv_type.value_namespace = name_space;
        vccv_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "pw-switching-tlv")
    {
        pw_switching_tlv.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "static-tag-rewrite")
    {
        static_tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "vccv-type")
    {
        vccv_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-group" || name == "mpls-redundancy" || name == "preferred-path" || name == "sequencing" || name == "control-word" || name == "enable" || name == "pw-switching-tlv" || name == "signaling-protocol" || name == "source-address" || name == "static-tag-rewrite" || name == "transport-mode" || name == "vccv-type")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::LoadBalanceGroup()
    :
    flow_label_load_balance_code{YType::enumeration, "flow-label-load-balance-code"},
    pw_label_load_balance{YType::enumeration, "pw-label-load-balance"}
    	,
    flow_label_load_balance(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;

    yang_name = "load-balance-group"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::~LoadBalanceGroup()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_data() const
{
    return flow_label_load_balance_code.is_set
	|| pw_label_load_balance.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label_load_balance_code.yfilter)
	|| ydk::is_set(pw_label_load_balance.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label_load_balance_code.is_set || is_set(flow_label_load_balance_code.yfilter)) leaf_name_data.push_back(flow_label_load_balance_code.get_name_leafdata());
    if (pw_label_load_balance.is_set || is_set(pw_label_load_balance.yfilter)) leaf_name_data.push_back(pw_label_load_balance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label-load-balance-code")
    {
        flow_label_load_balance_code = value;
        flow_label_load_balance_code.value_namespace = name_space;
        flow_label_load_balance_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-label-load-balance")
    {
        pw_label_load_balance = value;
        pw_label_load_balance.value_namespace = name_space;
        pw_label_load_balance.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label-load-balance-code")
    {
        flow_label_load_balance_code.yfilter = yfilter;
    }
    if(value_path == "pw-label-load-balance")
    {
        pw_label_load_balance.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "flow-label-load-balance-code" || name == "pw-label-load-balance")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "load-balance-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::MplsRedundancy()
    :
    redundancy_initial_delay{YType::uint32, "redundancy-initial-delay"},
    redundancy_one_way{YType::empty, "redundancy-one-way"}
{

    yang_name = "mpls-redundancy"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::~MplsRedundancy()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_data() const
{
    return redundancy_initial_delay.is_set
	|| redundancy_one_way.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy_initial_delay.yfilter)
	|| ydk::is_set(redundancy_one_way.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_initial_delay.is_set || is_set(redundancy_initial_delay.yfilter)) leaf_name_data.push_back(redundancy_initial_delay.get_name_leafdata());
    if (redundancy_one_way.is_set || is_set(redundancy_one_way.yfilter)) leaf_name_data.push_back(redundancy_one_way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy-initial-delay")
    {
        redundancy_initial_delay = value;
        redundancy_initial_delay.value_namespace = name_space;
        redundancy_initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-one-way")
    {
        redundancy_one_way = value;
        redundancy_one_way.value_namespace = name_space;
        redundancy_one_way.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy-initial-delay")
    {
        redundancy_initial_delay.yfilter = yfilter;
    }
    if(value_path == "redundancy-one-way")
    {
        redundancy_one_way.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy-initial-delay" || name == "redundancy-one-way")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::PreferredPath()
    :
    fallback_disable{YType::empty, "fallback-disable"},
    interface_tunnel_number{YType::uint32, "interface-tunnel-number"},
    srte_policy{YType::str, "srte-policy"},
    type{YType::enumeration, "type"}
{

    yang_name = "preferred-path"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::~PreferredPath()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_data() const
{
    return fallback_disable.is_set
	|| interface_tunnel_number.is_set
	|| srte_policy.is_set
	|| type.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fallback_disable.yfilter)
	|| ydk::is_set(interface_tunnel_number.yfilter)
	|| ydk::is_set(srte_policy.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback_disable.is_set || is_set(fallback_disable.yfilter)) leaf_name_data.push_back(fallback_disable.get_name_leafdata());
    if (interface_tunnel_number.is_set || is_set(interface_tunnel_number.yfilter)) leaf_name_data.push_back(interface_tunnel_number.get_name_leafdata());
    if (srte_policy.is_set || is_set(srte_policy.yfilter)) leaf_name_data.push_back(srte_policy.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fallback-disable")
    {
        fallback_disable = value;
        fallback_disable.value_namespace = name_space;
        fallback_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-number")
    {
        interface_tunnel_number = value;
        interface_tunnel_number.value_namespace = name_space;
        interface_tunnel_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-policy")
    {
        srte_policy = value;
        srte_policy.value_namespace = name_space;
        srte_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fallback-disable")
    {
        fallback_disable.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-number")
    {
        interface_tunnel_number.yfilter = yfilter;
    }
    if(value_path == "srte-policy")
    {
        srte_policy.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-disable" || name == "interface-tunnel-number" || name == "srte-policy" || name == "type")
        return true;
    return false;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::Sequencing()
    :
    resync_threshold{YType::uint32, "resync-threshold"},
    sequencing{YType::enumeration, "sequencing"}
{

    yang_name = "sequencing"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::~Sequencing()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_data() const
{
    return resync_threshold.is_set
	|| sequencing.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(sequencing.yfilter);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resync-threshold" || name == "sequencing")
        return true;
    return false;
}

L2Vpn::Database::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    iccp_redundancy_groups(std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups>())
{
    iccp_redundancy_groups->parent = this;

    yang_name = "redundancy"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::Redundancy::~Redundancy()
{
}

bool L2Vpn::Database::Redundancy::has_data() const
{
    return enable.is_set
	|| (iccp_redundancy_groups !=  nullptr && iccp_redundancy_groups->has_data());
}

bool L2Vpn::Database::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (iccp_redundancy_groups !=  nullptr && iccp_redundancy_groups->has_operation());
}

std::string L2Vpn::Database::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-redundancy-groups")
    {
        if(iccp_redundancy_groups == nullptr)
        {
            iccp_redundancy_groups = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups>();
        }
        return iccp_redundancy_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_redundancy_groups != nullptr)
    {
        children["iccp-redundancy-groups"] = iccp_redundancy_groups;
    }

    return children;
}

void L2Vpn::Database::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-redundancy-groups" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroups()
{

    yang_name = "iccp-redundancy-groups"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::~IccpRedundancyGroups()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_redundancy_group.size(); index++)
    {
        if(iccp_redundancy_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_redundancy_group.size(); index++)
    {
        if(iccp_redundancy_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-redundancy-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-redundancy-group")
    {
        for(auto const & c : iccp_redundancy_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup>();
        c->parent = this;
        iccp_redundancy_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_redundancy_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-redundancy-group")
        return true;
    return false;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpRedundancyGroup()
    :
    group_id{YType::uint32, "group-id"},
    multi_homing_node_id{YType::uint32, "multi-homing-node-id"}
    	,
    iccp_interfaces(std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces>())
{
    iccp_interfaces->parent = this;

    yang_name = "iccp-redundancy-group"; yang_parent_name = "iccp-redundancy-groups"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::~IccpRedundancyGroup()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_data() const
{
    return group_id.is_set
	|| multi_homing_node_id.is_set
	|| (iccp_interfaces !=  nullptr && iccp_interfaces->has_data());
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(multi_homing_node_id.yfilter)
	|| (iccp_interfaces !=  nullptr && iccp_interfaces->has_operation());
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/redundancy/iccp-redundancy-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-redundancy-group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (multi_homing_node_id.is_set || is_set(multi_homing_node_id.yfilter)) leaf_name_data.push_back(multi_homing_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-interfaces")
    {
        if(iccp_interfaces == nullptr)
        {
            iccp_interfaces = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces>();
        }
        return iccp_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_interfaces != nullptr)
    {
        children["iccp-interfaces"] = iccp_interfaces;
    }

    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-homing-node-id")
    {
        multi_homing_node_id = value;
        multi_homing_node_id.value_namespace = name_space;
        multi_homing_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "multi-homing-node-id")
    {
        multi_homing_node_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-interfaces" || name == "group-id" || name == "multi-homing-node-id")
        return true;
    return false;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterfaces()
{

    yang_name = "iccp-interfaces"; yang_parent_name = "iccp-redundancy-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::~IccpInterfaces()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_data() const
{
    for (std::size_t index=0; index<iccp_interface.size(); index++)
    {
        if(iccp_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_operation() const
{
    for (std::size_t index=0; index<iccp_interface.size(); index++)
    {
        if(iccp_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-interface")
    {
        for(auto const & c : iccp_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface>();
        c->parent = this;
        iccp_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-interface")
        return true;
    return false;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::IccpInterface()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::empty, "mac-flush-tcn"},
    primary_vlan_range{YType::str, "primary-vlan-range"},
    recovery_delay{YType::uint32, "recovery-delay"},
    secondary_vlan_range{YType::str, "secondary-vlan-range"}
{

    yang_name = "iccp-interface"; yang_parent_name = "iccp-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::~IccpInterface()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_data() const
{
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| primary_vlan_range.is_set
	|| recovery_delay.is_set
	|| secondary_vlan_range.is_set;
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| ydk::is_set(primary_vlan_range.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(secondary_vlan_range.yfilter);
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());
    if (primary_vlan_range.is_set || is_set(primary_vlan_range.yfilter)) leaf_name_data.push_back(primary_vlan_range.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (secondary_vlan_range.is_set || is_set(secondary_vlan_range.yfilter)) leaf_name_data.push_back(secondary_vlan_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-vlan-range")
    {
        primary_vlan_range = value;
        primary_vlan_range.value_namespace = name_space;
        primary_vlan_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-vlan-range")
    {
        secondary_vlan_range = value;
        secondary_vlan_range.value_namespace = name_space;
        secondary_vlan_range.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
    if(value_path == "primary-vlan-range")
    {
        primary_vlan_range.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "secondary-vlan-range")
    {
        secondary_vlan_range.yfilter = yfilter;
    }
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "mac-flush-tcn" || name == "primary-vlan-range" || name == "recovery-delay" || name == "secondary-vlan-range")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroups()
{

    yang_name = "xconnect-groups"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::XconnectGroups::~XconnectGroups()
{
}

bool L2Vpn::Database::XconnectGroups::has_data() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::has_operation() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::XconnectGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-group")
    {
        for(auto const & c : xconnect_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup>();
        c->parent = this;
        xconnect_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-group")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::XconnectGroup()
    :
    name{YType::str, "name"}
    	,
    mp2mp_xconnects(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects>())
	,p2p_xconnects(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects>())
{
    mp2mp_xconnects->parent = this;
    p2p_xconnects->parent = this;

    yang_name = "xconnect-group"; yang_parent_name = "xconnect-groups"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::~XconnectGroup()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::has_data() const
{
    return name.is_set
	|| (mp2mp_xconnects !=  nullptr && mp2mp_xconnects->has_data())
	|| (p2p_xconnects !=  nullptr && p2p_xconnects->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mp2mp_xconnects !=  nullptr && mp2mp_xconnects->has_operation())
	|| (p2p_xconnects !=  nullptr && p2p_xconnects->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/xconnect-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-xconnects")
    {
        if(mp2mp_xconnects == nullptr)
        {
            mp2mp_xconnects = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects>();
        }
        return mp2mp_xconnects;
    }

    if(child_yang_name == "p2p-xconnects")
    {
        if(p2p_xconnects == nullptr)
        {
            p2p_xconnects = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects>();
        }
        return p2p_xconnects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mp2mp_xconnects != nullptr)
    {
        children["mp2mp-xconnects"] = mp2mp_xconnects;
    }

    if(p2p_xconnects != nullptr)
    {
        children["p2p-xconnects"] = p2p_xconnects;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-xconnects" || name == "p2p-xconnects" || name == "name")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnects()
{

    yang_name = "mp2mp-xconnects"; yang_parent_name = "xconnect-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::~Mp2MpXconnects()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::has_data() const
{
    for (std::size_t index=0; index<mp2mp_xconnect.size(); index++)
    {
        if(mp2mp_xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::has_operation() const
{
    for (std::size_t index=0; index<mp2mp_xconnect.size(); index++)
    {
        if(mp2mp_xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-xconnect")
    {
        for(auto const & c : mp2mp_xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect>();
        c->parent = this;
        mp2mp_xconnect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mp2mp_xconnect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-xconnect")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpXconnect()
    :
    name{YType::str, "name"},
    mp2mp_control_word{YType::empty, "mp2mp-control-word"},
    mp2mp_interworking{YType::enumeration, "mp2mp-interworking"},
    mp2mp_shutdown{YType::empty, "mp2mp-shutdown"},
    mp2mpl2_encapsulation{YType::enumeration, "mp2mpl2-encapsulation"},
    mp2mpmtu{YType::uint32, "mp2mpmtu"},
    mp2mpvpn_id{YType::uint32, "mp2mpvpn-id"}
    	,
    mp2mp_auto_discovery(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery>())
{
    mp2mp_auto_discovery->parent = this;

    yang_name = "mp2mp-xconnect"; yang_parent_name = "mp2mp-xconnects"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::~Mp2MpXconnect()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::has_data() const
{
    return name.is_set
	|| mp2mp_control_word.is_set
	|| mp2mp_interworking.is_set
	|| mp2mp_shutdown.is_set
	|| mp2mpl2_encapsulation.is_set
	|| mp2mpmtu.is_set
	|| mp2mpvpn_id.is_set
	|| (mp2mp_auto_discovery !=  nullptr && mp2mp_auto_discovery->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mp2mp_control_word.yfilter)
	|| ydk::is_set(mp2mp_interworking.yfilter)
	|| ydk::is_set(mp2mp_shutdown.yfilter)
	|| ydk::is_set(mp2mpl2_encapsulation.yfilter)
	|| ydk::is_set(mp2mpmtu.yfilter)
	|| ydk::is_set(mp2mpvpn_id.yfilter)
	|| (mp2mp_auto_discovery !=  nullptr && mp2mp_auto_discovery->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-xconnect" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mp2mp_control_word.is_set || is_set(mp2mp_control_word.yfilter)) leaf_name_data.push_back(mp2mp_control_word.get_name_leafdata());
    if (mp2mp_interworking.is_set || is_set(mp2mp_interworking.yfilter)) leaf_name_data.push_back(mp2mp_interworking.get_name_leafdata());
    if (mp2mp_shutdown.is_set || is_set(mp2mp_shutdown.yfilter)) leaf_name_data.push_back(mp2mp_shutdown.get_name_leafdata());
    if (mp2mpl2_encapsulation.is_set || is_set(mp2mpl2_encapsulation.yfilter)) leaf_name_data.push_back(mp2mpl2_encapsulation.get_name_leafdata());
    if (mp2mpmtu.is_set || is_set(mp2mpmtu.yfilter)) leaf_name_data.push_back(mp2mpmtu.get_name_leafdata());
    if (mp2mpvpn_id.is_set || is_set(mp2mpvpn_id.yfilter)) leaf_name_data.push_back(mp2mpvpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-auto-discovery")
    {
        if(mp2mp_auto_discovery == nullptr)
        {
            mp2mp_auto_discovery = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery>();
        }
        return mp2mp_auto_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mp2mp_auto_discovery != nullptr)
    {
        children["mp2mp-auto-discovery"] = mp2mp_auto_discovery;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-control-word")
    {
        mp2mp_control_word = value;
        mp2mp_control_word.value_namespace = name_space;
        mp2mp_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-interworking")
    {
        mp2mp_interworking = value;
        mp2mp_interworking.value_namespace = name_space;
        mp2mp_interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-shutdown")
    {
        mp2mp_shutdown = value;
        mp2mp_shutdown.value_namespace = name_space;
        mp2mp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpl2-encapsulation")
    {
        mp2mpl2_encapsulation = value;
        mp2mpl2_encapsulation.value_namespace = name_space;
        mp2mpl2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpmtu")
    {
        mp2mpmtu = value;
        mp2mpmtu.value_namespace = name_space;
        mp2mpmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpvpn-id")
    {
        mp2mpvpn_id = value;
        mp2mpvpn_id.value_namespace = name_space;
        mp2mpvpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mp2mp-control-word")
    {
        mp2mp_control_word.yfilter = yfilter;
    }
    if(value_path == "mp2mp-interworking")
    {
        mp2mp_interworking.yfilter = yfilter;
    }
    if(value_path == "mp2mp-shutdown")
    {
        mp2mp_shutdown.yfilter = yfilter;
    }
    if(value_path == "mp2mpl2-encapsulation")
    {
        mp2mpl2_encapsulation.yfilter = yfilter;
    }
    if(value_path == "mp2mpmtu")
    {
        mp2mpmtu.yfilter = yfilter;
    }
    if(value_path == "mp2mpvpn-id")
    {
        mp2mpvpn_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-auto-discovery" || name == "name" || name == "mp2mp-control-word" || name == "mp2mp-interworking" || name == "mp2mp-shutdown" || name == "mp2mpl2-encapsulation" || name == "mp2mpmtu" || name == "mp2mpvpn-id")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpAutoDiscovery()
    :
    enable{YType::empty, "enable"}
    	,
    mp2mp_route_policy(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy>())
	,mp2mp_route_targets(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets>())
	,mp2mp_signaling_protocol(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol>())
	,route_distinguisher(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher>())
{
    mp2mp_route_policy->parent = this;
    mp2mp_route_targets->parent = this;
    mp2mp_signaling_protocol->parent = this;
    route_distinguisher->parent = this;

    yang_name = "mp2mp-auto-discovery"; yang_parent_name = "mp2mp-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::~Mp2MpAutoDiscovery()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| (mp2mp_route_policy !=  nullptr && mp2mp_route_policy->has_data())
	|| (mp2mp_route_targets !=  nullptr && mp2mp_route_targets->has_data())
	|| (mp2mp_signaling_protocol !=  nullptr && mp2mp_signaling_protocol->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (mp2mp_route_policy !=  nullptr && mp2mp_route_policy->has_operation())
	|| (mp2mp_route_targets !=  nullptr && mp2mp_route_targets->has_operation())
	|| (mp2mp_signaling_protocol !=  nullptr && mp2mp_signaling_protocol->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-route-policy")
    {
        if(mp2mp_route_policy == nullptr)
        {
            mp2mp_route_policy = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy>();
        }
        return mp2mp_route_policy;
    }

    if(child_yang_name == "mp2mp-route-targets")
    {
        if(mp2mp_route_targets == nullptr)
        {
            mp2mp_route_targets = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets>();
        }
        return mp2mp_route_targets;
    }

    if(child_yang_name == "mp2mp-signaling-protocol")
    {
        if(mp2mp_signaling_protocol == nullptr)
        {
            mp2mp_signaling_protocol = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol>();
        }
        return mp2mp_signaling_protocol;
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mp2mp_route_policy != nullptr)
    {
        children["mp2mp-route-policy"] = mp2mp_route_policy;
    }

    if(mp2mp_route_targets != nullptr)
    {
        children["mp2mp-route-targets"] = mp2mp_route_targets;
    }

    if(mp2mp_signaling_protocol != nullptr)
    {
        children["mp2mp-signaling-protocol"] = mp2mp_signaling_protocol;
    }

    if(route_distinguisher != nullptr)
    {
        children["route-distinguisher"] = route_distinguisher;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-route-policy" || name == "mp2mp-route-targets" || name == "mp2mp-signaling-protocol" || name == "route-distinguisher" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::Mp2MpRoutePolicy()
    :
    export_{YType::str, "export"}
{

    yang_name = "mp2mp-route-policy"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::~Mp2MpRoutePolicy()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::has_data() const
{
    return export_.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(export_.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.yfilter)) leaf_name_data.push_back(export_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "export")
    {
        export_ = value;
        export_.value_namespace = name_space;
        export_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "export")
    {
        export_.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTargets()
{

    yang_name = "mp2mp-route-targets"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::~Mp2MpRouteTargets()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::has_data() const
{
    for (std::size_t index=0; index<mp2mp_route_target.size(); index++)
    {
        if(mp2mp_route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<mp2mp_route_target.size(); index++)
    {
        if(mp2mp_route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-route-target")
    {
        for(auto const & c : mp2mp_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget>();
        c->parent = this;
        mp2mp_route_target.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mp2mp_route_target)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-route-target")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Mp2MpRouteTarget()
    :
    role{YType::enumeration, "role"},
    format{YType::enumeration, "format"}
{

    yang_name = "mp2mp-route-target"; yang_parent_name = "mp2mp-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::~Mp2MpRouteTarget()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_data())
            return true;
    }
    return role.is_set
	|| format.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-target" <<"[role='" <<role <<"']" <<"[format='" <<format <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(c);
        return c;
    }

    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        for(auto const & c : two_byte_as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs>();
        c->parent = this;
        two_byte_as_or_four_byte_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : two_byte_as_or_four_byte_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-as-or-four-byte-as" || name == "role" || name == "format")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "ipv4-address"; yang_parent_name = "mp2mp-route-target"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| addr_index.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address <<"']" <<"[addr-index='" <<addr_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "addr-index")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{

    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "mp2mp-route-target"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    return as.is_set
	|| as_index.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as-index")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Mp2MpSignalingProtocol()
    :
    ce_range{YType::uint32, "ce-range"},
    enable{YType::empty, "enable"}
    	,
    ceids(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids>())
	,flow_label_load_balance(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance>())
{
    ceids->parent = this;
    flow_label_load_balance->parent = this;

    yang_name = "mp2mp-signaling-protocol"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::~Mp2MpSignalingProtocol()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::has_data() const
{
    return ce_range.is_set
	|| enable.is_set
	|| (ceids !=  nullptr && ceids->has_data())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce_range.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ceids !=  nullptr && ceids->has_operation())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_range.is_set || is_set(ce_range.yfilter)) leaf_name_data.push_back(ce_range.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceids")
    {
        if(ceids == nullptr)
        {
            ceids = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids>();
        }
        return ceids;
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceids != nullptr)
    {
        children["ceids"] = ceids;
    }

    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce-range")
    {
        ce_range = value;
        ce_range.value_namespace = name_space;
        ce_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce-range")
    {
        ce_range.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceids" || name == "flow-label-load-balance" || name == "ce-range" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceids()
{

    yang_name = "ceids"; yang_parent_name = "mp2mp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::~Ceids()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::has_data() const
{
    for (std::size_t index=0; index<ceid.size(); index++)
    {
        if(ceid[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::has_operation() const
{
    for (std::size_t index=0; index<ceid.size(); index++)
    {
        if(ceid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceid")
    {
        for(auto const & c : ceid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid>();
        c->parent = this;
        ceid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceid")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::Ceid()
    :
    ce_id{YType::uint32, "ce-id"}
    	,
    remote_ceid_attachment_circuits(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits>())
{
    remote_ceid_attachment_circuits->parent = this;

    yang_name = "ceid"; yang_parent_name = "ceids"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::~Ceid()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::has_data() const
{
    return ce_id.is_set
	|| (remote_ceid_attachment_circuits !=  nullptr && remote_ceid_attachment_circuits->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce_id.yfilter)
	|| (remote_ceid_attachment_circuits !=  nullptr && remote_ceid_attachment_circuits->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceid" <<"[ce-id='" <<ce_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_id.is_set || is_set(ce_id.yfilter)) leaf_name_data.push_back(ce_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ceid-attachment-circuits")
    {
        if(remote_ceid_attachment_circuits == nullptr)
        {
            remote_ceid_attachment_circuits = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits>();
        }
        return remote_ceid_attachment_circuits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_ceid_attachment_circuits != nullptr)
    {
        children["remote-ceid-attachment-circuits"] = remote_ceid_attachment_circuits;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce-id")
    {
        ce_id = value;
        ce_id.value_namespace = name_space;
        ce_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce-id")
    {
        ce_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ceid-attachment-circuits" || name == "ce-id")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuits()
{

    yang_name = "remote-ceid-attachment-circuits"; yang_parent_name = "ceid"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::~RemoteCeidAttachmentCircuits()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<remote_ceid_attachment_circuit.size(); index++)
    {
        if(remote_ceid_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<remote_ceid_attachment_circuit.size(); index++)
    {
        if(remote_ceid_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ceid-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ceid-attachment-circuit")
    {
        for(auto const & c : remote_ceid_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit>();
        c->parent = this;
        remote_ceid_attachment_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_ceid_attachment_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ceid-attachment-circuit")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::RemoteCeidAttachmentCircuit()
    :
    name{YType::str, "name"},
    remote_ce_id{YType::uint32, "remote-ce-id"}
{

    yang_name = "remote-ceid-attachment-circuit"; yang_parent_name = "remote-ceid-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::~RemoteCeidAttachmentCircuit()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_data() const
{
    return name.is_set
	|| remote_ce_id.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(remote_ce_id.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ceid-attachment-circuit" <<"[name='" <<name <<"']" <<"[remote-ce-id='" <<remote_ce_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.yfilter)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
        remote_ce_id.value_namespace = name_space;
        remote_ce_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "remote-ce-id")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "mp2mp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnects()
{

    yang_name = "p2p-xconnects"; yang_parent_name = "xconnect-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::~P2PXconnects()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::has_data() const
{
    for (std::size_t index=0; index<p2p_xconnect.size(); index++)
    {
        if(p2p_xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::has_operation() const
{
    for (std::size_t index=0; index<p2p_xconnect.size(); index++)
    {
        if(p2p_xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-xconnect")
    {
        for(auto const & c : p2p_xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect>();
        c->parent = this;
        p2p_xconnect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2p_xconnect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-xconnect")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::P2PXconnect()
    :
    name{YType::str, "name"},
    interworking{YType::enumeration, "interworking"},
    p2p_description{YType::str, "p2p-description"}
    	,
    attachment_circuits(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits>())
	,backup_attachment_circuits(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits>())
	,monitor_sessions(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions>())
	,pseudowire_evpns(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns>())
	,pseudowire_routeds(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds>())
	,pseudowires(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires>())
{
    attachment_circuits->parent = this;
    backup_attachment_circuits->parent = this;
    monitor_sessions->parent = this;
    pseudowire_evpns->parent = this;
    pseudowire_routeds->parent = this;
    pseudowires->parent = this;

    yang_name = "p2p-xconnect"; yang_parent_name = "p2p-xconnects"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::~P2PXconnect()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::has_data() const
{
    return name.is_set
	|| interworking.is_set
	|| p2p_description.is_set
	|| (attachment_circuits !=  nullptr && attachment_circuits->has_data())
	|| (backup_attachment_circuits !=  nullptr && backup_attachment_circuits->has_data())
	|| (monitor_sessions !=  nullptr && monitor_sessions->has_data())
	|| (pseudowire_evpns !=  nullptr && pseudowire_evpns->has_data())
	|| (pseudowire_routeds !=  nullptr && pseudowire_routeds->has_data())
	|| (pseudowires !=  nullptr && pseudowires->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(p2p_description.yfilter)
	|| (attachment_circuits !=  nullptr && attachment_circuits->has_operation())
	|| (backup_attachment_circuits !=  nullptr && backup_attachment_circuits->has_operation())
	|| (monitor_sessions !=  nullptr && monitor_sessions->has_operation())
	|| (pseudowire_evpns !=  nullptr && pseudowire_evpns->has_operation())
	|| (pseudowire_routeds !=  nullptr && pseudowire_routeds->has_operation())
	|| (pseudowires !=  nullptr && pseudowires->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-xconnect" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (p2p_description.is_set || is_set(p2p_description.yfilter)) leaf_name_data.push_back(p2p_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuits")
    {
        if(attachment_circuits == nullptr)
        {
            attachment_circuits = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits>();
        }
        return attachment_circuits;
    }

    if(child_yang_name == "backup-attachment-circuits")
    {
        if(backup_attachment_circuits == nullptr)
        {
            backup_attachment_circuits = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits>();
        }
        return backup_attachment_circuits;
    }

    if(child_yang_name == "monitor-sessions")
    {
        if(monitor_sessions == nullptr)
        {
            monitor_sessions = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions>();
        }
        return monitor_sessions;
    }

    if(child_yang_name == "pseudowire-evpns")
    {
        if(pseudowire_evpns == nullptr)
        {
            pseudowire_evpns = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns>();
        }
        return pseudowire_evpns;
    }

    if(child_yang_name == "pseudowire-routeds")
    {
        if(pseudowire_routeds == nullptr)
        {
            pseudowire_routeds = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds>();
        }
        return pseudowire_routeds;
    }

    if(child_yang_name == "pseudowires")
    {
        if(pseudowires == nullptr)
        {
            pseudowires = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires>();
        }
        return pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment_circuits != nullptr)
    {
        children["attachment-circuits"] = attachment_circuits;
    }

    if(backup_attachment_circuits != nullptr)
    {
        children["backup-attachment-circuits"] = backup_attachment_circuits;
    }

    if(monitor_sessions != nullptr)
    {
        children["monitor-sessions"] = monitor_sessions;
    }

    if(pseudowire_evpns != nullptr)
    {
        children["pseudowire-evpns"] = pseudowire_evpns;
    }

    if(pseudowire_routeds != nullptr)
    {
        children["pseudowire-routeds"] = pseudowire_routeds;
    }

    if(pseudowires != nullptr)
    {
        children["pseudowires"] = pseudowires;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-description")
    {
        p2p_description = value;
        p2p_description.value_namespace = name_space;
        p2p_description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "p2p-description")
    {
        p2p_description.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuits" || name == "backup-attachment-circuits" || name == "monitor-sessions" || name == "pseudowire-evpns" || name == "pseudowire-routeds" || name == "pseudowires" || name == "name" || name == "interworking" || name == "p2p-description")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuits()
{

    yang_name = "attachment-circuits"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::~AttachmentCircuits()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<attachment_circuit.size(); index++)
    {
        if(attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<attachment_circuit.size(); index++)
    {
        if(attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        for(auto const & c : attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit>();
        c->parent = this;
        attachment_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attachment_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::AttachmentCircuit()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
{

    yang_name = "attachment-circuit"; yang_parent_name = "attachment-circuits"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::has_data() const
{
    return name.is_set
	|| enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuits()
{

    yang_name = "backup-attachment-circuits"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::~BackupAttachmentCircuits()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<backup_attachment_circuit.size(); index++)
    {
        if(backup_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<backup_attachment_circuit.size(); index++)
    {
        if(backup_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-attachment-circuit")
    {
        for(auto const & c : backup_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit>();
        c->parent = this;
        backup_attachment_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_attachment_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-attachment-circuit")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::BackupAttachmentCircuit()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "backup-attachment-circuit"; yang_parent_name = "backup-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::~BackupAttachmentCircuit()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_data() const
{
    return interface_name.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-attachment-circuit" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSessions()
{

    yang_name = "monitor-sessions"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::~MonitorSessions()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::has_data() const
{
    for (std::size_t index=0; index<monitor_session.size(); index++)
    {
        if(monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<monitor_session.size(); index++)
    {
        if(monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-session")
    {
        for(auto const & c : monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession>();
        c->parent = this;
        monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-session")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::MonitorSession()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
{

    yang_name = "monitor-session"; yang_parent_name = "monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::~MonitorSession()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::has_data() const
{
    return name.is_set
	|| enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enable")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpns()
{

    yang_name = "pseudowire-evpns"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::~PseudowireEvpns()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::has_data() const
{
    for (std::size_t index=0; index<pseudowire_evpn.size(); index++)
    {
        if(pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_evpn.size(); index++)
    {
        if(pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-evpns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-evpn")
    {
        for(auto const & c : pseudowire_evpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn>();
        c->parent = this;
        pseudowire_evpn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire_evpn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-evpn")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::PseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    remote_acid{YType::uint32, "remote-acid"},
    source_acid{YType::uint32, "source-acid"}
{

    yang_name = "pseudowire-evpn"; yang_parent_name = "pseudowire-evpns"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::~PseudowireEvpn()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::has_data() const
{
    return eviid.is_set
	|| remote_acid.is_set
	|| source_acid.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(remote_acid.yfilter)
	|| ydk::is_set(source_acid.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-evpn" <<"[eviid='" <<eviid <<"']" <<"[remote-acid='" <<remote_acid <<"']" <<"[source-acid='" <<source_acid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (remote_acid.is_set || is_set(remote_acid.yfilter)) leaf_name_data.push_back(remote_acid.get_name_leafdata());
    if (source_acid.is_set || is_set(source_acid.yfilter)) leaf_name_data.push_back(source_acid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-acid")
    {
        remote_acid = value;
        remote_acid.value_namespace = name_space;
        remote_acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-acid")
    {
        source_acid = value;
        source_acid.value_namespace = name_space;
        source_acid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "remote-acid")
    {
        remote_acid.yfilter = yfilter;
    }
    if(value_path == "source-acid")
    {
        source_acid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid" || name == "remote-acid" || name == "source-acid")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouteds()
{

    yang_name = "pseudowire-routeds"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::~PseudowireRouteds()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::has_data() const
{
    for (std::size_t index=0; index<pseudowire_routed.size(); index++)
    {
        if(pseudowire_routed[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_routed.size(); index++)
    {
        if(pseudowire_routed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-routeds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-routed")
    {
        for(auto const & c : pseudowire_routed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted>();
        c->parent = this;
        pseudowire_routed.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire_routed)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-routed")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::PseudowireRouted()
    :
    global_id{YType::uint32, "global-id"},
    prefix{YType::str, "prefix"},
    acid{YType::uint32, "acid"},
    sacid{YType::uint32, "sacid"},
    class_{YType::str, "class"},
    tag_impose{YType::uint32, "tag-impose"}
{

    yang_name = "pseudowire-routed"; yang_parent_name = "pseudowire-routeds"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::~PseudowireRouted()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::has_data() const
{
    return global_id.is_set
	|| prefix.is_set
	|| acid.is_set
	|| sacid.is_set
	|| class_.is_set
	|| tag_impose.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(acid.yfilter)
	|| ydk::is_set(sacid.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(tag_impose.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-routed" <<"[global-id='" <<global_id <<"']" <<"[prefix='" <<prefix <<"']" <<"[acid='" <<acid <<"']" <<"[sacid='" <<sacid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (acid.is_set || is_set(acid.yfilter)) leaf_name_data.push_back(acid.get_name_leafdata());
    if (sacid.is_set || is_set(sacid.yfilter)) leaf_name_data.push_back(sacid.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.yfilter)) leaf_name_data.push_back(tag_impose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acid")
    {
        acid = value;
        acid.value_namespace = name_space;
        acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sacid")
    {
        sacid = value;
        sacid.value_namespace = name_space;
        sacid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
        tag_impose.value_namespace = name_space;
        tag_impose.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "acid")
    {
        acid.yfilter = yfilter;
    }
    if(value_path == "sacid")
    {
        sacid.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "tag-impose")
    {
        tag_impose.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-id" || name == "prefix" || name == "acid" || name == "sacid" || name == "class" || name == "tag-impose")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowires()
{

    yang_name = "pseudowires"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::~Pseudowires()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::has_data() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::has_operation() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        for(auto const & c : pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire>();
        c->parent = this;
        pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Pseudowire()
    :
    pseudowire_id{YType::uint32, "pseudowire-id"}
{

    yang_name = "pseudowire"; yang_parent_name = "pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::~Pseudowire()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_address.size(); index++)
    {
        if(pseudowire_address[index]->has_data())
            return true;
    }
    return pseudowire_id.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_address.size(); index++)
    {
        if(pseudowire_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_id.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "pseudowire-address")
    {
        for(auto const & c : pseudowire_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress>();
        c->parent = this;
        pseudowire_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pseudowire_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "pseudowire-address" || name == "pseudowire-id")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::Neighbor()
    :
    neighbor{YType::str, "neighbor"},
    bandwidth{YType::uint32, "bandwidth"},
    class_{YType::str, "class"},
    source_address{YType::str, "source-address"},
    tag_impose{YType::uint32, "tag-impose"}
    	,
    backup_pseudowires(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires>())
	,l2tp_static(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic>())
	,l2tp_static_attributes(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes>())
	,mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels>())
{
    backup_pseudowires->parent = this;
    l2tp_static->parent = this;
    l2tp_static_attributes->parent = this;
    mpls_static_labels->parent = this;

    yang_name = "neighbor"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::~Neighbor()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::has_data() const
{
    return neighbor.is_set
	|| bandwidth.is_set
	|| class_.is_set
	|| source_address.is_set
	|| tag_impose.is_set
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_data())
	|| (l2tp_static !=  nullptr && l2tp_static->has_data())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_data())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tag_impose.yfilter)
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_operation())
	|| (l2tp_static !=  nullptr && l2tp_static->has_operation())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_operation())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor='" <<neighbor <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.yfilter)) leaf_name_data.push_back(tag_impose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudowires")
    {
        if(backup_pseudowires == nullptr)
        {
            backup_pseudowires = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires>();
        }
        return backup_pseudowires;
    }

    if(child_yang_name == "l2tp-static")
    {
        if(l2tp_static == nullptr)
        {
            l2tp_static = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic>();
        }
        return l2tp_static;
    }

    if(child_yang_name == "l2tp-static-attributes")
    {
        if(l2tp_static_attributes == nullptr)
        {
            l2tp_static_attributes = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes>();
        }
        return l2tp_static_attributes;
    }

    if(child_yang_name == "mpls-static-labels")
    {
        if(mpls_static_labels == nullptr)
        {
            mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels>();
        }
        return mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudowires != nullptr)
    {
        children["backup-pseudowires"] = backup_pseudowires;
    }

    if(l2tp_static != nullptr)
    {
        children["l2tp-static"] = l2tp_static;
    }

    if(l2tp_static_attributes != nullptr)
    {
        children["l2tp-static-attributes"] = l2tp_static_attributes;
    }

    if(mpls_static_labels != nullptr)
    {
        children["mpls-static-labels"] = mpls_static_labels;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
        tag_impose.value_namespace = name_space;
        tag_impose.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tag-impose")
    {
        tag_impose.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudowires" || name == "l2tp-static" || name == "l2tp-static-attributes" || name == "mpls-static-labels" || name == "neighbor" || name == "bandwidth" || name == "class" || name == "source-address" || name == "tag-impose")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowires()
{

    yang_name = "backup-pseudowires"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::~BackupPseudowires()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_data() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudowire")
    {
        for(auto const & c : backup_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire>();
        c->parent = this;
        backup_pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudowire")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    backup_pw_class{YType::str, "backup-pw-class"}
    	,
    backup_mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>())
{
    backup_mpls_static_labels->parent = this;

    yang_name = "backup-pseudowire"; yang_parent_name = "backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::~BackupPseudowire()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| backup_pw_class.is_set
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(backup_pw_class.yfilter)
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (backup_pw_class.is_set || is_set(backup_pw_class.yfilter)) leaf_name_data.push_back(backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-mpls-static-labels")
    {
        if(backup_mpls_static_labels == nullptr)
        {
            backup_mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>();
        }
        return backup_mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_mpls_static_labels != nullptr)
    {
        children["backup-mpls-static-labels"] = backup_mpls_static_labels;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class = value;
        backup_pw_class.value_namespace = name_space;
        backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-mpls-static-labels" || name == "neighbor" || name == "pseudowire-id" || name == "backup-pw-class")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::BackupMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "backup-mpls-static-labels"; yang_parent_name = "backup-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::~BackupMplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::L2TpStatic()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "l2tp-static"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::~L2TpStatic()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpStaticAttributes()
    :
    l2tp_local_session_id{YType::uint32, "l2tp-local-session-id"},
    l2tp_remote_session_id{YType::uint32, "l2tp-remote-session-id"}
    	,
    l2tp_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie>())
	,l2tp_remote_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie>())
	,l2tp_secondary_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie>())
{
    l2tp_local_cookie->parent = this;
    l2tp_remote_cookie->parent = this;
    l2tp_secondary_local_cookie->parent = this;

    yang_name = "l2tp-static-attributes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::~L2TpStaticAttributes()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::has_data() const
{
    return l2tp_local_session_id.is_set
	|| l2tp_remote_session_id.is_set
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_data())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_data())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_local_session_id.yfilter)
	|| ydk::is_set(l2tp_remote_session_id.yfilter)
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_operation())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_operation())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_local_session_id.is_set || is_set(l2tp_local_session_id.yfilter)) leaf_name_data.push_back(l2tp_local_session_id.get_name_leafdata());
    if (l2tp_remote_session_id.is_set || is_set(l2tp_remote_session_id.yfilter)) leaf_name_data.push_back(l2tp_remote_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp-local-cookie")
    {
        if(l2tp_local_cookie == nullptr)
        {
            l2tp_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie>();
        }
        return l2tp_local_cookie;
    }

    if(child_yang_name == "l2tp-remote-cookie")
    {
        if(l2tp_remote_cookie == nullptr)
        {
            l2tp_remote_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie>();
        }
        return l2tp_remote_cookie;
    }

    if(child_yang_name == "l2tp-secondary-local-cookie")
    {
        if(l2tp_secondary_local_cookie == nullptr)
        {
            l2tp_secondary_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie>();
        }
        return l2tp_secondary_local_cookie;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp_local_cookie != nullptr)
    {
        children["l2tp-local-cookie"] = l2tp_local_cookie;
    }

    if(l2tp_remote_cookie != nullptr)
    {
        children["l2tp-remote-cookie"] = l2tp_remote_cookie;
    }

    if(l2tp_secondary_local_cookie != nullptr)
    {
        children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id = value;
        l2tp_local_session_id.value_namespace = name_space;
        l2tp_local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id = value;
        l2tp_remote_session_id.value_namespace = name_space;
        l2tp_remote_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-local-cookie" || name == "l2tp-remote-cookie" || name == "l2tp-secondary-local-cookie" || name == "l2tp-local-session-id" || name == "l2tp-remote-session-id")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::L2TpLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{

    yang_name = "l2tp-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::~L2TpLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(higher_value.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "higher-value" || name == "lower-value" || name == "size")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::L2TpRemoteCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{

    yang_name = "l2tp-remote-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::~L2TpRemoteCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(higher_value.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-remote-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "higher-value" || name == "lower-value" || name == "size")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::L2TpSecondaryLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{

    yang_name = "l2tp-secondary-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::~L2TpSecondaryLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(higher_value.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-secondary-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "higher-value" || name == "lower-value" || name == "size")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::MplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "mpls-static-labels"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::~MplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::PseudowireAddress()
    :
    pseudowire_address{YType::str, "pseudowire-address"},
    bandwidth{YType::uint32, "bandwidth"},
    class_{YType::str, "class"},
    source_address{YType::str, "source-address"},
    tag_impose{YType::uint32, "tag-impose"}
    	,
    backup_pseudowires(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires>())
	,l2tp_static(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic>())
	,l2tp_static_attributes(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes>())
	,mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels>())
{
    backup_pseudowires->parent = this;
    l2tp_static->parent = this;
    l2tp_static_attributes->parent = this;
    mpls_static_labels->parent = this;

    yang_name = "pseudowire-address"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::~PseudowireAddress()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_data() const
{
    return pseudowire_address.is_set
	|| bandwidth.is_set
	|| class_.is_set
	|| source_address.is_set
	|| tag_impose.is_set
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_data())
	|| (l2tp_static !=  nullptr && l2tp_static->has_data())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_data())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_address.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tag_impose.yfilter)
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_operation())
	|| (l2tp_static !=  nullptr && l2tp_static->has_operation())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_operation())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-address" <<"[pseudowire-address='" <<pseudowire_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_address.is_set || is_set(pseudowire_address.yfilter)) leaf_name_data.push_back(pseudowire_address.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.yfilter)) leaf_name_data.push_back(tag_impose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudowires")
    {
        if(backup_pseudowires == nullptr)
        {
            backup_pseudowires = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires>();
        }
        return backup_pseudowires;
    }

    if(child_yang_name == "l2tp-static")
    {
        if(l2tp_static == nullptr)
        {
            l2tp_static = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic>();
        }
        return l2tp_static;
    }

    if(child_yang_name == "l2tp-static-attributes")
    {
        if(l2tp_static_attributes == nullptr)
        {
            l2tp_static_attributes = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes>();
        }
        return l2tp_static_attributes;
    }

    if(child_yang_name == "mpls-static-labels")
    {
        if(mpls_static_labels == nullptr)
        {
            mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels>();
        }
        return mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_pseudowires != nullptr)
    {
        children["backup-pseudowires"] = backup_pseudowires;
    }

    if(l2tp_static != nullptr)
    {
        children["l2tp-static"] = l2tp_static;
    }

    if(l2tp_static_attributes != nullptr)
    {
        children["l2tp-static-attributes"] = l2tp_static_attributes;
    }

    if(mpls_static_labels != nullptr)
    {
        children["mpls-static-labels"] = mpls_static_labels;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-address")
    {
        pseudowire_address = value;
        pseudowire_address.value_namespace = name_space;
        pseudowire_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
        tag_impose.value_namespace = name_space;
        tag_impose.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-address")
    {
        pseudowire_address.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tag-impose")
    {
        tag_impose.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudowires" || name == "l2tp-static" || name == "l2tp-static-attributes" || name == "mpls-static-labels" || name == "pseudowire-address" || name == "bandwidth" || name == "class" || name == "source-address" || name == "tag-impose")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowires()
{

    yang_name = "backup-pseudowires"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::~BackupPseudowires()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_data() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudowire")
    {
        for(auto const & c : backup_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire>();
        c->parent = this;
        backup_pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudowire")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    backup_pw_class{YType::str, "backup-pw-class"}
    	,
    backup_mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>())
{
    backup_mpls_static_labels->parent = this;

    yang_name = "backup-pseudowire"; yang_parent_name = "backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::~BackupPseudowire()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| backup_pw_class.is_set
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(backup_pw_class.yfilter)
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (backup_pw_class.is_set || is_set(backup_pw_class.yfilter)) leaf_name_data.push_back(backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-mpls-static-labels")
    {
        if(backup_mpls_static_labels == nullptr)
        {
            backup_mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>();
        }
        return backup_mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_mpls_static_labels != nullptr)
    {
        children["backup-mpls-static-labels"] = backup_mpls_static_labels;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class = value;
        backup_pw_class.value_namespace = name_space;
        backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-mpls-static-labels" || name == "neighbor" || name == "pseudowire-id" || name == "backup-pw-class")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::BackupMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "backup-mpls-static-labels"; yang_parent_name = "backup-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::~BackupMplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::L2TpStatic()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "l2tp-static"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::~L2TpStatic()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpStaticAttributes()
    :
    l2tp_local_session_id{YType::uint32, "l2tp-local-session-id"},
    l2tp_remote_session_id{YType::uint32, "l2tp-remote-session-id"}
    	,
    l2tp_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie>())
	,l2tp_remote_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie>())
	,l2tp_secondary_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie>())
{
    l2tp_local_cookie->parent = this;
    l2tp_remote_cookie->parent = this;
    l2tp_secondary_local_cookie->parent = this;

    yang_name = "l2tp-static-attributes"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::~L2TpStaticAttributes()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::has_data() const
{
    return l2tp_local_session_id.is_set
	|| l2tp_remote_session_id.is_set
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_data())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_data())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_local_session_id.yfilter)
	|| ydk::is_set(l2tp_remote_session_id.yfilter)
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_operation())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_operation())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_local_session_id.is_set || is_set(l2tp_local_session_id.yfilter)) leaf_name_data.push_back(l2tp_local_session_id.get_name_leafdata());
    if (l2tp_remote_session_id.is_set || is_set(l2tp_remote_session_id.yfilter)) leaf_name_data.push_back(l2tp_remote_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp-local-cookie")
    {
        if(l2tp_local_cookie == nullptr)
        {
            l2tp_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie>();
        }
        return l2tp_local_cookie;
    }

    if(child_yang_name == "l2tp-remote-cookie")
    {
        if(l2tp_remote_cookie == nullptr)
        {
            l2tp_remote_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie>();
        }
        return l2tp_remote_cookie;
    }

    if(child_yang_name == "l2tp-secondary-local-cookie")
    {
        if(l2tp_secondary_local_cookie == nullptr)
        {
            l2tp_secondary_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie>();
        }
        return l2tp_secondary_local_cookie;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tp_local_cookie != nullptr)
    {
        children["l2tp-local-cookie"] = l2tp_local_cookie;
    }

    if(l2tp_remote_cookie != nullptr)
    {
        children["l2tp-remote-cookie"] = l2tp_remote_cookie;
    }

    if(l2tp_secondary_local_cookie != nullptr)
    {
        children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id = value;
        l2tp_local_session_id.value_namespace = name_space;
        l2tp_local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id = value;
        l2tp_remote_session_id.value_namespace = name_space;
        l2tp_remote_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-local-cookie" || name == "l2tp-remote-cookie" || name == "l2tp-secondary-local-cookie" || name == "l2tp-local-session-id" || name == "l2tp-remote-session-id")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::L2TpLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{

    yang_name = "l2tp-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::~L2TpLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(higher_value.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "higher-value" || name == "lower-value" || name == "size")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::L2TpRemoteCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{

    yang_name = "l2tp-remote-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::~L2TpRemoteCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(higher_value.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-remote-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "higher-value" || name == "lower-value" || name == "size")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::L2TpSecondaryLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{

    yang_name = "l2tp-secondary-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::~L2TpSecondaryLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(higher_value.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-secondary-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "higher-value" || name == "lower-value" || name == "size")
        return true;
    return false;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::MplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "mpls-static-labels"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::~MplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2Vpn::Neighbor::Neighbor()
    :
    ldp_flap{YType::empty, "ldp-flap"}
{

    yang_name = "neighbor"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Neighbor::~Neighbor()
{
}

bool L2Vpn::Neighbor::has_data() const
{
    return ldp_flap.is_set;
}

bool L2Vpn::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp_flap.yfilter);
}

std::string L2Vpn::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_flap.is_set || is_set(ldp_flap.yfilter)) leaf_name_data.push_back(ldp_flap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-flap")
    {
        ldp_flap = value;
        ldp_flap.value_namespace = name_space;
        ldp_flap.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-flap")
    {
        ldp_flap.yfilter = yfilter;
    }
}

bool L2Vpn::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-flap")
        return true;
    return false;
}

L2Vpn::Pbb::Pbb()
    :
    backbone_source_mac{YType::str, "backbone-source-mac"}
{

    yang_name = "pbb"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Pbb::~Pbb()
{
}

bool L2Vpn::Pbb::has_data() const
{
    return backbone_source_mac.is_set;
}

bool L2Vpn::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_source_mac.yfilter);
}

std::string L2Vpn::Pbb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_source_mac.is_set || is_set(backbone_source_mac.yfilter)) leaf_name_data.push_back(backbone_source_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac = value;
        backbone_source_mac.value_namespace = name_space;
        backbone_source_mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac.yfilter = yfilter;
    }
}

bool L2Vpn::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-source-mac")
        return true;
    return false;
}

L2Vpn::PwRouting::PwRouting()
    :
    pw_routing_global_id{YType::uint32, "pw-routing-global-id"}
    	,
    pw_routing_bgp(std::make_shared<L2Vpn::PwRouting::PwRoutingBgp>())
{
    pw_routing_bgp->parent = this;

    yang_name = "pw-routing"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::PwRouting::~PwRouting()
{
}

bool L2Vpn::PwRouting::has_data() const
{
    return pw_routing_global_id.is_set
	|| (pw_routing_bgp !=  nullptr && pw_routing_bgp->has_data());
}

bool L2Vpn::PwRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_routing_global_id.yfilter)
	|| (pw_routing_bgp !=  nullptr && pw_routing_bgp->has_operation());
}

std::string L2Vpn::PwRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::PwRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::PwRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_routing_global_id.is_set || is_set(pw_routing_global_id.yfilter)) leaf_name_data.push_back(pw_routing_global_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::PwRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-routing-bgp")
    {
        if(pw_routing_bgp == nullptr)
        {
            pw_routing_bgp = std::make_shared<L2Vpn::PwRouting::PwRoutingBgp>();
        }
        return pw_routing_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::PwRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pw_routing_bgp != nullptr)
    {
        children["pw-routing-bgp"] = pw_routing_bgp;
    }

    return children;
}

void L2Vpn::PwRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-routing-global-id")
    {
        pw_routing_global_id = value;
        pw_routing_global_id.value_namespace = name_space;
        pw_routing_global_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::PwRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-routing-global-id")
    {
        pw_routing_global_id.yfilter = yfilter;
    }
}

bool L2Vpn::PwRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-routing-bgp" || name == "pw-routing-global-id")
        return true;
    return false;
}

L2Vpn::PwRouting::PwRoutingBgp::PwRoutingBgp()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_route_distinguisher(std::make_shared<L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher>())
{
    evpn_route_distinguisher->parent = this;

    yang_name = "pw-routing-bgp"; yang_parent_name = "pw-routing"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::PwRouting::PwRoutingBgp::~PwRoutingBgp()
{
}

bool L2Vpn::PwRouting::PwRoutingBgp::has_data() const
{
    return enable.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data());
}

bool L2Vpn::PwRouting::PwRoutingBgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation());
}

std::string L2Vpn::PwRouting::PwRoutingBgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/pw-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::PwRouting::PwRoutingBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-routing-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::PwRouting::PwRoutingBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::PwRouting::PwRoutingBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::PwRouting::PwRoutingBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    return children;
}

void L2Vpn::PwRouting::PwRoutingBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::PwRouting::PwRoutingBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::PwRouting::PwRoutingBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "enable")
        return true;
    return false;
}

L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "pw-routing-bgp"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/pw-routing/pw-routing-bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

L2Vpn::Snmp::Snmp()
    :
    mib(std::make_shared<L2Vpn::Snmp::Mib>())
{
    mib->parent = this;

    yang_name = "snmp"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Snmp::~Snmp()
{
}

bool L2Vpn::Snmp::has_data() const
{
    return (mib !=  nullptr && mib->has_data());
}

bool L2Vpn::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (mib !=  nullptr && mib->has_operation());
}

std::string L2Vpn::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<L2Vpn::Snmp::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void L2Vpn::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib")
        return true;
    return false;
}

L2Vpn::Snmp::Mib::Mib()
    :
    mib_interface(std::make_shared<L2Vpn::Snmp::Mib::MibInterface>())
	,mib_pseudowire(std::make_shared<L2Vpn::Snmp::Mib::MibPseudowire>())
{
    mib_interface->parent = this;
    mib_pseudowire->parent = this;

    yang_name = "mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Snmp::Mib::~Mib()
{
}

bool L2Vpn::Snmp::Mib::has_data() const
{
    return (mib_interface !=  nullptr && mib_interface->has_data())
	|| (mib_pseudowire !=  nullptr && mib_pseudowire->has_data());
}

bool L2Vpn::Snmp::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (mib_interface !=  nullptr && mib_interface->has_operation())
	|| (mib_pseudowire !=  nullptr && mib_pseudowire->has_operation());
}

std::string L2Vpn::Snmp::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Snmp::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Snmp::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-interface")
    {
        if(mib_interface == nullptr)
        {
            mib_interface = std::make_shared<L2Vpn::Snmp::Mib::MibInterface>();
        }
        return mib_interface;
    }

    if(child_yang_name == "mib-pseudowire")
    {
        if(mib_pseudowire == nullptr)
        {
            mib_pseudowire = std::make_shared<L2Vpn::Snmp::Mib::MibPseudowire>();
        }
        return mib_pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Snmp::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mib_interface != nullptr)
    {
        children["mib-interface"] = mib_interface;
    }

    if(mib_pseudowire != nullptr)
    {
        children["mib-pseudowire"] = mib_pseudowire;
    }

    return children;
}

void L2Vpn::Snmp::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Snmp::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Snmp::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-interface" || name == "mib-pseudowire")
        return true;
    return false;
}

L2Vpn::Snmp::Mib::MibInterface::MibInterface()
    :
    format(std::make_shared<L2Vpn::Snmp::Mib::MibInterface::Format>())
{
    format->parent = this;

    yang_name = "mib-interface"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Snmp::Mib::MibInterface::~MibInterface()
{
}

bool L2Vpn::Snmp::Mib::MibInterface::has_data() const
{
    return (format !=  nullptr && format->has_data());
}

bool L2Vpn::Snmp::Mib::MibInterface::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string L2Vpn::Snmp::Mib::MibInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Snmp::Mib::MibInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Snmp::Mib::MibInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::MibInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<L2Vpn::Snmp::Mib::MibInterface::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Snmp::Mib::MibInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void L2Vpn::Snmp::Mib::MibInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Snmp::Mib::MibInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Snmp::Mib::MibInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

L2Vpn::Snmp::Mib::MibInterface::Format::Format()
    :
    external_interface_format{YType::empty, "external-interface-format"}
{

    yang_name = "format"; yang_parent_name = "mib-interface"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Snmp::Mib::MibInterface::Format::~Format()
{
}

bool L2Vpn::Snmp::Mib::MibInterface::Format::has_data() const
{
    return external_interface_format.is_set;
}

bool L2Vpn::Snmp::Mib::MibInterface::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_interface_format.yfilter);
}

std::string L2Vpn::Snmp::Mib::MibInterface::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/mib-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Snmp::Mib::MibInterface::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Snmp::Mib::MibInterface::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_interface_format.is_set || is_set(external_interface_format.yfilter)) leaf_name_data.push_back(external_interface_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::MibInterface::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Snmp::Mib::MibInterface::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Snmp::Mib::MibInterface::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-interface-format")
    {
        external_interface_format = value;
        external_interface_format.value_namespace = name_space;
        external_interface_format.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Snmp::Mib::MibInterface::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-interface-format")
    {
        external_interface_format.yfilter = yfilter;
    }
}

bool L2Vpn::Snmp::Mib::MibInterface::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interface-format")
        return true;
    return false;
}

L2Vpn::Snmp::Mib::MibPseudowire::MibPseudowire()
    :
    statistics{YType::empty, "statistics"}
{

    yang_name = "mib-pseudowire"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Snmp::Mib::MibPseudowire::~MibPseudowire()
{
}

bool L2Vpn::Snmp::Mib::MibPseudowire::has_data() const
{
    return statistics.is_set;
}

bool L2Vpn::Snmp::Mib::MibPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string L2Vpn::Snmp::Mib::MibPseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Snmp::Mib::MibPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Snmp::Mib::MibPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::MibPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Snmp::Mib::MibPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Snmp::Mib::MibPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Snmp::Mib::MibPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool L2Vpn::Snmp::Mib::MibPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

L2Vpn::Utility::Utility()
    :
    logging(std::make_shared<L2Vpn::Utility::Logging>())
{
    logging->parent = this;

    yang_name = "utility"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Utility::~Utility()
{
}

bool L2Vpn::Utility::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool L2Vpn::Utility::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string L2Vpn::Utility::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Utility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Utility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Utility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<L2Vpn::Utility::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Utility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void L2Vpn::Utility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Utility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Utility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

L2Vpn::Utility::Logging::Logging()
    :
    bridge_domain_state_change{YType::empty, "bridge-domain-state-change"},
    nsr_state_change{YType::empty, "nsr-state-change"},
    pseudowire_state_change{YType::empty, "pseudowire-state-change"},
    pwhe_replication_state_change{YType::empty, "pwhe-replication-state-change"},
    vfi{YType::empty, "vfi"}
{

    yang_name = "logging"; yang_parent_name = "utility"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Utility::Logging::~Logging()
{
}

bool L2Vpn::Utility::Logging::has_data() const
{
    return bridge_domain_state_change.is_set
	|| nsr_state_change.is_set
	|| pseudowire_state_change.is_set
	|| pwhe_replication_state_change.is_set
	|| vfi.is_set;
}

bool L2Vpn::Utility::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_state_change.yfilter)
	|| ydk::is_set(nsr_state_change.yfilter)
	|| ydk::is_set(pseudowire_state_change.yfilter)
	|| ydk::is_set(pwhe_replication_state_change.yfilter)
	|| ydk::is_set(vfi.yfilter);
}

std::string L2Vpn::Utility::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/utility/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Utility::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Utility::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_state_change.is_set || is_set(bridge_domain_state_change.yfilter)) leaf_name_data.push_back(bridge_domain_state_change.get_name_leafdata());
    if (nsr_state_change.is_set || is_set(nsr_state_change.yfilter)) leaf_name_data.push_back(nsr_state_change.get_name_leafdata());
    if (pseudowire_state_change.is_set || is_set(pseudowire_state_change.yfilter)) leaf_name_data.push_back(pseudowire_state_change.get_name_leafdata());
    if (pwhe_replication_state_change.is_set || is_set(pwhe_replication_state_change.yfilter)) leaf_name_data.push_back(pwhe_replication_state_change.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Utility::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Utility::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Utility::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-state-change")
    {
        bridge_domain_state_change = value;
        bridge_domain_state_change.value_namespace = name_space;
        bridge_domain_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-change")
    {
        nsr_state_change = value;
        nsr_state_change.value_namespace = name_space;
        nsr_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-state-change")
    {
        pseudowire_state_change = value;
        pseudowire_state_change.value_namespace = name_space;
        pseudowire_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-replication-state-change")
    {
        pwhe_replication_state_change = value;
        pwhe_replication_state_change.value_namespace = name_space;
        pwhe_replication_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Utility::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-state-change")
    {
        bridge_domain_state_change.yfilter = yfilter;
    }
    if(value_path == "nsr-state-change")
    {
        nsr_state_change.yfilter = yfilter;
    }
    if(value_path == "pseudowire-state-change")
    {
        pseudowire_state_change.yfilter = yfilter;
    }
    if(value_path == "pwhe-replication-state-change")
    {
        pwhe_replication_state_change.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
}

bool L2Vpn::Utility::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-state-change" || name == "nsr-state-change" || name == "pseudowire-state-change" || name == "pwhe-replication-state-change" || name == "vfi")
        return true;
    return false;
}


}
}

